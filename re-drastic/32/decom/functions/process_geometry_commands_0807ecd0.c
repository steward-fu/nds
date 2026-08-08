/*
 * Ghidra decompilation
 *
 * Function : process_geometry_commands
 * Address  : 0807ecd0
 * Program  : drastic
 */


/* WARNING: Removing unreachable block (ram,0x08082538) */
/* WARNING: Unknown calling convention */
/* Local variable emission_color_1:u32[r1:4] conflicts with parameter, skipped. */

void process_geometry_commands(geometry_struct *geometry,u32 commands)

{
  u32 vertex_tag_1;
  u32 input_normal_color_tag;
  u32 b;
  u32 light_color_4;
  u32 ag_1;
  u32 g_2;
  s32 y0;
  u32 input_normal_color_tag_2;
  s32 *dest_ptr;
  u32 vertex_tag;
  u32 vertex_tag_2;
  u32 active_lights;
  u32 light_color_2;
  u32 material_color;
  u32 polygon_attribute;
  u32 b_2;
  s32 z;
  s32 x1;
  s32 *src_ptr_1;
  s32 *dest_ptr_2;
  s32 *src_ptr_3;
  s32 *_matrix_1;
  s32 *_matrix_7;
  s32 *_matrix_8;
  s32 *_matrix_9;
  s32 *_matrix_10;
  s32 *_matrix_12;
  s32 *_matrix_13;
  s32 *_matrix_14;
  s32 *_matrix_15;
  s32 *_matrix_17;
  s32 *_matrix_18;
  s32 *_matrix_19;
  s32 *_matrix_20;
  u32 vertex_tag_4;
  u32 texture_image_param;
  u16 *input_color_ptr;
  u32 vertex_tag_3;
  u32 uv;
  u32 material_color_1;
  s32 y_1;
  s32 z0;
  s32 *_matrix_2;
  s32 *_matrix_5;
  s32 *_matrix_23;
  s32 *_matrix_25;
  u16 *input_color_ptr_1;
  s32 xy;
  s32 xy_1;
  s32 xz;
  s32 yz;
  s32 diff_xyz;
  u32 texture_data_count;
  u32 texture_palette_offset;
  u32 texture_data_count_1;
  u8 *input_normal_color_tag_ptr;
  s32 *input_normal_ptr;
  u8 *input_normal_color_tag_ptr_1;
  u32 light_color_1;
  u32 old_light_color;
  u32 ambient_color;
  u32 ab_1;
  u32 primitive_type;
  u32 ag_2;
  u32 light_color_6;
  u32 polygon_batch_count;
  u32 light_vector;
  s32 light_y;
  s32 light_z;
  s32 *light_coordinates;
  s32 y1;
  s32 *_matrix;
  s32 *_matrix_3;
  s32 *_matrix_4;
  s32 *_matrix_6;
  s32 *_matrix_22;
  s32 *_matrix_24;
  s32 *_matrix_26;
  s32 *_matrix_27;
  u8 *input_normal_color_tag_ptr_2;
  s32 *dest_ptr_4;
  s32 *dest_ptr_5;
  s32 normal_x;
  u32 input_vertexes;
  u32 input_vertexes_1;
  s32 xyz;
  u32 input_vertexes_4;
  u32 input_vertexes_5;
  u32 input_vertexes_2;
  u32 diffuse_ambient;
  u32 ab;
  u32 b_1;
  u32 light_color_3;
  u32 active_lights_1;
  u32 active_lights_2;
  u32 light_number_1;
  s32 y;
  u32 viewport_parameters;
  s32 z1;
  s32 normal_z;
  u32 input_vertexes_3;
  u32 ag;
  u32 specular_emission;
  u32 light_number;
  s32 viewport_x;
  s32 normal_y;
  u32 r;
  s32 viewport_y;
  u32 emission_color;
  u32 ar_2;
  geometry_primitive_queue_struct *primitive_queue;
  geometry_primitive_queue_struct *primitive_queue_3;
  geometry_primitive_queue_struct *primitive_queue_1;
  geometry_primitive_queue_struct *primitive_queue_4;
  geometry_primitive_queue_struct *primitive_queue_5;
  geometry_primitive_queue_struct *primitive_queue_2;
  geometry_primitive_queue_struct *primitive_queue_6;
  geometry_primitive_queue_struct *primitive_queue_7;
  geometry_primitive_queue_struct *primitive_queue_8;
  geometry_primitive_queue_struct *primitive_queue_9;
  geometry_primitive_queue_struct *primitive_queue_10;
  s32 normal_vector;
  u32 light_color;
  u32 g_1;
  u32 ar_1;
  u32 r_2;
  s32 x;
  s32 result_value;
  u32 stack_index;
  u32 stack_index_1;
  s32 *_matrix_11;
  s32 *_matrix_16;
  s32 *_matrix_21;
  u32 ambient_color_1;
  s32 *src_ptr;
  u32 input_normal_color_tag_1;
  u32 g;
  u32 r_1;
  u32 ab_2;
  s32 *light_half_coordinates;
  s32 x0;
  s32 *dest_ptr_1;
  s32 *src_ptr_2;
  s32 *dest_ptr_3;
  s32 light_x;
  u32 old_emission_color;
  s32 x_vertexes [8];
  s32 y_vertexes [8];
  s32 z_vertexes [8];
  u8 clip_codes [8];
  
  if (commands == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0807edfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)process_geometry_commands::dispatch_table[geometry->commands[0]])
            (0xa7a,0xa7c,geometry->parameters);
  return;
}


