/*
 * Ghidra decompilation
 *
 * Function : ParseArg
 * Address  : 0810382c
 * Program  : drastic
 */


/* DWARF original prototype: void ParseArg(CommandData * this, wchar * Arg) */

void __thiscall CommandData::ParseArg(CommandData *this,wchar *Arg)

{
  int iVar1;
  bool bVar3;
  bool Found;
  bool Config;
  wchar wVar4;
  size_t sVar5;
  size_t Length;
  bool bVar2;
  wchar_t __wc;
  wchar CmdChar;
  wchar_t *pwVar6;
  bool Add;
  wchar *dest;
  bool Extract;
  FindData FileData;
  
  iVar1 = __stack_chk_guard;
  if (this->Command[0] == 0) {
    wcsncpy((wchar_t *)this->Command,(wchar_t *)Arg,0x810);
    wVar4 = toupperw(this->Command[0]);
    this->Command[0] = wVar4;
    if (wVar4 != 0x49 && wVar4 != 0x53) {
      wcsupper(this->Command);
    }
    goto LAB_0810389c;
  }
  if (this->ArcName[0] == 0) {
    wcsncpyz(this->ArcName,Arg,0x800);
    goto LAB_0810389c;
  }
  sVar5 = wcslen((wchar_t *)Arg);
  if (sVar5 == 0) {
    wVar4 = 0;
  }
  else {
    wVar4 = Arg[sVar5 + 0x3fffffff];
  }
  bVar2 = IsDriveDiv(wVar4);
  if ((bVar2) || (bVar2 = IsPathDiv(wVar4), bVar2)) {
    __wc = toupperw(this->Command[0]);
    bVar2 = __wc == L'E' || __wc == L'X';
    pwVar6 = wcschr(L"AFUM",__wc);
    if (pwVar6 == (wchar_t *)0x0) {
      wcsncpyz((this->super_RAROptions).ExtrPath,Arg,0x800);
      goto LAB_0810389c;
    }
    pwVar6 = (wchar_t *)0x1;
  }
  else {
    __wc = toupperw(this->Command[0]);
    bVar2 = __wc == L'X' || __wc == L'E';
    pwVar6 = wcschr(L"AFUM",__wc);
    if (pwVar6 != (wchar_t *)0x0) {
      pwVar6 = (wchar_t *)0x1;
    }
  }
  if (__wc == L'T') {
    pwVar6 = (wchar_t *)((uint)pwVar6 | 1);
  }
  if ((pwVar6 == (wchar_t *)0x0) || ((*Arg == 0x40 && (this->ListMode != RCLM_REJECT_LISTS)))) {
    RarTime::RarTime(&FileData.mtime);
    RarTime::RarTime(&FileData.ctime);
    RarTime::RarTime(&FileData.atime);
    bVar3 = FindFile::FastFind(Arg,&FileData,false);
    if (bVar3) {
      if ((this->ListMode == RCLM_ACCEPT_LISTS) && (*Arg == 0x40)) {
LAB_08103a7c:
        Config = IsWildcard(Arg);
        if (!Config) {
          (this->super_RAROptions).field_0x125bc = 1;
          ReadTextFile(Arg + 1,&this->FileArgs,Config,true,(this->super_RAROptions).FilelistCharset,
                       true,true,true);
          goto LAB_0810389c;
        }
        if (!bVar3) goto LAB_081039ec;
      }
      if (((bVar2 & FileData.IsDir) != 0) && ((this->super_RAROptions).ExtrPath[0] == 0)) {
        dest = (this->super_RAROptions).ExtrPath;
        wcsncpyz(dest,Arg,0x800);
        AddEndSlash(dest,0x800);
        goto LAB_0810389c;
      }
    }
    else if ((this->ListMode != RCLM_REJECT_LISTS) && (*Arg == 0x40)) goto LAB_08103a7c;
  }
LAB_081039ec:
  StringList::AddString(&this->FileArgs,Arg);
LAB_0810389c:
  if (iVar1 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


