/*
 * Ghidra decompilation
 *
 * Function : _ZN10CmdExtract14ExtractArchiveEP11CommandData
 * Address  : 080eb5e8
 * Program  : drastic
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* DWARF original prototype: EXTRACT_ARC_CODE ExtractArchive(CmdExtract * this, CommandData * Cmd)
    */

EXTRACT_ARC_CODE __thiscall CmdExtract::ExtractArchive(CmdExtract *this,CommandData *Cmd)

{
  bool bVar1;
  int iVar2;
  FILE_SYSTEM_REDIRECT FVar3;
  FILE_SYSTEM_REDIRECT FVar4;
  bool ValidCRC;
  bool bVar5;
  bool bVar6;
  size_t sVar7;
  size_t Size;
  int iVar8;
  int MatchNumber;
  int Version;
  Unpack *this_00;
  byte *extraout_r1;
  byte *extraout_r1_00;
  byte *extraout_r1_01;
  byte *extraout_r1_02;
  byte *extraout_r1_03;
  byte *extraout_r1_04;
  DataHash *this_01;
  RarTime *pRVar9;
  uint extraout_r1_05;
  byte *extraout_r1_06;
  byte *extraout_r1_07;
  byte *extraout_r1_08;
  byte *extraout_r1_09;
  byte *extraout_r1_10;
  byte *extraout_r1_11;
  byte *extraout_r1_12;
  byte *extraout_r1_13;
  uint extraout_r1_14;
  byte *extraout_r1_15;
  byte *pbVar10;
  FILE_SYSTEM_REDIRECT Type;
  bool WrongVer;
  RarTime *pRVar11;
  char cVar12;
  byte bVar13;
  wchar wVar14;
  RECURSE_MODE RVar15;
  uint uVar16;
  uint uVar17;
  byte *pbVar18;
  uint uVar19;
  RarTime *fta;
  wchar wVar20;
  wchar Command_1;
  wchar *pwVar21;
  wchar Command;
  bool bVar22;
  undefined8 uVar23;
  int64 iVar24;
  byte *in_stack_fffe6e24;
  int iStack_191bc;
  uint uStack_191b4;
  uint uStack_191ac;
  uint uStack_191a8;
  uint uStack_19198;
  uint uStack_1918c;
  bool bStack_19188;
  bool EqualNames;
  bool UserReject;
  SecPassword FilePassword;
  wchar ArcFileName [2048];
  wchar NextName [2048];
  wchar FirstVolName [2048];
  uint64 uStack_12f58;
  bool bStack_12f4c;
  uint uStack_12f48;
  uint uStack_12f44;
  RarTime RStack_12f40;
  RarTime aRStack_12f38 [2];
  Archive Arc;
  byte PswCheck [8];
  
  iVar2 = __stack_chk_guard;
  pwVar21 = this->ArcName;
  Archive::Archive(&Arc,&Cmd->super_RAROptions);
  bVar5 = File::WOpen(&Arc.super_File,pwVar21);
  if (!bVar5) {
    ErrorHandler::SetErrorCode(&ErrHandler,RARX_OPEN);
    pbVar18 = extraout_r1;
    goto LAB_080eb668;
  }
  bVar5 = Archive::IsArchive(&Arc,true);
  if (bVar5 == 0) {
    bVar5 = CmpExt(pwVar21,(wchar *)&DAT_08144bc0);
    pbVar18 = extraout_r1_08;
    if (bVar5) {
LAB_080ec228:
      ErrorHandler::SetErrorCode(&ErrHandler,RARX_WARNING);
      pbVar18 = extraout_r1_09;
    }
    goto LAB_080eb668;
  }
  pbVar18 = extraout_r1_00;
  if (Arc.FailedHeaderDecryption != false) goto LAB_080eb668;
  if (Arc.Volume != false) {
    if (Arc.FirstVolume == false) {
      VolNameToFirstName(pwVar21,FirstVolName,Arc.NewNumbering);
      iVar8 = wcsicomp(pwVar21,FirstVolName);
      if (((iVar8 != 0) && (bVar6 = FileExist(FirstVolName), bVar6)) &&
         (bVar6 = StringList::Search(&Cmd->ArcNames,FirstVolName,false), pbVar18 = extraout_r1_13,
         bVar6)) goto LAB_080eb668;
      if (Arc.Volume == false) goto LAB_080eb7a4;
    }
    uVar23 = 0;
    __wcscpy_chk(NextName,Arc.super_File.FileName,0x800);
    while( true ) {
      NextVolumeName(NextName,0x800,(bool)(Arc.NewNumbering ^ 1));
      RarTime::RarTime((RarTime *)&uStack_12f48);
      RarTime::RarTime(&RStack_12f40);
      RarTime::RarTime(aRStack_12f38);
      bVar6 = FindFile::FastFind(NextName,(FindData *)FirstVolName,false);
      if (!bVar6) break;
      uVar23 = VectorAdd(uVar23,uStack_12f58,8);
    }
    iVar24 = VectorAdd((this->DataIO).TotalArcSize,uVar23,8);
    (this->DataIO).TotalArcSize = iVar24;
  }
LAB_080eb7a4:
  iVar24 = File::FileLength(&Arc.super_File);
  pbVar10 = (this->DataIO).UnpHash.blake2ctx.R.ubuf + 0x50;
  (this->DataIO).UnpArcSize = iVar24;
  this->FirstFile = true;
  bVar6 = (Cmd->super_RAROptions).Password.PasswordSet;
  this->FileCount = 0;
  this->MatchedArgs = 0;
  this->PasswordAll = bVar6;
  if (bVar6 != false) {
    memcpy(&this->Password,&(Cmd->super_RAROptions).Password,0x201);
  }
  (this->DataIO).UnpVolume = false;
  this->PrevExtracted = false;
  this->AllMatchesExact = true;
  this->ReconstructDone = false;
  this->AnySolidDataUnpackedWell = false;
  RarTime::SetCurrentTime(&this->StartTime);
  wVar14 = Cmd->Command[0];
  if ((wVar14 == 0x49 || wVar14 == 0x54) && ((Cmd->super_RAROptions).Test = true, wVar14 == 0x49)) {
    (Cmd->super_RAROptions).DisablePercentage = true;
  }
  Archive::ViewComment(&Arc);
LAB_080eb864:
  do {
    sVar7 = Archive::ReadHeader(&Arc);
    wVar14 = Cmd->Command[0];
    pbVar18 = extraout_r1_01;
    if (sVar7 == 0) {
      pbVar18 = extraout_r1_01;
      if ((this->DataIO).UnpVolume == false) break;
      bVar6 = MergeArchive(&Arc,&this->DataIO,false,wVar14);
      pbVar18 = extraout_r1_02;
      if (!bVar6) goto LAB_080ec228;
    }
    if (Arc.CurHeaderType != HEAD_FILE) {
      if (Arc.CurHeaderType == HEAD3_OLDSERVICE) {
        if (this->PrevExtracted != false) {
          SetExtraInfo20(Cmd,&Arc,this->DestFileName);
          Archive::SeekToNext(&Arc);
          goto LAB_080eb864;
        }
      }
      else if (Arc.CurHeaderType == HEAD_SERVICE) {
        if (this->PrevExtracted != false) {
          SetExtraInfo(Cmd,&Arc,this->DestFileName);
        }
      }
      else if (Arc.CurHeaderType == HEAD_ENDARC) {
        if (Arc.EndArcHead.NextVolume == false) break;
        bVar6 = MergeArchive(&Arc,&this->DataIO,false,wVar14);
        if (!bVar6) goto LAB_080ec228;
        Archive::Seek(&Arc,ZEXT48(in_stack_fffe6e24) << 0x20,0);
        goto LAB_080eb864;
      }
LAB_080eb954:
      Archive::SeekToNext(&Arc);
      goto LAB_080eb864;
    }
    RVar15 = (Cmd->super_RAROptions).Recurse;
    this->PrevExtracted = false;
    pbVar18 = pbVar10;
    if (((RVar15 == RECURSE_NONE) && ((Cmd->FileArgs).StringsCount <= this->MatchedArgs)) &&
       (this->AllMatchesExact != false)) break;
    EqualNames = false;
    iVar8 = CommandData::IsProcessFile(Cmd,&Arc.FileHead,&EqualNames,5);
    iStack_191bc = iVar8;
    if (iVar8 != 0) {
      iStack_191bc = 1;
    }
    if ((Cmd->super_RAROptions).ExclPath == EXCL_BASEPATH) {
      (Cmd->super_RAROptions).ArcPath[0] = 0;
      if (iVar8 != 0) {
        StringList::Rewind(&Cmd->FileArgs);
        pwVar21 = (Cmd->super_RAROptions).ArcPath;
        bVar6 = StringList::GetString(&Cmd->FileArgs,pwVar21,0x800,iVar8 + -1);
        if (bVar6) {
          pwVar21 = PointToName(pwVar21);
          *pwVar21 = 0;
        }
        goto LAB_080eb9f8;
      }
    }
    else if (iVar8 != 0) {
LAB_080eb9f8:
      if (EqualNames == false) {
        this->AllMatchesExact = false;
      }
    }
    Archive::ConvertAttributes(&Arc);
    ConvertPath(Arc.FileHead.FileName,ArcFileName);
    if (Arc.FileHead.Version == false) {
      bVar6 = Archive::IsArcDir(&Arc);
      if ((!bVar6) && (1 < (Cmd->super_RAROptions).VersionControl)) {
LAB_080eba84:
        iStack_191bc = 0;
      }
    }
    else {
      uVar16 = (Cmd->super_RAROptions).VersionControl;
      if ((uVar16 != 1) && (EqualNames == false)) {
        if (uVar16 == 0) {
          iStack_191bc = 0;
        }
        iVar8 = ParseVersionFileName(ArcFileName,false);
        if ((Cmd->super_RAROptions).VersionControl - 1 != iVar8) goto LAB_080eba84;
        ParseVersionFileName(ArcFileName,true);
      }
    }
    (this->DataIO).UnpVolume = Arc.FileHead.SplitAfter;
    (this->DataIO).NextVolumeMissing = false;
    Archive::Seek(&Arc,ZEXT48(in_stack_fffe6e24) << 0x20,0);
    cVar12 = Arc.Solid;
    if (this->FirstFile == false) {
      this->FirstFile = false;
      uStack_191b4 = 0;
      pbVar18 = extraout_r1_03;
      if (iStack_191bc == 0) goto LAB_080ebb2c;
    }
    else {
      if (iStack_191bc == 0) {
        if ((Arc.Solid != false) &&
           (cVar12 = Arc.FileHead.SplitBefore, Arc.FileHead.SplitBefore == false)) {
          this->FirstFile = false;
          pbVar18 = extraout_r1_03;
          cVar12 = Arc.Solid;
          goto LAB_080ebb2c;
        }
      }
      else {
        if (Arc.FileHead.SplitBefore == false) {
          this->FirstFile = false;
          uStack_191b4 = 0;
          goto LAB_080ebb44;
        }
        (Cmd->super_RAROptions).DllError = 0xc;
        ErrorHandler::SetErrorCode(&ErrHandler,RARX_OPEN);
        cVar12 = Arc.Solid;
      }
      this->FirstFile = false;
LAB_080ebb2c:
      if (cVar12 == '\0') {
        if (((this->DataIO).NextVolumeMissing == false) && (Arc.Solid == false)) goto LAB_080eb954;
        break;
      }
      iStack_191bc = 0;
      uStack_191b4 = 1;
    }
LAB_080ebb44:
    pwVar21 = this->DestFileName;
    in_stack_fffe6e24 = (byte *)0x800;
    ExtrPrepareName(this,Cmd,&Arc,ArcFileName,pwVar21,0x800);
    if (uStack_191b4 == 0) {
      if (this->DestFileName[0] == 0) {
        uStack_191a8 = uStack_191b4;
      }
      else {
        uStack_191a8 = Arc.FileHead.SplitBefore ^ 1;
      }
    }
    else {
      uStack_191a8 = 0;
    }
    uVar17 = uStack_191a8;
    if ((((Cmd->super_RAROptions).FreshFiles != false) ||
        ((Cmd->super_RAROptions).UpdateFiles != false)) && (wVar14 == 0x58 || wVar14 == 0x45)) {
      RarTime::RarTime((RarTime *)&uStack_12f48);
      RarTime::RarTime(&RStack_12f40);
      RarTime::RarTime(aRStack_12f38);
      bVar6 = FindFile::FastFind(pwVar21,(FindData *)FirstVolName,false);
      if (bVar6) {
        bVar6 = Arc.FileHead.mtime.itime._4_4_ <= uStack_12f44;
        if (uStack_12f44 == Arc.FileHead.mtime.itime._4_4_) {
          bVar6 = (uint)Arc.FileHead.mtime.itime <= uStack_12f48;
        }
        if ((bVar6) && (uVar17 = (uint)bStack_12f4c, bStack_12f4c != 0)) {
          uVar17 = *(uint *)((int)&(this->StartTime).itime + 4);
          bVar6 = uVar17 <= uStack_12f44;
          if (uStack_12f44 == uVar17) {
            bVar6 = *(uint *)&(this->StartTime).itime <= uStack_12f48;
          }
          uVar17 = uStack_191a8;
          if (!bVar6) {
            uVar17 = 0;
          }
        }
      }
      else if ((Cmd->super_RAROptions).FreshFiles != false) {
        uVar17 = 0;
      }
    }
    uStack_191a8 = uVar17;
    if (Arc.FileHead.Encrypted != false) {
      bVar6 = ExtrDllGetPassword(this,Cmd);
      pbVar18 = extraout_r1_12;
      if (!bVar6) break;
      if ((this->Password).PasswordSet == false) {
        ErrorHandler::SetErrorCode(&ErrHandler,RARX_WARNING);
        (Cmd->super_RAROptions).DllError = 0x16;
        uStack_191a8 = 0;
      }
    }
    if ((Cmd->super_RAROptions).DllDestName[0] != 0) {
      wcsncpyz(pwVar21,(Cmd->super_RAROptions).DllDestName,0x800);
    }
    if (Arc.Format == RARFMT50) {
      bVar13 = Arc.FileHead.UnpVer;
      if (Arc.FileHead.UnpVer != '\0') {
        bVar13 = 1;
      }
    }
    else if (Arc.FileHead.UnpVer - 0xd < 0x11) {
      bVar13 = 0;
    }
    else {
      bVar13 = 1;
    }
    if (Arc.FileHead.Method == '\0') {
      bVar13 = 0;
    }
    else {
      bVar13 = bVar13 & 1;
    }
    if (bVar13 != 0) {
      ErrorHandler::SetErrorCode(&ErrHandler,RARX_WARNING);
      (Cmd->super_RAROptions).DllError = 0xe;
      uStack_191a8 = 0;
    }
    File::File((File *)NextName);
    FVar3 = Arc.FileHead.RedirType;
    if (Arc.FileHead.RedirType == FSREDIR_FILECOPY || Arc.FileHead.RedirType == FSREDIR_NONE) {
      bVar6 = Archive::IsArcDir(&Arc);
      if (bVar6) {
        pbVar18 = extraout_r1_10;
        if ((((wVar14 == 0x50) < uStack_191a8) &&
            (pbVar18 = extraout_r1_10, (wVar14 - 0x45 & 0xfffffffb) != 0)) &&
           (pbVar18 = extraout_r1_10, (Cmd->super_RAROptions).ExclPath != EXCL_SKIPWHOLEPATH)) {
          bVar6 = (Cmd->super_RAROptions).Test;
          pwVar21 = (wchar *)(this->TotalFileCount + 1);
          this->TotalFileCount = (ulong)pwVar21;
          pbVar18 = pbVar10;
          if (bVar6 == false) {
            ExtrCreateDir(this,Cmd,&Arc,pwVar21);
            pbVar18 = extraout_r1_15;
          }
        }
        File::~File((File *)NextName,(int)pbVar18);
        goto LAB_080eb864;
      }
      pbVar18 = extraout_r1_10;
      if (uStack_191a8 != 0) {
        wVar20 = Cmd->Command[0];
        if (wVar20 == 0x50) {
          NextName[3] = 1;
        }
        else if (wVar20 == 0x58 || wVar20 == 0x45) {
          if ((Cmd->super_RAROptions).Test != false) goto LAB_080ec4a8;
          bVar6 = ExtrCreateFile(this,Cmd,&Arc,(File *)NextName);
          uStack_191a8 = (uint)bVar6;
          pbVar18 = extraout_r1_11;
          goto LAB_080ebc78;
        }
        goto LAB_080ec66c;
      }
LAB_080ebc84:
      if (Arc.Solid != false) {
        uStack_191b4 = 1;
        uStack_191a8 = 1;
        goto LAB_080ebca4;
      }
      bVar6 = false;
    }
    else {
      if (wVar14 == 0x50) {
        uVar17 = 0;
      }
      else {
        uVar17 = uStack_191a8 & 1;
      }
      pbVar18 = extraout_r1_04;
      if (uVar17 == 0) {
LAB_080ebc78:
        if (uStack_191a8 != 0) {
LAB_080ec66c:
          if ((Cmd->super_RAROptions).Test != false) goto LAB_080ec4a8;
          if (uStack_191b4 == 0) {
            if (wVar14 != 0x50) {
              bVar6 = File::IsDevice((File *)NextName);
              if (!bVar6) {
                uStack_191a8 = 0;
                goto LAB_080ec4bc;
              }
              ErrorHandler::WriteError(&ErrHandler,Arc.super_File.FileName,pwVar21);
            }
            uStack_191a8 = 0;
            goto LAB_080ec4bc;
          }
          goto LAB_080ec73c;
        }
        goto LAB_080ebc84;
      }
      bVar6 = (Cmd->super_RAROptions).Test;
      if (bVar6 == false) {
        UserReject = bVar6;
        bVar6 = FileExist(pwVar21);
        pbVar18 = (byte *)(uint)UserReject;
        if ((bVar6) && (pbVar18 == (byte *)0x0)) {
          in_stack_fffe6e24 = &UserReject;
          FileCreate(&Cmd->super_RAROptions,(File *)0x0,pwVar21,0x800,
                     (Cmd->super_RAROptions).Overwrite,(bool *)in_stack_fffe6e24,
                     CONCAT44(Arc.FileHead.UnpSize._4_4_,(uint)Arc.FileHead.UnpSize),
                     &Arc.FileHead.mtime,UserReject);
          pbVar18 = (byte *)(uint)UserReject;
        }
        uStack_191a8 = (uint)pbVar18 ^ 1;
        goto LAB_080ebc78;
      }
LAB_080ec4a8:
      if (uStack_191b4 == 0) {
        uStack_191a8 = 1;
LAB_080ec4bc:
        uStack_191b4 = 0;
        this->TotalFileCount = this->TotalFileCount + 1;
      }
      else {
LAB_080ec73c:
        uStack_191a8 = 1;
      }
LAB_080ebca4:
      this->FileCount = this->FileCount + 1;
      memcpy(&FilePassword,&this->Password,0x204);
      pbVar18 = (byte *)(uint)Arc.FileHead.SaltSet;
      if (pbVar18 != (byte *)0x0) {
        pbVar18 = Arc.FileHead.Salt;
      }
      in_stack_fffe6e24 = Arc.FileHead.InitV;
      ComprDataIO::SetEncryption
                (&this->DataIO,false,Arc.FileHead.CryptMethod,&FilePassword,pbVar18,
                 in_stack_fffe6e24,Arc.FileHead.Lg2Count,PswCheck,Arc.FileHead.HashKey);
      uStack_19198 = (uint)Arc.FileHead.Encrypted;
      if (uStack_19198 == 0) {
        uStack_1918c = 0;
        uStack_19198 = (uint)bVar5;
      }
      else {
        uStack_1918c = (uint)Arc.FileHead.UsePswCheck;
        if (uStack_1918c != 0) {
          iVar8 = memcmp(Arc.FileHead.PswCheck,PswCheck,8);
          if (iVar8 == 0) {
            uStack_19198 = uStack_1918c;
            uStack_1918c = 0;
          }
          else {
            uStack_19198 = (uint)Arc.BrokenHeader;
            if (uStack_19198 == 0) {
              ErrorHandler::SetErrorCode(&ErrHandler,RARX_BADPWD);
              uStack_1918c = 1;
            }
            else {
              uStack_1918c = 0;
            }
          }
        }
      }
      this_01 = &(this->DataIO).UnpHash;
      uVar16 = (Cmd->super_RAROptions).Threads;
      (this->DataIO).CurUnpRead = 0;
      (this->DataIO).CurUnpWrite = 0;
      DataHash::Init(this_01,Arc.FileHead.FileHash.Type,uVar16);
      DataHash::Init(&(this->DataIO).PackedDataHash,Arc.FileHead.FileHash.Type,
                     (Cmd->super_RAROptions).Threads);
      (this->DataIO).UnpPackedSize =
           CONCAT44(Arc.FileHead.PackSize._4_4_,(uint)Arc.FileHead.PackSize);
      ComprDataIO::SetFiles(&this->DataIO,&Arc.super_File,(File *)NextName);
      (this->DataIO).TestMode = SUB41(uStack_191a8,0);
      (this->DataIO).SkipUnpCRC = uStack_191b4._0_1_;
      if ((uStack_191a8 < uStack_19198) && (Arc.BrokenHeader == false)) {
        uVar23 = VectorShiftLeft(CONCAT44(Arc.FileHead.PackSize._4_4_,(uint)Arc.FileHead.PackSize),
                                 0xb,0x40,0);
        iVar8 = (int)((ulonglong)uVar23 >> 0x20);
        bVar6 = (uint)Arc.FileHead.UnpSize < (uint)uVar23;
        if ((int)(Arc.FileHead.UnpSize._4_4_ - (iVar8 + (uint)bVar6)) < 0 !=
            (SBORROW4(Arc.FileHead.UnpSize._4_4_,iVar8) !=
            SBORROW4(Arc.FileHead.UnpSize._4_4_ - iVar8,(uint)bVar6))) {
          if (0 < (int)(Arc.FileHead.UnpSize._4_4_ + (uint)(99999999 < (uint)Arc.FileHead.UnpSize))
              != (SBORROW4(-Arc.FileHead.UnpSize._4_4_,(uint)(99999999 < (uint)Arc.FileHead.UnpSize)
                          ) != false)) {
            iVar24 = File::FileLength(&Arc.super_File);
            iVar8 = (int)((ulonglong)iVar24 >> 0x20);
            bVar6 = (uint)Arc.FileHead.PackSize < (uint)iVar24;
            if ((int)(Arc.FileHead.PackSize._4_4_ - (iVar8 + (uint)bVar6)) < 0 ==
                (SBORROW4(Arc.FileHead.PackSize._4_4_,iVar8) !=
                SBORROW4(Arc.FileHead.PackSize._4_4_ - iVar8,(uint)bVar6))) goto LAB_080ebec8;
          }
          File::Prealloc((File *)NextName,CONCAT44(in_stack_fffe6e24,pbVar18));
        }
      }
LAB_080ebec8:
      FVar4 = Arc.FileHead.RedirType;
      NextName[4]._3_1_ = (Cmd->super_RAROptions).KeepBroken ^ 1;
      if (FVar3 == FSREDIR_NONE) {
        if ((uStack_1918c | Arc.FileHead.SplitBefore) == 0) {
          if (Arc.FileHead.Method == '\0') {
            UnstoreFile(&this->DataIO,CONCAT44(in_stack_fffe6e24,pbVar18));
          }
          else {
            Unpack::Init(this->Unp,Arc.FileHead.WinSize,Arc.FileHead.Solid);
            this_00 = this->Unp;
            this_00->DestUnpSize = CONCAT44(Arc.FileHead.UnpSize._4_4_,(uint)Arc.FileHead.UnpSize);
            this_00->FileExtracted = false;
            if ((Arc.Format == RARFMT50) || (0xf < Arc.FileHead.UnpVer)) {
              Unpack::DoUnpack(this_00,(uint)Arc.FileHead.UnpVer,Arc.FileHead.Solid);
            }
            else {
              bVar6 = false;
              if (1 < this->FileCount) {
                bVar6 = Arc.Solid;
              }
              Unpack::DoUnpack(this_00,0xf,bVar6);
            }
          }
        }
        uVar17 = 1;
        uStack_191ac = 1;
      }
      else {
        uVar17 = uStack_191b4 ^ 1;
        bVar6 = 0x4f < wVar14;
        bVar22 = wVar14 != 0x50;
        if (bVar22) {
          bVar6 = uStack_191a8 <= uVar17;
        }
        bVar1 = uVar17 != uStack_191a8;
        if (bVar6 && (bVar22 && bVar1)) {
          uVar17 = 1;
        }
        if (!bVar6 || (!bVar22 || !bVar1)) {
          uVar17 = 0;
        }
        bStack_19188 = SUB41(uVar17,0);
        if (Arc.FileHead.RedirType + ~FSREDIR_JUNCTION < 2) {
          pbVar18 = (byte *)FirstVolName;
          in_stack_fffe6e24 = (byte *)0x800;
          ExtrPrepareName(this,Cmd,&Arc,Arc.FileHead.RedirName,(wchar *)pbVar18,0x800);
          if ((uVar17 != 0) && (FirstVolName[0] != 0)) {
            if (FVar4 == FSREDIR_HARDLINK) {
              bVar6 = ExtractHardlink(pwVar21,(wchar *)pbVar18,0x800);
            }
            else {
              bVar6 = ExtractFileCopy(this,Cmd,(File *)NextName,Arc.super_File.FileName,pwVar21,
                                      (wchar *)pbVar18,0x800);
              in_stack_fffe6e24 = pbVar18;
            }
LAB_080ec720:
            if (bVar6 == false) goto LAB_080ec728;
          }
LAB_080ebf44:
          uStack_191ac = 1;
          if (Arc.Format != RARFMT15) {
            uVar17 = 1;
          }
        }
        else {
          if (Arc.FileHead.RedirType + ~FSREDIR_NONE < 3) {
            if (uVar17 != 0) {
              bVar6 = ExtractSymlink(Cmd,&this->DataIO,&Arc,pwVar21);
              goto LAB_080ec720;
            }
            goto LAB_080ebf44;
          }
LAB_080ec728:
          uVar17 = 0;
          uStack_191ac = 0;
          bStack_19188 = false;
        }
        this->PrevExtracted = bStack_19188;
      }
      Archive::SeekToNext(&Arc);
      pbVar18 = (byte *)(uint)Arc.FileHead.UseHashKey;
      if (pbVar18 != (byte *)0x0) {
        pbVar18 = Arc.FileHead.HashKey;
      }
      bVar22 = DataHash::Cmp(this_01,&Arc.FileHead.FileHash,pbVar18);
      bVar6 = Arc.FileHead.Solid;
      if (Arc.FileHead.Solid == false) {
LAB_080ec008:
        this->AnySolidDataUnpackedWell = bVar6;
      }
      else if (Arc.FileHead.Method != '\0') {
        uVar19 = (uint)bVar22;
        if ((int)(Arc.FileHead.UnpSize._4_4_ - (uint)((uint)Arc.FileHead.UnpSize == 0)) < 0 !=
            (SBORROW4(Arc.FileHead.UnpSize._4_4_,(uint)((uint)Arc.FileHead.UnpSize == 0)) != false))
        {
          uVar19 = 0;
        }
        if (uVar19 != 0) {
          bVar6 = true;
          goto LAB_080ec008;
        }
      }
      if ((uStack_191b4 < uVar17) && (bVar22 <= uStack_1918c)) {
        ErrorHandler::SetErrorCode(&ErrHandler,RARX_CRC);
        if ((Cmd->super_RAROptions).DllError == 0xf) {
          bVar6 = true;
        }
        else {
          bVar6 = true;
          if (uStack_1918c == 0) {
            iVar8 = 0xc;
          }
          else {
            iVar8 = 0x18;
          }
          (Cmd->super_RAROptions).DllError = iVar8;
        }
      }
      else {
        bVar6 = false;
      }
      if ((uStack_191a8 < uStack_19198) && (wVar14 == 0x45 || wVar14 == 0x58)) {
        if (FVar3 != FSREDIR_NONE) {
          uStack_191a8 = uStack_191ac;
          if (Arc.FileHead.RedirType != FSREDIR_FILECOPY) {
            uStack_191a8 = 0;
          }
          if (uStack_191a8 == 0) goto LAB_080ec178;
        }
        if (bVar6) {
          if ((Cmd->super_RAROptions).KeepBroken == false) goto LAB_080ec178;
          File::Truncate((File *)NextName);
        }
        pRVar9 = (RarTime *)(Cmd->super_RAROptions).xmtime;
        if (pRVar9 != (RarTime *)0x0) {
          pRVar9 = &Arc.FileHead.mtime;
        }
        pRVar11 = (RarTime *)(Cmd->super_RAROptions).xctime;
        if (pRVar11 != (RarTime *)0x0) {
          pRVar11 = &Arc.FileHead.ctime;
        }
        fta = (RarTime *)(Cmd->super_RAROptions).xatime;
        if (fta != (RarTime *)0x0) {
          fta = &Arc.FileHead.atime;
        }
        File::SetOpenFileTime((File *)NextName,pRVar9,pRVar11,fta);
        File::Close((File *)NextName);
        if ((((Cmd->super_RAROptions).ProcessOwners != false) && (Arc.Format == RARFMT50)) &&
           (Arc.FileHead.UnixOwnerSet != false)) {
          SetUnixOwner(&Arc,NextName + 6);
        }
        pRVar9 = (RarTime *)(Cmd->super_RAROptions).xmtime;
        if (pRVar9 != (RarTime *)0x0) {
          pRVar9 = &Arc.FileHead.mtime;
        }
        pRVar11 = (RarTime *)(Cmd->super_RAROptions).xatime;
        if (pRVar11 != (RarTime *)0x0) {
          pRVar11 = &Arc.FileHead.atime;
        }
        File::SetCloseFileTime((File *)NextName,pRVar9,pRVar11);
        uStack_191a8 = extraout_r1_05;
        if ((Cmd->super_RAROptions).IgnoreGeneralAttr == false) {
          SetFileAttr(NextName + 6,Arc.FileHead.field_3.FileAttr);
          uStack_191a8 = extraout_r1_14;
        }
        this->PrevExtracted = true;
      }
LAB_080ec178:
      SecPassword::~SecPassword(&FilePassword,uStack_191a8);
      bVar6 = true;
      pbVar18 = extraout_r1_06;
    }
    File::~File((File *)NextName,(int)pbVar18);
    if (iStack_191bc != 0) {
      this->MatchedArgs = this->MatchedArgs + 1;
    }
    pbVar18 = extraout_r1_07;
    if ((this->DataIO).NextVolumeMissing != false) break;
    if (bVar6) goto LAB_080eb864;
    if (Arc.Solid == false) goto LAB_080eb954;
  } while (uStack_191b4 != 0);
LAB_080eb668:
  Archive::~Archive(&Arc,(int)pbVar18);
  if (iVar2 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return EXTRACT_ARC_NEXT;
}


