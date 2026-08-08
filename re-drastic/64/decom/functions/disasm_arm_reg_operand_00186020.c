/*
 * Ghidra decompilation
 *
 * Function : disasm_arm_reg_operand
 * Address  : 00186020
 * Program  : drastic64
 */


void disasm_arm_reg_operand(uint param_1,char *param_2)

{
  strcpy(param_2,(&reg_names)[param_1]);
  return;
}


