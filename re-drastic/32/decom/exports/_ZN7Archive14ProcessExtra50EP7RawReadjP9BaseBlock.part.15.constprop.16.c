/*
 * Ghidra decompilation
 *
 * Function : _ZN7Archive14ProcessExtra50EP7RawReadjP9BaseBlock.part.15.constprop.16
 * Address  : 080d92a8
 * Program  : drastic
 */


/* DWARF original prototype: void ProcessExtra50(Archive * this, RawRead * Raw, size_t ExtraSize,
   BaseBlock * bb) */

void __thiscall Archive::ProcessExtra50(Archive *this,RawRead *Raw,size_t ExtraSize,BaseBlock *bb)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint Flags_1;
  uint Flags_2;
  size_t NameSize;
  uint Version;
  uint uVar4;
  uint Type;
  uint EncVersion;
  uint Flags_4;
  uint Flags;
  uchar *NewBuffer;
  size_t Length_1;
  size_t Length;
  int iVar5;
  void *Field;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  size_t Suggested;
  size_t sVar9;
  size_t NextPos;
  byte Flags_3;
  size_t sVar10;
  uint Size;
  size_t sVar11;
  size_t NewSize;
  MainHeader *hd;
  int iVar12;
  bool bVar13;
  uint64 uVar14;
  uint64 uVar15;
  undefined1 *in_stack_ffffdf40;
  int in_stack_ffffdf44;
  uint local_20a8;
  int iStack_20a4;
  wchar VerText [20];
  byte csum [4];
  char UtfName [8192];
  
  iVar1 = __stack_chk_guard;
  if (1 < Raw->DataSize - Raw->ReadPos) {
    while( true ) {
      uVar14 = RawRead::GetV(Raw);
      iVar5 = (int)(uVar14 >> 0x20);
      uVar3 = (uint)uVar14;
      if (uVar14 == 0) break;
      sVar9 = Raw->ReadPos;
      if ((Raw->DataSize == sVar9) ||
         (bVar13 = Raw->DataSize - sVar9 < uVar3,
         0 < (int)(iVar5 + (uint)bVar13) != (SBORROW4(-iVar5,(uint)bVar13) != false))) break;
      uVar14 = RawRead::GetV(Raw);
      uVar8 = (uint)(uVar14 >> 0x20);
      iVar5 = (int)uVar14;
      iVar12 = *(int *)(ExtraSize + 4);
      sVar11 = Raw->DataSize;
      sVar10 = Raw->ReadPos;
      if (iVar12 == 1 && (uVar8 == 0 && iVar5 == 1)) {
        *(undefined *)(ExtraSize + 0x1e) = 1;
        uVar14 = RawRead::GetV(Raw);
        if (((uVar14 & 1) != 0) && (uVar15 = RawRead::GetV(Raw), uVar15 != 0)) {
          uVar6 = *(uint *)&this->CurBlockPos;
          iVar12 = *(int *)((int)&this->CurBlockPos + 4);
          local_20a8 = (uint)uVar15;
          iStack_20a4 = (int)(uVar15 >> 0x20);
          *(uint *)(ExtraSize + 0x20) = local_20a8 + uVar6;
          *(uint *)(ExtraSize + 0x24) = iStack_20a4 + iVar12 + (uint)CARRY4(local_20a8,uVar6);
        }
        if (((uVar14 & 2) == 0) || (uVar14 = RawRead::GetV(Raw), uVar14 == 0)) {
          iVar12 = *(int *)(ExtraSize + 4);
        }
        else {
          iVar12 = *(int *)(ExtraSize + 4);
          *(uint64 *)(ExtraSize + 0x30) = uVar14 + this->CurBlockPos;
        }
      }
      if (iVar12 - 2U < 2) {
        uVar6 = iVar5 - 1;
        Size = sVar11 - sVar10;
        bVar13 = uVar8 == (iVar5 == 0);
        if (bVar13 && uVar6 < 6 || bVar13 && uVar6 == 6) {
          switch(uVar6) {
          case 0:
            uVar14 = RawRead::GetV(Raw);
            if ((int)uVar14 == 0) {
              uVar14 = RawRead::GetV(Raw);
              *(byte *)(ExtraSize + 0x20b1) = (byte)uVar14 & 1;
              *(byte *)(ExtraSize + 0x20ba) = (byte)((uint)((int)uVar14 << 0x1e) >> 0x1f);
              bVar2 = RawRead::Get1(Raw);
              *(uint *)(ExtraSize + 0x20dc) = (uint)bVar2;
              if (0x18 < bVar2) {
                ErrorHandler::SetErrorCode(&ErrHandler,RARX_WARNING);
              }
              RawRead::GetB(Raw,(void *)(ExtraSize + 0x2091),0x10);
              RawRead::GetB(Raw,(void *)(ExtraSize + 0x20a1),0x10);
              if (*(char *)(ExtraSize + 0x20b1) != '\0') {
                RawRead::GetB(Raw,(void *)(ExtraSize + 0x20b2),8);
                RawRead::GetB(Raw,csum,4);
                sha256_init((sha256_context *)VerText);
                sha256_process((sha256_context *)VerText,(void *)(ExtraSize + 0x20b2),8);
                sha256_done((sha256_context *)VerText,(byte *)UtfName);
                iVar5 = memcmp(csum,UtfName,4);
                *(bool *)(ExtraSize + 0x20b1) = iVar5 == 0;
              }
              *(undefined *)(ExtraSize + 0x208b) = 1;
              *(undefined4 *)(ExtraSize + 0x208c) = 5;
              *(undefined *)(ExtraSize + 0x2090) = 1;
            }
            else {
              ErrorHandler::SetErrorCode(&ErrHandler,RARX_WARNING);
            }
            break;
          case 1:
            uVar14 = RawRead::GetV(Raw);
            if ((int)uVar14 == 0) {
              *(undefined4 *)(ExtraSize + 0x2060) = 3;
              RawRead::GetB(Raw,(void *)(ExtraSize + 0x2064),0x20);
            }
            break;
          case 2:
            if (8 < Size) {
              uVar14 = RawRead::GetV(Raw);
              if ((uVar14 & 2) == 0) {
                if ((uVar14 & 4) != 0) {
                  if ((uVar14 & 1) == 0) goto LAB_080d9978;
LAB_080d9868:
                  uVar4 = RawRead::Get4(Raw);
                  RarTime::operator=((RarTime *)(ExtraSize + 0x2038),uVar4);
                  goto joined_r0x080d9884;
                }
                if ((uVar14 & 8) == 0) break;
                if ((uVar14 & 1) == 0) goto LAB_080d9930;
LAB_080d9888:
                uVar4 = RawRead::Get4(Raw);
                RarTime::operator=((RarTime *)(ExtraSize + 0x2040),uVar4);
              }
              else if ((uVar14 & 1) == 0) {
                RawRead::Get8(Raw);
                RarTime::SetRaw((RarTime *)(ExtraSize + 0x2030),
                                CONCAT44(in_stack_ffffdf44,in_stack_ffffdf40));
                if ((uVar14 & 4) != 0) {
LAB_080d9978:
                  RawRead::Get8(Raw);
                  RarTime::SetRaw((RarTime *)(ExtraSize + 0x2038),
                                  CONCAT44(in_stack_ffffdf44,in_stack_ffffdf40));
                }
                if ((uVar14 & 8) != 0) {
LAB_080d9930:
                  RawRead::Get8(Raw);
                  RarTime::SetRaw((RarTime *)(ExtraSize + 0x2040),
                                  CONCAT44(in_stack_ffffdf44,in_stack_ffffdf40));
                }
              }
              else {
                uVar4 = RawRead::Get4(Raw);
                RarTime::operator=((RarTime *)(ExtraSize + 0x2030),uVar4);
                if ((uVar14 & 4) != 0) goto LAB_080d9868;
joined_r0x080d9884:
                if ((uVar14 & 8) != 0) goto LAB_080d9888;
              }
            }
            break;
          case 3:
            if (Size != 0) {
              RawRead::GetV(Raw);
              uVar14 = RawRead::GetV(Raw);
              iVar5 = (int)uVar14;
              if (iVar5 != 0) {
                in_stack_ffffdf40 = &DAT_08144da8;
                *(undefined *)(ExtraSize + 0x20e3) = 1;
                __swprintf_chk(VerText,0x14,1);
                wcsncatz((this->FileHead).FileName,VerText,0x800);
                in_stack_ffffdf44 = iVar5;
              }
            }
            break;
          case 4:
            uVar14 = RawRead::GetV(Raw);
            *(int *)(ExtraSize + 0x20f0) = (int)uVar14;
            uVar14 = RawRead::GetV(Raw);
            *(byte *)(ExtraSize + 0x40f4) = (byte)uVar14 & 1;
            uVar14 = RawRead::GetV(Raw);
            uVar8 = (uint)uVar14;
            UtfName[0] = '\0';
            if (uVar8 < 0x1fff) {
              RawRead::GetB(Raw,UtfName,uVar8);
              UtfName[uVar8] = '\0';
            }
            UtfToWide(UtfName,(wchar *)(ExtraSize + 0x20f4),0x800);
            break;
          case 5:
            uVar14 = RawRead::GetV(Raw);
            *(byte *)(ExtraSize + 0x40f6) = (byte)((uint)((int)uVar14 << 0x1d) >> 0x1f);
            *(byte *)(ExtraSize + 0x40f7) = (byte)((uint)((int)uVar14 << 0x1c) >> 0x1f);
            *(undefined *)(ExtraSize + 0x40f8) = 0;
            *(undefined *)(ExtraSize + 0x41f8) = 0;
            if ((uVar14 & 1) != 0) {
              uVar15 = RawRead::GetV(Raw);
              uVar8 = (uint)uVar15;
              if (0xfe < uVar8) {
                uVar8 = 0xff;
              }
              RawRead::GetB(Raw,(void *)(ExtraSize + 0x40f8),uVar8);
              *(undefined *)(ExtraSize + uVar8 + 0x40f8) = 0;
            }
            if ((uVar14 & 2) != 0) {
              uVar14 = RawRead::GetV(Raw);
              uVar8 = (uint)uVar14;
              if (0xfe < uVar8) {
                uVar8 = 0xff;
              }
              RawRead::GetB(Raw,(void *)(ExtraSize + 0x41f8),uVar8);
              *(undefined *)(ExtraSize + uVar8 + 0x41f8) = 0;
            }
            if (*(char *)(ExtraSize + 0x40f6) != '\0') {
              uVar14 = RawRead::GetV(Raw);
              *(int *)(ExtraSize + 0x42f8) = (int)uVar14;
            }
            if (*(char *)(ExtraSize + 0x40f7) != '\0') {
              uVar14 = RawRead::GetV(Raw);
              *(int *)(ExtraSize + 0x42fc) = (int)uVar14;
            }
            *(undefined *)(ExtraSize + 0x40f5) = 1;
            break;
          case 6:
            uVar8 = *(uint *)(ExtraSize + 0x2028);
            if (uVar8 < Size) {
              uVar7 = *(uint *)(ExtraSize + 0x202c);
              *(uint *)(ExtraSize + 0x2024) = Size;
              bVar13 = uVar7 == 0;
              uVar6 = uVar7;
              if (!bVar13 && uVar7 > Size || (bVar13 || Size == uVar7)) {
                uVar6 = Size;
              }
              if ((bVar13 || uVar7 <= Size) && (!bVar13 && Size != uVar7)) {
                ErrorHandler::GeneralErrMsg
                          (&ErrHandler,(wchar *)L"Maximum allowed array size (%u) is exceeded");
                ErrorHandler::MemoryError(&ErrHandler);
                uVar6 = *(uint *)(ExtraSize + 0x2024);
                uVar8 = *(uint *)(ExtraSize + 0x2028);
              }
              NewSize = uVar8 + 0x20 + (uVar8 >> 2);
              if (NewSize < uVar6) {
                NewSize = uVar6;
              }
              Field = realloc(*(void **)(ExtraSize + 0x2020),NewSize);
              if (Field == (void *)0x0) {
                ErrorHandler::MemoryError(&ErrHandler);
              }
              *(void **)(ExtraSize + 0x2020) = Field;
              *(size_t *)(ExtraSize + 0x2028) = NewSize;
            }
            else {
              Field = *(void **)(ExtraSize + 0x2020);
              *(uint *)(ExtraSize + 0x2024) = Size;
            }
            RawRead::GetB(Raw,Field,Size);
          }
        }
      }
      Raw->ReadPos = sVar9 + uVar3;
      if (Raw->DataSize - (sVar9 + uVar3) < 2) break;
    }
  }
  if (iVar1 == __stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


