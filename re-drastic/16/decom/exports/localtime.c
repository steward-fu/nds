/*
 * Ghidra decompilation
 *
 * Function : localtime
 * Address  : 080030e8
 * Program  : drastic16
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * localtime(time_t *__timer)

{
  tm *ptVar1;
  
                    /* WARNING: Treating indirect jump as call */
  ptVar1 = (tm *)(*(code *)(undefined *)0x0)();
  return ptVar1;
}


