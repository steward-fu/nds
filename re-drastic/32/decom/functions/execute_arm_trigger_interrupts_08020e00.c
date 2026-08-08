/*
 * Ghidra decompilation
 *
 * Function : execute_arm_trigger_interrupts
 * Address  : 08020e00
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void execute_arm_trigger_interrupts(cpu_struct *cpu)

{
  u8 uVar1;
  uint uVar2;
  u8 uVar3;
  u32 uVar4;
  bool bVar5;
  u32 old_state;
  u32 uVar6;
  arm_cpu_mode_enum current_mode;
  u32 uVar7;
  undefined8 uVar8;
  
  if (cpu->active_interrupts == 0) {
    return;
  }
  uVar2 = cpu->cpsr;
  uVar1 = cpu->state;
  cpu->state = '\0';
  cpu->alert_flags = 0;
  if ((uVar2 & 0x80) != 0) {
    uVar3 = cpu->type;
    goto LAB_08020e3c;
  }
  uVar6 = cpu->mode;
  uVar4 = cpu->pc;
  if ((uVar4 & 1) == 0) {
    if (uVar6 != 2) {
      bVar5 = false;
      goto LAB_08020ec0;
    }
    cpu->reg[0xe] = uVar4 + 4;
LAB_08020f48:
    cpu->spsr[2] = uVar2;
  }
  else {
    uVar4 = uVar4 & 0xfffffffe;
    cpu->pc = uVar4;
    if (uVar6 == 2) {
      cpu->reg[0xe] = uVar4 + 4;
    }
    else {
      bVar5 = true;
LAB_08020ec0:
      cpu->banked_reg[uVar6] = *(u32 (*) [2])(cpu->reg + 0xd);
      if (uVar6 == 1) {
        uVar6 = cpu->banked_reg_fiq[1];
        uVar7 = cpu->banked_reg_fiq[2];
        cpu->reg[8] = cpu->banked_reg_fiq[0];
        cpu->reg[9] = uVar6;
        cpu->reg[10] = uVar7;
        uVar8 = *(undefined8 *)(cpu->banked_reg_fiq + 5);
        *(undefined8 *)(cpu->reg + 0xb) = *(undefined8 *)(cpu->banked_reg_fiq + 3);
        *(undefined8 *)(cpu->reg + 0xd) = uVar8;
      }
      else {
        uVar4 = cpu->pc;
        cpu->reg[0xd] = cpu->banked_reg[2][0];
      }
      cpu->mode = 2;
      cpu->reg[0xe] = uVar4 + 4;
      if (!bVar5) goto LAB_08020f48;
    }
    cpu->spsr[2] = uVar2 | 0x20;
  }
  uVar3 = cpu->type;
  if (uVar3 == '\x01') {
    uVar4 = cpu->coprocessor->exception_vector_offset;
  }
  else {
    uVar4 = 0x18;
  }
  cpu->cpsr = uVar2 & 0xffffffc0 | 0x92;
  if (uVar3 == '\x01') {
    uVar4 = uVar4 + 0x18;
  }
  cpu->pc = uVar4;
LAB_08020e3c:
  if (uVar1 == '\0' || uVar3 != '\0') {
    return;
  }
  if (uVar1 != '\x01') {
    cpu->alternate_cpu->state = cpu->alternate_cpu->state & 0xfd;
  }
  event_force_task_switch_function(cpu->system,0);
  return;
}


