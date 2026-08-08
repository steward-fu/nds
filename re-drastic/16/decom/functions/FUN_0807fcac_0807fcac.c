/*
 * Ghidra decompilation
 *
 * Function : FUN_0807fcac
 * Address  : 0807fcac
 * Program  : drastic16
 */


void FUN_0807fcac(int param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  
  uVar3 = (uint)*(byte *)(param_1 + 0x40d);
  if (((uVar3 < 0xfd) &&
      (*(undefined *)(param_1 + 0x480 + uVar3) = 0xff, *(char *)(param_1 + 0x40e) != '\0')) &&
     (((int)(uint)*(ushort *)(*(int *)(param_1 + 0x4d8) + 0x12) >> uVar3 & 1U) != 0)) {
    puVar2 = *(uint **)(param_1 + 0x4ac);
    uVar1 = (uVar3 + 0x3fffffeb) * 4;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar3 + 0x3fffffeb) * -4;
      uVar3 = 0;
    }
    else {
      uVar3 = 0x800000;
    }
    *puVar2 = uVar3 | 0xe50b1000 | uVar1;
    *(uint **)(param_1 + 0x4ac) = puVar2 + 1;
  }
  uVar3 = (uint)*(byte *)(param_1 + 0x475);
  *(undefined *)(param_1 + 0x40d) = 0xfd;
  if (((uVar3 < 0xfd) &&
      (*(undefined *)(param_1 + 0x480 + uVar3) = 0xff, *(char *)(param_1 + 0x476) != '\0')) &&
     (((int)(uint)*(ushort *)(*(int *)(param_1 + 0x4d8) + 0x12) >> uVar3 & 1U) != 0)) {
    puVar2 = *(uint **)(param_1 + 0x4ac);
    uVar1 = (uVar3 + 0x3fffffeb) * 4;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar3 + 0x3fffffeb) * -4;
      uVar3 = 0;
    }
    else {
      uVar3 = 0x800000;
    }
    *puVar2 = uVar3 | 0xe50be000 | uVar1;
    *(uint **)(param_1 + 0x4ac) = puVar2 + 1;
  }
  *(undefined *)(param_1 + 0x475) = 0xfd;
  return;
}


