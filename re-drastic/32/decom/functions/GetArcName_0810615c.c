/*
 * Ghidra decompilation
 *
 * Function : GetArcName
 * Address  : 0810615c
 * Program  : drastic
 */


/* DWARF original prototype: bool GetArcName(CommandData * this, wchar * Name, int MaxSize) */

bool __thiscall CommandData::GetArcName(CommandData *this,wchar *Name,int MaxSize)

{
  bool bVar1;
  
  bVar1 = StringList::GetString(&this->ArcNames,Name,MaxSize);
  return bVar1;
}


