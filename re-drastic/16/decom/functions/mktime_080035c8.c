/*
 * Ghidra decompilation
 *
 * Function : mktime
 * Address  : 080035c8
 * Program  : drastic16
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t mktime(tm *__tp)

{
  time_t tVar1;
  
                    /* WARNING: Treating indirect jump as call */
  tVar1 = (*(code *)(undefined *)0x0)();
  return tVar1;
}


