/*
 * Ghidra decompilation
 *
 * Function : initialize_cpu
 * Address  : 08021414
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void initialize_cpu(cpu_struct *cpu,system_struct *system,arm_cpu_type_enum cpu_type,
                   cpu_struct *alternate_cpu)

{
  undefined uVar1;
  u32 uVar2;
  cpu_struct *data;
  int iVar3;
  u32 event_type;
  u32 uVar4;
  u32 uVar5;
  undefined *puVar6;
  event_list_struct *event_list;
  
  if (bit_count[255] == '\0') {
    puVar6 = &nds_system.field_0x2aeafff;
    uVar1 = 0;
    iVar3 = 0;
    while( true ) {
      iVar3 = iVar3 + 1;
      puVar6 = puVar6 + 1;
      *puVar6 = uVar1;
      if (iVar3 == 0x100) break;
      uVar1 = __popcountsi2(iVar3);
    }
  }
  cpu->translation_cache = &system->translation_cache;
  cpu->type = (u8)cpu_type;
  cpu->system = system;
  cpu->memory = &system->memory;
  uVar5 = 8;
  cpu->geometry = &(system->video).geometry;
  cpu->alternate_cpu = alternate_cpu;
  initialize_debug(&cpu->debug,cpu);
  uVar2 = cpu_type * 4 + 3;
  data = cpu;
  event_type = uVar2;
  do {
    data->timers[0].cpu = cpu;
    data->timers[0].irq_mask = uVar5;
    data->timers[0].number = (char)event_type - (char)uVar2;
    uVar4 = event_type + 1;
    initialize_event(&system->event_list,event_type,event_timer_overflow_function,data);
    uVar5 = uVar5 << 1;
    data = (cpu_struct *)(data->timers + 1);
    event_type = uVar4;
  } while (uVar4 != cpu_type * 4 + 7);
  if (cpu_type == ARM_CPU_TYPE_v5) {
    cpu->block_lookup_itcm_arm = (system->translation_cache).block_lookup_itcm_arm;
    cpu->block_lookup_itcm_thumb = (system->translation_cache).block_lookup_itcm_thumb;
  }
  return;
}


