/*
 * Ghidra decompilation
 *
 * Function : ExclCheckArgs
 * Address  : 08103b24
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
  wchar CurMask [2049];
  wchar NewName [2050];
  
  iVar1 = __stack_chk_guard;
  src = ConvertPath((wchar *)(uint)Dir,(wchar *)0x0);
  StringList::Rewind((StringList *)this);
LAB_08103b84:
  do {
    bVar2 = StringList::GetString((StringList *)this,CurMask,0x800);
    if (!bVar2) goto LAB_08103bf8;
    ppwVar3 = (wchar **)PointToLastChar(CurMask);
    LastMaskChar = *ppwVar3;
    bVar2 = IsPathDiv((int)LastMaskChar);
    if (Args == (StringList *)0x0) {
      if (bVar2) {
        __wcscat_chk(CurMask,&DAT_08144c5c,0x801);
      }
    }
    else if (bVar2) {
      *ppwVar3 = (wchar *)0x0;
    }
    else {
      pwVar4 = PointToName(CurMask);
      bVar2 = IsWildcard(pwVar4);
      if (bVar2) goto LAB_08103b84;
    }
    CurName = src;
    if ((CurMask[0] == 0x2a) && (bVar2 = IsPathDiv(CurMask[1]), bVar2)) {
      NewName[0] = 0x2e;
      NewName[1] = 0x2f;
      wcsncpyz(NewName + 2,src,0x800);
      CurName = NewName;
    }
    pwVar4 = ConvertPath(CurMask,(wchar *)0x0);
    bVar2 = CmpName(pwVar4,CurName,5);
    if (bVar2) {
LAB_08103bf8:
      if (iVar1 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return bVar2;
    }
  } while( true );
}


