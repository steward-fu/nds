/*
 * Ghidra decompilation
 *
 * Function : _ZN5RarVM9SetMemoryEjPhj
 * Address  : 0810b1d4
 * Program  : drastic
 */


/* DWARF original prototype: void SetMemory(RarVM * this, size_t Pos, byte * Data, size_t DataSize)
    */

void __thiscall RarVM::SetMemory(RarVM *this,size_t Pos,byte *Data,size_t DataSize)

{
  size_t __n;
  
  if ((Pos < 0x40000) && (this->Mem + Pos != Data)) {
    __n = 0x40000 - Pos;
    if (DataSize <= __n) {
      __n = DataSize;
    }
    memmove(this->Mem + Pos,Data,__n);
    return;
  }
  return;
}


