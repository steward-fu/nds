/*
 * Ghidra decompilation
 *
 * Function : print_arm_user_registers
 * Address  : 00182400
 * Program  : drastic64
 */


void print_arm_user_registers(long *param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = *param_1;
  uVar1 = *(undefined4 *)(lVar2 + 0x2104);
  execute_arm_set_cpu_mode(lVar2,0);
  print_arm_registers(param_1,0xffff);
  execute_arm_set_cpu_mode(lVar2,uVar1);
  return;
}


