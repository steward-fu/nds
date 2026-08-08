/*
 * Ghidra decompilation
 *
 * Function : FUN_08080b7c
 * Address  : 08080b7c
 * Program  : drastic16
 */


int FUN_08080b7c(int param_1,int param_2,ushort param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int local_18;
  
  if (param_2 == 0xf) {
    uVar3 = (uint)*(byte *)(param_1 + 0x405);
    if (((uVar3 < 0xfd) &&
        (*(undefined *)(param_1 + uVar3 + 0x480) = 0xff, *(char *)(param_1 + 0x406) != '\0')) &&
       (((int)(uint)*(ushort *)(*(int *)(param_1 + 0x4d8) + 0x12) >> uVar3 & 1U) != 0)) {
      puVar4 = *(uint **)(param_1 + 0x4ac);
      uVar2 = (uVar3 + 0x3fffffeb) * 4;
      if ((int)uVar2 < 0) {
        uVar2 = (uVar3 + 0x3fffffeb) * -4;
        uVar3 = 0;
      }
      else {
        uVar3 = 0x800000;
      }
      *puVar4 = uVar3 | 0xe50b0000 | uVar2;
      *(uint **)(param_1 + 0x4ac) = puVar4 + 1;
    }
    *(undefined *)(param_1 + 0x405) = 0xfd;
    *(ushort *)(param_1 + 0x49c) = param_3 | *(ushort *)(param_1 + 0x49c);
    return 0;
  }
  iVar1 = FUN_080800fc();
  *(undefined *)(param_1 + iVar1 * 8 + 0x406) = 1;
  if ((param_4 != 0xe) && (local_18 != 0)) {
    puVar4 = *(uint **)(param_1 + 0x4ac);
    uVar3 = (param_2 + 0x3fffffeb) * 4;
    if ((int)uVar3 < 0) {
      uVar3 = (param_2 + 0x3fffffeb) * -4;
      uVar2 = 0;
    }
    else {
      uVar2 = 0x800000;
    }
    *puVar4 = iVar1 << 0xc | 0xe51b0000U | uVar2 | uVar3;
    *(uint **)(param_1 + 0x4ac) = puVar4 + 1;
  }
  return iVar1;
}


