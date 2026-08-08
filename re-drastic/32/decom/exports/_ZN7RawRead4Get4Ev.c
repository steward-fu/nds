/*
 * Ghidra decompilation
 *
 * Function : _ZN7RawRead4Get4Ev
 * Address  : 080e0fa4
 * Program  : drastic
 */


/* DWARF original prototype: uint Get4(RawRead * this) */

uint __thiscall RawRead::Get4(RawRead *this)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uchar *puVar5;
  size_t sVar6;
  
  sVar6 = this->ReadPos;
  if (sVar6 + 3 < this->DataSize) {
    puVar5 = (this->Data).Buffer;
    bVar1 = puVar5[sVar6];
    bVar2 = puVar5[sVar6 + 1];
    bVar3 = puVar5[sVar6 + 2];
    bVar4 = puVar5[sVar6 + 3];
    this->ReadPos = sVar6 + 4;
    return (uint)bVar1 + (uint)bVar2 * 0x100 + (uint)bVar3 * 0x10000 + (uint)bVar4 * 0x1000000;
  }
  return 0;
}


