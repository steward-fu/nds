/*
 * Ghidra decompilation
 *
 * Function : FUN_080b4d1c
 * Address  : 080b4d1c
 * Program  : drastic16
 */


uint FUN_080b4d1c(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (*(uint *)(param_1 + 0x14) < 5) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar1 = FUN_080a609c(param_1,4);
    uVar2 = FUN_080b4060(0xffffffff,uVar1,*(int *)(param_1 + 0x14) + -4);
    uVar2 = ~uVar2;
  }
  return uVar2;
}


