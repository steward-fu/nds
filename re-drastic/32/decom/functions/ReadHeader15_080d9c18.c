/*
 * Ghidra decompilation
 *
 * Function : ReadHeader15
 * Address  : 080d9c18
 * Program  : drastic
 */


/* WARNING: Heritage AFTER dead removal. Example location: r0 : 0x080d9cc4 */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WARNING: Exceeded maximum restarts with more pending */
/* DWARF original prototype: size_t ReadHeader15(Archive * this) */

size_t __thiscall Archive::ReadHeader15(Archive *this)

{
  ulonglong uVar1;
  SubBlockHeader *pSVar2;
  undefined3 uVar3;
  int iVar4;
  byte CurByte;
  ushort HeaderCRC;
  byte bVar5;
  ushort uVar8;
  uint uVar9;
  uint HeaderType;
  byte bVar6;
  uint uVar10;
  FileHeader *hd;
  uint LowUnpSize;
  uint FileTime;
  size_t NameSize;
  undefined uVar7;
  uint DosTime;
  ushort HeaderCRC_1;
  size_t sVar11;
  size_t Length;
  uchar *NewBuffer;
  undefined4 extraout_r1;
  int extraout_r1_00;
  _func_int_varargs *p_Var12;
  HEADER_TYPE HVar13;
  HOST_SYSTEM_TYPE HVar14;
  uchar *puVar15;
  undefined4 extraout_r1_01;
  size_t NewSize;
  wchar *pwVar16;
  uint uVar17;
  size_t ReadNameSize;
  size_t sVar18;
  RarTime *this_00;
  RarTime *CurTime;
  undefined *puVar19;
  bool bVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  FileHeader *this_01;
  uint uVar24;
  wchar wVar25;
  int DataSize;
  undefined *puVar26;
  size_t Suggested;
  wchar *__size;
  uint uVar27;
  wchar *pwVar28;
  wchar *s;
  uint rmode;
  int iVar29;
  HEADER_TYPE HVar30;
  bool bVar31;
  bool bVar32;
  undefined8 uVar33;
  int64 iVar34;
  byte *in_stack_ffffd730;
  undefined4 in_stack_ffffd734;
  undefined4 in_stack_ffffd738;
  undefined4 in_stack_ffffd73c;
  int local_28ac;
  ushort Flags;
  uint uStack_289c;
  RawRead Raw;
  EncodeFileName NameCoder;
  RarTime *tbl [4];
  char AnsiName [2048];
  byte Salt [8];
  
  iVar4 = __stack_chk_guard;
  RawRead::RawRead(&Raw,&this->super_File);
  if (this->Encrypted == false) {
    bVar32 = false;
LAB_080d9d6c:
    RawRead::Read(&Raw,7);
    if (Raw.DataSize == 0) {
      iVar34 = File::FileLength(&this->super_File);
      iVar21 = (int)((ulonglong)iVar34 >> 0x20);
      uVar17 = (uint)iVar34;
      uVar9 = *(uint *)&this->CurBlockPos;
      iVar22 = *(int *)((int)&this->CurBlockPos + 4);
      if ((int)(iVar21 - (iVar22 + (uint)(uVar17 < uVar9))) < 0 ==
          (SBORROW4(iVar21,iVar22) != SBORROW4(iVar21 - iVar22,(uint)(uVar17 < uVar9)))) {
        uVar27 = *(uint *)&this->NextBlockPos;
        iVar29 = *(int *)((int)&this->NextBlockPos + 4);
        if ((int)(iVar21 - (iVar29 + (uint)(uVar17 < uVar27))) < 0 ==
            (SBORROW4(iVar21,iVar29) != SBORROW4(iVar21 - iVar29,(uint)(uVar17 < uVar27))))
        goto LAB_080d9e40;
      }
      goto LAB_080d9d00;
    }
    uVar8 = RawRead::Get2(&Raw);
    (this->ShortBlock).HeadCRC = (uint)uVar8;
    (this->ShortBlock).SkipIfUnknown = false;
    bVar5 = RawRead::Get1(&Raw);
    HVar30 = (HEADER_TYPE)bVar5;
    HeaderType = (uint)&Raw;
    uVar8 = RawRead::Get2((RawRead *)HeaderType);
    (this->ShortBlock).Flags = (uint)uVar8;
    (this->ShortBlock).SkipIfUnknown = SUB41(((uint)uVar8 << 0x11) >> 0x1f,0);
    uVar8 = RawRead::Get2(&Raw);
    uVar17 = (uint)uVar8;
    (this->ShortBlock).HeaderType = HVar30;
    (this->ShortBlock).HeadSize = uVar17;
    if (6 < uVar17) {
      switch(HVar30) {
      case HEAD3_MAIN:
        (this->ShortBlock).HeaderType = HEAD_MAIN;
        this->CurHeaderType = HEAD_MAIN;
LAB_080da050:
        if (((this->ShortBlock).Flags & 2) == 0) goto LAB_080d9f0c;
LAB_080da05c:
        RawRead::Read(&Raw,6);
        goto LAB_080d9f18;
      case HEAD3_FILE:
        HVar30 = HEAD_FILE;
        (this->ShortBlock).HeaderType = HEAD_FILE;
        break;
      default:
        this->CurHeaderType = HVar30;
        if (HVar30 == HEAD3_CMT) goto LAB_080da05c;
        if (HVar30 == HEAD_MAIN) goto LAB_080da050;
        goto LAB_080d9f0c;
      case HEAD3_SERVICE:
        HVar30 = HEAD_SERVICE;
        (this->ShortBlock).HeaderType = HEAD_SERVICE;
        break;
      case HEAD3_ENDARC:
        HVar30 = HEAD_ENDARC;
        (this->ShortBlock).HeaderType = HEAD_ENDARC;
      }
      this->CurHeaderType = HVar30;
LAB_080d9f0c:
      RawRead::Read(&Raw,uVar17 - 7);
LAB_080d9f18:
      uVar17 = *(uint *)&this->CurBlockPos;
      iVar21 = *(int *)((int)&this->CurBlockPos + 4);
      uVar10 = FullHeaderSize(this,(this->ShortBlock).HeadSize);
      HVar30 = (this->ShortBlock).HeaderType;
      *(uint *)&this->NextBlockPos = uVar17 + uVar10;
      *(uint *)((int)&this->NextBlockPos + 4) = iVar21 + (uint)CARRY4(uVar17,uVar10);
      if (HVar30 == HEAD3_CMT) {
        HVar30 = (this->ShortBlock).HeaderType;
        uVar10 = (this->ShortBlock).Flags;
        uVar23 = (this->ShortBlock).HeadSize;
        bVar31 = (this->ShortBlock).SkipIfUnknown;
        uVar3 = *(undefined3 *)&(this->ShortBlock).field_0x11;
        (this->CommHead).super_BaseBlock.HeadCRC = (this->ShortBlock).HeadCRC;
        (this->CommHead).super_BaseBlock.HeaderType = HVar30;
        (this->CommHead).super_BaseBlock.Flags = uVar10;
        (this->CommHead).super_BaseBlock.HeadSize = uVar23;
        (this->CommHead).super_BaseBlock.SkipIfUnknown = bVar31;
        *(undefined3 *)&(this->CommHead).super_BaseBlock.field_0x11 = uVar3;
        uVar8 = RawRead::Get2(&Raw);
        (this->CommHead).UnpSize = uVar8;
        bVar6 = RawRead::Get1(&Raw);
        (this->CommHead).UnpVer = bVar6;
        bVar6 = RawRead::Get1(&Raw);
        (this->CommHead).Method = bVar6;
        uVar8 = RawRead::Get2(&Raw);
        (this->CommHead).CommCRC = uVar8;
      }
      else if (HVar30 < HEAD3_AV) {
        if (HVar30 < HEAD_CRYPT) {
          if (HVar30 < HEAD_FILE) {
            if (HVar30 != HEAD_MAIN) goto LAB_080daaa8;
            MainHeader::Reset(&this->MainHead);
            HVar30 = (this->ShortBlock).HeaderType;
            uVar10 = (this->ShortBlock).Flags;
            uVar23 = (this->ShortBlock).HeadSize;
            bVar31 = (this->ShortBlock).SkipIfUnknown;
            uVar3 = *(undefined3 *)&(this->ShortBlock).field_0x11;
            (this->MainHead).super_BaseBlock.HeadCRC = (this->ShortBlock).HeadCRC;
            (this->MainHead).super_BaseBlock.HeaderType = HVar30;
            (this->MainHead).super_BaseBlock.Flags = uVar10;
            (this->MainHead).super_BaseBlock.HeadSize = uVar23;
            (this->MainHead).super_BaseBlock.SkipIfUnknown = bVar31;
            *(undefined3 *)&(this->MainHead).super_BaseBlock.field_0x11 = uVar3;
            uVar8 = RawRead::Get2(&Raw);
            (this->MainHead).HighPosAV = uVar8;
            uVar10 = RawRead::Get4(&Raw);
            uVar23 = (this->MainHead).super_BaseBlock.Flags;
            (this->MainHead).PosAV = uVar10;
            this->Solid = SUB41((uVar23 << 0x1c) >> 0x1f,0);
            this->Volume = (bool)((byte)uVar23 & 1);
            this->Locked = SUB41((uVar23 << 0x1d) >> 0x1f,0);
            this->Protected = SUB41((uVar23 << 0x19) >> 0x1f,0);
            this->Encrypted = (bool)((byte)uVar23 >> 7);
            if (uVar10 == 0) {
              uVar8 = (this->MainHead).HighPosAV;
              if (uVar8 != 0) {
                uVar8 = 1;
              }
            }
            else {
              uVar8 = 1;
            }
            this->Signed = SUB21(uVar8,0);
            (this->MainHead).CommentInHeader = SUB41((uVar23 << 0x1e) >> 0x1f,0);
            this->FirstVolume = SUB41((uVar23 << 0x17) >> 0x1f,0);
            this->NewNumbering = SUB41((uVar23 << 0x1b) >> 0x1f,0);
          }
          else {
            if (HVar30 == HEAD_FILE) {
              this_01 = &this->FileHead;
            }
            else {
              this_01 = &this->SubHead;
            }
            FileHeader::Reset(this_01,0);
            HVar13 = (this->ShortBlock).HeaderType;
            (this_01->super_BlockHeader).super_BaseBlock.HeadCRC = (this->ShortBlock).HeadCRC;
            (this_01->super_BlockHeader).super_BaseBlock.HeaderType = HVar13;
            uVar10 = (this->ShortBlock).HeadSize;
            (this_01->super_BlockHeader).super_BaseBlock.Flags = (this->ShortBlock).Flags;
            (this_01->super_BlockHeader).super_BaseBlock.HeadSize = uVar10;
            uVar17 = (this_01->super_BlockHeader).super_BaseBlock.Flags;
            uVar3 = *(undefined3 *)&(this->ShortBlock).field_0x11;
            (this_01->super_BlockHeader).super_BaseBlock.SkipIfUnknown =
                 (this->ShortBlock).SkipIfUnknown;
            *(undefined3 *)&(this_01->super_BlockHeader).super_BaseBlock.field_0x11 = uVar3;
            this_01->SplitBefore = (bool)((byte)uVar17 & 1);
            this_01->SplitAfter = SUB41((uVar17 << 0x1e) >> 0x1f,0);
            this_01->Encrypted = SUB41((uVar17 << 0x1d) >> 0x1f,0);
            this_01->SaltSet = SUB41((uVar17 << 0x15) >> 0x1f,0);
            if (HVar30 == HEAD_FILE) {
              bVar5 = (byte)(uVar17 & 0x10);
              if ((uVar17 & 0x10) == 0) {
                this_01->Solid = false;
              }
              else {
                bVar5 = false;
                this_01->Solid = true;
              }
            }
            else {
              bVar5 = (byte)((uVar17 << 0x1b) >> 0x1f);
              this_01->Solid = false;
            }
            this_01->SubBlock = (bool)bVar5;
            bVar31 = (uVar17 & 0xe0) != 0xe0;
            if (bVar31) {
              uVar9 = (uVar17 & 0xe0) >> 5;
            }
            else {
              uVar9 = 0;
            }
            uVar27 = (uint)!bVar31;
            this_01->Dir = !bVar31;
            if (bVar31) {
              uVar27 = 0x10000;
            }
            if (bVar31) {
              uVar9 = uVar27 << uVar9;
            }
            this_01->CommentInHeader = SUB41((uVar17 << 0x1c) >> 0x1f,0);
            this_01->Version = SUB41((uVar17 << 0x14) >> 0x1f,0);
            this_01->WinSize = uVar9;
            uVar10 = RawRead::Get4(&Raw);
            (this_01->super_BlockHeader).DataSize = uVar10;
            uVar10 = RawRead::Get4(&Raw);
            LowUnpSize = (uint)&Raw;
            bVar6 = RawRead::Get1((RawRead *)LowUnpSize);
            this_01->HostOS = bVar6;
            (this_01->FileHash).Type = HASH_CRC32;
            uVar23 = RawRead::Get4(&Raw);
            (this_01->FileHash).field_1.CRC32 = uVar23;
            uVar23 = RawRead::Get4(&Raw);
            FileTime = (uint)&Raw;
            bVar6 = RawRead::Get1((RawRead *)FileTime);
            this_01->UnpVer = bVar6;
            bVar6 = RawRead::Get1(&Raw);
            this_01->Method = bVar6 + 0xd0;
            uVar8 = RawRead::Get2(&Raw);
            uVar9 = (uint)uVar8;
            NameSize = (size_t)&Raw;
            uVar17 = RawRead::Get4((RawRead *)NameSize);
            (this_01->field_3).FileAttr = uVar17;
            this_01->CryptMethod = CRYPT_NONE;
            if (this_01->Encrypted != false) {
              switch(this_01->UnpVer) {
              case '\r':
                this_01->CryptMethod = CRYPT_RAR13;
                break;
              default:
                this_01->CryptMethod = CRYPT_RAR30;
                break;
              case '\x0f':
                this_01->CryptMethod = CRYPT_RAR15;
                break;
              case '\x14':
              case '\x1a':
                this_01->CryptMethod = CRYPT_RAR20;
              }
            }
            this_01->HSType = HSYS_UNKNOWN;
            bVar5 = this_01->HostOS;
            if ((bVar5 - 3 & 0xfd) == 0) {
              this_01->HSType = HSYS_UNIX;
              this_01->RedirType = FSREDIR_NONE;
              if ((bVar5 == 3) && ((uVar17 & 0xf000) == 0xa000)) {
                this_01->RedirType = FSREDIR_UNIXSYMLINK;
                this_01->RedirName[0] = 0;
              }
            }
            else {
              if (bVar5 < 6) {
                this_01->HSType = HSYS_WINDOWS;
              }
              this_01->RedirType = FSREDIR_NONE;
            }
            if (HVar30 != HEAD_FILE) {
              uVar17 = uVar17 >> 0x1f;
            }
            uVar7 = (undefined)uVar17;
            if (HVar30 == HEAD_FILE) {
              uVar7 = false;
            }
            uVar17 = (this_01->super_BlockHeader).super_BaseBlock.Flags;
            this_01->Inherited = (bool)uVar7;
            uVar17 = uVar17 & 0x100;
            bVar31 = uVar17 != 0;
            if (bVar31) {
              uVar17 = 1;
            }
            bVar20 = SUB41(uVar17,0);
            if (!bVar31) {
              bVar20 = false;
            }
            this_01->LargeFile = bVar20;
            if (bVar31) {
              uVar24 = RawRead::Get4(&Raw);
              uStack_289c = RawRead::Get4(&Raw);
              bVar31 = uStack_289c == 0xffffffff && uVar10 == 0xffffffff;
              this_01->UnknownUnpSize = bVar31;
            }
            else {
              bVar31 = uVar10 == 0xffffffff;
              this_01->UnknownUnpSize = bVar31;
              uStack_289c = 0;
              uVar24 = 0;
            }
            *(uint *)&this_01->PackSize = (this_01->super_BlockHeader).DataSize;
            *(uint *)((int)&this_01->PackSize + 4) = uVar24;
            if (bVar31) {
              iVar34 = SIMDExpandImmediate(1,6,0x80);
              this_01->UnpSize = iVar34;
            }
            else {
              *(uint *)&this_01->UnpSize = uVar10;
              *(uint *)((int)&this_01->UnpSize + 4) = uStack_289c;
            }
            sVar18 = 0x1fff;
            if (uVar9 < 0x1fff) {
              sVar18 = uVar9;
            }
            RawRead::GetB(&Raw,Salt,sVar18);
            Salt[sVar18] = '\0';
            if (HVar30 == HEAD_FILE) {
              if (((this_01->super_BlockHeader).super_BaseBlock.Flags & 0x200) == 0) {
                this_01->FileName[0] = 0;
              }
              else {
                EncodeFileName::EncodeFileName(&NameCoder);
                sVar11 = strlen((char *)Salt);
                if (uVar9 == sVar11) {
                  UtfToWide((char *)Salt,this_01->FileName,0x7ff);
                }
                else {
                  EncodeFileName::Decode
                            (&NameCoder,(char *)Salt,Salt + sVar11 + 1,uVar9 - (sVar11 + 1),
                             this_01->FileName,0x800);
                }
              }
              IntToExt((char *)Salt,AnsiName,0x800);
              pwVar28 = this_01->FileName;
              GetWideName(AnsiName,pwVar28,pwVar28,0x800);
              iVar21 = this->Cmd->ConvertNames;
              if (iVar21 == 1) {
                wcsupper(pwVar28);
                iVar21 = this->Cmd->ConvertNames;
              }
              if (iVar21 == 2) {
                wcslower(pwVar28);
              }
              if (((this->Format == RARFMT15) && (this_01->UnpVer < 0x14)) &&
                 (((this_01->field_3).FileAttr & 0x10) != 0)) {
                HVar14 = this_01->HSType;
                this_01->Dir = true;
                if (HVar14 == HSYS_UNKNOWN) {
LAB_080daf40:
                  HVar14 = HSYS_UNKNOWN;
                  (this_01->field_3).FileAttr = 0x10;
                }
              }
              else {
                HVar14 = this_01->HSType;
                if (HVar14 == HSYS_UNKNOWN) {
                  if (this_01->Dir != false) goto LAB_080daf40;
                  (this_01->field_3).FileAttr = 0x20;
                }
              }
              wVar25 = this_01->FileName[0];
              while (wVar25 != 0) {
                if ((wVar25 == 0x5c) && (this->Format == RARFMT50 && HVar14 == HSYS_WINDOWS)) {
                  *pwVar28 = 0x5f;
                }
                else if ((*pwVar28 == 0x2f) || ((*pwVar28 == 0x5c && (this->Format != RARFMT50)))) {
                  *pwVar28 = 0x2f;
                }
                pwVar28 = pwVar28 + 1;
                wVar25 = *pwVar28;
              }
              uVar17 = (this_01->super_BlockHeader).super_BaseBlock.Flags;
            }
            else {
              pwVar28 = this_01->FileName;
              CharToWide((char *)Salt,pwVar28,0x800);
              uVar17 = (this_01->super_BlockHeader).super_BaseBlock.Flags;
              DataSize = ((this_01->super_BlockHeader).super_BaseBlock.HeadSize - 0x20) - uVar9;
              if ((uVar17 & 0x400) != 0) {
                DataSize = DataSize + -8;
              }
              if (0 < DataSize) {
                puVar26 = (undefined *)(this_01->SubData).AllocSize;
                if (puVar26 < (uint)DataSize) {
                  puVar19 = (undefined *)(this_01->SubData).MaxSize;
                  (this_01->SubData).BufSize = DataSize;
                  bVar31 = puVar19 == (undefined *)0x0;
                  pwVar16 = this_01->FileName + 0x7f8;
                  if (!bVar31 && puVar19 > (uint)DataSize ||
                      (bVar31 || (undefined *)DataSize == puVar19)) {
                    pwVar16 = (wchar *)DataSize;
                  }
                  if ((bVar31 || puVar19 <= (uint)DataSize) &&
                      (!bVar31 && (undefined *)DataSize != puVar19)) {
                    ErrorHandler::GeneralErrMsg
                              (&ErrHandler,(wchar *)L"Maximum allowed array size (%u) is exceeded");
                    ErrorHandler::MemoryError(&ErrHandler);
                    pwVar16 = (wchar *)(this_01->SubData).BufSize;
                    puVar26 = (undefined *)(this_01->SubData).AllocSize;
                  }
                  __size = (wchar *)(puVar26 + ((uint)puVar26 >> 2) + 0x20);
                  if (puVar26 + ((uint)puVar26 >> 2) + 0x20 < pwVar16) {
                    __size = pwVar16;
                  }
                  puVar15 = (uchar *)realloc((this_01->SubData).Buffer,(size_t)__size);
                  if (puVar15 == (uchar *)0x0) {
                    ErrorHandler::MemoryError(&ErrHandler);
                  }
                  (this_01->SubData).Buffer = puVar15;
                  (this_01->SubData).AllocSize = (size_t)__size;
                }
                else {
                  puVar15 = (this_01->SubData).Buffer;
                  (this_01->SubData).BufSize = DataSize;
                }
                RawRead::GetB(&Raw,puVar15,DataSize);
                iVar21 = wcscmp((wchar_t *)pwVar28,L"RR");
                if (iVar21 == 0) {
                  puVar15 = (this_01->SubData).Buffer;
                  p_Var12 = (this->super_File)._vptr_File[4];
                  iVar21 = (uint)puVar15[10] * 0x10000 + (uint)puVar15[9] * 0x100 + (uint)puVar15[8]
                           + (uint)puVar15[0xb] * 0x1000000;
                  uVar33 = VectorShiftRight(CONCAT44(iVar21,iVar21),0x20);
                  iVar34 = VectorShiftLeft(uVar33,9,0x40,0);
                  this->RecoverySize = iVar34;
                  iVar21 = (*p_Var12)();
                  iVar22 = ToPercent(CONCAT44(in_stack_ffffd734,in_stack_ffffd730),
                                     CONCAT44(in_stack_ffffd73c,in_stack_ffffd738));
                  this->RecoveryPercent = iVar22;
                  __aeabi_ldivmod(iVar21,extraout_r1_01,200,0);
                  iVar21 = ToPercent(CONCAT44(in_stack_ffffd734,in_stack_ffffd730),
                                     CONCAT44(in_stack_ffffd73c,in_stack_ffffd738));
                  if (this->RecoveryPercent < iVar21) {
                    uVar17 = (this_01->super_BlockHeader).super_BaseBlock.Flags;
                    this->RecoveryPercent = this->RecoveryPercent + 1;
                    goto LAB_080dac1c;
                  }
                }
                uVar17 = (this_01->super_BlockHeader).super_BaseBlock.Flags;
              }
LAB_080dac1c:
              iVar21 = wcscmp((wchar_t *)pwVar28,L"CMT");
              if (iVar21 == 0) {
                this->MainComment = true;
              }
            }
            if ((uVar17 & 0x400) != 0) {
              RawRead::GetB(&Raw,this_01->Salt,8);
            }
            RarTime::SetDos(&this_01->mtime,uVar23);
            if (((this_01->super_BlockHeader).super_BaseBlock.Flags & 0x1000) != 0) {
              uVar8 = RawRead::Get2(&Raw);
              tbl[3] = (RarTime *)0x0;
              local_28ac = 0;
              uVar17 = 0xc;
              tbl[0] = &(this->FileHead).mtime;
              tbl[1] = &(this->FileHead).ctime;
              tbl[2] = &(this->FileHead).atime;
              do {
                uVar9 = (int)(uint)uVar8 >> (uVar17 & 0xff);
                this_00 = tbl[local_28ac];
                uVar27 = ((uVar9 ^ 8) << 0x1c) >> 0x1f;
                if (this_00 == (RarTime *)0x0) {
                  uVar27 = 1;
                }
                if (uVar27 == 0) {
                  if (local_28ac != 0) {
                    uVar10 = RawRead::Get4(&Raw);
                    RarTime::SetDos(this_00,uVar10);
                  }
                  RarTime::GetLocal(this_00,(RarLocalTime *)&NameCoder);
                  uVar9 = uVar9 & 3;
                  if (uVar9 != 0) {
                    iVar21 = (3 - uVar9) * 8;
                    do {
                      RawRead::Get1(&Raw);
                      iVar21 = iVar21 + 8;
                    } while (iVar21 != 0x18);
                  }
                  RarTime::SetLocal(this_00,(RarLocalTime *)&NameCoder);
                }
                uVar17 = uVar17 - 4;
                local_28ac = local_28ac + 1;
              } while (local_28ac != 4);
            }
            iVar34 = this->NextBlockPos;
            bVar31 = this_01->CommentInHeader;
            uVar17 = *(uint *)&this_01->PackSize;
            iVar21 = *(int *)((int)&this_01->PackSize + 4);
            uVar9 = (uint)iVar34;
            *(uint *)&this->NextBlockPos = uVar9 + uVar17;
            *(uint *)((int)&this->NextBlockPos + 4) =
                 (int)((ulonglong)iVar34 >> 0x20) + iVar21 + (uint)CARRY4(uVar9,uVar17);
            uVar10 = RawRead::GetCRC15(&Raw,bVar31);
            if ((uVar10 & 0xffff) != (this_01->super_BlockHeader).super_BaseBlock.HeadCRC) {
              this->BrokenHeader = true;
              ErrorHandler::SetErrorCode(&ErrHandler,RARX_WARNING);
            }
          }
        }
        else if (HVar30 == HEAD_ENDARC) {
          HVar30 = (this->ShortBlock).HeaderType;
          uVar10 = (this->ShortBlock).Flags;
          uVar23 = (this->ShortBlock).HeadSize;
          bVar31 = (this->ShortBlock).SkipIfUnknown;
          uVar3 = *(undefined3 *)&(this->ShortBlock).field_0x11;
          (this->EndArcHead).super_BaseBlock.HeadCRC = (this->ShortBlock).HeadCRC;
          (this->EndArcHead).super_BaseBlock.HeaderType = HVar30;
          (this->EndArcHead).super_BaseBlock.Flags = uVar10;
          (this->EndArcHead).super_BaseBlock.HeadSize = uVar23;
          uVar17 = (this->EndArcHead).super_BaseBlock.Flags;
          (this->EndArcHead).super_BaseBlock.SkipIfUnknown = bVar31;
          *(undefined3 *)&(this->EndArcHead).super_BaseBlock.field_0x11 = uVar3;
          bVar31 = (uVar17 & 2) != 0;
          (this->EndArcHead).NextVolume = (bool)((byte)uVar17 & 1);
          uVar9 = (uVar17 << 0x1c) >> 0x1f;
          (this->EndArcHead).DataCRC = bVar31;
          (this->EndArcHead).RevSpace = SUB41((uVar17 << 0x1d) >> 0x1f,0);
          (this->EndArcHead).StoreVolNumber = SUB41((uVar17 << 0x1c) >> 0x1f,0);
          if (bVar31) {
            uVar10 = RawRead::Get4(&Raw);
            uVar9 = (uint)(this->EndArcHead).StoreVolNumber;
            (this->EndArcHead).ArcDataCRC = uVar10;
          }
          if (uVar9 != 0) {
            uVar8 = RawRead::Get2(&Raw);
            (this->EndArcHead).VolNumber = (uint)uVar8;
            this->VolNumber = (uint)uVar8;
          }
        }
        else {
LAB_080daaa8:
          if (((this->ShortBlock).Flags & 0x8000) != 0) {
            uVar10 = RawRead::Get4(&Raw);
            uVar17 = *(uint *)&this->NextBlockPos;
            iVar21 = *(int *)((int)&this->NextBlockPos + 4);
            *(uint *)&this->NextBlockPos = uVar17 + uVar10;
            *(uint *)((int)&this->NextBlockPos + 4) = iVar21 + (uint)CARRY4(uVar17,uVar10);
          }
        }
      }
      else if (HVar30 == HEAD3_OLDSERVICE) {
        HVar30 = (this->ShortBlock).HeaderType;
        uVar10 = (this->ShortBlock).Flags;
        uVar23 = (this->ShortBlock).HeadSize;
        bVar31 = (this->ShortBlock).SkipIfUnknown;
        uVar3 = *(undefined3 *)&(this->ShortBlock).field_0x11;
        (this->SubBlockHead).super_BlockHeader.super_BaseBlock.HeadCRC = (this->ShortBlock).HeadCRC;
        (this->SubBlockHead).super_BlockHeader.super_BaseBlock.HeaderType = HVar30;
        (this->SubBlockHead).super_BlockHeader.super_BaseBlock.Flags = uVar10;
        (this->SubBlockHead).super_BlockHeader.super_BaseBlock.HeadSize = uVar23;
        (this->SubBlockHead).super_BlockHeader.super_BaseBlock.SkipIfUnknown = bVar31;
        *(undefined3 *)&(this->SubBlockHead).super_BlockHeader.super_BaseBlock.field_0x11 = uVar3;
        uVar10 = RawRead::Get4(&Raw);
        uVar17 = *(uint *)&this->NextBlockPos;
        iVar21 = *(int *)((int)&this->NextBlockPos + 4);
        (this->SubBlockHead).super_BlockHeader.DataSize = uVar10;
        *(uint *)&this->NextBlockPos = uVar17 + uVar10;
        *(uint *)((int)&this->NextBlockPos + 4) = iVar21 + (uint)CARRY4(uVar17,uVar10);
        uVar8 = RawRead::Get2(&Raw);
        (this->SubBlockHead).SubType = uVar8;
        bVar6 = RawRead::Get1(&Raw);
        (this->SubBlockHead).Level = bVar6;
        switch((this->SubBlockHead).SubType) {
        case 0x100:
        case 0x103:
        case 0x104:
          uVar10 = (this->SubBlockHead).super_BlockHeader.super_BaseBlock.Flags;
          HVar30 = (this->SubBlockHead).super_BlockHeader.super_BaseBlock.HeaderType;
          uVar23 = (this->SubBlockHead).super_BlockHeader.super_BaseBlock.HeadSize;
          (this->EAHead).super_SubBlockHeader.super_BlockHeader.super_BaseBlock.HeadCRC =
               (this->SubBlockHead).super_BlockHeader.super_BaseBlock.HeadCRC;
          (this->EAHead).super_SubBlockHeader.super_BlockHeader.super_BaseBlock.HeaderType = HVar30;
          (this->EAHead).super_SubBlockHeader.super_BlockHeader.super_BaseBlock.Flags = uVar10;
          (this->EAHead).super_SubBlockHeader.super_BlockHeader.super_BaseBlock.HeadSize = uVar23;
          uVar10 = (this->SubBlockHead).super_BlockHeader.DataSize;
          uVar3 = *(undefined3 *)&(this->SubBlockHead).super_BlockHeader.super_BaseBlock.field_0x11;
          pSVar2 = &(this->EAHead).super_SubBlockHeader;
          (pSVar2->super_BlockHeader).super_BaseBlock.SkipIfUnknown =
               (this->SubBlockHead).super_BlockHeader.super_BaseBlock.SkipIfUnknown;
          *(undefined3 *)&(pSVar2->super_BlockHeader).super_BaseBlock.field_0x11 = uVar3;
          (this->EAHead).super_SubBlockHeader.super_BlockHeader.DataSize = uVar10;
          bVar6 = (this->SubBlockHead).Level;
          (this->EAHead).super_SubBlockHeader.SubType = (this->SubBlockHead).SubType;
          (this->EAHead).super_SubBlockHeader.Level = bVar6;
          uVar10 = RawRead::Get4(&Raw);
          (this->EAHead).UnpSize = uVar10;
          bVar6 = RawRead::Get1(&Raw);
          (this->EAHead).UnpVer = bVar6;
          bVar6 = RawRead::Get1(&Raw);
          (this->EAHead).Method = bVar6;
          uVar10 = RawRead::Get4(&Raw);
          (this->EAHead).EACRC = uVar10;
          break;
        case 0x101:
          uVar10 = (this->SubBlockHead).super_BlockHeader.super_BaseBlock.Flags;
          HVar30 = (this->SubBlockHead).super_BlockHeader.super_BaseBlock.HeaderType;
          uVar23 = (this->SubBlockHead).super_BlockHeader.super_BaseBlock.HeadSize;
          (this->UOHead).super_SubBlockHeader.super_BlockHeader.super_BaseBlock.HeadCRC =
               (this->SubBlockHead).super_BlockHeader.super_BaseBlock.HeadCRC;
          (this->UOHead).super_SubBlockHeader.super_BlockHeader.super_BaseBlock.HeaderType = HVar30;
          (this->UOHead).super_SubBlockHeader.super_BlockHeader.super_BaseBlock.Flags = uVar10;
          (this->UOHead).super_SubBlockHeader.super_BlockHeader.super_BaseBlock.HeadSize = uVar23;
          uVar10 = (this->SubBlockHead).super_BlockHeader.DataSize;
          uVar3 = *(undefined3 *)&(this->SubBlockHead).super_BlockHeader.super_BaseBlock.field_0x11;
          pSVar2 = &(this->UOHead).super_SubBlockHeader;
          (pSVar2->super_BlockHeader).super_BaseBlock.SkipIfUnknown =
               (this->SubBlockHead).super_BlockHeader.super_BaseBlock.SkipIfUnknown;
          *(undefined3 *)&(pSVar2->super_BlockHeader).super_BaseBlock.field_0x11 = uVar3;
          (this->UOHead).super_SubBlockHeader.super_BlockHeader.DataSize = uVar10;
          bVar6 = (this->SubBlockHead).Level;
          (this->UOHead).super_SubBlockHeader.SubType = (this->SubBlockHead).SubType;
          (this->UOHead).super_SubBlockHeader.Level = bVar6;
          uVar8 = RawRead::Get2(&Raw);
          (this->UOHead).OwnerNameSize = uVar8;
          uVar8 = RawRead::Get2(&Raw);
          sVar18 = (size_t)(this->UOHead).OwnerNameSize;
          (this->UOHead).GroupNameSize = uVar8;
          if (0xff < sVar18) {
            sVar18 = 0xff;
            (this->UOHead).OwnerNameSize = 0xff;
          }
          if (0xff < uVar8) {
            (this->UOHead).GroupNameSize = 0xff;
          }
          RawRead::GetB(&Raw,(this->UOHead).OwnerName,sVar18);
          RawRead::GetB(&Raw,(this->UOHead).GroupName,(uint)(this->UOHead).GroupNameSize);
          *(undefined *)((int)(&this->ProtectHead + 3) + (this->UOHead).OwnerNameSize + 8) = 0;
          (this->UOHead).GroupName[(this->UOHead).GroupNameSize] = '\0';
          break;
        case 0x102:
          uVar10 = (this->SubBlockHead).super_BlockHeader.super_BaseBlock.Flags;
          HVar30 = (this->SubBlockHead).super_BlockHeader.super_BaseBlock.HeaderType;
          uVar23 = (this->SubBlockHead).super_BlockHeader.super_BaseBlock.HeadSize;
          (this->MACHead).super_SubBlockHeader.super_BlockHeader.super_BaseBlock.HeadCRC =
               (this->SubBlockHead).super_BlockHeader.super_BaseBlock.HeadCRC;
          (this->MACHead).super_SubBlockHeader.super_BlockHeader.super_BaseBlock.HeaderType = HVar30
          ;
          (this->MACHead).super_SubBlockHeader.super_BlockHeader.super_BaseBlock.Flags = uVar10;
          (this->MACHead).super_SubBlockHeader.super_BlockHeader.super_BaseBlock.HeadSize = uVar23;
          uVar10 = (this->SubBlockHead).super_BlockHeader.DataSize;
          uVar3 = *(undefined3 *)&(this->SubBlockHead).super_BlockHeader.super_BaseBlock.field_0x11;
          pSVar2 = &(this->MACHead).super_SubBlockHeader;
          (pSVar2->super_BlockHeader).super_BaseBlock.SkipIfUnknown =
               (this->SubBlockHead).super_BlockHeader.super_BaseBlock.SkipIfUnknown;
          *(undefined3 *)&(pSVar2->super_BlockHeader).super_BaseBlock.field_0x11 = uVar3;
          (this->MACHead).super_SubBlockHeader.super_BlockHeader.DataSize = uVar10;
          bVar6 = (this->SubBlockHead).Level;
          (this->MACHead).super_SubBlockHeader.SubType = (this->SubBlockHead).SubType;
          (this->MACHead).super_SubBlockHeader.Level = bVar6;
          uVar10 = RawRead::Get4(&Raw);
          (this->MACHead).fileType = uVar10;
          uVar10 = RawRead::Get4(&Raw);
          (this->MACHead).fileCreator = uVar10;
          break;
        case 0x105:
          uVar10 = (this->SubBlockHead).super_BlockHeader.super_BaseBlock.Flags;
          HVar30 = (this->SubBlockHead).super_BlockHeader.super_BaseBlock.HeaderType;
          uVar23 = (this->SubBlockHead).super_BlockHeader.super_BaseBlock.HeadSize;
          (this->StreamHead).super_SubBlockHeader.super_BlockHeader.super_BaseBlock.HeadCRC =
               (this->SubBlockHead).super_BlockHeader.super_BaseBlock.HeadCRC;
          (this->StreamHead).super_SubBlockHeader.super_BlockHeader.super_BaseBlock.HeaderType =
               HVar30;
          (this->StreamHead).super_SubBlockHeader.super_BlockHeader.super_BaseBlock.Flags = uVar10;
          (this->StreamHead).super_SubBlockHeader.super_BlockHeader.super_BaseBlock.HeadSize =
               uVar23;
          uVar10 = (this->SubBlockHead).super_BlockHeader.DataSize;
          uVar3 = *(undefined3 *)&(this->SubBlockHead).super_BlockHeader.super_BaseBlock.field_0x11;
          pSVar2 = &(this->StreamHead).super_SubBlockHeader;
          (pSVar2->super_BlockHeader).super_BaseBlock.SkipIfUnknown =
               (this->SubBlockHead).super_BlockHeader.super_BaseBlock.SkipIfUnknown;
          *(undefined3 *)&(pSVar2->super_BlockHeader).super_BaseBlock.field_0x11 = uVar3;
          (this->StreamHead).super_SubBlockHeader.super_BlockHeader.DataSize = uVar10;
          bVar6 = (this->SubBlockHead).Level;
          (this->StreamHead).super_SubBlockHeader.SubType = (this->SubBlockHead).SubType;
          (this->StreamHead).super_SubBlockHeader.Level = bVar6;
          uVar10 = RawRead::Get4(&Raw);
          (this->StreamHead).UnpSize = uVar10;
          bVar6 = RawRead::Get1(&Raw);
          (this->StreamHead).UnpVer = bVar6;
          bVar6 = RawRead::Get1(&Raw);
          (this->StreamHead).Method = bVar6;
          uVar10 = RawRead::Get4(&Raw);
          (this->StreamHead).StreamCRC = uVar10;
          uVar8 = RawRead::Get2(&Raw);
          uVar17 = (uint)uVar8;
          if (uVar17 < 0x104) {
            (this->StreamHead).StreamNameSize = uVar8;
          }
          else {
            uVar17 = 0x103;
            (this->StreamHead).StreamNameSize = 0x103;
          }
          RawRead::GetB(&Raw,(this->StreamHead).StreamName,uVar17);
          (this->StreamHead).StreamName[(this->StreamHead).StreamNameSize] = '\0';
        }
      }
      else if (HVar30 < HEAD3_OLDSERVICE) {
        HVar30 = (this->ShortBlock).HeaderType;
        uVar10 = (this->ShortBlock).Flags;
        uVar23 = (this->ShortBlock).HeadSize;
        bVar31 = (this->ShortBlock).SkipIfUnknown;
        uVar3 = *(undefined3 *)&(this->ShortBlock).field_0x11;
        (this->AVHead).super_BaseBlock.HeadCRC = (this->ShortBlock).HeadCRC;
        (this->AVHead).super_BaseBlock.HeaderType = HVar30;
        (this->AVHead).super_BaseBlock.Flags = uVar10;
        (this->AVHead).super_BaseBlock.HeadSize = uVar23;
        (this->AVHead).super_BaseBlock.SkipIfUnknown = bVar31;
        *(undefined3 *)&(this->AVHead).super_BaseBlock.field_0x11 = uVar3;
        bVar6 = RawRead::Get1(&Raw);
        (this->AVHead).UnpVer = bVar6;
        bVar6 = RawRead::Get1(&Raw);
        (this->AVHead).Method = bVar6;
        bVar6 = RawRead::Get1(&Raw);
        (this->AVHead).AVVer = bVar6;
        uVar10 = RawRead::Get4(&Raw);
        (this->AVHead).AVInfoCRC = uVar10;
      }
      else if (HVar30 == HEAD3_PROTECT) {
        HVar30 = (this->ShortBlock).HeaderType;
        uVar10 = (this->ShortBlock).Flags;
        uVar23 = (this->ShortBlock).HeadSize;
        bVar31 = (this->ShortBlock).SkipIfUnknown;
        uVar3 = *(undefined3 *)&(this->ShortBlock).field_0x11;
        (this->ProtectHead).super_BlockHeader.super_BaseBlock.HeadCRC = (this->ShortBlock).HeadCRC;
        (this->ProtectHead).super_BlockHeader.super_BaseBlock.HeaderType = HVar30;
        (this->ProtectHead).super_BlockHeader.super_BaseBlock.Flags = uVar10;
        (this->ProtectHead).super_BlockHeader.super_BaseBlock.HeadSize = uVar23;
        (this->ProtectHead).super_BlockHeader.super_BaseBlock.SkipIfUnknown = bVar31;
        *(undefined3 *)&(this->ProtectHead).super_BlockHeader.super_BaseBlock.field_0x11 = uVar3;
        uVar10 = RawRead::Get4(&Raw);
        (this->ProtectHead).super_BlockHeader.DataSize = uVar10;
        bVar6 = RawRead::Get1(&Raw);
        (this->ProtectHead).Version = bVar6;
        uVar8 = RawRead::Get2(&Raw);
        (this->ProtectHead).RecSectors = uVar8;
        uVar10 = RawRead::Get4(&Raw);
        (this->ProtectHead).TotalBlocks = uVar10;
        RawRead::GetB(&Raw,(this->ProtectHead).Mark,8);
        uVar9 = (this->ProtectHead).super_BlockHeader.DataSize;
        uVar17 = *(uint *)&this->NextBlockPos;
        iVar21 = *(int *)((int)&this->NextBlockPos + 4);
        uVar1 = (ulonglong)(this->ProtectHead).RecSectors;
        *(uint *)&this->NextBlockPos = uVar17 + uVar9;
        *(uint *)((int)&this->NextBlockPos + 4) = iVar21 + (uint)CARRY4(uVar17,uVar9);
        iVar34 = VectorShiftRight(uVar1 << 9 | uVar1 << 0x29,0x20);
        this->RecoverySize = iVar34;
      }
      else {
        if (HVar30 != HEAD3_SIGN) goto LAB_080daaa8;
        HVar30 = (this->ShortBlock).HeaderType;
        uVar10 = (this->ShortBlock).Flags;
        uVar23 = (this->ShortBlock).HeadSize;
        bVar31 = (this->ShortBlock).SkipIfUnknown;
        uVar3 = *(undefined3 *)&(this->ShortBlock).field_0x11;
        (this->SignHead).super_BaseBlock.HeadCRC = (this->ShortBlock).HeadCRC;
        (this->SignHead).super_BaseBlock.HeaderType = HVar30;
        (this->SignHead).super_BaseBlock.Flags = uVar10;
        (this->SignHead).super_BaseBlock.HeadSize = uVar23;
        (this->SignHead).super_BaseBlock.SkipIfUnknown = bVar31;
        *(undefined3 *)&(this->SignHead).super_BaseBlock.field_0x11 = uVar3;
        uVar10 = RawRead::Get4(&Raw);
        (this->SignHead).CreationTime = uVar10;
        uVar8 = RawRead::Get2(&Raw);
        (this->SignHead).ArcNameSize = uVar8;
        uVar8 = RawRead::Get2(&Raw);
        (this->SignHead).UserNameSize = uVar8;
      }
      uVar10 = RawRead::GetCRC15(&Raw,false);
      if (((uVar10 & 0xffff) != (this->ShortBlock).HeadCRC) &&
         (HVar30 = (this->ShortBlock).HeaderType, HVar30 != HEAD3_SIGN && HVar30 != HEAD3_AV)) {
        if ((HVar30 == HEAD_ENDARC) && ((this->EndArcHead).RevSpace != false)) {
          iVar21 = (*(this->super_File)._vptr_File[4])();
          uVar17 = (*(this->super_File)._vptr_File[4])();
          p_Var12 = (this->super_File)._vptr_File[3];
          (*p_Var12)(uVar17,p_Var12,uVar17 - 7,extraout_r1_00 - (uint)(uVar17 < 7),0);
          iVar22 = 7;
          bVar31 = true;
          do {
            bVar6 = File::GetByte(&this->super_File);
            if (bVar6 != '\0') {
              bVar31 = false;
            }
            iVar22 = iVar22 + -1;
          } while (iVar22 != 0);
          p_Var12 = (this->super_File)._vptr_File[3];
          (*p_Var12)(uVar17,p_Var12,iVar21,extraout_r1,0);
          if (bVar31) goto LAB_080da140;
        }
        this->BrokenHeader = true;
        ErrorHandler::SetErrorCode(&ErrHandler,RARX_CRC);
        if (bVar32) {
          this->FailedHeaderDecryption = true;
          sVar18 = 0;
          goto LAB_080d9d14;
        }
      }
LAB_080da140:
      iVar21 = *(int *)((int)&this->CurBlockPos + 4);
      iVar22 = *(int *)((int)&this->NextBlockPos + 4);
      bVar32 = *(uint *)&this->CurBlockPos < *(uint *)&this->NextBlockPos;
      sVar18 = Raw.DataSize;
      if ((int)(iVar21 - (iVar22 + (uint)bVar32)) < 0 !=
          (SBORROW4(iVar21,iVar22) != SBORROW4(iVar21 - iVar22,(uint)bVar32))) goto LAB_080d9d14;
    }
    this->BrokenHeader = true;
    ErrorHandler::SetErrorCode(&ErrHandler,RARX_CRC);
  }
  else {
    iVar21 = *(int *)((int)&this->CurBlockPos + 4);
    uVar9 = this->SFXSize + 7;
    uVar17 = (uint)(0xfffffff8 < this->SFXSize);
    bVar32 = uVar9 < *(uint *)&this->CurBlockPos;
    if ((int)(uVar17 - (iVar21 + (uint)bVar32)) < 0 ==
        (SBORROW4(uVar17,iVar21) != SBORROW4(uVar17 - iVar21,(uint)bVar32))) {
      bVar32 = false;
      goto LAB_080d9d6c;
    }
    RequestArcPassword(this);
    in_stack_ffffd730 = Salt;
    iVar21 = (*(this->super_File)._vptr_File[2])(uVar9,in_stack_ffffd730,8);
    if (iVar21 == 8) {
      in_stack_ffffd734 = 0;
      in_stack_ffffd738 = 0;
      in_stack_ffffd73c = 0;
      CryptData::SetCryptKeys
                (&this->HeadersCrypt,false,CRYPT_RAR30,&this->Cmd->Password,in_stack_ffffd730,
                 (byte *)0x0,0,(byte *)0x0,(byte *)0x0);
      bVar32 = true;
      Raw.Crypt = &this->HeadersCrypt;
      goto LAB_080d9d6c;
    }
    iVar34 = File::FileLength(&this->super_File);
    iVar21 = (int)((ulonglong)iVar34 >> 0x20);
    uVar17 = (uint)iVar34;
    uVar9 = *(uint *)&this->CurBlockPos;
    iVar22 = *(int *)((int)&this->CurBlockPos + 4);
    if ((int)(iVar21 - (iVar22 + (uint)(uVar17 < uVar9))) < 0 ==
        (SBORROW4(iVar21,iVar22) != SBORROW4(iVar21 - iVar22,(uint)(uVar17 < uVar9)))) {
      uVar27 = *(uint *)&this->NextBlockPos;
      iVar29 = *(int *)((int)&this->NextBlockPos + 4);
      if ((int)(iVar21 - (iVar29 + (uint)(uVar17 < uVar27))) < 0 !=
          (SBORROW4(iVar21,iVar29) != SBORROW4(iVar21 - iVar29,(uint)(uVar17 < uVar27))))
      goto LAB_080d9d00;
LAB_080d9e40:
      iVar21 = (int)((ulonglong)iVar34 >> 0x20);
      if (((iVar21 != iVar22 || (uint)iVar34 != uVar9) &&
           (iVar21 != iVar29 || (uint)iVar34 != uVar27)) && (this->Format == RARFMT50))
      goto LAB_080d9d00;
    }
    else {
LAB_080d9d00:
      ErrorHandler::SetErrorCode(&ErrHandler,RARX_WARNING);
    }
  }
  sVar18 = 0;
LAB_080d9d14:
  if (Raw.Data.Buffer != (uchar *)0x0) {
    free(Raw.Data.Buffer);
  }
  if (iVar4 == __stack_chk_guard) {
    return sVar18;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


