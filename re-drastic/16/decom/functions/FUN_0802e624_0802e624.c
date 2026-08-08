/*
 * Ghidra decompilation
 *
 * Function : FUN_0802e624
 * Address  : 0802e624
 * Program  : drastic16
 */


void FUN_0802e624(int *param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  ushort *puVar12;
  
  bVar2 = *(byte *)((int)param_1 + 0xe);
  uVar11 = (uint)bVar2;
  iVar1 = (uint)*(byte *)((int)param_1 + 0xf) * 2;
  if (*(byte *)((int)param_1 + 0xf) == 0 && uVar11 == 0x10) {
    if (*(short *)(param_1 + 2) != 0) {
      puVar3 = (uint *)(param_2 + -4);
      uVar11 = 0;
      puVar12 = (ushort *)(*param_1 + -2);
      do {
        puVar3 = puVar3 + 1;
        uVar5 = *puVar3;
        uVar11 = uVar11 + 1;
        if (uVar5 >> 0x18 == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = 0x8000;
        }
        puVar12 = puVar12 + 1;
        *puVar12 = uVar7 | (ushort)((uVar5 << 0x18) >> 0x19) |
                   (ushort)(((uVar5 << 0x10) >> 0x19) << 5) | (ushort)(((uVar5 << 8) >> 0x19) << 10)
        ;
      } while (uVar11 < *(ushort *)(param_1 + 2));
      return;
    }
  }
  else {
    uVar5 = 0;
    if (*(short *)(param_1 + 2) != 0) {
      iVar8 = *param_1;
      iVar10 = param_1[1];
      puVar3 = (uint *)(param_2 + -4);
      uVar6 = uVar5;
      do {
        puVar3 = puVar3 + 1;
        uVar9 = *puVar3;
        uVar6 = uVar6 + 1;
        uVar4 = (uint)*(ushort *)(iVar10 + uVar5);
        *(ushort *)(iVar8 + uVar5) =
             ~((ushort)~(ushort)(((iVar1 * (uVar4 & 0x1f) + uVar11 * (uVar9 & 0xff) >> 5) << 0x11)
                                >> 0x10) >> 1) |
             (short)iVar1 * (ushort)((uVar4 << 0x16) >> 0x1b) +
             (ushort)bVar2 * (ushort)(byte)(uVar9 >> 8) & 0xffe0 |
             (ushort)((iVar1 * ((uVar4 << 0x11) >> 0x1b) + uVar11 * ((uVar9 << 8) >> 0x18) >> 5) <<
                     10);
        uVar5 = uVar5 + 2;
      } while (uVar6 < *(ushort *)(param_1 + 2));
    }
  }
  return;
}


