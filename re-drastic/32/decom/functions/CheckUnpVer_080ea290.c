/*
 * Ghidra decompilation
 *
 * Function : CheckUnpVer
 * Address  : 080ea290
 * Program  : drastic
 */


/* DWARF original prototype: bool CheckUnpVer(CmdExtract * this, Archive * Arc, wchar * ArcFileName)
    */

bool __thiscall CmdExtract::CheckUnpVer(CmdExtract *this,Archive *Arc,wchar *ArcFileName)

{
  bool WrongVer;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  WrongVer = (bool)(Arc->FileHead).UnpVer;
  if (Arc->Format == RARFMT50) {
    if (WrongVer != 0) {
      WrongVer = true;
    }
  }
  else {
    uVar2 = WrongVer - 0xd;
    uVar3 = uVar2;
    if (uVar2 < 0x11) {
      uVar3 = 0;
    }
    WrongVer = SUB41(uVar3,0);
    if (0x10 < uVar2) {
      WrongVer = true;
    }
  }
  if ((Arc->FileHead).Method == '\0') {
    bVar1 = 1;
  }
  else {
    bVar1 = WrongVer ^ 1;
  }
  return (bool)bVar1;
}


