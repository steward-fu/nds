/*
 * Ghidra decompilation
 *
 * Function : FUN_080e2dbc
 * Address  : 080e2dbc
 * Program  : drastic16
 */


void FUN_080e2dbc(undefined4 *param_1)

{
  int local_10;
  uint local_c;
  
  local_10 = param_1[1];
  for (local_c = param_1[2]; 0x1ff < local_c; local_c = local_c - 0x200) {
    FUN_080e40b4(*param_1,local_10,0x40);
    local_10 = local_10 + 0x200;
  }
  return;
}


