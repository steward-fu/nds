/*
 * Ghidra decompilation
 *
 * Function : FUN_080df7fc
 * Address  : 080df7fc
 * Program  : drastic16
 */


uint FUN_080df7fc(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  undefined auStack_28 [16];
  uint local_18;
  uint local_14;
  
  FUN_080a5148(auStack_28,*param_1);
  FUN_080a498c(*param_1,0,param_1[0x410] + param_1[0x40c],
               param_1[0x411] + param_1[0x40d] + (uint)CARRY4(param_1[0x410],param_1[0x40c]),0);
  local_14 = 0x10000 - param_1[0x412];
  iVar3 = param_1[0x40f];
  uVar2 = param_1[0x40e] - param_1[0x410];
  iVar1 = param_1[0x411] + (uint)((uint)param_1[0x40e] < (uint)param_1[0x410]);
  bVar4 = iVar3 == iVar1;
  if (iVar3 == iVar1) {
    bVar4 = uVar2 <= local_14;
  }
  if (bVar4 && (iVar3 != iVar1 || local_14 != uVar2)) {
    local_14 = uVar2;
  }
  if (*(char *)(*param_1 + 0xe7fb) != '\0') {
    local_14 = local_14 & 0xfffffff0;
  }
  if (local_14 == 0) {
    uVar2 = 0;
  }
  else {
    local_18 = FUN_080a46cc(*param_1,param_1[4] + param_1[0x412],local_14);
    if ((int)local_18 < 1) {
      uVar2 = 0;
    }
    else {
      if (*(char *)(*param_1 + 0xe7fb) != '\0') {
        FUN_080b37fc(param_1 + 6,param_1[4] + param_1[0x412],local_18 & 0xfffffff0);
      }
      uVar2 = param_1[0x410];
      param_1[0x410] = local_18 + uVar2;
      param_1[0x411] = ((int)local_18 >> 0x1f) + param_1[0x411] + (uint)CARRY4(local_18,uVar2);
      param_1[0x412] = param_1[0x412] + local_18;
      uVar2 = local_18;
    }
  }
  FUN_080a51a0(auStack_28);
  return uVar2;
}


