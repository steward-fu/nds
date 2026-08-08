/*
 * Ghidra decompilation
 *
 * Function : CRC32
 * Address  : 001c1b20
 * Program  : drastic64
 */


/* CRC32(unsigned int, void const*, unsigned long) */

uint CRC32(uint param_1,void *param_2,ulong param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  
  if (param_3 != 0) {
    uVar4 = (ulong)param_2 & 7;
    while (uVar4 != 0) {
                    /* WARNING: Load size is inaccurate */
      param_3 = param_3 - 1;
      param_1 = (&crc_tables)[(ulong)(param_1 ^ *param_2) & 0xff] ^ param_1 >> 8;
      if (param_3 == 0) {
        return param_1;
      }
      uVar4 = (ulong)(uint *)((long)param_2 + 1) & 7;
      param_2 = (uint *)((long)param_2 + 1);
    }
    if (7 < param_3) {
      puVar1 = (uint *)((long)param_2 + (param_3 - 8 & 0xfffffffffffffff8) + 8);
      do {
                    /* WARNING: Load size is inaccurate */
        uVar2 = *param_2;
        uVar3 = *(uint *)((long)param_2 + 4);
        param_2 = (void *)((long)param_2 + 8);
        uVar2 = param_1 ^ uVar2;
        param_1 = (&crc_tables)[((ulong)(uVar2 >> 8) & 0xff) + 0x600] ^
                  (&crc_tables)[((ulong)(uVar2 >> 0x10) & 0xff) + 0x500] ^
                  (&DAT_004f6940)[(byte)uVar2] ^ (&crc_tables)[(ulong)(uVar2 >> 0x18) + 0x400] ^
                  (&DAT_004f5940)[(byte)uVar3] ^ (&crc_tables)[uVar3 >> 0x18] ^
                  (&crc_tables)[((ulong)(uVar3 >> 8) & 0xff) + 0x200] ^
                  (&crc_tables)[((ulong)(uVar3 >> 0x10) & 0xff) + 0x100];
      } while ((uint *)param_2 != puVar1);
      param_3 = param_3 & 7;
      param_2 = puVar1;
      if (param_3 == 0) {
        return param_1;
      }
    }
                    /* WARNING: Load size is inaccurate */
    param_1 = (&crc_tables)[(ulong)(param_1 ^ *param_2) & 0xff] ^ param_1 >> 8;
    if ((((param_3 != 1) &&
         (param_1 = (&crc_tables)[(ulong)(param_1 ^ *(byte *)((long)param_2 + 1)) & 0xff] ^
                    param_1 >> 8, param_3 != 2)) &&
        (param_1 = (&crc_tables)[(ulong)(param_1 ^ *(byte *)((long)param_2 + 2)) & 0xff] ^
                   param_1 >> 8, param_3 != 3)) &&
       (((param_1 = (&crc_tables)[(ulong)(param_1 ^ *(byte *)((long)param_2 + 3)) & 0xff] ^
                    param_1 >> 8, param_3 != 4 &&
         (param_1 = (&crc_tables)[(ulong)(param_1 ^ *(byte *)((long)param_2 + 4)) & 0xff] ^
                    param_1 >> 8, param_3 != 5)) &&
        (param_1 = (&crc_tables)[(ulong)(param_1 ^ *(byte *)((long)param_2 + 5)) & 0xff] ^
                   param_1 >> 8, param_3 != 6)))) {
      return (&crc_tables)[(ulong)(param_1 ^ *(byte *)((long)param_2 + 6)) & 0xff] ^ param_1 >> 8;
    }
  }
  return param_1;
}


