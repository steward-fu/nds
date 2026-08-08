/*
 * Ghidra decompilation
 *
 * Function : FUN_080c5a10
 * Address  : 080c5a10
 * Program  : drastic16
 */


void FUN_080c5a10(int *param_1)

{
  uint local_c;
  
  for (local_c = 0; local_c < (uint)param_1[1]; local_c = local_c + 1) {
    FUN_080c6614(*(undefined4 *)*param_1,*param_1 + local_c * 0x4ae4);
  }
  return;
}


