/*
 * Ghidra decompilation
 *
 * Function : FUN_080a5aec
 * Address  : 080a5aec
 * Program  : drastic16
 */


void FUN_080a5aec(int *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,
                 uint param_5,int param_6,uint param_7)

{
  undefined4 uVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  undefined auStack_1734 [4];
  undefined4 local_1730;
  undefined4 uStack_172c;
  undefined4 uStack_1728;
  undefined4 uStack_1724;
  undefined4 local_1720;
  undefined4 uStack_171c;
  undefined4 uStack_1718;
  undefined4 uStack_1714;
  undefined auStack_1710 [2916];
  undefined auStack_bac [2916];
  undefined auStack_48 [16];
  undefined auStack_38 [20];
  uint local_24;
  undefined4 local_20;
  uint local_1c;
  undefined8 local_18;
  
  FUN_080a5148(auStack_38,param_1);
  if ((param_7 & 4) == 0) {
    (**(code **)(*param_1 + 0xc))(param_1,*(code **)(*param_1 + 0xc),0,0,0);
  }
  local_20 = 0x100000;
  FUN_080a6110(auStack_48,0x100000);
  FUN_080bdafc(auStack_1710);
  FUN_080bdafc(auStack_bac);
  FUN_080bdba8(auStack_1710,2,param_4);
  FUN_080bdba8(auStack_bac,3,param_4);
  local_18 = 0;
  while( true ) {
    if (param_6 == 0x7fffffff && param_5 == 0x7fffffff) {
      local_1c = 0x100000;
    }
    else {
      local_1c = param_5;
      if (0 < (int)(param_6 + (uint)(0x100000 < param_5)) !=
          (SBORROW4(-param_6,(uint)(0x100000 < param_5)) != false)) {
        local_1c = 0x100000;
      }
    }
    pcVar3 = *(code **)(*param_1 + 8);
    uVar1 = FUN_080a609c(auStack_48,0);
    local_24 = (*pcVar3)(param_1,uVar1,local_1c);
    if (local_24 == 0) break;
    uVar2 = (uint)local_18 + 1;
    local_18 = CONCAT44(local_18._4_4_ + (uint)(0xfffffffe < (uint)local_18),uVar2);
    if ((uVar2 & 0xf) == 0) {
      FUN_080b0edc();
    }
    if (param_2 != (undefined4 *)0x0) {
      uVar1 = FUN_080a609c(auStack_48,0);
      FUN_080bdc38(auStack_1710,uVar1,local_24);
    }
    if (param_3 != (undefined4 *)0x0) {
      uVar1 = FUN_080a609c(auStack_48,0);
      FUN_080bdc38(auStack_bac,uVar1,local_24);
    }
    if (param_6 != 0x7fffffff || param_5 != 0x7fffffff) {
      bVar4 = param_5 < local_24;
      param_5 = param_5 - local_24;
      param_6 = param_6 - (((int)local_24 >> 0x1f) + (uint)bVar4);
    }
  }
  if (param_2 != (undefined4 *)0x0) {
    uVar1 = FUN_080bde08(auStack_1710);
    *param_2 = uVar1;
  }
  if (param_3 != (undefined4 *)0x0) {
    FUN_080bdd40(auStack_bac,auStack_1734);
    *param_3 = local_1730;
    param_3[1] = uStack_172c;
    param_3[2] = uStack_1728;
    param_3[3] = uStack_1724;
    param_3[4] = local_1720;
    param_3[5] = uStack_171c;
    param_3[6] = uStack_1718;
    param_3[7] = uStack_1714;
  }
  FUN_080bdb50(auStack_bac);
  FUN_080bdb50(auStack_1710);
  FUN_080a60d0(auStack_48);
  FUN_080a51a0(auStack_38);
  return;
}


