/*
 * Ghidra decompilation
 *
 * Function : FUN_08080c88
 * Address  : 08080c88
 * Program  : drastic16
 */


void FUN_08080c88(int param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  undefined auStack_2c [8];
  
  uVar6 = param_2 & 0xf;
  uVar4 = (uint)*(byte *)(param_1 + 0x405);
  iVar8 = param_1 + 0x480;
  uVar2 = (uint)*(byte *)(param_1 + uVar6 + 0x480);
  if (((uVar4 < 0xfd) && (*(undefined *)(iVar8 + uVar4) = 0xff, *(char *)(param_1 + 0x406) != '\0'))
     && (((int)(uint)*(ushort *)(*(int *)(param_1 + 0x4d8) + 0x12) >> uVar4 & 1U) != 0)) {
    puVar7 = *(uint **)(param_1 + 0x4ac);
    uVar10 = (uVar4 + 0x3fffffeb) * 4;
    if ((int)uVar10 < 0) {
      uVar10 = (uVar4 + 0x3fffffeb) * -4;
      uVar4 = 0;
    }
    else {
      uVar4 = 0x800000;
    }
    *puVar7 = uVar4 | 0xe50b0000 | uVar10;
    *(uint **)(param_1 + 0x4ac) = puVar7 + 1;
  }
  *(undefined *)(param_1 + 0x405) = 0xfd;
  *(ushort *)(param_1 + 0x49c) = *(ushort *)(param_1 + 0x49c) | 1;
  if (uVar6 == 0xf) {
    iVar11 = *(int *)(param_1 + 0x4d8);
    puVar7 = *(uint **)(param_1 + 0x4ac);
    uVar2 = *(uint *)(iVar11 + 4);
    *puVar7 = uVar2 & 0xfff | 0xe3000000 | ((uVar2 << 0x10) >> 0x1c) << 0x10;
    uVar4 = *(uint *)(iVar11 + 4);
    *(uint **)(param_1 + 0x4ac) = puVar7 + 1;
    uVar2 = uVar4 >> 0x10;
    if (uVar2 != 0) {
      puVar7[1] = uVar2 & 0xfff | (uVar4 >> 0x1c) << 0x10 | 0xe3400000;
      *(uint **)(param_1 + 0x4ac) = puVar7 + 2;
    }
  }
  else if (uVar2 == 0xff) {
    puVar7 = *(uint **)(param_1 + 0x4ac);
    *puVar7 = uVar6 * -4 + 0x54 | 0xe51b0000;
    *(uint **)(param_1 + 0x4ac) = puVar7 + 1;
  }
  else if (uVar2 != 0) {
    puVar7 = *(uint **)(param_1 + 0x4ac);
    *puVar7 = uVar2 | 0xe1a00000;
    *(uint **)(param_1 + 0x4ac) = puVar7 + 1;
  }
  uVar2 = param_2 >> 0x10;
  if ((param_2 & 0x400000) == 0) {
    if ((uVar2 & 8) != 0) {
      puVar5 = *(undefined4 **)(param_1 + 0x4ac);
      *puVar5 = 0xe128f000;
      *(undefined4 *)(param_1 + 0x4a4) = 0xf;
      *(undefined4 **)(param_1 + 0x4ac) = puVar5 + 1;
      *(undefined4 *)(param_1 + 0x4a8) = 0xf;
    }
    if ((uVar2 & 1) != 0) {
      if (param_2 >> 0x1c < 0xe) {
        puVar7 = *(uint **)(param_1 + 0x4ac);
        *puVar7 = 0xfffffffeU - ((int)puVar7 >> 2) & 0xffffff | 0xa000000 |
                  (param_2 >> 0x1c ^ 1) << 0x1c;
        *(uint **)(param_1 + 0x4ac) = puVar7 + 1;
      }
      else {
        puVar7 = (uint *)0x0;
      }
      uVar4 = *(uint *)(param_1 + 0x4a4);
      uVar6 = (uint)*(byte *)(*(int *)(param_1 + 0x4d8) + 0x15);
      uVar2 = uVar6 & uVar4;
      if ((uVar2 & 0xfffffffe & *(uint *)(param_1 + 0x4a8)) != 0) {
        uVar10 = FUN_080800fc(param_1,0xfd,1,auStack_2c);
        if ((uVar6 & 0xfffffffe & ~(uVar4 & 0xfffffffe)) == 0) {
          puVar12 = *(uint **)(param_1 + 0x4ac) + 1;
          **(uint **)(param_1 + 0x4ac) = uVar10 << 0xc | 0xe3a00000;
          *(uint **)(param_1 + 0x4ac) = puVar12;
        }
        else {
          puVar9 = *(uint **)(param_1 + 0x4ac);
          puVar9[1] = uVar2 & 0xfffffffe | 0xe3c00200 | uVar10 << 0xc | uVar10 << 0x10;
          puVar12 = puVar9 + 2;
          *puVar9 = uVar10 << 0xc | 0xe51b0080;
          *(uint **)(param_1 + 0x4ac) = puVar12;
        }
        uVar4 = uVar10 << 0xc;
        puVar9 = puVar12;
        if ((uVar2 & 2) != 0) {
          puVar9 = puVar12 + 1;
          *puVar12 = uVar10 << 0x10 | 0x23800202 | uVar4;
          *(uint **)(param_1 + 0x4ac) = puVar9;
        }
        puVar12 = puVar9;
        if ((uVar2 & 4) != 0) {
          puVar12 = puVar9 + 1;
          *puVar9 = uVar10 << 0x10 | 0x3800204 | uVar4;
          *(uint **)(param_1 + 0x4ac) = puVar12;
        }
        puVar9 = puVar12;
        if ((uVar2 & 8) != 0) {
          puVar9 = puVar12 + 1;
          *puVar12 = uVar10 << 0x10 | 0x43800208 | uVar4;
        }
        uVar1 = *(ushort *)(param_1 + 0x49c);
        *puVar9 = uVar4 | 0xe50b0080;
        *(ushort *)(param_1 + 0x49c) = uVar1 & ~(ushort)(1 << (uVar10 & 0xff));
        *(uint **)(param_1 + 0x4ac) = puVar9 + 1;
      }
      uVar4 = 0;
      *(undefined4 *)(param_1 + 0x4a4) = 1;
      *(undefined4 *)(param_1 + 0x4a8) = 0;
      FUN_0807ff08(param_1);
      uVar2 = (uint)*(byte *)(param_1 + 0x40d);
      if (((uVar2 < 0xfd) &&
          (*(undefined *)(iVar8 + uVar2) = 0xff, *(char *)(param_1 + 0x40e) != '\0')) &&
         (((int)(uint)*(ushort *)(*(int *)(param_1 + 0x4d8) + 0x12) >> uVar2 & 1U) != 0)) {
        puVar12 = *(uint **)(param_1 + 0x4ac);
        uVar6 = (uVar2 + 0x3fffffeb) * 4;
        if ((int)uVar6 < 0) {
          uVar6 = (uVar2 + 0x3fffffeb) * -4;
        }
        else {
          uVar4 = 0x800000;
        }
        *puVar12 = uVar4 | 0xe50b1000 | uVar6;
        *(uint **)(param_1 + 0x4ac) = puVar12 + 1;
      }
      uVar2 = (uint)*(byte *)(param_1 + 0x475);
      *(undefined *)(param_1 + 0x40d) = 0xfd;
      if (((uVar2 < 0xfd) &&
          (*(undefined *)(iVar8 + uVar2) = 0xff, *(char *)(param_1 + 0x476) != '\0')) &&
         (((int)(uint)*(ushort *)(*(int *)(param_1 + 0x4d8) + 0x12) >> uVar2 & 1U) != 0)) {
        uVar4 = (uVar2 + 0x3fffffeb) * 4;
        if ((int)uVar4 < 0) {
          uVar4 = (uVar2 + 0x3fffffeb) * -4;
          uVar2 = 0;
        }
        else {
          uVar2 = 0x800000;
        }
        puVar12 = *(uint **)(param_1 + 0x4ac) + 1;
        **(uint **)(param_1 + 0x4ac) = uVar2 | 0xe50be000 | uVar4;
      }
      else {
        puVar12 = *(uint **)(param_1 + 0x4ac);
      }
      puVar9 = *(uint **)(param_1 + 0x4c0);
      iVar11 = *(int *)(param_1 + 0x4bc);
      *(undefined *)(param_1 + 0x475) = 0xfd;
      iVar8 = *(int *)(param_1 + 0x4c4);
      *puVar12 = ((int)&LAB_0807f690 - (int)puVar12 >> 2) - 2U & 0xffffff | 0xeb000000;
      *(uint **)(param_1 + 0x4ac) = puVar12 + 1;
      uVar2 = (int)(puVar12 + 1) - iVar8 >> 2;
      uVar4 = *(int *)(param_1 + 0x4d0) - *(int *)(param_1 + 0x4c8);
      if (*(uint *)(param_1 + 0x4b8) <= (uint)((int)puVar9 - iVar11 >> 2)) {
        printf("FATAL: went past metadata storage of %d for block @ %p (%x)\n");
      }
      if (0xffff < uVar4) {
        printf("FATAL: pc_delta in stored PC metadata is %x\n",uVar4);
      }
      if (0xffff < uVar2) {
        printf("FATAL: translation_ptr_delta in stored PC metadata is %x\n",uVar2);
      }
      iVar8 = *(int *)(param_1 + 0x4c0);
      *puVar9 = uVar4 | uVar2 << 0x10;
      *(int *)(param_1 + 0x4c0) = iVar8 + 4;
      if (puVar7 != (uint *)0x0) {
        *puVar7 = (*(int *)(param_1 + 0x4ac) - (int)puVar7 >> 2) - 2U & 0xffffff |
                  *puVar7 & 0xff000000;
        return;
      }
    }
  }
  else {
    uVar6 = *(uint *)(param_1 + 0x4a4);
    uVar10 = (uint)*(byte *)(*(int *)(param_1 + 0x4d8) + 0x15);
    uVar2 = *(uint *)(&DAT_080ec1c8 + (uVar2 & 0xf) * 4);
    uVar4 = uVar10 & uVar6;
    if ((uVar4 & 0xfffffffe & *(uint *)(param_1 + 0x4a8)) != 0) {
      uVar3 = FUN_080800fc(param_1,0xfd,1,auStack_2c);
      if ((uVar10 & 0xfffffffe & ~(uVar6 & 0xfffffffe)) == 0) {
        puVar7 = *(uint **)(param_1 + 0x4ac) + 1;
        **(uint **)(param_1 + 0x4ac) = uVar3 << 0xc | 0xe3a00000;
        *(uint **)(param_1 + 0x4ac) = puVar7;
      }
      else {
        puVar12 = *(uint **)(param_1 + 0x4ac);
        puVar12[1] = uVar4 & 0xfffffffe | 0xe3c00200 | uVar3 << 0xc | uVar3 << 0x10;
        puVar7 = puVar12 + 2;
        *puVar12 = uVar3 << 0xc | 0xe51b0080;
        *(uint **)(param_1 + 0x4ac) = puVar7;
      }
      uVar6 = uVar3 << 0xc;
      puVar12 = puVar7;
      if ((uVar4 & 2) != 0) {
        puVar12 = puVar7 + 1;
        *puVar7 = uVar3 << 0x10 | 0x23800202 | uVar6;
        *(uint **)(param_1 + 0x4ac) = puVar12;
      }
      puVar7 = puVar12;
      if ((uVar4 & 4) != 0) {
        puVar7 = puVar12 + 1;
        *puVar12 = uVar3 << 0x10 | 0x3800204 | uVar6;
        *(uint **)(param_1 + 0x4ac) = puVar7;
      }
      puVar12 = puVar7;
      if ((uVar4 & 8) != 0) {
        puVar12 = puVar7 + 1;
        *puVar7 = uVar3 << 0x10 | 0x43800208 | uVar6;
      }
      uVar1 = *(ushort *)(param_1 + 0x49c);
      *puVar12 = uVar6 | 0xe50b0080;
      *(ushort *)(param_1 + 0x49c) = uVar1 & ~(ushort)(1 << (uVar3 & 0xff));
      *(uint **)(param_1 + 0x4ac) = puVar12 + 1;
    }
    uVar6 = (uint)*(byte *)(param_1 + 0x40d);
    uVar4 = 0;
    *(undefined4 *)(param_1 + 0x4a8) = 0;
    *(undefined4 *)(param_1 + 0x4a4) = 1;
    if (((uVar6 < 0xfd) &&
        (*(undefined *)(iVar8 + uVar6) = 0xff, *(char *)(param_1 + 0x40e) != '\0')) &&
       (((int)(uint)*(ushort *)(*(int *)(param_1 + 0x4d8) + 0x12) >> uVar6 & 1U) != 0)) {
      puVar7 = *(uint **)(param_1 + 0x4ac);
      uVar10 = (uVar6 + 0x3fffffeb) * 4;
      if ((int)uVar10 < 0) {
        uVar10 = (uVar6 + 0x3fffffeb) * -4;
      }
      else {
        uVar4 = 0x800000;
      }
      *puVar7 = uVar4 | 0xe50b1000 | uVar10;
      *(uint **)(param_1 + 0x4ac) = puVar7 + 1;
    }
    uVar4 = (uint)*(byte *)(param_1 + 0x475);
    *(undefined *)(param_1 + 0x40d) = 0xfd;
    if (((uVar4 < 0xfd) &&
        (*(undefined *)(iVar8 + uVar4) = 0xff, *(char *)(param_1 + 0x476) != '\0')) &&
       (((int)(uint)*(ushort *)(*(int *)(param_1 + 0x4d8) + 0x12) >> uVar4 & 1U) != 0)) {
      uVar6 = (uVar4 + 0x3fffffeb) * 4;
      if ((int)uVar6 < 0) {
        uVar6 = (uVar4 + 0x3fffffeb) * -4;
        uVar4 = 0;
      }
      else {
        uVar4 = 0x800000;
      }
      puVar7 = *(uint **)(param_1 + 0x4ac) + 1;
      **(uint **)(param_1 + 0x4ac) = uVar4 | 0xe50be000 | uVar6;
    }
    else {
      puVar7 = *(uint **)(param_1 + 0x4ac);
    }
    uVar2 = ~uVar2;
    *(undefined *)(param_1 + 0x475) = 0xfd;
    puVar12 = puVar7 + 1;
    *puVar7 = uVar2 & 0xfff | 0xe3001000 | ((uVar2 << 0x10) >> 0x1c) << 0x10;
    *(uint **)(param_1 + 0x4ac) = puVar12;
    if (uVar2 >> 0x10 != 0) {
      puVar12 = puVar7 + 2;
      puVar7[1] = uVar2 >> 0x10 & 0xfff | (uVar2 >> 0x1c) << 0x10 | 0xe3401000;
    }
    *puVar12 = 0xe1c00001;
    puVar12[1] = ((int)&LAB_0807f744 - (int)(puVar12 + 1) >> 2) - 2U & 0xffffff | 0xeb000000;
    *(uint **)(param_1 + 0x4ac) = puVar12 + 2;
  }
  return;
}


