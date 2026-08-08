/*
 * Ghidra decompilation
 *
 * Function : operator=
 * Address  : 080d5898
 * Program  : drastic
 */


/* DWARF original prototype: void operator=(File * this, File * SrcFile) */

void __thiscall File::operator=(File *this,File *SrcFile)

{
  bool bVar1;
  bool bVar2;
  FILE_HANDLETYPE FVar3;
  
  bVar1 = SrcFile->LastWrite;
  FVar3 = SrcFile->HandleType;
  bVar2 = SrcFile->NewFile;
  this->hFile = SrcFile->hFile;
  this->LastWrite = bVar1;
  this->HandleType = FVar3;
  this->NewFile = bVar2;
  SrcFile->SkipClose = true;
  return;
}


