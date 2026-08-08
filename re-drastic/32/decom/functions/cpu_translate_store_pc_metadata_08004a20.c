/*
 * Ghidra decompilation
 *
 * Function : cpu_translate_store_pc_metadata
 * Address  : 08004a20
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void cpu_translate_store_pc_metadata(cpu_translate_struct *cpu_translate,u32 pc)

{
  uint uVar1;
  u32 *puVar2;
  uint uVar3;
  u32 pc_delta;
  u32 translation_ptr_delta;
  u32 *pc_storage_ptr;
  u32 *puVar4;
  
  puVar4 = cpu_translate->current_pc_metadata_ptr;
  uVar1 = (int)cpu_translate->translation_ptr - (int)cpu_translate->translation_ptr_code_base >> 2;
  uVar3 = pc - cpu_translate->base_pc;
  if (cpu_translate->pc_metadata_count <=
      (uint)((int)puVar4 - (int)cpu_translate->pc_metadata_ptr >> 2)) {
    __printf_chk(1,"FATAL: went past metadata storage of %d for block @ %p (%x)\n",
                 cpu_translate->pc_metadata_count,cpu_translate->translation_ptr_code_base,pc);
  }
  if (0xffff < uVar3) {
    __printf_chk(1,"FATAL: pc_delta in stored PC metadata is %x\n",uVar3);
  }
  if (0xffff < uVar1) {
    __printf_chk(1,"FATAL: translation_ptr_delta in stored PC metadata is %x\n",uVar1);
  }
  puVar2 = cpu_translate->current_pc_metadata_ptr;
  *puVar4 = uVar3 | uVar1 << 0x10;
  cpu_translate->current_pc_metadata_ptr = puVar2 + 1;
  return;
}


