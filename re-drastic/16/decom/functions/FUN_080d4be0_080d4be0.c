/*
 * Ghidra decompilation
 *
 * Function : FUN_080d4be0
 * Address  : 080d4be0
 * Program  : drastic16
 */


void FUN_080d4be0(int param_1,uint param_2,int param_3)

{
  uint local_20;
  undefined *local_14;
  undefined *local_10;
  uint local_c;
  
  local_c = *(int *)(param_1 + 0x70) - param_3;
  local_20 = param_2;
  if ((local_c < *(int *)(param_1 + 0xe6f4) - 0x1001U) &&
     (*(uint *)(param_1 + 0x70) < *(int *)(param_1 + 0xe6f4) - 0x1001U)) {
    local_10 = (undefined *)(*(int *)(param_1 + 0x4b34) + local_c);
    local_14 = (undefined *)(*(int *)(param_1 + 0x4b34) + *(int *)(param_1 + 0x70));
    *(uint *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + param_2;
    for (; 7 < local_20; local_20 = local_20 - 8) {
      *local_14 = *local_10;
      local_14[1] = local_10[1];
      local_14[2] = local_10[2];
      local_14[3] = local_10[3];
      local_14[4] = local_10[4];
      local_14[5] = local_10[5];
      local_14[6] = local_10[6];
      local_14[7] = local_10[7];
      local_10 = local_10 + 8;
      local_14 = local_14 + 8;
    }
    if ((((local_20 != 0) && (*local_14 = *local_10, 1 < local_20)) &&
        (local_14[1] = local_10[1], 2 < local_20)) &&
       (((local_14[2] = local_10[2], 3 < local_20 && (local_14[3] = local_10[3], 4 < local_20)) &&
        ((local_14[4] = local_10[4], 5 < local_20 && (local_14[5] = local_10[5], 6 < local_20))))))
    {
      local_14[6] = local_10[6];
    }
  }
  else {
    while (local_20 != 0) {
      *(undefined *)(*(int *)(param_1 + 0x4b34) + *(int *)(param_1 + 0x70)) =
           *(undefined *)(*(int *)(param_1 + 0x4b34) + (local_c & *(uint *)(param_1 + 0xe6f8)));
      *(uint *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1U & *(uint *)(param_1 + 0xe6f8);
      local_20 = local_20 - 1;
      local_c = local_c + 1;
    }
  }
  return;
}


