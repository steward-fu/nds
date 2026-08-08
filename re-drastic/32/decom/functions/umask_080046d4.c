/*
 * Ghidra decompilation
 *
 * Function : umask
 * Address  : 080046d4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__mode_t umask(__mode_t __mask)

{
  __mode_t _Var1;
  
  _Var1 = umask(__mask);
  return _Var1;
}


