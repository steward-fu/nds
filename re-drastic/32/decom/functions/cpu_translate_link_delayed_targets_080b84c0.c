/*
 * Ghidra decompilation
 *
 * Function : cpu_translate_link_delayed_targets
 * Address  : 080b84c0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void cpu_translate_link_delayed_targets(cpu_struct *cpu)

{
  void *pvVar1;
  u8 *translation_ptr;
  uint *puVar2;
  u32 *ptr_u32;
  translation_cache_struct *translation_cache;
  u32 delayed_target_count;
  u32 uVar3;
  u32 *puVar4;
  u32 uVar5;
  
  uVar3 = (cpu->translation_cache->delayed_targets).position;
  if (uVar3 != 0) {
    uVar5 = 0;
    puVar4 = &(cpu->translation_cache->delayed_targets).data[0].pc;
    do {
      uVar5 = uVar5 + 1;
      pvVar1 = cpu_block_lookup_base(cpu,*puVar4);
      if (pvVar1 != (void *)0x0) {
        puVar2 = (uint *)((cpu_branch_delayed_target_struct *)(puVar4 + -1))->backpatch_ptr;
        *puVar2 = ((int)pvVar1 - (int)puVar2 >> 2) - 2U & 0xffffff | *puVar2 & 0xff000000;
      }
      puVar4 = puVar4 + 3;
    } while (uVar3 != uVar5);
  }
  return;
}


