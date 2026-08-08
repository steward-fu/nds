/*
 * Ghidra decompilation
 *
 * Function : update_frame_geometry
 * Address  : 08082a2c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void update_frame_geometry(geometry_struct *geometry)

{
  uint pixel;
  u32 clear_color;
  u32 uVar1;
  void *pvVar2;
  u8 *puVar3;
  u32 new_buffer_page;
  uint uVar4;
  size_t __n;
  u8 *puVar5;
  u8 *io_region;
  system_struct *psVar6;
  u8 *__ptr;
  u32 clear_fog;
  s32 *psVar7;
  size_t __n_00;
  s32 *__src;
  s32 parameter_spillover;
  
  psVar6 = geometry->system;
  pixel = geometry->clear_color;
  uVar4 = geometry->clear_depth & 0x7fff;
  if (uVar4 == 0x7fff) {
    uVar4 = 0xffffff;
  }
  else {
    uVar4 = uVar4 << 9;
  }
  uVar4 = pixel & 0x3f000000 | uVar4;
  uVar1 = texture_cache_build_pixel_custom_alpha(pixel,(pixel << 0xb) >> 0x1b);
  if ((int)(pixel << 0x10) < 0) {
    uVar1 = uVar1 | 0x80000000;
  }
  if (uVar4 != (psVar6->video).video_3d.clear_depth_id) {
    (psVar6->video).video_3d.clear_depth_id = uVar4;
    geometry->update_framebuffer = '\x01';
  }
  if (uVar1 != (psVar6->video).video_3d.clear_color) {
    (psVar6->video).video_3d.clear_color = uVar1;
    geometry->update_framebuffer = '\x01';
  }
  if (((geometry->system->benchmark).disable & 0x10) == 0) {
    if ((geometry->log).mode == '\x02') {
      puVar3 = geometry->command_store_ptr;
      __ptr = geometry->commands;
      puVar5 = puVar3;
      if (puVar3 != __ptr) {
        psVar7 = geometry->parameters;
        __printf_chk(1,"logging %d commands, %d parameters\n",(int)puVar3 - (int)__ptr,
                     (int)geometry->parameter_store_ptr - (int)psVar7 >> 2);
        fwrite(__ptr,1,(int)geometry->command_store_ptr - (int)__ptr,
               (FILE *)(geometry->log).commands);
        fwrite(psVar7,1,(int)geometry->parameter_store_ptr - (int)psVar7,
               (FILE *)(geometry->log).parameters);
        puVar3 = geometry->command_store_ptr;
        puVar5 = __ptr;
      }
    }
    else {
      puVar3 = geometry->command_store_ptr;
      puVar5 = geometry->commands;
    }
    process_geometry_commands(geometry,(int)puVar3 - (int)puVar5);
  }
  else {
    puVar5 = geometry->commands;
  }
  psVar7 = geometry->parameters;
  __src = geometry->parameter_store_ptr;
  __n_00 = (int)geometry->command_store_ptr_advance - (int)geometry->command_store_ptr;
  __n = (int)geometry->parameter_store_ptr_advance - (int)__src;
  if (__n_00 != 0) {
    memcpy(puVar5,geometry->command_store_ptr,__n_00);
  }
  if ((int)__n >> 2 != 0) {
    memcpy(psVar7,__src,__n);
  }
  geometry->command_store_ptr = puVar5;
  geometry->parameter_store_ptr = psVar7;
  geometry->command_store_ptr_advance = puVar5 + __n_00;
  geometry->parameter_store_ptr_advance = (s32 *)((int)psVar7 + __n);
  geometry->swap_in_queue = '\0';
  geometry_transform_vertexes(geometry);
  geometry_flush_polygons(geometry);
  if (geometry->waiting_for_swap != '\0') {
    uVar4 = geometry->buffer_page ^ 1;
    geometry->buffer_page = (u8)uVar4;
    geometry->last_render_settings = geometry->render_settings;
    geometry->render_settings = geometry->update_render_settings;
    geometry->update_framebuffer = '\x01';
    geometry->vertex_list[uVar4].offset = 0;
    geometry->polygon_list[uVar4].offset = 0;
    geometry->alpha_polygon_list[uVar4].offset = 0;
    geometry->polygon_count = 0;
    geometry->waiting_for_swap = '\0';
  }
  if (geometry->swap_stalled_cpu != '\0') {
    psVar6 = geometry->system;
    puVar5 = (psVar6->cpu_arm9).io_region;
    queue_geometry_command
              (geometry,geometry->swap_spillover_command,geometry->swap_spillover_parameter);
    (psVar6->cpu_arm9).alert_flags = 0;
    (psVar6->cpu_arm9).state = (psVar6->cpu_arm9).state & 0xfb;
    (psVar6->cpu_arm9).active_interrupts =
         -*(int *)(puVar5 + 0x208) & *(uint *)(puVar5 + 0x210) & *(uint *)(puVar5 + 0x214);
    geometry->swap_stalled_cpu = '\0';
    pvVar2 = cpu_block_lookup_base(&psVar6->cpu_arm9,(psVar6->cpu_arm9).pc);
    (psVar6->cpu_arm9).block_resume_ptr = (void *)((int)pvVar2 + 8);
  }
  return;
}


