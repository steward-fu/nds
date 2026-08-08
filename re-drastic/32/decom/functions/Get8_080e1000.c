/*
 * Ghidra decompilation
 *
 * Function : Get8
 * Address  : 080e1000
 * Program  : drastic
 */


/* DWARF original prototype: uint64 Get8(RawRead * this) */

uint64 __thiscall RawRead::Get8(RawRead *this)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  uint Result;
  size_t sVar10;
  uchar *puVar11;
  
  Result = this->DataSize;
  sVar10 = this->ReadPos;
  if (Result <= sVar10 + 3) {
    return 0;
  }
  puVar11 = (this->Data).Buffer;
  bVar1 = puVar11[sVar10];
  bVar2 = puVar11[sVar10 + 1];
  bVar3 = puVar11[sVar10 + 2];
  bVar4 = puVar11[sVar10 + 3];
  this->ReadPos = sVar10 + 4;
  if (sVar10 + 7 < Result) {
    bVar5 = puVar11[sVar10 + 4];
    bVar6 = puVar11[sVar10 + 5];
    bVar7 = puVar11[sVar10 + 6];
    bVar8 = puVar11[sVar10 + 7];
    this->ReadPos = sVar10 + 8;
    iVar9 = (uint)bVar5 + (uint)bVar6 * 0x100 + (uint)bVar7 * 0x10000 + (uint)bVar8 * 0x1000000;
  }
  else {
    iVar9 = 0;
  }
  return CONCAT44(iVar9,(uint)bVar1 + (uint)bVar2 * 0x100 + (uint)bVar3 * 0x10000 +
                        (uint)bVar4 * 0x1000000);
}


