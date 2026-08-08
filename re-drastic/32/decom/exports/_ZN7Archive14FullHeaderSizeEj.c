/*
 * Ghidra decompilation
 *
 * Function : _ZN7Archive14FullHeaderSizeEj
 * Address  : 080d7a28
 * Program  : drastic
 */


/* DWARF original prototype: uint FullHeaderSize(Archive * this, size_t Size) */

uint __thiscall Archive::FullHeaderSize(Archive *this,size_t Size)

{
  int iVar1;
  
  if (this->Encrypted != false) {
    iVar1 = Size + (-Size & 0xf);
    if (this->Format == RARFMT50) {
      Size = iVar1 + 0x10;
    }
    else {
      Size = iVar1 + 8;
    }
  }
  return Size;
}


