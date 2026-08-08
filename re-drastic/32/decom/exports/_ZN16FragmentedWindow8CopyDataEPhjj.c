/*
 * Ghidra decompilation
 *
 * Function : _ZN16FragmentedWindow8CopyDataEPhjj
 * Address  : 080f5f30
 * Program  : drastic
 */


/* DWARF original prototype: void CopyData(FragmentedWindow * this, byte * Dest, size_t WinPos,
   size_t Size) */

void __thiscall
FragmentedWindow::CopyData(FragmentedWindow *this,byte *Dest,size_t WinPos,size_t Size)

{
  size_t *psVar1;
  uint I;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  if (Size == 0) {
    return;
  }
  pbVar3 = Dest;
  do {
    pbVar2 = pbVar3 + (WinPos - (int)Dest);
    if (pbVar2 < (byte *)this->MemSize[0]) {
      pbVar2 = pbVar2 + (int)this->Mem[0];
    }
    else {
      psVar1 = this->MemSize;
      I = 1;
      do {
        psVar1 = psVar1 + 1;
        if (pbVar2 < (byte *)*psVar1) {
          pbVar2 = pbVar2 + ((int)this->Mem[I] - (int)this->Mem[I + 0x1f]);
          goto LAB_080f5f94;
        }
        I = I + 1;
      } while (I != 0x20);
      pbVar2 = this->Mem[0];
    }
LAB_080f5f94:
    pbVar4 = pbVar3 + 1;
    *pbVar3 = *pbVar2;
    pbVar3 = pbVar4;
    if (pbVar4 == Dest + Size) {
      return;
    }
  } while( true );
}


