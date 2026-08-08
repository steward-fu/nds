/*
 * Ghidra decompilation
 *
 * Function : FUN_080d1188
 * Address  : 080d1188
 * Program  : drastic16
 */


uint FUN_080d1188(int param_1,uint param_2,uint param_3)

{
  uint local_c;
  
  local_c = 0;
  while( true ) {
    if (0x1f < local_c) {
      return 0;
    }
    if (param_2 < *(uint *)(param_1 + (local_c + 0x20) * 4)) break;
    local_c = local_c + 1;
  }
  param_2 = *(int *)(param_1 + (local_c + 0x20) * 4) - param_2;
  if (param_3 <= param_2) {
    return param_3;
  }
  return param_2;
}


