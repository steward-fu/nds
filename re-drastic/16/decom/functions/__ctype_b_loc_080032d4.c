/*
 * Ghidra decompilation
 *
 * Function : __ctype_b_loc
 * Address  : 080032d4
 * Program  : drastic16
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ushort ** __ctype_b_loc(void)

{
  ushort **ppuVar1;
  
                    /* WARNING: Treating indirect jump as call */
  ppuVar1 = (ushort **)(*(code *)(undefined *)0x0)();
  return ppuVar1;
}


