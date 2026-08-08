/*
 * Ghidra decompilation
 *
 * Function : render_polygon_edge_interpolate_xz
 * Address  : 08070458
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void render_polygon_edge_interpolate_xz
               (geometry_vertex_struct **vertex_pairs,u8 *buffer_data,u8 *y_spans,
               u32 vertex_pair_count,u32 y_clip)

{
  longlong lVar1;
  ulonglong uVar2;
  ushort *puVar3;
  geometry_vertex_struct *pgVar4;
  geometry_vertex_struct *vertex_a;
  uint uVar5;
  s32 x_step;
  geometry_vertex_struct *pgVar6;
  geometry_vertex_struct *vertex_b;
  s32 y_span;
  uint uVar7;
  u32 x;
  int iVar8;
  uint uVar9;
  s32 dx;
  uint uVar10;
  ushort uVar11;
  ushort *puVar12;
  u8 *puVar13;
  u32 uVar14;
  geometry_vertex_struct **ppgVar15;
  s32 dz;
  uint *puVar16;
  uint uVar17;
  u32 y_delta_r;
  ulonglong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  byte *local_40;
  uint local_3c;
  
  if (vertex_pair_count != 0) {
    local_40 = y_spans + -1;
    puVar13 = buffer_data + 0x160;
    puVar12 = (ushort *)(buffer_data + 0x580);
    uVar14 = 0;
    ppgVar15 = vertex_pairs;
    do {
      pgVar6 = ppgVar15[1];
      pgVar4 = vertex_pairs[uVar14 * 2];
      uVar11 = pgVar4->z;
      local_40 = local_40 + 1;
      uVar10 = (uint)*local_40;
      uVar7 = ((uint)pgVar6->z - (uint)uVar11) * 0x200;
      uVar9 = (uint)pgVar6->x - (uint)pgVar4->x;
      iVar8 = (uint)pgVar4->x * 0x40000;
      uVar19 = VectorShiftRight(CONCAT44(CONCAT22(uVar11,uVar11),CONCAT22(uVar11,uVar11)),0x30);
      uVar17 = reciprocal_table[(uint)pgVar6->y - (uint)pgVar4->y];
      uVar19 = VectorShiftLeft(uVar19,0x27,0x40,0);
      if (uVar9 == 0) {
        uVar11 = 0x8000;
LAB_080705f4:
        lVar1 = (ulonglong)uVar17 * (ulonglong)uVar7;
        local_3c = (uint)((ulonglong)uVar17 * (ulonglong)uVar9) >> 0xc |
                   (uVar17 * ((int)uVar9 >> 0x1f) +
                   (int)((ulonglong)uVar17 * (ulonglong)uVar9 >> 0x20)) * 0x100000;
        if (-1 < (int)uVar7) goto LAB_08070544;
LAB_08070618:
        uVar20 = VectorShiftRight(CONCAT44(uVar7,uVar7),0x20);
        uVar18 = CONCAT44(uVar17 * (int)((ulonglong)uVar20 >> 0x20) +
                          (int)((ulonglong)lVar1 >> 0x20) + (uint)(0xbfffffff < (uint)lVar1),
                          (uint)lVar1 + 0x40000000);
      }
      else {
        if (-1 < (int)uVar9) {
          uVar11 = 0;
          goto LAB_080705f4;
        }
        uVar5 = (uint)((ulonglong)uVar17 * (ulonglong)uVar9);
        uVar11 = 0;
        local_3c = uVar5 + 0xfff >> 0xc |
                   (uVar17 * ((int)uVar9 >> 0x1f) +
                    (int)((ulonglong)uVar17 * (ulonglong)uVar9 >> 0x20) + (uint)(0xfffff000 < uVar5)
                   ) * 0x100000;
        lVar1 = (ulonglong)uVar17 * (ulonglong)uVar7;
        if ((int)uVar7 < 0) goto LAB_08070618;
LAB_08070544:
        uVar18 = CONCAT44(uVar17 * ((int)uVar7 >> 0x1f) + (int)((ulonglong)lVar1 >> 0x20),(int)lVar1
                         );
      }
      if (uVar14 == 0) {
        uVar2 = (uVar18 & 0xffffffff) * (ulonglong)y_clip;
        iVar8 = y_clip * local_3c + iVar8;
        uVar19 = VectorAdd(uVar19,((ulonglong)
                                   (y_clip * (int)(uVar18 >> 0x20) + (int)(uVar2 >> 0x20)) << 0x20)
                                  + (uVar2 & 0xffffffff),8);
      }
      if (uVar10 != 0) {
        puVar16 = (uint *)(puVar13 + -4);
        uVar7 = uVar10;
        puVar3 = puVar12;
        do {
          uVar2 = (ulonglong)uVar19 >> 0x20;
          uVar17 = (uint)uVar19;
          uVar9 = (uint)iVar8 >> 0x12;
          uVar19 = VectorAdd(uVar19,uVar18,8);
          uVar7 = uVar7 - 1;
          iVar8 = iVar8 + local_3c;
          puVar16 = puVar16 + 1;
          *puVar16 = uVar17 >> 0x1e | (int)uVar2 << 2;
          *puVar3 = uVar11 | (ushort)uVar9;
          puVar3 = puVar3 + 2;
        } while (uVar7 != 0);
        puVar13 = puVar13 + uVar10 * 4;
        puVar12 = puVar12 + uVar10 * 2;
      }
      uVar14 = uVar14 + 1;
      ppgVar15 = ppgVar15 + 2;
    } while (vertex_pair_count != uVar14);
  }
  return;
}


