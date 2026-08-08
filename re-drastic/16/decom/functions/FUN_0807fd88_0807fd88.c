/*
 * Ghidra decompilation
 *
 * Function : FUN_0807fd88
 * Address  : 0807fd88
 * Program  : drastic16
 */


void FUN_0807fd88(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  
  iVar2 = param_1 + (param_3 + 0x80) * 8;
  uVar5 = (uint)*(byte *)(iVar2 + 5);
  uVar4 = (uint)*(byte *)(param_1 + param_2 + 0x480);
  if (((uVar5 < 0xfd) &&
      (*(undefined *)(param_1 + uVar5 + 0x480) = 0xff, *(char *)(iVar2 + 6) != '\0')) &&
     (((int)(uint)*(ushort *)(*(int *)(param_1 + 0x4d8) + 0x12) >> uVar5 & 1U) != 0)) {
    puVar3 = *(uint **)(param_1 + 0x4ac);
    uVar1 = (uVar5 + 0x3fffffeb) * 4;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar5 + 0x3fffffeb) * -4;
      uVar5 = 0;
    }
    else {
      uVar5 = 0x800000;
    }
    *puVar3 = param_3 << 0xc | 0xe50b0000 | uVar5 | uVar1;
    *(uint **)(param_1 + 0x4ac) = puVar3 + 1;
  }
  *(undefined *)(iVar2 + 5) = 0xfd;
  *(ushort *)(param_1 + 0x49c) = *(ushort *)(param_1 + 0x49c) | (ushort)(1 << (param_3 & 0xff));
  if (param_2 == 0xf) {
    iVar2 = *(int *)(param_1 + 0x4d8);
    puVar3 = *(uint **)(param_1 + 0x4ac);
    uVar4 = *(uint *)(iVar2 + 4);
    *puVar3 = uVar4 & 0xfff | 0xe3000000 | param_3 << 0xc | ((uVar4 << 0x10) >> 0x1c) << 0x10;
    uVar5 = *(uint *)(iVar2 + 4);
    *(uint **)(param_1 + 0x4ac) = puVar3 + 1;
    uVar4 = uVar5 >> 0x10;
    if (uVar4 != 0) {
      puVar3[1] = uVar4 & 0xfff | (uVar5 >> 0x1c) << 0x10 | 0xe3400000 | param_3 << 0xc;
      *(uint **)(param_1 + 0x4ac) = puVar3 + 2;
      return;
    }
  }
  else {
    if (uVar4 == 0xff) {
      puVar3 = *(uint **)(param_1 + 0x4ac);
      uVar4 = (param_2 + 0x3fffffeb) * 4;
      if ((int)uVar4 < 0) {
        uVar4 = (param_2 + 0x3fffffeb) * -4;
        uVar5 = 0;
      }
      else {
        uVar5 = 0x800000;
      }
      *puVar3 = param_3 << 0xc | 0xe51b0000 | uVar5 | uVar4;
      *(uint **)(param_1 + 0x4ac) = puVar3 + 1;
      return;
    }
    if (param_3 != uVar4) {
      puVar3 = *(uint **)(param_1 + 0x4ac);
      *puVar3 = param_3 << 0xc | 0xe1a00000 | uVar4;
      *(uint **)(param_1 + 0x4ac) = puVar3 + 1;
    }
  }
  return;
}


