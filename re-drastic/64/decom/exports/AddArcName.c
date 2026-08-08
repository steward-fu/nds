/*
 * Ghidra decompilation
 *
 * Function : AddArcName
 * Address  : 001ea1f0
 * Program  : drastic64
 */


/* CommandData::AddArcName(wchar_t const*) */

void __thiscall CommandData::AddArcName(CommandData *this,wchar_t *param_1)

{
  StringList::AddString((StringList *)(this + 0x16860),param_1);
  return;
}


