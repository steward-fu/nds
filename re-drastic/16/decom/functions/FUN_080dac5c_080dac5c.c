/*
 * Ghidra decompilation
 *
 * Function : FUN_080dac5c
 * Address  : 080dac5c
 * Program  : drastic16
 */


undefined4 FUN_080dac5c(int param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_080a510c(param_1 + 0xc4a8);
  if ((iVar2 == 0) || (iVar2 = FUN_080c2a9c(param_2,param_1 + 0xc4a8), iVar2 == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    uVar3 = 1;
  }
  else {
    iVar2 = FUN_080a510c(param_1 + 0xc4b0);
    if ((iVar2 == 0) || (iVar2 = FUN_080db868(param_2,param_1 + 0xc4b0), iVar2 == 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}


