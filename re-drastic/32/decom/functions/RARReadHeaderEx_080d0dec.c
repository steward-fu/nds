/*
 * Ghidra decompilation
 *
 * Function : RARReadHeaderEx
 * Address  : 080d0dec
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable Data:DataSet *[r0:4] conflicts with parameter, skipped. */

int RARReadHeaderEx(void *hArcData,RARHeaderDataEx_conflict *D)

{
  char cVar1;
  char cVar2;
  size_t sVar3;
  int iVar4;
  uint uVar5;
  int Code;
  uint uVar6;
  undefined4 uVar7;
  uint *puVar8;
  uint uVar9;
  RAR_EXIT ErrCode;
  uint uVar10;
  undefined4 uVar11;
  Archive *this;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  bool bVar15;
  uint in_stack_ffffffd4;
  
  this = (Archive *)((int)hArcData + 0x167d8);
  sVar3 = Archive::SearchBlock(this,HEAD_FILE);
  *(size_t *)((int)hArcData + 0x31bb4) = sVar3;
  if ((int)sVar3 < 1) {
    if (((*(char *)((int)hArcData + 0x27675) == '\0') || (*(int *)((int)hArcData + 0x1daec) != 5))
       || (*(char *)((int)hArcData + 0x22f24) == '\0')) {
      if (*(char *)((int)hArcData + 0x27684) != '\0') {
        return 0xc;
      }
      if (*(char *)((int)hArcData + 0x27685) != '\0') {
        return 0x18;
      }
      return 10;
    }
    bVar15 = MergeArchive(this,(ComprDataIO *)0x0,false,0x4c);
    if (!bVar15) {
      return 0xf;
    }
    Archive::Seek(this,(ulonglong)in_stack_ffffffd4 << 0x20,0);
  }
  else {
    if ((*(int *)((int)hArcData + 0x31bb0) != 0) || (*(char *)((int)hArcData + 0x20c90) == '\0')) {
      wcsncpy(D->ArcNameW,(wchar_t *)((int)hArcData + 0x167f0),0x400);
      WideToChar((wchar *)D->ArcNameW,D->ArcName,0x400);
      wcsncpy(D->FileNameW,(wchar_t *)((int)hArcData + 0x1ec28),0x400);
      WideToChar((wchar *)D->FileNameW,D->FileName,0x400);
      cVar1 = *(char *)((int)hArcData + 0x20c90);
      iVar12 = *(int *)((int)hArcData + 0x20cf4);
      *(undefined *)&D->Flags = 0;
      *(undefined *)((int)&D->Flags + 1) = 0;
      bVar15 = cVar1 != '\0';
      *(undefined *)((int)&D->Flags + 2) = 0;
      *(undefined *)((int)&D->Flags + 3) = 0;
      cVar1 = *(char *)((int)hArcData + 0x20c91);
      if (bVar15) {
        uVar6 = 3;
        *(undefined *)&D->Flags = 1;
      }
      else {
        uVar6 = 2;
      }
      cVar2 = *(char *)((int)hArcData + 0x20c93);
      uVar10 = (uint)bVar15;
      if (cVar1 != '\0') {
        D->Flags = uVar6;
        uVar10 = uVar6;
      }
      cVar1 = *(char *)((int)hArcData + 0x20ce8);
      if (cVar2 != '\0') {
        uVar10 = uVar10 | 4;
        D->Flags = uVar10;
      }
      cVar2 = *(char *)((int)hArcData + 0x20ce9);
      if (cVar1 != '\0') {
        uVar10 = uVar10 | 0x10;
        D->Flags = uVar10;
      }
      bVar15 = cVar2 != '\0';
      if (bVar15) {
        uVar10 = uVar10 | 0x20;
      }
      iVar4 = *(int *)((int)hArcData + 0x27670);
      if (bVar15) {
        D->Flags = uVar10;
      }
      bVar15 = iVar12 != 0;
      puVar8 = (uint *)((int)hArcData + 0x20c50);
      uVar6 = *puVar8;
      if (bVar15) {
        puVar8 = (uint *)0x3;
      }
      uVar10 = *(uint *)((int)hArcData + 0x20c58);
      if (!bVar15) {
        puVar8 = (uint *)0x2;
      }
      uVar13 = *(uint *)((int)hArcData + 0x20c5c);
      uVar9 = *(uint *)((int)hArcData + 0x20c54);
      D->PackSize = uVar6;
      D->HostOS = (uint)puVar8;
      D->PackSizeHigh = uVar9;
      D->UnpSize = uVar10;
      D->UnpSizeHigh = uVar13;
      if (iVar4 == 3) {
        if (*(byte *)((int)hArcData + 0x1ec21) == 0) {
          uVar6 = 0x32;
        }
        else {
          uVar6 = 200;
        }
        D->UnpVer = uVar6;
      }
      else {
        D->UnpVer = (uint)*(byte *)((int)hArcData + 0x1ec21);
      }
      D->FileCRC = *(uint *)((int)hArcData + 0x20c6c);
      uVar5 = RarTime::GetDos((RarTime *)((int)hArcData + 0x20c38));
      D->FileTime = uVar5;
      uVar6 = *(uint *)((int)hArcData + 0x20c68);
      uVar10 = *(uint *)((int)hArcData + 0x20cec);
      D->Method = *(byte *)((int)hArcData + 0x1ec22) + 0x30;
      D->FileAttr = *(uint *)((int)hArcData + 0x1ec24);
      *(undefined *)&D->CmtSize = 0;
      *(undefined *)((int)&D->CmtSize + 1) = 0;
      *(undefined *)((int)&D->CmtSize + 2) = 0;
      *(undefined *)((int)&D->CmtSize + 3) = 0;
      *(undefined *)&D->CmtState = 0;
      *(undefined *)((int)&D->CmtState + 1) = 0;
      *(undefined *)((int)&D->CmtState + 2) = 0;
      *(undefined *)((int)&D->CmtState + 3) = 0;
      D->DictSize = uVar10 >> 10;
      if (uVar6 != 0) {
        if (uVar6 < 3) {
          *(undefined *)&D->HashType = 1;
          *(undefined *)((int)&D->HashType + 1) = 0;
          *(undefined *)((int)&D->HashType + 2) = 0;
          *(undefined *)((int)&D->HashType + 3) = 0;
          return 0;
        }
        if (uVar6 == 3) {
          *(undefined *)&D->HashType = 2;
          *(undefined *)((int)&D->HashType + 1) = 0;
          *(undefined *)((int)&D->HashType + 2) = 0;
          *(undefined *)((int)&D->HashType + 3) = 0;
          uVar14 = *(undefined4 *)((int)hArcData + 0x20c70);
          uVar7 = *(undefined4 *)((int)hArcData + 0x20c74);
          uVar11 = *(undefined4 *)((int)hArcData + 0x20c78);
          *(undefined4 *)D->Hash = *(undefined4 *)((int)hArcData + 0x20c6c);
          *(undefined4 *)(D->Hash + 4) = uVar14;
          *(undefined4 *)(D->Hash + 8) = uVar7;
          *(undefined4 *)(D->Hash + 0xc) = uVar11;
          uVar14 = *(undefined4 *)((int)hArcData + 0x20c80);
          uVar7 = *(undefined4 *)((int)hArcData + 0x20c84);
          uVar11 = *(undefined4 *)((int)hArcData + 0x20c88);
          *(undefined4 *)(D->Hash + 0x10) = *(undefined4 *)((int)hArcData + 0x20c7c);
          *(undefined4 *)(D->Hash + 0x14) = uVar14;
          *(undefined4 *)(D->Hash + 0x18) = uVar7;
          *(undefined4 *)(D->Hash + 0x1c) = uVar11;
          return 0;
        }
      }
      *(undefined *)&D->HashType = 0;
      *(undefined *)((int)&D->HashType + 1) = 0;
      *(undefined *)((int)&D->HashType + 2) = 0;
      *(undefined *)((int)&D->HashType + 3) = 0;
      return 0;
    }
    iVar12 = ProcessFile(hArcData,0,(char *)0x0,(char *)0x0,(wchar *)0x0,(wchar *)0x0);
    if (iVar12 != 0) {
      return iVar12;
    }
  }
  iVar12 = RARReadHeaderEx(hArcData,D);
  return iVar12;
}


