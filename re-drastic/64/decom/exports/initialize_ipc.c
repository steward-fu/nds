/*
 * Ghidra decompilation
 *
 * Function : initialize_ipc
 * Address  : 00129e00
 * Program  : drastic64
 */


void initialize_ipc(long *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x2080);
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = lVar1;
  return;
}


