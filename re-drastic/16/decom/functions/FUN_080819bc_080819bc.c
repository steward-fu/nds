/*
 * Ghidra decompilation
 *
 * Function : FUN_080819bc
 * Address  : 080819bc
 * Program  : drastic16
 */


void FUN_080819bc(int param_1,uint param_2,int param_3,uint param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  if (param_3 == 1) {
    uVar6 = (param_2 << 0xc) >> 0x1c;
    if ((param_2 & 0x800000) == 0) {
      uVar9 = 0x400000;
    }
    else {
      uVar9 = 0x800000;
    }
    if ((param_2 & 0x1000000) == 0) {
      FUN_0807fd88(param_1,uVar6);
      uVar7 = FUN_080814b4(param_1,param_2 & 0xf);
      uVar6 = FUN_08080b7c(param_1,uVar6,1,param_5);
      puVar5 = *(uint **)(param_1 + 0x4ac);
      *puVar5 = uVar9 | param_5 << 0x1c | uVar7 | uVar6 << 0xc;
      *(uint **)(param_1 + 0x4ac) = puVar5 + 1;
      *(undefined *)(param_1 + uVar6 * 8 + 0x406) = 1;
    }
    else {
      uVar7 = (uint)*(byte *)(param_1 + 0x405);
      if (((uVar7 < 0xfd) &&
          (*(undefined *)(param_1 + uVar7 + 0x480) = 0xff, *(char *)(param_1 + 0x406) != '\0')) &&
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
      *(undefined *)(param_1 + 0x405) = 0xfd;
      *(ushort *)(param_1 + 0x49c) = *(ushort *)(param_1 + 0x49c) | 1;
      uVar6 = FUN_080814b4(param_1,uVar6);
      uVar7 = FUN_080814b4(param_1,param_2 & 0xf);
      puVar5 = *(uint **)(param_1 + 0x4ac);
      *puVar5 = uVar9 | param_5 << 0x1c | uVar7 | uVar6 << 0x10;
      *(uint **)(param_1 + 0x4ac) = puVar5 + 1;
      if ((param_2 & 0x200000) != 0) {
        *(undefined *)(param_1 + uVar6 * 8 + 0x406) = 1;
        puVar5[1] = param_5 << 0x1c | 0x1a00000U | uVar6 << 0xc;
        *(uint **)(param_1 + 0x4ac) = puVar5 + 2;
      }
    }
    *(ushort *)(param_1 + 0x49c) =
         ~(ushort)(1 << (uVar7 & 0xff)) & ~(ushort)(1 << (uVar6 & 0xff)) &
         *(ushort *)(param_1 + 0x49c);
    return;
  }
  if (param_3 != 0) {
    if (param_3 != 2) {
      return;
    }
    uVar6 = (param_2 << 0xc) >> 0x1c;
    uVar9 = (param_2 << 0x14) >> 0x1b;
    if ((param_2 & 0x800000) == 0) {
      uVar7 = 0x400000;
    }
    else {
      uVar7 = 0x800000;
    }
    uVar8 = (param_2 << 0x19) >> 0x1e;
    if ((param_2 & 0x1000000) == 0) {
      FUN_0807fd88(param_1,uVar6);
      uVar4 = FUN_080814b4(param_1,param_2 & 0xf);
      uVar6 = FUN_08080b7c(param_1,uVar6,1,param_5);
      puVar5 = *(uint **)(param_1 + 0x4ac);
      *puVar5 = uVar9 << 7 | uVar8 << 5 | param_5 << 0x1c | uVar7 | uVar4 | uVar6 << 0xc;
      *(uint **)(param_1 + 0x4ac) = puVar5 + 1;
      *(undefined *)(param_1 + uVar6 * 8 + 0x406) = 1;
    }
    else {
      uVar4 = (uint)*(byte *)(param_1 + 0x405);
      if (((uVar4 < 0xfd) &&
          (*(undefined *)(param_1 + uVar4 + 0x480) = 0xff, *(char *)(param_1 + 0x406) != '\0')) &&
         (((int)(uint)*(ushort *)(*(int *)(param_1 + 0x4d8) + 0x12) >> uVar4 & 1U) != 0)) {
        uVar1 = (uVar4 + 0x3fffffeb) * 4;
        puVar5 = *(uint **)(param_1 + 0x4ac);
        if ((int)uVar1 < 0) {
          uVar1 = (uVar4 + 0x3fffffeb) * -4;
          uVar4 = 0;
        }
        else {
          uVar4 = 0x800000;
        }
        *puVar5 = uVar4 | 0xe50b0000 | uVar1;
        *(uint **)(param_1 + 0x4ac) = puVar5 + 1;
      }
      *(undefined *)(param_1 + 0x405) = 0xfd;
      *(ushort *)(param_1 + 0x49c) = *(ushort *)(param_1 + 0x49c) | 1;
      uVar6 = FUN_080814b4(param_1,uVar6);
      uVar4 = FUN_080814b4(param_1,param_2 & 0xf);
      puVar5 = *(uint **)(param_1 + 0x4ac);
      *puVar5 = uVar9 << 7 | uVar8 << 5 | param_5 << 0x1c | uVar7 | uVar4 | uVar6 << 0x10;
      *(uint **)(param_1 + 0x4ac) = puVar5 + 1;
      if ((param_2 & 0x200000) != 0) {
        *(undefined *)(param_1 + uVar6 * 8 + 0x406) = 1;
        puVar5[1] = param_5 << 0x1c | 0x1a00000U | uVar6 << 0xc;
        *(uint **)(param_1 + 0x4ac) = puVar5 + 2;
      }
    }
    *(ushort *)(param_1 + 0x49c) =
         ~(ushort)(1 << (uVar4 & 0xff)) & ~(ushort)(1 << (uVar6 & 0xff)) &
         *(ushort *)(param_1 + 0x49c);
    return;
  }
  uVar6 = (param_2 << 0xc) >> 0x1c;
  if (param_4 == 0) {
    FUN_0807fd88(param_1,uVar6,0,0);
    return;
  }
  uVar7 = param_4 & 0xff;
  uVar9 = param_4 >> 8;
  if ((param_2 & 0x800000) == 0) {
    uVar8 = 0x400000;
    iVar3 = 2;
  }
  else {
    uVar8 = 0x800000;
    iVar3 = 4;
  }
  if ((param_2 & 0x1000000) != 0) {
    uVar4 = (uint)*(byte *)(param_1 + 0x405);
    if (((uVar4 < 0xfd) &&
        (*(undefined *)(param_1 + uVar4 + 0x480) = 0xff, *(char *)(param_1 + 0x406) != '\0')) &&
       (((int)(uint)*(ushort *)(*(int *)(param_1 + 0x4d8) + 0x12) >> uVar4 & 1U) != 0)) {
      uVar1 = (uVar4 + 0x3fffffeb) * 4;
      puVar5 = *(uint **)(param_1 + 0x4ac);
      if ((int)uVar1 < 0) {
        uVar1 = (uVar4 + 0x3fffffeb) * -4;
        uVar4 = 0;
      }
      else {
        uVar4 = 0x800000;
      }
      *puVar5 = uVar4 | 0xe50b0000 | uVar1;
      *(uint **)(param_1 + 0x4ac) = puVar5 + 1;
    }
    *(undefined *)(param_1 + 0x405) = 0xfd;
    *(ushort *)(param_1 + 0x49c) = *(ushort *)(param_1 + 0x49c) | 1;
    if (uVar6 != 0xf) {
      iVar2 = FUN_080813d4(param_1,uVar6);
      iVar3 = iVar2;
      if (uVar7 != 0) {
        puVar5 = *(uint **)(param_1 + 0x4ac);
        *puVar5 = uVar7 | param_5 << 0x1c | 0x2000000 | uVar8 | iVar2 << 0x10;
        *(uint **)(param_1 + 0x4ac) = puVar5 + 1;
        iVar3 = 0;
      }
      if (uVar9 != 0) {
        puVar5 = *(uint **)(param_1 + 0x4ac);
        *puVar5 = param_5 << 0x1c | 0x2000c00U | uVar9 | uVar8 | iVar3 << 0x10;
        *(uint **)(param_1 + 0x4ac) = puVar5 + 1;
      }
      if ((param_2 & 0x200000) == 0) {
        return;
      }
      *(undefined *)(param_1 + iVar2 * 8 + 0x406) = 1;
      puVar5 = *(uint **)(param_1 + 0x4ac);
      *puVar5 = param_5 << 0x1c | 0x1a00000U | iVar2 << 0xc;
      *(uint **)(param_1 + 0x4ac) = puVar5 + 1;
      return;
    }
    puVar5 = *(uint **)(param_1 + 0x4ac);
    iVar2 = *(int *)(*(int *)(param_1 + 0x4d8) + 4);
    if (iVar3 == 4) {
      param_4 = param_4 + iVar2;
    }
    else {
      param_4 = iVar2 - param_4;
    }
    *puVar5 = param_5 << 0x1c | 0x3000000U | param_4 & 0xfff | ((param_4 << 0x10) >> 0x1c) << 0x10;
    *(uint **)(param_1 + 0x4ac) = puVar5 + 1;
    if (param_4 >> 0x10 == 0) {
      return;
    }
    puVar5[1] = param_5 << 0x1c | 0x3400000U | (param_4 >> 0x1c) << 0x10 | param_4 >> 0x10 & 0xfff;
    *(uint **)(param_1 + 0x4ac) = puVar5 + 2;
    return;
  }
  FUN_0807fd88(param_1,uVar6,0);
  uVar6 = FUN_08080b7c(param_1,uVar6,0,param_5);
  *(undefined *)(param_1 + uVar6 * 8 + 0x406) = 1;
  if (uVar7 != 0) {
    puVar5 = *(uint **)(param_1 + 0x4ac);
    *puVar5 = uVar7 | param_5 << 0x1c | 0x2000000 | uVar8 | uVar6 << 0xc;
    *(uint **)(param_1 + 0x4ac) = puVar5 + 1;
    uVar7 = uVar6;
  }
  if (uVar9 == 0) {
    return;
  }
  puVar5 = *(uint **)(param_1 + 0x4ac);
  *puVar5 = param_5 << 0x1c | 0x2000c00U | uVar9 | uVar8 | uVar6 << 0xc | uVar7 << 0x10;
  *(uint **)(param_1 + 0x4ac) = puVar5 + 1;
  return;
}


