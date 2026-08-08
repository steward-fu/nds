/*
 * Ghidra decompilation
 *
 * Function : Crypt15
 * Address  : 080dd9d0
 * Program  : drastic
 */


/* DWARF original prototype: void Crypt15(CryptData * this, byte * Data, size_t Count) */

void __thiscall CryptData::Crypt15(CryptData *this,byte *Data,size_t Count)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (Count == 0) {
    return;
  }
  pbVar1 = Data;
  do {
    uVar3 = this->Key15[0] + 0x1234;
    uVar5 = (uint)this->Key15[1] ^ this->CRCTab[(uVar3 & 0x1fe) >> 1];
    uVar4 = (uint)this->Key15[2] - (this->CRCTab[(uVar3 & 0x1fe) >> 1] >> 0x10);
    uVar6 = ((uint)this->Key15[3] << 0xf | (uint)(this->Key15[3] >> 1)) ^ uVar5 & 0xffff;
    this->Key15[1] = (ushort)uVar5;
    this->Key15[2] = (ushort)uVar4;
    uVar3 = uVar3 & 0xffff ^ uVar4 & 0xffff ^ ((uVar6 << 0x10) >> 0x11 | uVar6 << 0xf & 0xffff);
    this->Key15[0] = (ushort)uVar3;
    this->Key15[3] = (ushort)uVar6 >> 1 | (ushort)(uVar6 << 0xf);
    pbVar2 = pbVar1 + 1;
    *pbVar1 = *pbVar1 ^ (byte)(uVar3 >> 8);
    pbVar1 = pbVar2;
  } while (pbVar2 != Data + Count);
  return;
}


