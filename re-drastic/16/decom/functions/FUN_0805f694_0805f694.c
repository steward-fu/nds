/*
 * Ghidra decompilation
 *
 * Function : FUN_0805f694
 * Address  : 0805f694
 * Program  : drastic16
 */


uint FUN_0805f694(FILE *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  byte *pbVar2;
  byte bVar3;
  void *__ptr;
  size_t sVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  size_t __size;
  int iVar8;
  uint uVar9;
  
  uVar1 = 1 << (0x1fU - LZCOUNT(param_2) & 0xff);
  __ptr = malloc(0x1000);
  fseek(param_1,0,0);
  if (param_2 == 0) {
    uVar7 = 0xffffffff;
  }
  else {
    uVar7 = 0xffffffff;
    uVar9 = param_2;
    do {
      __size = uVar9;
      if (0xfff < uVar9) {
        __size = 0x1000;
      }
      sVar4 = fread(__ptr,__size,1,param_1);
      if (sVar4 == 0) break;
      uVar5 = 0;
      do {
        pbVar2 = (byte *)((int)__ptr + uVar5);
        uVar5 = uVar5 + 1;
        uVar7 = *(uint *)(&DAT_080e7b70 + ((*pbVar2 ^ uVar7) & 0xff) * 4) ^ uVar7 >> 8;
      } while (uVar5 < __size);
      uVar9 = uVar9 - __size;
    } while (uVar9 != 0);
  }
  if (param_2 != uVar1) {
    bVar3 = *(byte *)((int)__ptr + 0xfff);
    iVar8 = uVar1 * 2;
    printf("Rounding up file CRC from %x to %x bytes, repeating with %x.\n",param_2,iVar8,
           (uint)bVar3,param_4);
    iVar8 = iVar8 - param_2;
    if (iVar8 != 0) {
      iVar6 = 0;
      do {
        iVar6 = iVar6 + 1;
        uVar7 = *(uint *)(&DAT_080e7b70 + ((uVar7 ^ bVar3) & 0xff) * 4) ^ uVar7 >> 8;
      } while (iVar6 != iVar8);
    }
  }
  free(__ptr);
  return ~uVar7;
}


