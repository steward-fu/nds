/*
 * Ghidra decompilation
 *
 * Function : cpu_translate_allocate_pc_metadata
 * Address  : 080b7994
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void cpu_translate_allocate_pc_metadata
               (cpu_translate_struct *cpu_translate,cpu_block_struct *cpu_block)

{
  u8 *puVar1;
  u32 uVar2;
  cpu_instruction_struct *pcVar3;
  cpu_instruction_struct *pcVar4;
  int iVar5;
  u32 *puVar6;
  
  if (cpu_block->instruction_length == 0) {
    uVar2 = 0;
    iVar5 = 0;
  }
  else {
    pcVar3 = cpu_block->instructions;
    uVar2 = 0;
    pcVar4 = pcVar3 + cpu_block->instruction_length;
    do {
      puVar1 = &pcVar3->flags;
      pcVar3 = pcVar3 + 1;
      uVar2 = uVar2 - ((int)((uint)*puVar1 << 0x1d) >> 0x1f);
    } while (pcVar4 != pcVar3);
    iVar5 = uVar2 * -4;
  }
  cpu_translate->pc_metadata_count = uVar2;
  puVar6 = (u32 *)((int)cpu_translate->translation_ptr_b + iVar5);
  cpu_translate->translation_ptr_b = puVar6;
  cpu_translate->pc_metadata_ptr = puVar6;
  cpu_translate->current_pc_metadata_ptr = puVar6;
  return;
}


