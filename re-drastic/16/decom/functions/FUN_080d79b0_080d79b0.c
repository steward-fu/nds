/*
 * Ghidra decompilation
 *
 * Function : FUN_080d79b0
 * Address  : 080d79b0
 * Program  : drastic16
 */


undefined4 FUN_080d79b0(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined auStack_408 [1024];
  
  iVar1 = FUN_080db628(param_1,*param_2);
  if (iVar1 != 0) {
    param_2 = param_2 + 1;
    FUN_080afbc8(param_2,auStack_408,0x400);
    iVar1 = FUN_080b0b10(param_2,&DAT_080ee88c);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = FUN_080b0b10(param_2,&DAT_080ee894);
    if (iVar1 == 0) {
      *(undefined *)(param_1 + 0x4014) = 1;
    }
    iVar1 = FUN_080b0bb0(param_2,&DAT_080ee8a8,4);
    if (iVar1 == 0) {
      FUN_080d7d3c(param_1,param_2);
      FUN_080b6888(param_1 + 0xa22c,*(undefined4 *)(param_1 + 0x8020));
    }
    iVar1 = FUN_080b0bb0(param_2,&DAT_080ee8bc,2);
    if ((iVar1 == 0) && (FUN_080d7d3c(param_1,param_2), *(int *)(param_1 + 0xa22c) != 0)) {
      FUN_080b6888(param_1 + 0xa22c,*(undefined4 *)(param_1 + 0x8020));
    }
  }
  return 1;
}


