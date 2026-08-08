/*
 * Ghidra decompilation
 *
 * Function : texture_cache_convert_4bpp_c
 * Address  : 00168200
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void texture_cache_convert_4bpp_c(byte *param_1,undefined8 *param_2,ulong param_3)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  undefined8 uVar10;
  byte bVar17;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  undefined8 uVar18;
  byte bVar25;
  
  lVar4 = ___stack_chk_guard;
  puVar8 = (undefined8 *)&__stack_chk_guard;
  uVar9 = 0;
  uVar7 = (uint)param_3;
  if (uVar7 != 0) {
    bVar2 = param_1 < (byte *)((long)param_2 + (param_3 & 0xffffffff));
    uVar1 = uVar7 - 1;
    if ((param_2 < param_1 + (param_3 & 0xffffffff) * 2 && bVar2 || uVar1 < 0xe) ||
        (param_2 >= param_1 + (param_3 & 0xffffffff) * 2 || !bVar2) && uVar1 == 0xe) {
      puVar8 = (undefined8 *)((long)param_2 + (ulong)uVar1 + 1);
      do {
        puVar6 = (undefined8 *)((long)param_2 + 1);
        uVar7 = *(byte *)param_2 & 0xf;
        uVar9 = (ulong)uVar7;
        bVar11 = *(byte *)param_2 >> 4;
        param_3 = (ulong)bVar11;
        *param_1 = (byte)uVar7;
        param_1[1] = bVar11;
        param_1 = param_1 + 2;
        param_2 = puVar6;
      } while (puVar8 != puVar6);
    }
    else {
      puVar8 = param_2;
      pbVar5 = param_1;
      do {
        puVar6 = puVar8 + 2;
        uVar18 = puVar8[1];
        uVar10 = *puVar8;
        bVar11 = (byte)((ulong)uVar10 >> 8);
        bVar12 = (byte)((ulong)uVar10 >> 0x10);
        bVar13 = (byte)((ulong)uVar10 >> 0x18);
        bVar14 = (byte)((ulong)uVar10 >> 0x20);
        bVar15 = (byte)((ulong)uVar10 >> 0x28);
        bVar16 = (byte)((ulong)uVar10 >> 0x30);
        bVar17 = (byte)((ulong)uVar10 >> 0x38);
        bVar19 = (byte)((ulong)uVar18 >> 8);
        bVar20 = (byte)((ulong)uVar18 >> 0x10);
        bVar21 = (byte)((ulong)uVar18 >> 0x18);
        bVar22 = (byte)((ulong)uVar18 >> 0x20);
        bVar23 = (byte)((ulong)uVar18 >> 0x28);
        bVar24 = (byte)((ulong)uVar18 >> 0x30);
        bVar25 = (byte)((ulong)uVar18 >> 0x38);
        *pbVar5 = (byte)uVar10 & 0xf;
        pbVar5[1] = (byte)uVar10 >> 4;
        pbVar5[2] = bVar11 & 0xf;
        pbVar5[3] = bVar11 >> 4;
        pbVar5[4] = bVar12 & 0xf;
        pbVar5[5] = bVar12 >> 4;
        pbVar5[6] = bVar13 & 0xf;
        pbVar5[7] = bVar13 >> 4;
        pbVar5[8] = bVar14 & 0xf;
        pbVar5[9] = bVar14 >> 4;
        pbVar5[10] = bVar15 & 0xf;
        pbVar5[0xb] = bVar15 >> 4;
        pbVar5[0xc] = bVar16 & 0xf;
        pbVar5[0xd] = bVar16 >> 4;
        pbVar5[0xe] = bVar17 & 0xf;
        pbVar5[0xf] = bVar17 >> 4;
        pbVar5[0x10] = (byte)uVar18 & 0xf;
        pbVar5[0x11] = (byte)uVar18 >> 4;
        pbVar5[0x12] = bVar19 & 0xf;
        pbVar5[0x13] = bVar19 >> 4;
        pbVar5[0x14] = bVar20 & 0xf;
        pbVar5[0x15] = bVar20 >> 4;
        pbVar5[0x16] = bVar21 & 0xf;
        pbVar5[0x17] = bVar21 >> 4;
        pbVar5[0x18] = bVar22 & 0xf;
        pbVar5[0x19] = bVar22 >> 4;
        pbVar5[0x1a] = bVar23 & 0xf;
        pbVar5[0x1b] = bVar23 >> 4;
        pbVar5[0x1c] = bVar24 & 0xf;
        pbVar5[0x1d] = bVar24 >> 4;
        pbVar5[0x1e] = bVar25 & 0xf;
        pbVar5[0x1f] = bVar25 >> 4;
        pbVar5 = pbVar5 + 0x20;
        puVar8 = puVar6;
      } while (param_2 + (ulong)((uVar7 >> 4) - 1) * 2 + 2 != puVar6);
      lVar3 = (param_3 & 0xfffffff0) * 2;
      puVar8 = (undefined8 *)(param_1 + lVar3);
      uVar1 = uVar7 & 0xfffffff0;
      uVar9 = (ulong)uVar1;
      if ((param_3 & 0xf) != 0) {
        bVar11 = *(byte *)((long)param_2 + uVar9);
        param_1[lVar3] = bVar11 & 0xf;
        *(byte *)((long)puVar8 + 1) = bVar11 >> 4;
        if (uVar1 + 1 < uVar7) {
          bVar11 = *(byte *)((long)param_2 + (ulong)(uVar1 + 1));
          *(byte *)((long)puVar8 + 2) = bVar11 & 0xf;
          *(byte *)((long)puVar8 + 3) = bVar11 >> 4;
          if (uVar1 + 2 < uVar7) {
            bVar11 = *(byte *)((long)param_2 + (ulong)(uVar1 + 2));
            *(byte *)((long)puVar8 + 4) = bVar11 & 0xf;
            *(byte *)((long)puVar8 + 5) = bVar11 >> 4;
            if (uVar1 + 3 < uVar7) {
              bVar11 = *(byte *)((long)param_2 + (ulong)(uVar1 + 3));
              *(byte *)((long)puVar8 + 6) = bVar11 & 0xf;
              *(byte *)((long)puVar8 + 7) = bVar11 >> 4;
              if (uVar1 + 4 < uVar7) {
                bVar11 = *(byte *)((long)param_2 + (ulong)(uVar1 + 4));
                *(byte *)(puVar8 + 1) = bVar11 & 0xf;
                *(byte *)((long)puVar8 + 9) = bVar11 >> 4;
                if (uVar1 + 5 < uVar7) {
                  bVar11 = *(byte *)((long)param_2 + (ulong)(uVar1 + 5));
                  *(byte *)((long)puVar8 + 10) = bVar11 & 0xf;
                  *(byte *)((long)puVar8 + 0xb) = bVar11 >> 4;
                  if (uVar1 + 6 < uVar7) {
                    bVar11 = *(byte *)((long)param_2 + (ulong)(uVar1 + 6));
                    *(byte *)((long)puVar8 + 0xc) = bVar11 & 0xf;
                    *(byte *)((long)puVar8 + 0xd) = bVar11 >> 4;
                    if (uVar1 + 7 < uVar7) {
                      bVar11 = *(byte *)((long)param_2 + (ulong)(uVar1 + 7));
                      *(byte *)((long)puVar8 + 0xe) = bVar11 & 0xf;
                      *(byte *)((long)puVar8 + 0xf) = bVar11 >> 4;
                      if (uVar1 + 8 < uVar7) {
                        bVar11 = *(byte *)((long)param_2 + (ulong)(uVar1 + 8));
                        *(byte *)(puVar8 + 2) = bVar11 & 0xf;
                        *(byte *)((long)puVar8 + 0x11) = bVar11 >> 4;
                        if (uVar1 + 9 < uVar7) {
                          bVar11 = *(byte *)((long)param_2 + (ulong)(uVar1 + 9));
                          *(byte *)((long)puVar8 + 0x12) = bVar11 & 0xf;
                          *(byte *)((long)puVar8 + 0x13) = bVar11 >> 4;
                          if (uVar1 + 10 < uVar7) {
                            bVar11 = *(byte *)((long)param_2 + (ulong)(uVar1 + 10));
                            *(byte *)((long)puVar8 + 0x14) = bVar11 & 0xf;
                            *(byte *)((long)puVar8 + 0x15) = bVar11 >> 4;
                            if (uVar1 + 0xb < uVar7) {
                              bVar11 = *(byte *)((long)param_2 + (ulong)(uVar1 + 0xb));
                              *(byte *)((long)puVar8 + 0x16) = bVar11 & 0xf;
                              *(byte *)((long)puVar8 + 0x17) = bVar11 >> 4;
                              if (uVar1 + 0xc < uVar7) {
                                bVar11 = *(byte *)((long)param_2 + (ulong)(uVar1 + 0xc));
                                *(byte *)(puVar8 + 3) = bVar11 & 0xf;
                                *(byte *)((long)puVar8 + 0x19) = bVar11 >> 4;
                                if (uVar1 + 0xd < uVar7) {
                                  bVar11 = *(byte *)((long)param_2 + (ulong)(uVar1 + 0xd));
                                  uVar9 = (ulong)(uVar1 + 0xe);
                                  *(byte *)((long)puVar8 + 0x1a) = bVar11 & 0xf;
                                  *(byte *)((long)puVar8 + 0x1b) = bVar11 >> 4;
                                  if (uVar1 + 0xe < uVar7) {
                                    bVar11 = *(byte *)((long)param_2 + uVar9);
                                    *(byte *)((long)puVar8 + 0x1c) = bVar11 & 0xf;
                                    *(byte *)((long)puVar8 + 0x1d) = bVar11 >> 4;
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
  if (lVar4 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar4 - ___stack_chk_guard,0,param_3,puVar8,uVar9);
}


