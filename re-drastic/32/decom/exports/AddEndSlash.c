/*
 * Ghidra decompilation
 *
 * Function : AddEndSlash
 * Address  : 080d3fe8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void AddEndSlash(wchar *Path,size_t MaxLength)

{
  size_t sVar1;
  size_t Length;
  
  sVar1 = wcslen((wchar_t *)Path);
  if (((sVar1 != 0) && (Path[sVar1 + 0x3fffffff] != 0x2f)) && (sVar1 + 1 < MaxLength)) {
    wcscat((wchar_t *)Path,L"/");
    return;
  }
  return;
}


