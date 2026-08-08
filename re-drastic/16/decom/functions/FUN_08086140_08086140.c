/*
 * Ghidra decompilation
 *
 * Function : FUN_08086140
 * Address  : 08086140
 * Program  : drastic16
 */


void FUN_08086140(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int local_30 [3];
  
  uVar5 = (param_2 << 0x10) >> 0x1c;
  if (uVar5 == 0xf) {
    uVar5 = (uint)*(byte *)(param_1 + 0x405);
    if (((uVar5 < 0xfd) &&
        (*(undefined *)(param_1 + uVar5 + 0x480) = 0xff, *(char *)(param_1 + 0x406) != '\0')) &&
       (((int)(uint)*(ushort *)(*(int *)(param_1 + 0x4d8) + 0x12) >> uVar5 & 1U) != 0)) {
      puVar4 = *(uint **)(param_1 + 0x4ac);
      uVar6 = (uVar5 + 0x3fffffeb) * 4;
      if ((int)uVar6 < 0) {
        uVar6 = (uVar5 + 0x3fffffeb) * -4;
        uVar5 = 0;
      }
      else {
        uVar5 = 0x800000;
      }
      *puVar4 = uVar5 | 0xe50b0000 | uVar6;
      *(uint **)(param_1 + 0x4ac) = puVar4 + 1;
    }
    uVar6 = 0;
    iVar1 = 0;
    *(undefined *)(param_1 + 0x405) = 0xfd;
    *(ushort *)(param_1 + 0x49c) = *(ushort *)(param_1 + 0x49c) | 1;
  }
  else {
    iVar1 = FUN_080800fc(param_1,uVar5,1,local_30);
    *(undefined *)(param_1 + iVar1 * 8 + 0x406) = 1;
    if ((param_2 >> 0x1c == 0xe) || (local_30[0] == 0)) {
      uVar6 = iVar1 << 0xc;
    }
    else {
      puVar4 = *(uint **)(param_1 + 0x4ac);
      uVar6 = iVar1 << 0xc;
      *puVar4 = uVar5 * -4 + 0x54 | 0xe51b0000 | uVar6;
      *(uint **)(param_1 + 0x4ac) = puVar4 + 1;
    }
  }
  if ((param_2 & 0x400000) != 0) {
    iVar1 = FUN_080800fc(param_1,0xfd,1,local_30);
    uVar5 = FUN_080800fc(param_1,0xfd,1,local_30);
    puVar4 = *(uint **)(param_1 + 0x4ac);
    *puVar4 = iVar1 << 0xc | 0xe24b0fa8;
    puVar4[2] = param_2 & 0xf0000000 | 0x7900100 | uVar6 | uVar5 | iVar1 << 0x10;
    puVar4[1] = uVar5 << 0xc | 0xe51b0284;
    *(uint **)(param_1 + 0x4ac) = puVar4 + 3;
    return;
  }
  uVar2 = FUN_080800fc(param_1,0xfd,1,local_30);
  param_2 = param_2 & 0xf0000000;
  uVar5 = *(int *)(param_1 + 0x4a4) << 4;
  if ((uVar5 | 8) == 0xf8) {
    puVar4 = *(uint **)(param_1 + 0x4ac) + 1;
    **(uint **)(param_1 + 0x4ac) = param_2 | 0x10f0000 | uVar6;
  }
  else {
    puVar3 = *(uint **)(param_1 + 0x4ac);
    uVar7 = uVar6 | param_2 | iVar1 << 0x10;
    puVar3[3] = uVar5 | 0x2000408 | uVar7;
    puVar4 = puVar3 + 5;
    puVar3[4] = uVar7 | 0x1800000 | uVar2;
    *puVar3 = uVar2 << 0xc | 0xe51b0080;
    puVar3[1] = param_2 | 0x10f0000 | uVar6;
    puVar3[2] = uVar5 | 0xe3c00408 | uVar2 << 0xc | uVar2 << 0x10;
  }
  puVar4[1] = uVar6 | 0x7da0010 | uVar2 | param_2;
  *puVar4 = uVar2 << 0xc | 0xe51b0058;
  *(uint **)(param_1 + 0x4ac) = puVar4 + 2;
  if (*(char *)(param_1 + 0x4f1) != '\0') {
    puVar4[2] = uVar6 | 0x3800020 | iVar1 << 0x10 | param_2;
    *(uint **)(param_1 + 0x4ac) = puVar4 + 3;
  }
  return;
}


