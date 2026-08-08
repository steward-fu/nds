/*
 * Ghidra decompilation
 *
 * Function : game_database_generate_crc32_from_file
 * Address  : 08094d70
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u32 game_database_generate_crc32_from_file(FILE *game_file,u32 length)

{
  u32 uVar1;
  byte bVar2;
  void *__ptr;
  u8 *crc_block_buffer;
  int iVar3;
  u32 length_remaining;
  byte *pbVar4;
  u32 i;
  int iVar5;
  uint uVar6;
  uint uVar7;
  u32 repeat_byte;
  u32 buffer_bytes;
  u32 length_rounded;
  
  uVar1 = 1 << (0x1fU - LZCOUNT(length) & 0xff);
  __ptr = malloc(0x1000);
  fseek((FILE *)game_file,0,0);
  if (length == 0) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = 0xffffffff;
    buffer_bytes = length;
    do {
      uVar7 = buffer_bytes;
      if (0xfff < buffer_bytes) {
        uVar7 = 0x1000;
      }
      iVar3 = __fread_chk(__ptr,0x1000,uVar7,1,game_file);
      if (iVar3 == 0) break;
      pbVar4 = (byte *)((int)__ptr + -1);
      i = 0;
      do {
        pbVar4 = pbVar4 + 1;
        i = i + 1;
        uVar6 = crc32_table[(*pbVar4 ^ uVar6) & 0xff] ^ uVar6 >> 8;
      } while (i < uVar7);
      buffer_bytes = buffer_bytes - uVar7;
    } while (buffer_bytes != 0);
  }
  if (length != uVar1) {
    bVar2 = *(byte *)((int)__ptr + 0xfff);
    iVar3 = uVar1 * 2;
    __printf_chk(1,"Rounding up file CRC from %x to %x bytes, repeating with %x.\n",length,iVar3,
                 (uint)bVar2);
    iVar3 = iVar3 - length;
    if (iVar3 != 0) {
      iVar5 = 0;
      do {
        iVar5 = iVar5 + 1;
        uVar6 = crc32_table[(bVar2 ^ uVar6) & 0xff] ^ uVar6 >> 8;
      } while (iVar3 != iVar5);
    }
  }
  free(__ptr);
  return ~uVar6;
}


