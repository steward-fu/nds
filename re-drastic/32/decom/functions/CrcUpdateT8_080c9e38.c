/*
 * Ghidra decompilation
 *
 * Function : CrcUpdateT8
 * Address  : 080c9e38
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

UInt32 CrcUpdateT8(UInt32 v,void *data,size_t size,UInt32 *table)

{
  uint uVar1;
  uint *puVar2;
  uint uVar4;
  uint *puVar3;
  
  if (size == 0) {
    return v;
  }
  uVar4 = (uint)data & 3;
  while (uVar4 != 0) {
                    /* WARNING: Load size is inaccurate */
    size = size - 1;
    v = table[(*data ^ v) & 0xff] ^ v >> 8;
    if (size == 0) {
      return v;
    }
    uVar4 = (uint)(uint *)((int)data + 1) & 3;
    data = (uint *)((int)data + 1);
  }
  uVar4 = size;
  puVar3 = (uint *)data;
  if (3 < size) {
    do {
      uVar4 = uVar4 - 4;
      uVar1 = v ^ *puVar3;
      v = table[(uVar1 & 0xff) + 0x300] ^ table[uVar1 >> 0x18] ^
          table[((uVar1 << 0x10) >> 0x18) + 0x200] ^ table[((uVar1 << 8) >> 0x18) + 0x100];
      puVar3 = puVar3 + 1;
    } while (3 < uVar4);
    uVar4 = size - 4;
    size = size & 3;
    data = (void *)((int)data + (uVar4 & 0xfffffffc) + 4);
    if (size == 0) {
      return v;
    }
  }
  puVar3 = (uint *)data;
  do {
    puVar2 = (uint *)((int)puVar3 + 1);
    v = table[(*(byte *)puVar3 ^ v) & 0xff] ^ v >> 8;
    puVar3 = puVar2;
  } while (puVar2 != (uint *)((int)data + size));
  return v;
}


