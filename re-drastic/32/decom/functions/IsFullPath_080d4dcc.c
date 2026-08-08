/*
 * Ghidra decompilation
 *
 * Function : IsFullPath
 * Address  : 080d4dcc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

bool IsFullPath(wchar *Path)

{
  return *Path == 0x2f;
}


