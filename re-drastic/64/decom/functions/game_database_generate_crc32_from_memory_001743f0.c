/*
 * Ghidra decompilation
 *
 * Function : game_database_generate_crc32_from_memory
 * Address  : 001743f0
 * Program  : drastic64
 */


uint game_database_generate_crc32_from_memory(byte *param_1,uint param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar6;
  uint uVar7;
  byte *pbVar5;
  
  uVar3 = 0x80000000 >> (ulong)((uint)LZCOUNT(param_2) & 0x1f);
  if (param_2 == 0) {
    uVar7 = 0xffffffff;
  }
  else {
    pbVar1 = param_1 + (ulong)(param_2 - 1) + 1;
    uVar7 = 0xffffffff;
    pbVar5 = param_1;
    do {
      pbVar4 = pbVar5 + 1;
      uVar7 = *(uint *)(&crc32_table + ((ulong)(*pbVar5 ^ uVar7) & 0xff) * 4) ^ uVar7 >> 8;
      pbVar5 = pbVar4;
      param_1 = pbVar1;
    } while (pbVar4 != pbVar1);
  }
  if (param_2 != uVar3) {
    bVar2 = param_1[-1];
    iVar6 = uVar3 * 2;
    __printf_chk(1,"Rounding up file CRC from %x to %x bytes, repeating with %x.\n",param_2,iVar6,
                 bVar2);
    iVar6 = iVar6 - param_2;
    if (iVar6 != 0) {
      do {
        iVar6 = iVar6 + -1;
        uVar7 = *(uint *)(&crc32_table + ((ulong)(bVar2 ^ uVar7) & 0xff) * 4) ^ uVar7 >> 8;
      } while (iVar6 != 0);
      return ~uVar7;
    }
  }
  return ~uVar7;
}


