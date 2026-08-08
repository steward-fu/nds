/*
 * Ghidra decompilation
 *
 * Function : cpu_translate_bx_op
 * Address  : 08004ac8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void cpu_translate_bx_op(cpu_translate_struct *cpu_translate,u32 opcode)

{
  uint uVar1;
  ushort uVar2;
  u32 uVar3;
  u32 *puVar4;
  u32 *puVar5;
  u32 condition;
  uint uVar6;
  u32 rn;
  uint uVar7;
  bool bVar8;
  u32 fresh_allocation;
  u32 local_2c;
  
  puVar4 = (u32 *)cpu_translate->flags_cached;
  uVar7 = (uint)cpu_translate->current_instruction->live_flags;
  local_2c = __stack_chk_guard;
  uVar6 = (uint)puVar4 & uVar7;
  if ((uVar6 & 0xfffffffe & cpu_translate->flags_dirty) != 0) {
    uVar3 = cpu_translate_allocate_reg
                      (cpu_translate,(u32)&fresh_allocation,__stack_chk_guard,puVar4);
    uVar1 = uVar3 << 0xc;
    puVar5 = cpu_translate->translation_ptr;
    if ((uVar7 & 0xfffffffe & ~((uint)puVar4 & 0xfffffffe)) == 0) {
      *puVar5 = uVar1 | 0xe3a00000;
      cpu_translate->translation_ptr = puVar5 + 1;
    }
    else {
      *puVar5 = uVar1 | 0xe51b0080;
      puVar5[1] = uVar6 & 0xfffffffe | 0xe3c00200 | uVar1 | uVar3 << 0x10;
      cpu_translate->translation_ptr = puVar5 + 2;
    }
    if ((uVar6 & 2) != 0) {
      puVar4 = cpu_translate->translation_ptr;
      *puVar4 = uVar1 | uVar3 << 0x10 | 0x23800202;
      cpu_translate->translation_ptr = puVar4 + 1;
    }
    if ((uVar6 & 4) != 0) {
      puVar4 = cpu_translate->translation_ptr;
      *puVar4 = uVar1 | uVar3 << 0x10 | 0x3800204;
      cpu_translate->translation_ptr = puVar4 + 1;
    }
    if ((uVar6 & 8) != 0) {
      puVar4 = cpu_translate->translation_ptr;
      *puVar4 = uVar1 | uVar3 << 0x10 | 0x43800208;
      cpu_translate->translation_ptr = puVar4 + 1;
    }
    puVar4 = cpu_translate->translation_ptr;
    uVar2 = (cpu_translate->reg_alloc).locked_regs;
    *puVar4 = uVar1 | 0xe50b0080;
    cpu_translate->translation_ptr = puVar4 + 1;
    (cpu_translate->reg_alloc).locked_regs = uVar2 & ~(ushort)(1 << (uVar3 & 0xff));
  }
  cpu_translate->flags_cached = 1;
  cpu_translate->flags_dirty = 0;
  cpu_translate_load_reg_fixed(cpu_translate,opcode & 0xf,0);
  if ((opcode & 0x20) != 0) {
    cpu_translate_set_lr
              (cpu_translate,(uint)cpu_translate->thumb_mode | cpu_translate->current_pc,
               opcode >> 0x1c);
  }
  cpu_translate_normalize_reg_allocation(cpu_translate);
  puVar4 = cpu_translate->translation_ptr;
  bVar8 = local_2c != __stack_chk_guard;
  *puVar4 = ((int)block_indirect_branch - (int)puVar4 >> 2) - 2U & 0xffffff | opcode & 0xf0000000 |
            0xa000000;
  cpu_translate->translation_ptr = puVar4 + 1;
  if (bVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


