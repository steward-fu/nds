/*
 * Ghidra decompilation
 *
 * Function : FilterItanium_SetBits
 * Address  : 080f55f4
 * Program  : drastic
 */


/* DWARF original prototype: void FilterItanium_SetBits(Unpack * this, byte * Data, uint BitField,
   int BitPos, int BitCount) */

void __thiscall
Unpack::FilterItanium_SetBits(Unpack *this,byte *Data,uint BitField,int BitPos,int BitCount)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int InBit;
  
  iVar3 = BitPos + 7;
  if (-1 < BitPos) {
    iVar3 = BitPos;
  }
  iVar3 = iVar3 >> 3;
  iVar1 = BitField << (BitPos & 7U);
  uVar2 = ~((0xffffffffU >> (0x20U - BitCount & 0xff)) << (BitPos & 7U));
  Data[iVar3] = Data[iVar3] & (byte)uVar2 | (byte)iVar1;
  Data[iVar3 + 1] = (byte)(uVar2 >> 8) & Data[iVar3 + 1] | (byte)((uint)iVar1 >> 8);
  Data[iVar3 + 2] = (byte)(uVar2 >> 0x10) & Data[iVar3 + 2] | (byte)((uint)iVar1 >> 0x10);
  Data[iVar3 + 3] = Data[iVar3 + 3] & (byte)(uVar2 >> 0x18) | (byte)((uint)iVar1 >> 0x18);
  return;
}


