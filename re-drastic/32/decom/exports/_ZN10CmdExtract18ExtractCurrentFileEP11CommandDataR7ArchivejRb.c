/*
 * Ghidra decompilation
 *
 * Function : _ZN10CmdExtract18ExtractCurrentFileEP11CommandDataR7ArchivejRb
 * Address  : 080ea43c
 * Program  : drastic
 */


/* WARNING: Heritage AFTER dead removal. Example location: r0 : 0x080eae14 */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WARNING: Exceeded maximum restarts with more pending */
/* DWARF original prototype: bool ExtractCurrentFile(CmdExtract * this, CommandData * Cmd, Archive *
   Arc, size_t HeaderSize, bool * Repeat) */

bool __thiscall
CmdExtract::ExtractCurrentFile
          (CmdExtract *this,CommandData *Cmd,Archive *Arc,size_t HeaderSize,bool *Repeat)

{
  bool bVar1;
  int iVar2;
  bool ValidCRC;
  bool bVar3;
  byte bVar4;
  int iVar5;
  int MatchNumber;
  int iVar6;
  int Version;
  uint uVar7;
  uint uVar8;
  ComprDataIO *this_00;
  Unpack *this_01;
  _func_int_varargs *p_Var9;
  int iVar10;
  uint extraout_r1;
  DataHash *this_02;
  HASH_TYPE Type_00;
  RarTime *pRVar11;
  uint extraout_r1_00;
  uint extraout_r1_01;
  uint extraout_r1_02;
  uint extraout_r1_03;
  uint extraout_r1_04;
  uint extraout_r1_05;
  uint extraout_r1_06;
  uint extraout_r1_07;
  byte *extraout_r1_08;
  byte *Command_00;
  wchar Command;
  undefined uVar16;
  bool WrongVer;
  uint uVar12;
  _func_int_varargs **pp_Var13;
  FILE_SYSTEM_REDIRECT Type;
  byte *HashKey;
  RarTime *pRVar14;
  RARFORMAT RVar15;
  HEADER_TYPE HVar17;
  RECURSE_MODE RVar18;
  FILE_SYSTEM_REDIRECT FVar19;
  wchar *pwVar20;
  RarTime *fta;
  uint uVar21;
  uint uVar22;
  bool bVar23;
  bool bVar24;
  undefined8 uVar25;
  int64 iVar26;
  byte *InitV;
  uint local_62a8;
  File *local_62a4;
  int64 *local_62a0;
  wchar *local_6298;
  FILE_SYSTEM_REDIRECT local_6290;
  uint local_628c;
  uint local_6288;
  FILE_SYSTEM_REDIRECT local_6280;
  uint local_6278;
  bool EqualNames;
  bool UserReject;
  SecPassword FilePassword;
  wchar ArcFileName [2048];
  wchar NameExisting [2048];
  File CurFile;
  RarTime aRStack_48 [2];
  byte PswCheck [8];
  
  iVar2 = __stack_chk_guard;
  Command_00 = (byte *)Cmd->Command[0];
  if (HeaderSize == 0) {
    if ((this->DataIO).UnpVolume != false) {
      bVar3 = MergeArchive(Arc,&this->DataIO,false,(wchar)Command_00);
      if (bVar3) goto LAB_080ea4fc;
LAB_080ead18:
      ErrorHandler::SetErrorCode(&ErrHandler,RARX_WARNING);
      bVar4 = 0;
      goto LAB_080ea4a4;
    }
LAB_080ea4a0:
    bVar4 = 0;
  }
  else {
LAB_080ea4fc:
    HVar17 = Arc->CurHeaderType;
    if (HVar17 == HEAD_FILE) {
      RVar18 = (Cmd->super_RAROptions).Recurse;
      this->PrevExtracted = false;
      if (((RVar18 == RECURSE_NONE) && ((Cmd->FileArgs).StringsCount <= this->MatchedArgs)) &&
         (this->AllMatchesExact != false)) goto LAB_080ea4a0;
      EqualNames = false;
      iVar5 = CommandData::IsProcessFile(Cmd,&Arc->FileHead,&EqualNames,5);
      if ((Cmd->super_RAROptions).ExclPath == EXCL_BASEPATH) {
        (Cmd->super_RAROptions).ArcPath[0] = 0;
        if (iVar5 != 0) {
          pwVar20 = (Cmd->super_RAROptions).ArcPath;
          StringList::Rewind(&Cmd->FileArgs);
          bVar3 = StringList::GetString(&Cmd->FileArgs,pwVar20,0x800,iVar5 + -1);
          if (bVar3) {
            pwVar20 = PointToName(pwVar20);
            *pwVar20 = 0;
          }
          goto LAB_080ea600;
        }
      }
      else if (iVar5 != 0) {
LAB_080ea600:
        if (EqualNames == false) {
          this->AllMatchesExact = false;
        }
      }
      Archive::ConvertAttributes(Arc);
      ConvertPath((Arc->FileHead).FileName,ArcFileName);
      if (iVar5 != 0) {
        iVar5 = 1;
      }
      if ((Arc->FileHead).Version == false) {
        bVar3 = Archive::IsArcDir(Arc);
        if ((bVar3) || ((Cmd->super_RAROptions).VersionControl < 2)) goto LAB_080eadb4;
        pp_Var13 = (Arc->super_File)._vptr_File;
        uVar8 = *(uint *)&(Arc->FileHead).PackSize;
        iVar6 = *(uint *)&Arc->NextBlockPos - uVar8;
        iVar5 = *(int *)((int)&Arc->NextBlockPos + 4) -
                (*(int *)((int)&(Arc->FileHead).PackSize + 4) +
                (uint)(*(uint *)&Arc->NextBlockPos < uVar8));
        bVar23 = (Arc->FileHead).SplitAfter;
        (this->DataIO).NextVolumeMissing = bVar3;
        p_Var9 = pp_Var13[3];
        (this->DataIO).UnpVolume = bVar23;
        uVar8 = 0;
LAB_080ea700:
        (*p_Var9)(uVar8,p_Var9,iVar6,iVar5,0);
LAB_080ea71c:
        this->FirstFile = false;
LAB_080ea72c:
        local_62a8 = (uint)Arc->Solid;
        if (local_62a8 != 0) {
          uVar8 = 0;
          bVar3 = false;
          ExtrPrepareName(this,Cmd,Arc,ArcFileName,this->DestFileName,0x800);
          goto LAB_080ea778;
        }
        local_62a8._0_1_ = Arc->Solid;
        if ((this->DataIO).NextVolumeMissing != false) goto LAB_080ea4a0;
      }
      else {
        uVar12 = (Cmd->super_RAROptions).VersionControl;
        if ((uVar12 != 1) && (EqualNames == false)) {
          if (uVar12 == 0) {
            iVar5 = 0;
          }
          iVar6 = ParseVersionFileName(ArcFileName,false);
          if ((Cmd->super_RAROptions).VersionControl - 1 != iVar6) {
            pp_Var13 = (Arc->super_File)._vptr_File;
            uVar7 = *(uint *)&Arc->NextBlockPos;
            iVar5 = *(int *)((int)&Arc->NextBlockPos + 4);
            uVar8 = *(uint *)&(Arc->FileHead).PackSize;
            iVar10 = *(int *)((int)&(Arc->FileHead).PackSize + 4);
            bVar3 = (Arc->FileHead).SplitAfter;
            (this->DataIO).NextVolumeMissing = false;
            p_Var9 = pp_Var13[3];
            (this->DataIO).UnpVolume = bVar3;
            iVar6 = uVar7 - uVar8;
            iVar5 = iVar5 - (iVar10 + (uint)(uVar7 < uVar8));
            goto LAB_080ea700;
          }
          ParseVersionFileName(ArcFileName,true);
        }
LAB_080eadb4:
        uVar8 = *(uint *)&Arc->NextBlockPos;
        iVar6 = *(int *)((int)&Arc->NextBlockPos + 4);
        uVar7 = *(uint *)&(Arc->FileHead).PackSize;
        iVar10 = *(int *)((int)&(Arc->FileHead).PackSize + 4);
        pp_Var13 = (Arc->super_File)._vptr_File;
        (this->DataIO).UnpVolume = (Arc->FileHead).SplitAfter;
        (this->DataIO).NextVolumeMissing = false;
        p_Var9 = pp_Var13[3];
        (*p_Var9)(uVar8,p_Var9,uVar8 - uVar7,iVar6 - (iVar10 + (uint)(uVar8 < uVar7)),0);
        if (this->FirstFile != false) {
          if (iVar5 != 0) {
            if ((Arc->FileHead).SplitBefore == false) {
              this->FirstFile = false;
              goto LAB_080eae48;
            }
            (Cmd->super_RAROptions).DllError = 0xc;
            ErrorHandler::SetErrorCode(&ErrHandler,RARX_OPEN);
          }
          goto LAB_080ea71c;
        }
        this->FirstFile = false;
        if (iVar5 == 0) goto LAB_080ea72c;
LAB_080eae48:
        ExtrPrepareName(this,Cmd,Arc,ArcFileName,this->DestFileName,0x800);
        if (this->DestFileName[0] == 0) {
          bVar3 = true;
          uVar8 = 0;
          local_62a8 = 0;
        }
        else {
          local_62a8 = 0;
          bVar3 = true;
          uVar8 = (Arc->FileHead).SplitBefore ^ 1;
        }
LAB_080ea778:
        local_6298 = this->DestFileName;
        local_62a0 = &(Arc->FileHead).UnpSize;
        uVar7 = uVar8;
        if ((((Cmd->super_RAROptions).FreshFiles != false) ||
            ((Cmd->super_RAROptions).UpdateFiles != false)) &&
           (Command_00 == (byte *)0x58 || Command_00 == (byte *)0x45)) {
          RarTime::RarTime((RarTime *)(CurFile.FileName + 0x7fe));
          RarTime::RarTime((RarTime *)&CurFile.ErrorType);
          RarTime::RarTime(aRStack_48);
          bVar23 = FindFile::FastFind(local_6298,(FindData *)&CurFile,false);
          if (bVar23) {
            uVar21 = *(uint *)((int)&(Arc->FileHead).mtime.itime + 4);
            bVar23 = uVar21 <= CurFile.FileName[2047];
            if (CurFile.FileName[2047] == uVar21) {
              bVar23 = *(uint *)&(Arc->FileHead).mtime.itime <= CurFile.FileName[2046];
            }
            if ((bVar23) &&
               (uVar7 = (uint)(byte)CurFile.FileName[2045], (byte)CurFile.FileName[2045] != 0)) {
              uVar21 = *(uint *)&(this->StartTime).itime;
              uVar22 = *(uint *)((int)&(this->StartTime).itime + 4);
              bVar23 = CurFile.FileName[2047] <= uVar22;
              if (uVar22 == CurFile.FileName[2047]) {
                bVar23 = CurFile.FileName[2046] <= uVar21;
              }
              uVar7 = uVar8;
              if (bVar23 && (uVar22 != CurFile.FileName[2047] || uVar21 != CurFile.FileName[2046]))
              {
                uVar7 = 0;
              }
            }
          }
          else if ((Cmd->super_RAROptions).FreshFiles != false) {
            uVar7 = 0;
          }
        }
        if ((Arc->FileHead).Encrypted != false) {
          bVar4 = ExtrDllGetPassword(this,Cmd);
          if (!(bool)bVar4) goto LAB_080ea4a4;
          if ((this->Password).PasswordSet == false) {
            ErrorHandler::SetErrorCode(&ErrHandler,RARX_WARNING);
            (Cmd->super_RAROptions).DllError = 0x16;
            uVar7 = 0;
          }
        }
        if ((Cmd->super_RAROptions).DllDestName[0] != 0) {
          wcsncpyz(local_6298,(Cmd->super_RAROptions).DllDestName,0x800);
        }
        uVar8 = (uint)(Arc->FileHead).UnpVer;
        if (Arc->Format == RARFMT50) {
          if (uVar8 != 0) {
            uVar8 = 1;
          }
        }
        else if (uVar8 - 0xd < 0x11) {
          uVar8 = 0;
        }
        else {
          uVar8 = 1;
        }
        if ((Arc->FileHead).Method == '\0') {
          uVar8 = 0;
        }
        else {
          uVar8 = uVar8 & 1;
        }
        if (uVar8 == 0) {
          File::File(&CurFile);
          local_6280 = (Arc->FileHead).RedirType;
          FVar19 = local_6280;
          if (local_6280 != FSREDIR_NONE) {
            FVar19 = FSREDIR_UNIXSYMLINK;
          }
          if (local_6280 == FSREDIR_FILECOPY) {
            local_6290 = FSREDIR_NONE;
          }
          else {
            local_6290 = FVar19 & 1;
          }
          if (local_6290 == FSREDIR_NONE) goto LAB_080eb080;
          if (Command_00 == (byte *)0x50) {
            FVar19 = FSREDIR_NONE;
          }
          else {
            FVar19 = uVar7 & 1;
          }
          uVar8 = extraout_r1_02;
          if (FVar19 == FSREDIR_NONE) {
LAB_080eb24c:
            local_62a4 = &CurFile;
            if (uVar7 == 0) goto LAB_080ea880;
            if ((Cmd->super_RAROptions).Test != false) goto LAB_080eb04c;
            if (local_62a8 != 0) goto LAB_080eb340;
            if (Command_00 == (byte *)0x50) {
              local_628c = local_62a8;
            }
            else {
              bVar23 = File::IsDevice(local_62a4);
              if (bVar23) {
                ErrorHandler::WriteError(&ErrHandler,(Arc->super_File).FileName,local_6298);
                local_628c = 0;
              }
              else {
                local_628c = 0;
              }
            }
          }
          else {
            bVar23 = (Cmd->super_RAROptions).Test;
            local_6290 = (FILE_SYSTEM_REDIRECT)bVar23;
            if (local_6290 == FSREDIR_NONE) {
              UserReject = bVar23;
              bVar23 = FileExist(local_6298);
              uVar8 = extraout_r1_05;
              if ((bVar23) && (uVar8 = (uint)UserReject, uVar8 == 0)) {
                FileCreate(&Cmd->super_RAROptions,(File *)0x0,local_6298,0x800,
                           (Cmd->super_RAROptions).Overwrite,&UserReject,*local_62a0,
                           &(Arc->FileHead).mtime,UserReject);
                uVar8 = extraout_r1_06;
              }
              uVar7 = UserReject ^ 1;
              local_6290 = FVar19;
              goto LAB_080eb24c;
            }
LAB_080eb04c:
            if (local_62a8 != 0) {
LAB_080eb340:
              local_628c = 1;
              goto LAB_080ea8a4;
            }
            local_628c = 1;
          }
          local_62a8 = 0;
          this->TotalFileCount = this->TotalFileCount + 1;
LAB_080ea8a4:
          local_62a4 = &CurFile;
          this->FileCount = this->FileCount + 1;
          memcpy(&FilePassword,&this->Password,0x204);
          InitV = (Arc->FileHead).InitV;
          HashKey = (Arc->FileHead).HashKey;
          pwVar20 = (wchar *)(uint)(Arc->FileHead).SaltSet;
          bVar23 = pwVar20 != (wchar *)0x0;
          if (bVar23) {
            pwVar20 = (Arc->FileHead).FileName + 0x7ec;
          }
          if (bVar23) {
            pwVar20 = (wchar *)((int)pwVar20 + 0xc1);
          }
          ComprDataIO::SetEncryption
                    (&this->DataIO,false,(Arc->FileHead).CryptMethod,&FilePassword,(byte *)pwVar20,
                     InitV,(Arc->FileHead).Lg2Count,PswCheck,HashKey);
          local_6288 = (uint)(Arc->FileHead).Encrypted;
          if (local_6288 == 0) {
            local_6288 = 1;
            local_6278 = 0;
          }
          else {
            local_6278 = (uint)(Arc->FileHead).UsePswCheck;
            if (local_6278 != 0) {
              iVar5 = memcmp((Arc->FileHead).PswCheck,PswCheck,8);
              if (iVar5 == 0) {
                local_6288 = local_6278;
                local_6278 = 0;
              }
              else {
                local_6288 = (uint)Arc->BrokenHeader;
                if (local_6288 == 0) {
                  ErrorHandler::SetErrorCode(&ErrHandler,RARX_BADPWD);
                  local_6278 = 1;
                }
                else {
                  local_6278 = 0;
                }
              }
            }
          }
          uVar12 = (Cmd->super_RAROptions).Threads;
          this_02 = &(this->DataIO).UnpHash;
          Type_00 = (Arc->FileHead).FileHash.Type;
          (this->DataIO).CurUnpRead = 0;
          (this->DataIO).CurUnpWrite = 0;
          DataHash::Init(this_02,Type_00,uVar12);
          DataHash::Init(&(this->DataIO).PackedDataHash,(Arc->FileHead).FileHash.Type,
                         (Cmd->super_RAROptions).Threads);
          this_00 = &this->DataIO;
          (this->DataIO).UnpPackedSize = (Arc->FileHead).PackSize;
          ComprDataIO::SetFiles(this_00,&Arc->super_File,local_62a4);
          (this->DataIO).TestMode = SUB41(local_628c,0);
          (this->DataIO).SkipUnpCRC = (bool)(byte)local_62a8;
          if ((local_628c < local_6288) && (Arc->BrokenHeader == false)) {
            this_00 = *(ComprDataIO **)local_62a0;
            iVar5 = *(int *)((int)&(Arc->FileHead).UnpSize + 4);
            uVar25 = VectorShiftLeft((Arc->FileHead).PackSize,0xb,0x40,0);
            iVar6 = (int)((ulonglong)uVar25 >> 0x20);
            bVar23 = this_00 < (undefined *)uVar25;
            if ((int)(iVar5 - (iVar6 + (uint)bVar23)) < 0 !=
                (SBORROW4(iVar5,iVar6) != SBORROW4(iVar5 - iVar6,(uint)bVar23))) {
              if (0 < (int)(iVar5 + (uint)((ComprDataIO *)0x5f5e0ff < this_00)) !=
                  (SBORROW4(-iVar5,(uint)((ComprDataIO *)0x5f5e0ff < this_00)) != false)) {
                iVar26 = File::FileLength(&Arc->super_File);
                iVar5 = (int)((ulonglong)iVar26 >> 0x20);
                this_00 = (ComprDataIO *)iVar26;
                iVar6 = *(int *)((int)&(Arc->FileHead).PackSize + 4);
                bVar23 = *(undefined **)&(Arc->FileHead).PackSize < this_00;
                if ((int)(iVar6 - (iVar5 + (uint)bVar23)) < 0 ==
                    (SBORROW4(iVar6,iVar5) != SBORROW4(iVar6 - iVar5,(uint)bVar23)))
                goto LAB_080eaa6c;
              }
              File::Prealloc(local_62a4,CONCAT44(InitV,pwVar20));
            }
          }
LAB_080eaa6c:
          CurFile.AllowDelete = (bool)((Cmd->super_RAROptions).KeepBroken ^ 1);
          if (local_6290 == FSREDIR_NONE) {
            if ((local_6278 | (Arc->FileHead).SplitBefore) == 0) {
              if ((Arc->FileHead).Method == '\0') {
                UnstoreFile(&this->DataIO,CONCAT44(InitV,pwVar20));
              }
              else {
                Unpack::Init(this->Unp,(Arc->FileHead).WinSize,(Arc->FileHead).Solid);
                this_01 = this->Unp;
                RVar15 = Arc->Format;
                this_01->DestUnpSize = *local_62a0;
                this_01->FileExtracted = false;
                if ((RVar15 == RARFMT50) || (0xf < (Arc->FileHead).UnpVer)) {
                  Unpack::DoUnpack(this_01,(uint)(Arc->FileHead).UnpVer,(Arc->FileHead).Solid);
                }
                else {
                  bVar23 = false;
                  if (1 < this->FileCount) {
                    bVar23 = Arc->Solid;
                  }
                  Unpack::DoUnpack(this_01,0xf,bVar23);
                }
              }
            }
            uVar7 = 1;
            uVar8 = uVar7;
          }
          else {
            FVar19 = (Arc->FileHead).RedirType;
            uVar7 = local_62a8 ^ 1;
            bVar23 = (byte *)0x4f < Command_00;
            bVar24 = Command_00 != (byte *)0x50;
            if (bVar24) {
              bVar23 = local_628c <= uVar7;
            }
            bVar1 = uVar7 != local_628c;
            if (bVar23 && (bVar24 && bVar1)) {
              uVar7 = 1;
            }
            if (!bVar23 || (!bVar24 || !bVar1)) {
              uVar7 = 0;
            }
            uVar16 = (undefined)uVar7;
            if (FVar19 + ~FSREDIR_JUNCTION < 2) {
              ExtrPrepareName(this,Cmd,Arc,(Arc->FileHead).RedirName,NameExisting,0x800);
              if ((uVar7 != 0) && (NameExisting[0] != 0)) {
                if (FVar19 == FSREDIR_HARDLINK) {
                  ExtractHardlink(local_6298,NameExisting,0x800);
                }
                else {
                  ExtractFileCopy(this,Cmd,local_62a4,(Arc->super_File).FileName,local_6298,
                                  NameExisting,0x800);
                }
LAB_080eb318:
                if ((char)this_00 == '\0') goto LAB_080eb320;
              }
LAB_080eaae4:
              uVar8 = 1;
              if (Arc->Format != RARFMT15) {
                uVar7 = uVar7 | 1;
              }
            }
            else {
              if (FVar19 + ~FSREDIR_NONE < 3) {
                if (uVar7 != 0) {
                  ExtractSymlink(Cmd,&this->DataIO,Arc,local_6298);
                  goto LAB_080eb318;
                }
                goto LAB_080eaae4;
              }
LAB_080eb320:
              uVar8 = 0;
              uVar16 = false;
              uVar7 = 0;
            }
            this->PrevExtracted = (bool)uVar16;
          }
          Archive::SeekToNext(Arc);
          if ((Arc->FileHead).UseHashKey == false) {
            HashKey = (byte *)0x0;
          }
          bVar24 = DataHash::Cmp(this_02,&(Arc->FileHead).FileHash,HashKey);
          bVar23 = (Arc->FileHead).Solid;
          if (bVar23 == false) {
LAB_080eab78:
            this->AnySolidDataUnpackedWell = bVar23;
          }
          else if ((Arc->FileHead).Method != '\0') {
            iVar5 = *(int *)((int)&(Arc->FileHead).UnpSize + 4);
            uVar21 = (uint)bVar24;
            if ((int)(iVar5 - (uint)(*(int *)local_62a0 == 0)) < 0 !=
                (SBORROW4(iVar5,(uint)(*(int *)local_62a0 == 0)) != false)) {
              uVar21 = 0;
            }
            if (uVar21 != 0) {
              bVar23 = true;
              goto LAB_080eab78;
            }
          }
          if ((local_62a8 < uVar7) && (bVar24 <= local_6278)) {
            ErrorHandler::SetErrorCode(&ErrHandler,RARX_CRC);
            if ((Cmd->super_RAROptions).DllError == 0xf) {
              bVar23 = true;
            }
            else {
              bVar23 = true;
              if (local_6278 == 0) {
                iVar5 = 0xc;
              }
              else {
                iVar5 = 0x18;
              }
              (Cmd->super_RAROptions).DllError = iVar5;
            }
          }
          else {
            bVar23 = false;
          }
          if ((local_628c < local_6288) &&
             (Command_00 == (byte *)0x45 || Command_00 == (byte *)0x58)) {
            if (local_6280 != FSREDIR_NONE) {
              if ((Arc->FileHead).RedirType != FSREDIR_FILECOPY) {
                uVar8 = 0;
              }
              if (uVar8 == 0) goto LAB_080eacb4;
            }
            if (bVar23) {
              if ((Cmd->super_RAROptions).KeepBroken == false) goto LAB_080eacb4;
              File::Truncate(local_62a4);
            }
            pRVar11 = (RarTime *)(Cmd->super_RAROptions).xmtime;
            pRVar14 = (RarTime *)(Cmd->super_RAROptions).xctime;
            fta = (RarTime *)(Cmd->super_RAROptions).xatime;
            if (pRVar11 != (RarTime *)0x0) {
              pRVar11 = &(Arc->FileHead).mtime;
            }
            if (pRVar14 != (RarTime *)0x0) {
              pRVar14 = &(Arc->FileHead).ctime;
            }
            if (fta != (RarTime *)0x0) {
              fta = &(Arc->FileHead).atime;
            }
            File::SetOpenFileTime(local_62a4,pRVar11,pRVar14,fta);
            File::Close(local_62a4);
            if ((((Cmd->super_RAROptions).ProcessOwners != false) && (Arc->Format == RARFMT50)) &&
               ((Arc->FileHead).UnixOwnerSet != false)) {
              SetUnixOwner(Arc,CurFile.FileName);
            }
            pRVar11 = (RarTime *)(Cmd->super_RAROptions).xmtime;
            pRVar14 = (RarTime *)(Cmd->super_RAROptions).xatime;
            if (pRVar11 != (RarTime *)0x0) {
              pRVar11 = &(Arc->FileHead).mtime;
            }
            if (pRVar14 != (RarTime *)0x0) {
              pRVar14 = &(Arc->FileHead).atime;
            }
            File::SetCloseFileTime(local_62a4,pRVar11,pRVar14);
            local_6288 = extraout_r1_00;
            if ((Cmd->super_RAROptions).IgnoreGeneralAttr == false) {
              SetFileAttr(CurFile.FileName,(Arc->FileHead).field_3.FileAttr);
              local_6288 = extraout_r1_07;
            }
            this->PrevExtracted = true;
          }
LAB_080eacb4:
          SecPassword::~SecPassword(&FilePassword,local_6288);
          bVar23 = true;
          uVar8 = extraout_r1_01;
        }
        else {
          ErrorHandler::SetErrorCode(&ErrHandler,RARX_WARNING);
          (Cmd->super_RAROptions).DllError = 0xe;
          File::File(&CurFile);
          local_6280 = (Arc->FileHead).RedirType;
          FVar19 = local_6280;
          if (local_6280 != FSREDIR_NONE) {
            FVar19 = FSREDIR_UNIXSYMLINK;
          }
          if (local_6280 == FSREDIR_FILECOPY) {
            local_6290 = FSREDIR_NONE;
          }
          else {
            local_6290 = FVar19 & 1;
          }
          uVar8 = extraout_r1;
          if (local_6290 == FSREDIR_NONE) {
            uVar7 = 0;
LAB_080eb080:
            local_6290 = FVar19;
            local_62a4 = &CurFile;
            bVar4 = Archive::IsArcDir(Arc);
            if ((bool)bVar4) {
              if ((((Command_00 == (byte *)0x50) < uVar7) &&
                  (((uint)(Command_00 + -0x45) & 0xfffffffb) != 0)) &&
                 ((Cmd->super_RAROptions).ExclPath != EXCL_SKIPWHOLEPATH)) {
                bVar3 = (Cmd->super_RAROptions).Test;
                pwVar20 = (wchar *)(this->TotalFileCount + 1);
                this->TotalFileCount = (ulong)pwVar20;
                Command_00 = (this->DataIO).UnpHash.blake2ctx.R.ubuf + 0x50;
                if (bVar3 == false) {
                  ExtrCreateDir(this,Cmd,Arc,pwVar20);
                  Command_00 = extraout_r1_08;
                }
              }
              File::~File(local_62a4,(int)Command_00);
              goto LAB_080ea4a4;
            }
            uVar8 = extraout_r1_03;
            if (uVar7 != 0) {
              bVar23 = ExtrCreateFile(this,Cmd,Arc,local_62a4);
              uVar7 = (uint)bVar23;
              uVar8 = extraout_r1_04;
              goto LAB_080eb24c;
            }
          }
LAB_080ea880:
          if (Arc->Solid != false) {
            local_62a8 = 1;
            local_628c = 1;
            goto LAB_080ea8a4;
          }
          bVar23 = false;
        }
        local_62a4 = &CurFile;
        File::~File(local_62a4,uVar8);
        if (bVar3) {
          this->MatchedArgs = this->MatchedArgs + 1;
        }
        if ((this->DataIO).NextVolumeMissing != false) goto LAB_080ea4a0;
        if (bVar23) {
          bVar4 = 1;
          goto LAB_080ea4a4;
        }
      }
      bVar4 = (byte)local_62a8;
      if (Arc->Solid != false) goto LAB_080ea4a4;
    }
    else if (HVar17 == HEAD3_OLDSERVICE) {
      if (this->PrevExtracted != false) {
        SetExtraInfo20(Cmd,Arc,this->DestFileName);
      }
    }
    else if (HVar17 == HEAD_SERVICE) {
      if (this->PrevExtracted != false) {
        SetExtraInfo(Cmd,Arc,this->DestFileName);
      }
    }
    else if (HVar17 == HEAD_ENDARC) {
      if ((Arc->EndArcHead).NextVolume != false) {
        bVar4 = MergeArchive(Arc,&this->DataIO,false,(wchar)Command_00);
        if (bVar4 != 0) {
          p_Var9 = (Arc->super_File)._vptr_File[3];
          (*p_Var9)((uint)bVar4,p_Var9,*(undefined4 *)&Arc->CurBlockPos,
                    *(undefined4 *)((int)&Arc->CurBlockPos + 4),0);
          goto LAB_080ea4a4;
        }
        goto LAB_080ead18;
      }
      goto LAB_080ea4a0;
    }
    Archive::SeekToNext(Arc);
    bVar4 = 1;
  }
LAB_080ea4a4:
  if (iVar2 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (bool)bVar4;
}


