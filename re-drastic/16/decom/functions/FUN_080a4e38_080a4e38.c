/*
 * Ghidra decompilation
 *
 * Function : FUN_080a4e38
 * Address  : 080a4e38
 * Program  : drastic16
 */


undefined4 FUN_080a4e38(int *param_1)

{
  undefined4 uVar1;
  undefined auStack_20 [16];
  
  FUN_080a5148(auStack_20,param_1);
  (**(code **)(*param_1 + 0xc))(param_1,*(code **)(*param_1 + 0xc),0,0,2);
  uVar1 = (**(code **)(*param_1 + 0x10))(param_1);
  FUN_080a51a0(auStack_20);
  return uVar1;
}


