/*
 * Ghidra decompilation
 *
 * Function : ProcessCommand
 * Address  : 001e9fb0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CommandData::ProcessCommand() */

void CommandData::ProcessCommand(void)

{
  wchar_t *pwVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  CommandData *in_x0;
  long lVar5;
  wchar_t *pwVar6;
  void *local_a8f0 [23];
  wchar_t awStack_a838 [2052];
  RarTime aRStack_8828 [8];
  RarTime aRStack_8820 [8];
  RarTime aRStack_8818 [16];
  ScanTree aSStack_8808 [24280];
  undefined auStack_2930 [10536];
  long local_8;
  
  pwVar1 = (wchar_t *)(in_x0 + 0x14634);
  local_8 = ___stack_chk_guard;
  lVar5 = GetExt(pwVar1);
  if (lVar5 == 0) {
    cVar2 = FileExist(pwVar1);
    if (cVar2 != '\0') {
      uVar4 = GetFileAttr(pwVar1);
      cVar2 = IsDir(uVar4);
      if (cVar2 == '\0') goto LAB_001e9ffc;
    }
    wcsncatz(pwVar1,L".rar",0x800);
  }
LAB_001e9ffc:
  pwVar6 = wcschr(L"AFUMD",*(wchar_t *)(in_x0 + 0x125f4));
  if (pwVar6 == (wchar_t *)0x0) {
    if (in_x0[0xc2b7] != (CommandData)0x0) {
      GenerateArchiveName(pwVar1,0x800,(wchar_t *)(in_x0 + 0xc2b8),false);
    }
    StringList::StringList((StringList *)local_a8f0);
                    /* try { // try from 001ea0a4 to 001ea0c7 has its CatchHandler @ 001ea1b8 */
    StringList::AddString((StringList *)local_a8f0,pwVar1);
    ScanTree::ScanTree(aSStack_8808,(StringList *)local_a8f0,*(RECURSE_MODE *)(in_x0 + 0xc268),
                       (bool)in_x0[0xc2a9],0);
                    /* try { // try from 001ea0d4 to 001ea113 has its CatchHandler @ 001ea1c0 */
    RarTime::RarTime(aRStack_8828);
    RarTime::RarTime(aRStack_8820);
    RarTime::RarTime(aRStack_8818);
    while (iVar3 = ScanTree::GetNext(aSStack_8808,(FindData *)awStack_a838), iVar3 == 0) {
      StringList::AddString((StringList *)(in_x0 + 0x16860),awStack_a838);
    }
    ScanTree::~ScanTree(aSStack_8808);
    if (local_a8f0[0] != (void *)0x0) {
      free(local_a8f0[0]);
    }
  }
  else {
    StringList::AddString((StringList *)(in_x0 + 0x16860),pwVar1);
  }
  if ((*(int *)(in_x0 + 0x125f4) - 0x45U < 0x14) &&
     ((1L << ((ulong)(*(int *)(in_x0 + 0x125f4) - 0x45U) & 0x3f) & 0x88811U) != 0)) {
    CmdExtract::CmdExtract((CmdExtract *)aSStack_8808,in_x0);
                    /* try { // try from 001ea14c to 001ea14f has its CatchHandler @ 001ea1dc */
    CmdExtract::DoExtract((CmdExtract *)aSStack_8808,in_x0);
    CmdExtract::~CmdExtract((CmdExtract *)aSStack_8808);
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(auStack_2930,local_8 - ___stack_chk_guard,0);
}


