/*
 * Ghidra decompilation
 *
 * Function : FUN_0020614c
 * Address  : 0020614c
 * Program  : drastic64
 */


undefined8 FUN_0020614c(undefined8 param_1,undefined8 *param_2,ulong param_3)

{
  undefined8 uVar1;
  
  if (param_3 <= (ulong)param_2[2]) {
    return *param_2;
  }
  if (param_3 < 0x20) {
    param_3 = 0x20;
  }
  uVar1 = luaM_realloc_();
  *param_2 = uVar1;
  param_2[2] = param_3;
  return uVar1;
}


