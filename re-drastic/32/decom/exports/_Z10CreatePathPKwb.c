/*
 * Ghidra decompilation
 *
 * Function : _Z10CreatePathPKwb
 * Address  : 080d66cc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

bool CreatePath(wchar *Path,bool SkipLastName)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int ErrCode;
  wchar Ch;
  wchar *pwVar4;
  int ErrCode_1;
  wchar *s;
  uint uVar5;
  wchar DirName [2048];
  char NameA [2048];
  
  iVar1 = __stack_chk_guard;
  if (Path == (wchar *)0x0) {
    ErrCode_1 = 0;
  }
  else {
    ErrCode_1 = *Path;
    if (ErrCode_1 != 0) {
      uVar5 = 0;
      Ch = ErrCode_1;
      pwVar4 = Path;
      ErrCode_1 = 1;
      do {
        bVar2 = IsPathDiv(Ch);
        if (bVar2) {
          __wcsncpy_chk(DirName,Path,uVar5,0x800);
          DirName[uVar5] = 0;
          WideToChar(DirName,NameA,0x800);
          iVar3 = mkdir(NameA,0x1ff);
          ErrCode_1 = iVar3 + 1;
          if (ErrCode_1 != 0) {
            ErrCode_1 = 1;
          }
        }
        pwVar4 = pwVar4 + 1;
        Ch = *pwVar4;
      } while ((Ch != 0) && (uVar5 = (int)pwVar4 - (int)Path >> 2, uVar5 < 0x800));
      if (!SkipLastName) {
        pwVar4 = PointToLastChar(Path);
        bVar2 = IsPathDiv(*pwVar4);
        if (!bVar2) {
          WideToChar(Path,NameA,0x800);
          iVar3 = mkdir(NameA,0x1ff);
          ErrCode_1 = iVar3 + 1;
          if (ErrCode_1 != 0) {
            ErrCode_1 = 1;
          }
        }
      }
    }
  }
  if (iVar1 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return SUB41(ErrCode_1,0);
}


