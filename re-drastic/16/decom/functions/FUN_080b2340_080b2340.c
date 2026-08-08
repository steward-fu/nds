/*
 * Ghidra decompilation
 *
 * Function : FUN_080b2340
 * Address  : 080b2340
 * Program  : drastic16
 */


void FUN_080b2340(int param_1,int param_2)

{
  int local_c;
  
  for (local_c = 0; local_c < 0x10; local_c = local_c + 4) {
    *(uint *)(param_1 + 0xfec) =
         *(uint *)(param_1 + 0xfec) ^
         *(uint *)(param_1 + (*(byte *)(param_2 + local_c) + 0x2ba) * 4 + 4);
    *(uint *)(param_1 + 0xff0) =
         *(uint *)(param_1 + 0xff0) ^
         *(uint *)(param_1 + (*(byte *)(param_2 + local_c + 1) + 0x2ba) * 4 + 4);
    *(uint *)(param_1 + 0xff4) =
         *(uint *)(param_1 + 0xff4) ^
         *(uint *)(param_1 + (*(byte *)(param_2 + local_c + 2) + 0x2ba) * 4 + 4);
    *(uint *)(param_1 + 0xff8) =
         *(uint *)(param_1 + 0xff8) ^
         *(uint *)(param_1 + (*(byte *)(param_2 + local_c + 3) + 0x2ba) * 4 + 4);
  }
  return;
}


