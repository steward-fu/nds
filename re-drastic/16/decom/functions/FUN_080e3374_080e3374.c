/*
 * Ghidra decompilation
 *
 * Function : FUN_080e3374
 * Address  : 080e3374
 * Program  : drastic16
 */


void FUN_080e3374(int param_1,uint param_2,int param_3)

{
  int local_c;
  
  FUN_080e4354(param_1);
  for (local_c = 0; local_c < 8; local_c = local_c + 1) {
    *(undefined4 *)(*(int *)(param_1 + 0xf4) + local_c * 4) =
         *(undefined4 *)(&DAT_080ef158 + local_c * 4);
  }
  **(uint **)(param_1 + 0xf4) = **(uint **)(param_1 + 0xf4) ^ 0x2080020;
  *(uint *)(*(int *)(param_1 + 0xf4) + 8) = *(uint *)(*(int *)(param_1 + 0xf4) + 8) ^ param_2;
  *(uint *)(*(int *)(param_1 + 0xf4) + 0xc) =
       *(uint *)(*(int *)(param_1 + 0xf4) + 0xc) ^ (param_3 << 0x10 | 0x20000000U);
  return;
}


