/*
 * Ghidra decompilation
 *
 * Function : game_database_generate_crc32_from_memory
 * Address  : 08094ebc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u32 game_database_generate_crc32_from_memory(u8 *src,u32 length)

{
  u32 uVar1;
  byte bVar2;
  byte *pbVar3;
  u32 length_remaining;
  u32 length_rounded;
  int iVar5;
  uint uVar6;
  u32 repeat_byte;
  byte *pbVar7;
  byte *pbVar4;
  
  uVar1 = 1 << (0x1fU - LZCOUNT(length) & 0xff);
  if (length == 0) {
    uVar6 = 0xffffffff;
  }
  else {
    pbVar7 = src + length;
    uVar6 = 0xffffffff;
    pbVar4 = src;
    do {
      pbVar3 = pbVar4 + 1;
      uVar6 = crc32_table[(*pbVar4 ^ uVar6) & 0xff] ^ uVar6 >> 8;
      pbVar4 = pbVar3;
      src = pbVar7;
    } while (pbVar3 != pbVar7);
  }
  if (length != uVar1) {
    bVar2 = src[-1];
    iVar5 = uVar1 * 2;
    __printf_chk(1,"Rounding up file CRC from %x to %x bytes, repeating with %x.\n",length,iVar5,
                 (uint)bVar2);
    for (iVar5 = iVar5 - length; iVar5 != 0; iVar5 = iVar5 + -1) {
      uVar6 = crc32_table[(bVar2 ^ uVar6) & 0xff] ^ uVar6 >> 8;
    }
  }
  return ~uVar6;
}


