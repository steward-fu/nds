/*
 * Ghidra decompilation
 *
 * Function : _ZN7Archive12ReadHeader50Ev
 * Address  : 080db770
 * Program  : drastic
 */


/* WARNING: Heritage AFTER dead removal. Example location: r0 : 0x080db820 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WARNING: Exceeded maximum restarts with more pending */
/* DWARF original prototype: size_t ReadHeader50(Archive * this) */

size_t __thiscall Archive::ReadHeader50(Archive *this)

{
  uint64 uVar1;
  undefined3 uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  size_t sVar6;
  uint uVar7;
  uint SizeBytes;
  int SizeToRead;
  uint HeaderCRC;
  uint ArcFlags;
  uint CryptVersion;
  uint EncFlags;
  uint CompInfo;
  size_t NameSize;
  uint ArcFlags_1;
  uint uVar8;
  HEADER_TYPE HVar9;
  int iVar10;
  int iVar11;
  FileHeader *this_00;
  CRYPT_METHOD CVar12;
  BaseBlock *pBVar13;
  size_t ExtraStart;
  size_t ExtraStart_1;
  undefined4 uVar14;
  undefined4 uVar15;
  byte *Field;
  uint uVar16;
  int iVar17;
  uint uVar18;
  size_t ReadNameSize;
  wchar *__s1;
  bool bVar19;
  int64 iVar20;
  uint64 uVar21;
  byte *in_stack_ffffdef8;
  byte *in_stack_ffffdefc;
  HEADER_TYPE SaveCurHeaderType;
  bool local_20ec;
  undefined8 local_20e8;
  undefined8 local_20e0;
  RawRead Raw;
  sha256_context ctx;
  byte PswCheck [8];
  byte HeadersInitV [16];
  
  iVar3 = __stack_chk_guard;
  RawRead::RawRead(&Raw,&this->super_File);
  if (this->Encrypted == false) {
    bVar19 = false;
LAB_080db8c0:
    sVar6 = RawRead::Read(&Raw,7);
    if (sVar6 < 7) {
      iVar20 = File::FileLength(&this->super_File);
      iVar10 = (int)((ulonglong)iVar20 >> 0x20);
      uVar18 = (uint)iVar20;
      uVar5 = *(uint *)&this->CurBlockPos;
      iVar11 = *(int *)((int)&this->CurBlockPos + 4);
      if ((int)(iVar10 - (iVar11 + (uint)(uVar18 < uVar5))) < 0 ==
          (SBORROW4(iVar10,iVar11) != SBORROW4(iVar10 - iVar11,(uint)(uVar18 < uVar5)))) {
        uVar16 = *(uint *)&this->NextBlockPos;
        iVar17 = *(int *)((int)&this->NextBlockPos + 4);
        if ((int)(iVar10 - (iVar17 + (uint)(uVar18 < uVar16))) < 0 ==
            (SBORROW4(iVar10,iVar17) != SBORROW4(iVar10 - iVar17,(uint)(uVar18 < uVar16))))
        goto LAB_080db9d8;
      }
      goto LAB_080db858;
    }
    (this->ShortBlock).SkipIfUnknown = false;
    uVar7 = RawRead::Get4(&Raw);
    (this->ShortBlock).HeadCRC = uVar7;
    uVar7 = RawRead::GetVSize(&Raw,4);
    SizeBytes = (uint)&Raw;
    uVar21 = RawRead::GetV((RawRead *)SizeBytes);
    local_20ec = uVar21 == 0 || uVar7 == 0;
    if (uVar21 != 0 && uVar7 != 0) {
      iVar10 = uVar7 + (int)uVar21;
      sVar6 = iVar10 - 3;
      if (-1 < (int)sVar6) {
        RawRead::Read(&Raw,sVar6);
        uVar18 = iVar10 + 4;
        if (Raw.DataSize < uVar18) {
          iVar20 = File::FileLength(&this->super_File);
          iVar10 = (int)((ulonglong)iVar20 >> 0x20);
          uVar18 = (uint)iVar20;
          uVar5 = *(uint *)&this->CurBlockPos;
          iVar11 = *(int *)((int)&this->CurBlockPos + 4);
          if ((int)(iVar10 - (iVar11 + (uint)(uVar18 < uVar5))) < 0 ==
              (SBORROW4(iVar10,iVar11) != SBORROW4(iVar10 - iVar11,(uint)(uVar18 < uVar5)))) {
            uVar16 = *(uint *)&this->NextBlockPos;
            iVar17 = *(int *)((int)&this->NextBlockPos + 4);
            if ((int)(iVar10 - (iVar17 + (uint)(uVar18 < uVar16))) < 0 ==
                (SBORROW4(iVar10,iVar17) != SBORROW4(iVar10 - iVar17,(uint)(uVar18 < uVar16)))) {
              if (iVar10 == iVar17 && uVar18 == uVar16 || iVar10 == iVar11 && uVar18 == uVar5)
              goto LAB_080db868;
              goto LAB_080dba00;
            }
          }
          goto LAB_080db858;
        }
        uVar7 = RawRead::GetCRC50(&Raw);
        HeaderCRC = (uint)&Raw;
        uVar21 = RawRead::GetV((RawRead *)HeaderCRC);
        (this->ShortBlock).HeaderType = (HEADER_TYPE)uVar21;
        uVar21 = RawRead::GetV(&Raw);
        uVar5 = (uint)uVar21;
        uVar8 = (this->ShortBlock).HeadCRC;
        (this->ShortBlock).Flags = uVar5;
        (this->ShortBlock).HeadSize = uVar18;
        (this->ShortBlock).SkipIfUnknown = SUB41((uVar5 << 0x1d) >> 0x1f,0);
        this->CurHeaderType = (this->ShortBlock).HeaderType;
        if (uVar7 != uVar8) {
          this->BrokenHeader = true;
          ErrorHandler::SetErrorCode(&ErrHandler,RARX_CRC);
          this->BrokenHeader = true;
          ErrorHandler::SetErrorCode(&ErrHandler,RARX_CRC);
          if (bVar19) {
            this->FailedHeaderDecryption = true;
            sVar6 = 0;
            goto LAB_080db86c;
          }
          uVar5 = (this->ShortBlock).Flags;
        }
        if ((uVar5 & 1) == 0) {
          local_20e0 = 0;
        }
        else {
          local_20e0 = RawRead::GetV(&Raw);
          if ((int)(local_20e0 >> 0x20) != 0 || (this->ShortBlock).HeadSize <= (uint)local_20e0)
          goto LAB_080dba10;
          uVar5 = (this->ShortBlock).Flags;
        }
        if ((uVar5 & 2) == 0) {
          iVar20 = 0;
        }
        else {
          uVar21 = RawRead::GetV(&Raw);
          iVar20 = (uVar21 & 0xffffffff00000000) + (uVar21 & 0xffffffff);
        }
        uVar18 = *(uint *)&this->CurBlockPos;
        iVar10 = *(int *)((int)&this->CurBlockPos + 4);
        uVar7 = FullHeaderSize(this,(this->ShortBlock).HeadSize);
        HVar9 = (this->ShortBlock).HeaderType;
        local_20e8 = VectorAdd(CONCAT44(iVar10 + (uint)CARRY4(uVar18,uVar7),uVar18 + uVar7),iVar20,8
                              );
        this->NextBlockPos = local_20e8;
        if (HVar9 + ~HEAD_MARK < 5) {
          switch(HVar9) {
          case HEAD_MAIN:
            MainHeader::Reset(&this->MainHead);
            HVar9 = (this->ShortBlock).HeaderType;
            uVar7 = (this->ShortBlock).Flags;
            uVar8 = (this->ShortBlock).HeadSize;
            bVar19 = (this->ShortBlock).SkipIfUnknown;
            uVar2 = *(undefined3 *)&(this->ShortBlock).field_0x11;
            (this->MainHead).super_BaseBlock.HeadCRC = (this->ShortBlock).HeadCRC;
            (this->MainHead).super_BaseBlock.HeaderType = HVar9;
            (this->MainHead).super_BaseBlock.Flags = uVar7;
            (this->MainHead).super_BaseBlock.HeadSize = uVar8;
            (this->MainHead).super_BaseBlock.SkipIfUnknown = bVar19;
            *(undefined3 *)&(this->MainHead).super_BaseBlock.field_0x11 = uVar2;
            uVar21 = RawRead::GetV(&Raw);
            uVar18 = (uint)uVar21;
            this->Solid = SUB41((uVar18 << 0x1d) >> 0x1f,0);
            this->Volume = (bool)((byte)uVar21 & 1);
            this->Locked = SUB41((uVar18 << 0x1b) >> 0x1f,0);
            this->Signed = false;
            this->NewNumbering = true;
            this->Protected = SUB41((uVar18 << 0x1c) >> 0x1f,0);
            if ((uVar21 & 2) == 0) {
              this->VolNumber = uVar18 & 2;
              if ((uVar21 & 1) != 0) {
LAB_080dc178:
                local_20ec = true;
              }
            }
            else {
              uVar21 = RawRead::GetV(&Raw);
              this->VolNumber = (uint)uVar21;
              if ((this->Volume != false) && ((uint)uVar21 == 0)) goto LAB_080dc178;
            }
            this->FirstVolume = local_20ec;
            if ((((uint)local_20e0 | local_20e0._4_4_) != 0) &&
               (pBVar13 = (BaseBlock *)(Raw.DataSize - (uint)local_20e0), Raw.ReadPos <= pBVar13)) {
              Raw.ReadPos = (size_t)pBVar13;
              ProcessExtra50(this,&Raw,(size_t)&this->MainHead,pBVar13);
            }
            if ((((this->MainHead).Locator == false) ||
                ((*(uint *)&(this->MainHead).QOpenOffset |
                 *(uint *)((int)&(this->MainHead).QOpenOffset + 4)) == 0)) ||
               (this->Cmd->QOpenMode == QOPEN_NONE)) goto LAB_080dbf78;
            uVar15 = *(undefined4 *)&this->NextBlockPos;
            uVar14 = *(undefined4 *)((int)&this->NextBlockPos + 4);
            local_20e8 = this->NextBlockPos;
            iVar20 = this->CurBlockPos;
            HVar9 = this->CurHeaderType;
            QuickOpen::Init(&this->QOpen,this,false);
            QuickOpen::Load(&this->QOpen,CONCAT44(in_stack_ffffdefc,in_stack_ffffdef8));
            this->CurBlockPos = iVar20;
            *(undefined4 *)&this->NextBlockPos = uVar15;
            *(undefined4 *)((int)&this->NextBlockPos + 4) = uVar14;
            this->CurHeaderType = HVar9;
            break;
          default:
            if (HVar9 == HEAD_FILE) {
              this_00 = &this->FileHead;
            }
            else {
              this_00 = &this->SubHead;
            }
            FileHeader::Reset(this_00,0);
            HVar9 = (this->ShortBlock).HeaderType;
            (this_00->super_BlockHeader).super_BaseBlock.HeadCRC = (this->ShortBlock).HeadCRC;
            (this_00->super_BlockHeader).super_BaseBlock.HeaderType = HVar9;
            HVar9 = (this->ShortBlock).HeaderType;
            uVar7 = (this->ShortBlock).HeadSize;
            (this_00->super_BlockHeader).super_BaseBlock.Flags = (this->ShortBlock).Flags;
            (this_00->super_BlockHeader).super_BaseBlock.HeadSize = uVar7;
            uVar2 = *(undefined3 *)&(this->ShortBlock).field_0x11;
            (this_00->super_BlockHeader).super_BaseBlock.SkipIfUnknown =
                 (this->ShortBlock).SkipIfUnknown;
            *(undefined3 *)&(this_00->super_BlockHeader).super_BaseBlock.field_0x11 = uVar2;
            this_00->LargeFile = true;
            this_00->PackSize = iVar20;
            uVar21 = RawRead::GetV(&Raw);
            this_00->FileFlags = (uint)uVar21;
            uVar21 = RawRead::GetV(&Raw);
            this_00->UnpSize = uVar21;
            bVar19 = (this_00->FileFlags & 8) != 0;
            this_00->UnknownUnpSize = bVar19;
            if (bVar19) {
              uVar21 = 0x7fffffff7fffffff;
              *(undefined4 *)&this_00->UnpSize = 0x7fffffff;
              *(undefined4 *)((int)&this_00->UnpSize + 4) = 0x7fffffff;
            }
            iVar10 = (int)(uVar21 >> 0x20);
            iVar11 = *(int *)((int)&this_00->PackSize + 4);
            bVar19 = *(uint *)&this_00->PackSize < (uint)uVar21;
            uVar1 = this_00->PackSize;
            if ((int)(iVar11 - (iVar10 + (uint)bVar19)) < 0 !=
                (SBORROW4(iVar11,iVar10) != SBORROW4(iVar11 - iVar10,(uint)bVar19))) {
              uVar1 = uVar21;
            }
            this_00->MaxSize = uVar1;
            uVar21 = RawRead::GetV(&Raw);
            (this_00->field_3).FileAttr = (uint)uVar21;
            uVar18 = this_00->FileFlags;
            if ((uVar18 & 2) != 0) {
              uVar7 = RawRead::Get4(&Raw);
              RarTime::operator=(&this_00->mtime,uVar7);
              uVar18 = this_00->FileFlags;
            }
            if ((uVar18 & 4) == 0) {
              (this_00->FileHash).Type = HASH_NONE;
            }
            else {
              (this_00->FileHash).Type = HASH_CRC32;
              uVar7 = RawRead::Get4(&Raw);
              (this_00->FileHash).field_1.CRC32 = uVar7;
            }
            this_00->RedirType = FSREDIR_NONE;
            uVar21 = RawRead::GetV(&Raw);
            iVar10 = (int)uVar21;
            this_00->UnpVer = (byte)uVar21 & 0x3f;
            this_00->Method = (byte)((uint)(iVar10 << 0x16) >> 0x1d);
            uVar21 = RawRead::GetV(&Raw);
            this_00->HostOS = (byte)uVar21;
            uVar21 = RawRead::GetV(&Raw);
            ReadNameSize = (size_t)uVar21;
            this_00->Inherited = SUB41(((this->ShortBlock).Flags << 0x19) >> 0x1f,0);
            this_00->HSType = HSYS_UNKNOWN;
            if (this_00->HostOS == '\x01') {
              this_00->HSType = HSYS_UNIX;
            }
            else if (this_00->HostOS == '\0') {
              this_00->HSType = HSYS_WINDOWS;
            }
            uVar7 = (this_00->super_BlockHeader).super_BaseBlock.Flags;
            this_00->SplitBefore = SUB41((uVar7 << 0x1c) >> 0x1f,0);
            this_00->SplitAfter = SUB41((uVar7 << 0x1b) >> 0x1f,0);
            bVar4 = (byte)((uVar7 << 0x1a) >> 0x18);
            this_00->SubBlock = (bool)(bVar4 >> 7);
            if (HVar9 == HEAD_FILE) {
              bVar4 = (byte)((uint)(iVar10 << 0x19) >> 0x18);
            }
            if (HVar9 == HEAD_FILE) {
              local_20ec = (bool)(bVar4 >> 7);
            }
            this_00->Solid = local_20ec;
            bVar19 = (this_00->FileFlags & 1) == 0;
            if (bVar19) {
              sVar6 = (uint)(iVar10 << 0x12) >> 0x1c;
            }
            else {
              sVar6 = 0;
            }
            this_00->Dir = (bool)((byte)this_00->FileFlags & 1);
            if (bVar19) {
              sVar6 = 0x20000 << sVar6;
            }
            this_00->WinSize = sVar6;
            if (this_00->Encrypted == false) {
              CVar12 = CRYPT_NONE;
            }
            else {
              CVar12 = CRYPT_RAR50;
            }
            if (0x1ffe < ReadNameSize) {
              ReadNameSize = 0x1fff;
            }
            this_00->CryptMethod = CVar12;
            RawRead::GetB(&Raw,HeadersInitV,ReadNameSize);
            HeadersInitV[ReadNameSize] = '\0';
            __s1 = this_00->FileName;
            UtfToWide((char *)HeadersInitV,__s1,0x7ff);
            if ((((uint)local_20e0 | local_20e0._4_4_) != 0) &&
               (pBVar13 = (BaseBlock *)(Raw.DataSize - (uint)local_20e0), Raw.ReadPos <= pBVar13)) {
              Raw.ReadPos = (size_t)pBVar13;
              ProcessExtra50(this,&Raw,(size_t)this_00,pBVar13);
            }
            if (HVar9 == HEAD_FILE) {
              ConvertNameCase(this,__s1);
              ConvertFileHeader(this,this_00);
            }
            else {
              iVar10 = wcscmp((wchar_t *)__s1,L"CMT");
              if (iVar10 == 0) {
                this->MainComment = true;
              }
            }
LAB_080dbf78:
            local_20e8 = this->NextBlockPos;
            break;
          case HEAD_CRYPT:
            HVar9 = (this->ShortBlock).HeaderType;
            uVar7 = (this->ShortBlock).Flags;
            uVar8 = (this->ShortBlock).HeadSize;
            bVar19 = (this->ShortBlock).SkipIfUnknown;
            uVar2 = *(undefined3 *)&(this->ShortBlock).field_0x11;
            (this->CryptHead).super_BaseBlock.HeadCRC = (this->ShortBlock).HeadCRC;
            (this->CryptHead).super_BaseBlock.HeaderType = HVar9;
            (this->CryptHead).super_BaseBlock.Flags = uVar7;
            (this->CryptHead).super_BaseBlock.HeadSize = uVar8;
            (this->CryptHead).super_BaseBlock.SkipIfUnknown = bVar19;
            *(undefined3 *)&(this->CryptHead).super_BaseBlock.field_0x11 = uVar2;
            uVar21 = RawRead::GetV(&Raw);
            if ((int)uVar21 == 0) {
              uVar21 = RawRead::GetV(&Raw);
              (this->CryptHead).UsePswCheck = (bool)((byte)uVar21 & 1);
              bVar4 = RawRead::Get1(&Raw);
              (this->CryptHead).Lg2Count = (uint)bVar4;
              if (bVar4 < 0x19) {
                RawRead::GetB(&Raw,(this->CryptHead).Salt,0x10);
                if ((this->CryptHead).UsePswCheck != false) {
                  Field = (this->CryptHead).PswCheck;
                  RawRead::GetB(&Raw,Field,8);
                  RawRead::GetB(&Raw,PswCheck,4);
                  sha256_init(&ctx);
                  sha256_process(&ctx,Field,8);
                  sha256_done(&ctx,HeadersInitV);
                  iVar10 = memcmp(PswCheck,HeadersInitV,4);
                  (this->CryptHead).UsePswCheck = iVar10 == 0;
                }
                local_20e8 = this->NextBlockPos;
                this->Encrypted = true;
                break;
              }
            }
            goto LAB_080db858;
          case HEAD_ENDARC:
            HVar9 = (this->ShortBlock).HeaderType;
            uVar7 = (this->ShortBlock).Flags;
            uVar8 = (this->ShortBlock).HeadSize;
            bVar19 = (this->ShortBlock).SkipIfUnknown;
            uVar2 = *(undefined3 *)&(this->ShortBlock).field_0x11;
            (this->EndArcHead).super_BaseBlock.HeadCRC = (this->ShortBlock).HeadCRC;
            (this->EndArcHead).super_BaseBlock.HeaderType = HVar9;
            (this->EndArcHead).super_BaseBlock.Flags = uVar7;
            (this->EndArcHead).super_BaseBlock.HeadSize = uVar8;
            (this->EndArcHead).super_BaseBlock.SkipIfUnknown = bVar19;
            *(undefined3 *)&(this->EndArcHead).super_BaseBlock.field_0x11 = uVar2;
            uVar21 = RawRead::GetV(&Raw);
            local_20e8 = this->NextBlockPos;
            (this->EndArcHead).NextVolume = (bool)((byte)uVar21 & 1);
            (this->EndArcHead).DataCRC = false;
            (this->EndArcHead).RevSpace = false;
            (this->EndArcHead).StoreVolNumber = false;
          }
        }
        iVar10 = *(int *)((int)&this->CurBlockPos + 4);
        bVar19 = *(uint *)&this->CurBlockPos < (uint)local_20e8;
        sVar6 = Raw.DataSize;
        if ((int)(iVar10 - (local_20e8._4_4_ + (uint)bVar19)) < 0 !=
            (SBORROW4(iVar10,local_20e8._4_4_) != SBORROW4(iVar10 - local_20e8._4_4_,(uint)bVar19)))
        goto LAB_080db86c;
      }
    }
LAB_080dba10:
    this->BrokenHeader = true;
    ErrorHandler::SetErrorCode(&ErrHandler,RARX_CRC);
  }
  else {
    iVar10 = *(int *)((int)&this->CurBlockPos + 4);
    uVar5 = this->SFXSize + 8;
    uVar18 = (uint)(0xfffffff7 < this->SFXSize);
    bVar19 = uVar5 < *(uint *)&this->CurBlockPos;
    if ((int)(uVar18 - (iVar10 + (uint)bVar19)) < 0 ==
        (SBORROW4(uVar18,iVar10) != SBORROW4(uVar18 - iVar10,(uint)bVar19))) {
      bVar19 = false;
      goto LAB_080db8c0;
    }
    RequestArcPassword(this);
    in_stack_ffffdefc = HeadersInitV;
    iVar10 = (*(this->super_File)._vptr_File[2])(uVar5,in_stack_ffffdefc,0x10);
    if (iVar10 == 0x10) {
      in_stack_ffffdef8 = (this->CryptHead).Salt;
      CryptData::SetCryptKeys
                (&this->HeadersCrypt,false,CRYPT_RAR50,&this->Cmd->Password,in_stack_ffffdef8,
                 in_stack_ffffdefc,(this->CryptHead).Lg2Count,(byte *)0x0,PswCheck);
      if (((this->CryptHead).UsePswCheck == false) ||
         (iVar10 = memcmp(PswCheck,(this->CryptHead).PswCheck,8), iVar10 == 0)) {
        bVar19 = true;
        Raw.Crypt = &this->HeadersCrypt;
        goto LAB_080db8c0;
      }
      this->FailedHeaderDecryption = true;
      ErrorHandler::SetErrorCode(&ErrHandler,RARX_BADPWD);
    }
    else {
      iVar20 = File::FileLength(&this->super_File);
      iVar10 = (int)((ulonglong)iVar20 >> 0x20);
      uVar18 = (uint)iVar20;
      uVar5 = *(uint *)&this->CurBlockPos;
      iVar11 = *(int *)((int)&this->CurBlockPos + 4);
      if ((int)(iVar10 - (iVar11 + (uint)(uVar18 < uVar5))) < 0 ==
          (SBORROW4(iVar10,iVar11) != SBORROW4(iVar10 - iVar11,(uint)(uVar18 < uVar5)))) {
        uVar16 = *(uint *)&this->NextBlockPos;
        iVar17 = *(int *)((int)&this->NextBlockPos + 4);
        if ((int)(iVar10 - (iVar17 + (uint)(uVar18 < uVar16))) < 0 !=
            (SBORROW4(iVar10,iVar17) != SBORROW4(iVar10 - iVar17,(uint)(uVar18 < uVar16))))
        goto LAB_080db858;
LAB_080db9d8:
        iVar10 = (int)((ulonglong)iVar20 >> 0x20);
        if ((iVar10 != iVar11 || (uint)iVar20 != uVar5) &&
            (iVar10 != iVar17 || (uint)iVar20 != uVar16)) {
LAB_080dba00:
          if (this->Format == RARFMT50) goto LAB_080db858;
        }
      }
      else {
LAB_080db858:
        ErrorHandler::SetErrorCode(&ErrHandler,RARX_WARNING);
      }
    }
  }
LAB_080db868:
  sVar6 = 0;
LAB_080db86c:
  if (Raw.Data.Buffer != (uchar *)0x0) {
    free(Raw.Data.Buffer);
  }
  if (iVar3 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return sVar6;
}


