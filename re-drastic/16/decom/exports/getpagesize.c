/*
 * Ghidra decompilation
 *
 * Function : getpagesize
 * Address  : 080031b4
 * Program  : drastic16
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getpagesize(void)

{
  int iVar1;
  
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)(undefined *)0x0)();
  return iVar1;
}


