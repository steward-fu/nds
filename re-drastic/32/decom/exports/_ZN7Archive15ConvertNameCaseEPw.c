/*
 * Ghidra decompilation
 *
 * Function : _ZN7Archive15ConvertNameCaseEPw
 * Address  : 080db510
 * Program  : drastic
 */


/* DWARF original prototype: void ConvertNameCase(Archive * this, wchar * Name) */

void __thiscall Archive::ConvertNameCase(Archive *this,wchar *Name)

{
  int iVar1;
  
  iVar1 = this->Cmd->ConvertNames;
  if (iVar1 == 1) {
    wcsupper(Name);
    iVar1 = this->Cmd->ConvertNames;
  }
  if (iVar1 != 2) {
    return;
  }
  wcslower(Name);
  return;
}


