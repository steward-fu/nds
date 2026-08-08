/*
 * Ghidra decompilation
 *
 * Function : FUN_0809fddc
 * Address  : 0809fddc
 * Program  : drastic16
 */


undefined4 FUN_0809fddc(byte *param_1,byte *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int local_1c;
  byte *local_18;
  byte *local_14;
  
  local_1c = param_3;
  local_18 = param_2;
  local_14 = param_1;
  if (param_3 == 0) {
    uVar4 = 0;
  }
  else {
    while( true ) {
      iVar2 = toupper((uint)*local_14);
      iVar3 = toupper((uint)*local_18);
      if (iVar2 != iVar3) break;
      if ((*local_14 == 0) || (local_1c = local_1c + -1, local_1c == 0)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        return 0;
      }
      local_14 = local_14 + 1;
      local_18 = local_18 + 1;
    }
    if (local_14 < local_18) {
      uVar4 = 0xffffffff;
    }
    else {
      uVar4 = 1;
    }
  }
  return uVar4;
}


