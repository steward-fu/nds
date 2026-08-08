/*
 * Ghidra decompilation
 *
 * Function : geometry_load_savestate_v1
 * Address  : 08084310
 * Program  : drastic
 */


/* WARNING: Control flow encountered unimplemented instructions */
/* WARNING: Unknown calling convention */

void geometry_load_savestate_v1(geometry_struct *geometry,mem_file_struct *savestate_file)

{
  ulonglong uVar1;
  u8 uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  u16 uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  s16 sVar15;
  s16 sVar16;
  undefined2 uVar17;
  u16 uVar18;
  short sVar19;
  undefined auVar20 [16];
  undefined auVar21 [16];
  undefined4 uVar22;
  undefined4 uVar23;
  u8 viewport_x;
  u8 viewport_y;
  u32 *puVar24;
  s32 *psVar25;
  s32 sVar26;
  undefined4 *puVar27;
  u32 b;
  u32 uVar28;
  s32 *psVar29;
  u32 uVar30;
  uint uVar31;
  uint uVar32;
  u32 flags;
  u32 flags_1;
  u32 light_color;
  s16 *psVar33;
  u8 *puVar34;
  s32 *psVar35;
  int iVar36;
  geometry_polygon_list_struct *pgVar37;
  u32 *puVar38;
  s32 (*pasVar40) [3];
  u32 uVar41;
  undefined4 uVar42;
  geometry_vertex_list_struct *pgVar43;
  geometry_legacy_polygon_struct *pgVar44;
  undefined4 *puVar45;
  s32 *transformed_coordinates;
  u32 active_lights;
  uint uVar46;
  int iVar47;
  u8 *puVar48;
  u32 r;
  geometry_legacy_polygon_struct *pgVar49;
  uint uVar50;
  int iVar51;
  u32 ar;
  ushort *puVar52;
  u32 ag;
  u32 *puVar53;
  geometry_legacy_vertex_struct *pgVar54;
  geometry_legacy_vertex_struct *vertex;
  geometry_legacy_vertex_struct *pgVar55;
  u32 presubmitted_vertexes;
  geometry_primitive_queue_struct *primitive_queue;
  u8 viewport_height;
  u32 *puVar56;
  s32 sVar57;
  undefined4 uVar58;
  u32 ab;
  geometry_legacy_polygon_struct *pgVar59;
  s32 sVar60;
  undefined4 uVar61;
  u16 *puVar62;
  u32 g;
  ulonglong uVar63;
  undefined8 uVar64;
  ulonglong uVar65;
  ulonglong uVar66;
  undefined8 uVar67;
  undefined8 uVar68;
  undefined8 uVar69;
  geometry_legacy_polygon_struct *pgStack_847a8;
  u8 incoming_command_count;
  u8 primitive_submit_state;
  u8 polygon_vertexes_remaining;
  u8 incoming_parameters_remaining;
  u16 polygon_buffer_count;
  u16 polygon_buffer_alpha_count;
  u16 vertex_buffer_count;
  u16 current_polygon_offset;
  u16 current_polygon_alpha_offset;
  u16 current_vertex_offset;
  u16 current_vertex_color;
  u32 last_submitted_polygon_attribute;
  geometry_legacy_vertex_struct clipped_strip_vertexes [2];
  submit_state_struct submit_state_info [10];
  s32 incoming_parameters [128];
  geometry_legacy_polygon_struct polygon_buffers [2] [2048];
  geometry_legacy_vertex_struct vertex_buffers [2] [6160];
  u8 incoming_commands [4];
  u32 *puVar39;
  
  pgStack_847a8 = polygon_buffers[0];
  pgVar44 = pgStack_847a8;
  pgVar54 = vertex_buffers[0];
  do {
    vertex = pgVar54;
    do {
      pgVar55 = vertex + 1;
      geometry_load_savestate_v1_vertex(savestate_file,vertex);
      vertex = pgVar55;
    } while (pgVar55 != pgVar54 + 0x1810);
    puVar53 = (u32 *)savestate_file->buffer_ptr;
    pgVar59 = pgVar44 + 0x800;
    puVar24 = (u32 *)((int)puVar53 + 0x16);
    pgVar49 = pgVar44;
    puVar56 = puVar53;
    do {
      uVar28 = *puVar56;
      savestate_file->buffer_ptr = (u8 *)(u32 *)((int)puVar24 + -0x12);
      ((geometry_legacy_polygon_struct *)&pgVar49->attribute)->attribute = uVar28;
      psVar33 = pgVar49->vertex_indexes;
      puVar38 = (u32 *)((int)puVar24 + -0x12);
      do {
        puVar39 = puVar38;
        puVar38 = (u32 *)((int)puVar39 + 2);
        *psVar33 = *(s16 *)puVar39;
        savestate_file->buffer_ptr = (u8 *)puVar38;
        psVar33 = psVar33 + 1;
      } while (puVar38 != puVar24);
      uVar28 = *puVar38;
      pgVar44 = pgVar49 + 1;
      puVar56 = (u32 *)((int)puVar56 + 0x1f);
      savestate_file->buffer_ptr = (u8 *)(u16 *)((int)puVar39 + 6);
      uVar8 = *(u16 *)((int)puVar39 + 6);
      pgVar49->texture_image_param = uVar28;
      savestate_file->buffer_ptr = (u8 *)(puVar39 + 2);
      puVar24 = (u32 *)((int)puVar39 + 0x21);
      pgVar49->texture_palette_offset = uVar8;
      uVar2 = *(u8 *)(puVar39 + 2);
      savestate_file->buffer_ptr = (u8 *)((int)puVar39 + 9);
      pgVar49->vertex_count = uVar2;
      uVar2 = *(u8 *)((int)puVar39 + 9);
      savestate_file->buffer_ptr = (u8 *)((int)puVar39 + 10);
      pgVar49->back_facing = uVar2;
      uVar2 = *(u8 *)((int)puVar39 + 10);
      savestate_file->buffer_ptr = (u8 *)puVar56;
      pgVar49->alpha_primitive = uVar2;
      pgVar49 = pgVar44;
    } while (pgVar44 != pgVar59);
    pgVar54 = pgVar54 + 0x1810;
  } while ((geometry_legacy_polygon_struct *)vertex_buffers != pgVar44);
  incoming_commands = *(u8 (*) [4])(puVar53 + 0x3e00);
  savestate_file->buffer_ptr = (u8 *)(puVar53 + 0x3e01);
  memcpy(incoming_parameters,puVar53 + 0x3e01,0x200);
  savestate_file->buffer_ptr = (u8 *)(puVar53 + 0x3e81);
  memcpy(geometry->position_direction_matrix_stack,puVar53 + 0x3e81,0x1000);
  puVar34 = savestate_file->buffer_ptr;
  psVar25 = (s32 *)(puVar34 + 0x1000);
  savestate_file->buffer_ptr = (u8 *)psVar25;
  psVar29 = geometry->projection_matrix_stack;
  do {
    psVar35 = psVar25 + 4;
    sVar60 = psVar25[1];
    sVar57 = psVar25[2];
    sVar26 = psVar25[3];
    *psVar29 = *psVar25;
    psVar29[1] = sVar60;
    psVar29[2] = sVar57;
    psVar29[3] = sVar26;
    psVar25 = psVar35;
    psVar29 = psVar29 + 4;
  } while (psVar35 != (s32 *)(puVar34 + 0x1040));
  puVar34 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar34 + 0x40;
  memcpy(geometry->position_direction_matrix,puVar34 + 0x40,0x80);
  puVar34 = savestate_file->buffer_ptr;
  psVar25 = (s32 *)(puVar34 + 0x80);
  savestate_file->buffer_ptr = (u8 *)psVar25;
  psVar29 = geometry->projection_matrix;
  do {
    psVar35 = psVar25 + 4;
    sVar60 = psVar25[1];
    sVar57 = psVar25[2];
    sVar26 = psVar25[3];
    *psVar29 = *psVar25;
    psVar29[1] = sVar60;
    psVar29[2] = sVar57;
    psVar29[3] = sVar26;
    psVar25 = psVar35;
    psVar29 = psVar29 + 4;
  } while (psVar35 != (s32 *)(puVar34 + 0xc0));
  puVar34 = savestate_file->buffer_ptr;
  psVar29 = (s32 *)(puVar34 + 0x40);
  savestate_file->buffer_ptr = (u8 *)psVar29;
  psVar25 = geometry->texture_matrix;
  do {
    psVar35 = psVar29 + 4;
    sVar60 = psVar29[1];
    sVar57 = psVar29[2];
    sVar26 = psVar29[3];
    *psVar25 = *psVar29;
    psVar25[1] = sVar60;
    psVar25[2] = sVar57;
    psVar25[3] = sVar26;
    psVar25 = psVar25 + 4;
    psVar29 = psVar35;
  } while (psVar35 != (s32 *)(puVar34 + 0x80));
  puVar34 = savestate_file->buffer_ptr;
  psVar29 = (s32 *)(puVar34 + 0x40);
  savestate_file->buffer_ptr = (u8 *)psVar29;
  psVar25 = geometry->clip_matrix;
  do {
    psVar35 = psVar29 + 4;
    sVar60 = psVar29[1];
    sVar57 = psVar29[2];
    sVar26 = psVar29[3];
    *psVar25 = *psVar29;
    psVar25[1] = sVar60;
    psVar25[2] = sVar57;
    psVar25[3] = sVar26;
    psVar25 = psVar25 + 4;
    psVar29 = psVar35;
  } while (psVar35 != (s32 *)(puVar34 + 0x80));
  savestate_file->buffer_ptr = savestate_file->buffer_ptr + 0x40;
  geometry_load_savestate_v1_vertex(savestate_file,clipped_strip_vertexes);
  geometry_load_savestate_v1_vertex(savestate_file,clipped_strip_vertexes + 1);
  memcpy(geometry->shininess_table,savestate_file->buffer_ptr,0x80);
  puVar34 = savestate_file->buffer_ptr;
  psVar25 = (s32 *)(puVar34 + 0x80);
  savestate_file->buffer_ptr = (u8 *)psVar25;
  pasVar40 = geometry->light_coordinates;
  do {
    psVar29 = psVar25 + 4;
    sVar60 = psVar25[1];
    sVar57 = psVar25[2];
    sVar26 = psVar25[3];
    (*pasVar40)[0] = *psVar25;
    (*pasVar40)[1] = sVar60;
    (*pasVar40)[2] = sVar57;
    pasVar40[1][0] = sVar26;
    psVar25 = psVar29;
    pasVar40 = (s32 (*) [3])(pasVar40[1] + 1);
  } while (psVar29 != (s32 *)(puVar34 + 0xb0));
  puVar34 = savestate_file->buffer_ptr;
  psVar25 = (s32 *)(puVar34 + 0x30);
  savestate_file->buffer_ptr = (u8 *)psVar25;
  pasVar40 = geometry->light_half_coordinates;
  do {
    psVar29 = psVar25 + 4;
    sVar60 = psVar25[1];
    sVar57 = psVar25[2];
    sVar26 = psVar25[3];
    (*pasVar40)[0] = *psVar25;
    (*pasVar40)[1] = sVar60;
    (*pasVar40)[2] = sVar57;
    pasVar40[1][0] = sVar26;
    psVar25 = psVar29;
    pasVar40 = (s32 (*) [3])(pasVar40[1] + 1);
  } while (psVar29 != (s32 *)(puVar34 + 0x60));
  puVar34 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar34 + 0x30;
  uVar28 = *(u32 *)(puVar34 + 0x34);
  uVar30 = *(u32 *)(puVar34 + 0x38);
  uVar41 = *(u32 *)(puVar34 + 0x3c);
  geometry->light_colors[0] = *(u32 *)(puVar34 + 0x30);
  geometry->light_colors[1] = uVar28;
  geometry->light_colors[2] = uVar30;
  geometry->light_colors[3] = uVar41;
  puVar34 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar34 + 0x10;
  geometry->diffuse_color = *(u32 *)(puVar34 + 0x10);
  puVar34 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar34 + 4;
  geometry->ambient_color = *(u32 *)(puVar34 + 4);
  puVar34 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar34 + 4;
  geometry->specular_color = *(u32 *)(puVar34 + 4);
  puVar34 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar34 + 4;
  geometry->emission_color = *(u32 *)(puVar34 + 4);
  puVar34 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar34 + 4;
  uVar61 = *(undefined4 *)(puVar34 + 8);
  uVar58 = *(undefined4 *)(puVar34 + 0xc);
  uVar42 = *(undefined4 *)(puVar34 + 0x10);
  *(undefined4 *)geometry->edge_colors = *(undefined4 *)(puVar34 + 4);
  *(undefined4 *)(geometry->edge_colors + 2) = uVar61;
  *(undefined4 *)(geometry->edge_colors + 4) = uVar58;
  *(undefined4 *)(geometry->edge_colors + 6) = uVar42;
  puVar34 = savestate_file->buffer_ptr;
  puVar27 = (undefined4 *)(puVar34 + 0x10);
  savestate_file->buffer_ptr = (u8 *)puVar27;
  puVar62 = geometry->toon_table;
  do {
    puVar45 = puVar27 + 4;
    uVar61 = puVar27[1];
    uVar58 = puVar27[2];
    uVar42 = puVar27[3];
    *(undefined4 *)puVar62 = *puVar27;
    *(undefined4 *)(puVar62 + 2) = uVar61;
    *(undefined4 *)(puVar62 + 4) = uVar58;
    *(undefined4 *)(puVar62 + 6) = uVar42;
    puVar62 = puVar62 + 8;
    puVar27 = puVar45;
  } while (puVar45 != (undefined4 *)(puVar34 + 0x50));
  puVar34 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar34 + 0x40;
  uVar61 = *(undefined4 *)(puVar34 + 0x44);
  uVar42 = *(undefined4 *)(puVar34 + 0x48);
  uVar58 = *(undefined4 *)(puVar34 + 0x4c);
  *(undefined4 *)geometry->fog_table = *(undefined4 *)(puVar34 + 0x40);
  *(undefined4 *)(geometry->fog_table + 4) = uVar61;
  *(undefined4 *)(geometry->fog_table + 8) = uVar42;
  *(undefined4 *)(geometry->fog_table + 0xc) = uVar58;
  uVar61 = *(undefined4 *)(puVar34 + 0x54);
  uVar42 = *(undefined4 *)(puVar34 + 0x58);
  uVar58 = *(undefined4 *)(puVar34 + 0x5c);
  *(undefined4 *)(geometry->fog_table + 0x10) = *(undefined4 *)(puVar34 + 0x50);
  *(undefined4 *)(geometry->fog_table + 0x14) = uVar61;
  *(undefined4 *)(geometry->fog_table + 0x18) = uVar42;
  *(undefined4 *)(geometry->fog_table + 0x1c) = uVar58;
  puVar34 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar34 + 0x20;
  geometry->display_3d_control = *(u32 *)(puVar34 + 0x20);
  puVar34 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar34 + 4;
  geometry->clear_color = *(u32 *)(puVar34 + 4);
  puVar34 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar34 + 4;
  geometry->fog_color = *(u32 *)(puVar34 + 4);
  puVar56 = (u32 *)(savestate_file->buffer_ptr + 4);
  puVar24 = (u32 *)(savestate_file->buffer_ptr + 8);
  savestate_file->buffer_ptr = (u8 *)puVar56;
  uVar28 = *puVar56;
  savestate_file->buffer_ptr = (u8 *)puVar24;
  geometry->polygon_attribute = *puVar24;
  puVar34 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar34 + 4;
  geometry->texture_image_param = *(u32 *)(puVar34 + 4);
  puVar34 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar34 + 4;
  geometry->clear_depth = *(u16 *)(puVar34 + 4);
  puVar34 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar34 + 2;
  geometry->clear_image_offset = *(u16 *)(puVar34 + 2);
  puVar34 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar34 + 2;
  geometry->fog_offset = *(u16 *)(puVar34 + 2);
  puVar34 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar34 + 2;
  geometry->display_dot_depth = *(u16 *)(puVar34 + 2);
  puVar34 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar34 + 2;
  geometry->base_texture_u = *(s16 *)(puVar34 + 2);
  puVar34 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar34 + 2;
  geometry->base_texture_v = *(s16 *)(puVar34 + 2);
  puVar34 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar34 + 2;
  geometry->current_texture_u = *(s16 *)(puVar34 + 2);
  puVar34 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar34 + 2;
  geometry->current_texture_v = *(s16 *)(puVar34 + 2);
  puVar52 = (ushort *)(savestate_file->buffer_ptr + 2);
  puVar62 = (u16 *)(savestate_file->buffer_ptr + 4);
  savestate_file->buffer_ptr = (u8 *)puVar52;
  uVar9 = *puVar52;
  savestate_file->buffer_ptr = (u8 *)puVar62;
  geometry->texture_palette_offset = *puVar62;
  puVar34 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar34 + 2;
  uVar10 = *(ushort *)(puVar34 + 2);
  savestate_file->buffer_ptr = puVar34 + 4;
  uVar11 = *(ushort *)(puVar34 + 4);
  savestate_file->buffer_ptr = puVar34 + 6;
  uVar12 = *(ushort *)(puVar34 + 6);
  savestate_file->buffer_ptr = puVar34 + 8;
  uVar13 = *(ushort *)(puVar34 + 8);
  savestate_file->buffer_ptr = puVar34 + 10;
  uVar14 = *(ushort *)(puVar34 + 10);
  puVar56 = &geometry->vertex_list[0].offset;
  savestate_file->buffer_ptr = puVar34 + 0xc;
  uVar50 = (uint)*(ushort *)(puVar34 + 0xc);
  savestate_file->buffer_ptr = puVar34 + 0xe;
  geometry->last_x = *(s16 *)(puVar34 + 0xe);
  puVar34 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar34 + 2;
  geometry->last_y = *(s16 *)(puVar34 + 2);
  puVar34 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar34 + 2;
  geometry->last_z = *(s16 *)(puVar34 + 2);
  puVar34 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar34 + 2;
  geometry->viewport_width = *(u16 *)(puVar34 + 2);
  puVar34 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar34 + 2;
  geometry->alpha_test_reference = puVar34[2];
  puVar34 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar34 + 1;
  bVar3 = puVar34[1];
  savestate_file->buffer_ptr = puVar34 + 2;
  bVar4 = puVar34[2];
  savestate_file->buffer_ptr = puVar34 + 3;
  bVar5 = puVar34[3];
  savestate_file->buffer_ptr = puVar34 + 4;
  bVar6 = puVar34[4];
  savestate_file->buffer_ptr = puVar34 + 5;
  bVar7 = puVar34[5];
  savestate_file->buffer_ptr = puVar34 + 6;
  geometry->viewport_height = (ushort)bVar5;
  geometry->viewport_x = (ushort)bVar6;
  geometry->viewport_y = (ushort)bVar7;
  iVar51 = 0;
  geometry->buffer_page = puVar34[6];
  puVar34 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar34 + 1;
  bVar5 = puVar34[1];
  savestate_file->buffer_ptr = puVar34 + 3;
  bVar6 = puVar34[3];
  savestate_file->buffer_ptr = puVar34 + 5;
  geometry->matrix_mode = puVar34[5];
  puVar34 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar34 + 1;
  geometry->texture_coordinate_transform_type = puVar34[1];
  puVar34 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar34 + 1;
  geometry->position_direction_matrix_stack_pointer = puVar34[1];
  puVar34 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar34 + 1;
  geometry->projection_matrix_stack_pointer = puVar34[1];
  puVar34 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar34 + 1;
  geometry->waiting_for_swap = puVar34[1];
  puVar34 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar34 + 1;
  geometry->last_render_settings = puVar34[1];
  puVar34 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar34 + 1;
  geometry->render_settings = puVar34[1];
  puVar34 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar34 + 1;
  geometry->use_shininess_table = puVar34[1];
  savestate_file->buffer_ptr = savestate_file->buffer_ptr + 1;
  uVar46 = (uint)geometry->buffer_page;
  uVar31 = uVar46 ^ 1;
  geometry->vertex_list[uVar46].offset = uVar50;
  geometry->vertex_list[uVar31].offset = (uint)uVar12;
  do {
    if (*puVar56 != 0) {
      uVar32 = 0;
      iVar36 = (int)vertex_buffers[0][0].coordinates + iVar51;
      pgVar43 = (geometry_vertex_list_struct *)(puVar56 + -0x6000);
      do {
        uVar8 = *(u16 *)(iVar36 + 0x1c);
        uVar32 = uVar32 + 1;
        iVar47 = *(int *)(iVar36 + 0x10);
        bVar7 = *(byte *)(iVar36 + 0x1e);
        uVar42 = *(undefined4 *)(iVar36 + 0x14);
        pgVar43->vertexes[0].w = *(u32 *)(iVar36 + 0xc);
        sVar15 = *(s16 *)(iVar36 + 0x18);
        pgVar43->vertexes[0].x = uVar8;
        sVar16 = *(s16 *)(iVar36 + 0x1a);
        pgVar43->vertexes[0].y = (ushort)bVar7;
        pgVar43->vertexes[0].color = (u16)uVar42;
        pgVar43->vertexes[0].u = sVar15;
        pgVar43->vertexes[0].v = sVar16;
        pgVar43->vertexes[0].z = (u16)((uint)((iVar47 >> 8) * 0x7fff) >> 0x10);
        iVar36 = iVar36 + 0x20;
        pgVar43 = (geometry_vertex_list_struct *)(pgVar43->vertexes + 1);
      } while (uVar32 < *puVar56);
    }
    iVar51 = iVar51 + 0x30200;
    puVar56 = puVar56 + 0x6001;
  } while (iVar51 != 0x60400);
  geometry->polygon_list[uVar46].offset = (uint)uVar13;
  geometry->polygon_list[uVar31].offset = (uint)uVar10;
  puVar56 = &geometry->polygon_list[0].offset;
  geometry->alpha_polygon_list[uVar46].offset = 0x7ff - uVar14;
  geometry->alpha_polygon_list[uVar31].offset = 0x7ff - uVar11;
  do {
    if (*puVar56 != 0) {
      pgVar37 = (geometry_polygon_list_struct *)(puVar56 + -0x2800);
      uVar31 = 0;
      pgVar44 = pgStack_847a8;
      do {
        uVar30 = (u32)pgVar44->vertex_count;
        uVar8 = pgVar44->texture_palette_offset;
        uVar18 = pgVar44->vertex_indexes[0];
        iVar51 = (int)(short)uVar18;
        uVar41 = pgVar44->attribute;
        pgVar37->polygons[0].texture_image_param = pgVar44->texture_image_param;
        pgVar37->polygons[0].attribute = uVar41;
        pgVar37->polygons[0].texture_palette_offset = uVar8;
        pgVar37->polygons[0].vertex_base = uVar18;
        if (uVar30 == 3) {
          if ((iVar51 == pgVar44->vertex_indexes[1] + 1) &&
             ((int)pgVar44->vertex_indexes[2] == iVar51 + 1)) {
            uVar30 = 0x43;
            pgVar37->polygons[0].vertex_base = pgVar44->vertex_indexes[1];
          }
        }
        else if ((((uVar30 == 4) && ((int)pgVar44->vertex_indexes[1] == iVar51 + 1)) &&
                 ((int)pgVar44->vertex_indexes[3] == pgVar44->vertex_indexes[1] + 1)) &&
                ((int)pgVar44->vertex_indexes[2] == pgVar44->vertex_indexes[3] + 1)) {
          uVar30 = 0x44;
        }
        pgVar37->polygons[0].flags = uVar30;
        uVar31 = uVar31 + 1;
        pgVar44 = pgVar44 + 1;
        pgVar37 = (geometry_polygon_list_struct *)(pgVar37->polygons + 1);
      } while (uVar31 < *puVar56);
    }
    if (puVar56[0x5002] != 0) {
      uVar31 = 0;
      puVar27 = puVar56 + 0x2802;
      puVar45 = &pgStack_847a8[0x7ff].attribute;
      do {
        uVar32 = (uint)*(byte *)((int)puVar45 + 0x1e);
        uVar17 = *(undefined2 *)(puVar45 + 7);
        sVar19 = *(short *)(puVar45 + 1);
        iVar51 = (int)sVar19;
        puVar27[1] = *puVar45;
        *puVar27 = puVar45[6];
        *(undefined2 *)(puVar27 + 4) = uVar17;
        *(short *)((int)puVar27 + 0x12) = sVar19;
        if (uVar32 == 3) {
          if ((iVar51 == *(short *)((int)puVar45 + 6) + 1) &&
             ((int)*(short *)(puVar45 + 2) == iVar51 + 1)) {
            uVar32 = 0x43;
            *(short *)((int)puVar27 + 0x12) = *(short *)((int)puVar45 + 6);
          }
        }
        else if (((uVar32 == 4) && ((int)*(short *)((int)puVar45 + 6) == iVar51 + 1)) &&
                (((int)*(short *)((int)puVar45 + 10) == *(short *)((int)puVar45 + 6) + 1 &&
                 ((int)*(short *)(puVar45 + 2) == *(short *)((int)puVar45 + 10) + 1)))) {
          uVar32 = 0x44;
        }
        puVar27[2] = uVar32;
        uVar31 = uVar31 + 1;
        puVar45 = puVar45 + -9;
        puVar27 = puVar27 + 5;
      } while (uVar31 < puVar56[0x5002]);
    }
    puVar56 = puVar56 + 0x2801;
    pgStack_847a8 = pgStack_847a8 + 0x800;
  } while (puVar56 != &geometry->alpha_polygon_list[0].offset);
  puVar34 = geometry->commands;
  memcpy(puVar34,incoming_commands,(uint)bVar5);
  psVar25 = geometry->parameters;
  memcpy(psVar25,incoming_parameters,(uint)bVar6);
  uVar10 = geometry->texture_palette_offset;
  geometry->command_store_ptr = puVar34;
  uVar30 = geometry->texture_image_param;
  geometry->parameter_store_ptr_advance = psVar25 + bVar6;
  geometry->parameter_store_ptr = psVar25;
  geometry->command_store_ptr_advance = puVar34 + bVar5;
  (geometry->primitive_queue).texture_data_vertex_tag = 0xff;
  (geometry->primitive_queue).input_normal_color_tag = 0xff;
  (geometry->primitive_queue).input_color_ptr = (geometry->primitive_queue).input_colors;
  (geometry->primitive_queue).input_vertexes = 0;
  (geometry->primitive_queue).texture_data_count = 0;
  (geometry->primitive_queue).texture_data_offset = 0;
  (geometry->primitive_queue).input_normal_ptr = (geometry->primitive_queue).input_normals;
  (geometry->primitive_queue).input_normal_color_tag_ptr =
       (geometry->primitive_queue).input_normal_color_tags;
  (geometry->primitive_queue).transformed_vertexes = 0;
  (geometry->primitive_queue).polygon_batch_count = 1;
  (geometry->primitive_queue).texture_image_param = uVar30;
  (geometry->primitive_queue).texture_palette_offset = (uint)uVar10;
  (geometry->primitive_queue).vertex_color = (uint)uVar9;
  (geometry->primitive_queue).polygon_batches[0].attribute = uVar28;
  (geometry->primitive_queue).polygon_batches[0].vertex_base = '\0';
  memcpy(submit_state_info,&DAT_0813c770,0xa0);
  uVar30 = submit_state_info[bVar3].split_restore_vertexes;
  uVar28 = submit_state_info[bVar3].flip_winding;
  iVar51 = submit_state_info[bVar3].vertex_count - (uint)bVar4;
  (geometry->primitive_queue).polygon_batches[0].primitive_type =
       (u8)submit_state_info[bVar3].primitive_type;
  (geometry->primitive_queue).polygon_batches[0].flip_winding = (u8)uVar28;
  if (uVar30 != 0) {
    (geometry->primitive_queue).transformed_coordinates[0] =
         clipped_strip_vertexes[0].coordinates[0];
    (geometry->primitive_queue).transformed_coordinates[1] =
         clipped_strip_vertexes[0].coordinates[1];
    (geometry->primitive_queue).transformed_coordinates[2] =
         clipped_strip_vertexes[0].coordinates[2];
    (geometry->primitive_queue).transformed_coordinates[3] =
         clipped_strip_vertexes[0].coordinates[3];
    (geometry->primitive_queue).color[0] = (u16)clipped_strip_vertexes[0].color;
    (geometry->primitive_queue).clip_codes[0] = clipped_strip_vertexes[0].clip_codes;
    (geometry->primitive_queue).uv[0] = clipped_strip_vertexes[0].color;
    (geometry->primitive_queue).transformed_coordinates[4] =
         clipped_strip_vertexes[1].coordinates[0];
    (geometry->primitive_queue).transformed_coordinates[5] =
         clipped_strip_vertexes[1].coordinates[1];
    (geometry->primitive_queue).transformed_coordinates[6] =
         clipped_strip_vertexes[1].coordinates[2];
    (geometry->primitive_queue).transformed_coordinates[7] =
         clipped_strip_vertexes[1].coordinates[3];
    (geometry->primitive_queue).color[1] = (u16)clipped_strip_vertexes[1].color;
    (geometry->primitive_queue).clip_codes[1] = clipped_strip_vertexes[1].clip_codes;
    (geometry->primitive_queue).uv[1] = clipped_strip_vertexes[1].color;
  }
  if (iVar51 != 0) {
    puVar62 = (geometry->primitive_queue).color + (uVar30 - 1);
    puVar56 = (geometry->primitive_queue).uv + (uVar30 - 1);
    puVar34 = (geometry->primitive_queue).clip_codes + (uVar30 - 1);
    psVar25 = (geometry->primitive_queue).transformed_coordinates + uVar30 * 4;
    while( true ) {
      puVar48 = puVar34 + uVar46 * 0x1810 + (uVar50 - (int)geometry) + (-0x1280 - uVar30);
      sVar57 = vertex_buffers[0][(int)puVar48].coordinates[1];
      sVar26 = vertex_buffers[0][(int)puVar48].coordinates[2];
      *psVar25 = vertex_buffers[0][(int)puVar48].coordinates[0];
      psVar25[1] = sVar57;
      uVar28 = vertex_buffers[0][(int)puVar48].color;
      psVar25[2] = sVar26;
      uVar2 = vertex_buffers[0][(int)puVar48].clip_codes;
      psVar25[3] = vertex_buffers[0][(int)puVar48].coordinates[3];
      puVar62 = puVar62 + 1;
      *puVar62 = (u16)uVar28;
      puVar56 = puVar56 + 1;
      *puVar56 = uVar28;
      puVar34 = puVar34 + 1;
      *puVar34 = uVar2;
      if ((undefined *)((int)geometry + uVar30 + 0x127f + iVar51) == puVar34) break;
      uVar46 = (uint)geometry->buffer_page;
      psVar25 = psVar25 + 4;
    }
  }
  uVar28 = geometry->diffuse_color;
  uVar41 = geometry->specular_color;
  uVar1 = SIMDExpandImmediate(0,8,0x1f);
  (geometry->primitive_queue).transformed_vertexes = iVar51 + uVar30;
  (geometry->primitive_queue).vertex_tag = iVar51 + uVar30;
  uVar69 = *(undefined8 *)geometry->light_colors;
  uVar22 = CONCAT22((short)uVar28,(short)uVar28);
  uVar23 = CONCAT22((short)uVar41,(short)uVar41);
  uVar67 = VectorShiftRight(uVar69,5);
  uVar68 = VectorShiftRight(*(undefined8 *)(geometry->light_colors + 2),5);
  uVar65 = VectorCopyNarrow(*(undefined (*) [16])geometry->light_colors,4);
  uVar64 = VectorShiftRight(*(undefined8 *)(geometry->light_colors + 2),10);
  uVar69 = VectorShiftRight(uVar69,10);
  auVar21._8_8_ = uVar68;
  auVar21._0_8_ = uVar67;
  uVar66 = VectorCopyNarrow(auVar21,4);
  uVar9 = (ushort)((uVar28 << 0x16) >> 0x1b);
  uVar42 = CONCAT22(uVar9,uVar9);
  uVar9 = (ushort)((uVar41 << 0x16) >> 0x1b);
  uVar58 = CONCAT22(uVar9,uVar9);
  auVar20._8_8_ = uVar64;
  auVar20._0_8_ = uVar69;
  uVar63 = VectorCopyNarrow(auVar20,4);
  uVar9 = (ushort)((uVar41 << 0x11) >> 0x1b);
  uVar61 = CONCAT22(uVar9,uVar9);
  VectorMultiply(CONCAT44(uVar22,uVar22) & 0x1f001f001f001f,uVar65 & uVar1,2);
  VectorMultiply(uVar65 & uVar1,CONCAT44(uVar23,uVar23) & 0x1f001f001f001f,2);
  uVar9 = (ushort)((uVar28 << 0x11) >> 0x1b);
  uVar22 = CONCAT22(uVar9,uVar9);
  VectorMultiply(CONCAT44(uVar42,uVar42),uVar66 & uVar1,2);
  VectorMultiply(uVar66 & uVar1,CONCAT44(uVar58,uVar58),2);
  VectorMultiply(CONCAT44(uVar61,uVar61),uVar63 & uVar1,2);
  VectorMultiply(CONCAT44(uVar22,uVar22),uVar63 & uVar1,2);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


