/*
 * Ghidra decompilation
 *
 * Function : ProcessCommand
 * Address  : 08105f08
 * Program  : drastic
 */


/* DWARF original prototype: void ProcessCommand(CommandData * this) */

void __thiscall CommandData::ProcessCommand(CommandData *this)

{
  int iVar1;
  bool bVar2;
  wchar *pwVar3;
  wchar_t *pwVar4;
  SCAN_CODE SVar5;
  uint Attr;
  int __in_chrg;
  int __in_chrg_00;
  uint uVar6;
  wchar *Name;
  StringList ArcMasks;
  FindData FindData;
  ScanTree Scan;
  
  iVar1 = __stack_chk_guard;
  Name = this->ArcName;
  pwVar3 = GetExt(Name);
  if (pwVar3 == (wchar *)0x0) {
    bVar2 = FileExist(Name);
    if (bVar2) {
      Attr = GetFileAttr(Name);
      bVar2 = IsDir(Attr);
      if (!bVar2) goto LAB_08105f54;
    }
    wcsncatz(Name,(wchar *)&DAT_08144bbc,0x800);
  }
LAB_08105f54:
  pwVar4 = wcschr(L"AFUMD",this->Command[0]);
  if (pwVar4 == (wchar_t *)0x0) {
    if ((this->super_RAROptions).GenerateArcName != false) {
      GenerateArchiveName(Name,0x800,(this->super_RAROptions).GenerateMask,false);
    }
    StringList::StringList(&ArcMasks);
    StringList::AddString(&ArcMasks,Name);
    ScanTree::ScanTree(&Scan,&ArcMasks,(this->super_RAROptions).Recurse,
                       (this->super_RAROptions).SaveSymLinks,SCAN_SKIPDIRS);
    RarTime::RarTime(&FindData.mtime);
    RarTime::RarTime(&FindData.ctime);
    RarTime::RarTime(&FindData.atime);
    while (SVar5 = ScanTree::GetNext(&Scan,&FindData), SVar5 == SCAN_SUCCESS) {
      StringList::AddString(&this->ArcNames,FindData.Name);
    }
    ScanTree::~ScanTree(&Scan,__in_chrg_00);
    if (ArcMasks.StringData.Buffer != (wchar_t *)0x0) {
      free(ArcMasks.StringData.Buffer);
    }
  }
  else {
    StringList::AddString(&this->ArcNames,Name);
  }
  uVar6 = this->Command[0] - 0x45;
  if ((uVar6 < 0x14) && ((1 << (uVar6 & 0xff) & 0x88811U) != 0)) {
    CmdExtract::CmdExtract((CmdExtract *)&Scan,this);
    CmdExtract::DoExtract((CmdExtract *)&Scan,this);
    CmdExtract::~CmdExtract((CmdExtract *)&Scan,__in_chrg);
  }
  if (iVar1 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


