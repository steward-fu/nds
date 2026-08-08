/*
 * Ghidra decompilation
 *
 * Function : FUN_080c18a8
 * Address  : 080c18a8
 * Program  : drastic16
 */


void FUN_080c18a8(undefined4 param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  uint local_38;
  int iStack_34;
  undefined auStack_24 [16];
  uint local_14;
  
  FUN_080a6110(auStack_24,0x40000);
  local_38 = param_3;
  iStack_34 = param_4;
  while( true ) {
    uVar1 = FUN_080a609c(auStack_24,0);
    uVar2 = FUN_080a8838(auStack_24);
    local_14 = FUN_080b5f2c(param_1,uVar1,uVar2);
    if ((local_14 == 0) || (local_14 == 0xffffffff)) break;
    if (0 < (int)(iStack_34 + (uint)(local_14 < local_38)) ==
        (SBORROW4(-iStack_34,(uint)(local_14 < local_38)) != false)) {
      local_14 = local_38;
    }
    uVar1 = FUN_080a609c(auStack_24,0);
    FUN_080b6298(param_1,uVar1,local_14);
    if (-1 < iStack_34) {
      bVar3 = local_38 < local_14;
      local_38 = local_38 - local_14;
      iStack_34 = iStack_34 - (uint)bVar3;
    }
  }
  FUN_080a60d0(auStack_24);
  return;
}


