/*
 * Ghidra decompilation
 *
 * Function : Create
 * Address  : 080d5af8
 * Program  : drastic
 */


/* DWARF original prototype: bool Create(File * this, wchar * Name, uint Mode) */

bool __thiscall File::Create(File *this,wchar *Name,uint Mode)

{
  int iVar1;
  FILE *pFVar2;
  FileHandle pFVar3;
  char *__modes;
  char NameA [2048];
  
  iVar1 = __stack_chk_guard;
  WideToChar(Name,NameA,0x800);
  __modes = "w";
  if ((Mode & 2) == 0) {
    __modes = "w+";
  }
  pFVar2 = fopen64(NameA,__modes);
  this->hFile = (FileHandle)pFVar2;
  this->HandleType = FILE_HANDLENORMAL;
  this->SkipClose = false;
  this->NewFile = true;
  wcsncpyz(this->FileName,Name,0x800);
  pFVar3 = this->hFile;
  if (pFVar3 != (FileHandle)0x0) {
    pFVar3 = (FileHandle)0x1;
  }
  if (iVar1 == __stack_chk_guard) {
    return SUB41(pFVar3,0);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


