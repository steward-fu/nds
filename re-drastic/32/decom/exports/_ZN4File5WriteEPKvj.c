/*
 * Ghidra decompilation
 *
 * Function : _ZN4File5WriteEPKvj
 * Address  : 080d5e20
 * Program  : drastic
 */


/* DWARF original prototype: void Write(File * this, void * Data, size_t Size) */

void __thiscall File::Write(File *this,void *Data,size_t Size)

{
  if (Size != 0) {
    Write(this,Data,Size);
    return;
  }
  return;
}


