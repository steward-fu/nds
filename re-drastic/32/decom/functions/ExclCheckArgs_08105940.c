/*
 * Ghidra decompilation
 *
 * Function : ExclCheckArgs
 * Address  : 08105940
 * Program  : drastic
 */


/* DWARF original prototype: bool ExclCheckArgs(CommandData * this, StringList * Args, bool Dir,
   wchar * CheckName, bool CheckFullPath, int MatchMode) */

bool __thiscall
CommandData::ExclCheckArgs
          (CommandData *this,StringList *Args,bool Dir,wchar *CheckName,bool CheckFullPath,
          int MatchMode)

{
  int iVar1;
  bool DirMask;
  wchar *src;
  wchar *Name;
  bool bVar2;
  wchar **ppwVar3;
  wchar *LastMaskChar;
  wchar *pwVar4;
  wchar *CurName;
  wchar FullName [2048];
  wchar CurMask [2049];
  wchar NewName [2050];
  
  iVar1 = __stack_chk_guard;
  src = ConvertPath(CheckName,(wchar *)0x0);
  FullName[0] = 0;
  StringList::Rewind(Args);
LAB_081059d0:
  do {
    while( true ) {
      bVar2 = StringList::GetString(Args,CurMask,0x800);
      if (!bVar2) goto LAB_08105a58;
      ppwVar3 = (wchar **)PointToLastChar(CurMask);
      LastMaskChar = *ppwVar3;
      bVar2 = IsPathDiv((int)LastMaskChar);
      if (Dir) break;
      if (!bVar2) goto LAB_08105a1c;
      __wcscat_chk(CurMask,&DAT_08144c5c,0x801);
      if (CheckFullPath) goto LAB_08105abc;
LAB_08105a24:
      CurName = src;
      if ((CurMask[0] == 0x2a) && (bVar2 = IsPathDiv(CurMask[1]), bVar2)) {
        NewName[0] = 0x2e;
        NewName[1] = 0x2f;
        wcsncpyz(NewName + 2,src,0x800);
        CurName = NewName;
      }
      pwVar4 = ConvertPath(CurMask,(wchar *)0x0);
      bVar2 = CmpName(pwVar4,CurName,MatchMode);
      if (bVar2) goto LAB_08105a58;
    }
    if (bVar2) {
      *ppwVar3 = (wchar *)0x0;
    }
    else {
      pwVar4 = PointToName(CurMask);
      bVar2 = IsWildcard(pwVar4);
      if (bVar2) goto LAB_081059d0;
    }
LAB_08105a1c:
    if (!CheckFullPath) goto LAB_08105a24;
LAB_08105abc:
    bVar2 = IsFullPath(CurMask);
    if (!bVar2) goto LAB_08105a24;
    if (FullName[0] == 0) {
      ConvertNameToFull(CheckName,FullName,0x800);
    }
    bVar2 = CmpName(CurMask,FullName,MatchMode);
    if (bVar2) {
LAB_08105a58:
      if (iVar1 == __stack_chk_guard) {
        return bVar2;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}


