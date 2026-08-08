/*
 * Ghidra decompilation
 *
 * Function : FUN_080b9b6c
 * Address  : 080b9b6c
 * Program  : drastic16
 */


void FUN_080b9b6c(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int local_c;
  
  for (local_c = 0; local_c < 4; local_c = local_c + 1) {
    *(byte *)(param_1 + local_c) =
         *(byte *)(param_2 + local_c) ^ *(byte *)(param_3 + local_c) ^ *(byte *)(param_4 + local_c)
         ^ *(byte *)(param_5 + local_c);
  }
  return;
}


