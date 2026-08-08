/*
 * Ghidra decompilation
 *
 * Function : FUN_0808159c
 * Address  : 0808159c
 * Program  : drastic16
 */


void FUN_0808159c(int param_1,uint param_2)

{
  bool bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  uint uVar8;
  uint *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  undefined auStack_2c [8];
  
  uVar11 = param_2 >> 0x15 & 0xf;
  uVar8 = (param_2 << 0x10) >> 0x1c;
  iVar3 = (int)(param_2 << 0xb) >> 0x1f;
  if ((param_2 >> 0x15 & 0xd) == 0xd) {
    iVar13 = 0;
  }
  else {
    iVar13 = FUN_080814b4(param_1,(param_2 << 0xc) >> 0x1c);
  }
  bVar1 = 3 < uVar11 - 8;
  if ((param_2 & 0x2000000) == 0) {
    uVar14 = param_2 & 0xf;
    uVar5 = (param_2 << 0x19) >> 0x1e;
    uVar12 = FUN_080814b4(param_1,uVar14);
    if ((param_2 & 0x10) == 0) {
      uVar15 = (param_2 << 0x14) >> 0x1b;
      if ((uVar8 != uVar14 || uVar11 != 0xd) || ((uVar5 | -iVar3 | uVar15) != 0)) {
        uVar14 = 0;
        if (bVar1) {
          iVar4 = FUN_08080b7c(param_1,uVar8,1,param_2 >> 0x1c);
          uVar14 = iVar4 << 0xc;
        }
        puVar9 = *(uint **)(param_1 + 0x4ac);
        *puVar9 = iVar3 * -0x100000 | uVar11 << 0x15 | param_2 & 0xf0000000 | uVar5 << 5 |
                  uVar15 << 7 | iVar13 << 0x10 | uVar12 | uVar14;
        *(uint **)(param_1 + 0x4ac) = puVar9 + 1;
      }
    }
    else {
      iVar4 = FUN_080814b4(param_1,(param_2 << 0x14) >> 0x1c);
      uVar15 = 0;
      if (bVar1) {
        iVar6 = FUN_08080b7c(param_1,uVar8,1);
        uVar15 = iVar6 << 0xc;
      }
      if (uVar14 == 0xf) {
        puVar9 = *(uint **)(param_1 + 0x4ac) + 1;
        **(uint **)(param_1 + 0x4ac) = uVar12 << 0x10 | uVar12 << 0xc | 0xe2800004;
        *(uint **)(param_1 + 0x4ac) = puVar9;
      }
      else {
        puVar9 = *(uint **)(param_1 + 0x4ac);
      }
      if (-iVar3 != 0) {
        *(uint *)(param_1 + 0x4a4) = *(uint *)(param_1 + 0x4a4) | 2;
      }
      *puVar9 = param_2 & 0xf0000000 | 0x10 | uVar11 << 0x15 | iVar3 * -0x100000 | uVar5 << 5 |
                iVar13 << 0x10 | uVar12 | iVar4 << 8 | uVar15;
      *(uint **)(param_1 + 0x4ac) = puVar9 + 1;
    }
  }
  else {
    if (bVar1) {
      iVar4 = FUN_08080b7c(param_1,uVar8,1,param_2 >> 0x1c);
      uVar8 = iVar4 << 0xc;
    }
    else {
      uVar8 = 0;
    }
    puVar9 = *(uint **)(param_1 + 0x4ac);
    *puVar9 = param_2 & 0xff | 0x2000000 | param_2 & 0xf0000000 | uVar11 << 0x15 | iVar3 * -0x100000
              | ((param_2 << 0x14) >> 0x1c) << 8 | iVar13 << 0x10 | uVar8;
    *(uint **)(param_1 + 0x4ac) = puVar9 + 1;
  }
  if ((bVar1) && (*(short *)(*(int *)(param_1 + 0x4d8) + 0x10) < 0)) {
    if ((param_2 & 0x100000) == 0) {
      uVar12 = (uint)*(byte *)(*(int *)(param_1 + 0x4d8) + 0x15);
      uVar11 = *(uint *)(param_1 + 0x4a4);
      uVar8 = uVar12 & uVar11;
      if ((uVar8 & 0xfffffffe & *(uint *)(param_1 + 0x4a8)) != 0) {
        uVar5 = FUN_080800fc(param_1,0xfd,1,auStack_2c);
        if ((uVar12 & 0xfffffffe & ~(uVar11 & 0xfffffffe)) == 0) {
          puVar9 = *(uint **)(param_1 + 0x4ac) + 1;
          **(uint **)(param_1 + 0x4ac) = uVar5 << 0xc | 0xe3a00000;
          *(uint **)(param_1 + 0x4ac) = puVar9;
        }
        else {
          puVar16 = *(uint **)(param_1 + 0x4ac);
          puVar16[1] = uVar8 & 0xfffffffe | 0xe3c00200 | uVar5 << 0xc | uVar5 << 0x10;
          puVar9 = puVar16 + 2;
          *puVar16 = uVar5 << 0xc | 0xe51b0080;
          *(uint **)(param_1 + 0x4ac) = puVar9;
        }
        uVar11 = uVar5 << 0xc;
        puVar16 = puVar9;
        if ((uVar8 & 2) != 0) {
          puVar16 = puVar9 + 1;
          *puVar9 = uVar5 << 0x10 | 0x23800202 | uVar11;
          *(uint **)(param_1 + 0x4ac) = puVar16;
        }
        puVar9 = puVar16;
        if ((uVar8 & 4) != 0) {
          puVar9 = puVar16 + 1;
          *puVar16 = uVar5 << 0x10 | 0x3800204 | uVar11;
          *(uint **)(param_1 + 0x4ac) = puVar9;
        }
        puVar16 = puVar9;
        if ((uVar8 & 8) != 0) {
          puVar16 = puVar9 + 1;
          *puVar9 = uVar5 << 0x10 | 0x43800208 | uVar11;
        }
        uVar2 = *(ushort *)(param_1 + 0x49c);
        *puVar16 = uVar11 | 0xe50b0080;
        *(ushort *)(param_1 + 0x49c) = uVar2 & ~(ushort)(1 << (uVar5 & 0xff));
        *(uint **)(param_1 + 0x4ac) = puVar16 + 1;
      }
      *(undefined4 *)(param_1 + 0x4a8) = 0;
      *(undefined4 *)(param_1 + 0x4a4) = 1;
      if (*(char *)(param_1 + 0x4f1) == '\0') {
        puVar10 = *(undefined4 **)(param_1 + 0x4ac);
        *puVar10 = 0xe3c00003;
        *(undefined4 **)(param_1 + 0x4ac) = puVar10 + 1;
      }
      else if (*(char *)(param_1 + 0x4f1) == '\x01') {
        puVar10 = *(undefined4 **)(param_1 + 0x4ac);
        *puVar10 = 0xe3800001;
        *(undefined4 **)(param_1 + 0x4ac) = puVar10 + 1;
      }
      FUN_0807ff08(param_1);
      puVar9 = *(uint **)(param_1 + 0x4ac);
      puVar7 = &LAB_0807b960;
    }
    else {
      FUN_0807ff08(param_1);
      puVar9 = *(uint **)(param_1 + 0x4ac);
      puVar7 = &LAB_0807f794;
    }
    *puVar9 = ((int)puVar7 - (int)puVar9 >> 2) - 2U & 0xffffff | param_2 & 0xf0000000 | 0xa000000;
    *(uint **)(param_1 + 0x4ac) = puVar9 + 1;
    return;
  }
  return;
}


