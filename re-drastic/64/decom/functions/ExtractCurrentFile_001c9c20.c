/*
 * Ghidra decompilation
 *
 * Function : ExtractCurrentFile
 * Address  : 001c9c20
 * Program  : drastic64
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CmdExtract::ExtractCurrentFile(CommandData*, Archive&, unsigned long, bool&) */

CommandData
CmdExtract::ExtractCurrentFile(CommandData *param_1,Archive *param_2,ulong param_3,bool *param_4)

{
  ComprDataIO *this;
  uchar *puVar1;
  uchar *puVar2;
  RarTime *pRVar3;
  RarTime *pRVar4;
  RarTime *pRVar5;
  wchar_t wVar6;
  HASH_TYPE HVar7;
  CommandData CVar8;
  CommandData CVar9;
  CommandData CVar10;
  CommandData CVar11;
  CommandData CVar12;
  bool bVar13;
  CommandData CVar14;
  char cVar15;
  CommandData CVar16;
  byte bVar17;
  CommandData CVar18;
  CommandData CVar19;
  int iVar20;
  undefined4 uVar21;
  uint uVar22;
  undefined4 *puVar23;
  Unpack *this_00;
  Archive AVar24;
  long lVar25;
  code *pcVar26;
  long lVar27;
  undefined uVar28;
  CommandData local_62a0;
  wchar_t *local_6290;
  int local_6274;
  bool local_624a;
  bool local_6249;
  SecPassword aSStack_6248 [520];
  wchar_t awStack_6040 [2048];
  wchar_t local_4040 [2048];
  File aFStack_2040 [20];
  undefined4 local_202c;
  byte local_2025;
  wchar_t awStack_2020 [2043];
  char local_34;
  ulong local_30;
  RarTime aRStack_28 [8];
  RarTime aRStack_20 [16];
  long local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  wVar6 = *(wchar_t *)(param_2 + 0x125f4);
  if (param_4 == (bool *)0x0) {
    if (param_1[0x2099] != (CommandData)0x0) {
      cVar15 = MergeArchive((Archive *)param_3,(ComprDataIO *)(param_1 + 8),false,wVar6);
      if (cVar15 != '\0') goto LAB_001c9cd4;
LAB_001c9ea8:
      ErrorHandler::SetErrorCode((ErrorHandler *)&ErrHandler,1);
      CVar16 = (CommandData)0x0;
      goto LAB_001c9c7c;
    }
LAB_001c9c78:
    CVar16 = (CommandData)0x0;
  }
  else {
LAB_001c9cd4:
    iVar20 = *(int *)(param_3 + 0x7624);
    if (iVar20 == 2) {
      iVar20 = *(int *)(param_2 + 0xc268);
      param_1[0x67f9] = (CommandData)0x0;
      if (((iVar20 == 0) && ((ulong)*(uint *)(param_2 + 0x16660) <= *(ulong *)(param_1 + 0x45e8)))
         && (param_1[0x45f1] != (CommandData)0x0)) goto LAB_001c9c78;
      local_624a = false;
      iVar20 = CommandData::IsProcessFile
                         ((CommandData *)param_2,(FileHeader *)(param_3 + 0x8770),&local_624a,5);
      bVar13 = iVar20 != 0;
      if (*(int *)(param_2 + 0xc264) == 2) {
        *(undefined4 *)(param_2 + 0x802c) = 0;
        if (iVar20 != 0) {
          StringList::Rewind();
          cVar15 = StringList::GetString
                             ((StringList *)(param_2 + 0x16638),(wchar_t *)(param_2 + 0x802c),0x800,
                              iVar20 + -1);
          if (cVar15 != '\0') {
            puVar23 = (undefined4 *)PointToName((wchar_t *)(param_2 + 0x802c));
            *puVar23 = 0;
          }
          goto LAB_001c9d8c;
        }
      }
      else if (iVar20 != 0) {
LAB_001c9d8c:
        if (local_624a == false) {
          param_1[0x45f1] = (CommandData)0x0;
        }
      }
      Archive::ConvertAttributes();
      ConvertPath((wchar_t *)(param_3 + 0x8790),awStack_6040);
      if (*(char *)(param_3 + 0xa863) == '\0') {
        cVar15 = Archive::IsArcDir();
        if ((cVar15 != '\0') || (*(uint *)(param_2 + 0xe5a4) < 2)) goto LAB_001c9de0;
LAB_001c9f04:
        pcVar26 = *(code **)(*(long *)param_3 + 0x18);
        lVar27 = *(long *)(param_3 + 0x11200);
        lVar25 = *(long *)(param_3 + 0xa7c8);
        param_1[0x2099] = *(CommandData *)(param_3 + 0xa809);
        param_1[0x209a] = (CommandData)0x0;
        (*pcVar26)(param_3,lVar27 - lVar25,0);
        if (param_1[0x45f0] != (CommandData)0x0) goto LAB_001ca038;
LAB_001c9f58:
        cVar15 = *(char *)(param_3 + 0x1120c);
joined_r0x001ca05c:
        if (cVar15 == '\0') {
          if (param_1[0x209a] != (CommandData)0x0) goto LAB_001c9c78;
          goto LAB_001c9d00;
        }
        ExtrPrepareName((CmdExtract *)param_1,(CommandData *)param_2,(Archive *)param_3,awStack_6040
                        ,(wchar_t *)(param_1 + 0x67fc),0x800);
        bVar17 = 0;
        CVar19 = (CommandData)0x1;
        CVar10 = (CommandData)0x0;
      }
      else {
        if ((*(int *)(param_2 + 0xe5a4) != 1) && (local_624a == false)) {
          bVar13 = *(int *)(param_2 + 0xe5a4) != 0 && bVar13;
          iVar20 = ParseVersionFileName(awStack_6040,false);
          if (*(int *)(param_2 + 0xe5a4) + -1 != iVar20) goto LAB_001c9f04;
          ParseVersionFileName(awStack_6040,true);
        }
LAB_001c9de0:
        pcVar26 = *(code **)(*(long *)param_3 + 0x18);
        lVar27 = *(long *)(param_3 + 0x11200);
        lVar25 = *(long *)(param_3 + 0xa7c8);
        param_1[0x2099] = *(CommandData *)(param_3 + 0xa809);
        param_1[0x209a] = (CommandData)0x0;
        (*pcVar26)(param_3,lVar27 - lVar25,0);
        if (param_1[0x45f0] != (CommandData)0x0) {
          if (bVar13) {
            if (*(char *)(param_3 + 0xa808) == '\0') {
              param_1[0x45f0] = (CommandData)0x0;
              goto LAB_001c9f78;
            }
            *(undefined4 *)(param_2 + 0x125c0) = 0xc;
            ErrorHandler::SetErrorCode((ErrorHandler *)&ErrHandler,6);
          }
          else {
LAB_001ca038:
            if ((*(char *)(param_3 + 0x1120c) == '\0') || (*(char *)(param_3 + 0xa808) == '\0')) {
              param_1[0x45f0] = (CommandData)0x0;
              goto LAB_001c9f58;
            }
          }
          param_1[0x45f0] = (CommandData)0x0;
          cVar15 = *(char *)(param_3 + 0x1120c);
          goto joined_r0x001ca05c;
        }
        if (!bVar13) goto LAB_001c9f58;
LAB_001c9f78:
        ExtrPrepareName((CmdExtract *)param_1,(CommandData *)param_2,(Archive *)param_3,awStack_6040
                        ,(wchar_t *)(param_1 + 0x67fc),0x800);
        if (*(int *)(param_1 + 0x67fc) == 0) {
          bVar17 = 0;
          CVar19 = (CommandData)0x0;
          CVar10 = (CommandData)0x1;
        }
        else {
          CVar19 = (CommandData)0x0;
          CVar10 = (CommandData)0x1;
          bVar17 = *(byte *)(param_3 + 0xa808) ^ 1;
        }
      }
      local_6290 = (wchar_t *)(param_1 + 0x67fc);
      if (((param_2[0xc25f] != (Archive)0x0) || (param_2[0xc260] != (Archive)0x0)) &&
         (wVar6 == L'E' || wVar6 == L'X')) {
        RarTime::RarTime((RarTime *)&local_30);
        RarTime::RarTime(aRStack_28);
        RarTime::RarTime(aRStack_20);
        cVar15 = FindFile::FastFind(local_6290,(FindData *)aFStack_2040,false);
        if (cVar15 == '\0') {
          if (param_2[0xc25f] != (Archive)0x0) {
            bVar17 = 0;
          }
        }
        else if (*(ulong *)(param_3 + 0xa7b0) <= local_30) {
          if (local_34 == '\0') {
            bVar17 = 0;
          }
          else if (local_30 < *(ulong *)param_1) {
            bVar17 = 0;
          }
        }
      }
      if (*(char *)(param_3 + 0xa80b) != '\0') {
        CVar16 = (CommandData)ExtrDllGetPassword((CmdExtract *)param_1,(CommandData *)param_2);
        if (CVar16 == (CommandData)0x0) goto LAB_001c9c7c;
        if (param_1[0x67f4] == (CommandData)0x0) {
          bVar17 = 0;
          ErrorHandler::SetErrorCode((ErrorHandler *)&ErrHandler,1);
          *(undefined4 *)(param_2 + 0x125c0) = 0x16;
        }
      }
      if (*(int *)(param_2 + 0x105bc) != 0) {
        wcsncpyz(local_6290,(wchar_t *)(param_2 + 0x105bc),0x800);
      }
      if (*(int *)(param_3 + 0x11208) == 3) {
        bVar13 = *(char *)(param_3 + 0x8789) != '\0';
      }
      else {
        bVar13 = 0x10 < (byte)(*(char *)(param_3 + 0x8789) - 0xdU);
      }
      if (*(char *)(param_3 + 0x878a) == '\0') {
        bVar13 = false;
      }
      if (bVar13) {
        ErrorHandler::SetErrorCode((ErrorHandler *)&ErrHandler,1);
        *(undefined4 *)(param_2 + 0x125c0) = 0xe;
        File::File(aFStack_2040);
        local_6274 = *(int *)(param_3 + 0xa878);
        CVar16 = (CommandData)(local_6274 != 0);
        CVar18 = (CommandData)(local_6274 != 5 && (bool)CVar16);
                    /* try { // try from 001ca770 to 001ca81b has its CatchHandler @ 001caca4 */
        if ((local_6274 == 5 || !(bool)CVar16) &&
           (cVar15 = Archive::IsArcDir(), CVar18 = CVar16, cVar15 != '\0')) goto LAB_001ca590;
LAB_001ca134:
        CVar16 = *(CommandData *)(param_3 + 0x1120c);
        CVar14 = CVar18;
        if (CVar16 != (CommandData)0x0) goto LAB_001ca140;
      }
      else {
        File::File(aFStack_2040);
        local_6274 = *(int *)(param_3 + 0xa878);
        CVar14 = (CommandData)(local_6274 != 0);
        CVar18 = (CommandData)(local_6274 != 5 && (bool)CVar14);
        if (local_6274 == 5 || !(bool)CVar14) {
                    /* try { // try from 001ca120 to 001ca123 has its CatchHandler @ 001caca4 */
          cVar15 = Archive::IsArcDir();
          if (cVar15 == '\0') {
            CVar18 = CVar14;
            if (bVar17 == 0) goto LAB_001ca134;
            iVar20 = *(int *)(param_2 + 0x125f4);
            AVar24 = param_2[0xc4e1];
            if (iVar20 == 0x50) {
              local_202c = 1;
            }
            else if (iVar20 == 0x45 || iVar20 == 0x58) {
              if (AVar24 != (Archive)0x0) goto LAB_001ca688;
              bVar17 = ExtrCreateFile((CmdExtract *)param_1,(CommandData *)param_2,
                                      (Archive *)param_3,aFStack_2040);
              goto LAB_001ca7c8;
            }
            goto LAB_001ca7d8;
          }
          if ((((byte)(wVar6 == L'P' | bVar17 ^ 1) != 0) ||
              ((wVar6 + L'\xffffffbb' & 0xfffffffbU) == 0)) ||
             ((*(int *)(param_2 + 0xc264) == 1 ||
              (AVar24 = param_2[0xc4e1],
              *(long *)(param_1 + 0x45d8) = *(long *)(param_1 + 0x45d8) + 1, AVar24 != (Archive)0x0)
              ))) goto LAB_001ca590;
                    /* try { // try from 001ca534 to 001ca58b has its CatchHandler @ 001caca4 */
          iVar20 = MakeDir(local_6290,(bool)((byte)param_2[0xc4bc] ^ 1),*(uint *)(param_3 + 0x878c))
          ;
          if (iVar20 == 0) {
LAB_001ca53c:
            param_1[0x67f9] = (CommandData)0x1;
          }
          else {
                    /* try { // try from 001cab38 to 001cab97 has its CatchHandler @ 001caca4 */
            cVar15 = FileExist(local_6290);
            if (cVar15 != '\0') {
                    /* try { // try from 001cac0c to 001cac2f has its CatchHandler @ 001caca4 */
              uVar22 = GetFileAttr(local_6290);
              cVar15 = IsDir(uVar22);
              if (cVar15 != '\0') {
                if (param_2[0xc4bc] == (Archive)0x0) {
                  SetFileAttr(local_6290,*(uint *)(param_3 + 0x878c));
                }
                goto LAB_001ca53c;
              }
                    /* try { // try from 001cac80 to 001cac83 has its CatchHandler @ 001caca4 */
              FileCreate((RAROptions *)param_2,(File *)0x0,local_6290,0x800,
                         *(OVERWRITE_MODE *)(param_2 + 0xc23c),&local_6249,
                         *(longlong *)(param_3 + 0xa7d0),(RarTime *)(param_3 + 0xa7b0),false);
            }
            CreatePath(local_6290,true);
            iVar20 = MakeDir(local_6290,(bool)((byte)param_2[0xc4bc] ^ 1),
                             *(uint *)(param_3 + 0x878c));
            if (iVar20 == 0) goto LAB_001ca53c;
            ErrorHandler::CheckLongPathErrMsg(&ErrHandler);
            ErrorHandler::SysErrMsg();
            *(undefined4 *)(param_2 + 0x125c0) = 0x10;
            ErrorHandler::SetErrorCode((ErrorHandler *)&ErrHandler,9);
            if (param_1[0x67f9] == (CommandData)0x0) goto LAB_001ca590;
          }
          pRVar4 = (RarTime *)(param_3 + 0xa7b0);
          if (*(int *)(param_2 + 0xe5ac) == 0) {
            pRVar4 = (RarTime *)0x0;
          }
          pRVar5 = (RarTime *)(param_3 + 0xa7b8);
          if (*(int *)(param_2 + 0xe5b0) == 0) {
            pRVar5 = (RarTime *)0x0;
          }
          pRVar3 = (RarTime *)(param_3 + 0xa7c0);
          if (*(int *)(param_2 + 0xe5b4) == 0) {
            pRVar3 = (RarTime *)0x0;
          }
          SetDirTime(local_6290,pRVar4,pRVar5,pRVar3);
LAB_001ca590:
          File::~File(aFStack_2040);
          CVar16 = (CommandData)0x1;
          goto LAB_001c9c7c;
        }
        CVar16 = (CommandData)(bVar17 & wVar6 != L'P');
        if (CVar16 == (CommandData)0x0) {
LAB_001ca7c8:
          if (bVar17 == 0) goto LAB_001ca134;
          AVar24 = param_2[0xc4e1];
          CVar14 = CVar18;
LAB_001ca7d8:
          if (AVar24 == (Archive)0x0) {
            if (CVar19 != (CommandData)0x0) goto LAB_001ca140;
            if (wVar6 == L'P') {
              CVar16 = (CommandData)0x0;
              CVar18 = (CommandData)0x1;
            }
            else {
              CVar19 = (CommandData)File::IsDevice();
              CVar18 = (CommandData)0x1;
              CVar16 = CVar19;
              if (CVar19 != (CommandData)0x0) {
                ErrorHandler::WriteError(&ErrHandler,(wchar_t *)(param_3 + 0x20));
                CVar16 = (CommandData)0x0;
                CVar18 = CVar19;
              }
            }
          }
          else {
LAB_001ca688:
            CVar16 = CVar19;
            CVar18 = CVar10;
            if (CVar19 != (CommandData)0x0) goto LAB_001ca150;
            CVar16 = (CommandData)0x1;
          }
          CVar19 = (CommandData)0x0;
          *(long *)(param_1 + 0x45d8) = *(long *)(param_1 + 0x45d8) + 1;
        }
        else {
          CVar14 = *(CommandData *)(param_2 + 0xc4e1);
          if (CVar14 != (CommandData)0x0) goto LAB_001ca688;
          local_6249 = false;
                    /* try { // try from 001ca950 to 001ca953 has its CatchHandler @ 001caca4 */
          cVar15 = FileExist(local_6290);
          if (cVar15 == '\0') {
LAB_001caa18:
            if (local_6249 == false) {
              AVar24 = param_2[0xc4e1];
              CVar14 = CVar16;
              goto LAB_001ca7d8;
            }
          }
          else if (local_6249 == false) {
                    /* try { // try from 001caa10 to 001caa13 has its CatchHandler @ 001caca4 */
            FileCreate((RAROptions *)param_2,(File *)0x0,local_6290,0x800,
                       *(OVERWRITE_MODE *)(param_2 + 0xc23c),&local_6249,
                       *(longlong *)(param_3 + 0xa7d0),(RarTime *)(param_3 + 0xa7b0),false);
            goto LAB_001caa18;
          }
          CVar16 = (CommandData)0x0;
          CVar14 = *(CommandData *)(param_3 + 0x1120c);
          if (CVar14 == (CommandData)0x0) goto LAB_001ca3ec;
LAB_001ca140:
          CVar19 = (CommandData)0x1;
          CVar16 = (CommandData)0x1;
          CVar18 = (CommandData)0x0;
        }
LAB_001ca150:
        *(long *)(param_1 + 0x45e0) = *(long *)(param_1 + 0x45e0) + 1;
        memcpy(aSStack_6248,param_1 + 0x65f4,0x204);
        puVar1 = (uchar *)(param_3 + 0xa83b);
        this = (ComprDataIO *)(param_1 + 8);
        puVar2 = (uchar *)(param_3 + 0xa811);
        if (*(char *)(param_3 + 0xa810) == '\0') {
          puVar2 = (uchar *)0x0;
        }
                    /* try { // try from 001ca1c4 to 001ca36f has its CatchHandler @ 001cac88 */
        ComprDataIO::SetEncryption
                  (this,false,*(CRYPT_METHOD *)(param_3 + 0xa80c),aSStack_6248,puVar2,
                   (uchar *)(param_3 + 0xa821),*(uint *)(param_3 + 0xa85c),(uchar *)&local_10,puVar1
                  );
        CVar8 = *(CommandData *)(param_3 + 0xa80b);
        CVar11 = CVar16;
        if (CVar8 == (CommandData)0x0) {
          CVar8 = (CommandData)0x1;
          CVar12 = (CommandData)0x0;
        }
        else {
          CVar9 = *(CommandData *)(param_3 + 0xa831);
          CVar12 = CVar9;
          if (CVar9 != (CommandData)0x0) {
            if (local_10 == *(long *)(param_3 + 0xa832)) {
              CVar12 = (CommandData)0x0;
              CVar8 = CVar9;
            }
            else {
              CVar8 = *(CommandData *)(param_3 + 0x11220);
              if (CVar8 == (CommandData)0x0) {
                ErrorHandler::SetErrorCode((ErrorHandler *)&ErrHandler,0xb);
                CVar11 = CVar9;
              }
              else {
                CVar12 = (CommandData)0x0;
              }
            }
          }
        }
        uVar22 = *(uint *)(param_2 + 67000);
        HVar7 = *(HASH_TYPE *)(param_3 + 0xa7e0);
        *(undefined8 *)(param_1 + 0x20b8) = 0;
        *(undefined8 *)(param_1 + 0x20c0) = 0;
        DataHash::Init((DataHash *)(param_1 + 0x3978),HVar7,uVar22);
        DataHash::Init((DataHash *)(param_1 + 0x20d8),*(HASH_TYPE *)(param_3 + 0xa7e0),
                       *(uint *)(param_2 + 67000));
        *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_3 + 0xa7c8);
        ComprDataIO::SetFiles(this,(File *)param_3,(File *)(RarTime *)aFStack_2040);
        param_1[0x51] = CVar16;
        param_1[0x52] = CVar19;
        if ((((CVar11 == (CommandData)0x0) && (*(char *)(param_3 + 0x11220) == '\0')) &&
            (lVar25 = *(long *)(param_3 + 0xa7d0),
            lVar25 + *(long *)(param_3 + 0xa7c8) * -0x800 < 0 !=
            SBORROW8(lVar25,*(long *)(param_3 + 0xa7c8) * 0x800))) &&
           ((lVar25 < 100000000 ||
            (lVar25 = File::FileLength((File *)param_3), *(long *)(param_3 + 0xa7c8) < lVar25)))) {
          File::Prealloc((longlong)(RarTime *)aFStack_2040);
        }
        local_2025 = (byte)param_2[0xc2b4] ^ 1;
        if (CVar14 == (CommandData)0x0) {
          if ((*(byte *)(param_3 + 0xa808) | (byte)CVar12) == 0) {
            if (*(char *)(param_3 + 0x878a) == '\0') {
              UnstoreFile(this,*(longlong *)(param_3 + 0xa7d0));
            }
            else {
              Unpack::Init(*(Unpack **)(param_1 + 0x45d0),*(ulong *)(param_3 + 0xa868),
                           *(bool *)(param_3 + 0xa860));
              this_00 = *(Unpack **)(param_1 + 0x45d0);
              *(undefined8 *)(this_00 + 0x4da0) = *(undefined8 *)(param_3 + 0xa7d0);
              iVar20 = *(int *)(param_3 + 0x11208);
              this_00[0x4db8] = (Unpack)0x0;
              if ((iVar20 == 3) || (0xf < *(byte *)(param_3 + 0x8789))) {
                Unpack::DoUnpack(this_00,(uint)*(byte *)(param_3 + 0x8789),
                                 *(bool *)(param_3 + 0xa860));
              }
              else {
                uVar28 = false;
                if (1 < *(ulong *)(param_1 + 0x45e0)) {
                  uVar28 = *(undefined *)(param_3 + 0x1120c);
                }
                Unpack::DoUnpack(this_00,0xf,(bool)uVar28);
              }
            }
          }
          CVar16 = (CommandData)0x1;
          CVar14 = (CommandData)0x1;
        }
        else {
          iVar20 = *(int *)(param_3 + 0xa878);
          local_62a0 = (CommandData)(wVar6 != L'P' & ((byte)CVar16 ^ 1));
          if (iVar20 - 4U < 2) {
                    /* try { // try from 001ca9b0 to 001ca9e3 has its CatchHandler @ 001cac88 */
            ExtrPrepareName((CmdExtract *)param_1,(CommandData *)param_2,(Archive *)param_3,
                            (wchar_t *)(param_3 + 0xa87c),local_4040,0x800);
            if (local_62a0 == (CommandData)0x0) {
LAB_001ca328:
              CVar16 = (CommandData)(*(int *)(param_3 + 0x11208) != 2);
            }
            else {
              CVar14 = local_62a0;
              CVar16 = local_62a0;
              if (local_4040[0] != L'\0') {
                if (iVar20 == 4) {
                    /* try { // try from 001cac48 to 001cac4b has its CatchHandler @ 001cac88 */
                  CVar14 = (CommandData)ExtractHardlink(local_6290,local_4040,0x800);
                }
                else {
                    /* try { // try from 001cabd0 to 001cac03 has its CatchHandler @ 001cac88 */
                  CVar14 = (CommandData)
                           ExtractFileCopy((CmdExtract *)param_1,(CommandData *)param_2,
                                           (File *)(RarTime *)aFStack_2040,
                                           (wchar_t *)(param_3 + 0x20),local_6290,local_4040,0x800);
                }
                goto LAB_001caa68;
              }
            }
          }
          else {
            if (iVar20 - 1U < 3) {
              if (local_62a0 == (CommandData)0x0) goto LAB_001ca328;
                    /* try { // try from 001caa64 to 001cab2f has its CatchHandler @ 001cac88 */
              CVar14 = (CommandData)
                       ExtractSymlink((CommandData *)param_2,this,(Archive *)param_3,local_6290);
LAB_001caa68:
              if (CVar14 != (CommandData)0x0) {
                CVar16 = CVar14;
                if (*(int *)(param_3 + 0x11208) == 2) {
                  CVar16 = local_62a0;
                }
                goto LAB_001ca338;
              }
            }
            local_62a0 = (CommandData)0x0;
            CVar14 = (CommandData)0x0;
            CVar16 = (CommandData)0x0;
          }
LAB_001ca338:
          param_1[0x67f9] = local_62a0;
        }
        Archive::SeekToNext();
        if (*(char *)(param_3 + 0xa83a) == '\0') {
          puVar1 = (uchar *)0x0;
        }
        cVar15 = DataHash::Cmp((DataHash *)(param_1 + 0x3978),(HashValue *)(param_3 + 0xa7e0),puVar1
                              );
        if (*(char *)(param_3 + 0xa860) == '\0') {
          param_1[0x45f3] = (CommandData)0x0;
LAB_001ca390:
          if ((((byte)CVar16 & (byte)CVar18) == 0) || (CVar8 != (CommandData)0x0 && cVar15 != '\0'))
          goto LAB_001ca3a4;
LAB_001ca5ec:
                    /* try { // try from 001ca5f8 to 001ca5fb has its CatchHandler @ 001cac88 */
          ErrorHandler::SetErrorCode((ErrorHandler *)&ErrHandler,3);
          bVar13 = true;
          if (*(int *)(param_2 + 0x125c0) != 0xf) {
            uVar21 = 0x18;
            if (CVar12 == (CommandData)0x0) {
              uVar21 = 0xc;
            }
            *(undefined4 *)(param_2 + 0x125c0) = uVar21;
          }
        }
        else {
          if ((*(char *)(param_3 + 0x878a) == '\0') || (*(long *)(param_3 + 0xa7d0) < 1))
          goto LAB_001ca390;
          if (cVar15 != '\0') {
            param_1[0x45f3] = (CommandData)0x1;
            goto LAB_001ca390;
          }
          if (((byte)CVar16 & (byte)CVar18) != 0) goto LAB_001ca5ec;
LAB_001ca3a4:
          bVar13 = false;
        }
        if (((CVar11 == (CommandData)0x0) && (wVar6 == L'X' || wVar6 == L'E')) &&
           ((local_6274 == 0 || (CVar14 != (CommandData)0x0 && *(int *)(param_3 + 0xa878) == 5)))) {
          if (bVar13) {
            if (param_2[0xc2b4] == (Archive)0x0) goto LAB_001ca3e0;
                    /* try { // try from 001ca884 to 001ca91b has its CatchHandler @ 001cac88 */
            File::Truncate();
          }
          pRVar4 = (RarTime *)(param_3 + 0xa7b0);
          if (*(int *)(param_2 + 0xe5ac) == 0) {
            pRVar4 = (RarTime *)0x0;
          }
          pRVar5 = (RarTime *)(param_3 + 0xa7b8);
          if (*(int *)(param_2 + 0xe5b0) == 0) {
            pRVar5 = (RarTime *)0x0;
          }
          File::SetOpenFileTime((RarTime *)aFStack_2040,pRVar4,pRVar5);
          File::Close();
          if (((param_2[0xc2a8] != (Archive)0x0) && (*(int *)(param_3 + 0x11208) == 3)) &&
             (*(char *)(param_3 + 0xc87d) != '\0')) {
            SetUnixOwner((Archive *)param_3,awStack_2020);
          }
          pRVar4 = (RarTime *)(param_3 + 0xa7b0);
          if (*(int *)(param_2 + 0xe5ac) == 0) {
            pRVar4 = (RarTime *)0x0;
          }
          pRVar5 = (RarTime *)(param_3 + 0xa7c0);
          if (*(int *)(param_2 + 0xe5b4) == 0) {
            pRVar5 = (RarTime *)0x0;
          }
          File::SetCloseFileTime((File *)(RarTime *)aFStack_2040,pRVar4,pRVar5);
          if (param_2[0xc4bc] == (Archive)0x0) {
            SetFileAttr(awStack_2020,*(uint *)(param_3 + 0x878c));
          }
          param_1[0x67f9] = (CommandData)0x1;
        }
LAB_001ca3e0:
        CVar16 = (CommandData)0x1;
        SecPassword::~SecPassword(aSStack_6248);
      }
LAB_001ca3ec:
      File::~File(aFStack_2040);
      if (CVar10 != (CommandData)0x0) {
        *(long *)(param_1 + 0x45e8) = *(long *)(param_1 + 0x45e8) + 1;
      }
      if (param_1[0x209a] != (CommandData)0x0) goto LAB_001c9c78;
      if ((CVar16 != (CommandData)0x0) || (CVar16 = CVar19, *(char *)(param_3 + 0x1120c) != '\0'))
      goto LAB_001c9c7c;
    }
    else if (iVar20 == 0x77) {
      if (param_1[0x67f9] != (CommandData)0x0) {
        SetExtraInfo20((CommandData *)param_2,(Archive *)param_3,(wchar_t *)(param_1 + 0x67fc));
      }
    }
    else if (iVar20 == 3) {
      if (param_1[0x67f9] != (CommandData)0x0) {
        SetExtraInfo((CommandData *)param_2,(Archive *)param_3,(wchar_t *)(param_1 + 0x67fc));
      }
    }
    else if (iVar20 == 5) {
      if (*(char *)(param_3 + 0xcaa4) != '\0') {
        CVar16 = (CommandData)
                 MergeArchive((Archive *)param_3,(ComprDataIO *)(param_1 + 8),false,wVar6);
        if (CVar16 != (CommandData)0x0) {
          (**(code **)(*(long *)param_3 + 0x18))(param_3,*(undefined8 *)(param_3 + 0x111f8),0);
          goto LAB_001c9c7c;
        }
        goto LAB_001c9ea8;
      }
      goto LAB_001c9c78;
    }
LAB_001c9d00:
    Archive::SeekToNext();
    CVar16 = (CommandData)0x1;
  }
LAB_001c9c7c:
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_8 - ___stack_chk_guard,0);
  }
  return CVar16;
}


