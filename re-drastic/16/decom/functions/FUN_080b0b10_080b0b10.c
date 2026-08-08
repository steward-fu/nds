/*
 * Ghidra decompilation
 *
 * Function : FUN_080b0b10
 * Address  : 080b0b10
 * Program  : drastic16
 */


undefined4 FUN_080b0b10(wint_t *param_1,wint_t *param_2)

{
  wint_t wVar1;
  wint_t wVar2;
  undefined4 uVar3;
  wint_t *local_18;
  wint_t *local_14;
  
  local_18 = param_2;
  local_14 = param_1;
  while( true ) {
    wVar1 = towupper(*local_14);
    wVar2 = towupper(*local_18);
    if (wVar1 != wVar2) {
      if (local_14 < local_18) {
        uVar3 = 0xffffffff;
      }
      else {
        uVar3 = 1;
      }
      return uVar3;
    }
    if (*local_14 == 0) break;
    local_14 = local_14 + 1;
    local_18 = local_18 + 1;
  }
  return 0;
}


