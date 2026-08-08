/*
 * Ghidra decompilation
 *
 * Function : FUN_080d2b48
 * Address  : 080d2b48
 * Program  : drastic16
 */


void FUN_080d2b48(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int local_10;
  uint local_c;
  
  local_c = (uint)*(byte *)(param_1 + param_3 + 4) - (uint)*(byte *)(param_1 + param_4 + 4);
  local_10 = FUN_080d2ad4(param_1,*(undefined *)(param_1 + param_4 + 4));
  local_10 = param_2 + local_10;
  uVar1 = (uint)*(byte *)(param_1 + local_c + 0x29);
  if (*(byte *)(param_1 + uVar1 + 4) != local_c) {
    iVar2 = uVar1 - 1;
    FUN_080d2a30(param_1,local_10,iVar2);
    uVar1 = (uint)*(byte *)(param_1 + iVar2 + 4);
    iVar2 = FUN_080d2ad4(param_1,uVar1);
    local_10 = local_10 + iVar2;
    local_c = local_c - uVar1;
  }
  FUN_080d2a30(param_1,local_10,*(undefined *)(param_1 + local_c + 0x29));
  return;
}


