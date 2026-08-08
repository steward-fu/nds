/*
 * Ghidra decompilation
 *
 * Function : RAROpenArchiveEx
 * Address  : 080d0314
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void * RAROpenArchiveEx(RAROpenArchiveDataEx_conflict *r)

{
  size_t DestSize;
  char cVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  CommandData *this;
  wchar_t *pwVar5;
  char *Dest;
  char *NewBuffer;
  size_t sVar6;
  int __in_chrg;
  int __in_chrg_00;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int extraout_r1_02;
  int extraout_r1_03;
  int extraout_r1_04;
  int __in_chrg_01;
  int __in_chrg_02;
  int __in_chrg_03;
  int extraout_r1_05;
  uint uVar7;
  RAR_EXIT ErrCode;
  uint uVar8;
  CmdExtract *this_00;
  CommandData *this_01;
  size_t Size;
  long lVar9;
  uint uVar10;
  UNRARCALLBACK_conflict p_Var11;
  Array<wchar_t> CmtDataW;
  wchar ArcName [2048];
  char AnsiArcName [2048];
  
  iVar3 = __stack_chk_guard;
  *(undefined *)&r->OpenResult = 0;
  *(undefined *)((int)&r->OpenResult + 1) = 0;
  *(undefined *)((int)&r->OpenResult + 2) = 0;
  *(undefined *)((int)&r->OpenResult + 3) = 0;
  this = (CommandData *)operator_new(0x31bb8);
  CommandData::CommandData(this);
  this_01 = this + 1;
  Archive::Archive((Archive *)this_01,(RAROptions *)this);
  this_00 = (CmdExtract *)(this[1].Command + 0x248);
  CmdExtract::CmdExtract(this_00,this);
  uVar7 = r->OpenMode;
  (this->super_RAROptions).DllError = 0;
  this[2].super_RAROptions.ExtrPath[0x2fa] = uVar7;
  StringList::AddString(&this->FileArgs,(wchar *)&DAT_08144c5c);
  AnsiArcName[0] = '\0';
  if (r->ArcName != (char *)0x0) {
    strncpyz(AnsiArcName,r->ArcName,0x800);
  }
  GetWideName(AnsiArcName,(wchar *)r->ArcNameW,ArcName,0x800);
  CommandData::AddArcName(this,ArcName);
  p_Var11 = r->Callback;
  lVar9 = r->UserData;
  (this->super_RAROptions).Overwrite = OVERWRITE_ALL;
  (this->super_RAROptions).VersionControl = 1;
  (this->super_RAROptions).UserData = lVar9;
  (this->super_RAROptions).Callback = p_Var11;
  bVar4 = File::Open((File *)this_01,ArcName,0);
  if (bVar4) {
    bVar4 = Archive::IsArchive((Archive *)this_01,false);
    if (bVar4) {
      cVar1 = *(char *)((int)this[1].super_RAROptions.DllDestName + 0x8f9);
      *(undefined *)&r->Flags = 0;
      *(undefined *)((int)&r->Flags + 1) = 0;
      *(undefined *)((int)&r->Flags + 2) = 0;
      bVar4 = cVar1 != '\0';
      *(undefined *)((int)&r->Flags + 3) = 0;
      cVar1 = *(char *)((int)this[1].super_RAROptions.DllDestName + 0x8fb);
      if (bVar4) {
        uVar7 = 5;
        *(undefined *)&r->Flags = 1;
      }
      else {
        uVar7 = 4;
      }
      cVar2 = *(char *)(this[1].super_RAROptions.DllDestName + 0x23e);
      uVar8 = (uint)bVar4;
      if (cVar1 != '\0') {
        r->Flags = uVar7;
        uVar8 = uVar7;
      }
      cVar1 = *(char *)((int)this[1].super_RAROptions.DllDestName + 0x8fe);
      if (cVar2 != '\0') {
        uVar8 = uVar8 | 8;
        r->Flags = uVar8;
      }
      cVar2 = *(char *)(this[1].super_RAROptions.DllDestName + 0x23f);
      if (cVar1 != '\0') {
        uVar8 = uVar8 | 0x10;
        r->Flags = uVar8;
      }
      cVar1 = *(char *)((int)this[1].super_RAROptions.DllDestName + 0x8ff);
      if (cVar2 != '\0') {
        uVar8 = uVar8 | 0x20;
        r->Flags = uVar8;
      }
      cVar2 = *(char *)(this[1].super_RAROptions.DllDestName + 0x240);
      if (cVar1 != '\0') {
        uVar8 = uVar8 | 0x40;
        r->Flags = uVar8;
      }
      cVar1 = *(char *)((int)this[1].super_RAROptions.DllDestName + 0x8fd);
      if (cVar2 != '\0') {
        uVar8 = uVar8 | 0x80;
        r->Flags = uVar8;
      }
      if (cVar1 != '\0') {
        r->Flags = uVar8 | 0x100;
      }
      CmtDataW.Buffer = (wchar_t *)0x0;
      CmtDataW.BufSize = 0;
      CmtDataW.AllocSize = 0;
      CmtDataW.MaxSize = 0;
      if ((r->CmtBufSize == 0) ||
         (bVar4 = Archive::GetComment((Archive *)this_01,&CmtDataW), !bVar4)) {
        *(undefined *)&r->CmtSize = 0;
        *(undefined *)((int)&r->CmtSize + 1) = 0;
        *(undefined *)((int)&r->CmtSize + 2) = 0;
        *(undefined *)((int)&r->CmtSize + 3) = 0;
        *(undefined *)&r->CmtState = 0;
        *(undefined *)((int)&r->CmtState + 1) = 0;
        *(undefined *)((int)&r->CmtState + 2) = 0;
        *(undefined *)((int)&r->CmtState + 3) = 0;
      }
      else {
        DestSize = CmtDataW.BufSize * 4;
        uVar7 = DestSize + 1;
        sVar6 = uVar7;
        if (uVar7 < 0x20) {
          sVar6 = 0x20;
        }
        Dest = (char *)realloc((void *)0x0,sVar6);
        if (Dest == (char *)0x0) {
          ErrorHandler::MemoryError(&ErrHandler);
        }
        memset(Dest,0,uVar7);
        WideToChar((wchar *)CmtDataW.Buffer,Dest,DestSize);
        sVar6 = strlen(Dest);
        uVar7 = r->CmtBufSize;
        uVar8 = sVar6 + 1;
        if (uVar7 < uVar8) {
          uVar10 = 0x14;
        }
        else {
          uVar10 = 1;
        }
        if (uVar8 < uVar7) {
          uVar7 = uVar8;
        }
        r->CmtSize = uVar7;
        r->CmtState = uVar10;
        r->Flags = r->Flags | 2;
        memcpy(r->CmtBuf,Dest,uVar7 - 1);
        if (uVar8 <= r->CmtBufSize) {
          r->CmtBuf[r->CmtSize - 1] = '\0';
        }
        free(Dest);
      }
      CmdExtract::ExtractArchiveInit(this_00,this,(Archive *)this_01);
      if (CmtDataW.Buffer != (wchar_t *)0x0) {
        free(CmtDataW.Buffer);
      }
      goto LAB_080d04dc;
    }
    uVar7 = (this->super_RAROptions).DllError;
    if (uVar7 == 0) {
      if (RARX_WARNING < ErrHandler.ExitCode) {
        if (ErrHandler.ExitCode < 0xc) {
          uVar7 = *(uint *)(&CSWTCH_37 + ErrHandler.ExitCode * 4);
        }
        else {
          uVar7 = 0x15;
        }
        goto LAB_080d055c;
      }
      *(undefined *)&r->OpenResult = 0xd;
      *(undefined *)((int)&r->OpenResult + 1) = 0;
      *(undefined *)((int)&r->OpenResult + 2) = 0;
      *(undefined *)((int)&r->OpenResult + 3) = 0;
    }
    else {
LAB_080d055c:
      r->OpenResult = uVar7;
    }
    CmdExtract::~CmdExtract(this_00,__in_chrg_02);
    Archive::~Archive((Archive *)this_01,__in_chrg_03);
    __in_chrg_01 = extraout_r1_05;
  }
  else {
    *(undefined *)&r->OpenResult = 0xf;
    *(bool *)((int)&r->OpenResult + 1) = bVar4;
    *(bool *)((int)&r->OpenResult + 2) = bVar4;
    *(bool *)((int)&r->OpenResult + 3) = bVar4;
    CmdExtract::~CmdExtract(this_00,__in_chrg);
    Archive::~Archive((Archive *)this_01,__in_chrg_00);
    __in_chrg_01 = extraout_r1;
  }
  pwVar5 = (this->StoreArgs).StringData.Buffer;
  if (pwVar5 != (wchar_t *)0x0) {
    free(pwVar5);
    __in_chrg_01 = extraout_r1_00;
  }
  pwVar5 = (this->ArcNames).StringData.Buffer;
  if (pwVar5 != (wchar_t *)0x0) {
    free(pwVar5);
    __in_chrg_01 = extraout_r1_01;
  }
  pwVar5 = (this->InclArgs).StringData.Buffer;
  if (pwVar5 != (wchar_t *)0x0) {
    free(pwVar5);
    __in_chrg_01 = extraout_r1_02;
  }
  pwVar5 = (this->ExclArgs).StringData.Buffer;
  if (pwVar5 != (wchar_t *)0x0) {
    free(pwVar5);
    __in_chrg_01 = extraout_r1_03;
  }
  pwVar5 = (this->FileArgs).StringData.Buffer;
  if (pwVar5 != (wchar_t *)0x0) {
    free(pwVar5);
    __in_chrg_01 = extraout_r1_04;
  }
  RAROptions::~RAROptions((RAROptions *)this,__in_chrg_01);
  operator_delete(this);
  this = (CommandData *)0x0;
LAB_080d04dc:
  if (iVar3 == __stack_chk_guard) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


