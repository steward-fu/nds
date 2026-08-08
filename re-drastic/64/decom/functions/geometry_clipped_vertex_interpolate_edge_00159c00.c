/*
 * Ghidra decompilation
 *
 * Function : geometry_clipped_vertex_interpolate_edge
 * Address  : 00159c00
 * Program  : drastic64
 */


void geometry_clipped_vertex_interpolate_edge
               (undefined8 *param_1,int *param_2,int *param_3,ulong param_4)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ushort uVar9;
  ushort uVar10;
  uint uVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  short sVar19;
  int iVar20;
  short sVar21;
  long lVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  short sVar28;
  ulong uVar29;
  
  uVar29 = param_4 >> 1 & 0x7fffffff;
  uVar9 = *(ushort *)(param_2 + 5);
  uVar10 = *(ushort *)(param_3 + 5);
  uVar15 = uVar9 >> 5 & 0x1f;
  uVar1 = uVar9 & 0x1f;
  uVar16 = uVar10 >> 5 & 0x1f;
  iVar13 = (int)(short)param_2[4];
  iVar14 = (int)(short)param_3[4];
  iVar5 = *param_2;
  iVar7 = param_2[1];
  uVar17 = uVar9 >> 10 & 0x1f;
  iVar6 = param_2[2];
  iVar8 = param_2[3];
  uVar18 = uVar10 >> 10 & 0x1f;
  iVar26 = param_3[3];
  iVar2 = param_2[4] >> 0x10;
  iVar27 = param_3[4] >> 0x10;
  iVar23 = iVar8;
  iVar24 = iVar26;
  if ((param_4 & 1) != 0) {
    iVar23 = -iVar8;
    iVar24 = -iVar26;
  }
  lVar12 = ((long)iVar24 - (long)iVar23) - ((long)param_3[uVar29] - (long)param_2[uVar29]);
  lVar22 = 0x40000;
  if (lVar12 != 0) {
    uVar11 = param_2[uVar29] - iVar23;
    iVar23 = 0;
    if (lVar12 != 0) {
      iVar23 = (int)((long)((-(ulong)(uVar11 >> 0x1f) & 0xfffc000000000000 | (ulong)uVar11 << 0x12)
                           + lVar12 + -1) / lVar12);
    }
    lVar22 = (long)iVar23;
  }
  iVar23 = *param_3 - iVar5;
  if (iVar23 < 0) {
    iVar23 = -(int)((ulong)((iVar5 - *param_3) * lVar22) >> 0x12);
  }
  else {
    iVar23 = (int)((ulong)(iVar23 * lVar22) >> 0x12);
  }
  iVar24 = param_3[1] - iVar7;
  if (iVar24 < 0) {
    iVar24 = -(int)((ulong)((iVar7 - param_3[1]) * lVar22) >> 0x12);
  }
  else {
    iVar24 = (int)((ulong)(iVar24 * lVar22) >> 0x12);
  }
  iVar25 = param_3[2] - iVar6;
  if (iVar25 < 0) {
    iVar25 = -(int)((ulong)((iVar6 - param_3[2]) * lVar22) >> 0x12);
  }
  else {
    iVar25 = (int)((ulong)(iVar25 * lVar22) >> 0x12);
  }
  if (iVar26 - iVar8 < 0) {
    iVar26 = -(int)((ulong)((iVar8 - iVar26) * lVar22) >> 0x12);
  }
  else {
    iVar26 = (int)((ulong)((iVar26 - iVar8) * lVar22) >> 0x12);
  }
  iVar20 = iVar14 - iVar13;
  iVar8 = iVar8 + iVar26;
  if (iVar20 < 0) {
    iVar26 = -(int)((ulong)((iVar13 - iVar14) * lVar22) >> 0x12);
  }
  else {
    iVar26 = (int)((ulong)(iVar20 * lVar22) >> 0x12);
  }
  iVar14 = iVar27 - iVar2;
  if (iVar14 < 0) {
    iVar27 = -(int)((ulong)((iVar2 - iVar27) * lVar22) >> 0x12);
  }
  else {
    iVar27 = (int)((ulong)(iVar14 * lVar22) >> 0x12);
  }
  iVar14 = (uVar10 & 0x1f) - uVar1;
  if (iVar14 < 0) {
    sVar19 = -(short)((ulong)((int)(uVar1 - (uVar10 & 0x1f)) * lVar22) >> 0x12);
  }
  else {
    sVar19 = (short)((ulong)(iVar14 * lVar22) >> 0x12);
  }
  iVar14 = uVar16 - uVar15;
  if (iVar14 < 0) {
    sVar28 = -(short)((ulong)((int)(uVar15 - uVar16) * lVar22) >> 0x12);
  }
  else {
    sVar28 = (short)((ulong)(iVar14 * lVar22) >> 0x12);
  }
  iVar14 = uVar18 - uVar17;
  if (iVar14 < 0) {
    sVar21 = -(short)((ulong)((int)(uVar17 - uVar18) * lVar22) >> 0x12);
  }
  else {
    sVar21 = (short)((ulong)(iVar14 * lVar22) >> 0x12);
  }
  *(uint *)(param_1 + 2) = iVar13 + iVar26 & 0xffffU | (iVar2 + iVar27) * 0x10000;
  *(short *)((long)param_1 + 0x14) =
       (short)uVar1 + sVar19 | ((short)uVar15 + sVar28) * 0x20 | ((short)uVar17 + sVar21) * 0x400;
  iVar2 = -iVar8;
  if ((param_4 & 1) == 0) {
    iVar2 = iVar8;
  }
  iVar26 = -iVar8;
  param_1[1] = CONCAT44(iVar8,iVar6 + iVar25);
  *param_1 = CONCAT44(iVar7 + iVar24,iVar5 + iVar23);
  *(int *)((long)param_1 + uVar29 * 4) = iVar2;
  iVar2 = *(int *)param_1;
  iVar27 = *(int *)((long)param_1 + 4);
  bVar3 = iVar8 < iVar2 | 2;
  if (iVar2 + iVar8 < 0 == SBORROW4(iVar2,iVar26)) {
    bVar3 = iVar8 < iVar2;
  }
  bVar4 = bVar3 | 4;
  if (iVar27 <= iVar8) {
    bVar4 = bVar3;
  }
  iVar2 = *(int *)(param_1 + 1);
  bVar3 = bVar4 | 8;
  if (iVar27 + iVar8 < 0 == SBORROW4(iVar27,iVar26)) {
    bVar3 = bVar4;
  }
  bVar4 = bVar3 | 0x10;
  if (iVar2 <= iVar8) {
    bVar4 = bVar3;
  }
  bVar3 = bVar4 | 0x20;
  if (iVar2 + iVar8 < 0 == SBORROW4(iVar2,iVar26)) {
    bVar3 = bVar4;
  }
  *(byte *)((long)param_1 + 0x16) = bVar3;
  return;
}


