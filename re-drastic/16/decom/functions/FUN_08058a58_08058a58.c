/*
 * Ghidra decompilation
 *
 * Function : FUN_08058a58
 * Address  : 08058a58
 * Program  : drastic16
 */


void FUN_08058a58(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = *(uint *)(param_1 + 0x90);
  iVar7 = 0;
  uVar4 = *(uint *)(*(int *)(param_1 + 0x98) + (uVar1 >> 1));
  iVar6 = (int)*(short *)(param_1 + 0xae);
  uVar3 = (uint)*(byte *)(param_1 + 0xb4);
  *(uint *)(param_1 + 0x90) = uVar1 + 8;
  do {
    uVar5 = (uint)*(short *)(&DAT_080fa600 + uVar3 * 2);
    uVar2 = uVar5 >> 3;
    if ((uVar4 & 1) != 0) {
      uVar2 = uVar2 + (uVar5 >> 2);
    }
    if ((uVar4 & 2) != 0) {
      uVar2 = uVar2 + (uVar5 >> 1);
    }
    if ((uVar4 & 4) != 0) {
      uVar2 = uVar2 + uVar5;
    }
    if ((uVar4 & 8) == 0) {
      iVar6 = iVar6 - uVar2;
      if (iVar6 < -0x7fff) {
        iVar6 = -0x7fff;
      }
    }
    else {
      iVar6 = uVar2 + iVar6;
      if (0x7ffe < iVar6) {
        iVar6 = 0x7fff;
      }
    }
    uVar3 = uVar3 + (int)(char)(&DAT_080fa6b8)[uVar4 & 7];
    if (0x58 < uVar3) {
      if ((int)uVar3 < 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = 0x58;
      }
    }
    *(short *)(param_1 + (uVar1 & 0x3f) * 2 + iVar7) = (short)iVar6;
    iVar7 = iVar7 + 2;
    uVar4 = uVar4 >> 4;
  } while (iVar7 != 0x10);
  *(short *)(param_1 + 0xae) = (short)iVar6;
  *(char *)(param_1 + 0xb4) = (char)uVar3;
  return;
}


