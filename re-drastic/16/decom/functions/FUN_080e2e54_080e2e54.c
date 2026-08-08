/*
 * Ghidra decompilation
 *
 * Function : FUN_080e2e54
 * Address  : 080e2e54
 * Program  : drastic16
 */


void FUN_080e2e54(int param_1,void *param_2,uint param_3)

{
  uint __n;
  uint local_94;
  void *local_90;
  uint auStack_84 [24];
  uint *local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  int local_c;
  
  local_c = *(int *)(param_1 + 0xb48);
  local_20 = 0x200 - local_c;
  local_94 = param_3;
  local_90 = param_2;
  if ((local_c != 0) && (local_20 <= param_3)) {
    memcpy((void *)(param_1 + local_c + 0x948),param_2,local_20);
    for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
      FUN_080e40b4(param_1 + local_10 * 0x108,param_1 + 0x948 + local_10 * 0x40,0x40);
    }
    local_90 = (void *)((int)param_2 + local_20);
    local_94 = param_3 - local_20;
    local_c = 0;
  }
  if (local_94 < 0x1000) {
    local_14 = 1;
  }
  else {
    local_14 = *(uint *)(param_1 + 0xb50);
  }
  if ((local_14 == 6) || (local_14 == 7)) {
    local_14 = 4;
  }
  local_18 = 0;
  while (local_18 < 8) {
    local_1c = 0;
    for (; (local_1c < local_14 && (local_18 < 8)); local_18 = local_18 + 1) {
      local_24 = auStack_84 + local_1c * 3;
      auStack_84[local_1c * 3 + 2] = local_94;
      local_24[1] = (uint)((int)local_90 + local_18 * 0x40);
      *local_24 = param_1 + local_18 * 0x108;
      if (local_14 < 2) {
        FUN_080e2dbc(local_24);
      }
      else {
        FUN_080d6a34(*(undefined4 *)(param_1 + 0xb4c),FUN_080e2e2c,local_24);
      }
      local_1c = local_1c + 1;
    }
    if (*(int *)(param_1 + 0xb4c) != 0) {
      FUN_080d6afc(*(undefined4 *)(param_1 + 0xb4c));
    }
  }
  __n = local_94 & 0x1ff;
  if (__n != 0) {
    memcpy((void *)(param_1 + local_c + 0x948),(void *)((int)local_90 + (local_94 & 0xfffffe00)),__n
          );
  }
  *(uint *)(param_1 + 0xb48) = local_c + __n;
  return;
}


