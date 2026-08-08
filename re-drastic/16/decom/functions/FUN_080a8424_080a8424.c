/*
 * Ghidra decompilation
 *
 * Function : FUN_080a8424
 * Address  : 080a8424
 * Program  : drastic16
 */


void FUN_080a8424(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined8 uVar1;
  
  uVar1 = FUN_080df624(param_1 + 0x7320,param_2,param_3,param_4,param_5);
  if ((((uint)uVar1 ^ 1) & 0xff) != 0) {
    FUN_080a498c(param_1,(int)((ulonglong)uVar1 >> 0x20),param_3,param_4,param_5);
  }
  return;
}


