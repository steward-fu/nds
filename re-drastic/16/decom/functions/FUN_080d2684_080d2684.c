/*
 * Ghidra decompilation
 *
 * Function : FUN_080d2684
 * Address  : 080d2684
 * Program  : drastic16
 */


int FUN_080d2684(ushort *param_1)

{
  int iVar1;
  
  iVar1 = (int)(uint)*param_1 >> *(sbyte *)(param_1 + 1);
  *param_1 = *param_1 - (short)iVar1;
  return (uint)(iVar1 == 0) + iVar1;
}


