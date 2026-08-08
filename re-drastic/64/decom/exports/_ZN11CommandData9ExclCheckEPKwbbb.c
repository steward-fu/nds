/*
 * Ghidra decompilation
 *
 * Function : _ZN11CommandData9ExclCheckEPKwbbb
 * Address  : 001e9ce0
 * Program  : drastic64
 */


/* CommandData::ExclCheck(wchar_t const*, bool, bool, bool) */

byte __thiscall
CommandData::ExclCheck(CommandData *this,wchar_t *param_1,bool param_2,bool param_3,bool param_4)

{
  byte bVar1;
  
  bVar1 = ExclCheckArgs(this,(StringList *)(this + 0x166f0),param_2,param_1,param_3,5);
  if (((bVar1 == 0) && (param_4)) && (*(int *)(this + 0x167d0) != 0)) {
    bVar1 = ExclCheckArgs(this,(StringList *)(this + 0x167a8),param_2,param_1,false,5);
    bVar1 = bVar1 ^ 1;
  }
  return bVar1;
}


