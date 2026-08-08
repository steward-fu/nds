/*
 * Ghidra decompilation
 *
 * Function : signal
 * Address  : 08003c78
 * Program  : drastic
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
  __sighandler_t p_Var1;
  
  p_Var1 = signal(__sig,__handler);
  return p_Var1;
}


