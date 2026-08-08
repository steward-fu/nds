/*
 * Ghidra decompilation
 *
 * Function : FUN_080b01c8
 * Address  : 080b01c8
 * Program  : drastic16
 */


int FUN_080b01c8(int *param_1,int param_2,uint param_3)

{
  int *local_14;
  uint local_c;
  
  local_c = 0;
  local_14 = param_1;
  while( true ) {
    if (param_3 <= local_c) {
      return param_2;
    }
    *(char *)(param_2 + local_c * 2) = (char)*local_14;
    *(char *)(param_2 + local_c * 2 + 1) = (char)((uint)*local_14 >> 8);
    if (*local_14 == 0) break;
    local_c = local_c + 1;
    local_14 = local_14 + 1;
  }
  return param_2;
}


