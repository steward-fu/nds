/*
 * Ghidra decompilation
 *
 * Function : execute_arm_raise_exception
 * Address  : 08020838
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void execute_arm_raise_exception(cpu_struct *cpu,u32 exception_type)

{
  bool bVar1;
  u32 uVar2;
  arm_cpu_mode_enum current_mode;
  u32 uVar3;
  uint uVar4;
  uint uVar5;
  arm_cpu_mode_enum current_mode_1;
  arm_cpu_mode_enum current_mode_2;
  arm_cpu_mode_enum current_mode_3;
  arm_cpu_mode_enum current_mode_4;
  arm_cpu_mode_enum current_mode_5;
  u32 uVar6;
  u32 uVar7;
  u32 exception_pc;
  u32 uVar8;
  undefined8 uVar9;
  
  uVar8 = exception_type * 4;
  uVar3 = cpu->pc;
  if ((uVar3 & 1) == 0) {
    switch(exception_type) {
    case 0:
      bVar1 = false;
      goto LAB_0802092c;
    case 1:
      bVar1 = false;
      goto LAB_08020994;
    case 2:
      bVar1 = false;
      goto LAB_080209e0;
    case 3:
      bVar1 = false;
      goto LAB_08020a2c;
    case 4:
      bVar1 = false;
      goto LAB_08020a78;
    default:
      uVar2 = cpu->mode;
      uVar5 = cpu_modes_cpsr[uVar2];
      break;
    case 6:
      bVar1 = false;
      goto LAB_08020ac8;
    case 7:
      bVar1 = false;
      goto LAB_08020b18;
    }
  }
  else {
    uVar3 = uVar3 & 0xfffffffe;
    cpu->pc = uVar3;
    switch(exception_type) {
    case 0:
      bVar1 = true;
LAB_0802092c:
      uVar3 = cpu->mode;
      if (uVar3 == 3) {
        uVar5 = 0x13;
        uVar2 = 3;
      }
      else {
        cpu->banked_reg[uVar3] = *(u32 (*) [2])(cpu->reg + 0xd);
        if (uVar3 == 1) {
          uVar2 = cpu->banked_reg_fiq[1];
          uVar3 = cpu->banked_reg_fiq[2];
          cpu->reg[8] = cpu->banked_reg_fiq[0];
          cpu->reg[9] = uVar2;
          cpu->reg[10] = uVar3;
          uVar9 = *(undefined8 *)(cpu->banked_reg_fiq + 5);
          *(undefined8 *)(cpu->reg + 0xb) = *(undefined8 *)(cpu->banked_reg_fiq + 3);
          *(undefined8 *)(cpu->reg + 0xd) = uVar9;
        }
        else {
          *(u32 (*) [2])(cpu->reg + 0xd) = cpu->banked_reg[3];
        }
        uVar5 = 0x13;
        uVar2 = 3;
        cpu->mode = 3;
      }
      break;
    case 1:
      bVar1 = true;
LAB_08020994:
      uVar2 = cpu->mode;
      if (uVar2 != 5) {
        cpu->banked_reg[uVar2] = *(u32 (*) [2])(cpu->reg + 0xd);
        if (uVar2 == 1) {
          uVar6 = cpu->banked_reg_fiq[1];
          uVar2 = cpu->banked_reg_fiq[2];
          cpu->reg[8] = cpu->banked_reg_fiq[0];
          cpu->reg[9] = uVar6;
          cpu->reg[10] = uVar2;
          uVar9 = *(undefined8 *)(cpu->banked_reg_fiq + 5);
          *(undefined8 *)(cpu->reg + 0xb) = *(undefined8 *)(cpu->banked_reg_fiq + 3);
          *(undefined8 *)(cpu->reg + 0xd) = uVar9;
        }
        else {
          cpu->reg[0xd] = cpu->banked_reg[5][0];
        }
        cpu->mode = 5;
      }
      uVar5 = 0x1b;
      uVar2 = 5;
      cpu->reg[0xe] = uVar3;
      break;
    case 2:
      bVar1 = true;
LAB_080209e0:
      uVar2 = cpu->mode;
      if (uVar2 != 3) {
        cpu->banked_reg[uVar2] = *(u32 (*) [2])(cpu->reg + 0xd);
        if (uVar2 == 1) {
          uVar6 = cpu->banked_reg_fiq[1];
          uVar2 = cpu->banked_reg_fiq[2];
          cpu->reg[8] = cpu->banked_reg_fiq[0];
          cpu->reg[9] = uVar6;
          cpu->reg[10] = uVar2;
          uVar9 = *(undefined8 *)(cpu->banked_reg_fiq + 5);
          *(undefined8 *)(cpu->reg + 0xb) = *(undefined8 *)(cpu->banked_reg_fiq + 3);
          *(undefined8 *)(cpu->reg + 0xd) = uVar9;
        }
        else {
          cpu->reg[0xd] = cpu->banked_reg[3][0];
        }
        cpu->mode = 3;
      }
      uVar5 = 0x13;
      uVar2 = 3;
      cpu->reg[0xe] = uVar3;
      break;
    case 3:
      bVar1 = true;
LAB_08020a2c:
      uVar2 = cpu->mode;
      if (uVar2 != 4) {
        cpu->banked_reg[uVar2] = *(u32 (*) [2])(cpu->reg + 0xd);
        if (uVar2 == 1) {
          uVar6 = cpu->banked_reg_fiq[1];
          uVar2 = cpu->banked_reg_fiq[2];
          cpu->reg[8] = cpu->banked_reg_fiq[0];
          cpu->reg[9] = uVar6;
          cpu->reg[10] = uVar2;
          uVar9 = *(undefined8 *)(cpu->banked_reg_fiq + 5);
          *(undefined8 *)(cpu->reg + 0xb) = *(undefined8 *)(cpu->banked_reg_fiq + 3);
          *(undefined8 *)(cpu->reg + 0xd) = uVar9;
        }
        else {
          cpu->reg[0xd] = cpu->banked_reg[4][0];
        }
        cpu->mode = 4;
      }
      uVar5 = 0x17;
      uVar2 = 4;
      cpu->reg[0xe] = uVar3;
      break;
    case 4:
      bVar1 = true;
LAB_08020a78:
      uVar2 = cpu->mode;
      if (uVar2 != 4) {
        cpu->banked_reg[uVar2] = *(u32 (*) [2])(cpu->reg + 0xd);
        if (uVar2 == 1) {
          uVar6 = cpu->banked_reg_fiq[1];
          uVar2 = cpu->banked_reg_fiq[2];
          cpu->reg[8] = cpu->banked_reg_fiq[0];
          cpu->reg[9] = uVar6;
          cpu->reg[10] = uVar2;
          uVar9 = *(undefined8 *)(cpu->banked_reg_fiq + 5);
          *(undefined8 *)(cpu->reg + 0xb) = *(undefined8 *)(cpu->banked_reg_fiq + 3);
          *(undefined8 *)(cpu->reg + 0xd) = uVar9;
        }
        else {
          cpu->reg[0xd] = cpu->banked_reg[4][0];
        }
        cpu->mode = 4;
      }
      uVar5 = 0x17;
      uVar2 = 4;
      cpu->reg[0xe] = uVar3 - 4;
      break;
    default:
      uVar2 = cpu->mode;
      uVar5 = cpu_modes_cpsr[uVar2];
      goto LAB_080208d0;
    case 6:
      bVar1 = true;
LAB_08020ac8:
      uVar2 = cpu->mode;
      if (uVar2 != 2) {
        cpu->banked_reg[uVar2] = *(u32 (*) [2])(cpu->reg + 0xd);
        if (uVar2 == 1) {
          uVar6 = cpu->banked_reg_fiq[1];
          uVar2 = cpu->banked_reg_fiq[2];
          cpu->reg[8] = cpu->banked_reg_fiq[0];
          cpu->reg[9] = uVar6;
          cpu->reg[10] = uVar2;
          uVar9 = *(undefined8 *)(cpu->banked_reg_fiq + 5);
          *(undefined8 *)(cpu->reg + 0xb) = *(undefined8 *)(cpu->banked_reg_fiq + 3);
          *(undefined8 *)(cpu->reg + 0xd) = uVar9;
        }
        else {
          cpu->reg[0xd] = cpu->banked_reg[2][0];
        }
        cpu->mode = 2;
      }
      uVar5 = 0x12;
      uVar2 = 2;
      cpu->reg[0xe] = uVar3 + 4;
      break;
    case 7:
      bVar1 = true;
LAB_08020b18:
      if (cpu->mode != 1) {
        uVar6 = cpu->reg[9];
        uVar2 = cpu->reg[10];
        uVar7 = cpu->reg[0xb];
        cpu->banked_reg_fiq[0] = cpu->reg[8];
        cpu->banked_reg_fiq[1] = uVar6;
        cpu->banked_reg_fiq[2] = uVar2;
        cpu->banked_reg_fiq[3] = uVar7;
        uVar6 = cpu->reg[0xd];
        uVar2 = cpu->reg[0xe];
        cpu->banked_reg_fiq[4] = cpu->reg[0xc];
        cpu->banked_reg_fiq[5] = uVar6;
        cpu->banked_reg_fiq[6] = uVar2;
        uVar2 = cpu->banked_reg[1][0];
        cpu->mode = 1;
        cpu->reg[0xd] = uVar2;
      }
      uVar5 = 0x11;
      uVar2 = 1;
      cpu->reg[0xe] = uVar3 + 4;
    }
    if (bVar1) {
LAB_080208d0:
      uVar4 = cpu->cpsr;
      cpu->spsr[uVar2] = uVar4 | 0x20;
      goto LAB_080208e4;
    }
  }
  uVar4 = cpu->cpsr;
  cpu->spsr[uVar2] = uVar4;
LAB_080208e4:
  if (cpu->type == '\x01') {
    uVar8 = uVar8 + cpu->coprocessor->exception_vector_offset;
  }
  cpu->pc = uVar8;
  cpu->cpsr = (uVar4 & 0xffffffe0 | uVar5) & 0xffffffdf | 0x80;
  return;
}


