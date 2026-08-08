/*
 * Ghidra decompilation
 *
 * Function : DoExtract
 * Address  : 001cb0a0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CmdExtract::DoExtract(CommandData*) */

void __thiscall CmdExtract::DoExtract(CmdExtract *this,CommandData *param_1)

{
  wchar_t *pwVar1;
  char cVar2;
  int iVar3;
  SecPassword aSStack_2240 [520];
  FindData aFStack_2038 [8192];
  long local_38;
  RarTime aRStack_28 [8];
  RarTime aRStack_20 [8];
  RarTime aRStack_18 [16];
  long local_8;
  
  this[0x87fc] = (CmdExtract)0x0;
  pwVar1 = (wchar_t *)(this + 0x45f4);
  *(undefined4 *)(this + 0x2094) = *(undefined4 *)(param_1 + 0x125f4);
  local_8 = ___stack_chk_guard;
  RarTime::RarTime(aRStack_28);
  RarTime::RarTime(aRStack_20);
  RarTime::RarTime(aRStack_18);
  while (cVar2 = CommandData::GetArcName(param_1,pwVar1,0x800), cVar2 != '\0') {
    cVar2 = FindFile::FastFind(pwVar1,aFStack_2038,false);
    if (cVar2 != '\0') {
      *(long *)(this + 0x20d0) = *(long *)(this + 0x20d0) + local_38;
    }
  }
  StringList::Rewind();
  while (cVar2 = CommandData::GetArcName(param_1,pwVar1,0x800), cVar2 != '\0') {
    while( true ) {
      while( true ) {
        SecPassword::SecPassword(aSStack_2240);
        memcpy(aSStack_2240,param_1 + 0xa02c,0x201);
                    /* try { // try from 001cb1b0 to 001cb1b3 has its CatchHandler @ 001cb2a0 */
        iVar3 = ExtractArchive(this,param_1);
        memcpy(param_1 + 0xa02c,aSStack_2240,0x201);
        if (iVar3 != 1) break;
        SecPassword::~SecPassword(aSStack_2240);
      }
      SecPassword::~SecPassword(aSStack_2240);
      cVar2 = FindFile::FastFind(pwVar1,aFStack_2038,false);
      if (cVar2 == '\0') break;
      *(long *)(this + 0x20c8) = *(long *)(this + 0x20c8) + local_38;
      cVar2 = CommandData::GetArcName(param_1,pwVar1,0x800);
      if (cVar2 == '\0') goto LAB_001cb218;
    }
  }
LAB_001cb218:
  if (((*(long *)(this + 0x45d8) == 0) && (*(int *)(param_1 + 0x125f4) != 0x49)) &&
     (ErrHandler != 0xb)) {
    ErrorHandler::SetErrorCode((ErrorHandler *)&ErrHandler,10);
  }
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_8 - ___stack_chk_guard,0);
  }
  return;
}


