/*
 * Ghidra decompilation
 *
 * Function : _ZN11CommandData10AddArcNameEPKw
 * Address  : 08106150
 * Program  : drastic
 */


/* DWARF original prototype: void AddArcName(CommandData * this, wchar * Name) */

void __thiscall CommandData::AddArcName(CommandData *this,wchar *Name)

{
  StringList::AddString(&this->ArcNames,Name);
  return;
}


