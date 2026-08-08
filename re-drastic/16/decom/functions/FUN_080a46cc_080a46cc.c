/*
 * Ghidra decompilation
 *
 * Function : FUN_080a46cc
 * Address  : 080a46cc
 * Program  : drastic16
 */


int FUN_080a46cc(int *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  uint local_18;
  int local_14;
  
  lVar4 = 0;
  if (*(char *)((int)param_1 + 0x11) != '\0') {
    lVar4 = (**(code **)(*param_1 + 0x10))(param_1);
  }
  do {
    iVar1 = FUN_080a48b0(param_1,param_2,param_3);
    if (iVar1 != -1) {
      return iVar1;
    }
    param_1[0x806] = 2;
    if (*(char *)(param_1 + 5) == '\0') {
      return -1;
    }
    if (*(char *)((int)param_1 + 0x11) != '\0') {
      local_14 = 0;
      for (local_18 = 0; local_18 < param_3; local_18 = local_18 + 0x200) {
        (**(code **)(*param_1 + 0xc))
                  (param_1,0,(int)(lVar4 + (ulonglong)local_18),
                   (int)(lVar4 + (ulonglong)local_18 >> 0x20),0);
        uVar3 = param_3 - local_18;
        if (0x1ff < uVar3) {
          uVar3 = 0x200;
        }
        iVar1 = FUN_080a48b0(param_1,param_2,uVar3);
        if (iVar1 == -1) {
          iVar1 = 0x200;
        }
        local_14 = local_14 + iVar1;
      }
      return local_14;
    }
    if ((param_1[3] == 0) && (iVar1 = FUN_080b6f98(&DAT_081cd0a0,param_1 + 6), iVar1 != 0)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
  } while (bVar2);
  FUN_080b6f70(&DAT_081cd0a0,param_1 + 6);
  return -1;
}


