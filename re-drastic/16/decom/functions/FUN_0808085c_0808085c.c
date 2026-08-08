/*
 * Ghidra decompilation
 *
 * Function : FUN_0808085c
 * Address  : 0808085c
 * Program  : drastic16
 */


void FUN_0808085c(int param_1,int param_2)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  undefined4 *puVar6;
  undefined *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  byte bVar11;
  undefined auStack_2c [8];
  
  bVar1 = *(byte *)(*(int *)(param_1 + 0x4d4) + 0x1d);
  puVar6 = *(undefined4 **)(param_1 + 0x4dc);
  bVar11 = bVar1 & 4;
  puVar7 = (undefined *)*puVar6;
  if ((bVar1 & 4) != 0) {
    bVar11 = puVar6 == *(undefined4 **)(*(int *)(param_1 + 0x4d4) + 8);
  }
  uVar9 = *(uint *)(param_1 + 0x4a4);
  uVar10 = (uint)*(byte *)(*(int *)(param_1 + 0x4d8) + 0x15);
  uVar8 = uVar10 & uVar9;
  if ((uVar8 & 0xfffffffe & *(uint *)(param_1 + 0x4a8)) != 0) {
    uVar3 = FUN_080800fc(param_1,0xfd,1,auStack_2c);
    if ((uVar10 & 0xfffffffe & ~(uVar9 & 0xfffffffe)) == 0) {
      puVar5 = *(uint **)(param_1 + 0x4ac) + 1;
      **(uint **)(param_1 + 0x4ac) = uVar3 << 0xc | 0xe3a00000;
      *(uint **)(param_1 + 0x4ac) = puVar5;
    }
    else {
      puVar4 = *(uint **)(param_1 + 0x4ac);
      puVar4[1] = uVar8 & 0xfffffffe | 0xe3c00200 | uVar3 << 0xc | uVar3 << 0x10;
      puVar5 = puVar4 + 2;
      *puVar4 = uVar3 << 0xc | 0xe51b0080;
      *(uint **)(param_1 + 0x4ac) = puVar5;
    }
    uVar9 = uVar3 << 0xc;
    puVar4 = puVar5;
    if ((uVar8 & 2) != 0) {
      puVar4 = puVar5 + 1;
      *puVar5 = uVar3 << 0x10 | 0x23800202 | uVar9;
      *(uint **)(param_1 + 0x4ac) = puVar4;
    }
    puVar5 = puVar4;
    if ((uVar8 & 4) != 0) {
      puVar5 = puVar4 + 1;
      *puVar4 = uVar3 << 0x10 | 0x3800204 | uVar9;
      *(uint **)(param_1 + 0x4ac) = puVar5;
    }
    puVar4 = puVar5;
    if ((uVar8 & 8) != 0) {
      puVar4 = puVar5 + 1;
      *puVar5 = uVar3 << 0x10 | 0x43800208 | uVar9;
    }
    uVar2 = *(ushort *)(param_1 + 0x49c);
    *puVar4 = uVar9 | 0xe50b0080;
    *(ushort *)(param_1 + 0x49c) = uVar2 & ~(ushort)(1 << (uVar3 & 0xff));
    *(uint **)(param_1 + 0x4ac) = puVar4 + 1;
  }
  *(undefined4 *)(param_1 + 0x4a8) = 0;
  *(undefined4 *)(param_1 + 0x4a4) = 1;
  if ((puVar7 != (undefined *)0x0) && ((puVar6[5] & 1) != 0)) {
    puVar7 = puVar7 + 8;
  }
  uVar8 = param_2 << 0x1c;
  if (bVar11 != 0) {
    puVar5 = *(uint **)(param_1 + 0x4ac);
    *puVar5 = uVar8 | 0x3e0a000;
    *(uint **)(param_1 + 0x4ac) = puVar5 + 1;
  }
  FUN_0807ff08(param_1);
  uVar9 = puVar6[5];
  if ((uVar9 & 2) == 0) {
    puVar5 = *(uint **)(param_1 + 0x4ac);
  }
  else {
    puVar4 = *(uint **)(param_1 + 0x4ac);
    puVar5 = puVar4 + 1;
    *puVar4 = puVar6[3] & 0xfff | 0xe3000000 | ((uint)(puVar6[3] << 0x10) >> 0x1c) << 0x10;
    uVar9 = puVar6[3];
    *(uint **)(param_1 + 0x4ac) = puVar5;
    if (uVar9 >> 0x10 != 0) {
      puVar5 = puVar4 + 2;
      puVar4[1] = uVar9 >> 0x10 & 0xfff | (uVar9 >> 0x1c) << 0x10 | 0xe3400000;
      uVar9 = puVar6[3];
      *(uint **)(param_1 + 0x4ac) = puVar5;
    }
    if ((uVar9 & 1) == 0) {
      uVar9 = puVar6[5];
      puVar7 = &LAB_0807b898;
    }
    else {
      uVar9 = puVar6[5];
      puVar7 = &LAB_0807b8fc;
    }
  }
  if ((uVar9 & 4) == 0) {
    *puVar5 = uVar8 | 0xa000000 | ((int)puVar7 - (int)puVar5 >> 2) - 2U & 0xffffff;
    *(uint **)(param_1 + 0x4ac) = puVar5 + 1;
    if (((puVar7 == (undefined *)0x0) && ((puVar6[5] & 2) == 0)) &&
       (*(short *)((int)puVar6 + 0x1a) == 0)) {
      *(uint **)puVar6[2] = puVar5;
    }
  }
  else {
    puVar4 = puVar5 + 1;
    *puVar5 = puVar6[3] & 0xfff | 0xe3000000 | ((uint)(puVar6[3] << 0x10) >> 0x1c) << 0x10;
    uVar10 = puVar6[3];
    *(uint **)(param_1 + 0x4ac) = puVar4;
    uVar9 = uVar10 >> 0x10;
    if (uVar9 != 0) {
      puVar4 = puVar5 + 2;
      puVar5[1] = uVar9 & 0xfff | (uVar10 >> 0x1c) << 0x10 | 0xe3400000;
    }
    *puVar4 = uVar8 | 0xa000000 | ((int)&LAB_0807b960 - (int)puVar4 >> 2) - 2U & 0xffffff;
    *(uint **)(param_1 + 0x4ac) = puVar4 + 1;
    puVar5 = puVar4;
  }
  puVar6[1] = puVar5;
  *(undefined4 **)(param_1 + 0x4dc) = puVar6 + 7;
  return;
}


