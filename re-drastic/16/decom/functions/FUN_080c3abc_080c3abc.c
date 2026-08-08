/*
 * Ghidra decompilation
 *
 * Function : FUN_080c3abc
 * Address  : 080c3abc
 * Program  : drastic16
 */


void FUN_080c3abc(wchar_t *param_1,wchar_t *param_2)

{
  wcscpy(param_1,param_2);
  *(undefined *)(param_1 + 0x800) = 1;
  return;
}


