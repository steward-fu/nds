/*
 * Ghidra decompilation
 *
 * Function : _Z7MakeDirPKwbj
 * Address  : 080d6634
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

MKDIR_CODE MakeDir(wchar *Name,bool SetAttr,uint Attr)

{
  int iVar1;
  int iVar2;
  int ErrCode;
  MKDIR_CODE MVar3;
  int *piVar4;
  __mode_t __mode;
  char NameA [2048];
  
  iVar1 = __stack_chk_guard;
  WideToChar(Name,NameA,0x800);
  __mode = 0x1ff;
  if (SetAttr) {
    __mode = Attr;
  }
  iVar2 = mkdir(NameA,__mode);
  if (iVar2 == -1) {
    piVar4 = __errno_location();
    if (*piVar4 == 2) {
      MVar3 = MKDIR_BADPATH;
    }
    else {
      MVar3 = MKDIR_ERROR;
    }
  }
  else {
    MVar3 = MKDIR_SUCCESS;
  }
  if (iVar1 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return MVar3;
}


