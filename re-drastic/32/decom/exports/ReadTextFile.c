/*
 * Ghidra decompilation
 *
 * Function : ReadTextFile
 * Address  : 08107934
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

bool ReadTextFile(wchar *Name,StringList *List,bool Config,bool AbortOnError,RAR_CHARSET SrcCharset,
                 bool Unquote,bool SkipComments,bool ExpandEnvStr)

{
  byte *pbVar1;
  int iVar2;
  bool OpenCode;
  byte *__ptr;
  char *NewBuffer;
  int iVar3;
  uint ReadSize;
  char *NewBuffer_1;
  char *pcVar4;
  size_t sVar5;
  undefined4 *puVar6;
  uint *__ptr_00;
  wchar_t *NewBuffer_2;
  size_t Length;
  size_t Length_1;
  wchar_t *NewBuffer_3;
  wchar *pwVar8;
  char *extraout_r1;
  char *extraout_r1_00;
  char *pcVar9;
  char *SpacePtr_1;
  char *extraout_r1_01;
  char *extraout_r1_02;
  char *extraout_r1_03;
  char *extraout_r1_04;
  char *extraout_r1_05;
  char *extraout_r1_06;
  uint uVar11;
  uint uVar12;
  wchar *SpacePtr;
  char cVar10;
  size_t Suggested_1;
  bool bVar13;
  uint uVar14;
  char *CurStr_1;
  char *NextStr_1;
  wchar *pwVar15;
  size_t Suggested;
  size_t NewSize;
  char *pcVar16;
  int iVar17;
  undefined4 *Data;
  wchar *pwVar18;
  wchar *CurStr;
  wchar *NextStr;
  wchar wVar19;
  size_t NewSize_1;
  byte *pbVar20;
  wchar FileName [2048];
  File SrcFile;
  undefined4 *puVar7;
  
  iVar2 = __stack_chk_guard;
  FileName[0] = 0;
  if (Name != (wchar *)0x0) {
    if (Config) {
      GetConfigName(Name,FileName,0x800,true,false);
    }
    else {
      wcsncpyz(FileName,Name,0x800);
    }
  }
  File::File(&SrcFile);
  if (FileName[0] == 0) {
    SrcFile.HandleType = FILE_HANDLESTD;
  }
  else {
    if (AbortOnError) {
      OpenCode = File::WOpen(&SrcFile,FileName);
      SpacePtr_1 = extraout_r1_05;
    }
    else {
      OpenCode = File::Open(&SrcFile,FileName,0);
      SpacePtr_1 = extraout_r1;
    }
    if (OpenCode == false) {
      if (AbortOnError) {
        ErrorHandler::Exit(&ErrHandler,RARX_OPEN);
        SpacePtr_1 = extraout_r1_06;
      }
      bVar13 = false;
LAB_08107a14:
      File::~File(&SrcFile,(int)SpacePtr_1);
      if (iVar2 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return bVar13;
    }
  }
  __ptr = (byte *)realloc((void *)0x0,0x405);
  if (__ptr == (byte *)0x0) {
    ErrorHandler::MemoryError(&ErrHandler);
  }
  NewSize = 0x405;
  uVar14 = 0x405;
  iVar17 = 0;
  while( true ) {
    Data = (undefined4 *)(__ptr + iVar17);
    iVar3 = File::Read(&SrcFile,Data,0x400);
    if (iVar3 == 0) break;
    uVar14 = uVar14 + iVar3;
    iVar17 = iVar17 + iVar3;
    if (NewSize < uVar14) {
      NewSize = NewSize + 0x20 + (NewSize >> 2);
      if (NewSize <= uVar14) {
        NewSize = uVar14;
      }
      __ptr = (byte *)realloc(__ptr,NewSize);
      if (__ptr == (byte *)0x0) {
        ErrorHandler::MemoryError(&ErrHandler);
      }
    }
  }
  *Data = 0;
  *(undefined *)(Data + 1) = 0;
  if (SrcCharset == RCH_UNICODE) {
LAB_08107d00:
    uVar11 = (uVar14 >> 1) + 1;
    if (uVar11 < 0x20) {
      uVar11 = 0x20;
    }
    __ptr_00 = (uint *)realloc((void *)0x0,uVar11 << 2);
    if (__ptr_00 == (uint *)0x0) {
      ErrorHandler::MemoryError(&ErrHandler);
    }
    if (2 < uVar14 - 1) {
      uVar11 = 2;
      pbVar20 = __ptr;
      do {
        pbVar1 = pbVar20 + 3;
        uVar12 = uVar11 - 2;
        uVar11 = uVar11 + 2;
        pbVar20 = pbVar20 + 2;
        __ptr_00[uVar12 >> 1] = (uint)*pbVar20 + (uint)*pbVar1 * 0x100;
      } while (uVar11 < uVar14 - 1);
    }
    uVar14 = *__ptr_00;
    CurStr = __ptr_00;
LAB_08107d6c:
    NextStr = CurStr;
    if (uVar14 != 0) {
LAB_08107d74:
      if (uVar14 != 0xd && uVar14 != 10) {
        pwVar18 = (wchar *)0x0;
        pwVar8 = NextStr;
        do {
          cVar10 = SkipComments;
          if (uVar14 != 0x2f) {
            cVar10 = '\0';
          }
          uVar14 = pwVar8[1];
          if ((cVar10 == '\0') || (uVar14 != 0x2f)) {
            pwVar15 = pwVar8 + 1;
            if ((uVar14 < 0xe) && ((0x2401U >> (uVar14 & 0xff) & 1) == 1)) goto code_r0x08107f24;
          }
          else {
            *pwVar8 = 0;
            pwVar18 = pwVar8;
          }
          pwVar8 = pwVar8 + 1;
        } while( true );
      }
      *NextStr = 0;
      pwVar15 = NextStr;
      goto LAB_08107d98;
    }
LAB_08107e28:
    free(__ptr_00);
    SpacePtr_1 = extraout_r1_04;
  }
  else {
    uVar11 = (uint)*__ptr;
    SpacePtr_1 = extraout_r1_00;
    if ((((SrcCharset == RCH_DEFAULT) && (3 < iVar17)) && (uVar11 == 0xff)) && (__ptr[1] == 0xfe)) {
      puVar7 = (undefined4 *)(__ptr + 2);
      do {
        puVar6 = (undefined4 *)((int)puVar7 + 1);
        SpacePtr_1 = (char *)(uint)*(byte *)puVar7;
        if (SpacePtr_1 != (char *)0xa && (SpacePtr_1 != (char *)0xd && SpacePtr_1 < (char *)0x20))
        goto LAB_08107d00;
        puVar7 = puVar6;
      } while (puVar6 != Data);
    }
    NewSize_1 = 0;
    pwVar18 = (wchar *)0x0;
    CurStr_1 = (char *)__ptr;
LAB_08107b38:
    NextStr_1 = CurStr_1;
    if (uVar11 != 0) {
LAB_08107b40:
      if (uVar11 != 10 && uVar11 != 0xd) {
        pcVar9 = (char *)0x0;
        pcVar4 = NextStr_1;
        do {
          cVar10 = SkipComments;
          if (uVar11 != 0x2f) {
            cVar10 = '\0';
          }
          uVar11 = (uint)(byte)pcVar4[1];
          if ((cVar10 == '\0') || (uVar11 != 0x2f)) {
            pcVar16 = pcVar4 + 1;
            if ((uVar11 < 0xe) && ((0x2401U >> uVar11 & 1) == 1)) goto code_r0x08107b9c;
          }
          else {
            *pcVar4 = '\0';
            pcVar9 = pcVar4;
          }
          pcVar4 = pcVar4 + 1;
        } while( true );
      }
      *NextStr_1 = '\0';
      pcVar16 = NextStr_1;
      goto LAB_08107e64;
    }
LAB_08107c6c:
    if (pwVar18 != (wchar *)0x0) {
      free(pwVar18);
      SpacePtr_1 = extraout_r1_02;
    }
  }
  if (__ptr != (byte *)0x0) {
    free(__ptr);
    SpacePtr_1 = extraout_r1_03;
  }
  bVar13 = true;
  goto LAB_08107a14;
code_r0x08107f24:
  pwVar8[1] = 0;
  if (pwVar18 == (wchar *)0x0) {
LAB_08107d98:
    pwVar18 = pwVar15;
  }
  while ((pwVar18 = pwVar18 + -1, NextStr <= pwVar18 && (*pwVar18 == 0x20 || *pwVar18 == 9))) {
    *pwVar18 = 0;
  }
  wVar19 = *NextStr;
  if (wVar19 != 0) {
    sVar5 = wcslen((wchar_t *)NextStr);
    cVar10 = Unquote;
    if (wVar19 != 0x22) {
      cVar10 = '\0';
    }
    if ((cVar10 != '\0') && (NextStr[sVar5 + 0x3fffffff] == 0x22)) {
      NextStr[sVar5 + 0x3fffffff] = 0;
      NextStr = NextStr + 1;
    }
    StringList::AddString(List,NextStr);
  }
  uVar14 = pwVar15[1];
  NextStr = pwVar15 + 1;
  CurStr = NextStr;
  if (uVar14 != 10 && uVar14 != 0xd) goto LAB_08107d6c;
  do {
    NextStr = NextStr + 1;
    uVar14 = *NextStr;
  } while (uVar14 == 10 || uVar14 == 0xd);
  if (uVar14 == 0) goto LAB_08107e28;
  goto LAB_08107d74;
code_r0x08107b9c:
  pcVar4[1] = '\0';
  if (pcVar9 == (char *)0x0) {
LAB_08107e64:
    pcVar9 = pcVar16;
  }
  SpacePtr_1 = pcVar9 + -1;
  if ((NextStr_1 <= SpacePtr_1) && (pcVar9 = SpacePtr_1, *SpacePtr_1 == ' ' || *SpacePtr_1 == '\t'))
  {
    do {
      SpacePtr_1 = pcVar9 + -1;
      *pcVar9 = '\0';
      if (SpacePtr_1 < NextStr_1) break;
      pcVar9 = SpacePtr_1;
    } while (*SpacePtr_1 == ' ' || *SpacePtr_1 == '\t');
  }
  if (*NextStr_1 != '\0') {
    cVar10 = Unquote;
    if (*NextStr_1 != '\"') {
      cVar10 = '\0';
    }
    if (cVar10 == '\0') {
      sVar5 = strlen(NextStr_1);
    }
    else {
      sVar5 = strlen(NextStr_1);
      if (NextStr_1[sVar5 - 1] == '\"') {
        NextStr_1[sVar5 - 1] = '\0';
        NextStr_1 = NextStr_1 + 1;
        sVar5 = strlen(NextStr_1);
      }
    }
    uVar14 = sVar5 + 1;
    if (NewSize_1 < uVar14) {
      NewSize_1 = NewSize_1 + 0x20 + (NewSize_1 >> 2);
      if (NewSize_1 < uVar14) {
        NewSize_1 = uVar14;
      }
      pwVar18 = (wchar *)realloc(pwVar18,NewSize_1 << 2);
      if (pwVar18 == (wchar *)0x0) {
        ErrorHandler::MemoryError(&ErrHandler);
      }
    }
    CharToWide(NextStr_1,pwVar18,uVar14);
    StringList::AddString(List,pwVar18);
    SpacePtr_1 = extraout_r1_01;
  }
  uVar11 = (uint)(byte)pcVar16[1];
  NextStr_1 = pcVar16 + 1;
  CurStr_1 = NextStr_1;
  if (uVar11 != 10 && uVar11 != 0xd) goto LAB_08107b38;
  do {
    NextStr_1 = (char *)((byte *)NextStr_1 + 1);
    uVar11 = (uint)(byte)*NextStr_1;
  } while (uVar11 == 10 || uVar11 == 0xd);
  if (uVar11 == 0) goto LAB_08107c6c;
  goto LAB_08107b40;
}


