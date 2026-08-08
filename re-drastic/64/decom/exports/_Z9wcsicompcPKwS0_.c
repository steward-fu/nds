/*
 * Ghidra decompilation
 *
 * Function : _Z9wcsicompcPKwS0_
 * Address  : 001b4d30
 * Program  : drastic64
 */


/* wcsicompc(wchar_t const*, wchar_t const*) */

int wcsicompc(wchar_t *param_1,wchar_t *param_2)

{
  int iVar1;
  
  iVar1 = wcscmp(param_1,param_2);
  return iVar1;
}


