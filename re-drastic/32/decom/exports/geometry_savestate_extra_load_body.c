/*
 * Ghidra decompilation
 *
 * Function : geometry_savestate_extra_load_body
 * Address  : 08085670
 * Program  : drastic
 */


/* WARNING: Control flow encountered unimplemented instructions */
/* WARNING: Unknown calling convention */

void geometry_savestate_extra_load_body(geometry_struct *geometry,mem_file_struct *savestate_file)

{
  ulonglong uVar1;
  ushort uVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  geometry_primitive_queue_struct *primitive_queue;
  u32 b;
  u32 g;
  uint uVar10;
  uint uVar11;
  u32 active_lights;
  u32 uVar12;
  u32 light_color;
  u32 uVar13;
  u32 r;
  ulonglong uVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  uVar2 = geometry->texture_palette_offset;
  uVar12 = geometry->texture_image_param;
  geometry->parameter_store_ptr = geometry->parameters;
  uVar1 = SIMDExpandImmediate(0,8,0x1f);
  geometry->parameter_store_ptr_advance =
       geometry->parameters + geometry->incoming_parameters_remaining;
  (geometry->primitive_queue).input_vertexes = 0;
  (geometry->primitive_queue).input_normal_ptr = (geometry->primitive_queue).input_normals;
  (geometry->primitive_queue).texture_data_vertex_tag = 0xff;
  (geometry->primitive_queue).texture_data_count = 0;
  (geometry->primitive_queue).texture_data_offset = 0;
  (geometry->primitive_queue).input_normal_color_tag = 0xff;
  (geometry->primitive_queue).input_color_ptr = (geometry->primitive_queue).input_colors;
  (geometry->primitive_queue).input_normal_color_tag_ptr =
       (geometry->primitive_queue).input_normal_color_tags;
  (geometry->primitive_queue).polygon_batch_count = 1;
  (geometry->primitive_queue).texture_image_param = uVar12;
  (geometry->primitive_queue).texture_palette_offset = (uint)uVar2;
  (geometry->primitive_queue).polygon_batches[0].vertex_base = '\0';
  uVar10 = geometry->specular_emission;
  uVar11 = geometry->diffuse_ambient;
  (geometry->primitive_queue).vertex_tag = (geometry->primitive_queue).transformed_vertexes;
  geometry->use_shininess_table = (byte)(uVar10 >> 8) >> 7;
  uVar13 = geometry->polygon_list[geometry->buffer_page].offset;
  uVar12 = geometry->alpha_polygon_list[geometry->buffer_page].offset;
  uVar8 = CONCAT22((short)uVar10,(short)uVar10);
  geometry->specular_color = uVar10 & 0x7fff;
  geometry->emission_color = uVar10 >> 0x10 & 0x7fff;
  geometry->polygon_count = (short)uVar13 + (short)uVar12;
  geometry->diffuse_color = uVar11 & 0x7fff;
  geometry->ambient_color = uVar11 >> 0x10 & 0x7fff;
  uVar20 = *(undefined8 *)geometry->light_colors;
  uVar9 = CONCAT22((short)uVar11,(short)uVar11);
  uVar19 = VectorShiftRight(*(undefined8 *)(geometry->light_colors + 2),5);
  uVar15 = VectorShiftRight(*(undefined8 *)(geometry->light_colors + 2),10);
  uVar17 = VectorShiftRight(uVar20,5);
  uVar20 = VectorShiftRight(uVar20,10);
  uVar16 = VectorCopyNarrow(*(undefined (*) [16])geometry->light_colors,4);
  uVar2 = (ushort)(((uVar10 & 0x7fff) << 0x16) >> 0x1b);
  uVar5 = CONCAT22(uVar2,uVar2);
  auVar4._8_8_ = uVar19;
  auVar4._0_8_ = uVar17;
  uVar18 = VectorCopyNarrow(auVar4,4);
  uVar2 = (ushort)(((uVar11 & 0x7fff) << 0x16) >> 0x1b);
  uVar6 = CONCAT22(uVar2,uVar2);
  auVar3._8_8_ = uVar15;
  auVar3._0_8_ = uVar20;
  uVar14 = VectorCopyNarrow(auVar3,4);
  uVar2 = (ushort)((uVar10 << 0x11) >> 0x1b);
  uVar7 = CONCAT22(uVar2,uVar2);
  VectorMultiply(CONCAT44(uVar9,uVar9) & 0x1f001f001f001f,uVar16 & uVar1,2);
  VectorMultiply(CONCAT44(uVar8,uVar8) & 0x1f001f001f001f,uVar16 & uVar1,2);
  uVar2 = (ushort)((uVar11 << 0x11) >> 0x1b);
  uVar8 = CONCAT22(uVar2,uVar2);
  VectorMultiply(CONCAT44(uVar6,uVar6),uVar18 & uVar1,2);
  VectorMultiply(CONCAT44(uVar5,uVar5),uVar18 & uVar1,2);
  VectorMultiply(uVar14 & uVar1,CONCAT44(uVar7,uVar7),2);
  VectorMultiply(CONCAT44(uVar8,uVar8),uVar14 & uVar1,2);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


