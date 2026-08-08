/*
 * Ghidra decompilation
 *
 * Function : GetBlockSize
 * Address  : 080f5fc4
 * Program  : drastic
 */


/* DWARF original prototype: size_t GetBlockSize(FragmentedWindow * this, size_t StartPos, size_t
   RequiredSize) */

size_t __thiscall
FragmentedWindow::GetBlockSize(FragmentedWindow *this,size_t StartPos,size_t RequiredSize)

{
  byte **ppbVar1;
  size_t sVar2;
  
  ppbVar1 = this->Mem + 0x1f;
  do {
    ppbVar1 = ppbVar1 + 1;
    if (StartPos < *ppbVar1) {
      sVar2 = (int)*ppbVar1 - StartPos;
      if (RequiredSize <= sVar2) {
        sVar2 = RequiredSize;
      }
      return sVar2;
    }
  } while (ppbVar1 != (byte **)(this->MemSize + 0x1f));
  return 0;
}


