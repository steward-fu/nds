/*
 * Ghidra decompilation
 *
 * Function : FUN_080ceb2c
 * Address  : 080ceb2c
 * Program  : drastic16
 */


bool FUN_080ceb2c(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  size_t local_c;
  
  local_c = param_1[0x1e] - param_1[1];
  if ((int)local_c < 0) {
    bVar3 = false;
  }
  else {
    param_1[0x20] = param_1[0x20] + (param_1[0x22] - param_1[1]);
    if ((int)param_1[1] < 0x4001) {
      local_c = param_1[0x1e];
    }
    else {
      if (0 < (int)local_c) {
        memmove((void *)param_1[4],(void *)(param_1[4] + param_1[1]),local_c);
      }
      param_1[1] = 0;
      param_1[0x1e] = local_c;
    }
    iVar1 = FUN_080b5f2c(*param_1,param_1[4] + local_c,0x8000 - local_c);
    if (0 < iVar1) {
      param_1[0x1e] = param_1[0x1e] + iVar1;
    }
    param_1[0x1f] = param_1[0x1e] + -0x1e;
    param_1[0x22] = param_1[1];
    if (param_1[0x20] != -1) {
      iVar2 = param_1[0x22] + param_1[0x20] + -1;
      if ((int)param_1[0x1f] <= iVar2) {
        iVar2 = param_1[0x1f];
      }
      param_1[0x1f] = iVar2;
    }
    bVar3 = iVar1 != -1;
  }
  return bVar3;
}


