/*
 * Ghidra decompilation
 *
 * Function : queue_geometry_command
 * Address  : 080828a0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void queue_geometry_command(geometry_struct *geometry,u32 command,u32 parameter)

{
  byte bVar1;
  u8 *puVar2;
  system_struct *psVar3;
  uint uVar4;
  u32 *puVar5;
  u8 *command_store_ptr;
  u32 incoming_parameters_remaining;
  u32 parameter_count;
  int iVar6;
  
  if (geometry->incoming_parameters_remaining == 0) {
    uVar4 = command & 0x7f;
    if ((geometry->swap_in_queue == '\0') ||
       (psVar3 = geometry->system, psVar3->swap_stalls_geometry == '\0')) {
      puVar2 = geometry->command_store_ptr;
      if (uVar4 == 0x50) {
        geometry->swap_in_queue = '\x01';
      }
      *puVar2 = (u8)uVar4;
      bVar1 = ""[uVar4];
      if (bVar1 < 2) {
        puVar2 = puVar2 + 1;
        if (bVar1 != 0) {
          puVar5 = (u32 *)(geometry->parameter_store_ptr + 1);
          *geometry->parameter_store_ptr = parameter;
          geometry->parameter_store_ptr = (s32 *)puVar5;
          geometry->parameter_store_ptr_advance = (s32 *)puVar5;
        }
        geometry->command_store_ptr = puVar2;
        geometry->command_store_ptr_advance = puVar2;
        if (0x400 < (int)puVar2 - (int)geometry->commands) {
          process_geometry(geometry);
        }
        if (geometry->swap_in_queue != '\0') {
          process_geometry(geometry);
          geometry->swap_in_queue = '\x01';
        }
      }
      else {
        puVar5 = (u32 *)geometry->parameter_store_ptr;
        *puVar5 = parameter;
        geometry->parameter_store_ptr_advance = (s32 *)(puVar5 + 1);
        geometry->incoming_parameters_remaining = bVar1 - 1;
      }
    }
    else {
      geometry->swap_spillover_command = uVar4;
      geometry->swap_spillover_parameter = parameter;
      geometry->swap_stalled_cpu = '\x01';
      (psVar3->cpu_arm9).active_interrupts = 0;
      (psVar3->cpu_arm9).state = (psVar3->cpu_arm9).state | 4;
      (psVar3->cpu_arm9).alert_flags = (psVar3->cpu_arm9).alert_flags | 0x10;
    }
  }
  else {
    iVar6 = geometry->incoming_parameters_remaining - 1;
    puVar5 = (u32 *)(geometry->parameter_store_ptr_advance + 1);
    *geometry->parameter_store_ptr_advance = parameter;
    geometry->parameter_store_ptr_advance = (s32 *)puVar5;
    if (iVar6 == 0) {
      geometry->parameter_store_ptr = (s32 *)puVar5;
      puVar2 = geometry->command_store_ptr + 1;
      geometry->command_store_ptr = puVar2;
      geometry->command_store_ptr_advance = puVar2;
      if (0x400 < (int)puVar2 - (int)geometry->commands) {
        process_geometry(geometry);
      }
    }
    geometry->incoming_parameters_remaining = (u8)iVar6;
  }
  return;
}


