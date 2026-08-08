/*
 * Ghidra decompilation
 *
 * Function : _ZN7RawRead8GetVSizeEj
 * Address  : 080e1170
 * Program  : drastic
 */


/* DWARF original prototype: uint GetVSize(RawRead * this, size_t Pos)
   Local variable CurPos:size_t[r1:4] conflicts with parameter, skipped. */

uint __thiscall RawRead::GetVSize(RawRead *this,size_t Pos)

{
  uchar uVar1;
  size_t sVar2;
  uchar *puVar3;
  
  if (Pos < this->DataSize) {
    puVar3 = (this->Data).Buffer;
    uVar1 = puVar3[Pos];
    puVar3 = puVar3 + Pos;
    sVar2 = Pos;
    while( true ) {
      if (-1 < (char)uVar1) {
        return (1 - Pos) + sVar2;
      }
      sVar2 = sVar2 + 1;
      if (sVar2 == this->DataSize) break;
      puVar3 = puVar3 + 1;
      uVar1 = *puVar3;
    }
  }
  return 0;
}


