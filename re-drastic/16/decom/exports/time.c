/*
 * Ghidra decompilation
 *
 * Function : time
 * Address  : 080034d8
 * Program  : drastic16
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t time(time_t *__timer)

{
  time_t tVar1;
  
                    /* WARNING: Treating indirect jump as call */
  tVar1 = (*(code *)(undefined *)0x0)();
  return tVar1;
}


