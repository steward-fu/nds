/*
 * Ghidra decompilation
 *
 * Function : execute_arm_set_cpu_mode
 * Address  : 08020638
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void execute_arm_set_cpu_mode(cpu_struct *cpu,arm_cpu_mode_enum new_mode)

{
  u32 *banked_reg;
  u32 uVar1;
  u32 uVar2;
  arm_cpu_mode_enum aVar3;
  arm_cpu_mode_enum current_mode;
  u32 uVar4;
  undefined8 uVar5;
  
  aVar3 = cpu->mode;
  if (aVar3 != new_mode) {
    if (new_mode == ARM_CPU_MODE_FIQ) {
      uVar4 = cpu->reg[9];
      uVar1 = cpu->reg[10];
      uVar2 = cpu->reg[0xb];
      cpu->banked_reg_fiq[0] = cpu->reg[8];
      cpu->banked_reg_fiq[1] = uVar4;
      cpu->banked_reg_fiq[2] = uVar1;
      cpu->banked_reg_fiq[3] = uVar2;
      uVar4 = cpu->reg[0xd];
      uVar1 = cpu->reg[0xe];
      cpu->banked_reg_fiq[4] = cpu->reg[0xc];
      cpu->banked_reg_fiq[5] = uVar4;
      cpu->banked_reg_fiq[6] = uVar1;
    }
    else {
      cpu->banked_reg[aVar3] = *(u32 (*) [2])(cpu->reg + 0xd);
    }
    if (aVar3 == ARM_CPU_MODE_FIQ) {
      uVar4 = cpu->banked_reg_fiq[1];
      uVar1 = cpu->banked_reg_fiq[2];
      cpu->reg[8] = cpu->banked_reg_fiq[0];
      cpu->reg[9] = uVar4;
      cpu->reg[10] = uVar1;
      uVar5 = *(undefined8 *)(cpu->banked_reg_fiq + 5);
      *(undefined8 *)(cpu->reg + 0xb) = *(undefined8 *)(cpu->banked_reg_fiq + 3);
      *(undefined8 *)(cpu->reg + 0xd) = uVar5;
    }
    else {
      cpu->reg[0xd] = cpu->banked_reg[new_mode][0];
      cpu->reg[0xe] = cpu->banked_reg[new_mode][1];
    }
    cpu->mode = new_mode;
    return;
  }
  return;
}


