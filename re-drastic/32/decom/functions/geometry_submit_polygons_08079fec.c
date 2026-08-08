/*
 * Ghidra decompilation
 *
 * Function : geometry_submit_polygons
 * Address  : 08079fec
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
  geometry_polygon_list_struct *pgVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  u32 vertex_index;
  geometry_texture_data_struct *pgVar5;
  u32 uVar6;
  uint uVar7;
  uint uVar8;
  geometry_polygon_list_struct *polygon_list;
  uint uVar9;
  u32 uVar10;
  u32 uVar11;
  s32 submit_polygons;
  u32 uVar12;
  u32 uVar13;
  ushort uVar14;
  u32 uVar15;
  u32 texture_image_param;
  geometry_texture_data_struct *local_44;
  uint local_2c;
  
  uVar7 = ((uint)((int)polygon_batch << 0xb) >> 0x1b) - 1;
  uVar15 = (geometry->primitive_queue).texture_image_param;
  iVar4 = geometry->vertex_list[geometry->buffer_page].offset - alternate_winding;
  if ((uVar7 < 0x1e) || (uVar8 = (uVar15 << 3) >> 0x1d, uVar8 == 6 || uVar8 == 1)) {
    pgVar1 = geometry->alpha_polygon_list;
  }
  else {
    pgVar1 = geometry->polygon_list;
  }
  polygon_list = pgVar1 + geometry->buffer_page;
  uVar14 = geometry->polygon_count;
  if ((char)vertex_index_offset == '\0') {
    uVar10 = 4;
  }
  else {
    uVar10 = 0x44;
  }
  local_2c = vertex_count;
  if (0x800 < (int)(vertex_count + uVar14)) {
    local_2c = 0x800 - uVar14;
  }
  if (0x1800 < iVar4 + local_2c * 2 + 2) {
    if (0x1800U - iVar4 < 4) {
      return;
    }
    local_2c = 0x17fcU - iVar4 >> 1;
  }
  uVar12 = (geometry->primitive_queue).texture_data_offset;
  uVar13 = (geometry->primitive_queue).texture_palette_offset;
  if (0 < (int)local_2c) {
    uVar11 = vertex_advance + local_2c * 2;
    local_44 = (geometry->primitive_queue).texture_data + uVar12;
    sVar3 = (short)vertex_advance;
    uVar8 = (uint)local_44->vertex_tag;
    do {
      if (uVar8 < vertex_advance + 3) {
        pgVar5 = local_44;
        do {
          local_44 = pgVar5 + 1;
          uVar15 = pgVar5->image_param;
          uVar12 = uVar12 + 1;
          uVar8 = (uint)pgVar5[1].vertex_tag;
          uVar13 = (u32)pgVar5->palette_offset;
          uVar9 = (uVar15 << 3) >> 0x1d;
          polygon_list = geometry->alpha_polygon_list + geometry->buffer_page;
          if (0x1d < uVar7 && (uVar9 != 6 && uVar9 != 1)) {
            polygon_list = geometry->polygon_list + geometry->buffer_page;
          }
          pgVar5 = local_44;
        } while (uVar8 < vertex_advance + 3);
      }
      sVar2 = (short)vertex_advance;
      uVar6 = polygon_list->offset;
      vertex_advance = vertex_advance + 2;
      polygon_list->polygons[uVar6].attribute = (u32)polygon_batch;
      polygon_list->polygons[uVar6].texture_image_param = uVar15;
      polygon_list->polygons[uVar6].flags = uVar10;
      polygon_list->polygons[uVar6].texture_palette_offset = (u16)uVar13;
      polygon_list->polygons[uVar6].vertex_base = ((short)iVar4 - sVar3) + sVar2;
      polygon_list->offset = uVar6 + 1;
    } while (uVar11 != vertex_advance);
    uVar14 = geometry->polygon_count;
  }
  (geometry->primitive_queue).texture_data_offset = uVar12;
  (geometry->primitive_queue).texture_image_param = uVar15;
  (geometry->primitive_queue).texture_palette_offset = uVar13;
  geometry->polygon_count = uVar14 + (short)local_2c;
  return;
}


