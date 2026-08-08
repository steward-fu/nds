/*
 * Ghidra decompilation
 *
 * Function : RARReadHeader
 * Address  : 080d11b0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int RARReadHeader(void *hArcData,RARHeaderData *D)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  int Code;
  uint uVar4;
  uint uVar5;
  RAR_EXIT ErrCode;
  uint uVar6;
  Archive *this;
  DataSet *Data;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  uint in_stack_ffffc76c;
  uint local_388c;
  uint local_3888;
  uint local_3884;
  uint local_3880;
  uint local_387c;
  uint local_3878;
  uint local_3874;
  uint local_3870;
  uint local_386c;
  RARHeaderDataEx_conflict X;
  
  iVar1 = __stack_chk_guard;
  this = (Archive *)((int)hArcData + 0x167d8);
  memset(&X,0,0x383c);
  sVar3 = Archive::SearchBlock(this,HEAD_FILE);
  *(size_t *)((int)hArcData + 0x31bb4) = sVar3;
  if ((int)sVar3 < 1) {
    if (((*(char *)((int)hArcData + 0x27675) == '\0') || (*(int *)((int)hArcData + 0x1daec) != 5))
       || (*(char *)((int)hArcData + 0x22f24) == '\0')) {
      if (*(char *)((int)hArcData + 0x27684) == '\0') {
        if (*(char *)((int)hArcData + 0x27685) == '\0') {
          iVar7 = 10;
        }
        else {
          iVar7 = 0x18;
        }
      }
      else {
        iVar7 = 0xc;
      }
      goto LAB_080d146c;
    }
    bVar11 = MergeArchive(this,(ComprDataIO *)0x0,false,0x4c);
    if (!bVar11) {
      iVar7 = 0xf;
      goto LAB_080d146c;
    }
    Archive::Seek(this,(ulonglong)in_stack_ffffc76c << 0x20,0);
  }
  else {
    if ((*(int *)((int)hArcData + 0x31bb0) != 0) || (*(char *)((int)hArcData + 0x20c90) == '\0')) {
      wcsncpy(X.ArcNameW,(wchar_t *)((int)hArcData + 0x167f0),0x400);
      WideToChar((wchar *)X.ArcNameW,X.ArcName,0x400);
      wcsncpy(X.FileNameW,(wchar_t *)((int)hArcData + 0x1ec28),0x400);
      WideToChar((wchar *)X.FileNameW,X.FileName,0x400);
      bVar11 = *(char *)((int)hArcData + 0x20c90) != '\0';
      if (bVar11) {
        uVar6 = 0x21;
        uVar4 = 0x31;
        uVar5 = 0x11;
        uVar8 = 0x35;
        uVar9 = 0x15;
        uVar10 = 5;
        local_388c = 0x25;
        local_387c = 0x23;
        local_3880 = 0x33;
        local_3884 = 0x13;
        local_3874 = 0x27;
        local_386c = 0x37;
        local_3878 = 0x17;
        local_3888 = 7;
        local_3870 = 3;
      }
      else {
        uVar6 = 0x20;
        uVar4 = 0x30;
        uVar5 = 0x10;
        local_388c = 0x24;
        uVar8 = 0x34;
        uVar9 = 0x14;
        uVar10 = 4;
        local_387c = 0x22;
        local_3880 = 0x32;
        local_3884 = 0x12;
        local_3874 = 0x26;
        local_386c = 0x36;
        local_3878 = 0x16;
        local_3888 = 6;
        local_3870 = 2;
      }
      X.Flags = (uint)bVar11;
      if (*(char *)((int)hArcData + 0x20c91) != '\0') {
        X.Flags = local_3870;
        local_388c = local_3874;
        uVar4 = local_3880;
        uVar5 = local_3884;
        uVar6 = local_387c;
        uVar8 = local_386c;
        uVar9 = local_3878;
        uVar10 = local_3888;
      }
      if (*(char *)((int)hArcData + 0x20c93) != '\0') {
        uVar4 = uVar8;
        uVar5 = uVar9;
        uVar6 = local_388c;
        X.Flags = uVar10;
      }
      bVar11 = *(char *)((int)hArcData + 0x20ce8) != '\0';
      if (bVar11) {
        uVar6 = uVar4;
      }
      X.HostOS = *(uint *)((int)hArcData + 0x20cf4);
      if (bVar11) {
        X.Flags = uVar5;
      }
      if (*(char *)((int)hArcData + 0x20ce9) != '\0') {
        X.Flags = uVar6;
      }
      bVar11 = X.HostOS != 0;
      if (bVar11) {
        X.HostOS = 3;
      }
      X.PackSizeHigh = *(uint *)((int)hArcData + 0x20c54);
      if (!bVar11) {
        X.HostOS = 2;
      }
      X.UnpSize = *(uint *)((int)hArcData + 0x20c58);
      X.PackSize = *(uint *)((int)hArcData + 0x20c50);
      X.UnpSizeHigh = *(uint *)((int)hArcData + 0x20c5c);
      X.UnpVer = (uint)*(byte *)((int)hArcData + 0x1ec21);
      if (*(int *)((int)hArcData + 0x27670) == 3) {
        if (X.UnpVer == 0) {
          X.UnpVer = 0x32;
        }
        else {
          X.UnpVer = 200;
        }
      }
      X.FileCRC = *(uint *)((int)hArcData + 0x20c6c);
      X.FileTime = RarTime::GetDos((RarTime *)((int)hArcData + 0x20c38));
      iVar7 = 0;
      uVar4 = *(uint *)((int)hArcData + 0x20c68);
      X.CmtSize = 0;
      X.FileAttr = *(uint *)((int)hArcData + 0x1ec24);
      X.Method = *(byte *)((int)hArcData + 0x1ec22) + 0x30;
      X.DictSize = *(uint *)((int)hArcData + 0x20cec) >> 10;
      X.CmtState = 0;
      if (uVar4 != 0) {
        if (uVar4 < 3) {
          X.HashType = 1;
          goto LAB_080d146c;
        }
        if (uVar4 == 3) {
          X.Hash._0_4_ = *(undefined4 *)((int)hArcData + 0x20c6c);
          X.Hash._4_4_ = *(undefined4 *)((int)hArcData + 0x20c70);
          X.Hash._12_4_ = *(undefined4 *)((int)hArcData + 0x20c78);
          X.HashType = 2;
          X.Hash._8_4_ = *(undefined4 *)((int)hArcData + 0x20c74);
          X.Hash._16_4_ = *(undefined4 *)((int)hArcData + 0x20c7c);
          X.Hash._20_4_ = *(undefined4 *)((int)hArcData + 0x20c80);
          X.Hash._24_4_ = *(undefined4 *)((int)hArcData + 0x20c84);
          X.Hash._28_4_ = *(undefined4 *)((int)hArcData + 0x20c88);
          goto LAB_080d146c;
        }
      }
      iVar7 = 0;
      X.HashType = 0;
      goto LAB_080d146c;
    }
    iVar7 = ProcessFile(hArcData,0,(char *)0x0,(char *)0x0,(wchar *)0x0,(wchar *)0x0);
    if (iVar7 != 0) goto LAB_080d146c;
  }
  iVar7 = RARReadHeaderEx(hArcData,&X);
LAB_080d146c:
  strncpyz(D->ArcName,X.ArcName,0x104);
  strncpyz(D->FileName,X.FileName,0x104);
  iVar2 = __stack_chk_guard;
  *(undefined *)&D->CmtSize = 0;
  *(undefined *)((int)&D->CmtSize + 1) = 0;
  *(undefined *)((int)&D->CmtSize + 2) = 0;
  *(undefined *)((int)&D->CmtSize + 3) = 0;
  D->Flags = X.Flags;
  D->PackSize = X.PackSize;
  D->UnpSize = X.UnpSize;
  D->HostOS = X.HostOS;
  D->FileCRC = X.FileCRC;
  D->FileTime = X.FileTime;
  D->UnpVer = X.UnpVer;
  D->Method = X.Method;
  D->FileAttr = X.FileAttr;
  *(undefined *)&D->CmtState = 0;
  *(undefined *)((int)&D->CmtState + 1) = 0;
  *(undefined *)((int)&D->CmtState + 2) = 0;
  *(undefined *)((int)&D->CmtState + 3) = 0;
  if (iVar1 == iVar2) {
    return iVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


