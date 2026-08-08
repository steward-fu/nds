/*
 * Ghidra decompilation
 *
 * Function : FUN_0805ca00
 * Address  : 0805ca00
 * Program  : drastic16
 */


void FUN_0805ca00(int param_1,int param_2)

{
  *(int *)(param_1 + 0x43c) = param_2;
  FUN_0805dac8(param_1,1,param_2 + 0x25d6760,0x40000,0);
  *(undefined *)(param_1 + 0x41e) = 1;
  return;
}


