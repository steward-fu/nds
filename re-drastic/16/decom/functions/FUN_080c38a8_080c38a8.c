/*
 * Ghidra decompilation
 *
 * Function : FUN_080c38a8
 * Address  : 080c38a8
 * Program  : drastic16
 */


undefined4 FUN_080c38a8(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined auStack_80c [2052];
  
  FUN_080afbc8(param_2,auStack_80c,0x800);
  if (*(int *)(param_1 + 0x125b0) != 0) {
    iVar1 = (**(code **)(param_1 + 0x125b0))(3,*(undefined4 *)(param_1 + 0x125ac),param_2,1);
    if (iVar1 == -1) {
      return 0;
    }
    iVar1 = (**(code **)(param_1 + 0x125b0))(0,*(undefined4 *)(param_1 + 0x125ac),auStack_80c,1);
    if (iVar1 == -1) {
      return 0;
    }
  }
  if ((*(int *)(param_1 + 0x125b4) == 0) ||
     (iVar1 = (**(code **)(param_1 + 0x125b4))(auStack_80c,1), iVar1 != 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


