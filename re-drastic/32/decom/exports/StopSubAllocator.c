/*
 * Ghidra decompilation
 *
 * Function : StopSubAllocator
 * Address  : 080ed778
 * Program  : drastic
 */


/* DWARF original prototype: void StopSubAllocator(SubAllocator * this) */

void __thiscall SubAllocator::StopSubAllocator(SubAllocator *this)

{
  if (this->SubAllocatorSize == 0) {
    return;
  }
  this->SubAllocatorSize = 0;
  free(this->HeapStart);
  return;
}


