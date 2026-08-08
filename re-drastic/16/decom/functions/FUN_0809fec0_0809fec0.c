/*
 * Ghidra decompilation
 *
 * Function : FUN_0809fec0
 * Address  : 0809fec0
 * Program  : drastic16
 */


wchar_t * FUN_0809fec0(wchar_t *param_1)

{
  size_t local_c;
  
  local_c = wcslen(param_1);
  while ((local_c = local_c - 1, -1 < (int)local_c &&
         ((((param_1[local_c] == L'\r' || (param_1[local_c] == L'\n')) || (param_1[local_c] == L' ')
           ) || (param_1[local_c] == L'\t'))))) {
    param_1[local_c] = L'\0';
  }
  return param_1;
}


