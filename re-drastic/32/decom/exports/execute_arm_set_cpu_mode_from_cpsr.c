/*
 * Ghidra decompilation
 *
 * Function : execute_arm_set_cpu_mode_from_cpsr
 * Address  : 08020720
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void execute_arm_set_cpu_mode_from_cpsr(cpu_struct *cpu)

{
  u32 *banked_reg;
  u32 uVar1;
  uint uVar2;
  u32 uVar3;
  u32 uVar4;
  u32 uVar5;
  arm_cpu_mode_enum current_mode;
  u32 uVar6;
  undefined8 uVar7;
  
  uVar2 = (cpu->cpsr & 0x1f) - 0x10;
  if (uVar2 < 0x10) {
    uVar5 = cpu->mode;
    uVar1 = *(u32 *)(&CSWTCH_4 + uVar2 * 4);
    if (uVar1 == uVar5) {
      return;
    }
    if (uVar1 == 1) {
      uVar3 = cpu->reg[9];
      uVar6 = cpu->reg[10];
      uVar4 = cpu->reg[0xb];
      cpu->banked_reg_fiq[0] = cpu->reg[8];
      cpu->banked_reg_fiq[1] = uVar3;
      cpu->banked_reg_fiq[2] = uVar6;
      cpu->banked_reg_fiq[3] = uVar4;
      uVar3 = cpu->reg[0xd];
      uVar6 = cpu->reg[0xe];
      cpu->banked_reg_fiq[4] = cpu->reg[0xc];
      cpu->banked_reg_fiq[5] = uVar3;
      cpu->banked_reg_fiq[6] = uVar6;
      goto LAB_08020778;
    }
  }
  else {
    uVar5 = cpu->mode;
    if (uVar5 == 6) {
      return;
    }
    uVar1 = 6;
  }
  cpu->banked_reg[uVar5] = *(u32 (*) [2])(cpu->reg + 0xd);
LAB_08020778:
  if (uVar5 == 1) {
    uVar6 = cpu->banked_reg_fiq[1];
    uVar5 = cpu->banked_reg_fiq[2];
    cpu->reg[8] = cpu->banked_reg_fiq[0];
    cpu->reg[9] = uVar6;
    cpu->reg[10] = uVar5;
    uVar7 = *(undefined8 *)(cpu->banked_reg_fiq + 5);
    *(undefined8 *)(cpu->reg + 0xb) = *(undefined8 *)(cpu->banked_reg_fiq + 3);
    *(undefined8 *)(cpu->reg + 0xd) = uVar7;
  }
  else {
    cpu->reg[0xd] = cpu->banked_reg[uVar1][0];
    cpu->reg[0xe] = cpu->banked_reg[uVar1][1];
  }
  cpu->mode = uVar1;
  return;
}


