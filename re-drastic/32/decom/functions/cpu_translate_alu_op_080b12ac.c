/*
 * Ghidra decompilation
 *
 * Function : cpu_translate_alu_op
 * Address  : 080b12ac
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void cpu_translate_alu_op(cpu_translate_struct *cpu_translate,u32 opcode)

{
  ushort uVar1;
  int iVar2;
  bool bVar3;
  u32 uVar4;
  u32 imm;
  u32 native_rm;
  u32 native_rs;
  u32 rot;
  uint uVar5;
  u32 rd;
  u32 *puVar6;
  u32 shift_type;
  code *pcVar7;
  uint uVar8;
  uint uVar9;
  u32 op;
  u32 set_flags;
  u32 condition;
  u32 condition_1;
  u32 uVar10;
  u32 rm;
  uint uVar11;
  u32 shift_value;
  u32 *puVar12;
  u32 local_40;
  uint local_3c;
  u32 local_38;
  u32 fresh_allocation;
  int local_2c;
  
  uVar9 = opcode >> 0x15 & 0xf;
  uVar5 = (opcode << 0x10) >> 0x1c;
  uVar8 = opcode >> 0x1c;
  iVar2 = (int)(opcode << 0xb) >> 0x1f;
  local_2c = __stack_chk_guard;
  if ((opcode >> 0x15 & 0xd) == 0xd) {
    uVar10 = 0;
  }
  else {
    uVar10 = cpu_translate_allocate_src_reg(cpu_translate,(opcode << 0xc) >> 0x1c,uVar5);
  }
  if (uVar9 - 8 < 4) {
    if ((opcode & 0x2000000) != 0) {
      uVar8 = 0;
      bVar3 = false;
      goto LAB_080b1354;
    }
    local_3c = (opcode << 0x19) >> 0x1e;
    local_40 = cpu_translate_allocate_src_reg(cpu_translate,opcode & 0xf,0);
    if ((opcode & 0x10) != 0) {
      local_38 = cpu_translate_allocate_src_reg(cpu_translate,(opcode << 0x14) >> 0x1c,0);
      uVar8 = 0;
      bVar3 = false;
      goto LAB_080b1530;
    }
    uVar11 = (opcode << 0x14) >> 0x1b;
    uVar8 = 0;
    bVar3 = false;
LAB_080b14dc:
    puVar6 = cpu_translate->translation_ptr;
    *puVar6 = iVar2 * -0x100000 | uVar9 << 0x15 | opcode & 0xf0000000 | uVar11 << 7 | uVar10 << 0x10
              | local_40 | local_3c << 5 | uVar8;
    cpu_translate->translation_ptr = puVar6 + 1;
LAB_080b1380:
    if (!bVar3) goto LAB_080b1388;
  }
  else {
    if ((opcode & 0x2000000) != 0) {
      uVar4 = cpu_translate_allocate_dest_reg(cpu_translate,uVar5,1,uVar8);
      uVar8 = uVar4 << 0xc;
      bVar3 = true;
LAB_080b1354:
      puVar6 = cpu_translate->translation_ptr;
      *puVar6 = opcode & 0xf0000000 | 0x2000000 | uVar9 << 0x15 | iVar2 * -0x100000 | uVar10 << 0x10
                | opcode & 0xff | uVar8 | ((opcode << 0x14) >> 0x1c) << 8;
      cpu_translate->translation_ptr = puVar6 + 1;
      goto LAB_080b1380;
    }
    local_3c = (opcode << 0x19) >> 0x1e;
    local_40 = cpu_translate_allocate_src_reg(cpu_translate,opcode & 0xf,uVar5);
    if ((opcode & 0x10) != 0) {
      local_38 = cpu_translate_allocate_src_reg(cpu_translate,(opcode << 0x14) >> 0x1c,uVar5);
      uVar4 = cpu_translate_allocate_dest_reg(cpu_translate,uVar5,1,uVar8);
      uVar8 = uVar4 << 0xc;
      bVar3 = true;
LAB_080b1530:
      if ((opcode & 0xf) == 0xf) {
        puVar6 = cpu_translate->translation_ptr + 1;
        *cpu_translate->translation_ptr = local_40 << 0x10 | local_40 << 0xc | 0xe2800004;
        cpu_translate->translation_ptr = puVar6;
      }
      else {
        puVar6 = cpu_translate->translation_ptr;
      }
      if (-iVar2 != 0) {
        cpu_translate->flags_cached = cpu_translate->flags_cached | 2;
      }
      *puVar6 = opcode & 0xf0000000 | 0x10 | uVar9 << 0x15 | iVar2 * -0x100000 | uVar10 << 0x10 |
                local_40 | uVar8 | local_38 << 8 | local_3c << 5;
      cpu_translate->translation_ptr = puVar6 + 1;
      goto LAB_080b1380;
    }
    uVar11 = (opcode << 0x14) >> 0x1b;
    if (((opcode & 0xf) != uVar5 || uVar9 != 0xd) ||
       ((-iVar2 | uVar11 | (opcode << 0x19) >> 0x1e) != 0)) {
      uVar4 = cpu_translate_allocate_dest_reg(cpu_translate,uVar5,1,uVar8);
      uVar8 = uVar4 << 0xc;
      bVar3 = true;
      goto LAB_080b14dc;
    }
  }
  uVar10 = (u32)(short)cpu_translate->current_instruction->dest_registers;
  if ((int)uVar10 < 0) {
    if ((opcode & 0x100000) == 0) {
      uVar5 = (uint)cpu_translate->current_instruction->live_flags;
      uVar9 = cpu_translate->flags_cached;
      uVar8 = uVar9 & uVar5;
      if ((uVar8 & 0xfffffffe & (uint)(u32 *)cpu_translate->flags_dirty) != 0) {
        uVar10 = cpu_translate_allocate_reg
                           (cpu_translate,(u32)&fresh_allocation,uVar10,
                            (u32 *)cpu_translate->flags_dirty);
        if ((uVar5 & 0xfffffffe & ~(uVar9 & 0xfffffffe)) == 0) {
          puVar6 = cpu_translate->translation_ptr + 1;
          *cpu_translate->translation_ptr = uVar10 << 0xc | 0xe3a00000;
          cpu_translate->translation_ptr = puVar6;
        }
        else {
          puVar12 = cpu_translate->translation_ptr;
          puVar6 = puVar12 + 2;
          *puVar12 = uVar10 << 0xc | 0xe51b0080;
          puVar12[1] = uVar8 & 0xfffffffe | 0xe3c00200 | uVar10 << 0xc | uVar10 << 0x10;
          cpu_translate->translation_ptr = puVar6;
        }
        uVar5 = uVar10 << 0xc;
        puVar12 = puVar6;
        if ((uVar8 & 2) != 0) {
          puVar12 = puVar6 + 1;
          *puVar6 = uVar10 << 0x10 | 0x23800202 | uVar5;
          cpu_translate->translation_ptr = puVar12;
        }
        puVar6 = puVar12;
        if ((uVar8 & 4) != 0) {
          puVar6 = puVar12 + 1;
          *puVar12 = uVar10 << 0x10 | 0x3800204 | uVar5;
          cpu_translate->translation_ptr = puVar6;
        }
        puVar12 = puVar6;
        if ((uVar8 & 8) != 0) {
          puVar12 = puVar6 + 1;
          *puVar6 = uVar10 << 0x10 | 0x43800208 | uVar5;
        }
        uVar1 = (cpu_translate->reg_alloc).locked_regs;
        *puVar12 = uVar5 | 0xe50b0080;
        cpu_translate->translation_ptr = puVar12 + 1;
        (cpu_translate->reg_alloc).locked_regs = uVar1 & ~(ushort)(1 << (uVar10 & 0xff));
      }
      cpu_translate->flags_cached = 1;
      cpu_translate->flags_dirty = 0;
      if (cpu_translate->thumb_mode == '\0') {
        puVar6 = cpu_translate->translation_ptr;
        *puVar6 = 0xe3c00003;
        cpu_translate->translation_ptr = puVar6 + 1;
      }
      else if (cpu_translate->thumb_mode == '\x01') {
        puVar6 = cpu_translate->translation_ptr;
        *puVar6 = 0xe3800001;
        cpu_translate->translation_ptr = puVar6 + 1;
      }
      cpu_translate_normalize_reg_allocation(cpu_translate);
      puVar6 = cpu_translate->translation_ptr;
      pcVar7 = block_indirect_branch;
    }
    else {
      cpu_translate_normalize_reg_allocation(cpu_translate);
      puVar6 = cpu_translate->translation_ptr;
      pcVar7 = arm_spsr_restore;
    }
    *puVar6 = ((int)pcVar7 - (int)puVar6 >> 2) - 2U & 0xffffff | opcode & 0xf0000000 | 0xa000000;
    cpu_translate->translation_ptr = puVar6 + 1;
  }
LAB_080b1388:
  if (local_2c != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


