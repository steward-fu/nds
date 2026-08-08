/*
 * Ghidra decompilation
 *
 * Function : cpu_translate_mrs_op
 * Address  : 080b4994
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void cpu_translate_mrs_op(cpu_translate_struct *cpu_translate,u32 opcode)

{
  ushort uVar1;
  u32 uVar2;
  u32 mapped_reg;
  u32 *puVar3;
  u32 uVar4;
  u32 *puVar5;
  uint uVar6;
  u32 mapped_reg_1;
  u32 condition;
  uint uVar7;
  u32 rd;
  uint uVar8;
  uint uVar9;
  u32 fresh_allocation;
  int local_2c;
  
  local_2c = __stack_chk_guard;
  uVar7 = (opcode << 0x10) >> 0x1c;
  if (uVar7 == 0xf) {
    uVar7 = (uint)(cpu_translate->reg_alloc).native_regs[0].mapped_reg;
    if (((uVar7 < 0xfd) &&
        ((cpu_translate->reg_alloc).emulated_reg_maps_to[uVar7] = 0xff,
        (cpu_translate->reg_alloc).native_regs[0].dirty != '\0')) &&
       (((int)(uint)cpu_translate->current_instruction->live_registers >> uVar7 & 1U) != 0)) {
      puVar5 = cpu_translate->translation_ptr;
      uVar8 = (uVar7 + 0x3fffffeb) * 4;
      if ((int)uVar8 < 0) {
        uVar6 = 0;
        uVar8 = (uVar7 + 0x3fffffeb) * -4;
      }
      else {
        uVar6 = 0x800000;
      }
      *puVar5 = uVar6 | 0xe50b0000 | uVar8;
      cpu_translate->translation_ptr = puVar5 + 1;
    }
    uVar4 = 0x49c;
    uVar1 = (cpu_translate->reg_alloc).locked_regs;
    uVar8 = 0;
    (cpu_translate->reg_alloc).native_regs[0].mapped_reg = 0xfd;
    uVar2 = 0;
    puVar5 = (u32 *)(uVar1 | 1);
    (cpu_translate->reg_alloc).locked_regs = (u16)puVar5;
  }
  else {
    uVar2 = cpu_translate_allocate_reg(cpu_translate,uVar7,1,&fresh_allocation);
    uVar4 = 1;
    *(u8 *)((int)(cpu_translate->translation_stub_buffer + uVar2 * 2) + 0x406) = '\x01';
    puVar5 = cpu_translate->translation_stub_buffer + uVar2 * 2;
    if ((opcode >> 0x1c == 0xe) || (puVar5 = (u32 *)fresh_allocation, fresh_allocation == 0)) {
      uVar8 = uVar2 << 0xc;
    }
    else {
      uVar8 = uVar2 << 0xc;
      puVar5 = cpu_translate->translation_ptr + 1;
      *cpu_translate->translation_ptr = uVar7 * -4 + 0x54 | 0xe51b0000 | uVar8;
      cpu_translate->translation_ptr = puVar5;
    }
  }
  if ((opcode & 0x400000) == 0) {
    uVar4 = cpu_translate_allocate_reg(cpu_translate,(u32)&fresh_allocation,uVar4,puVar5);
    uVar7 = opcode & 0xf0000000;
    uVar6 = cpu_translate->flags_cached << 4;
    if ((uVar6 | 8) == 0xf8) {
      puVar5 = cpu_translate->translation_ptr + 1;
      *cpu_translate->translation_ptr = uVar8 | uVar7 | 0x10f0000;
    }
    else {
      puVar3 = cpu_translate->translation_ptr;
      uVar9 = uVar7 | uVar8 | uVar2 << 0x10;
      puVar3[2] = uVar6 | 0xe3c00408 | uVar4 << 0xc | uVar4 << 0x10;
      puVar3[3] = uVar6 | 0x2000408 | uVar9;
      puVar3[4] = uVar4 | uVar9 | 0x1800000;
      puVar5 = puVar3 + 5;
      *puVar3 = uVar4 << 0xc | 0xe51b0080;
      puVar3[1] = uVar7 | 0x10f0000 | uVar8;
    }
    *puVar5 = uVar4 << 0xc | 0xe51b0058;
    puVar5[1] = uVar8 | 0x7da0010 | uVar4 | uVar7;
    cpu_translate->translation_ptr = puVar5 + 2;
    if (cpu_translate->thumb_mode != '\0') {
      puVar5[2] = uVar8 | 0x3800020 | uVar2 << 0x10 | uVar7;
      cpu_translate->translation_ptr = puVar5 + 3;
    }
  }
  else {
    uVar2 = cpu_translate_allocate_reg(cpu_translate,(u32)&fresh_allocation,uVar4,puVar5);
    uVar4 = cpu_translate_allocate_reg(cpu_translate,(u32)&fresh_allocation,uVar4,puVar5);
    puVar5 = cpu_translate->translation_ptr;
    *puVar5 = uVar2 << 0xc | 0xe24b0fa8;
    puVar5[1] = uVar4 << 0xc | 0xe51b0284;
    puVar5[2] = opcode & 0xf0000000 | 0x7900100 | uVar8 | uVar4 | uVar2 << 0x10;
    cpu_translate->translation_ptr = puVar5 + 3;
  }
  if (local_2c != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


