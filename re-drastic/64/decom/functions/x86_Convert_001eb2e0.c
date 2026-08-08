/*
 * Ghidra decompilation
 *
 * Function : x86_Convert
 * Address  : 001eb2e0
 * Program  : drastic64
 */


long x86_Convert(byte *param_1,ulong param_2,int param_3,uint *param_4,int param_5)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  
  if (param_2 < 5) {
    return 0;
  }
  pbVar2 = param_1 + (param_2 - 4);
  uVar12 = *param_4 & 7;
  lVar11 = -1;
  pbVar8 = param_1;
  pbVar9 = param_1;
  if (param_1 < pbVar2) {
    do {
      while ((*pbVar8 & 0xfe) != 0xe8) {
        pbVar8 = pbVar8 + 1;
        pbVar9 = pbVar2;
        if (pbVar8 == pbVar2) goto LAB_001eb3d8;
      }
      lVar7 = (long)pbVar8 - (long)param_1;
      if (pbVar2 <= pbVar8) goto LAB_001eb3dc;
      if ((ulong)(lVar7 - lVar11) < 4) {
        uVar12 = uVar12 << (ulong)((int)(lVar7 - lVar11) - 1U & 0x1f) & 7;
        if ((uVar12 == 0) ||
           ((*(char *)((long)&kMaskToAllowedStatus + (ulong)uVar12) != '\0' &&
            ((byte)(pbVar8[(int)(4 - (uint)(byte)(&kMaskToBitNumber)[uVar12])] - 1) < 0xfe)))) {
          bVar4 = pbVar8[4];
          goto joined_r0x001eb410;
        }
      }
      else {
        bVar4 = pbVar8[4];
        uVar12 = 0;
joined_r0x001eb410:
        if (0xfd < (byte)(bVar4 - 1)) {
LAB_001eb41c:
          iVar3 = *(int *)(pbVar8 + 1);
          iVar1 = param_3 + 5 + (int)lVar7;
          if (param_5 == 0) {
            if (uVar12 == 0) {
              uVar10 = iVar3 - iVar1;
            }
            else {
              uVar10 = iVar3 - iVar1;
              uVar6 = (uint)(byte)(&kMaskToBitNumber)[uVar12] * -8 + 0x18;
              uVar5 = uVar10 >> (ulong)(uVar6 & 0x1f);
              while (0xfd < (uVar5 - 1 & 0xff)) {
                uVar10 = ((1 << (ulong)((uint)(byte)(&kMaskToBitNumber)[uVar12] * -8 + 0x20 & 0x1f))
                          - 1U ^ uVar10) - iVar1;
                uVar5 = uVar10 >> (ulong)(uVar6 & 0x1f);
              }
            }
          }
          else if (uVar12 == 0) {
            uVar10 = iVar3 + iVar1;
          }
          else {
            uVar10 = iVar3 + iVar1;
            uVar6 = (uint)(byte)(&kMaskToBitNumber)[uVar12] * -8 + 0x18;
            uVar5 = uVar10 >> (ulong)(uVar6 & 0x1f);
            while (0xfd < (uVar5 - 1 & 0xff)) {
              uVar10 = ((1 << (ulong)((uint)(byte)(&kMaskToBitNumber)[uVar12] * -8 + 0x20 & 0x1f)) -
                        1U ^ uVar10) + iVar1;
              uVar5 = uVar10 >> (ulong)(uVar6 & 0x1f);
            }
          }
          lVar11 = lVar7 + 5;
          *(short *)(pbVar8 + 1) = (short)uVar10;
          pbVar8[3] = (byte)(uVar10 >> 0x10);
          pbVar8[4] = -((byte)(uVar10 >> 0x18) & 1);
          lVar13 = lVar7;
          do {
            pbVar8 = param_1 + lVar11;
            pbVar9 = pbVar8;
            if (pbVar2 <= pbVar8) {
LAB_001eb5d0:
              lVar7 = (long)pbVar9 - (long)param_1;
LAB_001eb5d4:
              uVar12 = uVar12 << (ulong)((int)(lVar7 - lVar13) - 1U & 0x1f) & 7;
              if (3 < (ulong)(lVar7 - lVar13)) {
                uVar12 = 0;
              }
              *param_4 = uVar12;
              return lVar7;
            }
            while ((*pbVar8 & 0xfe) != 0xe8) {
              pbVar8 = pbVar8 + 1;
              pbVar9 = pbVar2;
              if (pbVar8 == pbVar2) goto LAB_001eb5d0;
            }
            lVar7 = (long)pbVar8 - (long)param_1;
            if (pbVar2 <= pbVar8) goto LAB_001eb5d4;
            if ((ulong)(lVar7 - lVar13) < 4) {
              uVar12 = uVar12 << (ulong)((int)(lVar7 - lVar13) - 1U & 0x1f) & 7;
              if ((uVar12 == 0) ||
                 ((*(char *)((long)&kMaskToAllowedStatus + (ulong)uVar12) != '\0' &&
                  ((byte)(pbVar8[(int)(4 - (uint)(byte)(&kMaskToBitNumber)[uVar12])] - 1) < 0xfe))))
              goto LAB_001eb528;
            }
            else {
              uVar12 = 0;
LAB_001eb528:
              if (0xfd < (byte)(pbVar8[4] - 1)) goto LAB_001eb41c;
            }
            uVar12 = (uVar12 & 3) << 1 | 1;
            lVar11 = lVar7 + 1;
            lVar13 = lVar7;
          } while( true );
        }
      }
      pbVar8 = param_1 + lVar7 + 1;
      uVar12 = (uVar12 & 3) << 1 | 1;
      pbVar9 = pbVar8;
      lVar11 = lVar7;
    } while (pbVar8 < pbVar2);
  }
LAB_001eb3d8:
  lVar7 = (long)pbVar9 - (long)param_1;
LAB_001eb3dc:
  uVar12 = uVar12 << (ulong)((int)(lVar7 - lVar11) - 1U & 0x1f) & 7;
  if (3 < (ulong)(lVar7 - lVar11)) {
    uVar12 = 0;
  }
  *param_4 = uVar12;
  return lVar7;
}


