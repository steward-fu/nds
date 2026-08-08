/*
 * Ghidra decompilation
 *
 * Function : FUN_08022bb8
 * Address  : 08022bb8
 * Program  : drastic16
 */


void FUN_08022bb8(int *param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined4 local_48 [4];
  undefined4 auStack_38 [5];
  
  iVar10 = *(int *)(*param_1 + 0xfba1c);
  iVar2 = FUN_0807b384(0);
  iVar3 = FUN_0807b384(1);
  iVar4 = FUN_0807b3b0(0);
  iVar5 = FUN_0807b3b0(1);
  iVar7 = *param_1;
  uVar1 = *(ushort *)(iVar7 + 0x1b344);
  uVar9 = *(uint *)(iVar7 + 0x1b0a4);
  FUN_08011bc8(iVar7);
  if (*(char *)(iVar10 + 0x291646a) == '\0') {
    if ((*(uint *)(iVar10 + 0x81824) & 4) == 0) {
      FUN_0802f5e4(param_1 + 0x766);
      FUN_0802f5e4(param_1 + 0x20b36);
    }
    else {
      iVar3 = 0;
      iVar2 = 0;
    }
  }
  else {
    iVar3 = 0;
    iVar2 = 0;
  }
  iVar7 = iVar3;
  iVar10 = iVar5;
  if (((uVar1 & 0x8000) == 0) && (*(int *)(*(int *)(*param_1 + 0xfba1c) + 0x817b4) == 0)) {
    iVar7 = iVar2;
    iVar10 = iVar4;
    iVar4 = iVar5;
    iVar2 = iVar3;
  }
  param_1[0x76d] = iVar2;
  param_1[0x20b3d] = iVar7;
  param_1[0x76e] = iVar4;
  param_1[0x20b3e] = iVar10;
  param_1[0x20b34] = 0;
  param_1[0x40f04] = 0;
  param_1[0x20b35] = 0;
  param_1[0x40f05] = 0;
  *(undefined2 *)(param_1 + 0x9b8c9) = 0;
  *(undefined *)((int)param_1 + 0x26e30b) = 0;
  *(undefined *)(param_1 + 0x9b8c3) = 0;
  *(undefined *)(param_1 + 0x9b8c4) = 0;
  if (-1 < (int)uVar9) {
    return;
  }
  uVar11 = (uVar9 << 0xe) >> 0x1e;
  *(undefined *)(param_1 + 0x9b8c4) = 1;
  if (param_1[uVar11 * 5 + 1] != 6) {
    return;
  }
  if ((uint)param_1[uVar11 * 5 + 3] < 0x200) {
    return;
  }
  iVar3 = param_1[uVar11 + 0x42e];
  local_48[0] = 0x80;
  local_48[1] = 0x100;
  local_48[2] = 0x100;
  uVar12 = (uVar9 << 1) >> 0x1e;
  param_1[0x9b8c5] = param_1[0x9b8c5] | 0xff << (uVar11 << 3);
  auStack_38[2] = 0x80;
  auStack_38[1] = 0x40;
  auStack_38[0] = 0x80;
  param_1[0x9b8c0] = iVar3 + ((uVar9 << 0xc) >> 0x1e) * 0x8000;
  if (uVar12 != 1) {
    if ((uVar9 & 0x1000000) == 0) {
      uVar6 = 1;
    }
    else {
      uVar6 = 2;
    }
    *(undefined *)((int)param_1 + 0x26e30b) = uVar6;
    if (uVar12 == 0) {
      *(byte *)((int)param_1 + 0x26e30d) = (byte)((uVar9 << 1) >> 0x1e);
      goto LAB_08022e10;
    }
  }
  *(undefined *)((int)param_1 + 0x26e30d) = 0;
  if ((uVar9 & 0x2000000) == 0) {
    uVar6 = 3;
  }
  else {
    uVar6 = 4;
  }
  *(undefined *)(param_1 + 0x9b8c3) = uVar6;
  if (1 < uVar12) {
    *(char *)((int)param_1 + 0x26e30e) = (char)(uVar9 & 0x1f);
    *(undefined *)((int)param_1 + 0x26e30d) = 1;
    if (0x10 < (uVar9 & 0x1f)) {
      *(undefined *)((int)param_1 + 0x26e30e) = 0x10;
    }
    *(byte *)((int)param_1 + 0x26e30f) = (byte)((uVar9 << 0x13) >> 0x1b);
    if (0x10 < (uVar9 << 0x13) >> 0x1b) {
      *(undefined *)((int)param_1 + 0x26e30f) = 0x10;
    }
  }
LAB_08022e10:
  uVar9 = (uVar9 << 10) >> 0x1e;
  uVar8 = auStack_38[uVar9];
  *(short *)(param_1 + 0x9b8c2) = (short)local_48[uVar9];
  *(char *)((int)param_1 + 0x26e30a) = (char)uVar8;
  return;
}


