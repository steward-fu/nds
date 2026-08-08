/*
 * Ghidra decompilation
 *
 * Function : _Z7GetWidePKc
 * Address  : 080d2f48
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

wchar * GetWide(char *Src)

{
  uint uVar1;
  uint uVar2;
  uint in_r1;
  uint uVar3;
  wchar *Str;
  
  uVar3 = GetWide::StrNum + 1;
  uVar1 = uVar3;
  uVar2 = uVar3;
  if (3 < uVar3) {
    in_r1 = 0;
    uVar1 = in_r1;
    uVar2 = GetWide::StrNum;
  }
  GetWide::StrNum = uVar2;
  if (3 < uVar3) {
    GetWide::StrNum = in_r1;
  }
  CharToWide(Src,GetWide::StrTable[uVar1],0x800);
  GetWide::StrTable[uVar1][0x7ff] = 0;
  return GetWide::StrTable[uVar1];
}


