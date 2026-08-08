/*
 * Ghidra decompilation
 *
 * Function : geometry_submit_polygons
 * Address  : 08079d90
 * Program  : drastic
 */


/* DWARF original prototype: void geometry_submit_polygons(geometry_struct * geometry,
   geometry_polygon_batch_struct * polygon_batch, u32 vertex_advance, u32 vertex_count, u32
   vertex_index_offset, u32 alternate_winding, geometry_polygon_batch_struct * polygon_batch,
   geometry_polygon_batch_struct * polygon_batch, geometry_polygon_batch_struct * polygon_batch)
   Local variable primitive_queue:geometry_primitive_queue_struct *[r0:4] conflicts with parameter,
   skipped. */

void geometry_submit_polygons
               (geometry_struct *geometry,geometry_polygon_batch_struct *polygon_batch,
               u32 vertex_advance,u32 vertex_count,u32 vertex_index_offset,u32 alternate_winding,
               geometry_polygon_batch_struct *polygon_batch_1,
               geometry_polygon_batch_struct *polygon_batch_2,
               geometry_polygon_batch_struct *polygon_batch_3)

{
  short sVar1;
  short sVar2;
  geometry_polygon_list_struct *pgVar3;
  int iVar4;
  u32 vertex_index;
  u32 uVar5;
  geometry_texture_data_struct *pgVar6;
  u32 uVar7;
  uint uVar8;
  uint uVar9;
  geometry_polygon_list_struct *polygon_list;
  uint uVar10;
  uint uVar11;
  s32 submit_polygons;
  u32 uVar12;
  u32 uVar13;
  ushort uVar14;
  u32 uVar15;
  u32 texture_image_param;
  geometry_texture_data_struct *local_44;
  u32 local_2c;
  
  uVar8 = ((uint)((int)polygon_batch << 0xb) >> 0x1b) - 1;
  uVar15 = (geometry->primitive_queue).texture_image_param;
  iVar4 = geometry->vertex_list[geometry->buffer_page].offset - alternate_winding;
  if ((uVar8 < 0x1e) || (uVar9 = (uVar15 << 3) >> 0x1d, uVar9 == 6 || uVar9 == 1)) {
    pgVar3 = geometry->alpha_polygon_list;
  }
  else {
    pgVar3 = geometry->polygon_list;
  }
  polygon_list = pgVar3 + geometry->buffer_page;
  if ((char)vertex_index_offset == '\0') {
    uVar9 = 3;
  }
  else {
    uVar9 = 0x43;
  }
  uVar14 = geometry->polygon_count;
  local_2c = vertex_count;
  if (0x800 < (int)(vertex_count + uVar14)) {
    local_2c = 0x800 - uVar14;
  }
  if (0x1800 < local_2c + iVar4 + 2) {
    if (0x1800U - iVar4 < 3) {
      return;
    }
    local_2c = 0x17fd - iVar4;
  }
  uVar12 = (geometry->primitive_queue).texture_data_offset;
  uVar13 = (geometry->primitive_queue).texture_palette_offset;
  if (0 < (int)local_2c) {
    sVar2 = (short)vertex_advance;
    local_44 = (geometry->primitive_queue).texture_data + uVar12;
    uVar11 = (uint)local_44->vertex_tag;
    uVar5 = local_2c + vertex_advance;
    do {
      if (uVar11 < vertex_advance + 2) {
        pgVar6 = local_44;
        do {
          local_44 = pgVar6 + 1;
          uVar15 = pgVar6->image_param;
          uVar12 = uVar12 + 1;
          uVar11 = (uint)pgVar6[1].vertex_tag;
          uVar13 = (u32)pgVar6->palette_offset;
          uVar10 = (uVar15 << 3) >> 0x1d;
          polygon_list = geometry->alpha_polygon_list + geometry->buffer_page;
          if (0x1d < uVar8 && (uVar10 != 6 && uVar10 != 1)) {
            polygon_list = geometry->polygon_list + geometry->buffer_page;
          }
          pgVar6 = local_44;
        } while (uVar11 < vertex_advance + 2);
      }
      sVar1 = (short)vertex_advance;
      uVar7 = polygon_list->offset;
      vertex_advance = vertex_advance + 1;
      polygon_list->polygons[uVar7].attribute = (u32)polygon_batch;
      polygon_list->polygons[uVar7].texture_image_param = uVar15;
      polygon_list->polygons[uVar7].flags = uVar9;
      uVar9 = uVar9 ^ 0x40;
      polygon_list->polygons[uVar7].texture_palette_offset = (u16)uVar13;
      polygon_list->polygons[uVar7].vertex_base = ((short)iVar4 - sVar2) + sVar1;
      polygon_list->offset = uVar7 + 1;
    } while (uVar5 != vertex_advance);
    uVar14 = geometry->polygon_count;
  }
  (geometry->primitive_queue).texture_data_offset = uVar12;
  (geometry->primitive_queue).texture_image_param = uVar15;
  (geometry->primitive_queue).texture_palette_offset = uVar13;
  geometry->polygon_count = uVar14 + (short)local_2c;
  return;
}


