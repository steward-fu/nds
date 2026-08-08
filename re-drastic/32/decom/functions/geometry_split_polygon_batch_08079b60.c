/*
 * Ghidra decompilation
 *
 * Function : geometry_split_polygon_batch
 * Address  : 08079b60
 * Program  : drastic
 */


geometry_polygon_batch_struct *
geometry_split_polygon_batch
          (geometry_primitive_queue_struct *primitive_queue,
          geometry_polygon_batch_struct *polygon_split_batch,
          geometry_polygon_batch_struct *polygon_batch,u32 vertex_advance,u8 *cull_polygons,
          u8 *clip_polygons,u32 alternate_winding)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  geometry_polygon_batch_struct *polygon_split_batch_base;
  geometry_polygon_batch_struct *pgVar6;
  geometry_polygon_batch_struct *pgVar7;
  u8 uVar8;
  byte bVar9;
  u32 primitive_type_clip;
  u8 uVar10;
  byte bVar11;
  u32 polygons;
  byte bVar12;
  u32 polygon_attribute;
  u32 uVar13;
  uint uVar14;
  uint uVar15;
  uint local_48;
  byte local_44;
  
  uVar13 = polygon_batch->attribute;
  bVar1 = polygon_batch->primitive_type;
  bVar9 = polygon_batch->polygon_count;
  bVar2 = polygon_batch->vertex_base;
  uVar15 = (uint)bVar2;
  bVar3 = polygon_batch->flip_winding;
  uVar8 = (bVar1 & 1) + 4;
  local_44 = bVar1 & 3;
  pgVar6 = polygon_split_batch;
  bVar12 = bVar9;
  bVar11 = bVar9;
  if (bVar9 != 0) {
    uVar14 = 0;
    bVar5 = false;
    local_48 = 0;
    pgVar7 = polygon_split_batch;
    do {
      uVar10 = *cull_polygons;
      bVar11 = (byte)alternate_winding;
      if (bVar5) {
        if (uVar10 == '\0') {
          if (*clip_polygons != '\0') {
            pgVar7->attribute = uVar13;
            goto LAB_08079ca0;
          }
          bVar5 = false;
          local_48 = uVar14;
        }
      }
      else if ((uVar10 != '\0') || (*clip_polygons != '\0')) {
        pgVar6 = pgVar7;
        if (uVar14 != 0) {
          pgVar7->attribute = uVar13;
          pgVar6 = pgVar7 + 1;
          pgVar7->primitive_type = local_44;
          pgVar7->vertex_base = (byte)local_48 * (char)vertex_advance + bVar2;
          pgVar7->polygon_count = (byte)uVar14 - (byte)local_48;
          pgVar7->flip_winding = (byte)local_48 & bVar11 ^ bVar3;
          uVar10 = *cull_polygons;
        }
        pgVar7 = pgVar6;
        if (uVar10 == '\0') {
          bVar5 = true;
          pgVar6->attribute = uVar13;
LAB_08079ca0:
          pgVar7->primitive_type = uVar8;
          pgVar7->vertex_base = (u8)uVar15;
          pgVar7->flip_winding = (byte)uVar14 & bVar11 ^ bVar3;
          pgVar7 = pgVar7 + 1;
        }
        else {
          bVar5 = true;
        }
      }
      uVar14 = uVar14 + 1;
      uVar15 = (vertex_advance & 0xff) + uVar15 & 0xff;
      clip_polygons = clip_polygons + 1;
      cull_polygons = cull_polygons + 1;
    } while (bVar9 != uVar14);
    primitive_queue->input_x[0] = 1;
    if (bVar5) goto LAB_08079cd8;
    bVar4 = (byte)local_48;
    bVar9 = bVar9 - bVar4;
    pgVar6 = pgVar7;
    bVar12 = bVar4 * (char)vertex_advance;
    bVar11 = bVar4 & bVar11;
  }
  pgVar6->attribute = uVar13;
  pgVar6->polygon_count = bVar9;
  pgVar7 = pgVar6 + 1;
  pgVar6->primitive_type = local_44;
  pgVar6->vertex_base = bVar2 + bVar12;
  pgVar6->flip_winding = bVar11 ^ bVar3;
  primitive_queue->input_x[0] = 0;
LAB_08079cd8:
  if ((polygon_split_batch->vertex_base == polygon_batch->vertex_base) &&
     (uVar8 != polygon_split_batch->primitive_type)) {
    polygon_split_batch->primitive_type = bVar1;
  }
  return pgVar7;
}


