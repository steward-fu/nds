/*
 * Ghidra decompilation
 *
 * Function : FUN_080d64a0
 * Address  : 080d64a0
 * Program  : drastic16
 */


uint FUN_080d64a0(void)

{
  uint uVar1;
  
  uVar1 = FUN_080d6460();
  if (uVar1 == 0) {
    uVar1 = 1;
  }
  else if (0x20 < uVar1) {
    uVar1 = 0x20;
  }
  return uVar1;
}


