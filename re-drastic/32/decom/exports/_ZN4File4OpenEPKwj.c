/*
 * Ghidra decompilation
 *
 * Function : _ZN4File4OpenEPKwj
 * Address  : 080d58d4
 * Program  : drastic
 */


/* DWARF original prototype: bool Open(File * this, wchar * Name, uint Mode) */

bool __thiscall File::Open(File *this,wchar *Name,uint Mode)

{
  int iVar1;
  int __fd;
  int handle;
  int iVar2;
  FILE *pFVar3;
  FileHandle hNewFile;
  int *piVar4;
  char *__modes;
  bool UpdateMode;
  bool bVar5;
  uint uVar6;
  int flags;
  uint uVar7;
  char NameA [2048];
  
  iVar1 = __stack_chk_guard;
  bVar5 = false;
  this->ErrorType = FILE_SUCCESS;
  uVar7 = Mode & 1;
  if (this->OpenShared == false) {
    if ((Mode << 0x1d) >> 0x1f < uVar7) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
  }
  if (uVar7 == 0) {
    uVar6 = (Mode << 0x1e) >> 0x1f;
    WideToChar(Name,NameA,0x800);
  }
  else {
    WideToChar(Name,NameA,0x800);
    uVar6 = 2;
  }
  __fd = __open64_2(NameA,uVar6);
  if (__fd < 0) {
    bVar5 = false;
  }
  if (bVar5) {
    iVar2 = flock(__fd,6);
    if (iVar2 == -1) {
      close(__fd);
      bVar5 = false;
      goto LAB_080d59dc;
    }
LAB_080d598c:
    __modes = "r";
    if (uVar7 != 0) {
      __modes = "r+";
    }
    pFVar3 = fdopen(__fd,__modes);
    if (pFVar3 != (FILE *)0x0) {
      this->hFile = (FileHandle)pFVar3;
      this->HandleType = FILE_HANDLENORMAL;
      this->SkipClose = false;
      this->NewFile = false;
      wcsncpyz(this->FileName,Name,0x800);
      bVar5 = true;
      goto LAB_080d59dc;
    }
  }
  else if (__fd != -1) goto LAB_080d598c;
  piVar4 = __errno_location();
  if (*piVar4 == 2) {
    this->ErrorType = FILE_NOTFOUND;
  }
  bVar5 = false;
  this->HandleType = FILE_HANDLENORMAL;
  this->SkipClose = false;
  this->NewFile = false;
LAB_080d59dc:
  if (iVar1 == __stack_chk_guard) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


