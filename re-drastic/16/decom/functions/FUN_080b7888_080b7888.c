/*
 * Ghidra decompilation
 *
 * Function : FUN_080b7888
 * Address  : 080b7888
 * Program  : drastic16
 */


void FUN_080b7888(int param_1,uint param_2)

{
  __pid_t _Var1;
  uint local_c;
  
  _Var1 = getpid();
  for (local_c = 0; local_c < param_2; local_c = local_c + 1) {
    *(byte *)(param_1 + local_c) =
         *(byte *)(param_1 + local_c) ^ (char)_Var1 + (char)local_c + 0x4bU;
  }
  return;
}


