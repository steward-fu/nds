/*
 * Ghidra decompilation
 *
 * Function : FUN_080b75ec
 * Address  : 080b75ec
 * Program  : drastic16
 */


void FUN_080b75ec(undefined4 param_1,void *param_2,uint param_3,void *param_4,uint param_5,
                 undefined param_6)

{
  uint uVar1;
  
  uVar1 = param_5;
  if (param_3 < param_5) {
    uVar1 = param_3;
  }
  memcpy(param_4,param_2,uVar1 << 2);
  FUN_080b7888(param_4,param_5 << 2,param_6);
  return;
}


