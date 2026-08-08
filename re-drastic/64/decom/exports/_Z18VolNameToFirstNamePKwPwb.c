/*
 * Ghidra decompilation
 *
 * Function : _Z18VolNameToFirstNamePKwPwb
 * Address  : 001b7380
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VolNameToFirstName(wchar_t const*, wchar_t*, bool) */

wchar_t * VolNameToFirstName(wchar_t *param_1,wchar_t *param_2,bool param_3)

{
  int iVar1;
  char cVar2;
  wchar_t *pwVar3;
  size_t sVar4;
  long lVar5;
  wchar_t wVar6;
  wchar_t awStack_192a0 [2048];
  FindFile aFStack_172a0 [8208];
  wchar_t awStack_15290 [2052];
  RarTime aRStack_13280 [8];
  RarTime aRStack_13278 [8];
  RarTime aRStack_13270 [16];
  Archive aAStack_13260 [13920];
  undefined8 local_fc00;
  char local_204f;
  undefined auStack_12e0 [4824];
  long local_8;
  
  local_fc00 = 0;
  local_8 = ___stack_chk_guard;
  if (param_2 != param_1) {
    wcscpy(param_2,param_1);
  }
  if (param_3) {
    wVar6 = L'1';
    for (pwVar3 = (wchar_t *)GetVolNumPart(param_2); param_2 < pwVar3; pwVar3 = pwVar3 + -1) {
      cVar2 = IsDigit(*pwVar3);
      if (cVar2 == '\0') {
        if (wVar6 == L'0') {
          pwVar3 = pwVar3 + 1;
          goto LAB_001b757c;
        }
        wVar6 = L'1';
      }
      else {
        *pwVar3 = wVar6;
        wVar6 = L'0';
      }
    }
    cVar2 = FileExist(param_2);
    pwVar3 = param_2;
  }
  else {
    SetExt(param_2,L"rar");
    if (param_2 == (wchar_t *)0x0) {
      pwVar3 = (wchar_t *)0x0;
    }
    else {
      sVar4 = wcslen(param_2);
      iVar1 = (int)sVar4 + -1;
      pwVar3 = param_2;
      if (-1 < iVar1) {
        lVar5 = (long)iVar1;
        do {
          if (param_2[lVar5] == L'/') {
            pwVar3 = param_2 + lVar5 + 1;
            break;
          }
          lVar5 = lVar5 + -1;
        } while (-1 < (int)lVar5);
      }
      pwVar3 = wcsrchr(pwVar3,L'.');
    }
LAB_001b757c:
    cVar2 = FileExist(param_2);
  }
  if (cVar2 == '\0') {
    __wcscpy_chk(awStack_192a0,param_2,0x800);
    SetExt(awStack_192a0,L"*");
    FindFile::FindFile(aFStack_172a0);
                    /* try { // try from 001b7444 to 001b748b has its CatchHandler @ 001b75fc */
    FindFile::SetMask(aFStack_172a0,awStack_192a0);
    RarTime::RarTime(aRStack_13280);
    RarTime::RarTime(aRStack_13278);
    RarTime::RarTime(aRStack_13270);
                    /* try { // try from 001b74d8 to 001b74db has its CatchHandler @ 001b75fc */
    while (cVar2 = FindFile::Next(aFStack_172a0,(FindData *)awStack_15290,false), cVar2 != '\0') {
      Archive::Archive(aAStack_13260,(RAROptions *)0x0);
                    /* try { // try from 001b7498 to 001b74af has its CatchHandler @ 001b7604 */
      cVar2 = File::Open((File *)aAStack_13260,awStack_15290,0);
      if (((cVar2 != '\0') && (cVar2 = Archive::IsArchive(aAStack_13260,true), cVar2 != '\0')) &&
         (local_204f != '\0')) {
        wcscpy(param_2,awStack_15290);
        Archive::~Archive(aAStack_13260);
        break;
      }
      Archive::~Archive(aAStack_13260);
    }
    FindFile::~FindFile(aFStack_172a0);
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return pwVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(auStack_12e0,local_8 - ___stack_chk_guard,0);
}


