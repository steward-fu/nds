/*
 * Ghidra decompilation
 *
 * Function : texture_cache_convert_2bpp
 * Address  : 00167e40
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void texture_cache_convert_2bpp(byte *param_1,undefined8 *param_2,ulong param_3)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  byte bVar9;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  undefined8 uVar10;
  byte bVar17;
  byte bVar18;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  undefined8 uVar19;
  byte bVar26;
  
  lVar2 = ___stack_chk_guard;
  puVar7 = (undefined8 *)&__stack_chk_guard;
  uVar8 = 0;
  uVar6 = (uint)param_3;
  if (uVar6 != 0) {
    bVar3 = param_1 + (param_3 & 0xffffffff) * 4 <= param_2;
    pbVar4 = (byte *)((long)param_2 + (param_3 & 0xffffffff));
    uVar1 = uVar6 - 1;
    if (((!bVar3 && param_1 <= pbVar4) && (bVar3 || pbVar4 != param_1) || uVar1 < 0xe) ||
        ((bVar3 || param_1 > pbVar4) || !bVar3 && pbVar4 == param_1) && uVar1 == 0xe) {
      puVar7 = (undefined8 *)((long)param_2 + (ulong)uVar1 + 1);
      do {
        puVar5 = (undefined8 *)((long)param_2 + 1);
        bVar9 = *(byte *)param_2;
        uVar8 = (ulong)(bVar9 >> 4) & 3;
        param_3 = (ulong)(bVar9 >> 6);
        *param_1 = bVar9 & 3;
        param_1[1] = bVar9 >> 2 & 3;
        param_1[2] = (byte)uVar8;
        param_1[3] = bVar9 >> 6;
        param_1 = param_1 + 4;
        param_2 = puVar5;
      } while (puVar7 != puVar5);
    }
    else {
      puVar7 = param_2;
      pbVar4 = param_1;
      do {
        puVar5 = puVar7 + 2;
        uVar19 = puVar7[1];
        uVar10 = *puVar7;
        bVar9 = (byte)uVar10;
        bVar11 = (byte)((ulong)uVar10 >> 8);
        bVar12 = (byte)((ulong)uVar10 >> 0x10);
        bVar13 = (byte)((ulong)uVar10 >> 0x18);
        bVar14 = (byte)((ulong)uVar10 >> 0x20);
        bVar15 = (byte)((ulong)uVar10 >> 0x28);
        bVar16 = (byte)((ulong)uVar10 >> 0x30);
        bVar17 = (byte)((ulong)uVar10 >> 0x38);
        bVar18 = (byte)uVar19;
        bVar20 = (byte)((ulong)uVar19 >> 8);
        bVar21 = (byte)((ulong)uVar19 >> 0x10);
        bVar22 = (byte)((ulong)uVar19 >> 0x18);
        bVar23 = (byte)((ulong)uVar19 >> 0x20);
        bVar24 = (byte)((ulong)uVar19 >> 0x28);
        bVar25 = (byte)((ulong)uVar19 >> 0x30);
        bVar26 = (byte)((ulong)uVar19 >> 0x38);
        *pbVar4 = bVar9 & 3;
        pbVar4[1] = bVar9 >> 2 & 3;
        pbVar4[2] = bVar9 >> 4 & 3;
        pbVar4[3] = bVar9 >> 6;
        pbVar4[4] = bVar11 & 3;
        pbVar4[5] = bVar11 >> 2 & 3;
        pbVar4[6] = bVar11 >> 4 & 3;
        pbVar4[7] = bVar11 >> 6;
        pbVar4[8] = bVar12 & 3;
        pbVar4[9] = bVar12 >> 2 & 3;
        pbVar4[10] = bVar12 >> 4 & 3;
        pbVar4[0xb] = bVar12 >> 6;
        pbVar4[0xc] = bVar13 & 3;
        pbVar4[0xd] = bVar13 >> 2 & 3;
        pbVar4[0xe] = bVar13 >> 4 & 3;
        pbVar4[0xf] = bVar13 >> 6;
        pbVar4[0x10] = bVar14 & 3;
        pbVar4[0x11] = bVar14 >> 2 & 3;
        pbVar4[0x12] = bVar14 >> 4 & 3;
        pbVar4[0x13] = bVar14 >> 6;
        pbVar4[0x14] = bVar15 & 3;
        pbVar4[0x15] = bVar15 >> 2 & 3;
        pbVar4[0x16] = bVar15 >> 4 & 3;
        pbVar4[0x17] = bVar15 >> 6;
        pbVar4[0x18] = bVar16 & 3;
        pbVar4[0x19] = bVar16 >> 2 & 3;
        pbVar4[0x1a] = bVar16 >> 4 & 3;
        pbVar4[0x1b] = bVar16 >> 6;
        pbVar4[0x1c] = bVar17 & 3;
        pbVar4[0x1d] = bVar17 >> 2 & 3;
        pbVar4[0x1e] = bVar17 >> 4 & 3;
        pbVar4[0x1f] = bVar17 >> 6;
        pbVar4[0x20] = bVar18 & 3;
        pbVar4[0x21] = bVar18 >> 2 & 3;
        pbVar4[0x22] = bVar18 >> 4 & 3;
        pbVar4[0x23] = bVar18 >> 6;
        pbVar4[0x24] = bVar20 & 3;
        pbVar4[0x25] = bVar20 >> 2 & 3;
        pbVar4[0x26] = bVar20 >> 4 & 3;
        pbVar4[0x27] = bVar20 >> 6;
        pbVar4[0x28] = bVar21 & 3;
        pbVar4[0x29] = bVar21 >> 2 & 3;
        pbVar4[0x2a] = bVar21 >> 4 & 3;
        pbVar4[0x2b] = bVar21 >> 6;
        pbVar4[0x2c] = bVar22 & 3;
        pbVar4[0x2d] = bVar22 >> 2 & 3;
        pbVar4[0x2e] = bVar22 >> 4 & 3;
        pbVar4[0x2f] = bVar22 >> 6;
        pbVar4[0x30] = bVar23 & 3;
        pbVar4[0x31] = bVar23 >> 2 & 3;
        pbVar4[0x32] = bVar23 >> 4 & 3;
        pbVar4[0x33] = bVar23 >> 6;
        pbVar4[0x34] = bVar24 & 3;
        pbVar4[0x35] = bVar24 >> 2 & 3;
        pbVar4[0x36] = bVar24 >> 4 & 3;
        pbVar4[0x37] = bVar24 >> 6;
        pbVar4[0x38] = bVar25 & 3;
        pbVar4[0x39] = bVar25 >> 2 & 3;
        pbVar4[0x3a] = bVar25 >> 4 & 3;
        pbVar4[0x3b] = bVar25 >> 6;
        pbVar4[0x3c] = bVar26 & 3;
        pbVar4[0x3d] = bVar26 >> 2 & 3;
        pbVar4[0x3e] = bVar26 >> 4 & 3;
        pbVar4[0x3f] = bVar26 >> 6;
        pbVar4 = pbVar4 + 0x40;
        puVar7 = puVar5;
      } while (param_2 + (ulong)((uVar6 >> 4) - 1) * 2 + 2 != puVar5);
      uVar8 = (param_3 & 0xfffffff0) * 4;
      puVar7 = (undefined8 *)(param_1 + uVar8);
      uVar1 = uVar6 & 0xfffffff0;
      if ((param_3 & 0xf) != 0) {
        bVar9 = *(byte *)((long)param_2 + (ulong)uVar1);
        param_1[uVar8] = bVar9 & 3;
        uVar8 = (ulong)(bVar9 >> 2) & 3;
        *(byte *)((long)puVar7 + 1) = (byte)uVar8;
        *(byte *)((long)puVar7 + 2) = bVar9 >> 4 & 3;
        *(byte *)((long)puVar7 + 3) = bVar9 >> 6;
        if (uVar1 + 1 < uVar6) {
          bVar9 = *(byte *)((long)param_2 + (ulong)(uVar1 + 1));
          uVar8 = (ulong)(bVar9 >> 6);
          *(byte *)((long)puVar7 + 4) = bVar9 & 3;
          *(byte *)((long)puVar7 + 5) = bVar9 >> 2 & 3;
          *(byte *)((long)puVar7 + 6) = bVar9 >> 4 & 3;
          *(byte *)((long)puVar7 + 7) = bVar9 >> 6;
          if (uVar1 + 2 < uVar6) {
            bVar9 = *(byte *)((long)param_2 + (ulong)(uVar1 + 2));
            uVar8 = (ulong)(bVar9 >> 6);
            *(byte *)(puVar7 + 1) = bVar9 & 3;
            *(byte *)((long)puVar7 + 9) = bVar9 >> 2 & 3;
            *(byte *)((long)puVar7 + 10) = bVar9 >> 4 & 3;
            *(byte *)((long)puVar7 + 0xb) = bVar9 >> 6;
            if (uVar1 + 3 < uVar6) {
              bVar9 = *(byte *)((long)param_2 + (ulong)(uVar1 + 3));
              uVar8 = (ulong)(bVar9 >> 6);
              *(byte *)((long)puVar7 + 0xc) = bVar9 & 3;
              *(byte *)((long)puVar7 + 0xd) = bVar9 >> 2 & 3;
              *(byte *)((long)puVar7 + 0xe) = bVar9 >> 4 & 3;
              *(byte *)((long)puVar7 + 0xf) = bVar9 >> 6;
              if (uVar1 + 4 < uVar6) {
                bVar9 = *(byte *)((long)param_2 + (ulong)(uVar1 + 4));
                uVar8 = (ulong)(bVar9 >> 6);
                *(byte *)(puVar7 + 2) = bVar9 & 3;
                *(byte *)((long)puVar7 + 0x11) = bVar9 >> 2 & 3;
                *(byte *)((long)puVar7 + 0x12) = bVar9 >> 4 & 3;
                *(byte *)((long)puVar7 + 0x13) = bVar9 >> 6;
                if (uVar1 + 5 < uVar6) {
                  bVar9 = *(byte *)((long)param_2 + (ulong)(uVar1 + 5));
                  uVar8 = (ulong)(bVar9 >> 6);
                  *(byte *)((long)puVar7 + 0x14) = bVar9 & 3;
                  *(byte *)((long)puVar7 + 0x15) = bVar9 >> 2 & 3;
                  *(byte *)((long)puVar7 + 0x16) = bVar9 >> 4 & 3;
                  *(byte *)((long)puVar7 + 0x17) = bVar9 >> 6;
                  if (uVar1 + 6 < uVar6) {
                    bVar9 = *(byte *)((long)param_2 + (ulong)(uVar1 + 6));
                    uVar8 = (ulong)(bVar9 >> 6);
                    *(byte *)(puVar7 + 3) = bVar9 & 3;
                    *(byte *)((long)puVar7 + 0x19) = bVar9 >> 2 & 3;
                    *(byte *)((long)puVar7 + 0x1a) = bVar9 >> 4 & 3;
                    *(byte *)((long)puVar7 + 0x1b) = bVar9 >> 6;
                    if (uVar1 + 7 < uVar6) {
                      bVar9 = *(byte *)((long)param_2 + (ulong)(uVar1 + 7));
                      uVar8 = (ulong)(bVar9 >> 6);
                      *(byte *)((long)puVar7 + 0x1c) = bVar9 & 3;
                      *(byte *)((long)puVar7 + 0x1d) = bVar9 >> 2 & 3;
                      *(byte *)((long)puVar7 + 0x1e) = bVar9 >> 4 & 3;
                      *(byte *)((long)puVar7 + 0x1f) = bVar9 >> 6;
                      if (uVar1 + 8 < uVar6) {
                        bVar9 = *(byte *)((long)param_2 + (ulong)(uVar1 + 8));
                        uVar8 = (ulong)(uVar1 + 9);
                        *(byte *)(puVar7 + 4) = bVar9 & 3;
                        *(byte *)((long)puVar7 + 0x21) = bVar9 >> 2 & 3;
                        *(byte *)((long)puVar7 + 0x22) = bVar9 >> 4 & 3;
                        *(byte *)((long)puVar7 + 0x23) = bVar9 >> 6;
                        if (uVar1 + 9 < uVar6) {
                          bVar9 = *(byte *)((long)param_2 + uVar8);
                          uVar8 = (ulong)(uVar1 + 10);
                          *(byte *)((long)puVar7 + 0x24) = bVar9 & 3;
                          *(byte *)((long)puVar7 + 0x25) = bVar9 >> 2 & 3;
                          *(byte *)((long)puVar7 + 0x26) = bVar9 >> 4 & 3;
                          *(byte *)((long)puVar7 + 0x27) = bVar9 >> 6;
                          if (uVar1 + 10 < uVar6) {
                            bVar9 = *(byte *)((long)param_2 + uVar8);
                            uVar8 = (ulong)(uVar1 + 0xb);
                            *(byte *)(puVar7 + 5) = bVar9 & 3;
                            *(byte *)((long)puVar7 + 0x29) = bVar9 >> 2 & 3;
                            *(byte *)((long)puVar7 + 0x2a) = bVar9 >> 4 & 3;
                            *(byte *)((long)puVar7 + 0x2b) = bVar9 >> 6;
                            if (uVar1 + 0xb < uVar6) {
                              bVar9 = *(byte *)((long)param_2 + uVar8);
                              uVar8 = (ulong)(uVar1 + 0xc);
                              *(byte *)((long)puVar7 + 0x2c) = bVar9 & 3;
                              *(byte *)((long)puVar7 + 0x2d) = bVar9 >> 2 & 3;
                              *(byte *)((long)puVar7 + 0x2e) = bVar9 >> 4 & 3;
                              *(byte *)((long)puVar7 + 0x2f) = bVar9 >> 6;
                              if (uVar1 + 0xc < uVar6) {
                                bVar9 = *(byte *)((long)param_2 + uVar8);
                                uVar8 = (ulong)(uVar1 + 0xd);
                                *(byte *)(puVar7 + 6) = bVar9 & 3;
                                *(byte *)((long)puVar7 + 0x31) = bVar9 >> 2 & 3;
                                *(byte *)((long)puVar7 + 0x32) = bVar9 >> 4 & 3;
                                *(byte *)((long)puVar7 + 0x33) = bVar9 >> 6;
                                if (uVar1 + 0xd < uVar6) {
                                  bVar9 = *(byte *)((long)param_2 + uVar8);
                                  uVar8 = (ulong)(bVar9 >> 6);
                                  *(byte *)((long)puVar7 + 0x34) = bVar9 & 3;
                                  *(byte *)((long)puVar7 + 0x35) = bVar9 >> 2 & 3;
                                  *(byte *)((long)puVar7 + 0x36) = bVar9 >> 4 & 3;
                                  *(byte *)((long)puVar7 + 0x37) = bVar9 >> 6;
                                  if (uVar1 + 0xe < uVar6) {
                                    bVar9 = *(byte *)((long)param_2 + (ulong)(uVar1 + 0xe));
                                    uVar8 = (ulong)(bVar9 & 3);
                                    param_3 = (ulong)(bVar9 >> 2) & 3;
                                    *(byte *)(puVar7 + 7) = (byte)(bVar9 & 3);
                                    *(byte *)((long)puVar7 + 0x39) = (byte)param_3;
                                    *(byte *)((long)puVar7 + 0x3a) = bVar9 >> 4 & 3;
                                    *(byte *)((long)puVar7 + 0x3b) = bVar9 >> 6;
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
  if (lVar2 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar2 - ___stack_chk_guard,0,param_3,puVar7,uVar8);
}


