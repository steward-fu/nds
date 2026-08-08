/*
 * Ghidra decompilation
 *
 * Function : FUN_080e3120
 * Address  : 080e3120
 * Program  : drastic16
 */


void FUN_080e3120(int param_1,undefined4 param_2)

{
  undefined auStack_114 [256];
  uint local_14;
  uint local_10;
  uint local_c;
  
  for (local_c = 0; local_c < 8; local_c = local_c + 1) {
    if (local_c * 0x40 < *(uint *)(param_1 + 0xb48)) {
      local_10 = *(int *)(param_1 + 0xb48) + local_c * -0x40;
      if (0x40 < local_10) {
        local_10 = 0x40;
      }
      FUN_080e40b4(param_1 + local_c * 0x108,param_1 + 0x948 + local_c * 0x40,local_10);
    }
    FUN_080e4210(param_1 + local_c * 0x108,auStack_114 + local_c * 0x20);
  }
  for (local_14 = 0; local_14 < 8; local_14 = local_14 + 1) {
    FUN_080e40b4(param_1 + 0x840,auStack_114 + local_14 * 0x20,0x20);
  }
  FUN_080e4210(param_1 + 0x840,param_2);
  return;
}


