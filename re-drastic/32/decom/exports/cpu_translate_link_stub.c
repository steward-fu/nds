/*
 * Ghidra decompilation
 *
 * Function : cpu_translate_link_stub
 * Address  : 080b8408
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void cpu_translate_link_stub(cpu_translate_struct *cpu_translate,u32 pc)

{
  u32 uVar1;
  u32 *puVar2;
  u32 *puVar3;
  
  puVar3 = cpu_translate->translation_ptr;
  puVar2 = puVar3 + 1;
  *puVar3 = pc & 0xffe | 0xe3000000 | ((pc << 0x10) >> 0x1c) << 0x10;
  cpu_translate->translation_ptr = puVar2;
  if ((pc & 0xffff0000) != 0) {
    puVar2 = puVar3 + 2;
    puVar3[1] = (pc << 4) >> 0x14 | (pc >> 0x1c) << 0x10 | 0xe3400000;
    cpu_translate->translation_ptr = puVar2;
  }
  if ((pc & 1) == 0) {
    uVar1 = 0xe3c00003;
  }
  else {
    uVar1 = 0xe3800001;
  }
  *puVar2 = uVar1;
  cpu_translate->translation_ptr = puVar2 + 1;
  cpu_translate_normalize_reg_allocation(cpu_translate);
  puVar2 = cpu_translate->translation_ptr;
  *puVar2 = ((int)block_indirect_branch - (int)puVar2 >> 2) - 2U & 0xffffff | 0xea000000;
  cpu_translate->translation_ptr = puVar2 + 1;
  return;
}


