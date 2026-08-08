/*
 * Ghidra decompilation
 *
 * Function : FUN_080b9c20
 * Address  : 080b9c20
 * Program  : drastic16
 */


void FUN_080b9c20(int param_1,int param_2)

{
  int local_c;
  
  for (local_c = 0; local_c < 0x10; local_c = local_c + 1) {
    *(undefined *)(param_1 + local_c) = *(undefined *)(param_2 + local_c);
  }
  return;
}


