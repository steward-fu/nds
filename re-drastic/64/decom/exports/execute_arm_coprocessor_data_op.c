/*
 * Ghidra decompilation
 *
 * Function : execute_arm_coprocessor_data_op
 * Address  : 00127070
 * Program  : drastic64
 */


void execute_arm_coprocessor_data_op(long param_1,undefined4 param_2)

{
  __printf_chk(1,"Game attempted CDP instruction (%x) on P15. (pc %x, %lx in)\n",param_2,
               *(undefined4 *)(param_1 + 0x23bc),*(undefined8 *)(param_1 + 0x2220));
  return;
}


