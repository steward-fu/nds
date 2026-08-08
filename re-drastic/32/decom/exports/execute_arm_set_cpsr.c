/*
 * Ghidra decompilation
 *
 * Function : execute_arm_set_cpsr
 * Address  : 08020f88
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void execute_arm_set_cpsr(cpu_struct *cpu,u32 value)

{
  u32 uVar1;
  u32 uVar2;
  u32 uVar3;
  u32 uVar4;
  uint uVar5;
  u32 uVar6;
  arm_cpu_mode_enum current_mode;
  bool bVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar5 = (value & 0x1f) - 0x10;
  cpu->cpsr = value;
  if (uVar5 < 0x10) {
    uVar6 = cpu->mode;
    uVar1 = *(u32 *)(&CSWTCH_4 + uVar5 * 4);
    if (uVar1 != uVar6) {
      if (uVar1 != 1) goto LAB_08021080;
      uVar3 = cpu->reg[9];
      uVar2 = cpu->reg[10];
      uVar4 = cpu->reg[0xb];
      cpu->banked_reg_fiq[0] = cpu->reg[8];
      cpu->banked_reg_fiq[1] = uVar3;
      cpu->banked_reg_fiq[2] = uVar2;
      cpu->banked_reg_fiq[3] = uVar4;
      uVar3 = cpu->reg[0xd];
      uVar2 = cpu->reg[0xe];
      cpu->banked_reg_fiq[4] = cpu->reg[0xc];
      cpu->banked_reg_fiq[5] = uVar3;
      cpu->banked_reg_fiq[6] = uVar2;
      if (uVar6 != 1) goto LAB_0802109c;
LAB_08021018:
      uVar6 = cpu->banked_reg_fiq[1];
      uVar2 = cpu->banked_reg_fiq[2];
      cpu->reg[8] = cpu->banked_reg_fiq[0];
      cpu->reg[9] = uVar6;
      cpu->reg[10] = uVar2;
      uVar8 = *(undefined8 *)(cpu->banked_reg_fiq + 3);
      uVar9 = *(undefined8 *)(cpu->banked_reg_fiq + 5);
      cpu->mode = uVar1;
      *(undefined8 *)(cpu->reg + 0xb) = uVar8;
      *(undefined8 *)(cpu->reg + 0xd) = uVar9;
    }
  }
  else {
    uVar6 = cpu->mode;
    if (uVar6 == 6) {
      uVar1 = 6;
    }
    else {
      uVar1 = 6;
LAB_08021080:
      cpu->banked_reg[uVar6] = *(u32 (*) [2])(cpu->reg + 0xd);
      if (uVar6 == 1) goto LAB_08021018;
LAB_0802109c:
      value = cpu->cpsr;
      cpu->reg[0xd] = cpu->banked_reg[uVar1][0];
      uVar6 = cpu->banked_reg[uVar1][1];
      cpu->mode = uVar1;
      cpu->reg[0xe] = uVar6;
    }
  }
  if ((value & 0x80) != 0) {
    return;
  }
  if (cpu->active_interrupts == 0) {
    return;
  }
  uVar6 = cpu->pc;
  cpu->alert_flags = cpu->alert_flags | 8;
  if ((uVar6 & 1) == 0) {
    bVar7 = false;
    if (uVar1 == 2) {
      cpu->reg[0xe] = uVar6 + 4;
    }
    else {
LAB_080210e4:
      cpu->banked_reg[uVar1] = *(u32 (*) [2])(cpu->reg + 0xd);
      if (uVar1 == 1) {
        uVar2 = cpu->banked_reg_fiq[1];
        uVar1 = cpu->banked_reg_fiq[2];
        cpu->reg[8] = cpu->banked_reg_fiq[0];
        cpu->reg[9] = uVar2;
        cpu->reg[10] = uVar1;
        uVar8 = *(undefined8 *)(cpu->banked_reg_fiq + 5);
        *(undefined8 *)(cpu->reg + 0xb) = *(undefined8 *)(cpu->banked_reg_fiq + 3);
        *(undefined8 *)(cpu->reg + 0xd) = uVar8;
      }
      else {
        uVar6 = cpu->pc;
        cpu->reg[0xd] = cpu->banked_reg[2][0];
      }
      cpu->mode = 2;
      cpu->reg[0xe] = uVar6 + 4;
      if (bVar7) goto LAB_08021124;
    }
    cpu->spsr[2] = value;
  }
  else {
    uVar6 = uVar6 & 0xfffffffe;
    cpu->pc = uVar6;
    if (uVar1 != 2) {
      bVar7 = true;
      goto LAB_080210e4;
    }
    cpu->reg[0xe] = uVar6 + 4;
LAB_08021124:
    cpu->spsr[2] = value | 0x20;
  }
  bVar7 = cpu->type == '\x01';
  if (bVar7) {
    uVar6 = cpu->coprocessor->exception_vector_offset;
  }
  else {
    uVar6 = 0x18;
  }
  cpu->cpsr = value & 0xffffffc0 | 0x92;
  if (bVar7) {
    uVar6 = uVar6 + 0x18;
  }
  cpu->pc = uVar6;
  return;
}


