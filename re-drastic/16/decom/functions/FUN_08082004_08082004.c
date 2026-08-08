/*
 * Ghidra decompilation
 *
 * Function : FUN_08082004
 * Address  : 08082004
 * Program  : drastic16
 */


void FUN_08082004(int param_1,uint param_2)

{
  ushort uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  undefined auStack_2c [8];
  
  uVar4 = (uint)*(byte *)(param_1 + 0x405);
  iVar5 = param_1 + 0x480;
  if (((uVar4 < 0xfd) && (*(undefined *)(iVar5 + uVar4) = 0xff, *(char *)(param_1 + 0x406) != '\0'))
     && (((int)(uint)*(ushort *)(*(int *)(param_1 + 0x4d8) + 0x12) >> uVar4 & 1U) != 0)) {
    uVar6 = (uVar4 + 0x3fffffeb) * 4;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar4 + 0x3fffffeb) * -4;
      uVar4 = 0;
    }
    else {
      uVar4 = 0x800000;
    }
    puVar2 = *(uint **)(param_1 + 0x4ac) + 1;
    **(uint **)(param_1 + 0x4ac) = uVar4 | 0xe50b0000 | uVar6;
  }
  else {
    puVar2 = *(uint **)(param_1 + 0x4ac);
  }
  *(ushort *)(param_1 + 0x49c) = *(ushort *)(param_1 + 0x49c) | 1;
  *(undefined *)(param_1 + 0x405) = 0xfd;
  uVar4 = param_2 >> 0x10;
  puVar11 = puVar2 + 1;
  *puVar2 = param_2 & 0xff | 0xe3a00000 | ((param_2 << 0x14) >> 0x1c) << 8;
  *(uint **)(param_1 + 0x4ac) = puVar11;
  if ((param_2 & 0x400000) == 0) {
    if ((uVar4 & 8) != 0) {
      puVar11 = puVar2 + 2;
      puVar2[1] = 0xe128f000;
      *(uint **)(param_1 + 0x4ac) = puVar11;
      *(undefined4 *)(param_1 + 0x4a4) = 0xf;
      *(undefined4 *)(param_1 + 0x4a8) = 0xf;
    }
    if ((uVar4 & 1) != 0) {
      if (param_2 >> 0x1c < 0xe) {
        *puVar11 = (param_2 >> 0x1c ^ 1) << 0x1c | 0xa000000 |
                   0xfffffffeU - ((int)puVar11 >> 2) & 0xffffff;
        *(uint **)(param_1 + 0x4ac) = puVar11 + 1;
      }
      else {
        puVar11 = (uint *)0x0;
      }
      uVar6 = *(uint *)(param_1 + 0x4a4);
      uVar7 = (uint)*(byte *)(*(int *)(param_1 + 0x4d8) + 0x15);
      uVar4 = uVar7 & uVar6;
      if ((uVar4 & 0xfffffffe & *(uint *)(param_1 + 0x4a8)) != 0) {
        uVar9 = FUN_080800fc(param_1,0xfd,1,auStack_2c);
        if ((uVar7 & 0xfffffffe & ~(uVar6 & 0xfffffffe)) == 0) {
          puVar2 = *(uint **)(param_1 + 0x4ac) + 1;
          **(uint **)(param_1 + 0x4ac) = uVar9 << 0xc | 0xe3a00000;
          *(uint **)(param_1 + 0x4ac) = puVar2;
        }
        else {
          puVar8 = *(uint **)(param_1 + 0x4ac);
          puVar8[1] = uVar4 & 0xfffffffe | 0xe3c00200 | uVar9 << 0xc | uVar9 << 0x10;
          puVar2 = puVar8 + 2;
          *puVar8 = uVar9 << 0xc | 0xe51b0080;
          *(uint **)(param_1 + 0x4ac) = puVar2;
        }
        uVar6 = uVar9 << 0xc;
        puVar8 = puVar2;
        if ((uVar4 & 2) != 0) {
          puVar8 = puVar2 + 1;
          *puVar2 = uVar9 << 0x10 | 0x23800202 | uVar6;
          *(uint **)(param_1 + 0x4ac) = puVar8;
        }
        puVar2 = puVar8;
        if ((uVar4 & 4) != 0) {
          puVar2 = puVar8 + 1;
          *puVar8 = uVar9 << 0x10 | 0x3800204 | uVar6;
          *(uint **)(param_1 + 0x4ac) = puVar2;
        }
        puVar8 = puVar2;
        if ((uVar4 & 8) != 0) {
          puVar8 = puVar2 + 1;
          *puVar2 = uVar9 << 0x10 | 0x43800208 | uVar6;
        }
        uVar1 = *(ushort *)(param_1 + 0x49c);
        *puVar8 = uVar6 | 0xe50b0080;
        *(ushort *)(param_1 + 0x49c) = uVar1 & ~(ushort)(1 << (uVar9 & 0xff));
        *(uint **)(param_1 + 0x4ac) = puVar8 + 1;
      }
      uVar6 = 0;
      *(undefined4 *)(param_1 + 0x4a4) = 1;
      *(undefined4 *)(param_1 + 0x4a8) = 0;
      FUN_0807ff08(param_1);
      uVar4 = (uint)*(byte *)(param_1 + 0x40d);
      if (((uVar4 < 0xfd) &&
          (*(undefined *)(iVar5 + uVar4) = 0xff, *(char *)(param_1 + 0x40e) != '\0')) &&
         (((int)(uint)*(ushort *)(*(int *)(param_1 + 0x4d8) + 0x12) >> uVar4 & 1U) != 0)) {
        puVar2 = *(uint **)(param_1 + 0x4ac);
        uVar7 = (uVar4 + 0x3fffffeb) * 4;
        if ((int)uVar7 < 0) {
          uVar7 = (uVar4 + 0x3fffffeb) * -4;
        }
        else {
          uVar6 = 0x800000;
        }
        *puVar2 = uVar6 | 0xe50b1000 | uVar7;
        *(uint **)(param_1 + 0x4ac) = puVar2 + 1;
      }
      uVar4 = (uint)*(byte *)(param_1 + 0x475);
      *(undefined *)(param_1 + 0x40d) = 0xfd;
      if (((uVar4 < 0xfd) &&
          (*(undefined *)(iVar5 + uVar4) = 0xff, *(char *)(param_1 + 0x476) != '\0')) &&
         (((int)(uint)*(ushort *)(*(int *)(param_1 + 0x4d8) + 0x12) >> uVar4 & 1U) != 0)) {
        uVar6 = (uVar4 + 0x3fffffeb) * 4;
        if ((int)uVar6 < 0) {
          uVar6 = (uVar4 + 0x3fffffeb) * -4;
          uVar4 = 0;
        }
        else {
          uVar4 = 0x800000;
        }
        puVar2 = *(uint **)(param_1 + 0x4ac) + 1;
        **(uint **)(param_1 + 0x4ac) = uVar4 | 0xe50be000 | uVar6;
      }
      else {
        puVar2 = *(uint **)(param_1 + 0x4ac);
      }
      puVar8 = *(uint **)(param_1 + 0x4c0);
      iVar10 = *(int *)(param_1 + 0x4bc);
      *(undefined *)(param_1 + 0x475) = 0xfd;
      iVar5 = *(int *)(param_1 + 0x4c4);
      *puVar2 = ((int)&LAB_0807f690 - (int)puVar2 >> 2) - 2U & 0xffffff | 0xeb000000;
      *(uint **)(param_1 + 0x4ac) = puVar2 + 1;
      uVar4 = (int)(puVar2 + 1) - iVar5 >> 2;
      uVar6 = *(int *)(param_1 + 0x4d0) - *(int *)(param_1 + 0x4c8);
      if (*(uint *)(param_1 + 0x4b8) <= (uint)((int)puVar8 - iVar10 >> 2)) {
        printf("FATAL: went past metadata storage of %d for block @ %p (%x)\n");
      }
      if (0xffff < uVar6) {
        printf("FATAL: pc_delta in stored PC metadata is %x\n",uVar6);
      }
      if (0xffff < uVar4) {
        printf("FATAL: translation_ptr_delta in stored PC metadata is %x\n",uVar4);
      }
      iVar5 = *(int *)(param_1 + 0x4c0);
      *puVar8 = uVar6 | uVar4 << 0x10;
      *(int *)(param_1 + 0x4c0) = iVar5 + 4;
      if (puVar11 != (uint *)0x0) {
        *puVar11 = (*(int *)(param_1 + 0x4ac) - (int)puVar11 >> 2) - 2U & 0xffffff |
                   *puVar11 & 0xff000000;
        return;
      }
    }
  }
  else {
    uVar7 = *(uint *)(param_1 + 0x4a4);
    uVar9 = (uint)*(byte *)(*(int *)(param_1 + 0x4d8) + 0x15);
    uVar4 = *(uint *)(&DAT_080ec1c8 + (uVar4 & 0xf) * 4);
    uVar6 = uVar9 & uVar7;
    if ((uVar6 & 0xfffffffe & *(uint *)(param_1 + 0x4a8)) != 0) {
      uVar3 = FUN_080800fc(param_1,0xfd,1,auStack_2c);
      if ((uVar9 & 0xfffffffe & ~(uVar7 & 0xfffffffe)) == 0) {
        puVar2 = *(uint **)(param_1 + 0x4ac) + 1;
        **(uint **)(param_1 + 0x4ac) = uVar3 << 0xc | 0xe3a00000;
        *(uint **)(param_1 + 0x4ac) = puVar2;
      }
      else {
        puVar11 = *(uint **)(param_1 + 0x4ac);
        puVar11[1] = uVar6 & 0xfffffffe | 0xe3c00200 | uVar3 << 0xc | uVar3 << 0x10;
        puVar2 = puVar11 + 2;
        *puVar11 = uVar3 << 0xc | 0xe51b0080;
        *(uint **)(param_1 + 0x4ac) = puVar2;
      }
      uVar7 = uVar3 << 0xc;
      puVar11 = puVar2;
      if ((uVar6 & 2) != 0) {
        puVar11 = puVar2 + 1;
        *puVar2 = uVar3 << 0x10 | 0x23800202 | uVar7;
        *(uint **)(param_1 + 0x4ac) = puVar11;
      }
      puVar2 = puVar11;
      if ((uVar6 & 4) != 0) {
        puVar2 = puVar11 + 1;
        *puVar11 = uVar3 << 0x10 | 0x3800204 | uVar7;
        *(uint **)(param_1 + 0x4ac) = puVar2;
      }
      puVar11 = puVar2;
      if ((uVar6 & 8) != 0) {
        puVar11 = puVar2 + 1;
        *puVar2 = uVar3 << 0x10 | 0x43800208 | uVar7;
      }
      uVar1 = *(ushort *)(param_1 + 0x49c);
      *puVar11 = uVar7 | 0xe50b0080;
      *(ushort *)(param_1 + 0x49c) = uVar1 & ~(ushort)(1 << (uVar3 & 0xff));
      *(uint **)(param_1 + 0x4ac) = puVar11 + 1;
    }
    uVar7 = (uint)*(byte *)(param_1 + 0x40d);
    uVar6 = 0;
    *(undefined4 *)(param_1 + 0x4a8) = 0;
    *(undefined4 *)(param_1 + 0x4a4) = 1;
    if (((uVar7 < 0xfd) &&
        (*(undefined *)(iVar5 + uVar7) = 0xff, *(char *)(param_1 + 0x40e) != '\0')) &&
       (((int)(uint)*(ushort *)(*(int *)(param_1 + 0x4d8) + 0x12) >> uVar7 & 1U) != 0)) {
      puVar2 = *(uint **)(param_1 + 0x4ac);
      uVar9 = (uVar7 + 0x3fffffeb) * 4;
      if ((int)uVar9 < 0) {
        uVar9 = (uVar7 + 0x3fffffeb) * -4;
      }
      else {
        uVar6 = 0x800000;
      }
      *puVar2 = uVar6 | 0xe50b1000 | uVar9;
      *(uint **)(param_1 + 0x4ac) = puVar2 + 1;
    }
    uVar6 = (uint)*(byte *)(param_1 + 0x475);
    *(undefined *)(param_1 + 0x40d) = 0xfd;
    if (((uVar6 < 0xfd) &&
        (*(undefined *)(iVar5 + uVar6) = 0xff, *(char *)(param_1 + 0x476) != '\0')) &&
       (((int)(uint)*(ushort *)(*(int *)(param_1 + 0x4d8) + 0x12) >> uVar6 & 1U) != 0)) {
      uVar7 = (uVar6 + 0x3fffffeb) * 4;
      if ((int)uVar7 < 0) {
        uVar7 = (uVar6 + 0x3fffffeb) * -4;
        uVar6 = 0;
      }
      else {
        uVar6 = 0x800000;
      }
      puVar2 = *(uint **)(param_1 + 0x4ac) + 1;
      **(uint **)(param_1 + 0x4ac) = uVar6 | 0xe50be000 | uVar7;
    }
    else {
      puVar2 = *(uint **)(param_1 + 0x4ac);
    }
    uVar4 = ~uVar4;
    *(undefined *)(param_1 + 0x475) = 0xfd;
    puVar11 = puVar2 + 1;
    *puVar2 = uVar4 & 0xfff | 0xe3001000 | ((uVar4 << 0x10) >> 0x1c) << 0x10;
    *(uint **)(param_1 + 0x4ac) = puVar11;
    if (uVar4 >> 0x10 != 0) {
      puVar11 = puVar2 + 2;
      puVar2[1] = uVar4 >> 0x10 & 0xfff | (uVar4 >> 0x1c) << 0x10 | 0xe3401000;
    }
    *puVar11 = 0xe1c00001;
    puVar11[1] = ((int)&LAB_0807f744 - (int)(puVar11 + 1) >> 2) - 2U & 0xffffff | 0xeb000000;
    *(uint **)(param_1 + 0x4ac) = puVar11 + 2;
  }
  return;
}


