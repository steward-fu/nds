/*
 * Ghidra decompilation
 *
 * Function : FUN_080e2cfc
 * Address  : 080e2cfc
 * Program  : drastic16
 */


void FUN_080e2cfc(int param_1)

{
  uint local_c;
  
  memset((void *)(param_1 + 0x948),0,0x200);
  *(undefined4 *)(param_1 + 0xb48) = 0;
  FUN_080e3374(param_1 + 0x840,0,1);
  for (local_c = 0; local_c < 8; local_c = local_c + 1) {
    FUN_080e3374(param_1 + local_c * 0x108,local_c,0);
  }
  *(undefined *)(param_1 + 0x944) = 1;
  *(undefined *)(param_1 + 0x83c) = 1;
  return;
}


