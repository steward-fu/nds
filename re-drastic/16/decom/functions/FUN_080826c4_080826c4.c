/*
 * Ghidra decompilation
 *
 * Function : FUN_080826c4
 * Address  : 080826c4
 * Program  : drastic16
 */


void FUN_080826c4(int param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint *puVar5;
  undefined *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  int local_30 [3];
  
  if ((param_2 << 0x14) >> 0x1c != 0xf || (param_2 & 0xe00000) != 0) {
    uVar9 = *(uint *)(param_1 + 0x4a4);
    uVar11 = (uint)*(byte *)(*(int *)(param_1 + 0x4d8) + 0x15);
    uVar8 = uVar11 & uVar9;
    uVar7 = *(uint *)(param_1 + 0x4d0);
    iVar12 = *(int *)(*(int *)(param_1 + 0x4e0) + 0x2304);
    if ((uVar8 & 0xfffffffe & *(uint *)(param_1 + 0x4a8)) != 0) {
      uVar2 = FUN_080800fc(param_1,0xfd,1,local_30);
      if ((uVar11 & 0xfffffffe & ~(uVar9 & 0xfffffffe)) == 0) {
        puVar5 = *(uint **)(param_1 + 0x4ac) + 1;
        **(uint **)(param_1 + 0x4ac) = uVar2 << 0xc | 0xe3a00000;
        *(uint **)(param_1 + 0x4ac) = puVar5;
      }
      else {
        puVar10 = *(uint **)(param_1 + 0x4ac);
        puVar10[1] = uVar8 & 0xfffffffe | 0xe3c00200 | uVar2 << 0xc | uVar2 << 0x10;
        puVar5 = puVar10 + 2;
        *puVar10 = uVar2 << 0xc | 0xe51b0080;
        *(uint **)(param_1 + 0x4ac) = puVar5;
      }
      uVar9 = uVar2 << 0xc;
      puVar10 = puVar5;
      if ((uVar8 & 2) != 0) {
        puVar10 = puVar5 + 1;
        *puVar5 = uVar2 << 0x10 | 0x23800202 | uVar9;
        *(uint **)(param_1 + 0x4ac) = puVar10;
      }
      puVar5 = puVar10;
      if ((uVar8 & 4) != 0) {
        puVar5 = puVar10 + 1;
        *puVar10 = uVar2 << 0x10 | 0x3800204 | uVar9;
        *(uint **)(param_1 + 0x4ac) = puVar5;
      }
      puVar10 = puVar5;
      if ((uVar8 & 8) != 0) {
        puVar10 = puVar5 + 1;
        *puVar5 = uVar2 << 0x10 | 0x43800208 | uVar9;
      }
      uVar1 = *(ushort *)(param_1 + 0x49c);
      *puVar10 = uVar9 | 0xe50b0080;
      *(ushort *)(param_1 + 0x49c) = uVar1 & ~(ushort)(1 << (uVar2 & 0xff));
      *(uint **)(param_1 + 0x4ac) = puVar10 + 1;
    }
    *(undefined4 *)(param_1 + 0x4a4) = 1;
    uVar9 = 0;
    *(undefined4 *)(param_1 + 0x4a8) = 0;
    FUN_0807ff08(param_1);
    puVar4 = *(undefined4 **)(param_1 + 0x4ac);
    *puVar4 = 0xe3a01005;
    puVar4[1] = ((int)&UNK_0807fb00 - (int)(puVar4 + 1) >> 2) - 2U & 0xffffff | 0xeb000000;
    uVar8 = (uint)*(byte *)(param_1 + 0x405);
    *(undefined4 **)(param_1 + 0x4ac) = puVar4 + 2;
    if (((uVar8 < 0xfd) &&
        (*(undefined *)(param_1 + 0x480 + uVar8) = 0xff, *(char *)(param_1 + 0x406) != '\0')) &&
       (((int)(uint)*(ushort *)(*(int *)(param_1 + 0x4d8) + 0x12) >> uVar8 & 1U) != 0)) {
      puVar5 = *(uint **)(param_1 + 0x4ac);
      uVar11 = (uVar8 + 0x3fffffeb) * 4;
      if ((int)uVar11 < 0) {
        uVar11 = (uVar8 + 0x3fffffeb) * -4;
      }
      else {
        uVar9 = 0x800000;
      }
      *puVar5 = uVar9 | 0xe50b0000 | uVar11;
      *(uint **)(param_1 + 0x4ac) = puVar5 + 1;
    }
    uVar8 = (uint)*(byte *)(param_1 + 0x40d);
    *(undefined *)(param_1 + 0x405) = 0xfd;
    if (((uVar8 < 0xfd) &&
        (*(undefined *)(param_1 + 0x480 + uVar8) = 0xff, *(char *)(param_1 + 0x40e) != '\0')) &&
       (((int)(uint)*(ushort *)(*(int *)(param_1 + 0x4d8) + 0x12) >> uVar8 & 1U) != 0)) {
      puVar5 = *(uint **)(param_1 + 0x4ac);
      uVar9 = (uVar8 + 0x3fffffeb) * 4;
      if ((int)uVar9 < 0) {
        uVar9 = (uVar8 + 0x3fffffeb) * -4;
        uVar8 = 0;
      }
      else {
        uVar8 = 0x800000;
      }
      *puVar5 = uVar8 | 0xe50b1000 | uVar9;
      *(uint **)(param_1 + 0x4ac) = puVar5 + 1;
    }
    *(undefined *)(param_1 + 0x40d) = 0xfd;
    iVar3 = FUN_080800fc(param_1,0xe,0,local_30);
    *(undefined *)(param_1 + iVar3 * 8 + 0x406) = 1;
    puVar10 = *(uint **)(param_1 + 0x4ac);
    puVar5 = puVar10 + 1;
    *puVar10 = uVar7 & 0xfff | 0xe3000000 | ((uVar7 << 0x10) >> 0x1c) << 0x10 | iVar3 << 0xc;
    *(uint **)(param_1 + 0x4ac) = puVar5;
    if (uVar7 >> 0x10 != 0) {
      puVar5 = puVar10 + 2;
      puVar10[1] = uVar7 >> 0x10 & 0xfff | (uVar7 >> 0x1c) << 0x10 | 0xe3400000 | iVar3 << 0xc;
    }
    puVar10 = puVar5 + 1;
    *puVar5 = 0xe51b0058;
    *(uint **)(param_1 + 0x4ac) = puVar10;
    if (*(char *)(param_1 + 0x4f1) != '\0') {
      puVar10 = puVar5 + 2;
      puVar5[1] = 0xe3800020;
    }
    *puVar10 = 0xe50b028c;
    puVar10[1] = 0xe3c0003f;
    puVar10[2] = 0xe380009b;
    puVar10[3] = 0xe50b0058;
    *(uint **)(param_1 + 0x4ac) = puVar10 + 4;
    if (iVar12 == 0) {
      puVar10[4] = 0xe3a00004;
      *(uint **)(param_1 + 0x4ac) = puVar10 + 5;
    }
    else {
      puVar10[4] = 0xe51b007c;
      puVar10[5] = 0xe5900008;
      puVar10[6] = 0xe2800004;
      *(uint **)(param_1 + 0x4ac) = puVar10 + 7;
    }
    FUN_0807ff08(param_1);
    puVar5 = *(uint **)(param_1 + 0x4ac);
    *puVar5 = ((int)&LAB_0807b960 - (int)puVar5 >> 2) - 2U & 0xffffff | 0xea000000;
    *(uint **)(param_1 + 0x4ac) = puVar5 + 1;
    return;
  }
  uVar11 = (param_2 << 0x18) >> 0x1d;
  uVar8 = (param_2 << 0x10) >> 0x1c;
  uVar7 = (param_2 << 0xc) >> 0x1c;
  uVar9 = param_2 & 0xf;
  if ((param_2 & 0x100000) != 0) {
    if (uVar8 == 0xf) {
      uVar8 = (uint)*(byte *)(param_1 + 0x405);
      if (((uVar8 < 0xfd) &&
          (*(undefined *)(param_1 + uVar8 + 0x480) = 0xff, *(char *)(param_1 + 0x406) != '\0')) &&
         (((int)(uint)*(ushort *)(*(int *)(param_1 + 0x4d8) + 0x12) >> uVar8 & 1U) != 0)) {
        uVar2 = (uVar8 + 0x3fffffeb) * 4;
        if ((int)uVar2 < 0) {
          uVar2 = (uVar8 + 0x3fffffeb) * -4;
          uVar8 = 0;
        }
        else {
          uVar8 = 0x800000;
        }
        puVar5 = *(uint **)(param_1 + 0x4ac) + 1;
        **(uint **)(param_1 + 0x4ac) = uVar8 | 0xe50b0000 | uVar2;
        *(uint **)(param_1 + 0x4ac) = puVar5;
      }
      else {
        puVar5 = *(uint **)(param_1 + 0x4ac);
      }
      uVar2 = 0;
      *(undefined *)(param_1 + 0x405) = 0xfd;
      uVar8 = uVar2;
    }
    else {
      uVar2 = FUN_080800fc(param_1,uVar8,0,local_30);
      *(undefined *)(param_1 + uVar2 * 8 + 0x406) = 1;
      if ((param_2 >> 0x1c == 0xe) || (local_30[0] == 0)) {
        puVar5 = *(uint **)(param_1 + 0x4ac);
        uVar8 = uVar2 << 0xc;
      }
      else {
        puVar5 = *(uint **)(param_1 + 0x4ac) + 1;
        **(uint **)(param_1 + 0x4ac) = uVar8 * -4 + 0x54 | 0xe51b0000 | uVar2 << 0xc;
        *(uint **)(param_1 + 0x4ac) = puVar5;
        uVar8 = uVar2 << 0xc;
      }
    }
    if (uVar7 == 1) {
      if ((uVar11 | uVar9) == 0) {
        uVar8 = uVar8 | param_2 & 0xf0000000;
        *puVar5 = uVar8 | 0x51b007c;
        puVar5[1] = uVar8 | uVar2 << 0x10 | 0x590000c;
        *(uint **)(param_1 + 0x4ac) = puVar5 + 2;
        return;
      }
    }
    else if (uVar7 == 0) {
      if (uVar9 == 0) {
        param_2 = param_2 & 0xf0000000;
        if (uVar11 == 1) {
          *puVar5 = param_2 | 0x3020112 | uVar8;
          puVar5[1] = param_2 | 0x3400f0d | uVar8;
          *(uint **)(param_1 + 0x4ac) = puVar5 + 2;
          return;
        }
        if (uVar11 != 2) {
          puVar5[1] = param_2 | 0x3440100 | uVar8;
          *puVar5 = param_2 | 0x3090561 | uVar8;
          *(uint **)(param_1 + 0x4ac) = puVar5 + 2;
          return;
        }
        *puVar5 = param_2 | 0x3000180 | uVar8;
        puVar5[1] = param_2 | 0x3400014 | uVar8;
        *(uint **)(param_1 + 0x4ac) = puVar5 + 2;
        return;
      }
    }
    else if ((uVar7 == 9) && (uVar9 == 1)) {
      if (uVar11 == 0) {
        uVar8 = uVar8 | param_2 & 0xf0000000;
        *puVar5 = uVar8 | 0x51b007c;
        puVar5[1] = uVar8 | uVar2 << 0x10 | 0x5900010;
        *(uint **)(param_1 + 0x4ac) = puVar5 + 2;
        return;
      }
      if (uVar11 == 1) {
        uVar8 = uVar8 | param_2 & 0xf0000000;
        *puVar5 = uVar8 | 0x51b007c;
        puVar5[1] = uVar8 | uVar2 << 0x10 | 0x5900014;
        *(uint **)(param_1 + 0x4ac) = puVar5 + 2;
        return;
      }
    }
    *puVar5 = uVar8 | param_2 & 0xf0000000 | 0x3a00000;
    *(uint **)(param_1 + 0x4ac) = puVar5 + 1;
    return;
  }
  if (uVar7 == 7) {
    if ((uVar11 != 4 || uVar9 != 0) && (uVar11 != 2 || uVar9 != 8)) {
      return;
    }
    uVar8 = *(uint *)(param_1 + 0x4a4);
    uVar9 = (uint)*(byte *)(*(int *)(param_1 + 0x4d8) + 0x15);
    uVar7 = uVar9 & uVar8;
    if ((uVar7 & 0xfffffffe & *(uint *)(param_1 + 0x4a8)) != 0) {
      uVar11 = FUN_080800fc(param_1,0xfd,1,local_30);
      if ((uVar9 & 0xfffffffe & ~(uVar8 & 0xfffffffe)) == 0) {
        puVar5 = *(uint **)(param_1 + 0x4ac) + 1;
        **(uint **)(param_1 + 0x4ac) = uVar11 << 0xc | 0xe3a00000;
        *(uint **)(param_1 + 0x4ac) = puVar5;
      }
      else {
        puVar10 = *(uint **)(param_1 + 0x4ac);
        puVar10[1] = uVar7 & 0xfffffffe | 0xe3c00200 | uVar11 << 0xc | uVar11 << 0x10;
        puVar5 = puVar10 + 2;
        *puVar10 = uVar11 << 0xc | 0xe51b0080;
        *(uint **)(param_1 + 0x4ac) = puVar5;
      }
      uVar8 = uVar11 << 0xc;
      puVar10 = puVar5;
      if ((uVar7 & 2) != 0) {
        puVar10 = puVar5 + 1;
        *puVar5 = uVar11 << 0x10 | 0x23800202 | uVar8;
        *(uint **)(param_1 + 0x4ac) = puVar10;
      }
      puVar5 = puVar10;
      if ((uVar7 & 4) != 0) {
        puVar5 = puVar10 + 1;
        *puVar10 = uVar11 << 0x10 | 0x3800204 | uVar8;
        *(uint **)(param_1 + 0x4ac) = puVar5;
      }
      puVar10 = puVar5;
      if ((uVar7 & 8) != 0) {
        puVar10 = puVar5 + 1;
        *puVar5 = uVar11 << 0x10 | 0x43800208 | uVar8;
      }
      uVar1 = *(ushort *)(param_1 + 0x49c);
      *puVar10 = uVar8 | 0xe50b0080;
      *(ushort *)(param_1 + 0x49c) = uVar1 & ~(ushort)(1 << (uVar11 & 0xff));
      *(uint **)(param_1 + 0x4ac) = puVar10 + 1;
    }
    *(undefined4 *)(param_1 + 0x4a8) = 0;
    *(undefined4 *)(param_1 + 0x4a4) = 1;
    FUN_0807ff08(param_1);
    puVar4 = *(undefined4 **)(param_1 + 0x4ac);
    puVar5 = puVar4 + 2;
    *puVar4 = 0xe3a01001;
    puVar4[1] = (uint)*(byte *)(param_1 + 0x4f1) | *(uint *)(param_1 + 0x4d0) & 0xfff | 0xe3000000 |
                ((*(uint *)(param_1 + 0x4d0) << 0x10) >> 0x1c) << 0x10;
    *(uint **)(param_1 + 0x4ac) = puVar5;
    uVar7 = *(uint *)(param_1 + 0x4d0) >> 0x10;
    if (uVar7 != 0) {
      puVar5 = puVar4 + 3;
      puVar4[2] = uVar7 & 0xfff | (*(uint *)(param_1 + 0x4d0) >> 0x1c) << 0x10 | 0xe3400000;
    }
    *puVar5 = param_2 & 0xf0000000 | 0x54b127b;
    puVar5[1] = param_2 & 0xf0000000 | 0xa000000 |
                ((int)&LAB_0807f8cc - (int)(puVar5 + 1) >> 2) - 2U & 0xffffff;
    *(uint **)(param_1 + 0x4ac) = puVar5 + 2;
    return;
  }
  if (uVar7 == 9) {
    if (uVar9 != 1) {
      return;
    }
    if (uVar11 != 0) {
      if (uVar11 != 1) {
        return;
      }
      uVar9 = *(uint *)(param_1 + 0x4a4);
      uVar11 = (uint)*(byte *)(*(int *)(param_1 + 0x4d8) + 0x15);
      uVar7 = uVar11 & uVar9;
      if ((uVar7 & 0xfffffffe & *(uint *)(param_1 + 0x4a8)) != 0) {
        uVar2 = FUN_080800fc(param_1,0xfd,1,local_30);
        if ((uVar11 & 0xfffffffe & ~(uVar9 & 0xfffffffe)) == 0) {
          puVar5 = *(uint **)(param_1 + 0x4ac) + 1;
          **(uint **)(param_1 + 0x4ac) = uVar2 << 0xc | 0xe3a00000;
          *(uint **)(param_1 + 0x4ac) = puVar5;
        }
        else {
          puVar10 = *(uint **)(param_1 + 0x4ac);
          puVar10[1] = uVar7 & 0xfffffffe | 0xe3c00200 | uVar2 << 0xc | uVar2 << 0x10;
          puVar5 = puVar10 + 2;
          *puVar10 = uVar2 << 0xc | 0xe51b0080;
          *(uint **)(param_1 + 0x4ac) = puVar5;
        }
        uVar9 = uVar2 << 0xc;
        puVar10 = puVar5;
        if ((uVar7 & 2) != 0) {
          puVar10 = puVar5 + 1;
          *puVar5 = uVar2 << 0x10 | 0x23800202 | uVar9;
          *(uint **)(param_1 + 0x4ac) = puVar10;
        }
        puVar5 = puVar10;
        if ((uVar7 & 4) != 0) {
          puVar5 = puVar10 + 1;
          *puVar10 = uVar2 << 0x10 | 0x3800204 | uVar9;
          *(uint **)(param_1 + 0x4ac) = puVar5;
        }
        puVar10 = puVar5;
        if ((uVar7 & 8) != 0) {
          puVar10 = puVar5 + 1;
          *puVar5 = uVar2 << 0x10 | 0x43800208 | uVar9;
        }
        uVar1 = *(ushort *)(param_1 + 0x49c);
        *puVar10 = uVar9 | 0xe50b0080;
        *(ushort *)(param_1 + 0x49c) = uVar1 & ~(ushort)(1 << (uVar2 & 0xff));
        *(uint **)(param_1 + 0x4ac) = puVar10 + 1;
      }
      *(undefined4 *)(param_1 + 0x4a4) = 1;
      *(undefined4 *)(param_1 + 0x4a8) = 0;
      FUN_0807fd88(param_1,uVar8);
      uVar7 = (uint)*(byte *)(param_1 + 0x405);
      if (((uVar7 < 0xfd) &&
          (*(undefined *)(param_1 + 0x480 + uVar7) = 0xff, *(char *)(param_1 + 0x406) != '\0')) &&
         (((int)(uint)*(ushort *)(*(int *)(param_1 + 0x4d8) + 0x12) >> uVar7 & 1U) != 0)) {
        uVar8 = (uVar7 + 0x3fffffeb) * 4;
        puVar5 = *(uint **)(param_1 + 0x4ac);
        if ((int)uVar8 < 0) {
          uVar8 = (uVar7 + 0x3fffffeb) * -4;
          uVar7 = 0;
        }
        else {
          uVar7 = 0x800000;
        }
        *puVar5 = uVar7 | 0xe50b0000 | uVar8;
        *(uint **)(param_1 + 0x4ac) = puVar5 + 1;
      }
      uVar7 = (uint)*(byte *)(param_1 + 0x475);
      *(undefined *)(param_1 + 0x405) = 0xfd;
      if (((uVar7 < 0xfd) &&
          (*(undefined *)(param_1 + 0x480 + uVar7) = 0xff, *(char *)(param_1 + 0x476) != '\0')) &&
         (((int)(uint)*(ushort *)(*(int *)(param_1 + 0x4d8) + 0x12) >> uVar7 & 1U) != 0)) {
        uVar8 = (uVar7 + 0x3fffffeb) * 4;
        if ((int)uVar8 < 0) {
          uVar8 = (uVar7 + 0x3fffffeb) * -4;
          uVar7 = 0;
        }
        else {
          uVar7 = 0x800000;
        }
        puVar5 = *(uint **)(param_1 + 0x4ac) + 1;
        **(uint **)(param_1 + 0x4ac) = uVar7 | 0xe50be000 | uVar8;
      }
      else {
        puVar5 = *(uint **)(param_1 + 0x4ac);
      }
      *(undefined *)(param_1 + 0x475) = 0xfd;
      *puVar5 = param_2 & 0xf0000000 | 0xb000000 |
                ((int)&LAB_0807faac - (int)puVar5 >> 2) - 2U & 0xffffff;
      *(uint **)(param_1 + 0x4ac) = puVar5 + 1;
      return;
    }
    FUN_0807ff08();
    uVar9 = *(uint *)(param_1 + 0x4a4);
    uVar11 = (uint)*(byte *)(*(int *)(param_1 + 0x4d8) + 0x15);
    uVar7 = uVar11 & uVar9;
    if ((uVar7 & 0xfffffffe & *(uint *)(param_1 + 0x4a8)) != 0) {
      uVar2 = FUN_080800fc(param_1,0xfd,1,local_30);
      if ((uVar11 & 0xfffffffe & ~(uVar9 & 0xfffffffe)) == 0) {
        puVar5 = *(uint **)(param_1 + 0x4ac) + 1;
        **(uint **)(param_1 + 0x4ac) = uVar2 << 0xc | 0xe3a00000;
        *(uint **)(param_1 + 0x4ac) = puVar5;
      }
      else {
        puVar10 = *(uint **)(param_1 + 0x4ac);
        puVar10[1] = uVar7 & 0xfffffffe | 0xe3c00200 | uVar2 << 0xc | uVar2 << 0x10;
        puVar5 = puVar10 + 2;
        *puVar10 = uVar2 << 0xc | 0xe51b0080;
        *(uint **)(param_1 + 0x4ac) = puVar5;
      }
      uVar9 = uVar2 << 0xc;
      puVar10 = puVar5;
      if ((uVar7 & 2) != 0) {
        puVar10 = puVar5 + 1;
        *puVar5 = uVar2 << 0x10 | 0x23800202 | uVar9;
        *(uint **)(param_1 + 0x4ac) = puVar10;
      }
      puVar5 = puVar10;
      if ((uVar7 & 4) != 0) {
        puVar5 = puVar10 + 1;
        *puVar10 = uVar2 << 0x10 | 0x3800204 | uVar9;
        *(uint **)(param_1 + 0x4ac) = puVar5;
      }
      puVar10 = puVar5;
      if ((uVar7 & 8) != 0) {
        puVar10 = puVar5 + 1;
        *puVar5 = uVar2 << 0x10 | 0x43800208 | uVar9;
      }
      uVar1 = *(ushort *)(param_1 + 0x49c);
      *puVar10 = uVar9 | 0xe50b0080;
      *(ushort *)(param_1 + 0x49c) = uVar1 & ~(ushort)(1 << (uVar2 & 0xff));
      *(uint **)(param_1 + 0x4ac) = puVar10 + 1;
    }
    *(undefined4 *)(param_1 + 0x4a4) = 1;
    *(undefined4 *)(param_1 + 0x4a8) = 0;
    FUN_0807fd88(param_1,uVar8);
    uVar7 = (uint)*(byte *)(param_1 + 0x405);
    if (((uVar7 < 0xfd) &&
        (*(undefined *)(param_1 + 0x480 + uVar7) = 0xff, *(char *)(param_1 + 0x406) != '\0')) &&
       (((int)(uint)*(ushort *)(*(int *)(param_1 + 0x4d8) + 0x12) >> uVar7 & 1U) != 0)) {
      uVar8 = (uVar7 + 0x3fffffeb) * 4;
      puVar5 = *(uint **)(param_1 + 0x4ac);
      if ((int)uVar8 < 0) {
        uVar8 = (uVar7 + 0x3fffffeb) * -4;
        uVar7 = 0;
      }
      else {
        uVar7 = 0x800000;
      }
      *puVar5 = uVar7 | 0xe50b0000 | uVar8;
      *(uint **)(param_1 + 0x4ac) = puVar5 + 1;
    }
    uVar7 = (uint)*(byte *)(param_1 + 0x475);
    *(undefined *)(param_1 + 0x405) = 0xfd;
    if (((uVar7 < 0xfd) &&
        (*(undefined *)(param_1 + 0x480 + uVar7) = 0xff, *(char *)(param_1 + 0x476) != '\0')) &&
       (((int)(uint)*(ushort *)(*(int *)(param_1 + 0x4d8) + 0x12) >> uVar7 & 1U) != 0)) {
      uVar8 = (uVar7 + 0x3fffffeb) * 4;
      if ((int)uVar8 < 0) {
        uVar8 = (uVar7 + 0x3fffffeb) * -4;
        uVar7 = 0;
      }
      else {
        uVar7 = 0x800000;
      }
      puVar5 = *(uint **)(param_1 + 0x4ac) + 1;
      **(uint **)(param_1 + 0x4ac) = uVar7 | 0xe50be000 | uVar8;
    }
    else {
      puVar5 = *(uint **)(param_1 + 0x4ac);
    }
    puVar6 = &LAB_0807f9d4;
  }
  else {
    if (uVar7 != 1) {
      return;
    }
    if ((uVar11 | uVar9) != 0) {
      return;
    }
    FUN_0807ff08();
    uVar7 = *(uint *)(param_1 + 0x4a4);
    uVar11 = (uint)*(byte *)(*(int *)(param_1 + 0x4d8) + 0x15);
    uVar9 = uVar11 & uVar7;
    if ((uVar9 & 0xfffffffe & *(uint *)(param_1 + 0x4a8)) != 0) {
      uVar2 = FUN_080800fc(param_1,0xfd,1,local_30);
      if ((uVar11 & 0xfffffffe & ~(uVar7 & 0xfffffffe)) == 0) {
        puVar5 = *(uint **)(param_1 + 0x4ac) + 1;
        **(uint **)(param_1 + 0x4ac) = uVar2 << 0xc | 0xe3a00000;
        *(uint **)(param_1 + 0x4ac) = puVar5;
      }
      else {
        puVar10 = *(uint **)(param_1 + 0x4ac);
        puVar10[1] = uVar9 & 0xfffffffe | 0xe3c00200 | uVar2 << 0xc | uVar2 << 0x10;
        puVar5 = puVar10 + 2;
        *puVar10 = uVar2 << 0xc | 0xe51b0080;
        *(uint **)(param_1 + 0x4ac) = puVar5;
      }
      uVar7 = uVar2 << 0xc;
      puVar10 = puVar5;
      if ((uVar9 & 2) != 0) {
        puVar10 = puVar5 + 1;
        *puVar5 = uVar2 << 0x10 | 0x23800202 | uVar7;
        *(uint **)(param_1 + 0x4ac) = puVar10;
      }
      puVar5 = puVar10;
      if ((uVar9 & 4) != 0) {
        puVar5 = puVar10 + 1;
        *puVar10 = uVar2 << 0x10 | 0x3800204 | uVar7;
        *(uint **)(param_1 + 0x4ac) = puVar5;
      }
      puVar10 = puVar5;
      if ((uVar9 & 8) != 0) {
        puVar10 = puVar5 + 1;
        *puVar5 = uVar2 << 0x10 | 0x43800208 | uVar7;
      }
      uVar1 = *(ushort *)(param_1 + 0x49c);
      *puVar10 = uVar7 | 0xe50b0080;
      *(ushort *)(param_1 + 0x49c) = uVar1 & ~(ushort)(1 << (uVar2 & 0xff));
      *(uint **)(param_1 + 0x4ac) = puVar10 + 1;
    }
    *(undefined4 *)(param_1 + 0x4a4) = 1;
    *(undefined4 *)(param_1 + 0x4a8) = 0;
    FUN_0807fd88(param_1,uVar8);
    uVar7 = (uint)*(byte *)(param_1 + 0x405);
    if (((uVar7 < 0xfd) &&
        (*(undefined *)(param_1 + 0x480 + uVar7) = 0xff, *(char *)(param_1 + 0x406) != '\0')) &&
       (((int)(uint)*(ushort *)(*(int *)(param_1 + 0x4d8) + 0x12) >> uVar7 & 1U) != 0)) {
      uVar8 = (uVar7 + 0x3fffffeb) * 4;
      puVar5 = *(uint **)(param_1 + 0x4ac);
      if ((int)uVar8 < 0) {
        uVar8 = (uVar7 + 0x3fffffeb) * -4;
        uVar7 = 0;
      }
      else {
        uVar7 = 0x800000;
      }
      *puVar5 = uVar7 | 0xe50b0000 | uVar8;
      *(uint **)(param_1 + 0x4ac) = puVar5 + 1;
    }
    uVar7 = (uint)*(byte *)(param_1 + 0x475);
    *(undefined *)(param_1 + 0x405) = 0xfd;
    if (((uVar7 < 0xfd) &&
        (*(undefined *)(param_1 + 0x480 + uVar7) = 0xff, *(char *)(param_1 + 0x476) != '\0')) &&
       (((int)(uint)*(ushort *)(*(int *)(param_1 + 0x4d8) + 0x12) >> uVar7 & 1U) != 0)) {
      uVar8 = (uVar7 + 0x3fffffeb) * 4;
      if ((int)uVar8 < 0) {
        uVar8 = (uVar7 + 0x3fffffeb) * -4;
        uVar7 = 0;
      }
      else {
        uVar7 = 0x800000;
      }
      puVar5 = *(uint **)(param_1 + 0x4ac) + 1;
      **(uint **)(param_1 + 0x4ac) = uVar7 | 0xe50be000 | uVar8;
    }
    else {
      puVar5 = *(uint **)(param_1 + 0x4ac);
    }
    puVar6 = &LAB_0807f8f0;
  }
  puVar10 = *(uint **)(param_1 + 0x4c0);
  iVar12 = *(int *)(param_1 + 0x4bc);
  *(undefined *)(param_1 + 0x475) = 0xfd;
  *puVar5 = param_2 & 0xf0000000 | 0xb000000 | ((int)puVar6 - (int)puVar5 >> 2) - 2U & 0xffffff;
  *(uint **)(param_1 + 0x4ac) = puVar5 + 1;
  uVar7 = (int)(puVar5 + 1) - *(int *)(param_1 + 0x4c4) >> 2;
  uVar8 = *(int *)(param_1 + 0x4d0) - *(int *)(param_1 + 0x4c8);
  if (*(uint *)(param_1 + 0x4b8) <= (uint)((int)puVar10 - iVar12 >> 2)) {
    printf("FATAL: went past metadata storage of %d for block @ %p (%x)\n");
  }
  if (0xffff < uVar8) {
    printf("FATAL: pc_delta in stored PC metadata is %x\n",uVar8);
  }
  if (0xffff < uVar7) {
    printf("FATAL: translation_ptr_delta in stored PC metadata is %x\n",uVar7);
  }
  iVar12 = *(int *)(param_1 + 0x4c0);
  *puVar10 = uVar8 | uVar7 << 0x10;
  *(int *)(param_1 + 0x4c0) = iVar12 + 4;
  return;
}


