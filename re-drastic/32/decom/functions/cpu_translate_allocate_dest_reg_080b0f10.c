/*
 * Ghidra decompilation
 *
 * Function : cpu_translate_allocate_dest_reg
 * Address  : 080b0f10
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u32 cpu_translate_allocate_dest_reg
              (cpu_translate_struct *cpu_translate,u32 emulated_reg,u32 lock,u32 condition)

{
  ushort uVar1;
  u32 uVar2;
  u32 mapped_reg;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  u32 mapped_reg_1;
  u32 dest;
  u32 *puVar6;
  u32 fresh_allocation;
  int local_1c;
  
  local_1c = __stack_chk_guard;
  if (emulated_reg == 0xf) {
    uVar5 = (uint)(cpu_translate->reg_alloc).native_regs[0].mapped_reg;
    if (((uVar5 < 0xfd) &&
        ((cpu_translate->reg_alloc).emulated_reg_maps_to[uVar5] = 0xff,
        (cpu_translate->reg_alloc).native_regs[0].dirty != '\0')) &&
       (((int)(uint)cpu_translate->current_instruction->live_registers >> uVar5 & 1U) != 0)) {
      puVar6 = cpu_translate->translation_ptr;
      uVar4 = (uVar5 + 0x3fffffeb) * 4;
      if ((int)uVar4 < 0) {
        uVar3 = 0;
        uVar4 = (uVar5 + 0x3fffffeb) * -4;
      }
      else {
        uVar3 = 0x800000;
      }
      *puVar6 = uVar3 | 0xe50b0000 | uVar4;
      cpu_translate->translation_ptr = puVar6 + 1;
    }
    uVar1 = (cpu_translate->reg_alloc).locked_regs;
    uVar2 = 0;
    (cpu_translate->reg_alloc).native_regs[0].mapped_reg = 0xfd;
    (cpu_translate->reg_alloc).locked_regs = uVar1 | (ushort)lock;
  }
  else {
    uVar2 = cpu_translate_allocate_reg(cpu_translate,emulated_reg,lock,&fresh_allocation);
    (cpu_translate->reg_alloc).native_regs[uVar2].dirty = '\x01';
    if ((condition != 0xe) && (fresh_allocation != 0)) {
      puVar6 = cpu_translate->translation_ptr;
      uVar5 = (emulated_reg + 0x3fffffeb) * 4;
      if ((int)uVar5 < 0) {
        uVar4 = 0;
        uVar5 = (emulated_reg + 0x3fffffeb) * -4;
      }
      else {
        uVar4 = 0x800000;
      }
      dest = uVar2 << 0xc | 0xe51b0000 | uVar4;
      *puVar6 = uVar5 | dest;
      cpu_translate->translation_ptr = puVar6 + 1;
    }
  }
  if (local_1c == __stack_chk_guard) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


