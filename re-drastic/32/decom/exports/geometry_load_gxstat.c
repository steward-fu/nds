/*
 * Ghidra decompilation
 *
 * Function : geometry_load_gxstat
 * Address  : 080826dc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u32 geometry_load_gxstat(geometry_struct *geometry)

{
  u8 *puVar1;
  size_t __n;
  u8 *__dest;
  u8 *__ptr;
  s32 *psVar2;
  size_t __n_00;
  s32 *__src;
  s32 parameter_spillover;
  
  if (((geometry->system->benchmark).disable & 0x10) == 0) {
    if ((geometry->log).mode == '\x02') {
      puVar1 = geometry->command_store_ptr;
      __ptr = geometry->commands;
      __dest = puVar1;
      if (puVar1 != __ptr) {
        psVar2 = geometry->parameters;
        __printf_chk(1,"logging %d commands, %d parameters\n",(int)puVar1 - (int)__ptr,
                     (int)geometry->parameter_store_ptr - (int)psVar2 >> 2);
        fwrite(__ptr,1,(int)geometry->command_store_ptr - (int)__ptr,
               (FILE *)(geometry->log).commands);
        fwrite(psVar2,1,(int)geometry->parameter_store_ptr - (int)psVar2,
               (FILE *)(geometry->log).parameters);
        puVar1 = geometry->command_store_ptr;
        __dest = __ptr;
      }
    }
    else {
      puVar1 = geometry->command_store_ptr;
      __dest = geometry->commands;
    }
    process_geometry_commands(geometry,(int)puVar1 - (int)__dest);
  }
  else {
    __dest = geometry->commands;
  }
  psVar2 = geometry->parameters;
  __src = geometry->parameter_store_ptr;
  __n_00 = (int)geometry->command_store_ptr_advance - (int)geometry->command_store_ptr;
  __n = (int)geometry->parameter_store_ptr_advance - (int)__src;
  if (__n_00 != 0) {
    memcpy(__dest,geometry->command_store_ptr,__n_00);
  }
  if ((int)__n >> 2 != 0) {
    memcpy(psVar2,__src,__n);
  }
  geometry->command_store_ptr = __dest;
  geometry->parameter_store_ptr = psVar2;
  geometry->swap_in_queue = '\0';
  geometry->command_store_ptr_advance = __dest + __n_00;
  geometry->parameter_store_ptr_advance = (s32 *)((int)psVar2 + __n);
  return (uint)geometry->projection_matrix_stack_pointer << 0xd |
         (uint)geometry->position_direction_matrix_stack_pointer << 8 | 0x6000000 |
         (uint)geometry->waiting_for_swap << 0x1b | (uint)geometry->box_result << 1;
}


