/*
 * Ghidra decompilation
 *
 * Function : Decrypt13
 * Address  : 080dd984
 * Program  : drastic
 */


/* DWARF original prototype: void Decrypt13(CryptData * this, byte * Data, size_t Count) */

void __thiscall CryptData::Decrypt13(CryptData *this,byte *Data,size_t Count)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  
  if (Count == 0) {
    return;
  }
  pbVar1 = Data;
  do {
    bVar4 = this->Key13[1] + this->Key13[2];
    bVar3 = bVar4 + this->Key13[0];
    this->Key13[0] = bVar3;
    this->Key13[1] = bVar4;
    pbVar2 = pbVar1 + 1;
    *pbVar1 = *pbVar1 - bVar3;
    pbVar1 = pbVar2;
  } while (pbVar2 != Data + Count);
  return;
}


