/*
 * Ghidra decompilation
 *
 * Function : FUN_080d6460
 * Address  : 080d6460
 * Program  : drastic16
 */


long FUN_080d6460(void)

{
  long lVar1;
  
  lVar1 = sysconf(0x54);
  if (lVar1 == 0) {
    lVar1 = 1;
  }
  return lVar1;
}


