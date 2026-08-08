/*
 * Ghidra decompilation
 *
 * Function : FUN_080abd68
 * Address  : 080abd68
 * Program  : drastic16
 */


undefined4 FUN_080abd68(int *param_1)

{
  undefined uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int *piVar9;
  bool bVar10;
  undefined8 uVar11;
  undefined auStack_20e0 [32];
  undefined auStack_20c0 [32];
  undefined auStack_20a0 [8192];
  undefined auStack_a0 [4];
  undefined auStack_9c [8];
  undefined auStack_94 [16];
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  char local_71;
  int *local_70;
  int local_6c;
  int local_68;
  int iStack_64;
  int local_60;
  int iStack_5c;
  uint local_54;
  uint local_50;
  int local_4c;
  char local_45;
  int local_44;
  uint local_40;
  int local_3c;
  undefined8 local_38;
  int local_2c;
  undefined4 local_28;
  char local_21;
  undefined8 local_20;
  undefined8 local_18;
  
  FUN_080b43e4(auStack_20e0,param_1);
  if (*(char *)(param_1 + 0x43a9) == '\0') {
LAB_080abe34:
    local_21 = '\0';
  }
  else {
    iVar3 = param_1[0x43a3];
    uVar2 = (uint)(0xfffffff7 < (uint)param_1[0x43aa]);
    bVar10 = param_1[0x43aa] + 8U < (uint)param_1[0x43a2];
    if ((int)(uVar2 - (iVar3 + (uint)bVar10)) < 0 ==
        (SBORROW4(uVar2,iVar3) != SBORROW4(uVar2 - iVar3,(uint)bVar10))) goto LAB_080abe34;
    local_21 = '\x01';
  }
  if (local_21 != '\0') {
    FUN_080ad5e4(param_1);
    iVar3 = (**(code **)(*param_1 + 8))(param_1,auStack_94,0x10);
    if (iVar3 != 0x10) {
      FUN_080a8da8(param_1);
      uVar7 = 0;
      goto LAB_080ad594;
    }
    FUN_080b38d8(param_1 + 0x807,0,5,param_1[0x1cbd] + 0xa024,param_1 + 0x2105,auStack_94,
                 param_1[0x2104],0,auStack_9c);
    if ((*(char *)(param_1 + 0x2103) != '\0') &&
       (iVar3 = memcmp(auStack_9c,param_1 + 0x2109,8), iVar3 != 0)) {
      FUN_080a85d8(param_1 + 6,&DAT_080ed90c);
      *(undefined *)((int)param_1 + 0x10ead) = 1;
      FUN_080b7220(&DAT_081cd0a0,0xb);
      uVar7 = 0;
      goto LAB_080ad594;
    }
    FUN_080afa84(auStack_20e0,param_1 + 0x807);
  }
  local_28 = 7;
  uVar2 = FUN_080b4484(auStack_20e0,7);
  if (uVar2 < 7) {
    FUN_080a8da8(param_1);
    uVar7 = 0;
    goto LAB_080ad594;
  }
  FUN_080af928(param_1 + 0x20e6);
  iVar3 = FUN_080b4810(auStack_20e0);
  param_1[0x20e6] = iVar3;
  local_2c = FUN_080b4a60(auStack_20e0,4);
  local_38 = FUN_080b497c(auStack_20e0);
  if ((local_38 == 0) || (local_2c == 0)) {
    FUN_080a8ea8(param_1);
    uVar7 = 0;
    goto LAB_080ad594;
  }
  local_3c = (int)local_38 + local_2c + -3;
  local_40 = (int)local_38 + local_2c + 4;
  if ((local_3c < 0) || (local_40 < 7)) {
    FUN_080a8ea8(param_1);
    uVar7 = 0;
    goto LAB_080ad594;
  }
  FUN_080b4484(auStack_20e0,local_3c);
  uVar2 = FUN_080af9d4(auStack_20e0);
  if (uVar2 < local_40) {
    FUN_080a8da8(param_1);
    uVar7 = 0;
    goto LAB_080ad594;
  }
  local_44 = FUN_080b4d1c(auStack_20e0);
  iVar3 = FUN_080b497c(auStack_20e0);
  param_1[0x20e7] = iVar3;
  iVar3 = FUN_080b497c(auStack_20e0);
  param_1[0x20e8] = iVar3;
  *(bool *)(param_1 + 0x20ea) = (param_1[0x20e8] & 4U) != 0;
  param_1[0x20e9] = local_40;
  param_1[0x1cc5] = param_1[0x20e7];
  iVar3 = local_44;
  if (param_1[0x20e6] == local_44) {
    iVar3 = 0;
  }
  local_45 = (char)iVar3;
  if (param_1[0x20e6] != local_44) {
    local_45 = '\x01';
  }
  if (local_45 != '\0') {
    FUN_080a8ea8(param_1);
    *(undefined *)(param_1 + 0x43ab) = 1;
    FUN_080b7220(&DAT_081cd0a0,3);
    if (local_21 != '\0') {
      *(undefined *)((int)param_1 + 0x10ead) = 1;
      uVar7 = 0;
      goto LAB_080ad594;
    }
  }
  local_18 = 0;
  if ((param_1[0x20e8] & 1U) != 0) {
    local_18 = FUN_080b497c(auStack_20e0);
    iVar3 = (int)((ulonglong)local_18 >> 0x20);
    bVar10 = iVar3 == 0;
    if (iVar3 == 0) {
      bVar10 = (uint)local_18 <= (uint)param_1[0x20e9];
    }
    if (!bVar10 || iVar3 == 0 && param_1[0x20e9] == (uint)local_18) {
      FUN_080a8ea8(param_1);
      uVar7 = 0;
      goto LAB_080ad594;
    }
  }
  local_20 = 0;
  if ((param_1[0x20e8] & 2U) != 0) {
    local_20 = FUN_080b497c(auStack_20e0);
  }
  uVar8 = param_1[0x43a2];
  iVar3 = param_1[0x43a3];
  uVar2 = FUN_080a831c(param_1,param_1[0x20e9]);
  uVar4 = uVar2 + uVar8;
  param_1[0x43a4] = (uint)local_20 + uVar4;
  param_1[0x43a5] =
       local_20._4_4_ + iVar3 + (uint)CARRY4(uVar2,uVar8) + (uint)CARRY4((uint)local_20,uVar4);
  switch(param_1[0x20e7]) {
  case 1:
    FUN_080d6098(param_1 + 0x20ee);
    param_1[0x20ee] = param_1[0x20e6];
    param_1[0x20ef] = param_1[0x20e7];
    param_1[0x20f0] = param_1[0x20e8];
    param_1[0x20f1] = param_1[0x20e9];
    param_1[0x20f2] = param_1[0x20ea];
    local_54 = FUN_080b497c(auStack_20e0);
    *(bool *)((int)param_1 + 0x10e9d) = (local_54 & 1) != 0;
    *(bool *)(param_1 + 0x43a7) = (local_54 & 4) != 0;
    *(bool *)((int)param_1 + 0x10e9f) = (local_54 & 0x10) != 0;
    *(bool *)((int)param_1 + 0x10ea3) = (local_54 & 8) != 0;
    *(undefined *)(param_1 + 0x43a8) = 0;
    *(undefined *)((int)param_1 + 0x10ea2) = 1;
    if ((local_54 & 2) == 0) {
      param_1[0x43b0] = 0;
    }
    else {
      iVar3 = FUN_080b497c(auStack_20e0);
      param_1[0x43b0] = iVar3;
    }
    if ((*(char *)((int)param_1 + 0x10e9d) == '\0') || (param_1[0x43b0] != 0)) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
    *(undefined *)((int)param_1 + 0x10ea1) = uVar1;
    if (((uint)local_18 | local_18._4_4_) != 0) {
      FUN_080ad800(param_1,auStack_20e0,(uint)local_18,param_1 + 0x20ee);
    }
    if (((*(char *)((int)param_1 + 0x83d6) != '\0') && ((param_1[0x20f6] | param_1[0x20f7]) != 0))
       && (*(int *)(param_1[0x1cbd] + 0x4010) != 0)) {
      local_60 = param_1[0x43a2];
      iStack_5c = param_1[0x43a3];
      local_68 = param_1[0x43a4];
      iStack_64 = param_1[0x43a5];
      local_6c = param_1[0x1cc5];
      FUN_080dee4c(param_1 + 0x1cc8,param_1,0);
      FUN_080def64(param_1 + 0x1cc8,param_1,param_1[0x20f6],param_1[0x20f7]);
      param_1[0x43a2] = local_60;
      param_1[0x43a3] = iStack_5c;
      param_1[0x43a4] = local_68;
      param_1[0x43a5] = iStack_64;
      param_1[0x1cc5] = local_6c;
    }
    break;
  case 2:
  case 3:
    if (param_1[0x20e7] == 2) {
      local_70 = param_1 + 0x210c;
    }
    else {
      local_70 = param_1 + 0x31dc;
    }
    FUN_080d5e4c(local_70,0);
    iVar3 = param_1[0x20e7];
    iVar6 = param_1[0x20e8];
    iVar5 = param_1[0x20e9];
    *local_70 = param_1[0x20e6];
    local_70[1] = iVar3;
    local_70[2] = iVar6;
    local_70[3] = iVar5;
    local_70[4] = param_1[0x20ea];
    iVar3 = param_1[0x20e7];
    bVar10 = iVar3 != 2;
    if (bVar10) {
      iVar3 = 0;
    }
    local_71 = (char)iVar3;
    if (!bVar10) {
      local_71 = '\x01';
    }
    *(undefined *)((int)local_70 + 0x20e9) = 1;
    local_70[0x812] = (uint)local_20;
    local_70[0x813] = local_20._4_4_;
    iVar3 = FUN_080b497c(auStack_20e0);
    local_70[0x821] = iVar3;
    uVar11 = FUN_080b497c(auStack_20e0);
    *(undefined8 *)(local_70 + 0x814) = uVar11;
    *(bool *)((int)local_70 + 0x208a) = (local_70[0x821] & 8U) != 0;
    if (*(char *)((int)local_70 + 0x208a) != '\0') {
      uVar11 = SIMDExpandImmediate(1,6,0x80);
      *(undefined8 *)(local_70 + 0x814) = uVar11;
    }
    iVar6 = local_70[0x813];
    iVar3 = local_70[0x815];
    if ((int)(iVar3 - (iVar6 + (uint)((uint)local_70[0x814] < (uint)local_70[0x812]))) < 0 ==
        (SBORROW4(iVar3,iVar6) !=
        SBORROW4(iVar3 - iVar6,(uint)((uint)local_70[0x814] < (uint)local_70[0x812])))) {
      iVar3 = local_70[0x814];
      iVar6 = local_70[0x815];
    }
    else {
      iVar3 = local_70[0x812];
      iVar6 = local_70[0x813];
    }
    local_70[0x816] = iVar3;
    local_70[0x817] = iVar6;
    iVar3 = FUN_080b497c(auStack_20e0);
    local_70[7] = iVar3;
    if ((local_70[0x821] & 2U) != 0) {
      piVar9 = local_70 + 0x80c;
      uVar7 = FUN_080b4810(auStack_20e0);
      FUN_080b5284(piVar9,uVar7);
    }
    local_70[0x818] = 0;
    if ((local_70[0x821] & 4U) != 0) {
      local_70[0x818] = 2;
      iVar3 = FUN_080b4810(auStack_20e0);
      local_70[0x819] = iVar3;
    }
    local_70[0x83c] = 0;
    local_78 = FUN_080b497c(auStack_20e0);
    *(byte *)((int)local_70 + 0x1a) = (byte)(local_78 >> 7) & 7;
    *(byte *)((int)local_70 + 0x19) = (byte)local_78 & 0x3f;
    uVar1 = FUN_080b497c(auStack_20e0);
    *(undefined *)(local_70 + 6) = uVar1;
    local_7c = FUN_080b497c(auStack_20e0);
    *(bool *)(local_70 + 0x83a) = (param_1[0x20e8] & 0x40U) != 0;
    local_70[0x83b] = 2;
    if (*(char *)(local_70 + 6) == '\x01') {
      local_70[0x83b] = 1;
    }
    else if (*(char *)(local_70 + 6) == '\0') {
      local_70[0x83b] = 0;
    }
    *(bool *)(local_70 + 0x822) = (local_70[2] & 8U) != 0;
    *(bool *)((int)local_70 + 0x2089) = (local_70[2] & 0x10U) != 0;
    *(bool *)((int)local_70 + 0x20ea) = (local_70[2] & 0x20U) != 0;
    if ((local_71 == '\0') || ((local_78 & 0x40) == 0)) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
    *(undefined *)(local_70 + 0x838) = uVar1;
    *(bool *)((int)local_70 + 0x20e1) = (local_70[0x821] & 1U) != 0;
    if (*(char *)((int)local_70 + 0x20e1) == '\0') {
      iVar3 = 0x20000 << (local_78 >> 10 & 0xf);
    }
    else {
      iVar3 = 0;
    }
    local_70[0x839] = iVar3;
    if (*(char *)((int)local_70 + 0x208b) == '\0') {
      iVar3 = 0;
    }
    else {
      iVar3 = 5;
    }
    local_70[0x823] = iVar3;
    local_80 = local_7c;
    if (0x1ffe < local_7c) {
      local_80 = 0x1fff;
    }
    FUN_080b4af8(auStack_20e0,auStack_20a0,local_80);
    auStack_20a0[local_80] = 0;
    FUN_080b07d4(auStack_20a0,local_70 + 8,0x7ff);
    if (((uint)local_18 | local_18._4_4_) != 0) {
      FUN_080ad800(param_1,auStack_20e0,(uint)local_18,local_70);
    }
    if (local_71 != '\0') {
      FUN_080aeca8(param_1,local_70 + 8);
      FUN_080aeec0(param_1,local_70);
    }
    if (local_71 == '\x01') {
LAB_080ad3bc:
      bVar10 = false;
    }
    else {
      iVar3 = FUN_080af950(local_70,&DAT_080ed910);
      if (iVar3 == 0) goto LAB_080ad3bc;
      bVar10 = true;
    }
    if (bVar10) {
      *(undefined *)((int)param_1 + 0x10e9e) = 1;
    }
    if (local_45 != '\0') {
      FUN_080a85d8(param_1 + 6,&DAT_080ed90c,local_70 + 8);
    }
    break;
  case 4:
    param_1[0x20fe] = param_1[0x20e6];
    param_1[0x20ff] = param_1[0x20e7];
    param_1[0x2100] = param_1[0x20e8];
    param_1[0x2101] = param_1[0x20e9];
    param_1[0x2102] = param_1[0x20ea];
    local_4c = FUN_080b497c(auStack_20e0);
    if (local_4c != 0) {
      FUN_080a8efc(param_1,param_1 + 6);
      uVar7 = 0;
      goto LAB_080ad594;
    }
    local_50 = FUN_080b497c(auStack_20e0);
    *(bool *)(param_1 + 0x2103) = (local_50 & 1) != 0;
    iVar3 = FUN_080b46f8(auStack_20e0);
    param_1[0x2104] = iVar3;
    if (0x18 < (uint)param_1[0x2104]) {
      FUN_080a8efc(param_1,param_1 + 6);
      uVar7 = 0;
      goto LAB_080ad594;
    }
    FUN_080b4af8(auStack_20e0,param_1 + 0x2105,0x10);
    if (*(char *)(param_1 + 0x2103) != '\0') {
      FUN_080b4af8(auStack_20e0,param_1 + 0x2109,8);
      FUN_080b4af8(auStack_20e0,auStack_a0,4);
      FUN_080bcf08(auStack_20a0);
      FUN_080bd604(auStack_20a0,param_1 + 0x2109,8);
      FUN_080bd744(auStack_20a0,auStack_20c0);
      iVar3 = memcmp(auStack_a0,auStack_20c0,4);
      bVar10 = iVar3 != 0;
      if (bVar10) {
        iVar3 = 0;
      }
      uVar1 = (undefined)iVar3;
      if (!bVar10) {
        uVar1 = 1;
      }
      *(undefined *)(param_1 + 0x2103) = uVar1;
    }
    *(undefined *)(param_1 + 0x43a9) = 1;
    break;
  case 5:
    param_1[0x31cc] = param_1[0x20e6];
    param_1[0x31cd] = param_1[0x20e7];
    param_1[0x31ce] = param_1[0x20e8];
    param_1[0x31cf] = param_1[0x20e9];
    param_1[0x31d0] = param_1[0x20ea];
    local_84 = FUN_080b497c(auStack_20e0);
    *(bool *)(param_1 + 0x31d3) = (local_84 & 1) != 0;
    *(undefined *)((int)param_1 + 0xc74f) = 0;
    *(undefined *)((int)param_1 + 0xc74d) = 0;
    *(undefined *)((int)param_1 + 0xc74e) = 0;
  }
  iVar3 = param_1[0x43a5];
  iVar6 = param_1[0x43a3];
  if ((int)(iVar6 - (iVar3 + (uint)((uint)param_1[0x43a2] < (uint)param_1[0x43a4]))) < 0 ==
      (SBORROW4(iVar6,iVar3) !=
      SBORROW4(iVar6 - iVar3,(uint)((uint)param_1[0x43a2] < (uint)param_1[0x43a4])))) {
    FUN_080a8ea8(param_1);
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_080af9d4(auStack_20e0);
  }
LAB_080ad594:
  FUN_080afab0(auStack_20e0);
  return uVar7;
}


