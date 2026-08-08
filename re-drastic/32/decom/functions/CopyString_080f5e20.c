/*
 * Ghidra decompilation
 *
 * Function : CopyString
 * Address  : 080f5e20
 * Program  : drastic
 */


/* DWARF original prototype: void CopyString(FragmentedWindow * this, uint Length, uint Distance,
   size_t * UnpPtr, size_t MaxWinMask) */

void __thiscall
FragmentedWindow::CopyString
          (FragmentedWindow *this,uint Length,uint Distance,size_t *UnpPtr,size_t MaxWinMask)

{
  uint I;
  uint I_1;
  uint uVar1;
  size_t SrcPtr;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  size_t *psVar6;
  
  uVar4 = *UnpPtr;
  uVar1 = uVar4 - Distance;
  if (Length != 0) {
    uVar3 = uVar1 + Length;
    do {
      if (uVar4 < this->MemSize[0]) {
        pbVar5 = this->Mem[0] + uVar4;
      }
      else {
        psVar6 = this->MemSize;
        I = 1;
        do {
          psVar6 = psVar6 + 1;
          if (uVar4 < *psVar6) {
            pbVar5 = this->Mem[I] + (uVar4 - (int)this->Mem[I + 0x1f]);
            goto LAB_080f5e8c;
          }
          I = I + 1;
        } while (I != 0x20);
        pbVar5 = this->Mem[0];
      }
LAB_080f5e8c:
      uVar4 = MaxWinMask & uVar1;
      uVar1 = uVar1 + 1;
      if (uVar4 < this->MemSize[0]) {
        pbVar2 = this->Mem[0] + uVar4;
      }
      else {
        psVar6 = this->MemSize;
        I_1 = 1;
        do {
          psVar6 = psVar6 + 1;
          if (uVar4 < *psVar6) {
            pbVar2 = this->Mem[I_1] + (uVar4 - (int)this->Mem[I_1 + 0x1f]);
            goto LAB_080f5ed4;
          }
          I_1 = I_1 + 1;
        } while (I_1 != 0x20);
        pbVar2 = this->Mem[0];
      }
LAB_080f5ed4:
      *pbVar5 = *pbVar2;
      uVar4 = *UnpPtr + 1 & MaxWinMask;
      *UnpPtr = uVar4;
    } while (uVar1 != uVar3);
  }
  return;
}


