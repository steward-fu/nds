/*
 * Ghidra decompilation
 *
 * Function : _setjmp
 * Address  : 08003568
 * Program  : drastic16
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _setjmp(__jmp_buf_tag *__env)

{
  int iVar1;
  
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)(undefined *)0x0)();
  return iVar1;
}


