/*
 * Ghidra decompilation
 *
 * Function : FUN_080d0238
 * Address  : 080d0238
 * Program  : drastic16
 */


void FUN_080d0238(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint local_18;
  uint local_c;
  
  if (param_3 != param_2) {
    *(undefined *)(param_1 + 0x4c4a) = 1;
  }
  if (param_3 < param_2) {
    *(undefined *)(param_1 + 0x4c49) = 1;
  }
  if (*(char *)(param_1 + 0x4c38) == '\0') {
    if (param_3 < param_2) {
      FUN_080d03f4(param_1,*(int *)(param_1 + 0x4b34) + param_2,*(int *)(param_1 + 0xe6f4) - param_2
                  );
      FUN_080d03f4(param_1,*(undefined4 *)(param_1 + 0x4b34),param_3);
    }
    else {
      FUN_080d03f4(param_1,*(int *)(param_1 + 0x4b34) + param_2,param_3 - param_2);
    }
  }
  else {
    local_18 = param_2;
    for (local_c = param_3 - param_2 & *(uint *)(param_1 + 0xe6f8); local_c != 0;
        local_c = local_c - iVar1) {
      iVar1 = FUN_080d1188(param_1 + 0x4b38,local_18,local_c);
      uVar2 = FUN_080d0f84(param_1 + 0x4b38,local_18);
      FUN_080d03f4(param_1,uVar2,iVar1);
      local_18 = local_18 + iVar1 & *(uint *)(param_1 + 0xe6f8);
    }
  }
  return;
}


