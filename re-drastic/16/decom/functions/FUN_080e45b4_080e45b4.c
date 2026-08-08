/*
 * Ghidra decompilation
 *
 * Function : FUN_080e45b4
 * Address  : 080e45b4
 * Program  : drastic16
 */


void FUN_080e45b4(int param_1,int param_2,int param_3)

{
  undefined auStack_2018 [8192];
  size_t local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  
  local_c = (void *)FUN_080a609c(param_1 + 0xe790,0);
  local_10 = FUN_080a8838(param_1 + 0xe790);
  if (*(int *)(param_1 + 0x10e98) == 2) {
    local_14 = local_10 >> 1;
    if (param_3 - 1U < local_10 >> 1) {
      local_14 = param_3 - 1U;
    }
    FUN_080b0284(local_c,param_2,local_14);
    *(undefined4 *)(param_2 + local_14 * 4) = 0;
  }
  else {
    local_18 = local_10;
    if (0x1ffe < local_10) {
      local_18 = 0x1fff;
    }
    memcpy(auStack_2018,local_c,local_18);
    auStack_2018[local_18] = 0;
    FUN_080b07d4(auStack_2018,param_2,param_3);
  }
  return;
}


