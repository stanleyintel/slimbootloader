/** @file

  Copyright (c) 2020, Intel Corporation. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#include "HelloWorld.h"


#pragma GCC push_options
#pragma GCC optimize ("O0")
VOID doit() {
  UINT32 var;
  UINT32 src = 0xdeadbeef;

  asm volatile ("push %%eax\n\t"
                "mov %1, %%eax\n\t"
                "mov %%eax, %0\n\t"
                "pop %%eax\n\t"
                : "=r" (var)
                : "r" (src)
                : "eax", "ebx", "ecx", "edx");

  DEBUG ((DEBUG_INIT, "@@@@ test 0 : just a test: eax0: %08x\n", var));
}

/**
  Payload main entry.

  @param  Param           parameter passed from SwitchStack().
  @param  PldBase         payload base passed from SwitchStack().

**/
VOID
EFIAPI
PayloadMain (
  IN  VOID             *Param,
  IN  VOID             *PldBase
  )
{
  UINT8      Key;

  DEBUG ((DEBUG_INFO, "\n\n==================== Hello World ====================\n\n"));
  doit();

  Key = 0;
  while (Key != 0x1B) {
    if (ConsolePoll ()) {
      if (ConsoleRead (&Key, 1) > 0) {
        if ((Key >= 0x20) && (Key < 0x7F)) {
          ConsolePrint("Key '%c' pressed !\n", Key);
        }
      }
    }
  }

  DEBUG ((DEBUG_INFO, "\nExit\n"));
  CpuDeadLoop ();
}
