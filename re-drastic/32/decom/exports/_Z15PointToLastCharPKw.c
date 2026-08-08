/*
 * Ghidra decompilation
 *
 * Function : _Z15PointToLastCharPKw
 * Address  : 080d3a44
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

wchar * PointToLastChar(wchar *Path)

{
  size_t sVar1;
  size_t Length;
  
  sVar1 = wcslen((wchar_t *)Path);
  if (sVar1 != 0) {
    Path = Path + sVar1 + 0x3fffffff;
  }
  return Path;
}


