/*
 * Ghidra decompilation
 *
 * Function : raise
 * Address  : 080032b0
 * Program  : drastic16
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
  int iVar1;
  
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)(undefined *)0x0)();
  return iVar1;
}


