/*
 * Ghidra decompilation
 *
 * Function : FUN_080b9aec
 * Address  : 080b9aec
 * Program  : drastic16
 */


void FUN_080b9aec(int param_1,int param_2,int param_3)

{
  int local_c;
  
  for (local_c = 0; local_c < 0x10; local_c = local_c + 1) {
    *(byte *)(param_1 + local_c) = *(byte *)(param_2 + local_c) ^ *(byte *)(param_3 + local_c);
  }
  return;
}


