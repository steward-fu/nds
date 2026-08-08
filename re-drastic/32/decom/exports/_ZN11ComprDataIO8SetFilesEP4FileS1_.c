/*
 * Ghidra decompilation
 *
 * Function : _ZN11ComprDataIO8SetFilesEP4FileS1_
 * Address  : 080e261c
 * Program  : drastic
 */


/* DWARF original prototype: void SetFiles(ComprDataIO * this, File * SrcFile, File * DestFile) */

void __thiscall ComprDataIO::SetFiles(ComprDataIO *this,File *SrcFile,File *DestFile)

{
  if (SrcFile != (File *)0x0) {
    this->SrcFile = SrcFile;
  }
  if (DestFile != (File *)0x0) {
    this->DestFile = DestFile;
  }
  this->LastPercent = -1;
  return;
}


