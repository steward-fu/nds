/*
 * Ghidra decompilation
 *
 * Function : disasm_arm_reg_operand
 * Address  : 080a33e4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void disasm_arm_reg_operand(u32 reg_number,char *buffer)

{
  strcpy(buffer,reg_names[reg_number]);
  return;
}


