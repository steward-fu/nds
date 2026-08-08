/*
 * Ghidra decompilation
 *
 * Function : FUN_080a16f4
 * Address  : 080a16f4
 * Program  : drastic16
 */


void FUN_080a16f4(undefined4 param_1,undefined4 *param_2,undefined4 param_3,char param_4,
                 undefined param_5)

{
  bool bVar1;
  int iVar2;
  int local_c;
  
  *param_2 = 0;
  local_c = 0;
  while( true ) {
    iVar2 = FUN_080a1620(local_c,param_2,param_3,param_5);
    if (iVar2 == 0) {
      return;
    }
    FUN_080a1368(param_2,param_3);
    FUN_080a06f0(param_2,param_1,param_3);
    if ((param_4 == '\x01') && (iVar2 = FUN_080a5770(param_2), iVar2 == 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) break;
    local_c = local_c + 1;
  }
  return;
}


