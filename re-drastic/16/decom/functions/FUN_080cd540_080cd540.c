/*
 * Ghidra decompilation
 *
 * Function : FUN_080cd540
 * Address  : 080cd540
 * Program  : drastic16
 */


void FUN_080cd540(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_080a8838(param_2 + 0x18);
  if (iVar1 != 0) {
    *(undefined4 *)(param_2 + 0x50) = *(undefined4 *)(param_1 + 0x4c50);
    uVar2 = FUN_080a609c(param_2 + 0x18,0x24);
    FUN_080e0f8c(param_1 + 59000,uVar2,*(undefined4 *)(param_1 + 0x4c50));
    uVar2 = FUN_080a609c(param_2 + 0x18,0x28);
    FUN_080e0f8c(param_1 + 59000,uVar2,*(undefined4 *)(param_1 + 0x4c54));
    FUN_080e1008(param_1 + 59000,param_2);
  }
  return;
}


