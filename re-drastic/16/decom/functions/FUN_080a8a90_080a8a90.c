/*
 * Ghidra decompilation
 *
 * Function : FUN_080a8a90
 * Address  : 080a8a90
 * Program  : drastic16
 */


int FUN_080a8a90(undefined4 param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint local_c;
  
  local_c = 0;
  while( true ) {
    iVar2 = FUN_080a8970(param_1);
    if ((iVar2 == 0) || ((param_2 != 5 && (iVar3 = FUN_0809ee40(param_1), iVar3 == 5)))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) break;
    local_c = local_c + 1;
    if ((local_c & 0x7f) == 0) {
      FUN_080b0edc();
    }
    iVar3 = FUN_0809ee40(param_1);
    if (iVar3 == param_2) {
      return iVar2;
    }
    FUN_080a82d0(param_1);
  }
  return 0;
}


