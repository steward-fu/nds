/*
 * Ghidra decompilation
 *
 * Function : FUN_08034788
 * Address  : 08034788
 * Program  : drastic16
 */


void FUN_08034788(int param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  
  uVar9 = *(uint *)(param_1 + 8);
  uVar4 = *(uint *)(&DAT_080e68b0 + ((uVar9 << 8) >> 0x18) * 4);
  iVar6 = param_2 + (uVar4 & 0xf0);
  iVar5 = param_2 + (uVar4 & 0xf) * 0x10;
  iVar10 = param_2 + ((uVar4 << 0x14) >> 0x1c) * 0x10;
  uVar3 = (uint)*(ushort *)(iVar5 + 6);
  param_2 = param_2 + (uVar4 >> 0xc) * 0x10;
  if ((uVar3 == *(ushort *)(iVar6 + 6)) &&
     ((uint)*(ushort *)(iVar10 + 6) == (uint)*(ushort *)(param_2 + 6))) {
    if (*(ushort *)(param_2 + 4) != *(ushort *)(iVar5 + 4)) {
      return;
    }
    if (*(ushort *)(iVar10 + 4) != *(ushort *)(iVar6 + 4)) {
      return;
    }
    if (*(short *)(iVar5 + 0xe) != *(short *)(iVar6 + 0xe)) {
      return;
    }
    if (*(short *)(param_2 + 0xe) != *(short *)(iVar10 + 0xe)) {
      return;
    }
    if (*(short *)(iVar5 + 0xc) != *(short *)(param_2 + 0xc)) {
      return;
    }
    if (*(short *)(iVar6 + 0xc) != *(short *)(iVar10 + 0xc)) {
      return;
    }
    iVar8 = iVar5;
    iVar7 = iVar6;
    iVar11 = iVar10;
    if (*(ushort *)(param_2 + 4) < *(ushort *)(iVar10 + 4)) {
      iVar8 = iVar6;
      iVar7 = iVar5;
      iVar11 = param_2;
    }
  }
  else {
    if (uVar3 != *(ushort *)(param_2 + 6)) {
      return;
    }
    if ((uint)*(ushort *)(iVar10 + 6) != (uint)*(ushort *)(iVar6 + 6)) {
      return;
    }
    if (*(ushort *)(iVar10 + 4) != *(ushort *)(param_2 + 4)) {
      return;
    }
    if (*(ushort *)(iVar6 + 4) != *(ushort *)(iVar5 + 4)) {
      return;
    }
    if (*(short *)(iVar5 + 0xe) != *(short *)(param_2 + 0xe)) {
      return;
    }
    if (*(short *)(iVar6 + 0xe) != *(short *)(iVar10 + 0xe)) {
      return;
    }
    if (*(short *)(iVar5 + 0xc) != *(short *)(iVar6 + 0xc)) {
      return;
    }
    if (*(short *)(param_2 + 0xc) != *(short *)(iVar10 + 0xc)) {
      return;
    }
    iVar8 = param_2;
    iVar7 = iVar5;
    iVar11 = iVar6;
    if (*(ushort *)(iVar10 + 4) <= *(ushort *)(iVar6 + 4)) {
      iVar8 = iVar5;
      iVar7 = param_2;
      iVar11 = iVar10;
    }
  }
  iVar10 = (uint)*(ushort *)(iVar8 + 4) - (uint)*(ushort *)(iVar7 + 4);
  uVar2 = *(ushort *)(iVar7 + 0xc);
  uVar1 = *(ushort *)(iVar7 + 0xe);
  iVar5 = iVar10 * 0x10;
  iVar6 = (int)*(short *)(iVar8 + 0xc) - (int)(short)uVar2;
  if ((iVar5 - iVar6 == 0) || (iVar5 - (iVar6 + 1) == 0)) {
    iVar6 = *(ushort *)(iVar11 + 6) - uVar3;
    iVar8 = (int)*(short *)(iVar11 + 0xe) - (int)(short)uVar1;
    iVar5 = iVar6 * 0x10;
    if (((iVar5 - iVar8 == 0) || (iVar5 - (iVar8 + 1) == 0)) &&
       (((((uVar9 >> 8 & 2) != 0 && ((*(uint *)(param_1 + 4) & 0x30) == 0)) &&
         ((uVar9 >> 8 & 0x30) == 0x30)) &&
        (((-1 < (short)(uVar2 | uVar1) &&
          ((uint)(iVar10 + ((int)(short)uVar2 >> 4)) <=
           (uint)*(ushort *)(*(int *)(param_1 + 0xc) + 0x24))) &&
         ((uint)(((int)(short)uVar1 >> 4) + iVar6) <=
          (uint)*(ushort *)(*(int *)(param_1 + 0xc) + 0x26))))))) {
      *(uint *)(param_1 + 8) = uVar9 | 0x4000;
    }
  }
  return;
}


