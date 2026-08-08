/*
 * Ghidra decompilation
 *
 * Function : __errno_location
 * Address  : 080034fc
 * Program  : drastic16
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
                    /* WARNING: Treating indirect jump as call */
  piVar1 = (int *)(*(code *)(undefined *)0x0)();
  return piVar1;
}


