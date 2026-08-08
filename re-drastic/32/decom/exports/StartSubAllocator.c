/*
 * Ghidra decompilation
 *
 * Function : StartSubAllocator
 * Address  : 080ed79c
 * Program  : drastic
 */


/* DWARF original prototype: bool StartSubAllocator(SubAllocator * this, int SASize) */

bool __thiscall SubAllocator::StartSubAllocator(SubAllocator *this,int SASize)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  byte *pbVar4;
  uint t;
  
  uVar1 = SASize * 0x100000;
  if (uVar1 == this->SubAllocatorSize) {
    bVar3 = true;
  }
  else {
    if (this->SubAllocatorSize != 0) {
      this->SubAllocatorSize = 0;
      free(this->HeapStart);
    }
    iVar2 = (uVar1 / 0xc) * 0xc;
    pbVar4 = (byte *)malloc(iVar2 + 0x18);
    this->HeapStart = pbVar4;
    if (pbVar4 == (byte *)0x0) {
      ErrorHandler::MemoryError(&ErrHandler);
      bVar3 = false;
    }
    else {
      bVar3 = true;
      this->SubAllocatorSize = uVar1;
      this->HeapEnd = pbVar4 + iVar2 + 0xc;
    }
  }
  return bVar3;
}


