/*
 * Ghidra decompilation
 *
 * Function : geometry_load_savestate
 * Address  : 08085e74
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void geometry_load_savestate(geometry_struct *geometry,mem_file_struct *savestate_file,u32 version)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined2 uVar5;
  ushort uVar6;
  int iVar7;
  geometry_primitive_queue_struct *primitive_queue;
  s32 *psVar8;
  s32 sVar9;
  undefined4 *puVar10;
  uint uVar11;
  u16 *puVar12;
  s32 *psVar13;
  u32 *puVar14;
  u8 *puVar15;
  s32 *psVar16;
  u32 uVar17;
  undefined4 uVar18;
  undefined4 *puVar19;
  u32 *puVar20;
  geometry_polygon_list_struct *pgVar21;
  s32 (*pasVar22) [3];
  geometry_vertex_list_struct *pgVar23;
  u8 *puVar24;
  s32 sVar25;
  u32 uVar26;
  undefined4 uVar27;
  undefined2 *puVar28;
  s32 sVar29;
  u32 uVar30;
  undefined4 uVar31;
  ushort *puVar32;
  u16 polygon_attribute_16b;
  
  iVar7 = __stack_chk_guard;
  if (version == 1) {
    geometry_load_savestate_v1(geometry,savestate_file);
    return;
  }
  puVar14 = (u32 *)savestate_file->buffer_ptr;
  puVar24 = (u8 *)((int)(geometry->primitive_queue).transformed_coordinates + 0xc3f);
  puVar12 = (geometry->primitive_queue).color;
  puVar20 = (geometry->primitive_queue).uv;
  psVar8 = (geometry->primitive_queue).transformed_coordinates;
  do {
    psVar13 = psVar8 + 4;
    *psVar8 = *puVar14;
    puVar15 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar15 + 4;
    psVar8[1] = *(s32 *)(puVar15 + 4);
    puVar15 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar15 + 4;
    psVar8[2] = *(s32 *)(puVar15 + 4);
    puVar15 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar15 + 4;
    psVar8[3] = *(s32 *)(puVar15 + 4);
    puVar15 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar15 + 4;
    puVar24 = puVar24 + 1;
    *puVar24 = puVar15[4];
    puVar15 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar15 + 1;
    *puVar12 = *(u16 *)(puVar15 + 1);
    puVar15 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar15 + 2;
    *puVar20 = *(u32 *)(puVar15 + 2);
    puVar14 = (u32 *)(savestate_file->buffer_ptr + 4);
    savestate_file->buffer_ptr = (u8 *)puVar14;
    puVar12 = puVar12 + 1;
    puVar20 = puVar20 + 1;
    psVar8 = psVar13;
  } while (psVar13 != (geometry->primitive_queue).transformed_coordinates + 0xc);
  (geometry->primitive_queue).transformed_vertexes = *puVar14;
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 4;
  (geometry->primitive_queue).vertex_color = *(u32 *)(puVar24 + 4);
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 4;
  (geometry->primitive_queue).polygon_batches[0].attribute = *(u32 *)(puVar24 + 4);
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 4;
  (geometry->primitive_queue).polygon_batches[0].primitive_type = puVar24[4];
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 1;
  (geometry->primitive_queue).polygon_batches[0].flip_winding = puVar24[1];
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 1;
  memcpy(geometry->position_direction_matrix_stack,puVar24 + 1,0x1000);
  puVar24 = savestate_file->buffer_ptr;
  psVar8 = (s32 *)(puVar24 + 0x1000);
  savestate_file->buffer_ptr = (u8 *)psVar8;
  psVar13 = geometry->projection_matrix_stack;
  do {
    psVar16 = psVar8 + 4;
    sVar29 = psVar8[1];
    sVar25 = psVar8[2];
    sVar9 = psVar8[3];
    *psVar13 = *psVar8;
    psVar13[1] = sVar29;
    psVar13[2] = sVar25;
    psVar13[3] = sVar9;
    psVar8 = psVar16;
    psVar13 = psVar13 + 4;
  } while (psVar16 != (s32 *)(puVar24 + 0x1040));
  puVar24 = savestate_file->buffer_ptr;
  psVar8 = (s32 *)(puVar24 + 0x40);
  savestate_file->buffer_ptr = (u8 *)psVar8;
  if (2 < version) {
    psVar13 = geometry->texture_matrix_stack;
    do {
      psVar16 = psVar8 + 4;
      sVar29 = psVar8[1];
      sVar25 = psVar8[2];
      sVar9 = psVar8[3];
      *psVar13 = *psVar8;
      psVar13[1] = sVar29;
      psVar13[2] = sVar25;
      psVar13[3] = sVar9;
      psVar13 = psVar13 + 4;
      psVar8 = psVar16;
    } while (psVar16 != (s32 *)(puVar24 + 0x80));
    psVar8 = (s32 *)(savestate_file->buffer_ptr + 0x40);
    savestate_file->buffer_ptr = (u8 *)psVar8;
  }
  sVar9 = psVar8[1];
  sVar29 = psVar8[2];
  sVar25 = psVar8[3];
  geometry->light_vectors[0] = *psVar8;
  geometry->light_vectors[1] = sVar9;
  geometry->light_vectors[2] = sVar29;
  geometry->light_vectors[3] = sVar25;
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 0x10;
  uVar30 = *(u32 *)(puVar24 + 0x14);
  uVar26 = *(u32 *)(puVar24 + 0x18);
  uVar17 = *(u32 *)(puVar24 + 0x1c);
  geometry->light_colors[0] = *(u32 *)(puVar24 + 0x10);
  geometry->light_colors[1] = uVar30;
  geometry->light_colors[2] = uVar26;
  geometry->light_colors[3] = uVar17;
  puVar24 = savestate_file->buffer_ptr;
  psVar8 = (s32 *)(puVar24 + 0x10);
  savestate_file->buffer_ptr = (u8 *)psVar8;
  pasVar22 = geometry->light_coordinates;
  do {
    psVar13 = psVar8 + 4;
    sVar29 = psVar8[1];
    sVar25 = psVar8[2];
    sVar9 = psVar8[3];
    (*pasVar22)[0] = *psVar8;
    (*pasVar22)[1] = sVar29;
    (*pasVar22)[2] = sVar25;
    pasVar22[1][0] = sVar9;
    psVar8 = psVar13;
    pasVar22 = (s32 (*) [3])(pasVar22[1] + 1);
  } while (psVar13 != (s32 *)(puVar24 + 0x40));
  puVar24 = savestate_file->buffer_ptr;
  psVar8 = (s32 *)(puVar24 + 0x30);
  savestate_file->buffer_ptr = (u8 *)psVar8;
  pasVar22 = geometry->light_half_coordinates;
  do {
    psVar13 = psVar8 + 4;
    sVar29 = psVar8[1];
    sVar25 = psVar8[2];
    sVar9 = psVar8[3];
    (*pasVar22)[0] = *psVar8;
    (*pasVar22)[1] = sVar29;
    (*pasVar22)[2] = sVar25;
    pasVar22[1][0] = sVar9;
    psVar8 = psVar13;
    pasVar22 = (s32 (*) [3])(pasVar22[1] + 1);
  } while (psVar13 != (s32 *)(puVar24 + 0x60));
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 0x30;
  memcpy(geometry->position_direction_matrix,puVar24 + 0x30,0x80);
  puVar24 = savestate_file->buffer_ptr;
  psVar8 = (s32 *)(puVar24 + 0x80);
  savestate_file->buffer_ptr = (u8 *)psVar8;
  psVar13 = geometry->projection_matrix;
  do {
    psVar16 = psVar8 + 4;
    sVar29 = psVar8[1];
    sVar25 = psVar8[2];
    sVar9 = psVar8[3];
    *psVar13 = *psVar8;
    psVar13[1] = sVar29;
    psVar13[2] = sVar25;
    psVar13[3] = sVar9;
    psVar8 = psVar16;
    psVar13 = psVar13 + 4;
  } while (psVar16 != (s32 *)(puVar24 + 0xc0));
  puVar24 = savestate_file->buffer_ptr;
  psVar13 = (s32 *)(puVar24 + 0x40);
  savestate_file->buffer_ptr = (u8 *)psVar13;
  psVar8 = geometry->clip_matrix;
  do {
    psVar16 = psVar13 + 4;
    sVar29 = psVar13[1];
    sVar25 = psVar13[2];
    sVar9 = psVar13[3];
    *psVar8 = *psVar13;
    psVar8[1] = sVar29;
    psVar8[2] = sVar25;
    psVar8[3] = sVar9;
    psVar8 = psVar8 + 4;
    psVar13 = psVar16;
  } while (psVar16 != (s32 *)(puVar24 + 0x80));
  puVar24 = savestate_file->buffer_ptr;
  psVar13 = (s32 *)(puVar24 + 0x40);
  savestate_file->buffer_ptr = (u8 *)psVar13;
  psVar8 = geometry->texture_matrix;
  do {
    psVar16 = psVar13 + 4;
    sVar29 = psVar13[1];
    sVar25 = psVar13[2];
    sVar9 = psVar13[3];
    *psVar8 = *psVar13;
    psVar8[1] = sVar29;
    psVar8[2] = sVar25;
    psVar8[3] = sVar9;
    psVar8 = psVar8 + 4;
    psVar13 = psVar16;
  } while (psVar16 != (s32 *)(puVar24 + 0x80));
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 0x40;
  memcpy(geometry->shininess_table,puVar24 + 0x40,0x80);
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 0x80;
  geometry->specular_emission = *(u32 *)(puVar24 + 0x80);
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 4;
  geometry->diffuse_ambient = *(u32 *)(puVar24 + 4);
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 4;
  uVar31 = *(undefined4 *)(puVar24 + 8);
  uVar27 = *(undefined4 *)(puVar24 + 0xc);
  uVar18 = *(undefined4 *)(puVar24 + 0x10);
  *(undefined4 *)geometry->edge_colors = *(undefined4 *)(puVar24 + 4);
  *(undefined4 *)(geometry->edge_colors + 2) = uVar31;
  *(undefined4 *)(geometry->edge_colors + 4) = uVar27;
  *(undefined4 *)(geometry->edge_colors + 6) = uVar18;
  puVar24 = savestate_file->buffer_ptr;
  puVar10 = (undefined4 *)(puVar24 + 0x10);
  savestate_file->buffer_ptr = (u8 *)puVar10;
  puVar12 = geometry->toon_table;
  do {
    puVar19 = puVar10 + 4;
    uVar31 = puVar10[1];
    uVar27 = puVar10[2];
    uVar18 = puVar10[3];
    *(undefined4 *)puVar12 = *puVar10;
    *(undefined4 *)(puVar12 + 2) = uVar31;
    *(undefined4 *)(puVar12 + 4) = uVar27;
    *(undefined4 *)(puVar12 + 6) = uVar18;
    puVar10 = puVar19;
    puVar12 = puVar12 + 8;
  } while (puVar19 != (undefined4 *)(puVar24 + 0x50));
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 0x40;
  uVar31 = *(undefined4 *)(puVar24 + 0x44);
  uVar18 = *(undefined4 *)(puVar24 + 0x48);
  uVar27 = *(undefined4 *)(puVar24 + 0x4c);
  *(undefined4 *)geometry->fog_table = *(undefined4 *)(puVar24 + 0x40);
  *(undefined4 *)(geometry->fog_table + 4) = uVar31;
  *(undefined4 *)(geometry->fog_table + 8) = uVar18;
  *(undefined4 *)(geometry->fog_table + 0xc) = uVar27;
  uVar31 = *(undefined4 *)(puVar24 + 0x54);
  uVar18 = *(undefined4 *)(puVar24 + 0x58);
  uVar27 = *(undefined4 *)(puVar24 + 0x5c);
  *(undefined4 *)(geometry->fog_table + 0x10) = *(undefined4 *)(puVar24 + 0x50);
  *(undefined4 *)(geometry->fog_table + 0x14) = uVar31;
  *(undefined4 *)(geometry->fog_table + 0x18) = uVar18;
  *(undefined4 *)(geometry->fog_table + 0x1c) = uVar27;
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 0x20;
  geometry->display_3d_control = *(u32 *)(puVar24 + 0x20);
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 4;
  geometry->clear_color = *(u32 *)(puVar24 + 4);
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 4;
  geometry->polygon_attribute = *(u32 *)(puVar24 + 4);
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 4;
  geometry->texture_image_param = *(u32 *)(puVar24 + 4);
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 4;
  geometry->current_texture_u = *(s16 *)(puVar24 + 4);
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 2;
  geometry->current_texture_v = *(s16 *)(puVar24 + 2);
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 2;
  geometry->fog_color = *(u32 *)(puVar24 + 2);
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 4;
  geometry->base_texture_u = *(s16 *)(puVar24 + 4);
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 2;
  geometry->base_texture_v = *(s16 *)(puVar24 + 2);
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 2;
  geometry->clear_depth = *(u16 *)(puVar24 + 2);
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 2;
  geometry->clear_image_offset = *(u16 *)(puVar24 + 2);
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 2;
  geometry->fog_offset = *(u16 *)(puVar24 + 2);
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 2;
  geometry->display_dot_depth = *(u16 *)(puVar24 + 2);
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 2;
  geometry->texture_palette_offset = *(u16 *)(puVar24 + 2);
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 2;
  geometry->last_x = *(s16 *)(puVar24 + 2);
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 2;
  geometry->last_y = *(s16 *)(puVar24 + 2);
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 2;
  geometry->last_z = *(s16 *)(puVar24 + 2);
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 2;
  geometry->viewport_width = *(u16 *)(puVar24 + 2);
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 2;
  geometry->box_result = puVar24[2];
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 1;
  geometry->alpha_test_reference = puVar24[1];
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 1;
  if (version < 0xd) {
    bVar2 = puVar24[1];
    puVar15 = puVar24 + 4;
    savestate_file->buffer_ptr = puVar24 + 2;
    bVar3 = puVar24[2];
    savestate_file->buffer_ptr = puVar24 + 3;
    bVar4 = puVar24[3];
    savestate_file->buffer_ptr = puVar15;
    geometry->viewport_height = (ushort)bVar2;
    geometry->viewport_x = (ushort)bVar3;
    geometry->viewport_y = (ushort)bVar4;
  }
  else {
    geometry->viewport_height = *(u16 *)(puVar24 + 1);
    puVar24 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar24 + 2;
    geometry->viewport_x = *(u16 *)(puVar24 + 2);
    puVar24 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar24 + 2;
    geometry->viewport_y = *(u16 *)(puVar24 + 2);
    puVar15 = savestate_file->buffer_ptr + 2;
    savestate_file->buffer_ptr = puVar15;
  }
  geometry->buffer_page = *puVar15;
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 1;
  geometry->incoming_parameters_remaining = puVar24[1];
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 1;
  geometry->matrix_mode = puVar24[1];
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 1;
  geometry->active_lights = puVar24[1];
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 1;
  geometry->texture_coordinate_transform_type = puVar24[1];
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 1;
  geometry->position_direction_matrix_stack_pointer = puVar24[1];
  puVar24 = savestate_file->buffer_ptr;
  puVar15 = puVar24 + 1;
  savestate_file->buffer_ptr = puVar15;
  if (2 < version) {
    geometry->texture_matrix_stack_pointer = puVar24[1];
    puVar15 = savestate_file->buffer_ptr + 1;
    savestate_file->buffer_ptr = puVar15;
  }
  pgVar23 = geometry->vertex_list;
  geometry->waiting_for_swap = *puVar15;
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 1;
  geometry->update_render_settings = puVar24[1];
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 1;
  geometry->last_render_settings = puVar24[1];
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 1;
  geometry->render_settings = puVar24[1];
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 1;
  geometry->vertex_list[0].offset = *(u32 *)(puVar24 + 1);
  puVar20 = (u32 *)(savestate_file->buffer_ptr + 4);
  savestate_file->buffer_ptr = (u8 *)puVar20;
  do {
    pgVar23->vertexes[0].w = *puVar20;
    puVar24 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar24 + 4;
    pgVar23->vertexes[0].x = *(u16 *)(puVar24 + 4);
    puVar24 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar24 + 2;
    pgVar23->vertexes[0].y = *(u16 *)(puVar24 + 2);
    puVar24 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar24 + 2;
    pgVar23->vertexes[0].z = *(u16 *)(puVar24 + 2);
    puVar24 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar24 + 2;
    pgVar23->vertexes[0].color = *(u16 *)(puVar24 + 2);
    puVar24 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar24 + 2;
    pgVar23->vertexes[0].u = *(s16 *)(puVar24 + 2);
    puVar24 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar24 + 2;
    pgVar23->vertexes[0].v = *(s16 *)(puVar24 + 2);
    puVar20 = (u32 *)(savestate_file->buffer_ptr + 2);
    savestate_file->buffer_ptr = (u8 *)puVar20;
    if (version < 0xb) {
      pgVar23->vertexes[0].z = (u16)((uint)pgVar23->vertexes[0].z * 0x7fff >> 0x10);
    }
    pgVar23 = (geometry_vertex_list_struct *)(pgVar23->vertexes + 1);
  } while ((geometry_vertex_list_struct *)&geometry->vertex_list[0].offset != pgVar23);
  pgVar23 = geometry->vertex_list + 1;
  geometry->vertex_list[1].offset = *puVar20;
  puVar20 = (u32 *)(savestate_file->buffer_ptr + 4);
  savestate_file->buffer_ptr = (u8 *)puVar20;
  do {
    pgVar23->vertexes[0].w = *puVar20;
    puVar24 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar24 + 4;
    pgVar23->vertexes[0].x = *(u16 *)(puVar24 + 4);
    puVar24 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar24 + 2;
    pgVar23->vertexes[0].y = *(u16 *)(puVar24 + 2);
    puVar24 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar24 + 2;
    pgVar23->vertexes[0].z = *(u16 *)(puVar24 + 2);
    puVar24 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar24 + 2;
    pgVar23->vertexes[0].color = *(u16 *)(puVar24 + 2);
    puVar24 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar24 + 2;
    pgVar23->vertexes[0].u = *(s16 *)(puVar24 + 2);
    puVar24 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar24 + 2;
    pgVar23->vertexes[0].v = *(s16 *)(puVar24 + 2);
    puVar20 = (u32 *)(savestate_file->buffer_ptr + 2);
    savestate_file->buffer_ptr = (u8 *)puVar20;
    if (version < 0xb) {
      pgVar23->vertexes[0].z = (u16)((uint)pgVar23->vertexes[0].z * 0x7fff >> 0x10);
    }
    pgVar23 = (geometry_vertex_list_struct *)(pgVar23->vertexes + 1);
  } while (pgVar23 != (geometry_vertex_list_struct *)&geometry->vertex_list[1].offset);
  pgVar21 = geometry->polygon_list;
  geometry->polygon_list[0].offset = *puVar20;
  uVar17 = geometry->polygon_list[0].offset;
  puVar20 = (u32 *)(savestate_file->buffer_ptr + 4);
  savestate_file->buffer_ptr = (u8 *)puVar20;
  if (uVar17 != 0) {
    puVar12 = &geometry->polygon_list[0].polygons[0].texture_palette_offset;
    uVar11 = 0;
    do {
      if (version < 0xb) {
        uVar6 = *(ushort *)puVar20;
        savestate_file->buffer_ptr = (u8 *)(u32 *)((int)puVar20 + 2);
        pgVar21->polygons[0].texture_image_param = *(u32 *)((int)puVar20 + 2);
        puVar24 = savestate_file->buffer_ptr;
        savestate_file->buffer_ptr = puVar24 + 4;
        *puVar12 = *(u16 *)(puVar24 + 4);
        puVar24 = savestate_file->buffer_ptr;
        savestate_file->buffer_ptr = puVar24 + 2;
        pgVar21->polygons[0].vertex_base = *(u16 *)(puVar24 + 2);
        puVar24 = savestate_file->buffer_ptr;
        savestate_file->buffer_ptr = puVar24 + 2;
        pgVar21->polygons[0].flags = *(u32 *)(puVar24 + 2);
        bVar2 = *(byte *)&pgVar21->polygons[0].flags;
        puVar20 = (u32 *)(savestate_file->buffer_ptr + 4);
        savestate_file->buffer_ptr = (u8 *)puVar20;
        pgVar21->polygons[0].attribute = uVar6 | 0x1f0000;
        pgVar21->polygons[0].flags = (uint)bVar2;
      }
      else {
        pgVar21->polygons[0].attribute = *puVar20;
        puVar24 = savestate_file->buffer_ptr;
        savestate_file->buffer_ptr = puVar24 + 4;
        pgVar21->polygons[0].texture_image_param = *(u32 *)(puVar24 + 4);
        puVar24 = savestate_file->buffer_ptr;
        savestate_file->buffer_ptr = puVar24 + 4;
        *puVar12 = *(u16 *)(puVar24 + 4);
        puVar24 = savestate_file->buffer_ptr;
        savestate_file->buffer_ptr = puVar24 + 2;
        pgVar21->polygons[0].vertex_base = *(u16 *)(puVar24 + 2);
        puVar28 = (undefined2 *)(savestate_file->buffer_ptr + 2);
        puVar20 = (u32 *)(savestate_file->buffer_ptr + 4);
        savestate_file->buffer_ptr = (u8 *)puVar28;
        uVar5 = *puVar28;
        savestate_file->buffer_ptr = (u8 *)puVar20;
        polygon_attribute_16b._0_1_ = (byte)uVar5;
        pgVar21->polygons[0].flags = (uint)(byte)polygon_attribute_16b;
      }
      uVar11 = uVar11 + 1;
      pgVar21 = (geometry_polygon_list_struct *)(pgVar21->polygons + 1);
      puVar12 = puVar12 + 10;
    } while (uVar11 < geometry->polygon_list[0].offset);
  }
  pgVar21 = geometry->polygon_list + 1;
  geometry->polygon_list[1].offset = *puVar20;
  uVar17 = geometry->polygon_list[1].offset;
  puVar20 = (u32 *)(savestate_file->buffer_ptr + 4);
  savestate_file->buffer_ptr = (u8 *)puVar20;
  if (uVar17 != 0) {
    uVar11 = 0;
    puVar12 = &geometry->polygon_list[1].polygons[0].texture_palette_offset;
    do {
      if (version < 0xb) {
        uVar6 = *(ushort *)puVar20;
        savestate_file->buffer_ptr = (u8 *)(u32 *)((int)puVar20 + 2);
        pgVar21->polygons[0].texture_image_param = *(u32 *)((int)puVar20 + 2);
        puVar24 = savestate_file->buffer_ptr;
        savestate_file->buffer_ptr = puVar24 + 4;
        *puVar12 = *(u16 *)(puVar24 + 4);
        puVar24 = savestate_file->buffer_ptr;
        savestate_file->buffer_ptr = puVar24 + 2;
        pgVar21->polygons[0].vertex_base = *(u16 *)(puVar24 + 2);
        puVar24 = savestate_file->buffer_ptr;
        savestate_file->buffer_ptr = puVar24 + 2;
        pgVar21->polygons[0].flags = *(u32 *)(puVar24 + 2);
        bVar2 = *(byte *)&pgVar21->polygons[0].flags;
        puVar20 = (u32 *)(savestate_file->buffer_ptr + 4);
        savestate_file->buffer_ptr = (u8 *)puVar20;
        pgVar21->polygons[0].attribute = uVar6 | 0x1f0000;
        pgVar21->polygons[0].flags = (uint)bVar2;
      }
      else {
        pgVar21->polygons[0].attribute = *puVar20;
        puVar24 = savestate_file->buffer_ptr;
        savestate_file->buffer_ptr = puVar24 + 4;
        pgVar21->polygons[0].texture_image_param = *(u32 *)(puVar24 + 4);
        puVar24 = savestate_file->buffer_ptr;
        savestate_file->buffer_ptr = puVar24 + 4;
        *puVar12 = *(u16 *)(puVar24 + 4);
        puVar24 = savestate_file->buffer_ptr;
        savestate_file->buffer_ptr = puVar24 + 2;
        pgVar21->polygons[0].vertex_base = *(u16 *)(puVar24 + 2);
        puVar28 = (undefined2 *)(savestate_file->buffer_ptr + 2);
        puVar20 = (u32 *)(savestate_file->buffer_ptr + 4);
        savestate_file->buffer_ptr = (u8 *)puVar28;
        uVar5 = *puVar28;
        savestate_file->buffer_ptr = (u8 *)puVar20;
        polygon_attribute_16b._0_1_ = (byte)uVar5;
        pgVar21->polygons[0].flags = (uint)(byte)polygon_attribute_16b;
      }
      uVar11 = uVar11 + 1;
      pgVar21 = (geometry_polygon_list_struct *)(pgVar21->polygons + 1);
      puVar12 = puVar12 + 10;
    } while (uVar11 < geometry->polygon_list[1].offset);
  }
  pgVar21 = geometry->alpha_polygon_list;
  geometry->alpha_polygon_list[0].offset = *puVar20;
  uVar17 = geometry->alpha_polygon_list[0].offset;
  puVar20 = (u32 *)(savestate_file->buffer_ptr + 4);
  savestate_file->buffer_ptr = (u8 *)puVar20;
  if (uVar17 != 0) {
    uVar11 = 0;
    puVar12 = &geometry->alpha_polygon_list[0].polygons[0].texture_palette_offset;
    do {
      if (version < 0xb) {
        uVar6 = *(ushort *)puVar20;
        savestate_file->buffer_ptr = (u8 *)(u32 *)((int)puVar20 + 2);
        pgVar21->polygons[0].texture_image_param = *(u32 *)((int)puVar20 + 2);
        puVar24 = savestate_file->buffer_ptr;
        savestate_file->buffer_ptr = puVar24 + 4;
        *puVar12 = *(u16 *)(puVar24 + 4);
        puVar24 = savestate_file->buffer_ptr;
        savestate_file->buffer_ptr = puVar24 + 2;
        pgVar21->polygons[0].vertex_base = *(u16 *)(puVar24 + 2);
        puVar24 = savestate_file->buffer_ptr;
        savestate_file->buffer_ptr = puVar24 + 2;
        pgVar21->polygons[0].flags = *(u32 *)(puVar24 + 2);
        bVar2 = *(byte *)&pgVar21->polygons[0].flags;
        puVar20 = (u32 *)(savestate_file->buffer_ptr + 4);
        savestate_file->buffer_ptr = (u8 *)puVar20;
        pgVar21->polygons[0].attribute = uVar6 | 0x1f0000;
        pgVar21->polygons[0].flags = (uint)bVar2;
      }
      else {
        pgVar21->polygons[0].attribute = *puVar20;
        puVar24 = savestate_file->buffer_ptr;
        savestate_file->buffer_ptr = puVar24 + 4;
        pgVar21->polygons[0].texture_image_param = *(u32 *)(puVar24 + 4);
        puVar24 = savestate_file->buffer_ptr;
        savestate_file->buffer_ptr = puVar24 + 4;
        *puVar12 = *(u16 *)(puVar24 + 4);
        puVar24 = savestate_file->buffer_ptr;
        savestate_file->buffer_ptr = puVar24 + 2;
        pgVar21->polygons[0].vertex_base = *(u16 *)(puVar24 + 2);
        puVar28 = (undefined2 *)(savestate_file->buffer_ptr + 2);
        puVar20 = (u32 *)(savestate_file->buffer_ptr + 4);
        savestate_file->buffer_ptr = (u8 *)puVar28;
        uVar5 = *puVar28;
        savestate_file->buffer_ptr = (u8 *)puVar20;
        polygon_attribute_16b._0_1_ = (byte)uVar5;
        pgVar21->polygons[0].flags = (uint)(byte)polygon_attribute_16b;
      }
      uVar17 = geometry->alpha_polygon_list[0].offset;
      uVar11 = uVar11 + 1;
      pgVar21 = (geometry_polygon_list_struct *)(pgVar21->polygons + 1);
      puVar12 = puVar12 + 10;
    } while (uVar11 < uVar17);
  }
  pgVar21 = geometry->alpha_polygon_list + 1;
  geometry->alpha_polygon_list[1].offset = *puVar20;
  uVar26 = geometry->alpha_polygon_list[1].offset;
  puVar20 = (u32 *)(savestate_file->buffer_ptr + 4);
  savestate_file->buffer_ptr = (u8 *)puVar20;
  if (uVar26 != 0) {
    puVar12 = &geometry->alpha_polygon_list[1].polygons[0].texture_palette_offset;
    uVar11 = 0;
    do {
      if (version < 0xb) {
        uVar6 = *(ushort *)puVar20;
        savestate_file->buffer_ptr = (u8 *)(u32 *)((int)puVar20 + 2);
        pgVar21->polygons[0].texture_image_param = *(u32 *)((int)puVar20 + 2);
        puVar24 = savestate_file->buffer_ptr;
        savestate_file->buffer_ptr = puVar24 + 4;
        *puVar12 = *(u16 *)(puVar24 + 4);
        puVar24 = savestate_file->buffer_ptr;
        savestate_file->buffer_ptr = puVar24 + 2;
        pgVar21->polygons[0].vertex_base = *(u16 *)(puVar24 + 2);
        puVar24 = savestate_file->buffer_ptr;
        savestate_file->buffer_ptr = puVar24 + 2;
        pgVar21->polygons[0].flags = *(u32 *)(puVar24 + 2);
        bVar2 = *(byte *)&pgVar21->polygons[0].flags;
        puVar20 = (u32 *)(savestate_file->buffer_ptr + 4);
        savestate_file->buffer_ptr = (u8 *)puVar20;
        pgVar21->polygons[0].attribute = uVar6 | 0x1f0000;
        pgVar21->polygons[0].flags = (uint)bVar2;
      }
      else {
        pgVar21->polygons[0].attribute = *puVar20;
        puVar24 = savestate_file->buffer_ptr;
        savestate_file->buffer_ptr = puVar24 + 4;
        pgVar21->polygons[0].texture_image_param = *(u32 *)(puVar24 + 4);
        puVar24 = savestate_file->buffer_ptr;
        savestate_file->buffer_ptr = puVar24 + 4;
        *puVar12 = *(u16 *)(puVar24 + 4);
        puVar24 = savestate_file->buffer_ptr;
        savestate_file->buffer_ptr = puVar24 + 2;
        pgVar21->polygons[0].vertex_base = *(u16 *)(puVar24 + 2);
        puVar28 = (undefined2 *)(savestate_file->buffer_ptr + 2);
        puVar20 = (u32 *)(savestate_file->buffer_ptr + 4);
        savestate_file->buffer_ptr = (u8 *)puVar28;
        uVar5 = *puVar28;
        savestate_file->buffer_ptr = (u8 *)puVar20;
        polygon_attribute_16b._0_1_ = (byte)uVar5;
        pgVar21->polygons[0].flags = (uint)(byte)polygon_attribute_16b;
      }
      uVar26 = geometry->alpha_polygon_list[1].offset;
      uVar11 = uVar11 + 1;
      pgVar21 = (geometry_polygon_list_struct *)(pgVar21->polygons + 1);
      puVar12 = puVar12 + 10;
    } while (uVar11 < uVar26);
    uVar17 = geometry->alpha_polygon_list[0].offset;
  }
  iVar1 = (((0x1000 - (geometry->polygon_list[0].offset + geometry->polygon_list[1].offset)) -
           uVar17) - uVar26) * 0xe;
  puVar32 = (ushort *)((int)puVar20 + iVar1);
  savestate_file->buffer_ptr = (u8 *)puVar32;
  bVar2 = *(byte *)((int)puVar20 + iVar1);
  savestate_file->buffer_ptr = (u8 *)((int)puVar32 + 1);
  *(undefined4 *)geometry->commands = *(undefined4 *)((int)puVar32 + 1);
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 4;
  memcpy(geometry->parameters,puVar24 + 4,0x200);
  iVar1 = __stack_chk_guard;
  savestate_file->buffer_ptr = savestate_file->buffer_ptr + 0x200;
  geometry->command_store_ptr_advance = geometry->commands + bVar2;
  if (iVar7 != iVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  geometry_savestate_extra_load_body(geometry,savestate_file);
  return;
}


