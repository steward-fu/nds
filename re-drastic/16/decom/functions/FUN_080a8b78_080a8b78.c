/*
 * Ghidra decompilation
 *
 * Function : FUN_080a8b78
 * Address  : 080a8b78
 * Program  : drastic16
 */


int FUN_080a8b78(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  while( true ) {
    iVar1 = FUN_080a8970(param_1);
    if ((iVar1 == 0) || (iVar2 = FUN_0809ee40(param_1), iVar2 == 5)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) {
      return 0;
    }
    iVar2 = FUN_0809ee40(param_1);
    if ((iVar2 == 3) && (iVar2 = FUN_080af950(param_1 + 0xc770,param_2), iVar2 != 0)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) break;
    FUN_080a82d0(param_1);
  }
  return iVar1;
}


