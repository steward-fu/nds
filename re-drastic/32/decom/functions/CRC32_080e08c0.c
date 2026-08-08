/*
 * Ghidra decompilation
 *
 * Function : CRC32
 * Address  : 080e08c0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

uint CRC32(uint StartCRC,void *Addr,size_t Size)

{
  uint uVar1;
  byte *Data;
  uint *puVar2;
  uint uVar4;
  uint uVar5;
  uint NextData;
  uint *puVar3;
  
  if (Size == 0) {
    return StartCRC;
  }
  uVar4 = (uint)Addr & 7;
  while (uVar4 != 0) {
                    /* WARNING: Load size is inaccurate */
    Size = Size - 1;
    StartCRC = crc_tables[0][(*Addr ^ StartCRC) & 0xff] ^ StartCRC >> 8;
    if (Size == 0) {
      return StartCRC;
    }
    uVar4 = (uint)(uint *)((int)Addr + 1) & 7;
    Addr = (uint *)((int)Addr + 1);
  }
  uVar4 = Size;
  puVar3 = (uint *)Addr;
  if (7 < Size) {
    do {
      uVar5 = puVar3[1];
      uVar4 = uVar4 - 8;
      uVar1 = StartCRC ^ *puVar3;
      StartCRC = crc_tables[4][uVar1 >> 0x18] ^
                 crc_tables[7][uVar1 & 0xff] ^
                 crc_tables[3][uVar5 & 0xff] ^ crc_tables[0][uVar5 >> 0x18] ^
                 crc_tables[2][(uVar5 << 0x10) >> 0x18] ^ crc_tables[1][(uVar5 << 8) >> 0x18] ^
                 crc_tables[6][(uVar1 << 0x10) >> 0x18] ^ crc_tables[5][(uVar1 << 8) >> 0x18];
      puVar3 = puVar3 + 2;
    } while (7 < uVar4);
    uVar4 = Size - 8;
    Size = Size & 7;
    Addr = (void *)((int)Addr + (uVar4 & 0xfffffff8) + 8);
    if (Size == 0) {
      return StartCRC;
    }
  }
  puVar3 = (uint *)Addr;
  do {
    puVar2 = (uint *)((int)puVar3 + 1);
    StartCRC = crc_tables[0][(*(byte *)puVar3 ^ StartCRC) & 0xff] ^ StartCRC >> 8;
    puVar3 = puVar2;
  } while (puVar2 != (uint *)((int)Addr + Size));
  return StartCRC;
}


