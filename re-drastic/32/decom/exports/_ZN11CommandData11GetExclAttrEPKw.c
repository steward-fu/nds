/*
 * Ghidra decompilation
 *
 * Function : _ZN11CommandData11GetExclAttrEPKw
 * Address  : 08106178
 * Program  : drastic
 */


/* DWARF original prototype: uint GetExclAttr(CommandData * this, wchar * Str) */

uint __thiscall CommandData::GetExclAttr(CommandData *this,wchar *Str)

{
  uint uVar1;
  bool bVar2;
  uint ch;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  bVar2 = IsDigit(*Str);
  if (bVar2) {
    uVar4 = wcstol((wchar_t *)Str,(wchar_t **)0x0,0);
    return uVar4;
  }
  uVar5 = 0;
  ch = *Str;
  uVar1 = ch;
  while (ch != 0) {
    iVar3 = toupperw(ch);
    if (iVar3 == 0x44) {
      uVar5 = uVar5 | 0x4000;
    }
    else if (iVar3 == 0x56) {
      uVar5 = uVar5 | 0x2000;
    }
    Str = Str + 1;
    uVar1 = uVar5;
    ch = *Str;
  }
  return uVar1;
}


