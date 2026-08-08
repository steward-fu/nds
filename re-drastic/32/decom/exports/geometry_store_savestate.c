/*
 * Ghidra decompilation
 *
 * Function : geometry_store_savestate
 * Address  : 08086ed4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void geometry_store_savestate(geometry_struct *geometry,mem_file_struct *savestate_file,u32 version)

{
  int iVar1;
  byte bVar2;
  ushort uVar3;
  s32 (*pasVar4) [3];
  geometry_vertex_struct *pgVar5;
  int iVar6;
  u16 *puVar7;
  s32 *psVar8;
  uint uVar9;
  s32 sVar10;
  u32 *puVar11;
  u8 *puVar12;
  u32 uVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  s32 *transformed_coordinates;
  s32 *psVar16;
  s32 (*pasVar17) [3];
  s32 *psVar18;
  u16 *puVar19;
  geometry_vertex_list_struct *pgVar20;
  geometry_polygon_list_struct *pgVar21;
  u32 uVar22;
  undefined4 uVar23;
  geometry_primitive_queue_struct *primitive_queue;
  u8 *puVar24;
  s32 sVar25;
  s32 sVar26;
  u32 uVar27;
  undefined4 uVar28;
  u32 *puVar29;
  uint uVar30;
  u8 command_advance_delta;
  char local_3c;
  u16 polygon_attribute_16b;
  
  iVar6 = __stack_chk_guard;
  puVar24 = (u8 *)((int)(geometry->primitive_queue).transformed_coordinates + 0xc3f);
  puVar11 = (u32 *)savestate_file->buffer_ptr;
  local_3c = (char)geometry->command_store_ptr_advance - (char)geometry->command_store_ptr;
  puVar7 = (geometry->primitive_queue).color;
  puVar29 = (geometry->primitive_queue).uv;
  transformed_coordinates = (geometry->primitive_queue).transformed_coordinates;
  do {
    psVar8 = transformed_coordinates + 4;
    *puVar11 = *transformed_coordinates;
    puVar12 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar12 + 4;
    *(s32 *)(puVar12 + 4) = transformed_coordinates[1];
    puVar12 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar12 + 4;
    *(s32 *)(puVar12 + 4) = transformed_coordinates[2];
    puVar12 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar12 + 4;
    *(s32 *)(puVar12 + 4) = transformed_coordinates[3];
    puVar12 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar12 + 4;
    puVar24 = puVar24 + 1;
    puVar12[4] = *puVar24;
    puVar12 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar12 + 1;
    *(u16 *)(puVar12 + 1) = *puVar7;
    puVar12 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar12 + 2;
    *(u32 *)(puVar12 + 2) = *puVar29;
    puVar11 = (u32 *)(savestate_file->buffer_ptr + 4);
    savestate_file->buffer_ptr = (u8 *)puVar11;
    puVar7 = puVar7 + 1;
    puVar29 = puVar29 + 1;
    transformed_coordinates = psVar8;
  } while (psVar8 != (geometry->primitive_queue).transformed_coordinates + 0xc);
  *puVar11 = (geometry->primitive_queue).transformed_vertexes;
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 4;
  *(u32 *)(puVar24 + 4) = (geometry->primitive_queue).vertex_color;
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 4;
  *(u32 *)(puVar24 + 4) = (geometry->primitive_queue).polygon_batches[0].attribute;
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 4;
  puVar24[4] = (geometry->primitive_queue).polygon_batches[0].primitive_type;
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 1;
  puVar24[1] = (geometry->primitive_queue).polygon_batches[0].flip_winding;
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 1;
  memcpy(puVar24 + 1,geometry->position_direction_matrix_stack,0x1000);
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 0x1000;
  psVar8 = (s32 *)(puVar24 + 0x1000);
  psVar18 = geometry->projection_matrix_stack;
  do {
    psVar16 = psVar18 + 4;
    sVar26 = psVar18[1];
    sVar25 = psVar18[2];
    sVar10 = psVar18[3];
    *psVar8 = *psVar18;
    psVar8[1] = sVar26;
    psVar8[2] = sVar25;
    psVar8[3] = sVar10;
    psVar8 = psVar8 + 4;
    psVar18 = psVar16;
  } while (psVar16 != geometry->texture_matrix_stack);
  psVar8 = (s32 *)(savestate_file->buffer_ptr + 0x40);
  savestate_file->buffer_ptr = (u8 *)psVar8;
  if (2 < version) {
    psVar18 = geometry->texture_matrix_stack;
    do {
      psVar16 = psVar18 + 4;
      sVar26 = psVar18[1];
      sVar25 = psVar18[2];
      sVar10 = psVar18[3];
      *psVar8 = *psVar18;
      psVar8[1] = sVar26;
      psVar8[2] = sVar25;
      psVar8[3] = sVar10;
      psVar8 = psVar8 + 4;
      psVar18 = psVar16;
    } while (psVar16 != geometry->light_vectors);
    psVar8 = (s32 *)(savestate_file->buffer_ptr + 0x40);
    savestate_file->buffer_ptr = (u8 *)psVar8;
  }
  sVar26 = geometry->light_vectors[1];
  sVar25 = geometry->light_vectors[2];
  sVar10 = geometry->light_vectors[3];
  *psVar8 = geometry->light_vectors[0];
  psVar8[1] = sVar26;
  psVar8[2] = sVar25;
  psVar8[3] = sVar10;
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 0x10;
  uVar22 = geometry->light_colors[1];
  uVar27 = geometry->light_colors[2];
  uVar13 = geometry->light_colors[3];
  *(u32 *)(puVar24 + 0x10) = geometry->light_colors[0];
  *(u32 *)(puVar24 + 0x14) = uVar22;
  *(u32 *)(puVar24 + 0x18) = uVar27;
  *(u32 *)(puVar24 + 0x1c) = uVar13;
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 0x10;
  psVar8 = (s32 *)(puVar24 + 0x10);
  pasVar17 = geometry->light_coordinates;
  do {
    pasVar4 = pasVar17 + 1;
    sVar26 = (*pasVar17)[1];
    sVar10 = (*pasVar17)[2];
    sVar25 = pasVar17[1][0];
    *psVar8 = (*pasVar17)[0];
    psVar8[1] = sVar26;
    psVar8[2] = sVar10;
    psVar8[3] = sVar25;
    psVar8 = psVar8 + 4;
    pasVar17 = (s32 (*) [3])(*pasVar4 + 1);
  } while ((s32 (*) [3])(*pasVar4 + 1) != geometry->light_half_coordinates);
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 0x30;
  psVar8 = (s32 *)(puVar24 + 0x30);
  pasVar17 = geometry->light_half_coordinates;
  do {
    pasVar4 = pasVar17 + 1;
    sVar26 = (*pasVar17)[1];
    sVar25 = (*pasVar17)[2];
    sVar10 = pasVar17[1][0];
    *psVar8 = (*pasVar17)[0];
    psVar8[1] = sVar26;
    psVar8[2] = sVar25;
    psVar8[3] = sVar10;
    psVar8 = psVar8 + 4;
    pasVar17 = (s32 (*) [3])(*pasVar4 + 1);
  } while ((s32 (*) [3])(*pasVar4 + 1) != (s32 (*) [3])geometry->diffuse_light_cache);
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 0x30;
  memcpy(puVar24 + 0x30,geometry->position_direction_matrix,0x80);
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 0x80;
  psVar8 = (s32 *)(puVar24 + 0x80);
  psVar18 = geometry->projection_matrix;
  do {
    psVar16 = psVar18 + 4;
    sVar26 = psVar18[1];
    sVar25 = psVar18[2];
    sVar10 = psVar18[3];
    *psVar8 = *psVar18;
    psVar8[1] = sVar26;
    psVar8[2] = sVar25;
    psVar8[3] = sVar10;
    psVar8 = psVar8 + 4;
    psVar18 = psVar16;
  } while (psVar16 != geometry->texture_matrix);
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 0x40;
  psVar8 = (s32 *)(puVar24 + 0x40);
  psVar18 = geometry->clip_matrix;
  do {
    psVar16 = psVar18 + 4;
    sVar26 = psVar18[1];
    sVar25 = psVar18[2];
    sVar10 = psVar18[3];
    *psVar8 = *psVar18;
    psVar8[1] = sVar26;
    psVar8[2] = sVar25;
    psVar8[3] = sVar10;
    psVar8 = psVar8 + 4;
    psVar18 = psVar16;
  } while (psVar16 != geometry->projection_matrix);
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 0x40;
  psVar8 = (s32 *)(puVar24 + 0x40);
  psVar18 = geometry->texture_matrix;
  do {
    psVar16 = psVar18 + 4;
    sVar26 = psVar18[1];
    sVar25 = psVar18[2];
    sVar10 = psVar18[3];
    *psVar8 = *psVar18;
    psVar8[1] = sVar26;
    psVar8[2] = sVar25;
    psVar8[3] = sVar10;
    psVar8 = psVar8 + 4;
    psVar18 = psVar16;
  } while (psVar16 != (s32 *)geometry->shininess_table);
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 0x40;
  memcpy(puVar24 + 0x40,geometry->shininess_table,0x80);
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 0x80;
  *(u32 *)(puVar24 + 0x80) = geometry->specular_emission;
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 4;
  *(u32 *)(puVar24 + 4) = geometry->diffuse_ambient;
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 4;
  uVar23 = *(undefined4 *)(geometry->edge_colors + 2);
  uVar28 = *(undefined4 *)(geometry->edge_colors + 4);
  uVar14 = *(undefined4 *)(geometry->edge_colors + 6);
  *(undefined4 *)(puVar24 + 4) = *(undefined4 *)geometry->edge_colors;
  *(undefined4 *)(puVar24 + 8) = uVar23;
  *(undefined4 *)(puVar24 + 0xc) = uVar28;
  *(undefined4 *)(puVar24 + 0x10) = uVar14;
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 0x10;
  puVar15 = (undefined4 *)(puVar24 + 0x10);
  puVar7 = geometry->toon_table;
  do {
    puVar19 = puVar7 + 8;
    uVar28 = *(undefined4 *)(puVar7 + 2);
    uVar23 = *(undefined4 *)(puVar7 + 4);
    uVar14 = *(undefined4 *)(puVar7 + 6);
    *puVar15 = *(undefined4 *)puVar7;
    puVar15[1] = uVar28;
    puVar15[2] = uVar23;
    puVar15[3] = uVar14;
    puVar15 = puVar15 + 4;
    puVar7 = puVar19;
  } while (puVar19 != (u16 *)geometry->fog_table);
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 0x40;
  uVar23 = *(undefined4 *)(geometry->fog_table + 4);
  uVar14 = *(undefined4 *)(geometry->fog_table + 8);
  uVar28 = *(undefined4 *)(geometry->fog_table + 0xc);
  *(undefined4 *)(puVar24 + 0x40) = *(undefined4 *)geometry->fog_table;
  *(undefined4 *)(puVar24 + 0x44) = uVar23;
  *(undefined4 *)(puVar24 + 0x48) = uVar14;
  *(undefined4 *)(puVar24 + 0x4c) = uVar28;
  uVar23 = *(undefined4 *)(geometry->fog_table + 0x14);
  uVar28 = *(undefined4 *)(geometry->fog_table + 0x1c);
  uVar14 = *(undefined4 *)(geometry->fog_table + 0x18);
  *(undefined4 *)(puVar24 + 0x50) = *(undefined4 *)(geometry->fog_table + 0x10);
  *(undefined4 *)(puVar24 + 0x54) = uVar23;
  *(undefined4 *)(puVar24 + 0x58) = uVar14;
  *(undefined4 *)(puVar24 + 0x5c) = uVar28;
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 0x20;
  *(u32 *)(puVar24 + 0x20) = geometry->display_3d_control;
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 4;
  *(u32 *)(puVar24 + 4) = geometry->clear_color;
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 4;
  *(u32 *)(puVar24 + 4) = geometry->polygon_attribute;
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 4;
  *(u32 *)(puVar24 + 4) = geometry->texture_image_param;
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 4;
  *(s16 *)(puVar24 + 4) = geometry->current_texture_u;
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 2;
  *(s16 *)(puVar24 + 2) = geometry->current_texture_v;
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 2;
  *(u32 *)(puVar24 + 2) = geometry->fog_color;
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 4;
  *(s16 *)(puVar24 + 4) = geometry->base_texture_u;
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 2;
  *(s16 *)(puVar24 + 2) = geometry->base_texture_v;
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 2;
  *(u16 *)(puVar24 + 2) = geometry->clear_depth;
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 2;
  *(u16 *)(puVar24 + 2) = geometry->clear_image_offset;
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 2;
  *(u16 *)(puVar24 + 2) = geometry->fog_offset;
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 2;
  *(u16 *)(puVar24 + 2) = geometry->display_dot_depth;
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 2;
  *(u16 *)(puVar24 + 2) = geometry->texture_palette_offset;
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 2;
  *(s16 *)(puVar24 + 2) = geometry->last_x;
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 2;
  *(s16 *)(puVar24 + 2) = geometry->last_y;
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 2;
  *(s16 *)(puVar24 + 2) = geometry->last_z;
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 2;
  *(u16 *)(puVar24 + 2) = geometry->viewport_width;
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 2;
  puVar24[2] = geometry->box_result;
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 1;
  puVar24[1] = geometry->alpha_test_reference;
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 1;
  if (version < 0xd) {
    puVar24[1] = '\0';
    puVar24 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar24 + 1;
    puVar24[1] = '\0';
    puVar24 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar24 + 1;
    puVar24[1] = '\0';
    puVar24 = savestate_file->buffer_ptr + 1;
    savestate_file->buffer_ptr = puVar24;
    geometry->viewport_height = 0;
    geometry->viewport_x = 0;
    geometry->viewport_y = 0;
  }
  else {
    *(u16 *)(puVar24 + 1) = geometry->viewport_height;
    puVar24 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar24 + 2;
    *(u16 *)(puVar24 + 2) = geometry->viewport_x;
    puVar24 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar24 + 2;
    *(u16 *)(puVar24 + 2) = geometry->viewport_y;
    puVar24 = savestate_file->buffer_ptr + 2;
    savestate_file->buffer_ptr = puVar24;
  }
  *puVar24 = geometry->buffer_page;
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 1;
  puVar24[1] = geometry->incoming_parameters_remaining;
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 1;
  puVar24[1] = geometry->matrix_mode;
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 1;
  puVar24[1] = geometry->active_lights;
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 1;
  puVar24[1] = geometry->texture_coordinate_transform_type;
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 1;
  puVar24[1] = geometry->position_direction_matrix_stack_pointer;
  puVar12 = savestate_file->buffer_ptr;
  puVar24 = puVar12 + 1;
  savestate_file->buffer_ptr = puVar24;
  if (2 < version) {
    puVar12[1] = geometry->texture_matrix_stack_pointer;
    puVar24 = savestate_file->buffer_ptr + 1;
    savestate_file->buffer_ptr = puVar24;
  }
  *puVar24 = geometry->waiting_for_swap;
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 1;
  puVar24[1] = geometry->update_render_settings;
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 1;
  puVar24[1] = geometry->last_render_settings;
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 1;
  puVar24[1] = geometry->render_settings;
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 1;
  *(u32 *)(puVar24 + 1) = geometry->vertex_list[0].offset;
  puVar29 = (u32 *)(savestate_file->buffer_ptr + 4);
  savestate_file->buffer_ptr = (u8 *)puVar29;
  pgVar20 = geometry->vertex_list;
  do {
    pgVar5 = pgVar20->vertexes;
    *puVar29 = pgVar20->vertexes[0].w;
    puVar24 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar24 + 4;
    *(u16 *)(puVar24 + 4) = pgVar20->vertexes[0].x;
    puVar24 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar24 + 2;
    *(u16 *)(puVar24 + 2) = pgVar20->vertexes[0].y;
    puVar24 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar24 + 2;
    *(u16 *)(puVar24 + 2) = pgVar20->vertexes[0].z;
    puVar24 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar24 + 2;
    *(u16 *)(puVar24 + 2) = pgVar20->vertexes[0].color;
    puVar24 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar24 + 2;
    *(s16 *)(puVar24 + 2) = pgVar20->vertexes[0].u;
    puVar24 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar24 + 2;
    *(s16 *)(puVar24 + 2) = pgVar20->vertexes[0].v;
    puVar29 = (u32 *)(savestate_file->buffer_ptr + 2);
    savestate_file->buffer_ptr = (u8 *)puVar29;
    pgVar20 = (geometry_vertex_list_struct *)(pgVar5 + 1);
  } while ((geometry_vertex_list_struct *)&geometry->vertex_list[0].offset !=
           (geometry_vertex_list_struct *)(pgVar5 + 1));
  *puVar29 = geometry->vertex_list[1].offset;
  puVar29 = (u32 *)(savestate_file->buffer_ptr + 4);
  savestate_file->buffer_ptr = (u8 *)puVar29;
  pgVar20 = geometry->vertex_list + 1;
  do {
    pgVar5 = pgVar20->vertexes;
    *puVar29 = pgVar20->vertexes[0].w;
    puVar24 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar24 + 4;
    *(u16 *)(puVar24 + 4) = pgVar20->vertexes[0].x;
    puVar24 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar24 + 2;
    *(u16 *)(puVar24 + 2) = pgVar20->vertexes[0].y;
    puVar24 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar24 + 2;
    *(u16 *)(puVar24 + 2) = pgVar20->vertexes[0].z;
    puVar24 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar24 + 2;
    *(u16 *)(puVar24 + 2) = pgVar20->vertexes[0].color;
    puVar24 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar24 + 2;
    *(s16 *)(puVar24 + 2) = pgVar20->vertexes[0].u;
    puVar24 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar24 + 2;
    *(s16 *)(puVar24 + 2) = pgVar20->vertexes[0].v;
    puVar29 = (u32 *)(savestate_file->buffer_ptr + 2);
    savestate_file->buffer_ptr = (u8 *)puVar29;
    pgVar20 = (geometry_vertex_list_struct *)(pgVar5 + 1);
  } while ((geometry_vertex_list_struct *)(pgVar5 + 1) !=
           (geometry_vertex_list_struct *)&geometry->vertex_list[1].offset);
  pgVar21 = geometry->polygon_list;
  *puVar29 = geometry->polygon_list[0].offset;
  uVar13 = geometry->polygon_list[0].offset;
  puVar29 = (u32 *)(savestate_file->buffer_ptr + 4);
  savestate_file->buffer_ptr = (u8 *)puVar29;
  if (uVar13 != 0) {
    puVar7 = &geometry->polygon_list[0].polygons[0].texture_palette_offset;
    uVar9 = 0;
    do {
      if (version < 0xb) {
        uVar30 = pgVar21->polygons[0].attribute;
        *(short *)puVar29 = (short)uVar30;
        puVar24 = savestate_file->buffer_ptr;
        savestate_file->buffer_ptr = puVar24 + 2;
        *(u32 *)(puVar24 + 2) = pgVar21->polygons[0].texture_image_param;
        puVar24 = savestate_file->buffer_ptr;
        savestate_file->buffer_ptr = puVar24 + 4;
        *(u16 *)(puVar24 + 4) = *puVar7;
        puVar24 = savestate_file->buffer_ptr;
        savestate_file->buffer_ptr = puVar24 + 2;
        *(u16 *)(puVar24 + 2) = pgVar21->polygons[0].vertex_base;
        puVar24 = savestate_file->buffer_ptr;
        savestate_file->buffer_ptr = puVar24 + 2;
        *(u32 *)(puVar24 + 2) = pgVar21->polygons[0].flags;
        bVar2 = *(byte *)&pgVar21->polygons[0].flags;
        puVar29 = (u32 *)(savestate_file->buffer_ptr + 4);
        savestate_file->buffer_ptr = (u8 *)puVar29;
        pgVar21->polygons[0].attribute = uVar30 & 0xffff | 0x1f0000;
        pgVar21->polygons[0].flags = (uint)bVar2;
      }
      else {
        uVar3 = *(ushort *)&pgVar21->polygons[0].flags;
        *puVar29 = pgVar21->polygons[0].attribute;
        puVar24 = savestate_file->buffer_ptr;
        savestate_file->buffer_ptr = puVar24 + 4;
        *(u32 *)(puVar24 + 4) = pgVar21->polygons[0].texture_image_param;
        puVar24 = savestate_file->buffer_ptr;
        savestate_file->buffer_ptr = puVar24 + 4;
        *(u16 *)(puVar24 + 4) = *puVar7;
        puVar24 = savestate_file->buffer_ptr;
        savestate_file->buffer_ptr = puVar24 + 2;
        *(u16 *)(puVar24 + 2) = pgVar21->polygons[0].vertex_base;
        puVar24 = savestate_file->buffer_ptr;
        savestate_file->buffer_ptr = puVar24 + 2;
        *(ushort *)(puVar24 + 2) = uVar3;
        puVar29 = (u32 *)(savestate_file->buffer_ptr + 2);
        savestate_file->buffer_ptr = (u8 *)puVar29;
        pgVar21->polygons[0].flags = uVar3 & 0xff;
      }
      uVar9 = uVar9 + 1;
      pgVar21 = (geometry_polygon_list_struct *)(pgVar21->polygons + 1);
      puVar7 = puVar7 + 10;
    } while (uVar9 < geometry->polygon_list[0].offset);
  }
  pgVar21 = geometry->polygon_list + 1;
  *puVar29 = geometry->polygon_list[1].offset;
  uVar13 = geometry->polygon_list[1].offset;
  puVar29 = (u32 *)(savestate_file->buffer_ptr + 4);
  savestate_file->buffer_ptr = (u8 *)puVar29;
  if (uVar13 != 0) {
    uVar9 = 0;
    puVar7 = &geometry->polygon_list[1].polygons[0].texture_palette_offset;
    do {
      if (version < 0xb) {
        uVar30 = pgVar21->polygons[0].attribute;
        *(short *)puVar29 = (short)uVar30;
        puVar24 = savestate_file->buffer_ptr;
        savestate_file->buffer_ptr = puVar24 + 2;
        *(u32 *)(puVar24 + 2) = pgVar21->polygons[0].texture_image_param;
        puVar24 = savestate_file->buffer_ptr;
        savestate_file->buffer_ptr = puVar24 + 4;
        *(u16 *)(puVar24 + 4) = *puVar7;
        puVar24 = savestate_file->buffer_ptr;
        savestate_file->buffer_ptr = puVar24 + 2;
        *(u16 *)(puVar24 + 2) = pgVar21->polygons[0].vertex_base;
        puVar24 = savestate_file->buffer_ptr;
        savestate_file->buffer_ptr = puVar24 + 2;
        *(u32 *)(puVar24 + 2) = pgVar21->polygons[0].flags;
        bVar2 = *(byte *)&pgVar21->polygons[0].flags;
        puVar29 = (u32 *)(savestate_file->buffer_ptr + 4);
        savestate_file->buffer_ptr = (u8 *)puVar29;
        pgVar21->polygons[0].attribute = uVar30 & 0xffff | 0x1f0000;
        pgVar21->polygons[0].flags = (uint)bVar2;
      }
      else {
        uVar3 = *(ushort *)&pgVar21->polygons[0].flags;
        *puVar29 = pgVar21->polygons[0].attribute;
        puVar24 = savestate_file->buffer_ptr;
        savestate_file->buffer_ptr = puVar24 + 4;
        *(u32 *)(puVar24 + 4) = pgVar21->polygons[0].texture_image_param;
        puVar24 = savestate_file->buffer_ptr;
        savestate_file->buffer_ptr = puVar24 + 4;
        *(u16 *)(puVar24 + 4) = *puVar7;
        puVar24 = savestate_file->buffer_ptr;
        savestate_file->buffer_ptr = puVar24 + 2;
        *(u16 *)(puVar24 + 2) = pgVar21->polygons[0].vertex_base;
        puVar24 = savestate_file->buffer_ptr;
        savestate_file->buffer_ptr = puVar24 + 2;
        *(ushort *)(puVar24 + 2) = uVar3;
        puVar29 = (u32 *)(savestate_file->buffer_ptr + 2);
        savestate_file->buffer_ptr = (u8 *)puVar29;
        pgVar21->polygons[0].flags = uVar3 & 0xff;
      }
      uVar9 = uVar9 + 1;
      pgVar21 = (geometry_polygon_list_struct *)(pgVar21->polygons + 1);
      puVar7 = puVar7 + 10;
    } while (uVar9 < geometry->polygon_list[1].offset);
  }
  pgVar21 = geometry->alpha_polygon_list;
  *puVar29 = geometry->alpha_polygon_list[0].offset;
  uVar13 = geometry->alpha_polygon_list[0].offset;
  puVar29 = (u32 *)(savestate_file->buffer_ptr + 4);
  savestate_file->buffer_ptr = (u8 *)puVar29;
  if (uVar13 != 0) {
    uVar9 = 0;
    puVar7 = &geometry->alpha_polygon_list[0].polygons[0].texture_palette_offset;
    do {
      if (version < 0xb) {
        uVar30 = pgVar21->polygons[0].attribute;
        *(short *)puVar29 = (short)uVar30;
        puVar24 = savestate_file->buffer_ptr;
        savestate_file->buffer_ptr = puVar24 + 2;
        *(u32 *)(puVar24 + 2) = pgVar21->polygons[0].texture_image_param;
        puVar24 = savestate_file->buffer_ptr;
        savestate_file->buffer_ptr = puVar24 + 4;
        *(u16 *)(puVar24 + 4) = *puVar7;
        puVar24 = savestate_file->buffer_ptr;
        savestate_file->buffer_ptr = puVar24 + 2;
        *(u16 *)(puVar24 + 2) = pgVar21->polygons[0].vertex_base;
        puVar24 = savestate_file->buffer_ptr;
        savestate_file->buffer_ptr = puVar24 + 2;
        *(u32 *)(puVar24 + 2) = pgVar21->polygons[0].flags;
        bVar2 = *(byte *)&pgVar21->polygons[0].flags;
        puVar29 = (u32 *)(savestate_file->buffer_ptr + 4);
        savestate_file->buffer_ptr = (u8 *)puVar29;
        pgVar21->polygons[0].attribute = uVar30 & 0xffff | 0x1f0000;
        pgVar21->polygons[0].flags = (uint)bVar2;
      }
      else {
        uVar3 = *(ushort *)&pgVar21->polygons[0].flags;
        *puVar29 = pgVar21->polygons[0].attribute;
        puVar24 = savestate_file->buffer_ptr;
        savestate_file->buffer_ptr = puVar24 + 4;
        *(u32 *)(puVar24 + 4) = pgVar21->polygons[0].texture_image_param;
        puVar24 = savestate_file->buffer_ptr;
        savestate_file->buffer_ptr = puVar24 + 4;
        *(u16 *)(puVar24 + 4) = *puVar7;
        puVar24 = savestate_file->buffer_ptr;
        savestate_file->buffer_ptr = puVar24 + 2;
        *(u16 *)(puVar24 + 2) = pgVar21->polygons[0].vertex_base;
        puVar24 = savestate_file->buffer_ptr;
        savestate_file->buffer_ptr = puVar24 + 2;
        *(ushort *)(puVar24 + 2) = uVar3;
        puVar29 = (u32 *)(savestate_file->buffer_ptr + 2);
        savestate_file->buffer_ptr = (u8 *)puVar29;
        pgVar21->polygons[0].flags = uVar3 & 0xff;
      }
      uVar9 = uVar9 + 1;
      pgVar21 = (geometry_polygon_list_struct *)(pgVar21->polygons + 1);
      puVar7 = puVar7 + 10;
    } while (uVar9 < geometry->alpha_polygon_list[0].offset);
  }
  pgVar21 = geometry->alpha_polygon_list + 1;
  *puVar29 = geometry->alpha_polygon_list[1].offset;
  uVar13 = geometry->alpha_polygon_list[1].offset;
  puVar29 = (u32 *)(savestate_file->buffer_ptr + 4);
  savestate_file->buffer_ptr = (u8 *)puVar29;
  if (uVar13 != 0) {
    puVar7 = &geometry->alpha_polygon_list[1].polygons[0].texture_palette_offset;
    uVar9 = 0;
    do {
      if (version < 0xb) {
        uVar30 = pgVar21->polygons[0].attribute;
        *(short *)puVar29 = (short)uVar30;
        puVar24 = savestate_file->buffer_ptr;
        savestate_file->buffer_ptr = puVar24 + 2;
        *(u32 *)(puVar24 + 2) = pgVar21->polygons[0].texture_image_param;
        puVar24 = savestate_file->buffer_ptr;
        savestate_file->buffer_ptr = puVar24 + 4;
        *(u16 *)(puVar24 + 4) = *puVar7;
        puVar24 = savestate_file->buffer_ptr;
        savestate_file->buffer_ptr = puVar24 + 2;
        *(u16 *)(puVar24 + 2) = pgVar21->polygons[0].vertex_base;
        puVar24 = savestate_file->buffer_ptr;
        savestate_file->buffer_ptr = puVar24 + 2;
        *(u32 *)(puVar24 + 2) = pgVar21->polygons[0].flags;
        bVar2 = *(byte *)&pgVar21->polygons[0].flags;
        puVar29 = (u32 *)(savestate_file->buffer_ptr + 4);
        savestate_file->buffer_ptr = (u8 *)puVar29;
        pgVar21->polygons[0].attribute = uVar30 & 0xffff | 0x1f0000;
        pgVar21->polygons[0].flags = (uint)bVar2;
      }
      else {
        uVar3 = *(ushort *)&pgVar21->polygons[0].flags;
        *puVar29 = pgVar21->polygons[0].attribute;
        puVar24 = savestate_file->buffer_ptr;
        savestate_file->buffer_ptr = puVar24 + 4;
        *(u32 *)(puVar24 + 4) = pgVar21->polygons[0].texture_image_param;
        puVar24 = savestate_file->buffer_ptr;
        savestate_file->buffer_ptr = puVar24 + 4;
        *(u16 *)(puVar24 + 4) = *puVar7;
        puVar24 = savestate_file->buffer_ptr;
        savestate_file->buffer_ptr = puVar24 + 2;
        *(u16 *)(puVar24 + 2) = pgVar21->polygons[0].vertex_base;
        puVar24 = savestate_file->buffer_ptr;
        savestate_file->buffer_ptr = puVar24 + 2;
        *(ushort *)(puVar24 + 2) = uVar3;
        puVar29 = (u32 *)(savestate_file->buffer_ptr + 2);
        savestate_file->buffer_ptr = (u8 *)puVar29;
        pgVar21->polygons[0].flags = uVar3 & 0xff;
      }
      uVar13 = geometry->alpha_polygon_list[1].offset;
      uVar9 = uVar9 + 1;
      pgVar21 = (geometry_polygon_list_struct *)(pgVar21->polygons + 1);
      puVar7 = puVar7 + 10;
    } while (uVar9 < uVar13);
  }
  iVar1 = (((0x1000 - (geometry->polygon_list[0].offset + geometry->polygon_list[1].offset)) -
           geometry->alpha_polygon_list[0].offset) - uVar13) * 0xe;
  savestate_file->buffer_ptr = (u8 *)((int)puVar29 + iVar1);
  *(char *)((int)puVar29 + iVar1) = local_3c;
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 1;
  *(undefined4 *)(puVar24 + 1) = *(undefined4 *)geometry->commands;
  puVar24 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar24 + 4;
  memcpy(puVar24 + 4,geometry->parameters,0x200);
  iVar1 = __stack_chk_guard;
  savestate_file->buffer_ptr = savestate_file->buffer_ptr + 0x200;
  if (iVar6 == iVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


