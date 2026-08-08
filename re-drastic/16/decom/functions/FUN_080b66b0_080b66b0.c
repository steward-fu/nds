/*
 * Ghidra decompilation
 *
 * Function : FUN_080b66b0
 * Address  : 080b66b0
 * Program  : drastic16
 */


void FUN_080b66b0(int param_1,char param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  undefined uVar1;
  
  if (param_2 == '\0') {
    uVar1 = FUN_080b38d8(param_1 + 0x1048,0,param_3,param_4,param_5,param_6,param_7,param_9,param_8)
    ;
    *(undefined *)(param_1 + 0x42c5) = uVar1;
  }
  else {
    uVar1 = FUN_080b38d8(param_1 + 0x40,1,param_3,param_4,param_5,param_6,param_7,param_9,param_8);
    *(undefined *)(param_1 + 0x42c4) = uVar1;
  }
  return;
}


