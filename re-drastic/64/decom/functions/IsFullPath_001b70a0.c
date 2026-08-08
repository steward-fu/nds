/*
 * Ghidra decompilation
 *
 * Function : IsFullPath
 * Address  : 001b70a0
 * Program  : drastic64
 */


/* IsFullPath(wchar_t const*) */

bool IsFullPath(wchar_t *param_1)

{
  return *param_1 == L'/';
}


