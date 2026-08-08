/*
 * Ghidra decompilation
 *
 * Function : _setjmp
 * Address  : 080048d8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _setjmp(__jmp_buf_tag *__env)

{
  int iVar1;
  
  iVar1 = _setjmp(__env);
  return iVar1;
}


