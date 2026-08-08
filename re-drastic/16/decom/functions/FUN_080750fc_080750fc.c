/*
 * Ghidra decompilation
 *
 * Function : FUN_080750fc
 * Address  : 080750fc
 * Program  : drastic16
 */


void FUN_080750fc(undefined4 *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if (*(char *)(param_2 + 0x2239) == '\x04') {
    iVar1 = *(int *)(param_2 + 0x2218);
    if (*(int *)(param_2 + 0x221c) != 0 || iVar1 != 1) {
      uVar2 = *(uint *)(param_2 + 0x2210);
      *(int *)(param_2 + 0x2218) = iVar1 + -1;
      *(uint *)(param_2 + 0x221c) = *(int *)(param_2 + 0x221c) - (uint)(iVar1 == 0);
      *(uint *)(param_2 + 0x2210) = uVar2 + 1;
      *(uint *)(param_2 + 0x2214) = *(int *)(param_2 + 0x2214) + (uint)(0xfffffffe < uVar2);
      return;
    }
  }
  DAT_081c5048 = param_1;
  FUN_080725a8(param_2 + 0x2108,*param_1,*(undefined4 *)(param_2 + 0x2268));
  return;
}


