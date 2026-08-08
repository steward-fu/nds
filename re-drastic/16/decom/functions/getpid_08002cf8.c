/*
 * Ghidra decompilation
 *
 * Function : getpid
 * Address  : 08002cf8
 * Program  : drastic16
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getpid(void)

{
  __pid_t _Var1;
  
                    /* WARNING: Treating indirect jump as call */
  _Var1 = (*(code *)(undefined *)0x0)();
  return _Var1;
}


