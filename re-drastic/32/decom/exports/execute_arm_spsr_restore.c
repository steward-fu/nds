/*
 * Ghidra decompilation
 *
 * Function : execute_arm_spsr_restore
 * Address  : 080211b8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u32 execute_arm_spsr_restore(cpu_struct *cpu)

{
  u32 uVar1;
  arm_cpu_mode_enum current_mode;
  u32 *banked_reg;
  uint uVar2;
  u32 uVar3;
  u32 uVar4;
  uint uVar5;
  u32 uVar6;
  u32 uVar7;
  bool bVar8;
  undefined8 uVar9;
  
  if ((cpu->cpsr & 0x1f) == 0x10) {
    return cpu->cpsr;
  }
  uVar1 = cpu->mode;
  uVar2 = cpu->spsr[uVar1];
  cpu->cpsr = uVar2;
  uVar5 = (uVar2 & 0x1f) - 0x10;
  if (uVar5 < 0x10) {
    uVar6 = *(u32 *)(&CSWTCH_4 + uVar5 * 4);
    if (uVar1 != uVar6) {
      if (uVar6 != 1) goto LAB_0802120c;
      uVar3 = cpu->reg[9];
      uVar7 = cpu->reg[10];
      uVar4 = cpu->reg[0xb];
      cpu->banked_reg_fiq[0] = cpu->reg[8];
      cpu->banked_reg_fiq[1] = uVar3;
      cpu->banked_reg_fiq[2] = uVar7;
      cpu->banked_reg_fiq[3] = uVar4;
      uVar3 = cpu->reg[0xd];
      uVar7 = cpu->reg[0xe];
      cpu->banked_reg_fiq[4] = cpu->reg[0xc];
      cpu->banked_reg_fiq[5] = uVar3;
      cpu->banked_reg_fiq[6] = uVar7;
      if (uVar1 == 1) goto LAB_080212e0;
LAB_08021228:
      uVar2 = cpu->cpsr;
      cpu->reg[0xd] = cpu->banked_reg[uVar6][0];
      cpu->reg[0xe] = cpu->banked_reg[uVar6][1];
      uVar1 = uVar6;
      goto LAB_08021248;
    }
  }
  else if (uVar1 != 6) {
    uVar6 = 6;
LAB_0802120c:
    cpu->banked_reg[uVar1] = *(u32 (*) [2])(cpu->reg + 0xd);
    if (uVar1 != 1) goto LAB_08021228;
LAB_080212e0:
    uVar1 = cpu->banked_reg_fiq[1];
    uVar7 = cpu->banked_reg_fiq[2];
    cpu->reg[8] = cpu->banked_reg_fiq[0];
    cpu->reg[9] = uVar1;
    cpu->reg[10] = uVar7;
    uVar9 = *(undefined8 *)(cpu->banked_reg_fiq + 5);
    *(undefined8 *)(cpu->reg + 0xb) = *(undefined8 *)(cpu->banked_reg_fiq + 3);
    *(undefined8 *)(cpu->reg + 0xd) = uVar9;
    uVar1 = uVar6;
LAB_08021248:
    cpu->mode = uVar1;
  }
  if ((uVar2 & 0x80) != 0) {
    return uVar2;
  }
  if (cpu->active_interrupts == 0) {
    return uVar2;
  }
  uVar6 = cpu->pc;
  cpu->alert_flags = cpu->alert_flags | 8;
  if ((uVar6 & 1) == 0) {
    bVar8 = false;
    if (uVar1 != 2) goto LAB_08021340;
    cpu->reg[0xe] = uVar6 + 4;
LAB_080213c4:
    cpu->spsr[2] = uVar2;
  }
  else {
    uVar6 = uVar6 & 0xfffffffe;
    cpu->pc = uVar6;
    if (uVar1 == 2) {
      cpu->reg[0xe] = uVar6 + 4;
    }
    else {
      bVar8 = true;
LAB_08021340:
      cpu->banked_reg[uVar1] = *(u32 (*) [2])(cpu->reg + 0xd);
      if (uVar1 == 1) {
        uVar7 = cpu->banked_reg_fiq[1];
        uVar1 = cpu->banked_reg_fiq[2];
        cpu->reg[8] = cpu->banked_reg_fiq[0];
        cpu->reg[9] = uVar7;
        cpu->reg[10] = uVar1;
        uVar9 = *(undefined8 *)(cpu->banked_reg_fiq + 5);
        *(undefined8 *)(cpu->reg + 0xb) = *(undefined8 *)(cpu->banked_reg_fiq + 3);
        *(undefined8 *)(cpu->reg + 0xd) = uVar9;
      }
      else {
        uVar6 = cpu->pc;
        cpu->reg[0xd] = cpu->banked_reg[2][0];
      }
      cpu->mode = 2;
      cpu->reg[0xe] = uVar6 + 4;
      if (!bVar8) goto LAB_080213c4;
    }
    cpu->spsr[2] = uVar2 | 0x20;
  }
  uVar2 = uVar2 & 0xffffffc0 | 0x92;
  bVar8 = cpu->type == '\x01';
  if (bVar8) {
    uVar1 = cpu->coprocessor->exception_vector_offset;
  }
  else {
    uVar1 = 0x18;
  }
  cpu->cpsr = uVar2;
  if (bVar8) {
    uVar1 = uVar1 + 0x18;
  }
  cpu->pc = uVar1;
  return uVar2;
}


