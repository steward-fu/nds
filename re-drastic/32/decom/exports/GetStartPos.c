/*
 * Ghidra decompilation
 *
 * Function : GetStartPos
 * Address  : 080dc870
 * Program  : drastic
 */


/* DWARF original prototype: int64 GetStartPos(Archive * this) */

int64 __thiscall Archive::GetStartPos(Archive *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = this->SFXSize + (this->MarkHead).HeadSize;
  if (this->Format == RARFMT15) {
    uVar4 = (this->MainHead).super_BaseBlock.HeadSize;
  }
  else {
    uVar3 = (this->CryptHead).super_BaseBlock.HeadSize;
    uVar1 = FullHeaderSize(this,(this->MainHead).super_BaseBlock.HeadSize);
    uVar4 = uVar3 + uVar1;
  }
  return (int64)CONCAT14(CARRY4(uVar2,uVar4),uVar2 + uVar4);
}


