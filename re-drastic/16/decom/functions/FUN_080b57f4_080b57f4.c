/*
 * Ghidra decompilation
 *
 * Function : FUN_080b57f4
 * Address  : 080b57f4
 * Program  : drastic16
 */


void FUN_080b57f4(undefined4 param_1,int *param_2)

{
  int iVar1;
  int *local_58;
  int local_4c;
  int local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_28 [6];
  uint local_10;
  uint local_c;
  
  memset(local_28,0,0x18);
  local_c = 0;
  for (local_58 = param_2; *local_58 != 0; local_58 = local_58 + 1) {
    iVar1 = FUN_080a0128(*local_58);
    if (iVar1 != 0) {
      if (local_c < 4) {
        local_10 = 0;
      }
      else {
        local_10 = (local_c - 4 >> 1) + 1;
      }
      if (local_10 < 6) {
        local_28[local_10] = local_28[local_10] * 10 + *local_58 + -0x30;
      }
      local_c = local_c + 1;
    }
  }
  local_38 = local_28[5];
  local_3c = local_28[4];
  local_40 = local_28[3];
  if (local_28[2] == 0) {
    local_28[2] = 1;
  }
  if (local_28[1] == 0) {
    local_28[1] = 1;
  }
  local_4c = local_28[0];
  local_34 = 0;
  local_48 = local_28[1];
  local_44 = local_28[2];
  FUN_080b5470(param_1,&local_4c);
  return;
}


