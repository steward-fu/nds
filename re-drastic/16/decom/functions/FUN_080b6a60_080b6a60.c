/*
 * Ghidra decompilation
 *
 * Function : FUN_080b6a60
 * Address  : 080b6a60
 * Program  : drastic16
 */


void FUN_080b6a60(int param_1,uint param_2)

{
  int iVar1;
  wchar_t awStack_1018 [1025];
  size_t local_14;
  undefined4 local_10;
  uint local_c;
  
  iVar1 = FUN_080b6924(param_1,param_2);
  if (iVar1 == 0) {
    local_10 = 0x400;
    for (local_c = 0; local_c < param_2; local_c = local_c + 0x400) {
      local_14 = param_2 - local_c;
      if (0x3ff < local_14) {
        local_14 = 0x400;
      }
      wcsncpy(awStack_1018,(wchar_t *)(param_1 + local_c * 4),local_14);
      awStack_1018[local_14] = L'\0';
      FUN_080a6080(&DAT_080edef0,awStack_1018);
    }
    FUN_080a6080(&DAT_080edefc);
  }
  return;
}


