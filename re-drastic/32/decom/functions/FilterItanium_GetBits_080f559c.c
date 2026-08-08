/*
 * Ghidra decompilation
 *
 * Function : FilterItanium_GetBits
 * Address  : 080f559c
 * Program  : drastic
 */


/* DWARF original prototype: uint FilterItanium_GetBits(Unpack * this, byte * Data, int BitPos, int
   BitCount) */

uint __thiscall Unpack::FilterItanium_GetBits(Unpack *this,byte *Data,int BitPos,int BitCount)

{
  int iVar1;
  
  iVar1 = BitPos + 7;
  if (-1 < BitPos) {
    iVar1 = BitPos;
  }
  iVar1 = iVar1 >> 3;
  return 0xffffffffU >> (0x20U - BitCount & 0xff) &
         ((uint)Data[iVar1 + 2] << 0x10 | (uint)Data[iVar1 + 1] << 8 | (uint)Data[iVar1] |
         (uint)Data[iVar1 + 3] << 0x18) >> (BitPos & 7U);
}


