/*
 * Ghidra decompilation
 *
 * Function : CopyString15
 * Address  : 080ef148
 * Program  : drastic
 */


/* DWARF original prototype: void CopyString15(Unpack * this, uint Distance, uint Length) */

void __thiscall Unpack::CopyString15(Unpack *this,uint Distance,uint Length)

{
  size_t sVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = *(uint *)&this->DestUnpSize;
  iVar3 = *(int *)((int)&this->DestUnpSize + 4);
  *(uint *)&this->DestUnpSize = uVar2 - Length;
  *(uint *)((int)&this->DestUnpSize + 4) = iVar3 - (uint)(uVar2 < Length);
  if (Length != 0) {
    iVar3 = Length - 1;
    sVar1 = this->UnpPtr;
    uVar2 = this->MaxWinMask;
    do {
      iVar3 = iVar3 + -1;
      this->Window[sVar1] = this->Window[uVar2 & sVar1 - Distance];
      uVar2 = this->MaxWinMask;
      sVar1 = this->UnpPtr + 1 & uVar2;
      this->UnpPtr = sVar1;
    } while (iVar3 != -1);
  }
  return;
}


