/*
 * Ghidra decompilation
 *
 * Function : geometry_clipped_vertex_interpolate_edge
 * Address  : 08079578
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void geometry_clipped_vertex_interpolate_edge
               (geometry_clipped_vertex_struct *vertex_dest,
               geometry_clipped_vertex_struct *vertex_in,geometry_clipped_vertex_struct *vertex_out,
               u32 clip_face)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  geometry_clipped_vertex_struct *pgVar6;
  geometry_clipped_vertex_struct *pgVar7;
  int iVar8;
  u32 b;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  byte bVar13;
  uint uVar14;
  u32 uVar15;
  int iVar16;
  s32 x_out;
  s32 y_out;
  s32 z_out;
  u32 r;
  geometry_clipped_vertex_struct *pgVar17;
  int iVar18;
  s32 z_in;
  uint uVar19;
  geometry_clipped_vertex_struct *pgVar20;
  s32 w_in;
  u32 g;
  int iVar21;
  s32 x_in;
  s32 w_out;
  int iVar22;
  s32 y_in;
  u32 clip_axis;
  uint uVar23;
  s32 coordinate_in;
  int iVar24;
  uint uVar25;
  s32 coordinate_out;
  bool bVar26;
  undefined8 uVar27;
  s32 u_in;
  s32 v_in;
  s32 u_out;
  s32 v_out;
  
  pgVar6 = (geometry_clipped_vertex_struct *)(uint)vertex_out->color;
  uVar19 = (uint)vertex_in->color;
  uVar1 = clip_face >> 1;
  uVar14 = clip_face & 1;
  bVar26 = uVar14 == 0;
  iVar21 = vertex_in->coordinates[0];
  iVar22 = vertex_in->coordinates[1];
  iVar24 = (int)(short)vertex_in->uv;
  iVar12 = (int)vertex_in->uv >> 0x10;
  uVar15 = vertex_out->uv;
  uVar25 = vertex_out->coordinates[uVar1];
  uVar23 = vertex_in->coordinates[uVar1];
  pgVar17 = (geometry_clipped_vertex_struct *)vertex_out->coordinates[3];
  pgVar20 = (geometry_clipped_vertex_struct *)vertex_in->coordinates[3];
  iVar18 = vertex_in->coordinates[2];
  if (bVar26) {
    vertex_in = pgVar20;
  }
  pgVar7 = pgVar6;
  if (bVar26) {
    pgVar7 = pgVar17;
  }
  iVar16 = vertex_out->coordinates[0];
  x_out = vertex_out->coordinates[1];
  y_out = vertex_out->coordinates[2];
  if (!bVar26) {
    vertex_in = (geometry_clipped_vertex_struct *)-(int)pgVar20;
    pgVar7 = (geometry_clipped_vertex_struct *)-(int)pgVar17;
  }
  uVar9 = ((int)pgVar7 - (int)vertex_in) - (uVar25 - uVar23);
  uVar25 = (((int)pgVar7 >> 0x1f) - (((int)vertex_in >> 0x1f) + (uint)(pgVar7 < vertex_in))) -
           ((((int)uVar25 >> 0x1f) - (((int)uVar23 >> 0x1f) + (uint)(uVar25 < uVar23))) +
           (uint)((uint)((int)pgVar7 - (int)vertex_in) < uVar25 - uVar23));
  if ((uVar9 | uVar25) == 0) {
    iVar8 = 0x40000;
  }
  else {
    uVar27 = VectorShiftRight(CONCAT44(uVar23 - (int)vertex_in,uVar23 - (int)vertex_in),0x20);
    uVar27 = VectorShiftLeft(uVar27,0x12,0x40,0);
    iVar8 = __aeabi_ldivmod((uint)uVar27 + (uVar9 - 1),
                            (int)((ulonglong)uVar27 >> 0x20) + (uVar25 - (uVar9 == 0)) +
                            (uint)CARRY4((uint)uVar27,uVar9 - 1));
  }
  iVar16 = iVar16 - iVar21;
  if (iVar16 < 0) {
    uVar23 = -((uint)((longlong)-iVar16 * (longlong)iVar8) >> 0x12 |
              (int)((ulonglong)((longlong)-iVar16 * (longlong)iVar8) >> 0x20) << 0xe);
  }
  else {
    uVar23 = (uint)((longlong)iVar16 * (longlong)iVar8) >> 0x12 |
             (int)((ulonglong)((longlong)iVar16 * (longlong)iVar8) >> 0x20) << 0xe;
  }
  iVar16 = x_out - iVar22;
  if (iVar16 < 0) {
    uVar25 = -((uint)((longlong)-iVar16 * (longlong)iVar8) >> 0x12 |
              (int)((ulonglong)((longlong)-iVar16 * (longlong)iVar8) >> 0x20) << 0xe);
  }
  else {
    uVar25 = (uint)((longlong)iVar16 * (longlong)iVar8) >> 0x12 |
             (int)((ulonglong)((longlong)iVar16 * (longlong)iVar8) >> 0x20) << 0xe;
  }
  iVar16 = y_out - iVar18;
  if (iVar16 < 0) {
    uVar9 = -((uint)((longlong)-iVar16 * (longlong)iVar8) >> 0x12 |
             (int)((ulonglong)((longlong)-iVar16 * (longlong)iVar8) >> 0x20) << 0xe);
  }
  else {
    uVar9 = (uint)((longlong)iVar16 * (longlong)iVar8) >> 0x12 |
            (int)((ulonglong)((longlong)iVar16 * (longlong)iVar8) >> 0x20) << 0xe;
  }
  iVar16 = (int)pgVar17 - (int)pgVar20;
  if (iVar16 < 0) {
    uVar10 = -((uint)((longlong)-iVar16 * (longlong)iVar8) >> 0x12 |
              (int)((ulonglong)((longlong)-iVar16 * (longlong)iVar8) >> 0x20) << 0xe);
  }
  else {
    uVar10 = (uint)((longlong)iVar16 * (longlong)iVar8) >> 0x12 |
             (int)((ulonglong)((longlong)iVar16 * (longlong)iVar8) >> 0x20) << 0xe;
  }
  iVar5 = (short)uVar15 - iVar24;
  iVar16 = (int)pgVar20->coordinates + uVar10;
  if (iVar5 < 0) {
    uVar10 = -((uint)((longlong)-iVar5 * (longlong)iVar8) >> 0x12 |
              (int)((ulonglong)((longlong)-iVar5 * (longlong)iVar8) >> 0x20) << 0xe);
  }
  else {
    uVar10 = (uint)((longlong)iVar5 * (longlong)iVar8) >> 0x12 |
             (int)((ulonglong)((longlong)iVar5 * (longlong)iVar8) >> 0x20) << 0xe;
  }
  iVar5 = ((int)uVar15 >> 0x10) - iVar12;
  if (iVar5 < 0) {
    uVar11 = -((uint)((longlong)-iVar5 * (longlong)iVar8) >> 0x12 |
              (int)((ulonglong)((longlong)-iVar5 * (longlong)iVar8) >> 0x20) << 0xe);
  }
  else {
    uVar11 = (uint)((longlong)iVar5 * (longlong)iVar8) >> 0x12 |
             (int)((ulonglong)((longlong)iVar5 * (longlong)iVar8) >> 0x20) << 0xe;
  }
  iVar5 = ((uint)pgVar6 & 0x1f) - (uVar19 & 0x1f);
  if (iVar5 < 0) {
    uVar4 = -((ushort)((ulonglong)((longlong)-iVar5 * (longlong)iVar8) >> 0x10) >> 2 |
             (ushort)((int)((ulonglong)((longlong)-iVar5 * (longlong)iVar8) >> 0x20) << 0xe));
  }
  else {
    uVar4 = (ushort)((ulonglong)((longlong)iVar5 * (longlong)iVar8) >> 0x10) >> 2 |
            (ushort)((int)((ulonglong)((longlong)iVar5 * (longlong)iVar8) >> 0x20) << 0xe);
  }
  iVar5 = ((uint)((int)pgVar6 << 0x16) >> 0x1b) - ((uVar19 << 0x16) >> 0x1b);
  if (iVar5 < 0) {
    uVar2 = -(ushort)((uint)(-iVar5 * iVar8) >> 0x12);
  }
  else {
    uVar2 = (ushort)((uint)(iVar5 * iVar8) >> 0x12);
  }
  iVar5 = ((uint)((int)pgVar6 << 0x11) >> 0x1b) - ((uVar19 << 0x11) >> 0x1b);
  if (iVar5 < 0) {
    uVar3 = -(ushort)((uint)(-iVar5 * iVar8) >> 0x12);
  }
  else {
    uVar3 = (ushort)((uint)(iVar5 * iVar8) >> 0x12);
  }
  iVar8 = iVar16;
  if (uVar14 != 0) {
    iVar8 = -iVar16;
  }
  *(ulonglong *)vertex_dest->coordinates = CONCAT44(iVar22 + uVar25,iVar21 + uVar23);
  *(ulonglong *)(vertex_dest->coordinates + 2) = CONCAT44(iVar16,iVar18 + uVar9);
  vertex_dest->uv = iVar24 + uVar10 & 0xffff | (iVar12 + uVar11) * 0x10000;
  iVar12 = iVar8;
  if (uVar14 == 0) {
    iVar12 = -iVar16;
  }
  vertex_dest->color =
       (short)(uVar19 & 0x1f) + uVar4 | ((ushort)((uVar19 << 0x16) >> 0x1b) + uVar2) * 0x20 |
       ((ushort)((uVar19 << 0x11) >> 0x1b) + uVar3) * 0x400;
  vertex_dest->coordinates[uVar1] = iVar8;
  iVar18 = vertex_dest->coordinates[0];
  if (iVar16 < iVar18) {
    iVar8 = 1;
  }
  bVar13 = (byte)iVar8;
  if (iVar18 <= iVar16) {
    bVar13 = 0;
  }
  if (iVar18 < iVar12) {
    bVar13 = bVar13 | 2;
  }
  if (iVar16 < vertex_dest->coordinates[1]) {
    bVar13 = bVar13 | 4;
  }
  if (vertex_dest->coordinates[1] < iVar12) {
    bVar13 = bVar13 | 8;
  }
  if (iVar16 < vertex_dest->coordinates[2]) {
    bVar13 = bVar13 | 0x10;
  }
  if (vertex_dest->coordinates[2] < iVar12) {
    bVar13 = bVar13 | 0x20;
  }
  vertex_dest->clip_code = bVar13;
  return;
}


