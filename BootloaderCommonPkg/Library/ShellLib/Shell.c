/** @file
  A minimal command-line shell.

  Copyright (c) 2017 - 2020, Intel Corporation. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#include <Library/ShellLib.h>
#include <Library/ConsoleInLib.h>
#include <Library/ConsoleOutLib.h>
#include <Library/BaseMemoryLib.h>
#include <Library/DebugLib.h>
#include <Library/TimerLib.h>
#include <Library/MemoryAllocationLib.h>
#include <Library/SortLib.h>
#include <Library/IoLib.h>
#include "Shell.h"
#include "History.h"
#include "Parsing.h"
#include "ShellCmds.h"

#define ESC   '\x1b'

/**
  Wait for command line input from the serial port.

  @param[in]  Shell        shell instance
  @param[out] Buffer       buffer to receive command line
  @param[in]  BufferSize   size (in bytes) of the buffer

  @retval EFI_SUCCESS
  @retval EFI_BUFFER_TOO_SMALL
  @retval EFI_TIMEOUT

**/
STATIC
EFI_STATUS
ReadShellCommand (
  IN        SHELL  *Shell,
  OUT       CHAR16 *Buffer,
  IN  CONST UINTN   BufferSize
  )
{
  UINTN   Count;
  UINTN   CurrCount;
  UINT8   Char;
  UINTN   HistoryLineLen;
  CHAR16  HistoryLine[MAX_COMMAND_LINE_LEN];

  Count = 0;

  ASSERT (Buffer != NULL);
  ASSERT (BufferSize > sizeof (CHAR16));

  while (1) {
    // Check for buffer overflow
    if (Count >= (BufferSize / sizeof (CHAR16) - 1)) {
      Buffer[0] = CHAR_NULL; // Terminate String
      return EFI_BUFFER_TOO_SMALL;
    }

    // Get next character from serial port
    Char = 0;
    if (ConsoleRead (&Char, 1) < 1) {
      return EFI_TIMEOUT;
    }

    // Check for end of line
    if ((Char == '\r') || (Char == '\n')) {
      Buffer[Count] = CHAR_NULL; // Terminate String
      break;
    }

    // Check for backspace/delete
    if ((Char == 0x7f) || (Char == '\b')) {
      if (Count > 0) {
        // Move cursor back 1 char and clear
        ShellPrint (L"\b \b");
        Count--;
      }
      continue;
    }

    // Handle key codes of the form: ESC [ x
    if (Char == ESC) {
      // Expect '[' character
      if (ConsoleRead (&Char, 1) < 1) {
        return EFI_TIMEOUT;
      }
      if (Char == '[') {
        // Expect command
        if (ConsoleRead (&Char, 1) < 1) {
          return EFI_TIMEOUT;
        }

        HistoryLineLen = 0;
        if (Char == 'A') { // Up
          HistoryLineLen = HistoryUp (Shell, HistoryLine);
        } else if (Char == 'B') { // Down
          HistoryLineLen = HistoryDown (Shell, HistoryLine);
        } else if (Char == 'C') { // Right
        } else if (Char == 'D') { // Left
        }


        CurrCount = Count;
        while (Count-- > 0) {
          ShellPrint (L"\b");
        }
        if (HistoryLineLen > 0) {
          StrCpyS (Buffer, Shell->CommandLineMaxLen, HistoryLine);
          ShellPrint (L"%s", Buffer);
        }
        if (CurrCount > HistoryLineLen) {
          CurrCount = CurrCount - HistoryLineLen;

          Count = CurrCount;
          while (Count-- > 0) {
            ShellPrint (L" ");
          }

          Count = CurrCount;
          while (Count-- > 0) {
            ShellPrint (L"\b");
          }
        }
        Count = HistoryLineLen;

        // Key code consumed, continue getting input
        continue;
      }
    }

    // Echo character back and save character in buffer
    ShellPrint (L"%c", Char);
    Buffer[Count++] = Char;
  }

  ShellPrint (L"\n");
  TrimSpaces (&Buffer);

  return EFI_SUCCESS;
}


/**
  Read a line of input from the serial port.

  @param[in]  Shell        shell instance
  @param[out] Buffer       buffer to receive command line
  @param[in]  BufferSize   size (in bytes) of the buffer

  @retval EFI_SUCCESS
  @retval EFI_BUFFER_TOO_SMALL
  @retval EFI_TIMEOUT

**/
EFI_STATUS
ShellReadLine (
  IN        SHELL  *Shell,
  OUT       CHAR16 *Buffer,
  IN  CONST UINTN   BufferSize
  )
{
  UINTN Count;
  UINT8 Char;

  Count = 0;

  ASSERT (Buffer != NULL);
  ASSERT (BufferSize > sizeof (CHAR16));

  while (1) {
    // Check for buffer overflow
    if (Count >= (BufferSize / sizeof (CHAR16) - 1)) {
      Buffer[0] = CHAR_NULL; // Terminate String
      return EFI_BUFFER_TOO_SMALL;
    }

    // Get next character from serial port
    Char = 0;
    if (ConsoleRead (&Char, 1) < 1) {
      return EFI_TIMEOUT;
    }

    // Check for end of line
    if ((Char == '\r') || (Char == '\n')) {
      Buffer[Count] = CHAR_NULL; // Terminate String
      break;
    }

    // Check for backspace/delete
    if ((Char == 0x7f) || (Char == '\b')) {
      if (Count > 0) {
        // Move cursor back 1 char and clear
        ShellPrint (L"\b \b");
        Count--;
      }
      continue;
    }

    // Handle key codes of the form: ESC [ x
    if (Char == ESC) {
      // Expect '[' character
      if (ConsoleRead (&Char, 1) < 1) {
        return EFI_TIMEOUT;
      }
      if (Char == '[') {
        // Expect command
        if (ConsoleRead (&Char, 1) < 1) {
          return EFI_TIMEOUT;
        }

        if (Char == 'A') { // Up
        } else if (Char == 'B') { // Down
        } else if (Char == 'C') { // Right
        } else if (Char == 'D') { // Left
        }

        // Key code consumed, continue getting input
        continue;
      }
    }

    // Echo character back and save character in buffer
    ShellPrint (L"%c", Char);
    Buffer[Count++] = Char;
  }

  ShellPrint (L"\n");
  TrimSpaces (&Buffer);

  return EFI_SUCCESS;
}

/**
  Read a UINT value from the serial port.

  @param[in]  Shell        shell instance
  @param[out] Buffer       buffer to receive command line
  @param[in]  BufferSize   size (in bytes) of the buffer
  @param[out] IsHex        determine if the UINT is hex or decimal format

  @retval EFI_SUCCESS
  @retval EFI_BUFFER_TOO_SMALL
  @retval EFI_TIMEOUT

**/
EFI_STATUS
ShellReadUintn (
  IN        SHELL   *Shell,
  OUT       CHAR16  *Buffer,
  IN  CONST UINTN    BufferSize,
  OUT       BOOLEAN *IsHex
  )
{
  UINTN Count;
  UINT8 Char;

  Count = 0;

  ASSERT (Buffer != NULL);
  ASSERT (BufferSize > sizeof (CHAR16));

  *IsHex = FALSE;
  ZeroMem (Buffer, BufferSize);

  while (1) {
    // Check for buffer overflow
    if (Count >= (BufferSize / sizeof (CHAR16) - 1)) {
      return EFI_BUFFER_TOO_SMALL;
    }

    // Get next character from serial port
    Char = 0;
    if (ConsoleRead (&Char, 1) < 1) {
      return EFI_TIMEOUT;
    }

    if ((Char == '\r') || (Char == '\n')) {
      // Check for end of line
      Buffer[Count] = CHAR_NULL; // Terminate String
      break;
    } else if ((Char == 0x7f) || (Char == '\b')) {
      // Check for backspace/delete
      if (Count > 0) {
        if (Buffer[Count - 1] == 'x' || Buffer[Count - 1] == 'X') {
          *IsHex = FALSE;
        }
        // Move cursor back 1 char and clear
        ShellPrint (L"\b \b");
        Count--;
      }
      continue;
    } else if (Char == 'x' || Char == 'X') {
      if (Count != 1) {
        continue;
      }
      *IsHex = TRUE;
    } else if (Char >= '0' && Char <= '9') {
      ;
    } else if (*IsHex && ((Char >= 'a' && Char <= 'f') || (Char >= 'A' && Char <= 'F'))) {
      ;
    } else {
      continue;
    }

    // Echo character back and save character in buffer
    ShellPrint (L"%c", Char);
    Buffer[Count++] = Char;
  }

  ShellPrint (L"\n");
  TrimSpaces (&Buffer);

  return EFI_SUCCESS;
}

/**
  Find shell command by name.

  @param[in]  Shell        shell instance
  @param[in]  Name         name of command
  @param[in]  Ptr          pointer to string pointer

  @retval EFI_SUCCESS
  @retval EFI_NOT_FOUND

**/
STATIC
EFI_STATUS
FindShellCommand (
  IN       SHELL         *Shell,
  IN CONST CHAR16        *Name,
  IN CONST SHELL_COMMAND **Ptr
  )
{
  LIST_ENTRY                *Link;
  SHELL_COMMAND_LIST_ENTRY  *Entry;
  LIST_ENTRY                *EntryList;

  //
  // Add '?' alias for help
  //
  if (Name[0] == '?') {
    Name = L"help";
  }

  EntryList = &Shell->CommandEntryList;
  for (Link = EntryList->ForwardLink; Link != EntryList; Link = Link->ForwardLink) {
    Entry = CR (Link, SHELL_COMMAND_LIST_ENTRY, Link, SHELL_COMMAND_LIST_ENTRY_SIGNATURE);
    if (StrCmp (Name, Entry->ShellCommand->Name) == 0) {
      *Ptr = Entry->ShellCommand;
      return EFI_SUCCESS;
    }
  }

  return EFI_NOT_FOUND;
}

/**
  Process and run a command line.

  @param[in] Shell        shell instance
  @param[in] CmdLine      command line to parse

  @retval EFI_SUCCESS     command was completed

**/
STATIC
EFI_STATUS
RunShellCommand (
  IN       SHELL  *Shell,
  IN CONST CHAR16 *CmdLine
  )
{
  CHAR16              Buf[MAX_COMMAND_LINE_LEN];
  CHAR16              *Ptr;
  CONST CHAR16        *Walker;
  UINTN               Index, Count, BufRemaining;
  EFI_STATUS          Status;
  CONST SHELL_COMMAND *Cmd;
  CHAR16              *Argv[8]; // FIXME: Use allocator once that's available

  // Parse the command line parameters
  BufRemaining = Shell->CommandLineMaxLen * sizeof(CHAR16);
  Ptr          = Buf;
  Walker       = CmdLine;

  for (Count = 0; Walker != NULL && *Walker != CHAR_NULL; Count++) {
    Status = GetNextParameter (&Walker, &Ptr, BufRemaining, TRUE);
    if (EFI_ERROR (Status)) {
      break;
    }
    BufRemaining -= StrSize (Ptr);
    Ptr          += StrLen (Ptr) + 1;
  }

  if (Count == 0) {
    return EFI_SUCCESS;
  }

  if (Count > (sizeof (Argv) / sizeof (Argv[0]))) {
    ShellPrint (L"Invalid command (try help)\n");
    return EFI_OUT_OF_RESOURCES;
  }

  for (Index = 0, Ptr = Buf; Index < Count; Index++) {
    Argv[Index]  = Ptr;
    Ptr     += StrLen (Ptr) + 1;
  }

  // Locate and execute command
  Cmd = NULL;
  Status = FindShellCommand (Shell, Argv[0], &Cmd);
  if (EFI_ERROR (Status)) {
    if (Status == EFI_NOT_FOUND) {
      ShellPrint (L"Command not found (try help)\n");
    }
  } else {
    ASSERT (Cmd);
    Status = Cmd->Entry (Shell, Count, Argv);
  }

  return Status;
}

/**
  Prompt user for command, receive command, run command.

  @param[in]  Shell        shell instance

  @retval EFI_SUCCESS
  @retval RETURN_ABORTED

**/
STATIC
EFI_STATUS
ShellPrompt (
  IN SHELL *Shell
  )
{
  CHAR16     CommandLine[MAX_COMMAND_LINE_LEN];
  EFI_STATUS Status;

  ASSERT (Shell != NULL);
  ShellPrint (L"\nShell> ");

  Status = ReadShellCommand (Shell, CommandLine, Shell->CommandLineMaxLen * sizeof (CHAR16));
  if (EFI_ERROR (Status)) {
    return Status;
  }

  HistoryAdd (Shell, CommandLine);

  return RunShellCommand (Shell, CommandLine);
}

/**
  The function is called by PerformInsertionSortList to sort Shell commands by its name.

  @param[in] Buffer1         The pointer to first list entry.
  @param[in] Buffer2         The pointer to second list entry.

  @retval 0                  Buffer1 name is less than Buffer2 name.
  @retval 1                  Buffer1 name is greater than or equal to Buffer2 name.

**/
INTN
EFIAPI
CompareCommandEntry (
  IN CONST VOID                 *Buffer1,
  IN CONST VOID                 *Buffer2
  )
{
  SHELL_COMMAND_LIST_ENTRY  *NewEntry;
  SHELL_COMMAND_LIST_ENTRY  *CurrEntry;

  NewEntry  = BASE_CR (Buffer1, SHELL_COMMAND_LIST_ENTRY, Link);
  CurrEntry = BASE_CR (Buffer2, SHELL_COMMAND_LIST_ENTRY, Link);

  //
  // Ascending Order
  //
  return StrCmp (NewEntry->ShellCommand->Name, CurrEntry->ShellCommand->Name) >= 0 ? 1: 0;
}

/**
  Register a Shell Command

  @param[in]  Shell        Shell Context
  @param[in]  ShellCommand A Shell Command to be registered

  @retval EFI_SUCCESS
  @retval EFI_OUT_OF_RESOURCES
**/
EFI_STATUS
EFIAPI
ShellCommandRegister (
  IN  SHELL                 *Shell,
  IN  CONST SHELL_COMMAND   *ShellCommand
  )
{
  SHELL_COMMAND_LIST_ENTRY  *Entry;
  LIST_ENTRY                *EntryList;

  Entry = (SHELL_COMMAND_LIST_ENTRY *)AllocateZeroPool (sizeof (SHELL_COMMAND_LIST_ENTRY));
  if (Entry == NULL) {
    return EFI_OUT_OF_RESOURCES;
  }
  InitializeListHead (&Entry->Link);
  Entry->ShellCommand = ShellCommand;
  Entry->Signature = SHELL_COMMAND_LIST_ENTRY_SIGNATURE;

  EntryList = &Shell->CommandEntryList;
  PerformInsertionSortList (EntryList, &Entry->Link, CompareCommandEntry);

  return EFI_SUCCESS;
}

/**
  Unregister all Shell commands

  @param[in]  Shell        Shell Context

  @retval EFI_SUCCESS

**/
EFI_STATUS
EFIAPI
ShellCommandUnRegisterAll (
  IN  SHELL                 *Shell
  )
{
  LIST_ENTRY                *Link;
  SHELL_COMMAND_LIST_ENTRY  *Entry;
  LIST_ENTRY                *EntryList;

  EntryList = &Shell->CommandEntryList;
  for (Link = EntryList->ForwardLink; Link != EntryList;) {
    Entry = CR (Link, SHELL_COMMAND_LIST_ENTRY, Link, SHELL_COMMAND_LIST_ENTRY_SIGNATURE);
    Link = Link->ForwardLink;
    FreePool (Entry);
  }

  return EFI_SUCCESS;
}


#define PIC1_COMMAND 0x20
#define PIC1_DATA    0x21
#define PIC2_COMMAND 0xA0
#define PIC2_DATA    0xA1

#define ICW1_INIT    0x11
#define ICW4_8086    0x01

VOID RemapPIC (
  IN VOID
  )
{
    // Start initialization sequence
    IoWrite8(PIC1_COMMAND, ICW1_INIT);
    IoWrite8(PIC2_COMMAND, ICW1_INIT);

    // Set vector offset
    IoWrite8(PIC1_DATA, 32); // Master PIC vector offset
    IoWrite8(PIC2_DATA, 40); // POC, just use the same vector

    // Define PIC cascade
    IoWrite8(PIC1_DATA, 0x04); // Tell Master PIC that Slave PIC is at IRQ2
    IoWrite8(PIC2_DATA, 0x02); // Tell Slave PIC its cascade identity

    // Set environment info
    IoWrite8(PIC1_DATA, ICW4_8086);
    IoWrite8(PIC2_DATA, ICW4_8086);

    // Restore masks (if needed)
    IoWrite8(PIC1_DATA, 0xFF); // Mask all interrupts on master PIC
    IoWrite8(PIC2_DATA, 0xFF); // Mask all interrupts on slave PIC
}


VOID Start8254() {
    UINT32 *regHpet;

    RemapPIC();

    // Send command byte to PIT
    IoWrite8(0x43, 0x30);

    // LSB then HSB
    IoWrite8(0x40, 0);
    IoWrite8(0x40, 0x10);

    IoWrite8(0x43, 0xd2); // read back the status and count of counter 0

    IoWrite8(0x21, 0xFE); // Mask all except IRQ0

    // if using legacy replacement routing (LEG_RT_CFG), 8254 will not cause any interrupts.
    // so, ensure LEG_RT_CFG is not enabled
    regHpet = (UINT32 *) 0xFED00010;
    DEBUG((DEBUG_INFO, "HPET GEN_CFG: %x (original)\n", *regHpet));
    *regHpet = (*regHpet)&(~BIT1);
    DEBUG((DEBUG_INFO, "HPET GEN_CFG: %x (update)\n", *regHpet));

    IoWrite8(PIC1_DATA, 0);
    IoWrite8(PIC2_DATA, 0);
}

VOID Stop8254() {

    UINT8 mask;

    // Read the current mask from the PIC
    mask = IoRead8(PIC1_DATA);

    // Set the mask for IRQ0 (bit 0)
    mask |= 0x01;

    // Write the updated mask back to the PIC
    IoWrite8(PIC1_DATA, mask);

    // Send command byte to PIT to set mode 0 (interrupt on terminal count)
    IoWrite8(0x43, 0x30);

    IoWrite8(0x40, 0x00); // LSB
    IoWrite8(0x40, 0x00); // MSB
}
/**
  Begin a run-time interactive shell.

  @param[in]  Timeout       seconds to wait for input before returning (0 for no timeout)

  @retval EFI_SUCCESS

**/
EFI_STATUS
EFIAPI
Shell (
  IN       UINTN           Timeout
  )
{
  EFI_STATUS  Status;
  BOOLEAN     Start;
  UINTN       Index;
  UINTN       Index1;
  SHELL       Shell;
  UINT8       Buffer;

  Start8254 ();

  ZeroMem (&Shell, sizeof (Shell));
  InitializeListHead (&Shell.CommandEntryList);

  Shell.CommandLineMaxLen = FeaturePcdGet (PcdMiniShellEnabled) ? \
                            MAX_COMMAND_LINE_LEN_MINI_SHELL : MAX_COMMAND_LINE_LEN;

  LoadShellCommands (&Shell);
  Shell.ShouldExit = FALSE;

  if (Timeout != 0) {
    ShellPrint (L"\n");
    while (ConsolePoll ()) {
      ConsoleRead (&Buffer, 1);
    }
    for (Index = Timeout; Index > 0; Index--) {
      ShellPrint (L"Press any key within %d second(s) to enter the command shell", Index);
      for (Index1 = 0; Index1 < 10; Index1++) {
        Start = ConsolePoll ();
        if (Start) {
          break;
        }
        MicroSecondDelay (100 * 1000);
      }
      ShellPrint(L"\r");
      if (Start) {
        break;
      }
    }
    ShellPrint (L"\n");
    if (!Start) {
      Status = EFI_ABORTED;
      goto Exit;
    }
  }

  HistoryInit (&Shell, TRUE);

  while (! (Shell.ShouldExit)) {
    ShellPrompt (&Shell);
  }

  HistoryInit (&Shell, FALSE);

  Status = EFI_SUCCESS;

Exit:
  Stop8254 ();

  ShellCommandUnRegisterAll (&Shell);

  return Status;
}
