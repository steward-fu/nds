/*
 * Ghidra decompilation
 *
 * Function : FUN_0809fd3c
 * Address  : 0809fd3c
 * Program  : drastic16
 */


undefined4 FUN_0809fd3c(byte *param_1,byte *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  byte *local_18;
  byte *local_14;
  
  local_18 = param_2;
  local_14 = param_1;
  while( true ) {
    iVar1 = toupper((uint)*local_14);
    iVar2 = toupper((uint)*local_18);
    if (iVar1 != iVar2) {
      if (local_14 < local_18) {
        uVar3 = 0xffffffff;
      }
      else {
        uVar3 = 1;
      }
      return uVar3;
    }
    if (*local_14 == 0) break;
    local_14 = local_14 + 1;
    local_18 = local_18 + 1;
  }
  return 0;
}


