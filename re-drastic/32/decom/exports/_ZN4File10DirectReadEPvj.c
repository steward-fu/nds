/*
 * Ghidra decompilation
 *
 * Function : _ZN4File10DirectReadEPvj
 * Address  : 080d5e30
 * Program  : drastic
 */


/* DWARF original prototype: int DirectRead(File * this, void * Data, size_t Size) */

int __thiscall File::DirectRead(File *this,void *Data,size_t Size)

{
  char cVar1;
  FILE *pFVar2;
  size_t sVar3;
  size_t ReadSize;
  int iVar4;
  
  pFVar2 = stdin;
  if (this->HandleType == FILE_HANDLESTD) {
    cVar1 = this->LastWrite;
    this->hFile = (FileHandle)stdin;
  }
  else {
    cVar1 = this->LastWrite;
    pFVar2 = (FILE *)this->hFile;
  }
  if (cVar1 == '\0') {
    clearerr(pFVar2);
    pFVar2 = (FILE *)this->hFile;
  }
  else {
    fflush(pFVar2);
    this->LastWrite = false;
    clearerr((FILE *)this->hFile);
    pFVar2 = (FILE *)this->hFile;
  }
  sVar3 = fread(Data,1,Size,pFVar2);
  ReadSize = (size_t)this->hFile;
  iVar4 = ferror((FILE *)ReadSize);
  if (iVar4 != 0) {
    sVar3 = 0xffffffff;
  }
  return sVar3;
}


