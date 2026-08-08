/*
 * Ghidra decompilation
 *
 * Function : GetComment
 * Address  : 080d7c60
 * Program  : drastic
 */


/* WARNING: Heritage AFTER dead removal. Example location: r0 : 0x080d80a0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WARNING: Exceeded maximum restarts with more pending */
/* DWARF original prototype: bool GetComment(Archive * this, Array<wchar_t> * CmtData) */

bool __thiscall Archive::GetComment(Archive *this,Array<wchar_t> *CmtData)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  byte bVar6;
  byte bVar7;
  char cVar5;
  uint uVar8;
  uchar *NewBuffer_2;
  QuickOpen *this_00;
  wchar_t *pwVar9;
  uchar *NewBuffer_4;
  wchar_t *NewBuffer_3;
  wchar_t *NewBuffer_5;
  wchar_t *NewBuffer_1;
  wchar_t *NewBuffer;
  int Method;
  int __in_chrg;
  int __in_chrg_00;
  int __in_chrg_01;
  int __in_chrg_02;
  int __in_chrg_03;
  int __in_chrg_04;
  int Method_00;
  int Method_01;
  undefined4 extraout_r1;
  int Method_02;
  int __in_chrg_05;
  int __in_chrg_06;
  int __in_chrg_07;
  int __in_chrg_08;
  int __in_chrg_09;
  size_t Suggested_3;
  size_t Suggested_1;
  uint extraout_r1_00;
  size_t Suggested;
  uint extraout_r1_01;
  _func_int_varargs *p_Var10;
  undefined *puVar11;
  uint uVar12;
  uint uVar13;
  undefined *puVar14;
  size_t Suggested_2;
  size_t NewSize_3;
  size_t Suggested_4;
  ushort CmtLength;
  QuickOpen *pQVar15;
  uint uVar16;
  size_t sVar17;
  size_t NewSize_4;
  size_t NewSize_1;
  size_t NewSize;
  uint UnpCmtLength;
  size_t NewSize_2;
  longlong lVar18;
  ulonglong uVar19;
  int64 iVar20;
  uint in_stack_fffed5e4;
  byte *UnpData;
  int64 QPos;
  ComprDataIO DataIO;
  Unpack CmtUnpack;
  
  iVar3 = __stack_chk_guard;
  cVar5 = this->MainComment;
  if ((bool)cVar5 == false) goto LAB_080d7ca8;
  p_Var10 = (this->super_File)._vptr_File[4];
  if (p_Var10 == Tell) {
    this_00 = &this->QOpen;
    bVar4 = QuickOpen::Tell(this_00,&QPos);
    if (bVar4) {
      lVar18 = CONCAT44(QPos._4_4_,(size_t)QPos);
    }
    else {
      uVar19 = File::Tell(&this->super_File);
      lVar18 = (uVar19 & 0xffffffff00000000) + (uVar19 & 0xffffffff);
    }
  }
  else {
    this_00 = (QuickOpen *)(*p_Var10)();
    lVar18 = CONCAT44(extraout_r1,this_00);
  }
  if (this->Format == RARFMT14) {
    p_Var10 = (this->super_File)._vptr_File[3];
    if (p_Var10 == Seek) {
      bVar4 = QuickOpen::Seek(&this->QOpen,(ulonglong)in_stack_fffed5e4 << 0x20,0x80d7ac8);
      if (!bVar4) {
        File::Seek(&this->super_File,(ulonglong)in_stack_fffed5e4 << 0x20,Method_02);
      }
    }
    else {
      (*p_Var10)(this_00,p_Var10,this->SFXSize + 7,0,0);
    }
    bVar6 = File::GetByte(&this->super_File);
    bVar7 = File::GetByte(&this->super_File);
    pQVar15 = (QuickOpen *)((uint)bVar6 + (uint)bVar7 * 0x100);
    this_00 = pQVar15;
LAB_080d7da0:
    uVar16 = (uint)pQVar15 & 0xffff;
    if (this->Format == RARFMT14) {
      if ((this->MainHead).PackComment != false) goto LAB_080d7dd0;
LAB_080d80b8:
      NewSize_2 = uVar16;
      if (uVar16 == 0) {
        pQVar15 = (QuickOpen *)0x0;
      }
      else {
        if (uVar16 < 0x20) {
          NewSize_2 = 0x20;
        }
        pQVar15 = (QuickOpen *)realloc((void *)0x0,NewSize_2);
        this_00 = pQVar15;
        if (pQVar15 == (QuickOpen *)0x0) {
          ErrorHandler::MemoryError(&ErrHandler);
        }
      }
      p_Var10 = (this->super_File)._vptr_File[2];
      if (p_Var10 == Read) {
        bVar4 = QuickOpen::Read(&this->QOpen,pQVar15,uVar16,(size_t *)&QPos);
        if (!bVar4) {
          File::Read(&this->super_File,pQVar15,uVar16);
        }
      }
      else {
        (*p_Var10)(this_00,pQVar15,uVar16);
      }
      if (this->Format == RARFMT14) {
        uVar13 = CmtData->AllocSize;
        if (uVar13 < uVar16 + 1) goto LAB_080d8350;
LAB_080d8274:
        CmtData->BufSize = uVar16 + 1;
      }
      else {
        uVar1 = (this->CommHead).CommCRC;
        uVar8 = CRC32(0xffffffff,pQVar15,uVar16);
        this_00 = (QuickOpen *)(~uVar8 & 0xffff);
        if ((QuickOpen *)(uint)uVar1 != this_00) {
          if (pQVar15 != (QuickOpen *)0x0) {
            free(pQVar15);
          }
          goto LAB_080d7f14;
        }
        uVar13 = CmtData->AllocSize;
        if (uVar16 + 1 <= uVar13) goto LAB_080d8274;
LAB_080d8350:
        uVar12 = uVar16 + 1;
        CmtData->BufSize = uVar12;
        if (CmtData->MaxSize != 0 && CmtData->MaxSize < uVar12) {
          ErrorHandler::GeneralErrMsg
                    (&ErrHandler,(wchar *)L"Maximum allowed array size (%u) is exceeded");
          ErrorHandler::MemoryError(&ErrHandler);
          uVar12 = CmtData->BufSize;
          uVar13 = CmtData->AllocSize;
        }
        uVar13 = uVar13 + 0x20 + (uVar13 >> 2);
        if (uVar13 < uVar12) {
          uVar13 = uVar12;
        }
        pwVar9 = (wchar_t *)realloc(CmtData->Buffer,uVar13 << 2);
        if (pwVar9 == (wchar_t *)0x0) {
          ErrorHandler::MemoryError(&ErrHandler);
        }
        CmtData->Buffer = pwVar9;
        CmtData->AllocSize = uVar13;
      }
      uVar13 = uVar16 + 1;
      if (NewSize_2 < uVar13) {
        uVar12 = NewSize_2 + 0x20 + (NewSize_2 >> 2);
        if (uVar12 <= uVar13) {
          uVar12 = uVar13;
        }
        pQVar15 = (QuickOpen *)realloc(pQVar15,uVar12);
        if (pQVar15 == (QuickOpen *)0x0) {
          ErrorHandler::MemoryError(&ErrHandler);
        }
      }
      pwVar9 = CmtData->Buffer;
      *(undefined *)((int)&pQVar15->Arc + uVar16) = 0;
      CharToWide((char *)pQVar15,(wchar *)pwVar9,uVar16);
      pwVar9 = CmtData->Buffer;
      this_00 = (QuickOpen *)wcslen(pwVar9);
      puVar14 = (undefined *)CmtData->AllocSize;
      if (puVar14 < this_00) {
        puVar11 = (undefined *)CmtData->MaxSize;
        CmtData->BufSize = (size_t)this_00;
        if ((puVar11 == (undefined *)0x0 || puVar11 <= this_00) &&
            (puVar11 != (undefined *)0x0 && this_00 != (QuickOpen *)puVar11)) {
          ErrorHandler::GeneralErrMsg
                    (&ErrHandler,(wchar *)L"Maximum allowed array size (%u) is exceeded");
          ErrorHandler::MemoryError(&ErrHandler);
          pwVar9 = CmtData->Buffer;
          this_00 = (QuickOpen *)CmtData->BufSize;
          puVar14 = (undefined *)CmtData->AllocSize;
        }
        NewSize_4 = (size_t)this_00;
        if (this_00 < puVar14 + ((uint)puVar14 >> 2) + 0x20) {
          NewSize_4 = (size_t)(puVar14 + ((uint)puVar14 >> 2) + 0x20);
        }
        this_00 = (QuickOpen *)realloc(pwVar9,NewSize_4 << 2);
        if (this_00 == (QuickOpen *)0x0) {
          ErrorHandler::MemoryError(&ErrHandler);
        }
        CmtData->Buffer = (wchar_t *)this_00;
        CmtData->AllocSize = NewSize_4;
      }
      else {
        CmtData->BufSize = (size_t)this_00;
      }
      if (pQVar15 != (QuickOpen *)0x0) {
        free(pQVar15);
      }
    }
    else {
      bVar6 = (this->CommHead).Method;
      if (bVar6 == 0x30) goto LAB_080d80b8;
      if ((0xe < (this->CommHead).UnpVer - 0xf) || (0x35 < bVar6)) goto LAB_080d7f14;
LAB_080d7dd0:
      ComprDataIO::ComprDataIO(&DataIO);
      DataIO.TestMode = true;
      if (this->Format == RARFMT14) {
        bVar6 = File::GetByte(&this->super_File);
        bVar7 = File::GetByte(&this->super_File);
        UnpCmtLength = (uint)bVar6 + (uint)bVar7 * 0x100;
        uVar16 = uVar16 - 2 & 0xffff;
        ComprDataIO::SetCmt13Encryption(&DataIO);
        (this->CommHead).UnpVer = '\x0f';
      }
      else {
        UnpCmtLength = (uint)(this->CommHead).UnpSize;
      }
      ComprDataIO::SetFiles(&DataIO,&this->super_File,(File *)0x0);
      uVar2 = CONCAT22((short)uVar16,(short)uVar16);
      DataIO.ShowProgress = false;
      DataIO.UnpPackedSize = VectorShiftRight(CONCAT44(uVar2,uVar2),0x30);
      DataHash::Init(&DataIO.UnpHash,HASH_CRC32,1);
      Unpack::Unpack(&CmtUnpack,&DataIO);
      Unpack::Init(&CmtUnpack,0x10000,false);
      CmtUnpack.FileExtracted = false;
      CmtUnpack.DestUnpSize._4_4_ = 0;
      CmtUnpack.DestUnpSize._0_4_ = UnpCmtLength;
      Unpack::DoUnpack(&CmtUnpack,(uint)(this->CommHead).UnpVer,false);
      if ((this->Format != RARFMT14) &&
         (uVar8 = DataHash::GetCRC32(&DataIO.UnpHash),
         (uVar8 & 0xffff) != (uint)(this->CommHead).CommCRC)) {
        Unpack::~Unpack(&CmtUnpack,__in_chrg);
        DataHash::~DataHash(&DataIO.UnpHash,__in_chrg_00);
        DataHash::~DataHash(&DataIO.PackHash,__in_chrg_01);
        DataHash::~DataHash(&DataIO.PackedDataHash,__in_chrg_02);
        CryptData::~CryptData(&DataIO.Decrypt,__in_chrg_03);
        this_00 = (QuickOpen *)&DataIO.Crypt;
        CryptData::~CryptData((CryptData *)this_00,__in_chrg_04);
        goto LAB_080d7f14;
      }
      ComprDataIO::GetUnpackedData(&DataIO,&UnpData,(size_t *)&QPos);
      uVar16 = CmtData->AllocSize;
      uVar13 = (size_t)QPos + 1;
      if (uVar16 < uVar13) {
        uVar12 = CmtData->MaxSize;
        CmtData->BufSize = uVar13;
        if ((uVar12 == 0 || uVar12 <= uVar13) && (uVar12 != 0 && uVar13 != uVar12)) {
          ErrorHandler::GeneralErrMsg
                    (&ErrHandler,(wchar *)L"Maximum allowed array size (%u) is exceeded");
          ErrorHandler::MemoryError(&ErrHandler);
          uVar13 = CmtData->BufSize;
          uVar16 = CmtData->AllocSize;
        }
        NewSize = uVar16 + 0x20 + (uVar16 >> 2);
        if (NewSize < uVar13) {
          NewSize = uVar13;
        }
        pwVar9 = (wchar_t *)realloc(CmtData->Buffer,NewSize << 2);
        if (pwVar9 == (wchar_t *)0x0) {
          ErrorHandler::MemoryError(&ErrHandler);
        }
        uVar13 = CmtData->BufSize;
        CmtData->Buffer = pwVar9;
        CmtData->AllocSize = NewSize;
      }
      else {
        pwVar9 = CmtData->Buffer;
        CmtData->BufSize = uVar13;
      }
      memset(pwVar9,0,uVar13 << 2);
      CharToWide((char *)UnpData,(wchar *)CmtData->Buffer,(size_t)QPos);
      pwVar9 = CmtData->Buffer;
      NewSize_1 = wcslen(pwVar9);
      uVar16 = CmtData->AllocSize;
      if (uVar16 < NewSize_1) {
        uVar13 = CmtData->MaxSize;
        CmtData->BufSize = NewSize_1;
        if ((uVar13 == 0 || uVar13 <= NewSize_1) && (uVar13 != 0 && NewSize_1 != uVar13)) {
          ErrorHandler::GeneralErrMsg
                    (&ErrHandler,(wchar *)L"Maximum allowed array size (%u) is exceeded");
          ErrorHandler::MemoryError(&ErrHandler);
          pwVar9 = CmtData->Buffer;
          NewSize_1 = CmtData->BufSize;
          uVar16 = CmtData->AllocSize;
        }
        uVar16 = uVar16 + 0x20 + (uVar16 >> 2);
        if (NewSize_1 < uVar16) {
          NewSize_1 = uVar16;
        }
        pwVar9 = (wchar_t *)realloc(pwVar9,NewSize_1 << 2);
        uVar16 = extraout_r1_00;
        if (pwVar9 == (wchar_t *)0x0) {
          ErrorHandler::MemoryError(&ErrHandler);
          uVar16 = extraout_r1_01;
        }
        CmtData->Buffer = pwVar9;
        CmtData->AllocSize = NewSize_1;
      }
      else {
        CmtData->BufSize = NewSize_1;
      }
      Unpack::~Unpack(&CmtUnpack,uVar16);
      DataHash::~DataHash(&DataIO.UnpHash,__in_chrg_05);
      DataHash::~DataHash(&DataIO.PackHash,__in_chrg_06);
      DataHash::~DataHash(&DataIO.PackedDataHash,__in_chrg_07);
      CryptData::~CryptData(&DataIO.Decrypt,__in_chrg_08);
      this_00 = (QuickOpen *)&DataIO.Crypt;
      CryptData::~CryptData((CryptData *)this_00,__in_chrg_09);
    }
    sVar17 = CmtData->BufSize;
    if (sVar17 != 0) {
      sVar17 = 1;
    }
    cVar5 = (char)sVar17;
  }
  else {
    if ((this->MainHead).CommentInHeader == false) {
      p_Var10 = (this->super_File)._vptr_File[3];
      iVar20 = GetStartPos(this);
      if (p_Var10 == Seek) {
        bVar4 = QuickOpen::Seek(&this->QOpen,(ulonglong)in_stack_fffed5e4 << 0x20,0);
        if (!bVar4) {
          File::Seek(&this->super_File,(ulonglong)in_stack_fffed5e4 << 0x20,Method_01);
        }
      }
      else {
        (*p_Var10)((int)iVar20,0,(int)iVar20,(int)((ulonglong)iVar20 >> 0x20),0);
      }
      this_00 = (QuickOpen *)SearchSubBlock(this,(wchar *)&DAT_08144d98);
      if (this_00 != (QuickOpen *)0x0) {
        cVar5 = ReadCommentData(this,CmtData);
        goto LAB_080d7f18;
      }
    }
    else {
      p_Var10 = (this->super_File)._vptr_File[3];
      if (p_Var10 == Seek) {
        bVar4 = QuickOpen::Seek(&this->QOpen,(ulonglong)in_stack_fffed5e4 << 0x20,0x80d7ac8);
        this_00 = (QuickOpen *)(uint)bVar4;
        if (this_00 == (QuickOpen *)0x0) {
          File::Seek(&this->super_File,(ulonglong)in_stack_fffed5e4 << 0x20,Method);
        }
      }
      else {
        (*p_Var10)(this_00,p_Var10,this->SFXSize + 0x14,0,0);
      }
      ReadHeader(this);
      if (this->BrokenHeader == false) {
        pQVar15 = (QuickOpen *)((this->CommHead).super_BaseBlock.HeadSize - 0xd);
        goto LAB_080d7da0;
      }
    }
LAB_080d7f14:
    cVar5 = '\0';
  }
LAB_080d7f18:
  p_Var10 = (this->super_File)._vptr_File[3];
  if (p_Var10 == Seek) {
    bVar4 = QuickOpen::Seek(&this->QOpen,(ulonglong)in_stack_fffed5e4 << 0x20,0);
    if (!bVar4) {
      File::Seek(&this->super_File,(ulonglong)in_stack_fffed5e4 << 0x20,Method_00);
    }
  }
  else {
    (*p_Var10)(this_00,p_Var10,(int)lVar18,(int)((ulonglong)lVar18 >> 0x20),0);
  }
LAB_080d7ca8:
  if (iVar3 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (bool)cVar5;
}


