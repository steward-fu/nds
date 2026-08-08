/*
 * Ghidra decompilation
 *
 * Function : FUN_080b0bb0
 * Address  : 080b0bb0
 * Program  : drastic16
 */


undefined4 FUN_080b0bb0(wint_t *param_1,wint_t *param_2,int param_3)

{
  bool bVar1;
  wint_t wVar2;
  wint_t wVar3;
  undefined4 uVar4;
  int local_1c;
  wint_t *local_18;
  wint_t *local_14;
  
  local_1c = param_3;
  local_18 = param_2;
  local_14 = param_1;
  if (param_3 == 0) {
    uVar4 = 0;
  }
  else {
    while( true ) {
      wVar2 = towupper(*local_14);
      wVar3 = towupper(*local_18);
      if (wVar2 != wVar3) break;
      if ((*local_14 == 0) || (local_1c = local_1c + -1, local_1c == 0)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        return 0;
      }
      local_14 = local_14 + 1;
      local_18 = local_18 + 1;
    }
    if (local_14 < local_18) {
      uVar4 = 0xffffffff;
    }
    else {
      uVar4 = 1;
    }
  }
  return uVar4;
}


