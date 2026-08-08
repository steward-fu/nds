/*
 * Ghidra decompilation
 *
 * Function : ReadTextFile
 * Address  : 001eb900
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ReadTextFile(wchar_t const*, StringList*, bool, bool, RAR_CHARSET, bool, bool, bool) */

undefined4
ReadTextFile(wchar_t *param_1,StringList *param_2,bool param_3,bool param_4,RAR_CHARSET param_5,
            bool param_6,bool param_7,bool param_8)

{
  undefined4 *puVar1;
  wchar_t wVar2;
  wchar_t wVar3;
  byte bVar4;
  long lVar5;
  wchar_t wVar6;
  char cVar7;
  uint uVar8;
  byte *__ptr;
  size_t sVar9;
  byte *pbVar10;
  wchar_t *__s;
  wchar_t *pwVar11;
  byte *pbVar12;
  wchar_t *pwVar13;
  undefined4 uVar14;
  ulong uVar15;
  byte *pbVar16;
  wchar_t *pwVar17;
  int iVar18;
  ulong uVar19;
  byte *pbVar20;
  ulong uVar21;
  wchar_t *pwVar22;
  wchar_t local_4030 [2048];
  File aFStack_2030 [20];
  undefined4 local_201c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_4030[0] = L'\0';
  if (param_1 != (wchar_t *)0x0) {
    if (param_3) {
      GetConfigName(param_1,local_4030,0x800,true,false);
    }
    else {
      wcsncpyz(local_4030,param_1,0x800);
    }
  }
  File::File(aFStack_2030);
  if (local_4030[0] == L'\0') {
    local_201c = 1;
  }
  else {
    if (param_4) {
                    /* try { // try from 001ebc38 to 001ebc3b has its CatchHandler @ 001ebf38 */
      cVar7 = File::WOpen(aFStack_2030,local_4030);
    }
    else {
                    /* try { // try from 001eb99c to 001eb9bb has its CatchHandler @ 001ebf38 */
      cVar7 = File::Open(aFStack_2030,local_4030,0);
    }
    if (cVar7 == '\0') {
      uVar14 = 0;
      if (param_4) {
        ErrorHandler::Exit((ErrorHandler *)&ErrHandler,6);
      }
      goto LAB_001ebbd0;
    }
  }
  __ptr = (byte *)malloc(0x405);
  if (__ptr == (byte *)0x0) {
                    /* try { // try from 001ebee0 to 001ebee3 has its CatchHandler @ 001ebf38 */
    ErrorHandler::MemoryError();
  }
  uVar21 = 0x405;
  uVar15 = 0x405;
  uVar19 = 0;
  while( true ) {
    puVar1 = (undefined4 *)(__ptr + uVar19);
                    /* try { // try from 001eba00 to 001eba03 has its CatchHandler @ 001ebf40 */
    uVar8 = File::Read(aFStack_2030,puVar1,0x400);
    iVar18 = (int)uVar19;
    if (uVar8 == 0) break;
    uVar15 = uVar15 + uVar8;
    uVar19 = (ulong)(iVar18 + uVar8);
    if (uVar21 < uVar15) {
      uVar21 = uVar21 + 0x20 + (uVar21 >> 2);
      if (uVar21 < uVar15) {
        uVar21 = uVar15;
      }
      __ptr = (byte *)realloc(__ptr,uVar21);
      if (__ptr == (byte *)0x0) {
                    /* try { // try from 001ebeb8 to 001ebebb has its CatchHandler @ 001ebf40 */
        ErrorHandler::MemoryError();
      }
    }
  }
  *puVar1 = 0;
  *(undefined *)(puVar1 + 1) = 0;
  if (param_5 == 0 || param_5 == 3) {
    uVar21 = (ulong)*__ptr;
    if ((3 < iVar18) && (*__ptr == 0xff)) {
      if (__ptr[1] == 0xfe) {
        pbVar16 = __ptr + 2;
LAB_001ebcd4:
        bVar4 = *pbVar16;
        if ((0x1f < bVar4 || bVar4 == 0xd) || bVar4 == 10) goto LAB_001ebcc8;
        uVar21 = (uVar15 >> 1) + 1;
        if (uVar21 < 0x20) {
          uVar21 = 0x20;
        }
        pwVar22 = (wchar_t *)malloc(uVar21 << 2);
        if (pwVar22 == (wchar_t *)0x0) {
                    /* try { // try from 001ebeac to 001ebeaf has its CatchHandler @ 001ebee8 */
          ErrorHandler::MemoryError();
        }
        if (2 < uVar15 - 1) {
          uVar21 = 2;
          do {
            uVar19 = uVar21 - 2;
            lVar5 = uVar21 + 1;
            pbVar16 = __ptr + uVar21;
            uVar21 = uVar21 + 2;
            pwVar22[uVar19 >> 1] = (uint)*pbVar16 + (uint)__ptr[lVar5] * 0x100;
          } while (uVar21 < uVar15 - 1);
        }
        wVar2 = *pwVar22;
        __s = pwVar22;
        if (wVar2 == L'\0') goto LAB_001ebe50;
LAB_001ebd58:
        if ((0xd < (uint)wVar2) || ((0x2401UL >> ((ulong)(uint)wVar2 & 0x3f) & 1) == 0)) {
          pwVar13 = (wchar_t *)0x0;
          pwVar11 = __s;
          wVar6 = __s[1];
          do {
            wVar3 = wVar6;
            if ((param_7 && wVar2 == L'/') && (wVar3 == L'/')) {
              *pwVar11 = L'\0';
              pwVar13 = pwVar11;
            }
            else {
              pwVar17 = pwVar11 + 1;
              if (((uint)wVar3 < 0xe) && ((0x2401UL >> ((ulong)(uint)wVar3 & 0x3f) & 1) != 0))
              goto LAB_001ebdd0;
            }
            pwVar17 = pwVar11 + 2;
            pwVar11 = pwVar11 + 1;
            wVar6 = *pwVar17;
            wVar2 = wVar3;
          } while( true );
        }
        *__s = L'\0';
        pwVar17 = __s;
        pwVar13 = __s;
        goto joined_r0x001ebde0;
      }
      goto LAB_001eba70;
    }
  }
  else {
    uVar21 = (ulong)*__ptr;
  }
  if ((int)uVar21 != 0) {
LAB_001eba70:
    uVar15 = 0;
    pwVar22 = (wchar_t *)0x0;
    pbVar16 = __ptr;
LAB_001eba90:
    uVar8 = (uint)uVar21;
    if ((0xd < uVar8) || ((0x2401UL >> (uVar21 & 0x3f) & 1) == 0)) {
      pbVar12 = (byte *)0x0;
      bVar4 = pbVar16[1];
      pbVar10 = pbVar16;
      do {
        if ((param_7 && uVar8 == 0x2f) && (bVar4 == 0x2f)) {
          *pbVar10 = 0;
          pbVar12 = pbVar10;
        }
        else {
          pbVar20 = pbVar10 + 1;
          if ((bVar4 < 0xe) && ((0x2401UL >> ((ulong)bVar4 & 0x3f) & 1) != 0)) goto LAB_001ebb10;
        }
        uVar8 = (uint)bVar4;
        bVar4 = pbVar10[2];
        pbVar10 = pbVar10 + 1;
      } while( true );
    }
    *pbVar16 = 0;
    pbVar20 = pbVar16;
    pbVar12 = pbVar16;
    goto joined_r0x001ebb20;
  }
  goto LAB_001ebbc0;
LAB_001ebcc8:
  pbVar16 = pbVar16 + 1;
  if (pbVar16 == __ptr + (ulong)(iVar18 - 3) + 3) goto LAB_001eba70;
  goto LAB_001ebcd4;
LAB_001ebdd0:
  pwVar11[1] = L'\0';
  if (pwVar13 == (wchar_t *)0x0) goto LAB_001ebde8;
joined_r0x001ebde0:
  while (pwVar11 = pwVar13 + -1, __s <= pwVar11) {
LAB_001ebde8:
    if (*pwVar11 != L' ' && *pwVar11 != L'\t') break;
    *pwVar11 = L'\0';
    pwVar13 = pwVar11;
  }
  if (*__s != L'\0') {
    if ((*__s == L'\"' && param_6) && (sVar9 = wcslen(__s), __s[sVar9 - 1] == L'\"')) {
      __s[sVar9 - 1] = L'\0';
      __s = __s + 1;
    }
                    /* try { // try from 001ebe20 to 001ebe23 has its CatchHandler @ 001ebf08 */
    StringList::AddString(param_2,__s);
  }
  wVar2 = pwVar17[1];
  __s = pwVar17 + 1;
  if (wVar2 == L'\r' || wVar2 == L'\n') {
    do {
      __s = __s + 1;
      wVar2 = *__s;
    } while (wVar2 == L'\n' || wVar2 == L'\r');
  }
  if (wVar2 == L'\0') goto code_r0x001ebe4c;
  goto LAB_001ebd58;
LAB_001ebb10:
  pbVar10[1] = 0;
  if (pbVar12 == (byte *)0x0) goto LAB_001ebb28;
joined_r0x001ebb20:
  while (pbVar10 = pbVar12 + -1, pbVar16 <= pbVar10) {
LAB_001ebb28:
    if (*pbVar10 != 0x20 && *pbVar10 != 9) break;
    *pbVar10 = 0;
    pbVar12 = pbVar10;
  }
  bVar4 = *pbVar16;
  if (bVar4 != 0) {
    sVar9 = strlen((char *)pbVar16);
    if ((bVar4 == 0x22 && param_6) && (pbVar16[sVar9 - 1] == 0x22)) {
      pbVar16[sVar9 - 1] = 0;
      pbVar16 = pbVar16 + 1;
      sVar9 = strlen((char *)pbVar16);
    }
    uVar21 = sVar9 + 1;
    if (uVar15 < uVar21) {
      uVar15 = uVar15 + 0x20 + (uVar15 >> 2);
      if (uVar15 < uVar21) {
        uVar15 = uVar21;
      }
      pwVar22 = (wchar_t *)realloc(pwVar22,uVar15 << 2);
      if (pwVar22 == (wchar_t *)0x0) {
                    /* try { // try from 001ebecc to 001ebecf has its CatchHandler @ 001ebf20 */
        ErrorHandler::MemoryError();
      }
    }
                    /* try { // try from 001ebb7c to 001ebb8b has its CatchHandler @ 001ebf20 */
    CharToWide((char *)pbVar16,pwVar22,uVar21);
    StringList::AddString(param_2,pwVar22);
  }
  bVar4 = pbVar20[1];
  pbVar16 = pbVar20 + 1;
  if (bVar4 == 0xd || bVar4 == 10) {
    do {
      pbVar16 = pbVar16 + 1;
      bVar4 = *pbVar16;
    } while (bVar4 == 10 || bVar4 == 0xd);
  }
  uVar21 = (ulong)bVar4;
  if (bVar4 == 0) goto code_r0x001ebbb4;
  goto LAB_001eba90;
code_r0x001ebbb4:
  if (pwVar22 != (wchar_t *)0x0) {
    free(pwVar22);
  }
  goto LAB_001ebbc0;
code_r0x001ebe4c:
  if (pwVar22 != (wchar_t *)0x0) {
LAB_001ebe50:
    free(pwVar22);
  }
LAB_001ebbc0:
  if (__ptr != (byte *)0x0) {
    free(__ptr);
  }
  uVar14 = 1;
LAB_001ebbd0:
  File::~File(aFStack_2030);
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(&__stack_chk_guard,local_8 - ___stack_chk_guard,0);
  }
  return uVar14;
}


