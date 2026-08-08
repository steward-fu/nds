/*
 * Ghidra decompilation
 *
 * Function : signal
 * Address  : 08002c74
 * Program  : drastic16
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
  __sighandler_t p_Var1;
  
                    /* WARNING: Treating indirect jump as call */
  p_Var1 = (__sighandler_t)(*(code *)(undefined *)0x0)();
  return p_Var1;
}


