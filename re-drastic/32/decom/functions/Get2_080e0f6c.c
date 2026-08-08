/*
 * Ghidra decompilation
 *
 * Function : Get2
 * Address  : 080e0f6c
 * Program  : drastic
 */


/* DWARF original prototype: ushort Get2(RawRead * this) */

ushort __thiscall RawRead::Get2(RawRead *this)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  ushort Result;
  uchar *puVar4;
  size_t sVar5;
  
  sVar5 = this->ReadPos;
  if (sVar5 + 1 < this->DataSize) {
    puVar4 = (this->Data).Buffer;
    bVar1 = puVar4[sVar5 + 1];
    bVar2 = puVar4[sVar5];
    this->ReadPos = sVar5 + 2;
    uVar3 = (ushort)bVar2 + (ushort)bVar1 * 0x100;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


