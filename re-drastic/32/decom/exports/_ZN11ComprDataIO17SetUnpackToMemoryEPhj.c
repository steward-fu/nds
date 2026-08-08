/*
 * Ghidra decompilation
 *
 * Function : _ZN11ComprDataIO17SetUnpackToMemoryEPhj
 * Address  : 080e2714
 * Program  : drastic
 */


/* DWARF original prototype: void SetUnpackToMemory(ComprDataIO * this, byte * Addr, uint Size) */

void __thiscall ComprDataIO::SetUnpackToMemory(ComprDataIO *this,byte *Addr,uint Size)

{
  this->UnpackToMemory = true;
  this->UnpackToMemorySize = Size;
  this->UnpackToMemoryAddr = Addr;
  return;
}


