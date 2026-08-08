/*
 * Ghidra decompilation
 *
 * Function : FUN_080b7044
 * Address  : 080b7044
 * Program  : drastic16
 */


void FUN_080b7044(undefined4 param_1,wchar_t *param_2,undefined4 param_3,undefined4 param_4)

{
  wchar_t awStack_101c [1024];
  undefined4 *local_1c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_1c = &uStack_8;
  uStack_8 = param_3;
  uStack_4 = param_4;
  vswprintf(awStack_101c,0x400,param_2,local_1c);
  return;
}


