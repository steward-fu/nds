/*
 * Ghidra decompilation
 *
 * Function : reset_geometry
 * Address  : 08083e3c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void reset_geometry(geometry_struct *geometry)

{
  geometry_primitive_queue_struct *primitive_queue;
  undefined8 uVar1;
  undefined auVar2 [16];
  undefined8 uVar3;
  
  auVar2 = ZEXT816(0);
  (geometry->primitive_queue).texture_data_count = 0;
  (geometry->primitive_queue).input_normal_color_tag = 0xff;
  (geometry->primitive_queue).input_normal_ptr = (geometry->primitive_queue).input_normals;
  (geometry->primitive_queue).input_color_ptr = (geometry->primitive_queue).input_colors;
  (geometry->primitive_queue).input_normal_color_tag_ptr =
       (geometry->primitive_queue).input_normal_color_tags;
  (geometry->primitive_queue).texture_image_param = 0;
  (geometry->primitive_queue).texture_palette_offset = 0;
  (geometry->primitive_queue).vertex_color = 0;
  memset(geometry->position_direction_matrix_stack,0,0x1000);
  uVar1 = auVar2._0_8_;
  *(undefined8 *)geometry->projection_matrix_stack = uVar1;
  uVar3 = auVar2._8_8_;
  *(undefined8 *)(geometry->projection_matrix_stack + 2) = uVar3;
  *(undefined8 *)(geometry->projection_matrix_stack + 4) = uVar1;
  *(undefined8 *)(geometry->projection_matrix_stack + 6) = uVar3;
  *(undefined8 *)(geometry->projection_matrix_stack + 8) = uVar1;
  *(undefined8 *)(geometry->projection_matrix_stack + 10) = uVar3;
  *(undefined8 *)(geometry->projection_matrix_stack + 0xc) = uVar1;
  *(undefined8 *)(geometry->projection_matrix_stack + 0xe) = uVar3;
  memset(geometry->position_direction_matrix,0,0x80);
  uVar1 = auVar2._0_8_;
  *(undefined8 *)geometry->projection_matrix = uVar1;
  uVar3 = auVar2._8_8_;
  *(undefined8 *)(geometry->projection_matrix + 2) = uVar3;
  *(undefined8 *)(geometry->projection_matrix + 4) = uVar1;
  *(undefined8 *)(geometry->projection_matrix + 6) = uVar3;
  *(undefined8 *)(geometry->projection_matrix + 8) = uVar1;
  *(undefined8 *)(geometry->projection_matrix + 10) = uVar3;
  *(undefined8 *)(geometry->projection_matrix + 0xc) = uVar1;
  *(undefined8 *)(geometry->projection_matrix + 0xe) = uVar3;
  *(undefined8 *)geometry->texture_matrix = uVar1;
  *(undefined8 *)(geometry->texture_matrix + 2) = uVar3;
  *(undefined8 *)(geometry->texture_matrix + 4) = uVar1;
  *(undefined8 *)(geometry->texture_matrix + 6) = uVar3;
  *(undefined8 *)(geometry->texture_matrix + 8) = uVar1;
  *(undefined8 *)(geometry->texture_matrix + 10) = uVar3;
  *(undefined8 *)(geometry->texture_matrix + 0xc) = uVar1;
  *(undefined8 *)(geometry->texture_matrix + 0xe) = uVar3;
  *(undefined8 *)geometry->clip_matrix = uVar1;
  *(undefined8 *)(geometry->clip_matrix + 2) = uVar3;
  *(undefined8 *)(geometry->clip_matrix + 4) = uVar1;
  *(undefined8 *)(geometry->clip_matrix + 6) = uVar3;
  *(undefined8 *)(geometry->clip_matrix + 8) = uVar1;
  *(undefined8 *)(geometry->clip_matrix + 10) = uVar3;
  *(undefined8 *)(geometry->clip_matrix + 0xc) = uVar1;
  *(undefined8 *)(geometry->clip_matrix + 0xe) = uVar3;
  memset(geometry->shininess_table,0,0x80);
  geometry->specular_emission = 0;
  geometry->diffuse_ambient = 0;
  geometry->diffuse_color = 0;
  geometry->ambient_color = 0;
  geometry->specular_color = 0;
  geometry->command_store_ptr = geometry->commands;
  geometry->command_store_ptr_advance = geometry->commands;
  geometry->emission_color = 0;
  geometry->parameter_store_ptr = geometry->parameters;
  geometry->parameter_store_ptr_advance = geometry->parameters;
  geometry->incoming_parameters_remaining = '\0';
  geometry->matrix_mode = '\0';
  geometry->position_direction_matrix_stack_pointer = '\0';
  geometry->projection_matrix_stack_pointer = '\0';
  geometry->texture_matrix_stack_pointer = '\0';
  geometry->vertex_list[0].offset = 0;
  geometry->polygon_list[0].offset = 0;
  geometry->alpha_polygon_list[0].offset = 0;
  uVar1 = auVar2._0_8_;
  *(undefined8 *)geometry->edge_colors = uVar1;
  uVar3 = auVar2._8_8_;
  *(undefined8 *)(geometry->edge_colors + 4) = uVar3;
  *(undefined8 *)geometry->toon_table = uVar1;
  *(undefined8 *)(geometry->toon_table + 4) = uVar3;
  *(undefined8 *)(geometry->toon_table + 8) = uVar1;
  *(undefined8 *)(geometry->toon_table + 0xc) = uVar3;
  *(undefined8 *)(geometry->toon_table + 0x10) = uVar1;
  *(undefined8 *)(geometry->toon_table + 0x14) = uVar3;
  *(undefined8 *)(geometry->toon_table + 0x18) = uVar1;
  *(undefined8 *)(geometry->toon_table + 0x1c) = uVar3;
  memset(geometry->toon_cache,0,0x60);
  uVar1 = auVar2._0_8_;
  *(undefined8 *)geometry->fog_table = uVar1;
  uVar3 = auVar2._8_8_;
  *(undefined8 *)(geometry->fog_table + 8) = uVar3;
  *(undefined8 *)(geometry->fog_table + 0x10) = uVar1;
  *(undefined8 *)(geometry->fog_table + 0x18) = uVar3;
  *(undefined8 *)geometry->fog_diff_table = uVar1;
  *(undefined8 *)(geometry->fog_diff_table + 8) = uVar3;
  *(undefined8 *)(geometry->fog_diff_table + 0x10) = uVar1;
  *(undefined8 *)(geometry->fog_diff_table + 0x18) = uVar3;
  geometry->clear_depth = 0x7fff;
  geometry->display_3d_control = 0;
  geometry->clear_color = 0;
  geometry->polygon_attribute = 0;
  geometry->texture_image_param = 0;
  geometry->fog_color = 0;
  geometry->clear_image_offset = 0;
  geometry->fog_offset = 0;
  geometry->display_dot_depth = 0;
  geometry->polygon_count = 0;
  geometry->base_texture_u = 0;
  geometry->base_texture_v = 0;
  geometry->current_texture_u = 0;
  geometry->current_texture_v = 0;
  geometry->texture_palette_offset = 0;
  geometry->last_x = 0;
  geometry->last_y = 0;
  geometry->last_z = 0;
  geometry->viewport_width = 0;
  geometry->box_result = '\0';
  geometry->alpha_test_reference = '\0';
  geometry->viewport_height = 0;
  geometry->viewport_x = 0;
  geometry->viewport_y = 0;
  geometry->buffer_page = '\0';
  geometry->active_lights = '\0';
  geometry->texture_coordinate_transform_type = '\0';
  geometry->waiting_for_swap = '\0';
  geometry->swap_stalled_cpu = '\0';
  geometry->swap_in_queue = '\0';
  geometry->last_render_settings = '\0';
  geometry->render_settings = '\0';
  geometry->use_shininess_table = '\0';
  geometry->update_framebuffer = '\0';
  geometry->clip_matrix_dirty = '\x01';
  geometry->light_vectors_dirty = '\x0f';
  geometry->log_mode = '\0';
  return;
}


