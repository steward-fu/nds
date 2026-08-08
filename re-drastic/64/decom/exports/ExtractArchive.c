/*
 * Ghidra decompilation
 *
 * Function : ExtractArchive
 * Address  : 001cacb0
 * Program  : drastic64
 */


/* WARNING: Removing unreachable block (ram,0x001cae38) */
/* WARNING: Removing unreachable block (ram,0x001cafe0) */
/* WARNING: Removing unreachable block (ram,0x001caea4) */
/* WARNING: Removing unreachable block (ram,0x001caff8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CmdExtract::ExtractArchive(CommandData*) */

undefined8 __thiscall CmdExtract::ExtractArchive(CmdExtract *this,CommandData *param_1)

{
  wchar_t *pwVar1;
  CmdExtract CVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  bool *pbVar6;
  long lVar7;
  wchar_t awStack_172c0 [2060];
  wchar_t awStack_15290 [2048];
  long lStack_13290;
  RarTime aRStack_13280 [8];
  RarTime aRStack_13278 [8];
  RarTime aRStack_13270 [16];
  Archive aAStack_13260 [32];
  undefined auStack_13240 [13888];
  undefined8 local_fc00;
  undefined auStack_3330 [4829];
  char local_2053;
  char local_204f;
  byte local_204e;
  char local_203f;
  long local_8;
  
  local_fc00 = 0;
  local_8 = ___stack_chk_guard;
  pwVar1 = (wchar_t *)(this + 0x45f4);
  Archive::Archive(aAStack_13260,(RAROptions *)param_1);
                    /* try { // try from 001cad1c to 001cb07b has its CatchHandler @ 001cb08c */
  cVar3 = File::WOpen((File *)aAStack_13260,pwVar1);
  if (cVar3 == '\0') {
    ErrorHandler::SetErrorCode((ErrorHandler *)&ErrHandler,6);
    goto LAB_001caec8;
  }
  cVar3 = Archive::IsArchive(aAStack_13260,true);
  if (cVar3 == '\0') {
    cVar3 = CmpExt(pwVar1,L"rar");
    if (cVar3 != '\0') {
      ErrorHandler::SetErrorCode((ErrorHandler *)&ErrHandler,1);
    }
    goto LAB_001caec8;
  }
  if (local_203f != '\0') goto LAB_001caec8;
  if (local_2053 != '\0') {
    if (local_204f == '\0') {
      VolNameToFirstName(pwVar1,awStack_15290,(bool)local_204e);
      iVar4 = wcsicomp(pwVar1,awStack_15290);
      if (((iVar4 != 0) && (cVar3 = FileExist(awStack_15290), cVar3 != '\0')) &&
         (cVar3 = StringList::Search((StringList *)(param_1 + 0x16860),awStack_15290,false),
         cVar3 != '\0')) goto LAB_001caec8;
      if (local_2053 == '\0') goto LAB_001cad58;
    }
    __wcscpy_chk(awStack_172c0,auStack_13240,0x800);
    lVar7 = 0;
    while( true ) {
      NextVolumeName(awStack_172c0,0x800,(bool)(local_204e ^ 1));
      RarTime::RarTime(aRStack_13280);
      RarTime::RarTime(aRStack_13278);
      RarTime::RarTime(aRStack_13270);
      cVar3 = FindFile::FastFind(awStack_172c0,(FindData *)awStack_15290,false);
      if (cVar3 == '\0') break;
      lVar7 = lVar7 + lStack_13290;
    }
    *(long *)(this + 0x20d0) = *(long *)(this + 0x20d0) + lVar7;
  }
LAB_001cad58:
  uVar5 = File::FileLength((File *)aAStack_13260);
  *(undefined8 *)(this + 0x45e0) = 0;
  *(undefined8 *)(this + 0x45e8) = 0;
  *(undefined8 *)(this + 0x20a0) = uVar5;
  this[0x45f0] = (CmdExtract)0x1;
  CVar2 = *(CmdExtract *)(param_1 + 0xa22c);
  this[0x67f8] = CVar2;
  if (CVar2 != (CmdExtract)0x0) {
    memcpy(this + 0x65f4,param_1 + 0xa02c,0x201);
  }
  this[0x2099] = (CmdExtract)0x0;
  this[0x67f9] = (CmdExtract)0x0;
  this[0x45f1] = (CmdExtract)0x1;
  *(undefined2 *)(this + 0x45f2) = 0;
  RarTime::SetCurrentTime();
  iVar4 = *(int *)(param_1 + 0x125f4);
  if ((iVar4 == 0x54 || iVar4 == 0x49) && (param_1[0xc4e1] = (CommandData)0x1, iVar4 == 0x49)) {
    param_1[0xc250] = (CommandData)0x1;
  }
  Archive::ViewComment();
  do {
    pbVar6 = (bool *)Archive::ReadHeader();
    cVar3 = ExtractCurrentFile((CommandData *)this,(Archive *)param_1,(ulong)aAStack_13260,pbVar6);
  } while (cVar3 != '\0');
LAB_001caec8:
  Archive::~Archive(aAStack_13260);
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(auStack_3330,local_8 - ___stack_chk_guard,0);
  }
  return 0;
}


