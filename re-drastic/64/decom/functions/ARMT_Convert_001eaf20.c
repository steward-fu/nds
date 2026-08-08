/*
 * Ghidra decompilation
 *
 * Function : ARMT_Convert
 * Address  : 001eaf20
 * Program  : drastic64
 */


ulong ARMT_Convert(long param_1,ulong param_2,int param_3,int param_4)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  
  if (param_2 < 4) {
    return 0;
  }
  param_2 = param_2 - 4;
  uVar3 = 0;
  if (param_4 == 0) {
    lVar6 = 1;
    uVar2 = 2;
    bVar1 = *(byte *)(param_1 + 1);
    if ((bVar1 & 0xf8) == 0xf0) goto LAB_001eaf7c;
LAB_001eaf58:
    uVar3 = uVar2;
    if (uVar2 <= param_2) {
      while( true ) {
        lVar6 = uVar3 + 1;
        uVar2 = uVar3 + 2;
        bVar1 = *(byte *)(param_1 + lVar6);
        if ((bVar1 & 0xf8) != 0xf0) break;
LAB_001eaf7c:
        uVar4 = (uint)*(byte *)(param_1 + uVar3 + 3);
        if ((uVar4 & 0xf8) != 0xf8) break;
        uVar4 = ((uVar4 & 7) << 8 | (bVar1 & 7) << 0x13 |
                (uint)*(byte *)(param_1 + uVar2) | (uint)*(byte *)(param_1 + uVar3) << 0xb) * 2 -
                (param_3 + 4 + (int)uVar3);
        *(byte *)(param_1 + lVar6) = (byte)(uVar4 >> 0x14) & 7 | 0xf0;
        *(char *)(param_1 + uVar3) = (char)(uVar4 >> 0xc);
        *(byte *)(param_1 + uVar3 + 3) = (byte)(uVar4 >> 9) | 0xf8;
        *(char *)(param_1 + uVar2) = (char)(uVar4 >> 1);
        uVar3 = uVar3 + 4;
        if (param_2 < uVar3) {
          return uVar3;
        }
      }
      goto LAB_001eaf58;
    }
  }
  else {
    do {
      uVar2 = uVar3 + 2;
      uVar4 = (uint)*(byte *)(param_1 + uVar3 + 1);
      if ((uVar4 & 0xf8) == 0xf0) {
        uVar5 = (uint)*(byte *)(param_1 + uVar3 + 3);
        if ((uVar5 & 0xf8) == 0xf8) {
          uVar4 = param_3 + 4 + (int)uVar3 +
                  ((uVar4 & 7) << 0x13 | (uVar5 & 7) << 8 |
                  (uint)*(byte *)(param_1 + uVar2) | (uint)*(byte *)(param_1 + uVar3) << 0xb) * 2;
          *(byte *)(param_1 + uVar3 + 1) = (byte)(uVar4 >> 0x14) & 7 | 0xf0;
          *(char *)(param_1 + uVar3) = (char)(uVar4 >> 0xc);
          *(byte *)(param_1 + uVar3 + 3) = (byte)(uVar4 >> 9) | 0xf8;
          *(char *)(param_1 + uVar2) = (char)(uVar4 >> 1);
          uVar2 = uVar3 + 4;
        }
      }
      uVar3 = uVar2;
    } while (uVar2 <= param_2);
  }
  return uVar2;
}


