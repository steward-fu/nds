/*
 * Ghidra decompilation
 *
 * Function : clock
 * Address  : 08002dc4
 * Program  : drastic16
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

clock_t clock(void)

{
  clock_t cVar1;
  
                    /* WARNING: Treating indirect jump as call */
  cVar1 = (*(code *)(undefined *)0x0)();
  return cVar1;
}


