/*
 * Ghidra decompilation
 *
 * Function : FUN_080593f4
 * Address  : 080593f4
 * Program  : drastic16
 */


void FUN_080593f4(int param_1,int param_2,byte param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1 + param_2 * 0x20;
  *(byte *)(iVar3 + 0x40bb0) = param_3;
  if ((param_3 & 0x80) == 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x40bd8);
  *(uint *)(iVar3 + 0x40ba8) =
       **(int **)(param_1 + 0x40bdc) + (*(uint *)(iVar2 + (param_2 + 0x22) * 8) & 0x3fffff);
  uVar1 = *(ushort *)(iVar2 + (param_2 + 0x22) * 8 + 4);
  *(undefined8 *)(iVar3 + 0x40b98) = 0;
  *(uint *)(iVar3 + 0x40bac) = (uint)uVar1 << 1;
  return;
}


