/*
 * Ghidra decompilation
 *
 * Function : _Z14InitLogOptionsPKw11RAR_CHARSET
 * Address  : 001c3650
 * Program  : drastic64
 */


/* InitLogOptions(wchar_t const*, RAR_CHARSET) */

void InitLogOptions(wchar_t *param_1,RAR_CHARSET param_2)

{
  wcsncpyz((wchar_t *)&LogName,param_1,0x800);
  return;
}


