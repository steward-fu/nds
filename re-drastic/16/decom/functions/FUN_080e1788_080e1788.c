/*
 * Ghidra decompilation
 *
 * Function : FUN_080e1788
 * Address  : 080e1788
 * Program  : drastic16
 */


uint FUN_080e1788(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = FUN_080e2c58(param_1);
  uVar3 = uVar1 & 0xc000;
  if (uVar3 == 0x4000) {
    if ((uVar1 & 0x3c00) == 0) {
      uVar1 = ~(~((uVar1 >> 2) << 0x18) >> 0x18);
      FUN_080e2c30(param_1,0xe);
    }
    else {
      uVar1 = uVar1 >> 6 & 0xff;
      FUN_080e2c30(param_1,10);
    }
  }
  else if (uVar3 == 0x8000) {
    FUN_080e2c30(param_1,2);
    uVar1 = FUN_080e2c58(param_1);
    FUN_080e2c30(param_1,0x10);
  }
  else if (uVar3 == 0) {
    FUN_080e2c30(param_1,6);
    uVar1 = uVar1 >> 10 & 0xf;
  }
  else {
    FUN_080e2c30(param_1,2);
    iVar2 = FUN_080e2c58(param_1);
    FUN_080e2c30(param_1,0x10);
    uVar1 = FUN_080e2c58(param_1);
    uVar1 = iVar2 << 0x10 | uVar1;
    FUN_080e2c30(param_1,0x10);
  }
  return uVar1;
}


