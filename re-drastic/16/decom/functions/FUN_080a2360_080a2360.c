/*
 * Ghidra decompilation
 *
 * Function : FUN_080a2360
 * Address  : 080a2360
 * Program  : drastic16
 */


undefined4 FUN_080a2360(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_080a00e8(*param_1);
  if (((uVar1 < 0x41) || (0x5a < uVar1)) || (iVar2 = FUN_080a12f4(param_1[1]), iVar2 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}


