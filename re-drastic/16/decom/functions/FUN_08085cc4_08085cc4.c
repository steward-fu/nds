/*
 * Ghidra decompilation
 *
 * Function : FUN_08085cc4
 * Address  : 08085cc4
 * Program  : drastic16
 */


void FUN_08085cc4(int param_1,int param_2,uint param_3,uint param_4)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined auStack_2c [8];
  
  uVar10 = (uint)*(byte *)(*(int *)(param_1 + 0x4d8) + 0x15);
  uVar9 = *(uint *)(param_1 + 0x4a4);
  uVar7 = uVar10 & uVar9;
  iVar11 = *(int *)(*(int *)(param_1 + 0x4e0) + 0x2304);
  uVar6 = *(uint *)(param_1 + 0x4d0);
  if ((uVar7 & 0xfffffffe & *(uint *)(param_1 + 0x4a8)) != 0) {
    uVar3 = FUN_080800fc(param_1,0xfd,1,auStack_2c);
    if ((uVar10 & 0xfffffffe & ~(uVar9 & 0xfffffffe)) == 0) {
      puVar8 = *(uint **)(param_1 + 0x4ac) + 1;
      **(uint **)(param_1 + 0x4ac) = uVar3 << 0xc | 0xe3a00000;
      *(uint **)(param_1 + 0x4ac) = puVar8;
    }
    else {
      puVar4 = *(uint **)(param_1 + 0x4ac);
      puVar4[1] = uVar7 & 0xfffffffe | 0xe3c00200 | uVar3 << 0xc | uVar3 << 0x10;
      puVar8 = puVar4 + 2;
      *puVar4 = uVar3 << 0xc | 0xe51b0080;
      *(uint **)(param_1 + 0x4ac) = puVar8;
    }
    uVar9 = uVar3 << 0xc;
    puVar4 = puVar8;
    if ((uVar7 & 2) != 0) {
      puVar4 = puVar8 + 1;
      *puVar8 = uVar3 << 0x10 | 0x23800202 | uVar9;
      *(uint **)(param_1 + 0x4ac) = puVar4;
    }
    puVar8 = puVar4;
    if ((uVar7 & 4) != 0) {
      puVar8 = puVar4 + 1;
      *puVar4 = uVar3 << 0x10 | 0x3800204 | uVar9;
      *(uint **)(param_1 + 0x4ac) = puVar8;
    }
    puVar4 = puVar8;
    if ((uVar7 & 8) != 0) {
      puVar4 = puVar8 + 1;
      *puVar8 = uVar3 << 0x10 | 0x43800208 | uVar9;
    }
    uVar1 = *(ushort *)(param_1 + 0x49c);
    *puVar4 = uVar9 | 0xe50b0080;
    *(ushort *)(param_1 + 0x49c) = uVar1 & ~(ushort)(1 << (uVar3 & 0xff));
    *(uint **)(param_1 + 0x4ac) = puVar4 + 1;
  }
  puVar8 = (uint *)0x0;
  *(undefined4 *)(param_1 + 0x4a8) = 0;
  *(undefined4 *)(param_1 + 0x4a4) = 1;
  FUN_0807ff08(param_1);
  if (param_4 < 0xe) {
    puVar8 = *(uint **)(param_1 + 0x4ac);
    puVar4 = puVar8 + 1;
    *puVar8 = 0xfffffffeU - ((int)puVar8 >> 2) & 0xffffff | (param_4 ^ 1) << 0x1c | 0xa000000;
  }
  else {
    puVar4 = *(uint **)(param_1 + 0x4ac);
  }
  *puVar4 = param_3 | 0xe3a01000;
  puVar4[1] = ((int)&UNK_0807fb00 - (int)(puVar4 + 1) >> 2) - 2U & 0xffffff | 0xeb000000;
  uVar7 = (uint)*(byte *)(param_1 + 0x405);
  *(uint **)(param_1 + 0x4ac) = puVar4 + 2;
  if (((uVar7 < 0xfd) &&
      (*(undefined *)(param_1 + 0x480 + uVar7) = 0xff, *(char *)(param_1 + 0x406) != '\0')) &&
     (((int)(uint)*(ushort *)(*(int *)(param_1 + 0x4d8) + 0x12) >> uVar7 & 1U) != 0)) {
    puVar4 = *(uint **)(param_1 + 0x4ac);
    uVar9 = (uVar7 + 0x3fffffeb) * 4;
    if ((int)uVar9 < 0) {
      uVar9 = (uVar7 + 0x3fffffeb) * -4;
      uVar7 = 0;
    }
    else {
      uVar7 = 0x800000;
    }
    *puVar4 = uVar7 | 0xe50b0000 | uVar9;
    *(uint **)(param_1 + 0x4ac) = puVar4 + 1;
  }
  uVar7 = (uint)*(byte *)(param_1 + 0x40d);
  *(undefined *)(param_1 + 0x405) = 0xfd;
  if (((uVar7 < 0xfd) &&
      (*(undefined *)(param_1 + 0x480 + uVar7) = 0xff, *(char *)(param_1 + 0x40e) != '\0')) &&
     (((int)(uint)*(ushort *)(*(int *)(param_1 + 0x4d8) + 0x12) >> uVar7 & 1U) != 0)) {
    puVar4 = *(uint **)(param_1 + 0x4ac);
    uVar9 = (uVar7 + 0x3fffffeb) * 4;
    if ((int)uVar9 < 0) {
      uVar9 = (uVar7 + 0x3fffffeb) * -4;
      uVar7 = 0;
    }
    else {
      uVar7 = 0x800000;
    }
    *puVar4 = uVar7 | 0xe50b1000 | uVar9;
    *(uint **)(param_1 + 0x4ac) = puVar4 + 1;
  }
  *(undefined *)(param_1 + 0x40d) = 0xfd;
  iVar2 = FUN_080800fc(param_1,0xe,0,auStack_2c);
  *(undefined *)(param_1 + iVar2 * 8 + 0x406) = 1;
  puVar5 = *(uint **)(param_1 + 0x4ac);
  puVar4 = puVar5 + 1;
  *puVar5 = uVar6 & 0xfff | 0xe3000000 | ((uVar6 << 0x10) >> 0x1c) << 0x10 | iVar2 << 0xc;
  *(uint **)(param_1 + 0x4ac) = puVar4;
  if (uVar6 >> 0x10 != 0) {
    puVar4 = puVar5 + 2;
    puVar5[1] = uVar6 >> 0x10 & 0xfff | (uVar6 >> 0x1c) << 0x10 | 0xe3400000 | iVar2 << 0xc;
  }
  puVar5 = puVar4 + 1;
  *puVar4 = 0xe51b0058;
  *(uint **)(param_1 + 0x4ac) = puVar5;
  if (*(char *)(param_1 + 0x4f1) != '\0') {
    puVar5 = puVar4 + 2;
    puVar4[1] = 0xe3800020;
  }
  uVar6 = param_3 * 4 - 0x2a0;
  if ((int)uVar6 < 0) {
    uVar6 = -uVar6;
    uVar7 = 0;
  }
  else {
    uVar7 = 0x800000;
  }
  uVar9 = *(uint *)(&DAT_080e6688 + param_3 * 4);
  *puVar5 = uVar7 | 0xe50b0000 | uVar6;
  puVar5[2] = uVar9 | 0xe3800080;
  puVar5[1] = 0xe3c0003f;
  puVar5[3] = 0xe50b0058;
  *(uint **)(param_1 + 0x4ac) = puVar5 + 4;
  if (iVar11 == 0) {
    puVar5[4] = param_2 << 2 | 0xe3a00000;
    *(uint **)(param_1 + 0x4ac) = puVar5 + 5;
  }
  else {
    puVar5[6] = param_2 << 2 | 0xe2800000;
    puVar5[4] = 0xe51b007c;
    puVar5[5] = 0xe5900008;
    *(uint **)(param_1 + 0x4ac) = puVar5 + 7;
  }
  FUN_0807ff08(param_1);
  puVar4 = *(uint **)(param_1 + 0x4ac);
  *puVar4 = ((int)&LAB_0807b960 - (int)puVar4 >> 2) - 2U & 0xffffff | 0xea000000;
  *(uint **)(param_1 + 0x4ac) = puVar4 + 1;
  if (puVar8 != (uint *)0x0) {
    *puVar8 = ((int)(puVar4 + 1) - (int)puVar8 >> 2) - 2U & 0xffffff | *puVar8 & 0xff000000;
  }
  return;
}


