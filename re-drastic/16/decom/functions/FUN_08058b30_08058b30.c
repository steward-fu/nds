/*
 * Ghidra decompilation
 *
 * Function : FUN_08058b30
 * Address  : 08058b30
 * Program  : drastic16
 */


void FUN_08058b30(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  undefined8 uVar8;
  
  if ((*(byte *)(param_2 + 0xb1) & 2) != 0) {
    uVar2 = **(uint **)(param_2 + 0x94);
    uVar6 = (uVar2 << 0x16) >> 0x1e;
    uVar3 = uVar2 & 0x7f;
    bVar7 = uVar6 != 3;
    uVar2 = (uVar2 << 9) >> 0x19;
    if (bVar7) {
      uVar6 = 4 - uVar6;
    }
    if (!bVar7) {
      uVar6 = 0;
    }
    uVar4 = *(uint *)(*(int *)(param_1 + 0x40bd8) + 0x100) & 0x7f;
    if (uVar3 == 0x7f) {
      uVar3 = 0x80;
    }
    if (uVar2 == 0x7f) {
      iVar5 = 0;
      uVar2 = 0x80;
    }
    else {
      iVar5 = 0x80 - uVar2;
    }
    if (uVar4 == 0x7f) {
      uVar4 = 0x80;
    }
    iVar1 = uVar3 * uVar4 << (uVar6 & 0xff);
    *(short *)(param_2 + 0xa8) = (short)((uint)(iVar5 * iVar1) >> 0xd);
    *(short *)(param_2 + 0xaa) = (short)(uVar2 * iVar1 >> 0xd);
  }
  if ((*(byte *)(param_2 + 0xb1) & 1) != 0) {
    uVar8 = __aeabi_uldivmod(0,0x1006f43,
                             *(int *)(param_1 + 0x40008) *
                             (0x10000 - (uint)*(ushort *)(*(int *)(param_2 + 0x94) + 8)),0);
    uVar2 = (uint)*(byte *)(param_2 + 0xb6);
    bVar7 = uVar2 != 0xff;
    if (bVar7) {
      uVar2 = param_1 + uVar2 * 0x20 + 0x40b98;
    }
    *(undefined8 *)(param_2 + 0x88) = uVar8;
    if (bVar7) {
      *(undefined8 *)(uVar2 + 8) = uVar8;
    }
  }
  *(undefined *)(param_2 + 0xb1) = 0;
  return;
}


