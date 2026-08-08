/*
 * Ghidra decompilation
 *
 * Function : _ZN10CmdExtract15ExtrPrepareNameEP11CommandDataR7ArchivePKwPwj
 * Address  : 080e9d04
 * Program  : drastic
 */


/* DWARF original prototype: void ExtrPrepareName(CmdExtract * this, CommandData * Cmd, Archive *
   Arc, wchar * ArcFileName, wchar * DestName, size_t DestSize) */

void __thiscall
CmdExtract::ExtrPrepareName
          (CmdExtract *this,CommandData *Cmd,Archive *Arc,wchar *ArcFileName,wchar *DestName,
          size_t DestSize)

{
  bool bVar1;
  size_t sVar2;
  size_t ArcPathLength;
  size_t sVar3;
  size_t NameLength;
  int iVar4;
  wchar DiskLetter;
  wchar *pwVar5;
  wchar wVar6;
  wchar Command;
  
  pwVar5 = (Cmd->super_RAROptions).ExtrPath;
  wcsncpyz(DestName,pwVar5,DestSize);
  if ((Cmd->super_RAROptions).ExtrPath[0] != 0) {
    pwVar5 = PointToLastChar(pwVar5);
    bVar1 = IsPathDiv(*pwVar5);
    if (!bVar1) {
      AddEndSlash(DestName,DestSize);
    }
  }
  if ((Cmd->super_RAROptions).AppendArcNameToPath != false) {
    pwVar5 = PointToName(Arc->FirstVolumeName);
    wcsncatz(DestName,pwVar5,DestSize);
    SetExt(DestName,(wchar *)0x0);
    AddEndSlash(DestName,DestSize);
  }
  sVar2 = wcslen((wchar_t *)(Cmd->super_RAROptions).ArcPath);
  if (sVar2 != 0) {
    sVar3 = wcslen((wchar_t *)ArcFileName);
    if (sVar2 < sVar3) {
      iVar4 = sVar2 * 4;
    }
    else {
      iVar4 = sVar3 << 2;
    }
    ArcFileName = (wchar *)((int)ArcFileName + iVar4);
    wVar6 = *ArcFileName;
    while (wVar6 == 0x2f) {
      ArcFileName = ArcFileName + 1;
      wVar6 = *ArcFileName;
    }
    if (wVar6 == 0) {
      *DestName = 0;
      return;
    }
  }
  wVar6 = Cmd->Command[0];
  if (((Cmd->super_RAROptions).ExclPath == EXCL_ABSPATH && wVar6 == 0x58) &&
     (bVar1 = IsDriveDiv(0x3a), bVar1)) {
    bVar1 = true;
    *DestName = 0;
LAB_080e9dd0:
    if ((Cmd->super_RAROptions).ExclPath != EXCL_SKIPWHOLEPATH) {
      wcsncatz(DestName,ArcFileName,DestSize);
      goto LAB_080e9dec;
    }
  }
  else {
    bVar1 = false;
    if (wVar6 != 0x45) goto LAB_080e9dd0;
  }
  pwVar5 = PointToName(ArcFileName);
  wcsncatz(DestName,pwVar5,DestSize);
LAB_080e9dec:
  iVar4 = toupperw(*DestName);
  if ((bVar1) && (DestName[1] == 0x5f)) {
    bVar1 = IsPathDiv(DestName[2]);
    if ((bVar1) && (iVar4 - 0x41U < 0x1a)) {
      DestName[1] = 0x3a;
    }
    else if ((*DestName == 0x5f) && (DestName[1] == 0x5f)) {
      *DestName = 0x2f;
      DestName[1] = 0x2f;
    }
  }
  return;
}


