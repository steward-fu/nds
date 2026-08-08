/*
 * Ghidra decompilation
 *
 * Function : FUN_001712ec
 * Address  : 001712ec
 * Program  : drastic64
 */


void FUN_001712ec(long param_1,long param_2)

{
  *(long *)(param_1 + 0x2448) = param_2;
  initialize_backup(param_1,1,param_2 + 0x35ff9a0,0x40000,0);
  *(undefined *)(param_1 + 0x2426) = 1;
  return;
}


