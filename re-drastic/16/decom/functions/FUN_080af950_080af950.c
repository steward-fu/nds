/*
 * Ghidra decompilation
 *
 * Function : FUN_080af950
 * Address  : 080af950
 * Program  : drastic16
 */


bool FUN_080af950(int param_1,wchar_t *param_2)

{
  int iVar1;
  
  iVar1 = wcscmp((wchar_t *)(param_1 + 0x20),param_2);
  return iVar1 == 0;
}


