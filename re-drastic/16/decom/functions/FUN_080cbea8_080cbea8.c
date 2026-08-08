/*
 * Ghidra decompilation
 *
 * Function : FUN_080cbea8
 * Address  : 080cbea8
 * Program  : drastic16
 */


undefined4 FUN_080cbea8(int param_1,uint param_2,void *param_3,size_t param_4)

{
  bool bVar1;
  undefined extraout_var;
  undefined extraout_var_00;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  void **ppvVar6;
  void *pvVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int *piVar10;
  uint **ppuVar11;
  undefined4 uVar12;
  void *__src;
  undefined uVar13;
  undefined *puVar14;
  undefined4 unaff_r6;
  undefined auStack_74 [16];
  int local_64;
  uint local_60;
  uint local_5c;
  int local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  int local_48;
  uint *local_44;
  char local_3d;
  uint local_3c;
  int local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  int local_24;
  void *local_20;
  uint local_1c;
  
  FUN_080d21fc(param_1 + 0xe6b0);
  if (0x7fff < (int)param_4) {
    param_4 = 0x8000;
  }
  memcpy(*(void **)(param_1 + 0xe6bc),param_3,param_4);
  FUN_080e0f4c(param_1 + 59000);
  if ((param_2 & 0x80) == 0) {
    local_1c = *(uint *)(param_1 + 0xe6f0);
  }
  else {
    local_1c = FUN_080e1788(param_1 + 0xe6b0);
    if (local_1c == 0) {
      FUN_080cdd84(param_1);
    }
    else {
      local_1c = local_1c - 1;
    }
  }
  uVar2 = FUN_080d5490(param_1 + 0xe6c0);
  if ((uVar2 < local_1c) || (uVar2 = FUN_080d54b8(param_1 + 0xe6e0), uVar2 < local_1c)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    return 0;
  }
  *(uint *)(param_1 + 0xe6f0) = local_1c;
  uVar3 = FUN_080d5490(param_1 + 0xe6c0);
  uVar2 = local_1c;
  if (uVar3 != local_1c) {
    uVar2 = 0;
  }
  local_3d = (char)uVar2;
  if (uVar3 == local_1c) {
    local_3d = '\x01';
  }
  puVar4 = (uint *)operator_new(0x70);
  FUN_080d5244(puVar4);
  local_44 = puVar4;
  if (local_3d == '\0') {
    ppvVar6 = (void **)FUN_080d5618(param_1 + 0xe6c0,local_1c);
    local_20 = *ppvVar6;
    local_44[4] = local_1c;
    *(int *)((int)local_20 + 8) = *(int *)((int)local_20 + 8) + 1;
  }
  else {
    if (0x400 < local_1c) {
      if (puVar4 != (uint *)0x0) {
        FUN_080d5274(puVar4);
        operator_delete(puVar4);
      }
      return 0;
    }
    FUN_080d54e0(param_1 + 0xe6c0,1);
    iVar5 = FUN_080d5490(param_1 + 0xe6c0);
    ppvVar6 = (void **)FUN_080d5618(param_1 + 0xe6c0,iVar5 + -1);
    pvVar7 = operator_new(0x70);
    FUN_080d5244(pvVar7);
    *ppvVar6 = pvVar7;
    local_20 = pvVar7;
    iVar5 = FUN_080d5490(param_1 + 0xe6c0);
    local_44[4] = iVar5 - 1;
    FUN_080d5650(param_1 + 0xe6e0,0);
    *(undefined4 *)((int)local_20 + 8) = 0;
  }
  local_24 = 0;
  local_28 = 0;
  while (uVar2 = FUN_080d5490(param_1 + 0xe6d0), local_28 < uVar2) {
    puVar8 = (undefined4 *)FUN_080d5618(param_1 + 0xe6d0,local_28 - local_24);
    puVar9 = (undefined4 *)FUN_080d5618(param_1 + 0xe6d0,local_28);
    *puVar8 = *puVar9;
    piVar10 = (int *)FUN_080d5618(param_1 + 0xe6d0,local_28);
    if (*piVar10 == 0) {
      local_24 = local_24 + 1;
    }
    if (0 < local_24) {
      puVar8 = (undefined4 *)FUN_080d5618(param_1 + 0xe6d0,local_28);
      *puVar8 = 0;
    }
    local_28 = local_28 + 1;
  }
  if (local_24 == 0) {
    FUN_080d54e0(param_1 + 0xe6d0,1);
    local_24 = 1;
  }
  local_48 = FUN_080d5490(param_1 + 0xe6d0);
  local_48 = local_48 - local_24;
  ppuVar11 = (uint **)FUN_080d5618(param_1 + 0xe6d0,local_48);
  *ppuVar11 = local_44;
  local_44[2] = *(uint *)((int)local_20 + 8);
  local_2c = FUN_080e1788(param_1 + 0xe6b0);
  if ((param_2 & 0x40) != 0) {
    local_2c = local_2c + 0x102;
  }
  *local_44 = *(int *)(param_1 + 0x70) + local_2c & *(uint *)(param_1 + 0xe6f8);
  if ((param_2 & 0x20) == 0) {
    uVar2 = FUN_080d54b8(param_1 + 0xe6e0);
    if (local_1c < uVar2) {
      puVar4 = (uint *)FUN_080d56a0(param_1 + 0xe6e0,local_1c);
      uVar2 = *puVar4;
    }
    else {
      uVar2 = 0;
    }
    local_44[1] = uVar2;
  }
  else {
    uVar2 = FUN_080e1788(param_1 + 0xe6b0);
    local_44[1] = uVar2;
    puVar4 = (uint *)FUN_080d56a0(param_1 + 0xe6e0,local_1c);
    *puVar4 = local_44[1];
  }
  if ((*(int *)(param_1 + 0x74) == *(int *)(param_1 + 0x70)) ||
     (local_2c < (*(int *)(param_1 + 0x74) - *(int *)(param_1 + 0x70) & *(uint *)(param_1 + 0xe6f8))
     )) {
    uVar13 = 0;
  }
  else {
    uVar13 = 1;
  }
  *(undefined *)(local_44 + 3) = uVar13;
  memset(local_44 + 0x13,0,0x1c);
  local_44[0x16] = 0x3c000;
  local_44[0x17] = local_44[1];
  local_44[0x18] = local_44[2];
  if ((param_2 & 0x10) != 0) {
    local_4c = FUN_080e2c58(param_1 + 0xe6b0);
    local_4c = local_4c >> 9;
    FUN_080e2c30(param_1 + 0xe6b0,7);
    for (local_30 = 0; (int)local_30 < 7; local_30 = local_30 + 1) {
      if ((1 << (local_30 & 0xff) & local_4c) != 0) {
        uVar2 = FUN_080e1788(param_1 + 0xe6b0);
        local_44[local_30 + 0x13] = uVar2;
      }
    }
  }
  if (local_3d != '\0') {
    local_50 = FUN_080e1788(param_1 + 0xe6b0);
    if ((0xffff < local_50) || (local_50 == 0)) {
      return 0;
    }
    FUN_080a6110(auStack_74,local_50);
    for (local_34 = 0; local_34 < local_50; local_34 = local_34 + 1) {
      iVar5 = FUN_080d2464(param_1 + 0xe6b0,3);
      if (iVar5 != 0) {
        unaff_r6 = 0;
        bVar1 = false;
        goto LAB_080cc6c8;
      }
      puVar14 = (undefined *)FUN_080a609c(auStack_74,local_34);
      FUN_080e2c58(param_1 + 0xe6b0);
      *puVar14 = extraout_var;
      FUN_080e2c30(param_1 + 0xe6b0,8);
    }
    uVar12 = FUN_080a609c(auStack_74,0);
    FUN_080e14f8(param_1 + 59000,uVar12,local_50,(int)local_20 + 0x14);
    bVar1 = true;
LAB_080cc6c8:
    FUN_080a60d0(auStack_74);
    if (!bVar1) {
      return unaff_r6;
    }
  }
  uVar2 = FUN_080d56d8((int)local_20 + 0x14,0);
  local_44[9] = uVar2;
  local_44[10] = *(uint *)((int)local_20 + 0x28);
  local_54 = FUN_080a8838((int)local_20 + 0x3c);
  if ((local_54 != 0) && (local_54 < 0x2000)) {
    FUN_080a6194(local_44 + 0xf,local_54);
    pvVar7 = (void *)FUN_080a609c(local_44 + 0xf,0);
    __src = (void *)FUN_080a609c((int)local_20 + 0x3c,0);
    memcpy(pvVar7,__src,local_54);
  }
  uVar2 = FUN_080a8838(local_44 + 0xb);
  if (uVar2 < 0x40) {
    FUN_080afb6c(local_44 + 0xb);
    FUN_080a6194(local_44 + 0xb,0x40);
  }
  local_58 = FUN_080a609c(local_44 + 0xb,0);
  for (local_38 = 0; local_38 < 7; local_38 = local_38 + 1) {
    FUN_080e0f8c(param_1 + 59000,local_58 + local_38 * 4,local_44[local_38 + 0x13]);
  }
  FUN_080e0f8c(param_1 + 59000,local_58 + 0x1c,local_44[1]);
  FUN_080e0f8c(param_1 + 59000,local_58 + 0x20,0);
  FUN_080e0f8c(param_1 + 59000,local_58 + 0x2c,local_44[2]);
  memset((void *)(local_58 + 0x30),0,0x10);
  if ((param_2 & 8) != 0) {
    iVar5 = FUN_080d2464(param_1 + 0xe6b0,3);
    if (iVar5 != 0) {
      return 0;
    }
    local_5c = FUN_080e1788(param_1 + 0xe6b0);
    if (0x1fc0 < local_5c) {
      return 0;
    }
    local_60 = FUN_080a8838(local_44 + 0xb);
    if (local_60 < local_5c + 0x40) {
      FUN_080a6194(local_44 + 0xb,(local_5c - local_60) + 0x40);
    }
    local_64 = FUN_080a609c(local_44 + 0xb,0x40);
    for (local_3c = 0; local_3c < local_5c; local_3c = local_3c + 1) {
      iVar5 = FUN_080d2464(param_1 + 0xe6b0,3);
      if (iVar5 != 0) {
        return 0;
      }
      puVar14 = (undefined *)(local_64 + local_3c);
      FUN_080e2c58(param_1 + 0xe6b0);
      *puVar14 = extraout_var_00;
      FUN_080e2c30(param_1 + 0xe6b0,8);
    }
  }
  return 1;
}


