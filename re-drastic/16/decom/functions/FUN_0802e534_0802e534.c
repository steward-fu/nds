/*
 * Ghidra decompilation
 *
 * Function : FUN_0802e534
 * Address  : 0802e534
 * Program  : drastic16
 */


void FUN_0802e534(int *param_1,int param_2)

{
  int iVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  
  bVar3 = *(byte *)((int)param_1 + 0xe);
  iVar1 = (uint)*(byte *)((int)param_1 + 0xf) * 2;
  if (*(byte *)((int)param_1 + 0xf) == 0 && bVar3 == 0x10) {
    FUN_08090558();
    return;
  }
  uVar7 = 0;
  if (*(short *)(param_1 + 2) != 0) {
    iVar4 = *param_1;
    iVar10 = param_1[1];
    iVar6 = param_2;
    uVar11 = uVar7;
    do {
      uVar5 = (uint)*(ushort *)(iVar10 + uVar7);
      pbVar2 = (byte *)(param_2 + uVar11);
      uVar11 = uVar11 + 1;
      uVar8 = iVar1 * (uVar5 & 0x1f) + (int)(short)(ushort)*pbVar2 * (int)(short)(ushort)bVar3 >> 5;
      if (0x1e < uVar8) {
        uVar8 = 0x1f;
      }
      uVar9 = iVar1 * ((uVar5 << 0x16) >> 0x1b) +
              (int)(short)(ushort)*(byte *)(iVar6 + 0x100) * (int)(short)(ushort)bVar3 >> 5;
      if (0x1e < uVar9) {
        uVar9 = 0x1f;
      }
      uVar5 = iVar1 * ((uVar5 << 0x11) >> 0x1b) +
              (int)(short)(ushort)*(byte *)(iVar6 + 0x200) * (int)(short)(ushort)bVar3 >> 5;
      if (0x1e < uVar5) {
        uVar5 = 0x1f;
      }
      *(ushort *)(iVar4 + uVar7) =
           ~((ushort)~(ushort)((uVar8 << 0x11) >> 0x10) >> 1) | (ushort)(uVar9 << 5) |
           (ushort)(uVar5 << 10);
      uVar7 = uVar7 + 2;
      iVar6 = iVar6 + 1;
    } while (uVar11 < *(ushort *)(param_1 + 2));
  }
  return;
}


