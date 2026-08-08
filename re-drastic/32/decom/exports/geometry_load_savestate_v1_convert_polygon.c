/*
 * Ghidra decompilation
 *
 * Function : geometry_load_savestate_v1_convert_polygon
 * Address  : 080841fc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void geometry_load_savestate_v1_convert_polygon
               (geometry_polygon_struct *dest_polygon,geometry_legacy_polygon_struct *src_polygon)

{
  u16 uVar1;
  int iVar2;
  u32 uVar3;
  u32 flags;
  u32 uVar4;
  u32 uVar5;
  
  uVar1 = src_polygon->vertex_indexes[0];
  iVar2 = (int)(short)uVar1;
  uVar4 = src_polygon->attribute;
  uVar3 = (u32)src_polygon->vertex_count;
  uVar5 = src_polygon->texture_image_param;
  dest_polygon->texture_palette_offset = src_polygon->texture_palette_offset;
  dest_polygon->texture_image_param = uVar5;
  dest_polygon->attribute = uVar4;
  dest_polygon->vertex_base = uVar1;
  if (uVar3 == 3) {
    if ((iVar2 == src_polygon->vertex_indexes[1] + 1) &&
       ((int)src_polygon->vertex_indexes[2] == iVar2 + 1)) {
      uVar3 = 0x43;
      dest_polygon->vertex_base = src_polygon->vertex_indexes[1];
    }
  }
  else if ((((uVar3 == 4) && ((int)src_polygon->vertex_indexes[1] == iVar2 + 1)) &&
           ((int)src_polygon->vertex_indexes[3] == src_polygon->vertex_indexes[1] + 1)) &&
          ((int)src_polygon->vertex_indexes[2] == src_polygon->vertex_indexes[3] + 1)) {
    uVar3 = 0x44;
  }
  dest_polygon->flags = uVar3;
  return;
}


