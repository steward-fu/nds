/*
 * Ghidra decompilation
 *
 * Function : ReadCommentData
 * Address  : 080d73ac
 * Program  : drastic
 */


/* DWARF original prototype: bool ReadCommentData(Archive * this, Array<wchar_t> * CmtData) */

bool __thiscall Archive::ReadCommentData(Archive *this,Array<wchar_t> *CmtData)

{
  int iVar1;
  size_t sVar2;
  bool bVar3;
  uchar *puVar4;
  uchar *NewBuffer;
  size_t sVar5;
  wchar_t *NewBuffer_2;
  wchar_t *NewBuffer_1;
  wchar_t *pwVar6;
  size_t Suggested_2;
  uint uVar7;
  size_t Suggested;
  uint uVar8;
  size_t Suggested_1;
  size_t NewSize_2;
  size_t NewSize_1;
  size_t NewSize;
  bool bVar9;
  Array<unsigned_char> CmtRaw;
  
  iVar1 = __stack_chk_guard;
  CmtRaw.Buffer = (uchar *)0x0;
  CmtRaw.BufSize = 0;
  CmtRaw.AllocSize = 0;
  CmtRaw.MaxSize = 0;
  bVar3 = ReadSubData(this,&CmtRaw,(File *)0x0);
  sVar2 = CmtRaw.BufSize;
  if (!bVar3) goto LAB_080d7404;
  NewSize_1 = CmtRaw.BufSize + 1;
  if (CmtRaw.AllocSize < NewSize_1) {
    bVar9 = CmtRaw.MaxSize == 0;
    uVar8 = CmtRaw.MaxSize;
    if (!bVar9 && CmtRaw.MaxSize > NewSize_1 || (bVar9 || NewSize_1 == CmtRaw.MaxSize)) {
      uVar8 = NewSize_1;
    }
    CmtRaw.BufSize = NewSize_1;
    if ((bVar9 || CmtRaw.MaxSize <= NewSize_1) && (!bVar9 && NewSize_1 != CmtRaw.MaxSize)) {
      ErrorHandler::GeneralErrMsg
                (&ErrHandler,(wchar *)L"Maximum allowed array size (%u) is exceeded");
      ErrorHandler::MemoryError(&ErrHandler);
      uVar8 = CmtRaw.BufSize;
    }
    NewSize = CmtRaw.AllocSize + 0x20 + (CmtRaw.AllocSize >> 2);
    if (NewSize < uVar8) {
      NewSize = uVar8;
    }
    puVar4 = (uchar *)realloc(CmtRaw.Buffer,NewSize);
    if (puVar4 == (uchar *)0x0) {
      ErrorHandler::MemoryError(&ErrHandler);
    }
    puVar4[CmtRaw.BufSize - 1] = '\0';
    uVar8 = CmtData->AllocSize;
    CmtRaw.Buffer = puVar4;
    CmtRaw.AllocSize = NewSize;
    if (uVar8 < NewSize_1) goto LAB_080d757c;
LAB_080d74bc:
    pwVar6 = CmtData->Buffer;
    CmtData->BufSize = NewSize_1;
  }
  else {
    CmtRaw.Buffer[CmtRaw.BufSize] = '\0';
    uVar8 = CmtData->AllocSize;
    CmtRaw.BufSize = NewSize_1;
    if (NewSize_1 <= uVar8) goto LAB_080d74bc;
LAB_080d757c:
    uVar7 = CmtData->MaxSize;
    CmtData->BufSize = NewSize_1;
    if ((uVar7 == 0 || uVar7 <= NewSize_1) && (uVar7 != 0 && NewSize_1 != uVar7)) {
      ErrorHandler::GeneralErrMsg
                (&ErrHandler,(wchar *)L"Maximum allowed array size (%u) is exceeded");
      ErrorHandler::MemoryError(&ErrHandler);
      NewSize_1 = CmtData->BufSize;
      uVar8 = CmtData->AllocSize;
    }
    uVar8 = uVar8 + 0x20 + (uVar8 >> 2);
    if (NewSize_1 <= uVar8) {
      NewSize_1 = uVar8;
    }
    pwVar6 = (wchar_t *)realloc(CmtData->Buffer,NewSize_1 << 2);
    if (pwVar6 == (wchar_t *)0x0) {
      ErrorHandler::MemoryError(&ErrHandler);
    }
    CmtData->Buffer = pwVar6;
    CmtData->AllocSize = NewSize_1;
  }
  if (this->Format == RARFMT50) {
    UtfToWide((char *)CmtRaw.Buffer,(wchar *)pwVar6,CmtData->BufSize);
LAB_080d75d0:
    pwVar6 = CmtData->Buffer;
  }
  else {
    if (((this->SubHead).field_3.FileAttr & 1) == 0) {
      CharToWide((char *)CmtRaw.Buffer,(wchar *)pwVar6,CmtData->BufSize);
      goto LAB_080d75d0;
    }
    RawToWide(CmtRaw.Buffer,(wchar *)pwVar6,sVar2 >> 1);
    pwVar6 = CmtData->Buffer;
    pwVar6[sVar2 >> 1] = L'\0';
  }
  sVar5 = wcslen(pwVar6);
  uVar8 = CmtData->AllocSize;
  if (uVar8 < sVar5) {
    uVar7 = CmtData->MaxSize;
    CmtData->BufSize = sVar5;
    if ((uVar7 == 0 || uVar7 <= sVar5) && (uVar7 != 0 && sVar5 != uVar7)) {
      ErrorHandler::GeneralErrMsg
                (&ErrHandler,(wchar *)L"Maximum allowed array size (%u) is exceeded");
      ErrorHandler::MemoryError(&ErrHandler);
      pwVar6 = CmtData->Buffer;
      sVar5 = CmtData->BufSize;
      uVar8 = CmtData->AllocSize;
    }
    NewSize_2 = uVar8 + 0x20 + (uVar8 >> 2);
    if (NewSize_2 < sVar5) {
      NewSize_2 = sVar5;
    }
    pwVar6 = (wchar_t *)realloc(pwVar6,NewSize_2 << 2);
    if (pwVar6 == (wchar_t *)0x0) {
      ErrorHandler::MemoryError(&ErrHandler);
    }
    CmtData->Buffer = pwVar6;
    CmtData->AllocSize = NewSize_2;
  }
  else {
    CmtData->BufSize = sVar5;
  }
LAB_080d7404:
  if (CmtRaw.Buffer != (uchar *)0x0) {
    free(CmtRaw.Buffer);
  }
  if (iVar1 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar3;
}


