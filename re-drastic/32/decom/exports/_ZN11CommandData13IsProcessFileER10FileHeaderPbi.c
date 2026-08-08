/*
 * Ghidra decompilation
 *
 * Function : _ZN11CommandData13IsProcessFileER10FileHeaderPbi
 * Address  : 08105ce8
 * Program  : drastic
 */


/* DWARF original prototype: int IsProcessFile(CommandData * this, FileHeader * FileHead, bool *
   ExactMatch, int MatchType) */

int __thiscall
CommandData::IsProcessFile(CommandData *this,FileHeader *FileHead,bool *ExactMatch,int MatchType)

{
  bool bVar1;
  bool bVar2;
  size_t sVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  wchar *pwVar7;
  uint uVar8;
  wchar *__s;
  int iVar9;
  wchar *ArgName;
  bool Dir;
  bool CheckFullPath;
  int iVar10;
  
  __s = FileHead->FileName;
  sVar3 = wcslen((wchar_t *)__s);
  if (sVar3 < 0x800) {
    bVar2 = FileHead->Dir;
    CheckFullPath = false;
    iVar10 = 5;
    bVar1 = ExclCheckArgs(this,&this->ExclArgs,bVar2,__s,false,5);
    if ((!bVar1) &&
       ((pwVar7 = (wchar *)(this->InclArgs).StringsCount, pwVar7 == (wchar *)0x0 ||
        (bVar1 = ExclCheckArgs((CommandData *)&this->InclArgs,(StringList *)(uint)bVar2,SUB41(__s,0)
                               ,pwVar7,CheckFullPath,iVar10), bVar1)))) {
      uVar6 = *(uint *)&(this->super_RAROptions).FileTimeBefore.itime;
      uVar8 = *(uint *)((int)&(this->super_RAROptions).FileTimeBefore.itime + 4);
      if ((uVar6 | uVar8) != 0) {
        uVar4 = *(uint *)&(FileHead->mtime).itime;
        uVar5 = *(uint *)((int)&(FileHead->mtime).itime + 4);
        bVar1 = uVar5 <= uVar8;
        if (uVar8 == uVar5) {
          bVar1 = uVar4 <= uVar6;
        }
        if (!bVar1 || uVar8 == uVar5 && uVar6 == uVar4) {
          return 0;
        }
      }
      uVar6 = *(uint *)&(this->super_RAROptions).FileTimeAfter.itime;
      uVar8 = *(uint *)((int)&(this->super_RAROptions).FileTimeAfter.itime + 4);
      if ((uVar6 | uVar8) != 0) {
        uVar4 = *(uint *)((int)&(FileHead->mtime).itime + 4);
        bVar1 = uVar4 <= uVar8;
        if (uVar8 == uVar4) {
          bVar1 = *(uint *)&(FileHead->mtime).itime <= uVar6;
        }
        if (bVar1) {
          return 0;
        }
      }
      if ((((FileHead->field_3).FileAttr & (this->super_RAROptions).ExclFileAttr) == 0) &&
         (((this->super_RAROptions).InclAttrSet == false ||
          (((FileHead->field_3).FileAttr & (this->super_RAROptions).InclFileAttr) != 0)))) {
        if ((StringList *)(uint)bVar2 == (StringList *)0x0) {
          uVar6 = *(uint *)&(this->super_RAROptions).FileSizeLess;
          iVar10 = *(int *)((int)&(this->super_RAROptions).FileSizeLess + 4);
          uVar8 = *(uint *)&FileHead->UnpSize;
          iVar9 = *(int *)((int)&FileHead->UnpSize + 4);
          if ((iVar10 != 0x7fffffff || uVar6 != 0x7fffffff) &&
              (int)(iVar9 - (iVar10 + (uint)(uVar8 < uVar6))) < 0 ==
              (SBORROW4(iVar9,iVar10) != SBORROW4(iVar9 - iVar10,(uint)(uVar8 < uVar6)))) {
            return 0;
          }
          uVar6 = *(uint *)&(this->super_RAROptions).FileSizeMore;
          iVar10 = *(int *)((int)&(this->super_RAROptions).FileSizeMore + 4);
          if ((iVar10 != 0x7fffffff || uVar6 != 0x7fffffff) &&
              (int)(iVar10 - (iVar9 + (uint)(uVar6 < uVar8))) < 0 ==
              (SBORROW4(iVar10,iVar9) != SBORROW4(iVar10 - iVar9,(uint)(uVar6 < uVar8)))) {
            return 0;
          }
        }
        iVar10 = 1;
        StringList::Rewind(&this->FileArgs);
        while (pwVar7 = StringList::GetString(&this->FileArgs), pwVar7 != (wchar *)0x0) {
          bVar2 = CmpName(pwVar7,__s,MatchType);
          if (bVar2) {
            if (ExactMatch != (bool *)0x0) {
              iVar9 = wcsicompc(pwVar7,__s);
              *ExactMatch = iVar9 == 0;
              return iVar10;
            }
            return iVar10;
          }
          iVar10 = iVar10 + 1;
        }
      }
    }
  }
  return 0;
}


