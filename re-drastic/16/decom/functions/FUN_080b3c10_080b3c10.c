/*
 * Ghidra decompilation
 *
 * Function : FUN_080b3c10
 * Address  : 080b3c10
 * Program  : drastic16
 */


void FUN_080b3c10(void)

{
  undefined4 *puVar1;
  
  puVar1 = &DAT_081cd974;
  while (puVar1 != (undefined4 *)&DAT_081cd0b4) {
    puVar1 = puVar1 + -0x8c;
    FUN_080b3df4(puVar1);
  }
  return;
}


