/*
 * Ghidra decompilation
 *
 * Function : initialize_coprocessor
 * Address  : 001299a0
 * Program  : drastic64
 */


void initialize_coprocessor(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(nds_system + param_2 + 0xb063d8);
  *param_1 = param_2;
  param_1[1] = lVar1;
  return;
}


