/*
 * Ghidra decompilation
 *
 * Function : FUN_080da7a8
 * Address  : 080da7a8
 * Program  : drastic16
 */


undefined4
FUN_080da7a8(int param_1,undefined4 param_2,undefined param_3,undefined param_4,char param_5)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_080da8ac(param_1,param_1 + 0x16664,param_3,param_2,param_4,5);
  if (iVar2 == 0) {
    if ((param_5 == '\x01') && (iVar2 = FUN_080c2b04(param_1 + 0x166c0), iVar2 != 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar3 = 0;
    }
    else {
      iVar2 = FUN_080da8ac(param_1,param_1 + 0x166c0,param_3,param_2,0,5);
      if (iVar2 == 0) {
        uVar3 = 1;
      }
      else {
        uVar3 = 0;
      }
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}


