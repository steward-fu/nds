/*
 * Ghidra decompilation
 *
 * Function : Flush
 * Address  : 080d5cfc
 * Program  : drastic
 */


/* DWARF original prototype: void Flush(File * this) */

void __thiscall File::Flush(File *this)

{
  fflush((FILE *)this->hFile);
  return;
}


