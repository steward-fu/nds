/*
 * Ghidra decompilation
 *
 * Function : spu_update_channel_settings
 * Address  : 0016bf60
 * Program  : drastic64
 */


void spu_update_channel_settings(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  
  if ((*(byte *)(param_2 + 0xbd) >> 1 & 1) != 0) {
    uVar3 = **(uint **)(param_2 + 0x98);
    uVar7 = uVar3 >> 8 & 3;
    uVar5 = 4 - uVar7;
    uVar1 = uVar3 & 0x7f;
    uVar2 = *(uint *)(*(long *)(param_1 + 0x40ce8) + 0x100) & 0x7f;
    if (uVar7 == 3) {
      uVar5 = 0;
    }
    if (uVar1 == 0x7f) {
      uVar1 = 0x80;
    }
    if (uVar2 == 0x7f) {
      uVar2 = 0x80;
    }
    uVar3 = uVar3 >> 0x10 & 0x7f;
    iVar4 = uVar1 * uVar2 << (ulong)(uVar5 & 0x1f);
    *(short *)(param_2 + 0xb4) = (short)((0x7f - uVar3) * iVar4 >> 0xd);
    *(short *)(param_2 + 0xb6) = (short)(uVar3 * iVar4 >> 0xd);
  }
  if ((*(byte *)(param_2 + 0xbd) & 1) != 0) {
    uVar8 = (ulong)((0x10000 - (uint)*(ushort *)(*(long *)(param_2 + 0x98) + 8)) *
                   *(int *)(param_1 + 0x40010));
    uVar6 = 0;
    if (uVar8 != 0) {
      uVar6 = 0x1006f4300000000 / uVar8;
    }
    *(ulong *)(param_2 + 0x88) = uVar6;
    if (*(byte *)(param_2 + 0xc2) != 0xff) {
      *(ulong *)(param_1 + ((ulong)*(byte *)(param_2 + 0xc2) + 0x2065) * 0x20 + 0x10) = uVar6;
    }
  }
  *(undefined *)(param_2 + 0xbd) = 0;
  return;
}


