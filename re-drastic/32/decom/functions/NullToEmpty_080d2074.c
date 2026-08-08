/*
 * Ghidra decompilation
 *
 * Function : NullToEmpty
 * Address  : 080d2074
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

wchar * NullToEmpty(wchar *Str)

{
  if (Str == (wchar *)0x0) {
    Str = (wchar *)L"";
  }
  return Str;
}


