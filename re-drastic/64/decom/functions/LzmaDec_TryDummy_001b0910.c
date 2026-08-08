/*
 * Ghidra decompilation
 *
 * Function : LzmaDec_TryDummy
 * Address  : 001b0910
 * Program  : drastic64
 */


undefined4 LzmaDec_TryDummy(uint *param_1,byte *param_2,long param_3)

{
  ushort *puVar1;
  long lVar2;
  byte *pbVar3;
  undefined4 uVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  byte *pbVar13;
  uint uVar14;
  long lVar15;
  uint uVar16;
  ushort *puVar17;
  int iVar18;
  
  pbVar3 = param_2 + param_3;
  uVar14 = param_1[0x12];
  uVar7 = param_1[0x10];
  uVar9 = (1 << (ulong)(param_1[2] & 0x1f)) - 1;
  lVar15 = *(long *)(param_1 + 4);
  lVar12 = ((ulong)(uVar14 << 4) + (ulong)(uVar9 & uVar7)) * 2;
  uVar16 = param_1[10];
  uVar11 = (ulong)(uVar9 & uVar7);
  uVar9 = param_1[0xb];
  pbVar5 = param_2;
  if (uVar16 < 0x1000000) {
    if (pbVar3 <= param_2) {
      return 0;
    }
    pbVar5 = param_2 + 1;
    uVar16 = uVar16 << 8;
    uVar9 = (uint)*param_2 | uVar9 << 8;
  }
  uVar8 = (uVar16 >> 0xb) * (uint)*(ushort *)(lVar15 + lVar12);
  if (uVar9 < uVar8) {
    lVar15 = lVar15 + 0xe6c;
    if (*(long *)(param_1 + 0x10) != 0) {
      lVar12 = *(long *)(param_1 + 0xc);
      if (lVar12 == 0) {
        lVar12 = *(long *)(param_1 + 0xe);
      }
      lVar15 = lVar15 + (ulong)((((int)(uint)*(byte *)(*(long *)(param_1 + 6) + lVar12 + -1) >>
                                 (8 - *param_1 & 0x1f)) +
                                (((1 << (ulong)(param_1[1] & 0x1f)) - 1U & uVar7) <<
                                (ulong)(*param_1 & 0x1f))) * 0x300) * 2;
    }
    if (uVar14 < 7) {
      uVar11 = 1;
      uVar16 = uVar8;
      do {
        while( true ) {
          lVar12 = uVar11 * 2;
          pbVar13 = pbVar5;
          uVar14 = uVar16;
          if (uVar16 < 0x1000000) {
            uVar14 = uVar16 << 8;
            if (pbVar3 <= pbVar5) {
              return 0;
            }
            pbVar13 = pbVar5 + 1;
            uVar9 = (uint)*pbVar5 | uVar9 << 8;
          }
          uVar7 = (int)uVar11 * 2;
          uVar11 = (ulong)uVar7;
          uVar16 = (uVar14 >> 0xb) * (uint)*(ushort *)(lVar15 + lVar12);
          pbVar5 = pbVar13;
          if (uVar9 < uVar16) break;
          uVar11 = (ulong)(uVar7 + 1);
          uVar14 = uVar14 - uVar16;
          uVar9 = uVar9 - uVar16;
          uVar16 = uVar14;
          if (0xff < uVar7 + 1) goto LAB_001b0a40;
        }
      } while (uVar7 < 0x100);
    }
    else {
      lVar12 = *(ulong *)(param_1 + 0xc) - (ulong)param_1[0x13];
      if (*(ulong *)(param_1 + 0xc) < (ulong)param_1[0x13]) {
        lVar12 = lVar12 + *(long *)(param_1 + 0xe);
      }
      uVar14 = (uint)*(byte *)(*(long *)(param_1 + 6) + lVar12);
      uVar11 = 1;
      uVar7 = 0x100;
      do {
        while( true ) {
          uVar14 = uVar14 * 2;
          lVar12 = uVar11 + uVar7;
          pbVar13 = pbVar5;
          if (uVar8 < 0x1000000) {
            uVar8 = uVar8 << 8;
            if (pbVar3 <= pbVar5) {
              return 0;
            }
            pbVar13 = pbVar5 + 1;
            uVar9 = (uint)*pbVar5 | uVar9 << 8;
          }
          uVar10 = (int)uVar11 * 2;
          uVar11 = (ulong)uVar10;
          uVar16 = (uVar8 >> 0xb) *
                   (uint)*(ushort *)(lVar15 + (lVar12 + (ulong)(uVar7 & uVar14)) * 2);
          pbVar5 = pbVar13;
          if (uVar9 < uVar16) break;
          uVar11 = (ulong)(uVar10 + 1);
          uVar8 = uVar8 - uVar16;
          uVar9 = uVar9 - uVar16;
          uVar16 = uVar8;
          uVar7 = uVar7 & uVar14;
          if (0xff < uVar10 + 1) goto LAB_001b0a40;
        }
        uVar8 = uVar16;
        uVar7 = uVar7 & (uVar7 & uVar14 ^ 0xffffffff);
      } while (uVar10 < 0x100);
    }
LAB_001b0a40:
    uVar4 = 1;
  }
  else {
    lVar2 = (ulong)uVar14 * 2 + 0x180;
    uVar16 = uVar16 - uVar8;
    uVar9 = uVar9 - uVar8;
    pbVar6 = pbVar5;
    if (uVar16 < 0x1000000) {
      if (pbVar3 <= pbVar5) {
        return 0;
      }
      pbVar6 = pbVar5 + 1;
      uVar16 = uVar16 * 0x100;
      uVar9 = (uint)*pbVar5 | uVar9 * 0x100;
    }
    uVar14 = (uVar16 >> 0xb) * (uint)*(ushort *)(lVar15 + lVar2);
    if (uVar9 < uVar14) {
      puVar17 = (ushort *)(lVar15 + 0x664);
      uVar4 = 2;
      uVar7 = 0;
    }
    else {
      lVar2 = lVar15 + lVar2;
      uVar16 = uVar16 - uVar14;
      uVar9 = uVar9 - uVar14;
      pbVar5 = pbVar6;
      if (uVar16 < 0x1000000) {
        if (pbVar3 <= pbVar6) {
          return 0;
        }
        pbVar5 = pbVar6 + 1;
        uVar16 = uVar16 * 0x100;
        uVar9 = (uint)*pbVar6 | uVar9 * 0x100;
      }
      uVar14 = (uVar16 >> 0xb) * (uint)*(ushort *)(lVar2 + 0x18);
      if (uVar9 < uVar14) {
        pbVar6 = pbVar5;
        if (uVar14 < 0x1000000) {
          if (pbVar3 <= pbVar5) {
            return 0;
          }
          pbVar6 = pbVar5 + 1;
          uVar14 = uVar14 * 0x100;
          uVar9 = (uint)*pbVar5 | uVar9 << 8;
        }
        uVar7 = (uVar14 >> 0xb) * (uint)*(ushort *)(lVar15 + lVar12 + 0x1e0);
        if (uVar9 < uVar7) {
          uVar4 = 0;
          if (0xffffff < uVar7 || pbVar6 < pbVar3) {
            uVar4 = 3;
          }
          return uVar4;
        }
        uVar14 = uVar14 - uVar7;
        uVar9 = uVar9 - uVar7;
      }
      else {
        uVar16 = uVar16 - uVar14;
        uVar9 = uVar9 - uVar14;
        pbVar13 = pbVar5;
        if (uVar16 < 0x1000000) {
          if (pbVar3 <= pbVar5) {
            return 0;
          }
          pbVar13 = pbVar5 + 1;
          uVar16 = uVar16 * 0x100;
          uVar9 = (uint)*pbVar5 | uVar9 * 0x100;
        }
        uVar14 = (uVar16 >> 0xb) * (uint)*(ushort *)(lVar2 + 0x30);
        pbVar6 = pbVar13;
        if (uVar14 <= uVar9) {
          uVar16 = uVar16 - uVar14;
          uVar9 = uVar9 - uVar14;
          if (uVar16 < 0x1000000) {
            if (pbVar3 <= pbVar13) {
              return 0;
            }
            pbVar6 = pbVar13 + 1;
            uVar16 = uVar16 * 0x100;
            uVar9 = (uint)*pbVar13 | uVar9 * 0x100;
          }
          uVar14 = (uVar16 >> 0xb) * (uint)*(ushort *)(lVar2 + 0x48);
          if (uVar14 <= uVar9) {
            uVar9 = uVar9 - uVar14;
            uVar14 = uVar16 - uVar14;
          }
        }
      }
      puVar17 = (ushort *)(lVar15 + 0xa68);
      uVar4 = 3;
      uVar7 = 0xc;
    }
    pbVar5 = pbVar6;
    if (uVar14 < 0x1000000) {
      if (pbVar3 <= pbVar6) {
        return 0;
      }
      pbVar5 = pbVar6 + 1;
      uVar14 = uVar14 << 8;
      uVar9 = (uint)*pbVar6 | uVar9 << 8;
    }
    uVar16 = (uVar14 >> 0xb) * (uint)*puVar17;
    pbVar6 = pbVar5;
    if (uVar9 < uVar16) {
      puVar17 = puVar17 + (uVar11 & 0x1fffffff) * 8 + 2;
      iVar18 = -8;
      uVar14 = 8;
    }
    else {
      uVar14 = uVar14 - uVar16;
      uVar9 = uVar9 - uVar16;
      if (uVar14 < 0x1000000) {
        if (pbVar3 <= pbVar5) {
          return 0;
        }
        pbVar6 = pbVar5 + 1;
        uVar14 = uVar14 * 0x100;
        uVar9 = (uint)*pbVar5 | uVar9 * 0x100;
      }
      uVar16 = (uVar14 >> 0xb) * (uint)puVar17[1];
      if (uVar9 < uVar16) {
        puVar17 = puVar17 + (uVar11 & 0x1fffffff) * 8 + 0x82;
        iVar18 = 0;
        uVar14 = 8;
      }
      else {
        uVar9 = uVar9 - uVar16;
        puVar17 = puVar17 + 0x102;
        uVar16 = uVar14 - uVar16;
        iVar18 = -0xf0;
        uVar14 = 0x100;
      }
    }
    uVar11 = 1;
    do {
      while( true ) {
        puVar1 = puVar17 + uVar11;
        pbVar13 = pbVar6;
        uVar8 = uVar16;
        if (uVar16 < 0x1000000) {
          uVar8 = uVar16 << 8;
          if (pbVar3 <= pbVar6) {
            return 0;
          }
          pbVar13 = pbVar6 + 1;
          uVar9 = (uint)*pbVar6 | uVar9 << 8;
        }
        uVar10 = (int)uVar11 * 2;
        uVar11 = (ulong)uVar10;
        uVar16 = (uVar8 >> 0xb) * (uint)*puVar1;
        pbVar6 = pbVar13;
        if (uVar9 < uVar16) break;
        uVar10 = uVar10 + 1;
        uVar11 = (ulong)uVar10;
        uVar8 = uVar8 - uVar16;
        uVar9 = uVar9 - uVar16;
        uVar16 = uVar8;
        if (uVar14 <= uVar10) goto LAB_001b0b50;
      }
    } while (uVar10 < uVar14);
LAB_001b0b50:
    if (uVar7 < 4) {
      uVar10 = iVar18 + uVar10;
      if (3 < uVar10) {
        uVar10 = 3;
      }
      uVar11 = 1;
      pbVar5 = pbVar13;
      do {
        while( true ) {
          lVar12 = (ulong)(uVar10 << 6) + 0x1b0 + uVar11;
          uVar14 = (int)uVar11 * 2;
          uVar11 = (ulong)uVar14;
          pbVar13 = pbVar5;
          uVar7 = uVar16;
          if (uVar16 < 0x1000000) {
            uVar7 = uVar16 << 8;
            if (pbVar3 <= pbVar5) {
              return 0;
            }
            pbVar13 = pbVar5 + 1;
            uVar9 = (uint)*pbVar5 | uVar9 << 8;
          }
          uVar16 = (uVar7 >> 0xb) * (uint)*(ushort *)(lVar15 + lVar12 * 2);
          pbVar5 = pbVar13;
          if (uVar9 < uVar16) break;
          uVar14 = uVar14 + 1;
          uVar11 = (ulong)uVar14;
          uVar7 = uVar7 - uVar16;
          uVar9 = uVar9 - uVar16;
          uVar16 = uVar7;
          if (0x3f < uVar14) goto LAB_001b0bcc;
        }
      } while (uVar14 < 0x40);
LAB_001b0bcc:
      uVar14 = uVar14 - 0x40;
      if (3 < uVar14) {
        if (uVar14 < 0xe) {
          uVar7 = (uVar14 >> 1) - 1;
          lVar15 = lVar15 + ((ulong)((uVar14 & 1 | 2) << (ulong)(uVar7 & 0x1f)) +
                            (0x2b0 - (ulong)uVar14)) * 2 + -2;
        }
        else {
          iVar18 = (uVar14 >> 1) - 5;
          do {
            pbVar13 = pbVar5;
            if (uVar16 < 0x1000000) {
              uVar16 = uVar16 << 8;
              if (pbVar3 <= pbVar5) {
                return 0;
              }
              pbVar13 = pbVar5 + 1;
              uVar9 = (uint)*pbVar5 | uVar9 << 8;
            }
            uVar16 = uVar16 >> 1;
            iVar18 = iVar18 + -1;
            uVar9 = uVar9 - (0xffffffffU - ((int)(uVar9 - uVar16) >> 0x1f) & uVar16);
            pbVar5 = pbVar13;
          } while (iVar18 != 0);
          lVar15 = lVar15 + 0x644;
          uVar7 = 4;
        }
        uVar14 = 1;
        pbVar5 = pbVar13;
        do {
          uVar11 = (ulong)uVar14;
          pbVar13 = pbVar5;
          if (uVar16 < 0x1000000) {
            uVar16 = uVar16 << 8;
            if (pbVar3 <= pbVar5) {
              return 0;
            }
            pbVar13 = pbVar5 + 1;
            uVar9 = (uint)*pbVar5 | uVar9 << 8;
          }
          uVar14 = uVar14 * 2;
          uVar8 = (uVar16 >> 0xb) * (uint)*(ushort *)(lVar15 + uVar11 * 2);
          if (uVar8 <= uVar9) {
            uVar9 = uVar9 - uVar8;
            uVar14 = uVar14 + 1;
            uVar8 = uVar16 - uVar8;
          }
          uVar16 = uVar8;
          uVar7 = uVar7 - 1;
          pbVar5 = pbVar13;
        } while (uVar7 != 0);
      }
    }
  }
  if (pbVar3 <= pbVar13 && uVar16 < 0xffffff || pbVar3 <= pbVar13 && uVar16 == 0xffffff) {
    uVar4 = 0;
  }
  return uVar4;
}


