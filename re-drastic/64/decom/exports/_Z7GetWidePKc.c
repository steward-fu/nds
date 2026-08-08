/*
 * Ghidra decompilation
 *
 * Function : _Z7GetWidePKc
 * Address  : 001b52e0
 * Program  : drastic64
 */


/* GetWide(char const*) */

wchar_t * GetWide(char *param_1)

{
  ulong uVar1;
  
  GetWide(char_const*)::StrNum = GetWide(char_const*)::StrNum + 1;
  uVar1 = (ulong)GetWide(char_const*)::StrNum;
  if (GetWide(char_const*)::StrNum < 4) {
    CharToWide(param_1,(wchar_t *)(GetWide(char_const*)::StrTable + uVar1 * 0x2000),0x800);
    *(undefined4 *)(GetWide(char_const*)::StrTable + uVar1 * 0x2000 + 0x1ffc) = 0;
    return (wchar_t *)(GetWide(char_const*)::StrTable + uVar1 * 0x2000);
  }
  GetWide(char_const*)::StrNum = 0;
  CharToWide(param_1,(wchar_t *)GetWide(char_const*)::StrTable,0x800);
  GetWide(char_const*)::StrTable._8188_4_ = 0;
  return (wchar_t *)GetWide(char_const*)::StrTable;
}


