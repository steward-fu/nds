/*
 * Ghidra decompilation
 *
 * Function : LzmaDec_DecodeReal
 * Address  : 001afa80
 * Program  : drastic64
 */


undefined8 LzmaDec_DecodeReal(uint *param_1,ulong param_2,byte *param_3)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  ushort uVar9;
  uint uVar10;
  uint uVar11;
  short sVar12;
  int iVar13;
  undefined8 *puVar14;
  bool bVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  ushort *puVar19;
  uint uVar20;
  ulong uVar21;
  long lVar22;
  uint uVar23;
  byte *pbVar24;
  byte *pbVar25;
  byte *pbVar26;
  undefined *puVar27;
  undefined *puVar28;
  uint uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  short *psVar34;
  ushort *puVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  ulong uVar39;
  long lVar40;
  ulong uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  undefined8 uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  uint local_18;
  
  uVar20 = 0;
  lVar38 = *(long *)(param_1 + 4);
  lVar40 = *(long *)(param_1 + 6);
  uVar5 = *param_1;
  uVar6 = param_1[1];
  uVar32 = *(ulong *)(param_1 + 0xc);
  uVar41 = *(ulong *)(param_1 + 0xe);
  local_18 = param_1[0x16];
  lVar2 = lVar38 + 0x644;
  uVar42 = param_1[0x10];
  uVar7 = param_1[0x11];
  uVar11 = ~(-1 << (ulong)(param_1[2] & 0x1f));
  uVar43 = param_1[0x13];
  uVar46 = param_1[0x14];
  uVar39 = (ulong)param_1[0x12];
  uVar23 = param_1[0xb];
  uVar48 = param_1[0x15];
  pbVar24 = *(byte **)(param_1 + 8);
  uVar21 = (ulong)param_1[10];
LAB_001afc48:
  while( true ) {
    uVar17 = (uint)uVar39;
    lVar36 = ((ulong)(uVar17 << 4) + (ulong)(uVar11 & uVar42)) * 2;
    uVar16 = (uint)uVar21;
    uVar30 = (ulong)(uVar11 & uVar42);
    uVar9 = *(ushort *)(lVar38 + lVar36);
    if (uVar16 < 0x1000000) {
      uVar16 = uVar16 << 8;
      uVar23 = (uint)*pbVar24 | uVar23 << 8;
      pbVar24 = pbVar24 + 1;
    }
    uVar44 = (uVar16 >> 0xb) * (uint)uVar9;
    iVar18 = 3;
    uVar47 = uVar46;
    uVar49 = uVar48;
    if (uVar44 <= uVar23) break;
    lVar37 = lVar38 + 0xe6c;
    *(ushort *)(lVar38 + lVar36) = uVar9 + (short)(0x800 - uVar9 >> 5);
    if ((uVar42 | uVar7) != 0) {
      uVar21 = uVar32;
      if (uVar32 == 0) {
        uVar21 = uVar41;
      }
      lVar37 = lVar37 + (ulong)((((int)(uint)*(byte *)(lVar40 + (uVar21 - 1)) >> (8 - uVar5 & 0x1f))
                                + ((~(-1 << (ulong)(uVar6 & 0x1f)) & uVar42) <<
                                  (ulong)(uVar5 & 0x1f))) * 0x300) * 2;
    }
    if (uVar17 < 7) {
      uVar16 = uVar17;
      if (3 < uVar17) {
        uVar16 = 3;
      }
      uVar39 = (ulong)(uVar17 - uVar16);
      uVar30 = 1;
LAB_001afcf0:
      uVar9 = *(ushort *)(lVar37 + uVar30 * 2);
      psVar34 = (short *)(lVar37 + uVar30 * 2);
      pbVar26 = pbVar24;
      uVar16 = uVar44;
      if (0xffffff < uVar44) goto LAB_001afd18;
      do {
        pbVar24 = pbVar26 + 1;
        uVar44 = uVar16 << 8;
        uVar23 = (uint)*pbVar26 | uVar23 << 8;
LAB_001afd18:
        uVar16 = (uint)uVar9;
        sVar12 = uVar9 - (uVar9 >> 5);
        uVar17 = (uint)uVar30;
        iVar18 = uVar16 + (0x800 - uVar16 >> 5);
        uVar29 = (uVar44 >> 0xb) * uVar16;
        while( true ) {
          uVar16 = uVar29;
          uVar17 = uVar17 * 2;
          if (uVar16 <= uVar23) {
            *psVar34 = sVar12;
            uVar30 = (ulong)(uVar17 + 1);
            uVar44 = uVar44 - uVar16;
            uVar23 = uVar23 - uVar16;
            if (uVar17 + 1 < 0x100) goto LAB_001afcf0;
            goto LAB_001afd98;
          }
          uVar21 = (ulong)uVar16;
          uVar30 = (ulong)uVar17;
          *psVar34 = (short)iVar18;
          if (0xff < uVar17) goto LAB_001afd9c;
          uVar9 = *(ushort *)(lVar37 + uVar30 * 2);
          psVar34 = (short *)(lVar37 + uVar30 * 2);
          pbVar26 = pbVar24;
          if (uVar16 < 0x1000000) break;
          sVar12 = uVar9 - (uVar9 >> 5);
          iVar18 = (uint)uVar9 + (0x800 - uVar9 >> 5);
          uVar29 = (uVar16 >> 0xb) * (uint)uVar9;
          uVar44 = uVar16;
        }
      } while( true );
    }
    lVar22 = uVar32 - uVar43;
    lVar36 = lVar22 + uVar41;
    if (uVar43 <= uVar32) {
      lVar36 = lVar22;
    }
    if (9 < uVar17) {
      iVar18 = 6;
    }
    uVar29 = (uint)*(byte *)(*(long *)(param_1 + 6) + lVar36);
    uVar39 = (ulong)(uVar17 - iVar18);
    uVar30 = 1;
    pbVar26 = pbVar24;
    uVar17 = uVar44;
    uVar16 = 0x100;
    do {
      while( true ) {
        uVar29 = uVar29 * 2;
        lVar36 = (uVar30 + uVar16 + (ulong)(uVar16 & uVar29)) * 2;
        uVar9 = *(ushort *)(lVar37 + lVar36);
        psVar34 = (short *)(lVar37 + lVar36);
        uVar4 = uVar16 & uVar29;
        pbVar24 = pbVar26;
        uVar44 = uVar17;
        if (uVar17 < 0x1000000) {
          pbVar24 = pbVar26 + 1;
          uVar44 = uVar17 << 8;
          uVar23 = (uint)*pbVar26 | uVar23 << 8;
        }
        uVar10 = (int)uVar30 * 2;
        uVar30 = (ulong)uVar10;
        uVar16 = uVar16 & (uVar4 ^ 0xffffffff);
        uVar17 = (uVar44 >> 0xb) * (uint)uVar9;
        uVar21 = (ulong)uVar17;
        pbVar26 = pbVar24;
        if (uVar17 <= uVar23) break;
        *psVar34 = uVar9 + (short)(0x800 - uVar9 >> 5);
        if (0xff < uVar10) goto LAB_001afd9c;
      }
      *psVar34 = uVar9 - (uVar9 >> 5);
      uVar30 = (ulong)(uVar10 + 1);
      uVar44 = uVar44 - uVar17;
      uVar23 = uVar23 - uVar17;
      uVar17 = uVar44;
      uVar16 = uVar4;
    } while (uVar10 + 1 < 0x100);
LAB_001afd98:
    uVar21 = (ulong)uVar44;
LAB_001afd9c:
    uVar44 = (uint)uVar21;
    *(char *)(lVar40 + uVar32) = (char)uVar30;
    uVar32 = uVar32 + 1;
    uVar42 = uVar42 + 1;
    if (param_2 <= uVar32 || param_3 <= pbVar24) goto LAB_001afdb4;
  }
  lVar22 = uVar39 * 2;
  lVar37 = lVar22 + 0x180;
  *(ushort *)(lVar38 + lVar36) = uVar9 - (uVar9 >> 5);
  uVar16 = uVar16 - uVar44;
  uVar9 = *(ushort *)(lVar38 + lVar37);
  uVar23 = uVar23 - uVar44;
  pbVar26 = pbVar24;
  if (uVar16 < 0x1000000) {
    pbVar26 = pbVar24 + 1;
    uVar16 = uVar16 * 0x100;
    uVar23 = (uint)*pbVar24 | uVar23 * 0x100;
  }
  uVar44 = (uVar16 >> 0xb) * (uint)uVar9;
  if (uVar44 <= uVar23) {
    *(ushort *)(lVar38 + lVar37) = uVar9 - (uVar9 >> 5);
    uVar16 = uVar16 - uVar44;
    uVar23 = uVar23 - uVar44;
    if ((uVar42 | uVar7) == 0) {
      return 1;
    }
    lVar37 = lVar22 + 0x198;
    uVar9 = *(ushort *)(lVar38 + lVar37);
    pbVar25 = pbVar26;
    if (uVar16 < 0x1000000) {
      pbVar25 = pbVar26 + 1;
      uVar16 = uVar16 * 0x100;
      uVar23 = (uint)*pbVar26 | uVar23 * 0x100;
    }
    uVar44 = (uVar16 >> 0xb) * (uint)uVar9;
    if (uVar44 <= uVar23) {
      lVar36 = lVar22 + 0x1b0;
      *(ushort *)(lVar38 + lVar37) = uVar9 - (uVar9 >> 5);
      uVar16 = uVar16 - uVar44;
      uVar9 = *(ushort *)(lVar38 + lVar36);
      uVar23 = uVar23 - uVar44;
      pbVar24 = pbVar25;
      if (uVar16 < 0x1000000) {
        pbVar24 = pbVar25 + 1;
        uVar16 = uVar16 * 0x100;
        uVar23 = (uint)*pbVar25 | uVar23 * 0x100;
      }
      uVar44 = (uVar16 >> 0xb) * (uint)uVar9;
      pbVar26 = pbVar24;
      uVar47 = uVar43;
      if (uVar23 < uVar44) {
        *(ushort *)(lVar38 + lVar36) = uVar9 + (short)(0x800 - uVar9 >> 5);
        uVar43 = uVar46;
      }
      else {
        lVar22 = lVar22 + 0x1c8;
        *(ushort *)(lVar38 + lVar36) = uVar9 - (uVar9 >> 5);
        uVar16 = uVar16 - uVar44;
        uVar9 = *(ushort *)(lVar38 + lVar22);
        uVar23 = uVar23 - uVar44;
        if (uVar16 < 0x1000000) {
          pbVar26 = pbVar24 + 1;
          uVar16 = uVar16 * 0x100;
          uVar23 = (uint)*pbVar24 | uVar23 * 0x100;
        }
        uVar20 = (uVar16 >> 0xb) * (uint)uVar9;
        uVar49 = uVar46;
        if (uVar23 < uVar20) {
          *(ushort *)(lVar38 + lVar22) = uVar9 + (short)(0x800 - uVar9 >> 5);
          uVar43 = uVar48;
          uVar44 = uVar20;
        }
        else {
          uVar44 = uVar16 - uVar20;
          uVar23 = uVar23 - uVar20;
          *(ushort *)(lVar38 + lVar22) = uVar9 - (uVar9 >> 5);
          uVar43 = local_18;
          local_18 = uVar48;
        }
      }
LAB_001b0548:
      puVar19 = (ushort *)(lVar38 + 0xa68);
      uVar16 = 8;
      if (6 < uVar17) {
        uVar16 = 0xb;
      }
      goto LAB_001afe3c;
    }
    lVar36 = lVar36 + 0x1e0;
    *(ushort *)(lVar38 + lVar37) = uVar9 + (short)(0x800 - uVar9 >> 5);
    uVar9 = *(ushort *)(lVar38 + lVar36);
    pbVar24 = pbVar25;
    if (uVar44 < 0x1000000) {
      pbVar24 = pbVar25 + 1;
      uVar44 = uVar44 * 0x100;
      uVar23 = (uint)*pbVar25 | uVar23 << 8;
    }
    uVar16 = (uVar44 >> 0xb) * (uint)uVar9;
    uVar21 = (ulong)uVar16;
    if (uVar16 <= uVar23) {
      uVar23 = uVar23 - uVar16;
      *(ushort *)(lVar38 + lVar36) = uVar9 - (uVar9 >> 5);
      pbVar26 = pbVar24;
      uVar44 = uVar44 - uVar16;
      goto LAB_001b0548;
    }
    uVar42 = uVar42 + 1;
    lVar22 = uVar32 - uVar43;
    lVar37 = lVar22 + uVar41;
    if (uVar43 <= uVar32) {
      lVar37 = lVar22;
    }
    *(ushort *)(lVar38 + lVar36) = uVar9 + (short)(0x800 - uVar9 >> 5);
    uVar16 = 9;
    if (6 < uVar17) {
      uVar16 = 0xb;
    }
    uVar39 = (ulong)uVar16;
    *(undefined *)(lVar40 + uVar32) = *(undefined *)(lVar40 + lVar37);
    uVar32 = uVar32 + 1;
    goto LAB_001afc3c;
  }
  *(ushort *)(lVar38 + lVar37) = uVar9 + (short)(0x800 - uVar9 >> 5);
  puVar19 = (ushort *)(lVar38 + 0x664);
  uVar16 = uVar17 + 0xc;
LAB_001afe3c:
  uVar39 = (ulong)uVar16;
  uVar9 = *puVar19;
  pbVar24 = pbVar26;
  if (uVar44 < 0x1000000) {
    pbVar24 = pbVar26 + 1;
    uVar44 = uVar44 << 8;
    uVar23 = (uint)*pbVar26 | uVar23 << 8;
  }
  uVar20 = (uVar44 >> 0xb) * (uint)uVar9;
  uVar21 = (ulong)uVar20;
  pbVar26 = pbVar24;
  if (uVar23 < uVar20) {
    puVar35 = puVar19 + (uVar30 & 0x1fffffff) * 8 + 2;
    iVar18 = -8;
    uVar20 = 8;
    *puVar19 = uVar9 + (short)(0x800 - uVar9 >> 5);
  }
  else {
    *puVar19 = uVar9 - (uVar9 >> 5);
    uVar44 = uVar44 - uVar20;
    uVar9 = puVar19[1];
    uVar23 = uVar23 - uVar20;
    if (uVar44 < 0x1000000) {
      pbVar26 = pbVar24 + 1;
      uVar44 = uVar44 * 0x100;
      uVar23 = (uint)*pbVar24 | uVar23 * 0x100;
    }
    uVar20 = (uVar44 >> 0xb) * (uint)uVar9;
    uVar21 = (ulong)uVar20;
    if (uVar23 < uVar20) {
      puVar35 = puVar19 + (uVar30 & 0x1fffffff) * 8 + 0x82;
      iVar18 = 0;
      uVar20 = 8;
      puVar19[1] = uVar9 + (short)(0x800 - uVar9 >> 5);
    }
    else {
      uVar23 = uVar23 - uVar20;
      uVar21 = (ulong)(uVar44 - uVar20);
      puVar35 = puVar19 + 0x102;
      iVar18 = -0xf0;
      uVar20 = 0x100;
      puVar19[1] = uVar9 - (uVar9 >> 5);
    }
  }
  uVar30 = 1;
  do {
    while( true ) {
      uVar9 = puVar35[uVar30];
      puVar19 = puVar35 + uVar30;
      pbVar24 = pbVar26;
      if ((uint)uVar21 < 0x1000000) {
        pbVar24 = pbVar26 + 1;
        uVar21 = (ulong)((uint)uVar21 << 8);
        uVar23 = (uint)*pbVar26 | uVar23 << 8;
      }
      uVar46 = (int)(uVar21 >> 0xb) * (uint)uVar9;
      uVar17 = (int)uVar30 * 2;
      uVar30 = (ulong)uVar17;
      pbVar26 = pbVar24;
      if (uVar46 <= uVar23) break;
      *puVar19 = uVar9 + (short)(0x800 - uVar9 >> 5);
      uVar21 = (ulong)uVar46;
      if (uVar20 <= uVar17) goto LAB_001afee0;
    }
    *puVar19 = uVar9 - (uVar9 >> 5);
    uVar17 = uVar17 + 1;
    uVar30 = (ulong)uVar17;
    uVar21 = (ulong)((int)uVar21 - uVar46);
    uVar23 = uVar23 - uVar46;
  } while (uVar17 < uVar20);
LAB_001afee0:
  uVar17 = iVar18 + uVar17;
  uVar46 = uVar47;
  uVar48 = uVar49;
  uVar44 = uVar43;
  if (0xb < uVar16) {
    uVar20 = uVar17;
    if (3 < uVar17) {
      uVar20 = 3;
    }
    lVar36 = lVar38 + ((ulong)uVar20 & 0x3ffffff) * 0x80 + 0x360;
    uVar9 = *(ushort *)(lVar36 + 2);
    if ((uint)uVar21 < 0x1000000) {
      pbVar26 = pbVar24 + 1;
      uVar21 = (ulong)((uint)uVar21 << 8);
      uVar23 = (uint)*pbVar24 | uVar23 << 8;
    }
    uVar20 = (int)(uVar21 >> 0xb) * (uint)uVar9;
    if (uVar23 < uVar20) {
      uVar21 = 4;
      sVar12 = (short)(0x800 - uVar9 >> 5);
      lVar37 = 4;
    }
    else {
      sVar12 = -(uVar9 >> 5);
      uVar23 = uVar23 - uVar20;
      uVar20 = (int)uVar21 - uVar20;
      uVar21 = 6;
      lVar37 = 6;
    }
    *(ushort *)(lVar36 + 2) = uVar9 + sVar12;
    uVar9 = *(ushort *)(lVar36 + lVar37);
    pbVar24 = pbVar26;
    if (uVar20 < 0x1000000) {
      pbVar24 = pbVar26 + 1;
      uVar20 = uVar20 << 8;
      uVar23 = (uint)*pbVar26 | uVar23 << 8;
    }
    uVar46 = (uVar20 >> 0xb) * (uint)uVar9;
    if (uVar23 < uVar46) {
      sVar12 = (short)(0x800 - uVar9 >> 5);
    }
    else {
      sVar12 = -(uVar9 >> 5);
      uVar23 = uVar23 - uVar46;
      uVar21 = (ulong)((int)uVar21 + 1);
      uVar46 = uVar20 - uVar46;
    }
    *(ushort *)(lVar36 + lVar37) = uVar9 + sVar12;
    uVar9 = *(ushort *)(lVar36 + uVar21 * 2);
    pbVar26 = pbVar24;
    if (uVar46 < 0x1000000) {
      pbVar26 = pbVar24 + 1;
      uVar46 = uVar46 << 8;
      uVar23 = (uint)*pbVar24 | uVar23 << 8;
    }
    uVar20 = (int)uVar21 * 2;
    uVar48 = (uVar46 >> 0xb) * (uint)uVar9;
    if (uVar23 < uVar48) {
      sVar12 = (short)(0x800 - uVar9 >> 5);
    }
    else {
      sVar12 = -(uVar9 >> 5);
      uVar23 = uVar23 - uVar48;
      uVar20 = uVar20 + 1;
      uVar48 = uVar46 - uVar48;
    }
    *(ushort *)(lVar36 + uVar21 * 2) = uVar9 + sVar12;
    uVar9 = *(ushort *)(lVar36 + (ulong)uVar20 * 2);
    pbVar24 = pbVar26;
    if (uVar48 < 0x1000000) {
      pbVar24 = pbVar26 + 1;
      uVar48 = uVar48 << 8;
      uVar23 = (uint)*pbVar26 | uVar23 << 8;
    }
    uVar46 = uVar20 * 2;
    uVar44 = (uVar48 >> 0xb) * (uint)uVar9;
    if (uVar23 < uVar44) {
      sVar12 = (short)(0x800 - uVar9 >> 5);
    }
    else {
      sVar12 = -(uVar9 >> 5);
      uVar23 = uVar23 - uVar44;
      uVar46 = uVar46 + 1;
      uVar44 = uVar48 - uVar44;
    }
    *(ushort *)(lVar36 + (ulong)uVar20 * 2) = uVar9 + sVar12;
    uVar9 = *(ushort *)(lVar36 + (ulong)uVar46 * 2);
    pbVar26 = pbVar24;
    if (uVar44 < 0x1000000) {
      pbVar26 = pbVar24 + 1;
      uVar44 = uVar44 << 8;
      uVar23 = (uint)*pbVar24 | uVar23 << 8;
    }
    uVar20 = uVar46 * 2;
    uVar48 = (uVar44 >> 0xb) * (uint)uVar9;
    if (uVar23 < uVar48) {
      sVar12 = (short)(0x800 - uVar9 >> 5);
    }
    else {
      sVar12 = -(uVar9 >> 5);
      uVar23 = uVar23 - uVar48;
      uVar20 = uVar20 + 1;
      uVar48 = uVar44 - uVar48;
    }
    *(ushort *)(lVar36 + (ulong)uVar46 * 2) = uVar9 + sVar12;
    uVar9 = *(ushort *)(lVar36 + (ulong)uVar20 * 2);
    pbVar24 = pbVar26;
    if (uVar48 < 0x1000000) {
      pbVar24 = pbVar26 + 1;
      uVar48 = uVar48 << 8;
      uVar23 = (uint)*pbVar26 | uVar23 << 8;
    }
    iVar18 = uVar20 * 2;
    uVar46 = (uVar48 >> 0xb) * (uint)uVar9;
    if (uVar23 < uVar46) {
      sVar12 = (short)(0x800 - uVar9 >> 5);
    }
    else {
      sVar12 = -(uVar9 >> 5);
      uVar23 = uVar23 - uVar46;
      iVar18 = iVar18 + 1;
      uVar46 = uVar48 - uVar46;
    }
    uVar21 = (ulong)uVar46;
    *(ushort *)(lVar36 + (ulong)uVar20 * 2) = uVar9 + sVar12;
    uVar20 = iVar18 - 0x40;
    if (uVar20 < 4) {
LAB_001b0120:
      uVar44 = uVar20 + 1;
      if (uVar7 == 0) goto LAB_001b0128;
LAB_001b0388:
      if (uVar7 <= uVar20) {
        return 1;
      }
    }
    else {
      uVar46 = uVar20 & 1 | 2;
      if (0xd < uVar20) {
        iVar18 = (uVar20 >> 1) - 5;
        do {
          while (uVar20 = (uint)uVar21, uVar20 < 0x1000000) {
            pbVar26 = pbVar24 + 1;
            uVar48 = (uVar20 & 0xffffff) * 0x80;
            uVar21 = (ulong)uVar48;
            iVar18 = iVar18 + -1;
            iVar13 = ((uint)*pbVar24 | uVar23 << 8) + (uVar20 & 0xffffff) * -0x80;
            uVar20 = iVar13 >> 0x1f;
            uVar46 = uVar20 + uVar46 * 2 + 1;
            uVar23 = (uVar20 & uVar48) + iVar13;
            pbVar24 = pbVar26;
            if (iVar18 == 0) goto LAB_001b0714;
          }
          uVar20 = uVar20 >> 1;
          uVar21 = (ulong)uVar20;
          iVar18 = iVar18 + -1;
          uVar48 = (int)(uVar23 - uVar20) >> 0x1f;
          uVar46 = uVar48 + uVar46 * 2 + 1;
          uVar23 = (uVar20 & uVar48) + (uVar23 - uVar20);
        } while (iVar18 != 0);
LAB_001b0714:
        uVar9 = *(ushort *)(lVar38 + 0x646);
        uVar20 = uVar46 << 4;
        pbVar26 = pbVar24;
        if ((uint)uVar21 < 0x1000000) {
          pbVar26 = pbVar24 + 1;
          uVar21 = (ulong)((uint)uVar21 << 8);
          uVar23 = (uint)*pbVar24 | uVar23 << 8;
        }
        uVar46 = (int)(uVar21 >> 0xb) * (uint)uVar9;
        if (uVar23 < uVar46) {
          uVar21 = 4;
          sVar12 = (short)(0x800 - uVar9 >> 5);
          lVar36 = 4;
        }
        else {
          sVar12 = -(uVar9 >> 5);
          uVar23 = uVar23 - uVar46;
          uVar20 = uVar20 | 1;
          uVar46 = (int)uVar21 - uVar46;
          uVar21 = 6;
          lVar36 = 6;
        }
        *(ushort *)(lVar38 + 0x646) = uVar9 + sVar12;
        uVar9 = *(ushort *)(lVar2 + lVar36);
        pbVar25 = pbVar26;
        if (uVar46 < 0x1000000) {
          pbVar25 = pbVar26 + 1;
          uVar46 = uVar46 << 8;
          uVar23 = (uint)*pbVar26 | uVar23 << 8;
        }
        uVar48 = (uVar46 >> 0xb) * (uint)uVar9;
        if (uVar23 < uVar48) {
          sVar12 = (short)(0x800 - uVar9 >> 5);
        }
        else {
          sVar12 = -(uVar9 >> 5);
          uVar23 = uVar23 - uVar48;
          uVar21 = (ulong)((int)uVar21 + 1);
          uVar20 = uVar20 | 2;
          uVar48 = uVar46 - uVar48;
        }
        *(ushort *)(lVar2 + lVar36) = uVar9 + sVar12;
        uVar9 = *(ushort *)(lVar2 + uVar21 * 2);
        if (uVar48 < 0x1000000) {
          bVar8 = *pbVar25;
          uVar48 = uVar48 << 8;
          pbVar25 = pbVar25 + 1;
          uVar23 = (uint)bVar8 | uVar23 << 8;
        }
        uVar46 = (int)uVar21 * 2;
        uVar44 = (uVar48 >> 0xb) * (uint)uVar9;
        if (uVar23 < uVar44) {
          sVar12 = (short)(0x800 - uVar9 >> 5);
        }
        else {
          sVar12 = -(uVar9 >> 5);
          uVar23 = uVar23 - uVar44;
          uVar46 = uVar46 + 1;
          uVar20 = uVar20 | 4;
          uVar44 = uVar48 - uVar44;
        }
        lVar36 = (ulong)uVar46 * 2;
        *(ushort *)(lVar2 + uVar21 * 2) = uVar9 + sVar12;
        uVar9 = *(ushort *)(lVar2 + lVar36);
        pbVar24 = pbVar25;
        if (uVar44 < 0x1000000) {
          pbVar24 = pbVar25 + 1;
          uVar44 = uVar44 << 8;
          uVar23 = (uint)*pbVar25 | uVar23 << 8;
        }
        uVar46 = (uVar44 >> 0xb) * (uint)uVar9;
        if (uVar23 < uVar46) {
          uVar21 = (ulong)uVar46;
          *(ushort *)(lVar2 + lVar36) = uVar9 + (short)(0x800 - uVar9 >> 5);
          goto LAB_001b0120;
        }
        uVar20 = uVar20 | 8;
        *(ushort *)(lVar2 + lVar36) = uVar9 - (uVar9 >> 5);
        uVar44 = uVar44 - uVar46;
        uVar21 = (ulong)uVar44;
        uVar23 = uVar23 - uVar46;
        if (uVar20 == 0xffffffff) {
          uVar20 = uVar17 + 0x112;
          iVar18 = uVar16 - 0xc;
          goto LAB_001afdbc;
        }
        goto LAB_001b0120;
      }
      uVar44 = (uVar20 >> 1) - 1;
      uVar39 = (ulong)uVar20;
      uVar48 = uVar44 & 0x1f;
      uVar30 = 1;
      uVar29 = 1;
      uVar20 = uVar46 << (ulong)(uVar44 & 0x1f);
      pbVar26 = pbVar24;
      do {
        while( true ) {
          lVar36 = ((0x2b0 - uVar39) + (ulong)(uVar46 << (ulong)uVar48)) * 2 + -2 + uVar30 * 2;
          uVar9 = *(ushort *)(lVar38 + lVar36);
          uVar4 = (int)uVar30 * 2;
          uVar30 = (ulong)uVar4;
          pbVar24 = pbVar26;
          if ((uint)uVar21 < 0x1000000) {
            pbVar24 = pbVar26 + 1;
            uVar21 = (ulong)((uint)uVar21 << 8);
            uVar23 = (uint)*pbVar26 | uVar23 << 8;
          }
          uVar10 = (int)(uVar21 >> 0xb) * (uint)uVar9;
          pbVar26 = pbVar24;
          if (uVar10 <= uVar23) break;
          *(ushort *)(lVar38 + lVar36) = uVar9 + (short)(0x800 - uVar9 >> 5);
          uVar29 = uVar29 * 2;
          uVar21 = (ulong)uVar10;
          uVar44 = uVar44 - 1;
          if (uVar44 == 0) goto LAB_001b0120;
        }
        *(ushort *)(lVar38 + lVar36) = uVar9 - (uVar9 >> 5);
        uVar20 = uVar20 | uVar29;
        uVar21 = (ulong)((int)uVar21 - uVar10);
        uVar23 = uVar23 - uVar10;
        uVar30 = (ulong)(uVar4 + 1);
        uVar29 = uVar29 * 2;
        uVar44 = uVar44 - 1;
      } while (uVar44 != 0);
      uVar44 = uVar20 + 1;
      if (uVar7 != 0) goto LAB_001b0388;
LAB_001b0128:
      if (uVar42 <= uVar20) {
        return 1;
      }
    }
    uVar46 = uVar43;
    uVar48 = uVar47;
    local_18 = uVar49;
    if (uVar16 < 0x13) {
      uVar39 = 7;
    }
    else {
      uVar39 = 10;
    }
  }
  uVar17 = uVar17 + 2;
  if (uVar32 == param_2) {
    return 1;
  }
  uVar30 = param_2 - uVar32;
  uVar31 = (ulong)uVar17;
  uVar20 = 0;
  uVar16 = uVar17;
  if (uVar30 < uVar17) {
    uVar16 = (uint)uVar30;
    uVar20 = uVar17 - uVar16;
    uVar31 = uVar30 & 0xffffffff;
  }
  uVar42 = uVar42 + uVar16;
  lVar37 = uVar32 - uVar44;
  lVar36 = lVar37 + uVar41;
  if (uVar44 <= uVar32) {
    lVar36 = lVar37;
  }
  uVar43 = uVar44;
  if (uVar41 < uVar31 + lVar36) {
    *(undefined *)(lVar40 + uVar32) = *(undefined *)(lVar40 + lVar36);
    uVar30 = lVar36 + 1;
    uVar32 = uVar32 + 1;
    uVar31 = uVar32 + (uVar16 - 1);
    if (uVar41 == uVar30) goto LAB_001b0454;
    while (uVar33 = uVar32, uVar31 != uVar32) {
      while( true ) {
        uVar32 = uVar33 + 1;
        *(undefined *)(lVar40 + uVar33) = *(undefined *)(lVar40 + uVar30);
        uVar30 = uVar30 + 1;
        if (uVar41 != uVar30) break;
LAB_001b0454:
        uVar30 = 0;
        uVar33 = uVar32;
        if (uVar32 == uVar31) goto LAB_001afc3c;
      }
    }
  }
  else {
    bVar1 = lVar36 < (long)(uVar32 + 0x10);
    bVar15 = false;
    if (bVar1) {
      bVar15 = (long)(uVar32 - (lVar36 + 0x10)) < 0;
    }
    puVar28 = (undefined *)(lVar40 + uVar32);
    bVar1 = bVar15 != (bVar1 && SBORROW8(uVar32,lVar36 + 0x10));
    lVar37 = lVar36 - uVar32;
    puVar3 = puVar28 + uVar31;
    uVar32 = uVar32 + uVar31;
    if ((bVar1 || uVar31 - 1 < 0xe) || !bVar1 && uVar31 - 1 == 0xe) {
      do {
        puVar27 = puVar28 + 1;
        *puVar28 = puVar28[lVar37];
        if (puVar3 == puVar27) break;
        puVar28 = puVar28 + 2;
        *puVar27 = puVar27[lVar37];
      } while (puVar3 != puVar28);
    }
    else {
      uVar30 = 0;
      do {
        puVar14 = (undefined8 *)(lVar40 + lVar36 + uVar30);
        uVar45 = *puVar14;
        *(undefined8 *)((long)(puVar28 + uVar30) + 8) = puVar14[1];
        *(undefined8 *)(puVar28 + uVar30) = uVar45;
        uVar30 = uVar30 + 0x10;
      } while (uVar30 != (uVar31 & 0xfffffff0));
      uVar30 = uVar31 & 0xfffffffffffffff0;
      if (uVar31 != uVar30) {
        puVar28[uVar30] = puVar28[lVar37 + uVar30];
        if (puVar3 != puVar28 + uVar30 + 1) {
          puVar28[uVar30 + 1] = (puVar28 + uVar30 + 1)[lVar37];
          if (puVar3 != puVar28 + uVar30 + 2) {
            puVar28[uVar30 + 2] = (puVar28 + uVar30 + 2)[lVar37];
            if (puVar3 != puVar28 + uVar30 + 3) {
              puVar28[uVar30 + 3] = (puVar28 + uVar30 + 3)[lVar37];
              if (puVar28 + uVar30 + 4 != puVar3) {
                puVar28[uVar30 + 4] = (puVar28 + uVar30 + 4)[lVar37];
                if (puVar28 + uVar30 + 5 != puVar3) {
                  puVar28[uVar30 + 5] = (puVar28 + uVar30 + 5)[lVar37];
                  if (puVar3 != puVar28 + uVar30 + 6) {
                    puVar28[uVar30 + 6] = (puVar28 + uVar30 + 6)[lVar37];
                    if (puVar3 != puVar28 + uVar30 + 7) {
                      puVar28[uVar30 + 7] = (puVar28 + uVar30 + 7)[lVar37];
                      if (puVar3 != puVar28 + uVar30 + 8) {
                        puVar28[uVar30 + 8] = (puVar28 + uVar30 + 8)[lVar37];
                        if (puVar3 != puVar28 + uVar30 + 9) {
                          puVar28[uVar30 + 9] = (puVar28 + uVar30 + 9)[lVar37];
                          if (puVar3 != puVar28 + uVar30 + 10) {
                            puVar28[uVar30 + 10] = (puVar28 + uVar30 + 10)[lVar37];
                            if (puVar3 != puVar28 + uVar30 + 0xb) {
                              puVar28[uVar30 + 0xb] = (puVar28 + uVar30 + 0xb)[lVar37];
                              if (puVar3 != puVar28 + uVar30 + 0xc) {
                                puVar28[uVar30 + 0xc] = (puVar28 + uVar30 + 0xc)[lVar37];
                                if (puVar3 != puVar28 + uVar30 + 0xd) {
                                  puVar28[uVar30 + 0xd] = (puVar28 + uVar30 + 0xd)[lVar37];
                                  if (puVar3 != puVar28 + uVar30 + 0xe) {
                                    puVar28[uVar30 + 0xe] = (puVar28 + uVar30 + 0xe)[lVar37];
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_001afc3c:
  uVar44 = (uint)uVar21;
  uVar47 = uVar46;
  uVar49 = uVar48;
  if (param_2 <= uVar32 || param_3 <= pbVar24) {
LAB_001afdb4:
    iVar18 = (int)uVar39;
LAB_001afdbc:
    pbVar26 = pbVar24;
    if (uVar44 < 0x1000000) {
      pbVar26 = pbVar24 + 1;
      uVar44 = uVar44 << 8;
      uVar23 = (uint)*pbVar24 | uVar23 << 8;
    }
    *(byte **)(param_1 + 8) = pbVar26;
    param_1[10] = uVar44;
    param_1[0xb] = uVar23;
    *(ulong *)(param_1 + 0xc) = uVar32;
    param_1[0x10] = uVar42;
    param_1[0x16] = local_18;
    param_1[0x17] = uVar20;
    *(ulong *)(param_1 + 0x14) = CONCAT44(uVar49,uVar47);
    *(ulong *)(param_1 + 0x12) = CONCAT44(uVar43,iVar18);
    return 0;
  }
  goto LAB_001afc48;
}


