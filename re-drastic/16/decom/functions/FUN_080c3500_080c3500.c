/*
 * Ghidra decompilation
 *
 * Function : FUN_080c3500
 * Address  : 080c3500
 * Program  : drastic16
 */


bool FUN_080c3500(int param_1,wchar_t *param_2,undefined4 param_3)

{
  int iVar1;
  undefined auStack_2810 [2048];
  wchar_t awStack_2010 [2048];
  int local_10;
  char local_a;
  char local_9;
  
  local_9 = '\0';
  local_a = '\0';
  if (*(int *)(param_1 + 0x125b0) != 0) {
    wcscpy(awStack_2010,param_2);
    iVar1 = (**(code **)(param_1 + 0x125b0))(3,*(undefined4 *)(param_1 + 0x125ac),param_2,0);
    if (iVar1 == -1) {
      local_a = '\x01';
    }
    else {
      iVar1 = wcscmp(awStack_2010,param_2);
      if (iVar1 == 0) {
        FUN_080afbc8(param_2,auStack_2810,0x800);
        iVar1 = (**(code **)(param_1 + 0x125b0))
                          (0,*(undefined4 *)(param_1 + 0x125ac),auStack_2810,0);
        if (iVar1 == -1) {
          local_a = '\x01';
        }
        else {
          FUN_080afc9c(auStack_2810,param_2,param_3);
          iVar1 = wcscmp(awStack_2010,param_2);
          if (iVar1 != 0) {
            local_9 = '\x01';
          }
        }
      }
      else {
        local_9 = '\x01';
      }
    }
  }
  if ((local_9 != '\x01') && (*(int *)(param_1 + 0x125b4) != 0)) {
    FUN_080afbc8(param_2,awStack_2010,0x800);
    local_10 = (**(code **)(param_1 + 0x125b4))(awStack_2010,0);
    if (local_10 == 0) {
      local_a = '\x01';
    }
    else {
      FUN_080afc9c(awStack_2010,param_2,1);
    }
  }
  if (local_a != '\0') {
    *(undefined4 *)(param_1 + 0x125a8) = 0xf;
  }
  return local_a == '\0';
}


