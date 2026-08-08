/*
 * Ghidra decompilation
 *
 * Function : FUN_080e2860
 * Address  : 080e2860
 * Program  : drastic16
 */


uint FUN_080e2860(int param_1,char param_2,uint *param_3)

{
  uint uVar1;
  
  if (param_2 == '\0') {
    if ((param_3 < *(uint **)(param_1 + 0x10)) ||
       ((uint *)(*(int *)(param_1 + 0x10) + 0x40000) <= param_3)) {
      uVar1 = *param_3;
    }
    else {
      uVar1 = *param_3;
    }
  }
  else {
    uVar1 = (uint)*(byte *)param_3;
  }
  return uVar1;
}


