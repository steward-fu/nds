/*
 * Ghidra decompilation
 *
 * Function : FUN_08047308
 * Address  : 08047308
 * Program  : drastic16
 */


void FUN_08047308(undefined8 *param_1,int *param_2,int *param_3,uint param_4)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  undefined8 uVar25;
  
  uVar1 = param_4 >> 1;
  iVar17 = param_3[4];
  iVar20 = (int)(short)param_2[4];
  iVar6 = param_2[4] >> 0x10;
  uVar15 = (uint)*(ushort *)(param_2 + 5);
  uVar23 = (uint)*(ushort *)(param_3 + 5);
  uVar12 = param_3[uVar1];
  uVar18 = param_2[uVar1];
  iVar22 = param_3[1];
  uVar24 = param_3[3];
  uVar19 = param_2[3];
  iVar16 = *param_3;
  iVar9 = param_3[2];
  iVar14 = *param_2;
  iVar21 = param_2[1];
  iVar7 = param_2[2];
  uVar13 = uVar24;
  uVar5 = uVar19;
  if ((param_4 & 1) != 0) {
    uVar13 = -uVar24;
    uVar5 = -uVar19;
  }
  uVar10 = (uVar18 - uVar12) + (uVar13 - uVar5);
  uVar13 = (((int)uVar18 >> 0x1f) - (((int)uVar12 >> 0x1f) + (uint)(uVar18 < uVar12))) +
           (((int)uVar13 >> 0x1f) - (((int)uVar5 >> 0x1f) + (uint)(uVar13 < uVar5))) +
           (uint)CARRY4(uVar18 - uVar12,uVar13 - uVar5);
  if ((uVar10 | uVar13) == 0) {
    uVar5 = 0x40000;
    iVar8 = 0;
  }
  else {
    uVar25 = VectorShiftRight(CONCAT44(uVar18 - uVar5,uVar18 - uVar5),0x20);
    uVar25 = VectorShiftLeft(uVar25,0x12,0x40,0);
    uVar5 = __aeabi_ldivmod((uVar10 - 1) + (uint)uVar25,
                            (uVar13 - (uVar10 == 0)) + (int)((ulonglong)uVar25 >> 0x20) +
                            (uint)CARRY4(uVar10 - 1,(uint)uVar25));
    iVar8 = (int)uVar5 >> 0x1f;
  }
  uVar13 = iVar16 - iVar14;
  if ((int)uVar13 < 0) {
    uVar13 = -uVar13;
    uVar13 = -((uint)((ulonglong)uVar13 * (ulonglong)uVar5) >> 0x12 |
              (uVar13 * iVar8 + uVar5 * ((int)uVar13 >> 0x1f) +
              (int)((ulonglong)uVar13 * (ulonglong)uVar5 >> 0x20)) * 0x4000);
  }
  else {
    uVar13 = (uint)((ulonglong)uVar13 * (ulonglong)uVar5) >> 0x12 |
             (uVar13 * iVar8 + uVar5 * ((int)uVar13 >> 0x1f) +
             (int)((ulonglong)uVar13 * (ulonglong)uVar5 >> 0x20)) * 0x4000;
  }
  uVar12 = iVar22 - iVar21;
  if ((int)uVar12 < 0) {
    uVar12 = -uVar12;
    uVar12 = -((uint)((ulonglong)uVar12 * (ulonglong)uVar5) >> 0x12 |
              (uVar12 * iVar8 + uVar5 * ((int)uVar12 >> 0x1f) +
              (int)((ulonglong)uVar12 * (ulonglong)uVar5 >> 0x20)) * 0x4000);
  }
  else {
    uVar12 = (uint)((ulonglong)uVar12 * (ulonglong)uVar5) >> 0x12 |
             (uVar12 * iVar8 + uVar5 * ((int)uVar12 >> 0x1f) +
             (int)((ulonglong)uVar12 * (ulonglong)uVar5 >> 0x20)) * 0x4000;
  }
  uVar18 = iVar9 - iVar7;
  if ((int)uVar18 < 0) {
    uVar18 = -uVar18;
    uVar18 = -((uint)((ulonglong)uVar18 * (ulonglong)uVar5) >> 0x12 |
              (uVar18 * iVar8 + uVar5 * ((int)uVar18 >> 0x1f) +
              (int)((ulonglong)uVar18 * (ulonglong)uVar5 >> 0x20)) * 0x4000);
  }
  else {
    uVar18 = (uint)((ulonglong)uVar18 * (ulonglong)uVar5) >> 0x12 |
             (uVar18 * iVar8 + uVar5 * ((int)uVar18 >> 0x1f) +
             (int)((ulonglong)uVar18 * (ulonglong)uVar5 >> 0x20)) * 0x4000;
  }
  uVar24 = uVar24 - uVar19;
  if ((int)uVar24 < 0) {
    uVar24 = -uVar24;
    uVar24 = -((uint)((ulonglong)uVar24 * (ulonglong)uVar5) >> 0x12 |
              (uVar24 * iVar8 + uVar5 * ((int)uVar24 >> 0x1f) +
              (int)((ulonglong)uVar24 * (ulonglong)uVar5 >> 0x20)) * 0x4000);
  }
  else {
    uVar24 = (uint)((ulonglong)uVar24 * (ulonglong)uVar5) >> 0x12 |
             (uVar24 * iVar8 + uVar5 * ((int)uVar24 >> 0x1f) +
             (int)((ulonglong)uVar24 * (ulonglong)uVar5 >> 0x20)) * 0x4000;
  }
  uVar10 = (short)iVar17 - iVar20;
  iVar9 = uVar19 + uVar24;
  if ((int)uVar10 < 0) {
    uVar10 = -uVar10;
    uVar24 = -((uint)((ulonglong)uVar10 * (ulonglong)uVar5) >> 0x12 |
              (uVar10 * iVar8 + uVar5 * ((int)uVar10 >> 0x1f) +
              (int)((ulonglong)uVar10 * (ulonglong)uVar5 >> 0x20)) * 0x4000);
  }
  else {
    uVar24 = (uint)((ulonglong)uVar10 * (ulonglong)uVar5) >> 0x12 |
             (uVar10 * iVar8 + uVar5 * ((int)uVar10 >> 0x1f) +
             (int)((ulonglong)uVar10 * (ulonglong)uVar5 >> 0x20)) * 0x4000;
  }
  uVar19 = (iVar17 >> 0x10) - iVar6;
  if ((int)uVar19 < 0) {
    uVar19 = -uVar19;
    uVar19 = -((uint)((ulonglong)uVar19 * (ulonglong)uVar5) >> 0x12 |
              (uVar19 * iVar8 + uVar5 * ((int)uVar19 >> 0x1f) +
              (int)((ulonglong)uVar19 * (ulonglong)uVar5 >> 0x20)) * 0x4000);
  }
  else {
    uVar19 = (uint)((ulonglong)uVar19 * (ulonglong)uVar5) >> 0x12 |
             (uVar19 * iVar8 + uVar5 * ((int)uVar19 >> 0x1f) +
             (int)((ulonglong)uVar19 * (ulonglong)uVar5 >> 0x20)) * 0x4000;
  }
  uVar10 = (uVar23 & 0x1f) - (uVar15 & 0x1f);
  if ((int)uVar10 < 0) {
    uVar10 = -uVar10;
    uVar4 = -((ushort)((ulonglong)uVar10 * (ulonglong)uVar5 >> 0x10) >> 2 |
             ((short)uVar10 * (short)iVar8 + (short)uVar5 * (short)((int)uVar10 >> 0x1f) +
             (short)((ulonglong)uVar10 * (ulonglong)uVar5 >> 0x20)) * 0x4000);
  }
  else {
    uVar4 = (ushort)((ulonglong)uVar10 * (ulonglong)uVar5 >> 0x10) >> 2 |
            ((short)uVar10 * (short)iVar8 + (short)uVar5 * (short)((int)uVar10 >> 0x1f) +
            (short)((ulonglong)uVar10 * (ulonglong)uVar5 >> 0x20)) * 0x4000;
  }
  iVar16 = ((uVar23 << 0x16) >> 0x1b) - ((uVar15 << 0x16) >> 0x1b);
  if (iVar16 < 0) {
    uVar2 = -(ushort)(-iVar16 * uVar5 >> 0x12);
  }
  else {
    uVar2 = (ushort)(iVar16 * uVar5 >> 0x12);
  }
  iVar16 = ((uVar23 << 0x11) >> 0x1b) - ((uVar15 << 0x11) >> 0x1b);
  if (iVar16 < 0) {
    uVar3 = -(ushort)(-iVar16 * uVar5 >> 0x12);
  }
  else {
    uVar3 = (ushort)(iVar16 * uVar5 >> 0x12);
  }
  iVar16 = -iVar9;
  iVar17 = iVar9;
  if ((param_4 & 1) != 0) {
    iVar17 = iVar16;
  }
  *param_1 = CONCAT44(iVar21 + uVar12,iVar14 + uVar13);
  param_1[1] = CONCAT44(iVar9,iVar7 + uVar18);
  *(ushort *)((int)param_1 + 0x14) =
       (short)(uVar15 & 0x1f) + uVar4 | ((ushort)((uVar15 << 0x16) >> 0x1b) + uVar2) * 0x20 |
       ((ushort)((uVar15 << 0x11) >> 0x1b) + uVar3) * 0x400;
  *(uint *)(param_1 + 2) = iVar20 + uVar24 & 0xffff | (iVar6 + uVar19) * 0x10000;
  *(int *)((int)param_1 + uVar1 * 4) = iVar17;
  iVar7 = *(int *)param_1;
  iVar6 = *(int *)((int)param_1 + 4);
  if (iVar9 < iVar7) {
    iVar17 = 1;
  }
  bVar11 = (byte)iVar17;
  if (iVar7 <= iVar9) {
    bVar11 = 0;
  }
  iVar14 = *(int *)(param_1 + 1);
  if (iVar7 + iVar9 < 0 != SBORROW4(iVar7,iVar16)) {
    bVar11 = bVar11 | 2;
  }
  if (iVar9 < iVar6) {
    bVar11 = bVar11 | 4;
  }
  if (iVar6 + iVar9 < 0 != SBORROW4(iVar6,iVar16)) {
    bVar11 = bVar11 | 8;
  }
  if (iVar9 < iVar14) {
    bVar11 = bVar11 | 0x10;
  }
  if (iVar14 + iVar9 < 0 != SBORROW4(iVar14,iVar16)) {
    bVar11 = bVar11 | 0x20;
  }
  *(byte *)((int)param_1 + 0x16) = bVar11;
  return;
}


