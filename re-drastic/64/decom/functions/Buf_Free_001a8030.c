/*
 * Ghidra decompilation
 *
 * Function : Buf_Free
 * Address  : 001a8030
 * Program  : drastic64
 */


void Buf_Free(undefined8 *param_1,long param_2)

{
  (**(code **)(param_2 + 8))(param_2,*param_1);
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


