/*
 * Ghidra decompilation
 *
 * Function : UnpWriteData
 * Address  : 080f598c
 * Program  : drastic
 */


/* DWARF original prototype: void UnpWriteData(Unpack * this, byte * Data, size_t Size) */

void __thiscall Unpack::UnpWriteData(Unpack *this,byte *Data,size_t Size)

{
  size_t WriteSize;
  size_t Count;
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar1 = *(uint *)&this->DestUnpSize;
  iVar3 = *(int *)((int)&this->DestUnpSize + 4);
  uVar4 = *(uint *)&this->WrittenFileSize;
  iVar5 = *(int *)((int)&this->WrittenFileSize + 4);
  if ((int)(iVar5 - (iVar3 + (uint)(uVar4 < uVar1))) < 0 !=
      (SBORROW4(iVar5,iVar3) != SBORROW4(iVar5 - iVar3,(uint)(uVar4 < uVar1)))) {
    uVar2 = uVar1 - uVar4;
    iVar3 = iVar3 - (iVar5 + (uint)(uVar1 < uVar4));
    Count = Size;
    if ((int)(iVar3 - (uint)(uVar2 < Size)) < 0 != (SBORROW4(iVar3,(uint)(uVar2 < Size)) != false))
    {
      Count = uVar2;
    }
    ComprDataIO::UnpWrite(this->UnpIO,Data,Count);
    uVar1 = *(uint *)&this->WrittenFileSize;
    iVar3 = *(int *)((int)&this->WrittenFileSize + 4);
    *(size_t *)&this->WrittenFileSize = Size + uVar1;
    *(uint *)((int)&this->WrittenFileSize + 4) = iVar3 + (uint)CARRY4(Size,uVar1);
  }
  return;
}


