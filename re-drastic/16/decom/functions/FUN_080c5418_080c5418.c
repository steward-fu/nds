/*
 * Ghidra decompilation
 *
 * Function : FUN_080c5418
 * Address  : 080c5418
 * Program  : drastic16
 */


bool FUN_080c5418(int param_1,undefined4 param_2,undefined4 *param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  int local_10;
  uint local_c;
  
  uVar1 = FUN_080d2860(param_2);
  bVar4 = (uVar1 & 0x20) != 0;
  if (bVar4) {
    local_10 = FUN_080d2860(param_2);
  }
  else {
    iVar2 = FUN_080d2610(param_1 + 0x4a8c);
    if (iVar2 == 0) {
      return false;
    }
  }
  if ((uVar1 & 0x40) != 0) {
    uVar3 = FUN_080d2860(param_2);
    *param_3 = uVar3;
  }
  FUN_080c42ec(param_1 + 0x4a70,param_2);
  if (bVar4) {
    local_c = (uVar1 & 0x1f) + 1;
    if (0x10 < local_c) {
      local_c = ((uVar1 & 0x1f) - 0xf) * 3 + 0x10;
    }
    if (local_c == 1) {
      FUN_080c43d4(param_1 + 0x4a8c);
      return false;
    }
    FUN_080c4418(param_1 + 0x4a8c,local_10 + 1);
    FUN_080c4d9c(param_1,local_c);
  }
  return *(int *)(param_1 + 0x644) != 0;
}


