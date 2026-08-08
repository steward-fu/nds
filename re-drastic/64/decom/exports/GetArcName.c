/*
 * Ghidra decompilation
 *
 * Function : GetArcName
 * Address  : 001ea200
 * Program  : drastic64
 */


/* CommandData::GetArcName(wchar_t*, int) */

void __thiscall CommandData::GetArcName(CommandData *this,wchar_t *param_1,int param_2)

{
  StringList::GetString((StringList *)(this + 0x16860),param_1,(long)param_2);
  return;
}


