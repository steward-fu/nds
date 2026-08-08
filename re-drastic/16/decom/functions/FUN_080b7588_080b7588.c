/*
 * Ghidra decompilation
 *
 * Function : FUN_080b7588
 * Address  : 080b7588
 * Program  : drastic16
 */


void FUN_080b7588(int param_1,uint param_2)

{
  uint local_c;
  
  for (local_c = 0; local_c < param_2; local_c = local_c + 1) {
    *(undefined *)(param_1 + local_c) = 0;
  }
  return;
}


