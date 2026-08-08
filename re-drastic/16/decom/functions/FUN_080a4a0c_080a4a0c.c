/*
 * Ghidra decompilation
 *
 * Function : FUN_080a4a0c
 * Address  : 080a4a0c
 * Program  : drastic16
 */


undefined4 FUN_080a4a0c(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_stack_ffffffe4;
  
  if (param_1[1] == 0) {
    uVar2 = 1;
  }
  else {
    if ((param_4 < 0) && (param_5 != 0)) {
      if (param_5 == 1) {
        (**(code **)(*param_1 + 0x10))(param_1);
      }
      else {
        FUN_080a4e38(param_1);
      }
      param_5 = 0;
    }
    *(undefined *)(param_1 + 2) = 0;
    iVar1 = fseeko64((FILE *)param_1[1],CONCAT44(in_stack_ffffffe4,param_5),param_4);
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}


