;------------------------------------------------------------------------------
;
; Copyright (c) 2010 - 2025, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   AsmFuncs.nasm
;
;------------------------------------------------------------------------------

;
; InterruptProcess()
;
extern ASM_PFX(GenericInterruptProcess)

global ASM_PFX(GenericInterruptHandle)

SECTION .data

SECTION .text

ASM_PFX(GenericInterruptHandle):
    cli

    push    ebp
    mov     ebp, esp        ; save esp in ebp

    ; store UINT32  Edi, Esi, Ebp, Ebx, Edx, Ecx, Eax;
    push    eax
    push    ebx
    push    ecx
    push    edx
    push    dword [ebp]  ; EBP
    push    esi
    push    edi


    ; call the C interrupt process function
    call    ASM_PFX(GenericInterruptProcess)

    ;; restore general register
    pop     edi
    pop     esi
    pop     dword [ebp]         ; save updated ebp
    pop     edx
    pop     ecx
    pop     ebx
    pop     eax

    mov     esp, ebp
    pop     ebp         ; restore ebp maybe updated

    iretd

