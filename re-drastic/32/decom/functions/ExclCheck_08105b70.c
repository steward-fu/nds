/*
 * Ghidra decompilation
 *
 * Function : ExclCheck
 * Address  : 08105b70
 * Program  : drastic
 */


/* DWARF original prototype: bool ExclCheck(CommandData * this, wchar * CheckName, bool Dir, bool
   CheckFullPath, bool CheckInclList) */

bool __thiscall
CommandData::ExclCheck
          (CommandData *this,wchar *CheckName,bool Dir,bool CheckFullPath,bool CheckInclList)

{
  bool bVar1;
  wchar *CheckName_00;
  int MatchMode;
  
  MatchMode = 5;
  bVar1 = ExclCheckArgs(this,&this->ExclArgs,Dir,CheckName,CheckFullPath,5);
  if (((!bVar1) && (CheckInclList)) &&
     (CheckName_00 = (wchar *)(this->InclArgs).StringsCount, CheckName_00 != (wchar *)0x0)) {
    bVar1 = ExclCheckArgs((CommandData *)&this->InclArgs,(StringList *)(uint)Dir,SUB41(CheckName,0),
                          CheckName_00,CheckFullPath,MatchMode);
    bVar1 = !bVar1;
  }
  return bVar1;
}


