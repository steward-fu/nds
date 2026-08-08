/*
 * Ghidra decompilation
 *
 * Function : FUN_080cca98
 * Address  : 080cca98
 * Program  : drastic16
 */


bool FUN_080cca98(undefined4 *param_1)

{
  int iVar1;
  bool bVar2;
  size_t local_c;
  
  local_c = param_1[0x1e] - param_1[1];
  if ((int)local_c < 0) {
    bVar2 = false;
  }
  else {
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
    bVar2 = iVar1 != -1;
  }
  return bVar2;
}


