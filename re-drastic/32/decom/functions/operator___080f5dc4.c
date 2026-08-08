/*
 * Ghidra decompilation
 *
 * Function : operator[]
 * Address  : 080f5dc4
 * Program  : drastic
 */


/* DWARF original prototype: byte * operator[](FragmentedWindow * this, size_t Item) */

byte * __thiscall FragmentedWindow::operator[](FragmentedWindow *this,size_t Item)

{
  size_t *psVar1;
  uint I;
  
  if (Item < this->MemSize[0]) {
    return this->Mem[0] + Item;
  }
  psVar1 = this->MemSize;
  I = 1;
  do {
    psVar1 = psVar1 + 1;
    if (Item < *psVar1) {
      return this->Mem[I] + (Item - (int)this->Mem[I + 0x1f]);
    }
    I = I + 1;
  } while (I != 0x20);
  return this->Mem[0];
}


