/*
 * Ghidra decompilation
 *
 * Function : SetCloseFileTime
 * Address  : 080d636c
 * Program  : drastic
 */


/* DWARF original prototype: void SetCloseFileTime(File * this, RarTime * ftm, RarTime * fta) */

void __thiscall File::SetCloseFileTime(File *this,RarTime *ftm,RarTime *fta)

{
  SetCloseFileTimeByName(this->FileName,ftm,fta);
  return;
}


