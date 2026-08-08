/*
 * Ghidra decompilation
 *
 * Function : execute_arm_raise_interrupt
 * Address  : 08020ce0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void execute_arm_raise_interrupt(cpu_struct *cpu)

{
  u32 uVar1;
  arm_cpu_mode_enum current_mode;
  u32 uVar2;
  uint uVar3;
  u32 uVar4;
  bool bVar5;
  undefined8 uVar6;
  
  uVar1 = cpu->mode;
  uVar2 = cpu->pc;
  if ((uVar2 & 1) == 0) {
    bVar5 = false;
    if (uVar1 != 2) goto LAB_08020d10;
    cpu->reg[0xe] = uVar2 + 4;
LAB_08020da0:
    uVar3 = cpu->cpsr;
    cpu->spsr[2] = uVar3;
  }
  else {
    uVar2 = uVar2 & 0xfffffffe;
    cpu->pc = uVar2;
    if (uVar1 == 2) {
      cpu->reg[0xe] = uVar2 + 4;
    }
    else {
      bVar5 = true;
LAB_08020d10:
      cpu->banked_reg[uVar1] = *(u32 (*) [2])(cpu->reg + 0xd);
      if (uVar1 == 1) {
        uVar4 = cpu->banked_reg_fiq[1];
        uVar1 = cpu->banked_reg_fiq[2];
        cpu->reg[8] = cpu->banked_reg_fiq[0];
        cpu->reg[9] = uVar4;
        cpu->reg[10] = uVar1;
        uVar6 = *(undefined8 *)(cpu->banked_reg_fiq + 5);
        *(undefined8 *)(cpu->reg + 0xb) = *(undefined8 *)(cpu->banked_reg_fiq + 3);
        *(undefined8 *)(cpu->reg + 0xd) = uVar6;
      }
      else {
        uVar2 = cpu->pc;
        cpu->reg[0xd] = cpu->banked_reg[2][0];
      }
      cpu->mode = 2;
      cpu->reg[0xe] = uVar2 + 4;
      if (!bVar5) goto LAB_08020da0;
    }
    uVar3 = cpu->cpsr;
    cpu->spsr[2] = uVar3 | 0x20;
  }
  bVar5 = cpu->type == '\x01';
  if (bVar5) {
    uVar1 = cpu->coprocessor->exception_vector_offset;
  }
  else {
    uVar1 = 0x18;
  }
  cpu->cpsr = uVar3 & 0xffffffc0 | 0x92;
  if (bVar5) {
    uVar1 = uVar1 + 0x18;
  }
  cpu->pc = uVar1;
  return;
}


