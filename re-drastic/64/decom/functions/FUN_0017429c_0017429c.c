/*
 * Ghidra decompilation
 *
 * Function : FUN_0017429c
 * Address  : 0017429c
 * Program  : drastic64
 */


uint FUN_0017429c(FILE *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  byte *__ptr;
  long lVar6;
  int iVar7;
  byte *pbVar8;
  uint uVar10;
  byte *pbVar9;
  
  uVar4 = 0x80000000 >> (ulong)((uint)LZCOUNT(param_2) & 0x1f);
  __ptr = (byte *)malloc(0x1000);
  fseek(param_1,0,0);
  if (param_2 == 0) {
    uVar10 = 0xffffffff;
  }
  else {
    uVar10 = 0xffffffff;
    uVar5 = param_2;
    do {
      uVar1 = uVar5;
      if (0x1000 < uVar5) {
        uVar1 = 0x1000;
      }
      uVar2 = uVar5;
      if (0x1000 < uVar5) {
        uVar2 = 0x1000;
      }
      lVar6 = __fread_chk(__ptr,0x1000,(ulong)uVar1,1,param_1);
      if (lVar6 == 0) break;
      pbVar9 = __ptr;
      do {
        pbVar8 = pbVar9 + 1;
        uVar10 = *(uint *)(&crc32_table + ((ulong)(*pbVar9 ^ uVar10) & 0xff) * 4) ^ uVar10 >> 8;
        pbVar9 = pbVar8;
      } while (__ptr + uVar1 != pbVar8);
      uVar5 = uVar5 - uVar2;
    } while (uVar5 != 0);
  }
  if (param_2 != uVar4) {
    bVar3 = __ptr[0xfff];
    uVar4 = uVar4 * 2;
    __printf_chk(1,"Rounding up file CRC from %x to %x bytes, repeating with %x.\n",param_2,uVar4,
                 bVar3);
    if (uVar4 != param_2) {
      iVar7 = 0;
      do {
        iVar7 = iVar7 + 1;
        uVar10 = *(uint *)(&crc32_table + ((ulong)(bVar3 ^ uVar10) & 0xff) * 4) ^ uVar10 >> 8;
      } while (uVar4 - param_2 != iVar7);
    }
  }
  free(__ptr);
  return ~uVar10;
}


