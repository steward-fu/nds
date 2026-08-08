/*
 * Ghidra decompilation
 *
 * Function : texture_cache_convert_split
 * Address  : 00169e90
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void texture_cache_convert_split
               (long *param_1,long param_2,undefined8 *param_3,uint param_4,ushort *param_5,
               uint param_6,uint param_7,ulong param_8,int param_9)

{
  undefined8 *puVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  undefined8 *puVar10;
  long lVar12;
  ulong *puVar13;
  size_t sVar14;
  int *piVar15;
  uint *puVar16;
  int iVar17;
  ulong uVar18;
  undefined8 *puVar19;
  ulong uVar20;
  long lVar21;
  ushort uVar22;
  ushort uVar23;
  uint3 uVar24;
  uint uVar25;
  uint6 uVar26;
  undefined uVar29;
  undefined uVar34;
  uint7 uVar27;
  undefined uVar30;
  uint uVar31;
  uint uVar32;
  undefined8 uVar28;
  int iVar33;
  uint3 uVar35;
  uint6 uVar36;
  uint7 uVar37;
  uint uVar39;
  uint uVar40;
  undefined8 uVar38;
  int iVar41;
  undefined uVar42;
  byte bVar43;
  undefined uVar44;
  byte bVar45;
  undefined uVar46;
  byte bVar47;
  undefined uVar48;
  undefined uVar49;
  undefined uVar51;
  uint uVar50;
  undefined uVar52;
  undefined uVar57;
  uint uVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  undefined uVar59;
  uint uVar58;
  undefined uVar60;
  undefined uVar65;
  uint uVar61;
  uint uVar62;
  uint uVar63;
  uint uVar64;
  byte bVar66;
  byte bVar67;
  undefined uVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  undefined uVar80;
  undefined8 *puVar11;
  
  lVar12 = ___stack_chk_guard;
  uVar20 = (ulong)param_7;
  uVar18 = (ulong)param_4;
  uVar25 = (uint)param_8;
  lVar21 = *(long *)(*param_1 + (ulong)param_6 * 8 + 0x2180);
  if (param_7 + param_4 < 0x20000) {
    if (lVar21 == 0) goto LAB_0016a71c;
LAB_00169f00:
    puVar1 = (undefined8 *)(lVar21 + uVar20);
    uVar53 = (uint)uVar18;
    if (uVar25 == 4) {
      puVar16 = *(uint **)(param_2 + 0x18);
      *(undefined *)(param_2 + 0x4a) = 1;
      if (puVar16 == (uint *)0x0) {
        puVar16 = (uint *)malloc(0x400);
        *(uint **)(param_2 + 0x18) = puVar16;
      }
      uVar22 = *param_5;
      uVar25 = (uVar22 >> 5 & 0x1f) << 8 | (uVar22 >> 10 & 0x1f) << 0x10 | uVar22 & 0x1f;
      uVar25 = (uVar25 + 0x1f1f1f >> 5 & 0x10101) + uVar25 * 2;
      if (param_9 == 0) {
        uVar25 = uVar25 | 0x1f000000;
      }
      puVar13 = (ulong *)(puVar16 + 1);
      *puVar16 = uVar25;
      puVar10 = (undefined8 *)(param_5 + 1);
      do {
        puVar19 = puVar10 + 2;
        uVar38 = puVar10[1];
        uVar28 = *puVar10;
        uVar22 = (ushort)((ulong)uVar38 >> 0x10);
        uVar23 = (ushort)((ulong)uVar38 >> 0x30);
        uVar29 = (undefined)((ulong)uVar28 >> 0x20);
        uVar30 = (undefined)((ulong)uVar28 >> 0x30);
        uVar34 = (undefined)((ushort)uVar28 >> 5);
        uVar42 = (undefined)((ushort)((ulong)uVar28 >> 0x10) >> 5);
        uVar44 = (undefined)((ushort)((ulong)uVar28 >> 0x20) >> 5);
        uVar46 = (undefined)(ushort)((ulong)uVar28 >> 0x35);
        uVar26 = CONCAT15((char)(uVar22 >> 5),
                          (uint5)((byte)((CONCAT24(uVar22,(uint)uVar38) & 0xffff0000ffff) >> 5) &
                                 0x1f) << 8) & 0x1fffffffffff;
        uVar36 = CONCAT15((char)(uVar23 >> 5),
                          (uint5)((byte)(CONCAT24(uVar23,(uint)(ushort)((ulong)uVar38 >> 0x20)) >> 5
                                        ) & 0x1f) << 8) & 0x1fffffffffff;
        bVar66 = (byte)((ulong)uVar28 >> 8) >> 2;
        bVar67 = (byte)((ulong)uVar28 >> 0x18) >> 2;
        bVar69 = (byte)((ulong)uVar28 >> 0x28) >> 2;
        bVar70 = (byte)((ulong)uVar28 >> 0x3a);
        uVar24 = CONCAT12((char)((ulong)uVar28 >> 0x10),(ushort)((byte)uVar28 & 0x1f)) & 0x1fffff;
        uVar27 = CONCAT16((byte)((ulong)uVar38 >> 0x18) >> 2,
                          CONCAT15((char)(uVar26 >> 0x28),
                                   (uint5)(uint3)((CONCAT11((char)(((uint)uVar38 & 0xffff) >> 10),
                                                            (char)(uVar26 >> 8)) & 0x1fff) << 8))) &
                 0x1fffffffffffff;
        uVar37 = CONCAT16((byte)((ulong)uVar38 >> 0x3a),
                          CONCAT15((char)(uVar36 >> 0x28),
                                   (uint5)(uint3)((CONCAT11((byte)((ulong)uVar38 >> 0x28) >> 2,
                                                            (char)(uVar36 >> 8)) & 0x1fff) << 8))) &
                 0x1fffffffffffff;
        uVar48 = (undefined)uVar24;
        uVar49 = (undefined)(uVar24 >> 0x10);
        uVar25 = (uint)(CONCAT12((char)(uVar27 >> 0x10),CONCAT11((char)(uVar27 >> 8),(char)uVar38))
                       & 0xffff1f);
        uVar61 = (uint)(CONCAT12((char)(uVar37 >> 0x10),
                                 CONCAT11((char)(uVar37 >> 8),(char)((ulong)uVar38 >> 0x20))) &
                       0xffff1f);
        uVar63 = (CONCAT12(bVar67,CONCAT11(uVar42,uVar49)) & 0x1f1fff) + 0x1f1f1f;
        uVar32 = (CONCAT12(bVar70,CONCAT11(uVar46,uVar30)) & 0x1f1f1f) + 0x1f1f1f;
        uVar54 = (uint)((uint3)(CONCAT16((char)(uVar27 >> 0x30),
                                         CONCAT15((char)(uVar27 >> 0x28),
                                                  CONCAT14((char)((ulong)uVar38 >> 0x10),uVar25)))
                               >> 0x20) & 0xffff1f);
        uVar62 = (uint)((uint3)(CONCAT16((char)(uVar37 >> 0x30),
                                         CONCAT15((char)(uVar37 >> 0x28),
                                                  CONCAT14((char)((ulong)uVar38 >> 0x30),uVar61)))
                               >> 0x20) & 0xffff1f);
        uVar56 = uVar63 >> 5;
        uVar64 = uVar32 >> 5;
        uVar55 = (uint)((uint3)((CONCAT12(bVar66,CONCAT11(uVar34,uVar48)) & 0x1f1fff) + 0x1f1f1f >>
                               5) & 0x10101);
        uVar31 = (uint)((uint3)((CONCAT12(bVar69,CONCAT11(uVar44,uVar29)) & 0x1f1f1f) + 0x1f1f1f >>
                               5) & 0x10101);
        iVar17 = (uint)((uint3)(CONCAT16((char)((uint3)(uVar63 >> 0xd) >> 8),
                                         CONCAT15((char)(uVar56 >> 8),CONCAT14((char)uVar56,uVar55))
                                        ) >> 0x20) & 0x10101) +
                 (uint)(CONCAT12(bVar67,CONCAT11(uVar42,uVar49)) & 0x1f1fff) * 2;
        iVar7 = (uint)((uint3)(CONCAT16((char)((uint3)(uVar32 >> 0xd) >> 8),
                                        CONCAT15((char)(uVar64 >> 8),CONCAT14((char)uVar64,uVar31)))
                              >> 0x20) & 0x10101) +
                (uint)(CONCAT12(bVar70,CONCAT11(uVar46,uVar30)) & 0x1f1f1f) * 2;
        puVar13[1] = (ulong)CONCAT16((char)((uint)iVar7 >> 0x10),
                                     CONCAT15((char)((uint)iVar7 >> 8),
                                              CONCAT14((char)iVar7,
                                                       uVar31 + (uint)(CONCAT12(bVar69,CONCAT11(
                                                  uVar44,uVar29)) & 0x1f1f1f) * 2))) |
                     0x1f0000001f000000;
        *puVar13 = (ulong)CONCAT16((char)((uint)iVar17 >> 0x10),
                                   CONCAT15((char)((uint)iVar17 >> 8),
                                            CONCAT14((char)iVar17,
                                                     uVar55 + (uint)(CONCAT12(bVar66,CONCAT11(uVar34
                                                  ,uVar48)) & 0x1f1fff) * 2))) | 0x1f0000001f000000;
        puVar13[3] = CONCAT44((uint)((uint3)(uVar62 + 0x1f1f1f >> 5) & 0x10101) + uVar62 * 2,
                              (uint)((uint3)(uVar61 + 0x1f1f1f >> 5) & 0x10101) + uVar61 * 2) |
                     0x1f0000001f000000;
        puVar13[2] = CONCAT44((uint)((uint3)(uVar54 + 0x1f1f1f >> 5) & 0x10101) + uVar54 * 2,
                              (uint)((uint3)(uVar25 + 0x1f1f1f >> 5) & 0x10101) + uVar25 * 2) |
                     0x1f0000001f000000;
        puVar13 = puVar13 + 4;
        puVar10 = puVar19;
      } while ((undefined8 *)(param_5 + 0xf9) != puVar19);
      uVar22 = param_5[0xfb];
      uVar23 = param_5[0xf9];
      uVar2 = param_5[0xfa];
      uVar3 = param_5[0xfd];
      uVar4 = param_5[0xfc];
      uVar5 = param_5[0xfe];
      uVar6 = param_5[0xff];
      uVar25 = (uVar5 >> 5 & 0x1f) << 8 | (uVar5 >> 10 & 0x1f) << 0x10 | uVar5 & 0x1f;
      uVar54 = (uVar6 >> 5 & 0x1f) << 8 | (uVar6 >> 10 & 0x1f) << 0x10 | uVar6 & 0x1f;
      uVar61 = (uVar23 >> 5 & 0x1f) << 8 | (uVar23 >> 10 & 0x1f) << 0x10 | uVar23 & 0x1f;
      uVar62 = (uVar2 >> 5 & 0x1f) << 8 | (uVar2 >> 10 & 0x1f) << 0x10 | uVar2 & 0x1f;
      uVar55 = (uVar22 >> 5 & 0x1f) << 8 | (uVar22 >> 10 & 0x1f) << 0x10 | uVar22 & 0x1f;
      uVar63 = (uVar4 >> 5 & 0x1f) << 8 | (uVar4 >> 10 & 0x1f) << 0x10 | uVar4 & 0x1f;
      uVar56 = (uVar3 >> 5 & 0x1f) << 8 | (uVar3 >> 10 & 0x1f) << 0x10 | uVar3 & 0x1f;
      puVar16[0xf9] = (uVar61 + 0x1f1f1f >> 5 & 0x10101) + uVar61 * 2 | 0x1f000000;
      puVar16[0xfa] = (uVar62 + 0x1f1f1f >> 5 & 0x10101) + uVar62 * 2 | 0x1f000000;
      puVar16[0xfb] = (uVar55 + 0x1f1f1f >> 5 & 0x10101) + uVar55 * 2 | 0x1f000000;
      puVar16[0xfc] = (uVar63 + 0x1f1f1f >> 5 & 0x10101) + uVar63 * 2 | 0x1f000000;
      puVar16[0xfd] = (uVar56 + 0x1f1f1f >> 5 & 0x10101) + uVar56 * 2 | 0x1f000000;
      puVar16[0xfe] = (uVar25 + 0x1f1f1f >> 5 & 0x10101) + uVar25 * 2 | 0x1f000000;
      puVar16[0xff] = (uVar54 + 0x1f1f1f >> 5 & 0x10101) + uVar54 * 2 | 0x1f000000;
      if (uVar53 != 0) {
        bVar8 = param_3 < (undefined8 *)(lVar21 + uVar20 + 0x10);
        if ((bVar8 && puVar1 < param_3 + 2 || uVar53 - 1 < 0xe) ||
            (!bVar8 || puVar1 >= param_3 + 2) && uVar53 - 1 == 0xe) {
          lVar21 = 0;
          do {
            *(byte *)((long)param_3 + lVar21) = *(byte *)((long)puVar1 + lVar21);
            lVar21 = lVar21 + 1;
          } while ((uint)lVar21 < uVar53);
        }
        else {
          lVar21 = 0;
          do {
            uVar28 = *(undefined8 *)((long)puVar1 + lVar21);
            ((undefined8 *)((long)param_3 + lVar21))[1] = ((undefined8 *)((long)puVar1 + lVar21))[1]
            ;
            *(undefined8 *)((long)param_3 + lVar21) = uVar28;
            lVar21 = lVar21 + 0x10;
          } while (((ulong)((uVar53 >> 4) - 1) + 1) * 0x10 - lVar21 != 0);
LAB_0016a594:
          uVar20 = uVar18 & 0xfffffff0;
          uVar25 = uVar53 & 0xfffffff0;
          if ((uVar18 & 0xf) != 0) {
            *(byte *)((long)param_3 + (ulong)uVar25) = *(byte *)((long)puVar1 + (ulong)uVar25);
            if (uVar25 + 1 < uVar53) {
              *(byte *)((long)param_3 + uVar20 + 1) = *(byte *)((long)puVar1 + (ulong)(uVar25 + 1));
              if (uVar25 + 2 < uVar53) {
                *(byte *)((long)param_3 + uVar20 + 2) =
                     *(byte *)((long)puVar1 + (ulong)(uVar25 + 2));
                if (uVar25 + 3 < uVar53) {
                  *(byte *)((long)param_3 + uVar20 + 3) =
                       *(byte *)((long)puVar1 + (ulong)(uVar25 + 3));
                  if (uVar25 + 4 < uVar53) {
                    *(byte *)((long)param_3 + uVar20 + 4) =
                         *(byte *)((long)puVar1 + (ulong)(uVar25 + 4));
                    if (uVar25 + 5 < uVar53) {
                      *(byte *)((long)param_3 + uVar20 + 5) =
                           *(byte *)((long)puVar1 + (ulong)(uVar25 + 5));
                      if (uVar25 + 6 < uVar53) {
                        *(byte *)((long)param_3 + uVar20 + 6) =
                             *(byte *)((long)puVar1 + (ulong)(uVar25 + 6));
                        if (uVar25 + 7 < uVar53) {
                          *(byte *)((long)param_3 + uVar20 + 7) =
                               *(byte *)((long)puVar1 + (ulong)(uVar25 + 7));
                          if (uVar25 + 8 < uVar53) {
                            *(byte *)((long)param_3 + uVar20 + 8) =
                                 *(byte *)((long)puVar1 + (ulong)(uVar25 + 8));
                            if (uVar25 + 9 < uVar53) {
                              *(byte *)((long)param_3 + uVar20 + 9) =
                                   *(byte *)((long)puVar1 + (ulong)(uVar25 + 9));
                              if (uVar25 + 10 < uVar53) {
                                *(byte *)((long)param_3 + uVar20 + 10) =
                                     *(byte *)((long)puVar1 + (ulong)(uVar25 + 10));
                                if (uVar25 + 0xb < uVar53) {
                                  *(byte *)((long)param_3 + uVar20 + 0xb) =
                                       *(byte *)((long)puVar1 + (ulong)(uVar25 + 0xb));
                                  if (uVar25 + 0xc < uVar53) {
                                    *(byte *)((long)param_3 + uVar20 + 0xc) =
                                         *(byte *)((long)puVar1 + (ulong)(uVar25 + 0xc));
                                    if (uVar25 + 0xd < uVar53) {
                                      *(byte *)((long)param_3 + uVar20 + 0xd) =
                                           *(byte *)((long)puVar1 + (ulong)(uVar25 + 0xd));
                                      if (uVar25 + 0xe < uVar53) {
                                        *(byte *)((long)param_3 + uVar20 + 0xe) =
                                             *(byte *)((long)puVar1 + (ulong)(uVar25 + 0xe));
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
    }
    else if (uVar25 < 5) {
      if (uVar25 == 2) {
        puVar16 = *(uint **)(param_2 + 0x18);
        *(undefined *)(param_2 + 0x4a) = 1;
        if (puVar16 == (uint *)0x0) {
          puVar16 = (uint *)malloc(0x10);
          *(uint **)(param_2 + 0x18) = puVar16;
        }
        uVar22 = *param_5;
        uVar25 = (uVar22 >> 5 & 0x1f) << 8 | (uVar22 >> 10 & 0x1f) << 0x10 | uVar22 & 0x1f;
        uVar25 = (uVar25 + 0x1f1f1f >> 5 & 0x10101) + uVar25 * 2;
        if (param_9 == 0) {
          uVar25 = uVar25 | 0x1f000000;
        }
        uVar22 = param_5[1];
        uVar23 = param_5[2];
        uVar2 = param_5[3];
        uVar54 = (uVar2 >> 5 & 0x1f) << 8 | (uVar2 >> 10 & 0x1f) << 0x10 | uVar2 & 0x1f;
        uVar61 = (uVar22 >> 5 & 0x1f) << 8 | (uVar22 >> 10 & 0x1f) << 0x10 | uVar22 & 0x1f;
        uVar62 = (uVar23 >> 5 & 0x1f) << 8 | (uVar23 >> 10 & 0x1f) << 0x10 | uVar23 & 0x1f;
        *puVar16 = uVar25;
        puVar16[1] = (uVar61 + 0x1f1f1f >> 5 & 0x10101) + uVar61 * 2 | 0x1f000000;
        puVar16[2] = (uVar62 + 0x1f1f1f >> 5 & 0x10101) + uVar62 * 2 | 0x1f000000;
        puVar16[3] = (uVar54 + 0x1f1f1f >> 5 & 0x10101) + uVar54 * 2 | 0x1f000000;
        if (uVar53 != 0) {
          bVar9 = puVar1 < (undefined8 *)((long)param_3 + uVar18 * 4);
          bVar8 = param_3 < (undefined8 *)(lVar21 + uVar20 + uVar18);
          uVar25 = uVar53 - 1;
          if ((bVar9 && bVar8 || uVar25 < 0xe) || (!bVar9 || !bVar8) && uVar25 == 0xe) {
            puVar10 = puVar1;
            do {
              puVar19 = (undefined8 *)((long)puVar10 + 1);
              bVar66 = *(byte *)puVar10;
              *(byte *)param_3 = bVar66 & 3;
              *(byte *)((long)param_3 + 1) = bVar66 >> 2 & 3;
              *(byte *)((long)param_3 + 2) = bVar66 >> 4 & 3;
              *(byte *)((long)param_3 + 3) = bVar66 >> 6;
              param_3 = (undefined8 *)((long)param_3 + 4);
              puVar10 = puVar19;
            } while ((undefined8 *)((long)puVar1 + (ulong)uVar25 + 1) != puVar19);
          }
          else {
            puVar10 = puVar1;
            puVar19 = param_3;
            do {
              puVar11 = puVar10 + 2;
              uVar38 = puVar10[1];
              uVar28 = *puVar10;
              bVar66 = (byte)uVar28;
              bVar67 = (byte)((ulong)uVar28 >> 8);
              bVar69 = (byte)((ulong)uVar28 >> 0x10);
              bVar70 = (byte)((ulong)uVar28 >> 0x18);
              bVar71 = (byte)((ulong)uVar28 >> 0x20);
              bVar72 = (byte)((ulong)uVar28 >> 0x28);
              bVar73 = (byte)((ulong)uVar28 >> 0x30);
              bVar43 = (byte)((ulong)uVar28 >> 0x38);
              bVar45 = (byte)uVar38;
              bVar47 = (byte)((ulong)uVar38 >> 8);
              bVar74 = (byte)((ulong)uVar38 >> 0x10);
              bVar75 = (byte)((ulong)uVar38 >> 0x18);
              bVar76 = (byte)((ulong)uVar38 >> 0x20);
              bVar77 = (byte)((ulong)uVar38 >> 0x28);
              bVar78 = (byte)((ulong)uVar38 >> 0x30);
              bVar79 = (byte)((ulong)uVar38 >> 0x38);
              uVar22 = (ushort)uVar28 & 0x303;
              uVar23 = (ushort)uVar38 & 0x303;
              *(byte *)puVar19 = (byte)uVar22;
              *(byte *)((long)puVar19 + 1) = bVar66 >> 2 & 3;
              *(byte *)((long)puVar19 + 2) = bVar66 >> 4 & 3;
              *(byte *)((long)puVar19 + 3) = bVar66 >> 6;
              *(byte *)((long)puVar19 + 4) = (byte)(uVar22 >> 8);
              *(byte *)((long)puVar19 + 5) = bVar67 >> 2 & 3;
              *(byte *)((long)puVar19 + 6) = bVar67 >> 4 & 3;
              *(byte *)((long)puVar19 + 7) = bVar67 >> 6;
              *(byte *)(puVar19 + 1) = bVar69 & 3;
              *(byte *)((long)puVar19 + 9) = bVar69 >> 2 & 3;
              *(byte *)((long)puVar19 + 10) = bVar69 >> 4 & 3;
              *(byte *)((long)puVar19 + 0xb) = bVar69 >> 6;
              *(byte *)((long)puVar19 + 0xc) = bVar70 & 3;
              *(byte *)((long)puVar19 + 0xd) = bVar70 >> 2 & 3;
              *(byte *)((long)puVar19 + 0xe) = bVar70 >> 4 & 3;
              *(byte *)((long)puVar19 + 0xf) = bVar70 >> 6;
              *(byte *)(puVar19 + 2) = bVar71 & 3;
              *(byte *)((long)puVar19 + 0x11) = bVar71 >> 2 & 3;
              *(byte *)((long)puVar19 + 0x12) = bVar71 >> 4 & 3;
              *(byte *)((long)puVar19 + 0x13) = bVar71 >> 6;
              *(byte *)((long)puVar19 + 0x14) = bVar72 & 3;
              *(byte *)((long)puVar19 + 0x15) = bVar72 >> 2 & 3;
              *(byte *)((long)puVar19 + 0x16) = bVar72 >> 4 & 3;
              *(byte *)((long)puVar19 + 0x17) = bVar72 >> 6;
              *(byte *)(puVar19 + 3) = bVar73 & 3;
              *(byte *)((long)puVar19 + 0x19) = bVar73 >> 2 & 3;
              *(byte *)((long)puVar19 + 0x1a) = bVar73 >> 4 & 3;
              *(byte *)((long)puVar19 + 0x1b) = bVar73 >> 6;
              *(byte *)((long)puVar19 + 0x1c) = bVar43 & 3;
              *(byte *)((long)puVar19 + 0x1d) = bVar43 >> 2 & 3;
              *(byte *)((long)puVar19 + 0x1e) = bVar43 >> 4 & 3;
              *(byte *)((long)puVar19 + 0x1f) = bVar43 >> 6;
              *(byte *)(puVar19 + 4) = (byte)uVar23;
              *(byte *)((long)puVar19 + 0x21) = bVar45 >> 2 & 3;
              *(byte *)((long)puVar19 + 0x22) = bVar45 >> 4 & 3;
              *(byte *)((long)puVar19 + 0x23) = bVar45 >> 6;
              *(byte *)((long)puVar19 + 0x24) = (byte)(uVar23 >> 8);
              *(byte *)((long)puVar19 + 0x25) = bVar47 >> 2 & 3;
              *(byte *)((long)puVar19 + 0x26) = bVar47 >> 4 & 3;
              *(byte *)((long)puVar19 + 0x27) = bVar47 >> 6;
              *(byte *)(puVar19 + 5) = bVar74 & 3;
              *(byte *)((long)puVar19 + 0x29) = bVar74 >> 2 & 3;
              *(byte *)((long)puVar19 + 0x2a) = bVar74 >> 4 & 3;
              *(byte *)((long)puVar19 + 0x2b) = bVar74 >> 6;
              *(byte *)((long)puVar19 + 0x2c) = bVar75 & 3;
              *(byte *)((long)puVar19 + 0x2d) = bVar75 >> 2 & 3;
              *(byte *)((long)puVar19 + 0x2e) = bVar75 >> 4 & 3;
              *(byte *)((long)puVar19 + 0x2f) = bVar75 >> 6;
              *(byte *)(puVar19 + 6) = bVar76 & 3;
              *(byte *)((long)puVar19 + 0x31) = bVar76 >> 2 & 3;
              *(byte *)((long)puVar19 + 0x32) = bVar76 >> 4 & 3;
              *(byte *)((long)puVar19 + 0x33) = bVar76 >> 6;
              *(byte *)((long)puVar19 + 0x34) = bVar77 & 3;
              *(byte *)((long)puVar19 + 0x35) = bVar77 >> 2 & 3;
              *(byte *)((long)puVar19 + 0x36) = bVar77 >> 4 & 3;
              *(byte *)((long)puVar19 + 0x37) = bVar77 >> 6;
              *(byte *)(puVar19 + 7) = bVar78 & 3;
              *(byte *)((long)puVar19 + 0x39) = bVar78 >> 2 & 3;
              *(byte *)((long)puVar19 + 0x3a) = bVar78 >> 4 & 3;
              *(byte *)((long)puVar19 + 0x3b) = bVar78 >> 6;
              *(byte *)((long)puVar19 + 0x3c) = bVar79 & 3;
              *(byte *)((long)puVar19 + 0x3d) = bVar79 >> 2 & 3;
              *(byte *)((long)puVar19 + 0x3e) = bVar79 >> 4 & 3;
              *(byte *)((long)puVar19 + 0x3f) = bVar79 >> 6;
              puVar19 = puVar19 + 8;
              puVar10 = puVar11;
            } while (puVar1 + (ulong)((uVar53 >> 4) - 1) * 2 + 2 != puVar11);
            lVar21 = (uVar18 & 0xfffffff0) * 4;
            uVar25 = uVar53 & 0xfffffff0;
            if ((uVar18 & 0xf) != 0) {
              bVar66 = *(byte *)((long)puVar1 + (ulong)uVar25);
              *(byte *)((long)param_3 + lVar21) = bVar66 & 3;
              *(byte *)((long)param_3 + lVar21 + 1) = bVar66 >> 2 & 3;
              *(byte *)((long)param_3 + lVar21 + 2) = bVar66 >> 4 & 3;
              *(byte *)((long)param_3 + lVar21 + 3) = bVar66 >> 6;
              if (uVar25 + 1 < uVar53) {
                bVar66 = *(byte *)((long)puVar1 + (ulong)(uVar25 + 1));
                *(byte *)((long)param_3 + lVar21 + 4) = bVar66 & 3;
                *(byte *)((long)param_3 + lVar21 + 5) = bVar66 >> 2 & 3;
                *(byte *)((long)param_3 + lVar21 + 6) = bVar66 >> 4 & 3;
                *(byte *)((long)param_3 + lVar21 + 7) = bVar66 >> 6;
                if (uVar25 + 2 < uVar53) {
                  bVar66 = *(byte *)((long)puVar1 + (ulong)(uVar25 + 2));
                  *(byte *)((long)param_3 + lVar21 + 8) = bVar66 & 3;
                  *(byte *)((long)param_3 + lVar21 + 9) = bVar66 >> 2 & 3;
                  *(byte *)((long)param_3 + lVar21 + 10) = bVar66 >> 4 & 3;
                  *(byte *)((long)param_3 + lVar21 + 0xb) = bVar66 >> 6;
                  if (uVar25 + 3 < uVar53) {
                    bVar66 = *(byte *)((long)puVar1 + (ulong)(uVar25 + 3));
                    *(byte *)((long)param_3 + lVar21 + 0xc) = bVar66 & 3;
                    *(byte *)((long)param_3 + lVar21 + 0xd) = bVar66 >> 2 & 3;
                    *(byte *)((long)param_3 + lVar21 + 0xe) = bVar66 >> 4 & 3;
                    *(byte *)((long)param_3 + lVar21 + 0xf) = bVar66 >> 6;
                    if (uVar25 + 4 < uVar53) {
                      bVar66 = *(byte *)((long)puVar1 + (ulong)(uVar25 + 4));
                      *(byte *)((long)param_3 + lVar21 + 0x10) = bVar66 & 3;
                      *(byte *)((long)param_3 + lVar21 + 0x11) = bVar66 >> 2 & 3;
                      *(byte *)((long)param_3 + lVar21 + 0x12) = bVar66 >> 4 & 3;
                      *(byte *)((long)param_3 + lVar21 + 0x13) = bVar66 >> 6;
                      if (uVar25 + 5 < uVar53) {
                        bVar66 = *(byte *)((long)puVar1 + (ulong)(uVar25 + 5));
                        *(byte *)((long)param_3 + lVar21 + 0x14) = bVar66 & 3;
                        *(byte *)((long)param_3 + lVar21 + 0x15) = bVar66 >> 2 & 3;
                        *(byte *)((long)param_3 + lVar21 + 0x16) = bVar66 >> 4 & 3;
                        *(byte *)((long)param_3 + lVar21 + 0x17) = bVar66 >> 6;
                        if (uVar25 + 6 < uVar53) {
                          bVar66 = *(byte *)((long)puVar1 + (ulong)(uVar25 + 6));
                          *(byte *)((long)param_3 + lVar21 + 0x18) = bVar66 & 3;
                          *(byte *)((long)param_3 + lVar21 + 0x19) = bVar66 >> 2 & 3;
                          *(byte *)((long)param_3 + lVar21 + 0x1a) = bVar66 >> 4 & 3;
                          *(byte *)((long)param_3 + lVar21 + 0x1b) = bVar66 >> 6;
                          if (uVar25 + 7 < uVar53) {
                            bVar66 = *(byte *)((long)puVar1 + (ulong)(uVar25 + 7));
                            *(byte *)((long)param_3 + lVar21 + 0x1c) = bVar66 & 3;
                            *(byte *)((long)param_3 + lVar21 + 0x1d) = bVar66 >> 2 & 3;
                            *(byte *)((long)param_3 + lVar21 + 0x1e) = bVar66 >> 4 & 3;
                            *(byte *)((long)param_3 + lVar21 + 0x1f) = bVar66 >> 6;
                            if (uVar25 + 8 < uVar53) {
                              bVar66 = *(byte *)((long)puVar1 + (ulong)(uVar25 + 8));
                              *(byte *)((long)param_3 + lVar21 + 0x20) = bVar66 & 3;
                              *(byte *)((long)param_3 + lVar21 + 0x21) = bVar66 >> 2 & 3;
                              *(byte *)((long)param_3 + lVar21 + 0x22) = bVar66 >> 4 & 3;
                              *(byte *)((long)param_3 + lVar21 + 0x23) = bVar66 >> 6;
                              if (uVar25 + 9 < uVar53) {
                                bVar66 = *(byte *)((long)puVar1 + (ulong)(uVar25 + 9));
                                *(byte *)((long)param_3 + lVar21 + 0x24) = bVar66 & 3;
                                *(byte *)((long)param_3 + lVar21 + 0x25) = bVar66 >> 2 & 3;
                                *(byte *)((long)param_3 + lVar21 + 0x26) = bVar66 >> 4 & 3;
                                *(byte *)((long)param_3 + lVar21 + 0x27) = bVar66 >> 6;
                                if (uVar25 + 10 < uVar53) {
                                  bVar66 = *(byte *)((long)puVar1 + (ulong)(uVar25 + 10));
                                  *(byte *)((long)param_3 + lVar21 + 0x28) = bVar66 & 3;
                                  *(byte *)((long)param_3 + lVar21 + 0x29) = bVar66 >> 2 & 3;
                                  *(byte *)((long)param_3 + lVar21 + 0x2a) = bVar66 >> 4 & 3;
                                  *(byte *)((long)param_3 + lVar21 + 0x2b) = bVar66 >> 6;
                                  if (uVar25 + 0xb < uVar53) {
                                    bVar66 = *(byte *)((long)puVar1 + (ulong)(uVar25 + 0xb));
                                    *(byte *)((long)param_3 + lVar21 + 0x2c) = bVar66 & 3;
                                    *(byte *)((long)param_3 + lVar21 + 0x2d) = bVar66 >> 2 & 3;
                                    *(byte *)((long)param_3 + lVar21 + 0x2e) = bVar66 >> 4 & 3;
                                    *(byte *)((long)param_3 + lVar21 + 0x2f) = bVar66 >> 6;
                                    if (uVar25 + 0xc < uVar53) {
                                      bVar66 = *(byte *)((long)puVar1 + (ulong)(uVar25 + 0xc));
                                      *(byte *)((long)param_3 + lVar21 + 0x30) = bVar66 & 3;
                                      *(byte *)((long)param_3 + lVar21 + 0x31) = bVar66 >> 2 & 3;
                                      *(byte *)((long)param_3 + lVar21 + 0x32) = bVar66 >> 4 & 3;
                                      *(byte *)((long)param_3 + lVar21 + 0x33) = bVar66 >> 6;
                                      if (uVar25 + 0xd < uVar53) {
                                        bVar66 = *(byte *)((long)puVar1 + (ulong)(uVar25 + 0xd));
                                        *(byte *)((long)param_3 + lVar21 + 0x34) = bVar66 & 3;
                                        *(byte *)((long)param_3 + lVar21 + 0x35) = bVar66 >> 2 & 3;
                                        *(byte *)((long)param_3 + lVar21 + 0x36) = bVar66 >> 4 & 3;
                                        *(byte *)((long)param_3 + lVar21 + 0x37) = bVar66 >> 6;
                                        if (uVar25 + 0xe < uVar53) {
                                          bVar66 = *(byte *)((long)puVar1 + (ulong)(uVar25 + 0xe));
                                          *(byte *)((long)param_3 + lVar21 + 0x38) = bVar66 & 3;
                                          *(byte *)((long)param_3 + lVar21 + 0x39) = bVar66 >> 2 & 3
                                          ;
                                          *(byte *)((long)param_3 + lVar21 + 0x3a) = bVar66 >> 4 & 3
                                          ;
                                          *(byte *)((long)param_3 + lVar21 + 0x3b) = bVar66 >> 6;
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
      }
      else {
        if (uVar25 == 3) {
          puVar16 = *(uint **)(param_2 + 0x18);
          *(undefined *)(param_2 + 0x4a) = 1;
          if (puVar16 == (uint *)0x0) {
            puVar16 = (uint *)malloc(0x40);
            *(uint **)(param_2 + 0x18) = puVar16;
          }
          uVar22 = *param_5;
          uVar25 = (uVar22 >> 5 & 0x1f) << 8 | (uVar22 >> 10 & 0x1f) << 0x10 | uVar22 & 0x1f;
          uVar25 = (uVar25 + 0x1f1f1f >> 5 & 0x10101) + uVar25 * 2;
          if (param_9 == 0) {
            uVar25 = uVar25 | 0x1f000000;
          }
          uVar38 = *(undefined8 *)(param_5 + 5);
          uVar28 = *(undefined8 *)(param_5 + 1);
          uVar54 = (uint)uVar28 & 0xffff;
          uVar53 = (uint)uVar38 & 0xffff;
          uVar44 = (undefined)(uVar54 >> 5);
          uVar46 = (undefined)((ushort)((ulong)uVar28 >> 0x10) >> 5);
          uVar48 = (undefined)((ushort)((ulong)uVar28 >> 0x20) >> 5);
          uVar49 = (undefined)(ushort)((ulong)uVar28 >> 0x35);
          uVar29 = (undefined)(uVar53 >> 5);
          uVar30 = (undefined)((ushort)((ulong)uVar38 >> 0x10) >> 5);
          uVar34 = (undefined)((ushort)((ulong)uVar38 >> 0x20) >> 5);
          uVar42 = (undefined)(ushort)((ulong)uVar38 >> 0x35);
          uVar51 = (undefined)((ulong)uVar28 >> 0x10);
          uVar52 = (undefined)((ulong)uVar28 >> 0x20);
          uVar57 = (undefined)((ulong)uVar28 >> 0x30);
          uVar59 = (undefined)((ulong)uVar38 >> 0x10);
          uVar60 = (undefined)((ulong)uVar38 >> 0x20);
          uVar65 = (undefined)((ulong)uVar38 >> 0x30);
          uVar80 = (undefined)(uVar54 >> 10);
          bVar70 = (byte)((ulong)uVar28 >> 0x18) >> 2;
          bVar71 = (byte)((ulong)uVar28 >> 0x28) >> 2;
          bVar72 = (byte)((ulong)uVar28 >> 0x3a);
          uVar68 = (undefined)(uVar53 >> 10);
          bVar66 = (byte)((ulong)uVar38 >> 0x18) >> 2;
          bVar67 = (byte)((ulong)uVar38 >> 0x28) >> 2;
          bVar69 = (byte)((ulong)uVar38 >> 0x3a);
          uVar22 = param_5[0xb];
          uVar23 = param_5[9];
          uVar2 = param_5[10];
          uVar3 = param_5[0xe];
          uVar53 = (CONCAT12(bVar70,CONCAT11(uVar46,uVar51)) & 0x1f1f1f) + 0x1f1f1f;
          uVar61 = (CONCAT12(bVar72,CONCAT11(uVar49,uVar57)) & 0x1f1f1f) + 0x1f1f1f;
          uVar31 = (CONCAT12(bVar66,CONCAT11(uVar30,uVar59)) & 0x1f1f1f) + 0x1f1f1f;
          uVar39 = (CONCAT12(bVar69,CONCAT11(uVar42,uVar65)) & 0x1f1f1f) + 0x1f1f1f;
          uVar4 = param_5[0xd];
          uVar54 = uVar53 >> 5;
          uVar62 = uVar61 >> 5;
          uVar32 = uVar31 >> 5;
          uVar40 = uVar39 >> 5;
          uVar5 = param_5[0xc];
          *puVar16 = uVar25;
          uVar6 = param_5[0xf];
          uVar50 = (uint)((uint3)((CONCAT12(uVar80,CONCAT11(uVar44,(char)uVar28)) & 0x1f1f1f) +
                                  0x1f1f1f >> 5) & 0x10101);
          uVar58 = (uint)((uint3)((CONCAT12(bVar71,CONCAT11(uVar48,uVar52)) & 0x1f1f1f) + 0x1f1f1f
                                 >> 5) & 0x10101);
          uVar56 = (uint)((uint3)((CONCAT12(uVar68,CONCAT11(uVar29,(char)uVar38)) & 0x1f1f1f) +
                                  0x1f1f1f >> 5) & 0x10101);
          uVar64 = (uint)((uint3)((CONCAT12(bVar67,CONCAT11(uVar34,uVar60)) & 0x1f1f1f) + 0x1f1f1f
                                 >> 5) & 0x10101);
          iVar17 = (uint)((uint3)(CONCAT16((char)((uint3)(uVar53 >> 0xd) >> 8),
                                           CONCAT15((char)(uVar54 >> 8),
                                                    CONCAT14((char)uVar54,uVar50))) >> 0x20) &
                         0x10101) + (uint)(CONCAT12(bVar70,CONCAT11(uVar46,uVar51)) & 0x1f1f1f) * 2;
          iVar7 = (uint)((uint3)(CONCAT16((char)((uint3)(uVar61 >> 0xd) >> 8),
                                          CONCAT15((char)(uVar62 >> 8),CONCAT14((char)uVar62,uVar58)
                                                  )) >> 0x20) & 0x10101) +
                  (uint)(CONCAT12(bVar72,CONCAT11(uVar49,uVar57)) & 0x1f1f1f) * 2;
          uVar25 = (uVar6 >> 5 & 0x1f) << 8 | (uVar6 >> 10 & 0x1f) << 0x10 | uVar6 & 0x1f;
          uVar53 = (uVar23 >> 5 & 0x1f) << 8 | (uVar23 >> 10 & 0x1f) << 0x10 | uVar23 & 0x1f;
          uVar54 = (uVar22 >> 5 & 0x1f) << 8 | (uVar22 >> 10 & 0x1f) << 0x10 | uVar22 & 0x1f;
          uVar61 = (uVar5 >> 5 & 0x1f) << 8 | (uVar5 >> 10 & 0x1f) << 0x10 | uVar5 & 0x1f;
          uVar62 = (uVar3 >> 5 & 0x1f) << 8 | (uVar3 >> 10 & 0x1f) << 0x10 | uVar3 & 0x1f;
          uVar55 = (uVar2 >> 5 & 0x1f) << 8 | (uVar2 >> 10 & 0x1f) << 0x10 | uVar2 & 0x1f;
          uVar63 = (uVar4 >> 5 & 0x1f) << 8 | (uVar4 >> 10 & 0x1f) << 0x10 | uVar4 & 0x1f;
          puVar16[9] = (uVar53 + 0x1f1f1f >> 5 & 0x10101) + uVar53 * 2 | 0x1f000000;
          puVar16[10] = (uVar55 + 0x1f1f1f >> 5 & 0x10101) + uVar55 * 2 | 0x1f000000;
          puVar16[0xb] = (uVar54 + 0x1f1f1f >> 5 & 0x10101) + uVar54 * 2 | 0x1f000000;
          puVar16[0xc] = (uVar61 + 0x1f1f1f >> 5 & 0x10101) + uVar61 * 2 | 0x1f000000;
          puVar16[0xd] = (uVar63 + 0x1f1f1f >> 5 & 0x10101) + uVar63 * 2 | 0x1f000000;
          puVar16[0xe] = (uVar62 + 0x1f1f1f >> 5 & 0x10101) + uVar62 * 2 | 0x1f000000;
          puVar16[0xf] = (uVar25 + 0x1f1f1f >> 5 & 0x10101) + uVar25 * 2 | 0x1f000000;
          *(ulong *)(puVar16 + 3) =
               (ulong)CONCAT16((char)((uint)iVar7 >> 0x10),
                               CONCAT15((char)((uint)iVar7 >> 8),
                                        CONCAT14((char)iVar7,
                                                 uVar58 + (uint)(CONCAT12(bVar71,CONCAT11(uVar48,
                                                  uVar52)) & 0x1f1f1f) * 2))) | 0x1f0000001f000000;
          *(ulong *)(puVar16 + 1) =
               (ulong)CONCAT16((char)((uint)iVar17 >> 0x10),
                               CONCAT15((char)((uint)iVar17 >> 8),
                                        CONCAT14((char)iVar17,
                                                 uVar50 + (uint)(CONCAT12(uVar80,CONCAT11(uVar44,(
                                                  char)uVar28)) & 0x1f1f1f) * 2))) |
               0x1f0000001f000000;
          lVar12 = lVar12 - ___stack_chk_guard;
          sVar14 = 0;
          *(ulong *)(puVar16 + 7) =
               CONCAT44((uint)((uint3)(CONCAT16((char)((uint3)(uVar39 >> 0xd) >> 8),
                                                CONCAT15((char)(uVar40 >> 8),
                                                         CONCAT14((char)uVar40,uVar64))) >> 0x20) &
                              0x10101) +
                        (uint)(CONCAT12(bVar69,CONCAT11(uVar42,uVar65)) & 0x1f1f1f) * 2,
                        uVar64 + (uint)(CONCAT12(bVar67,CONCAT11(uVar34,uVar60)) & 0x1f1f1f) * 2) |
               0x1f0000001f000000;
          *(ulong *)(puVar16 + 5) =
               CONCAT44((uint)((uint3)(CONCAT16((char)((uint3)(uVar31 >> 0xd) >> 8),
                                                CONCAT15((char)(uVar32 >> 8),
                                                         CONCAT14((char)uVar32,uVar56))) >> 0x20) &
                              0x10101) +
                        (uint)(CONCAT12(bVar66,CONCAT11(uVar30,uVar59)) & 0x1f1f1f) * 2,
                        uVar56 + (uint)(CONCAT12(uVar68,CONCAT11(uVar29,(char)uVar38)) & 0x1f1f1f) *
                                 2) | 0x1f0000001f000000;
          if (lVar12 == 0) {
            texture_cache_convert_4bpp_asm(param_3,puVar1,uVar18);
            return;
          }
          goto LAB_0016a7c0;
        }
        if ((uVar25 == 1) &&
           (texture_cache_convert_palette_alpha_3bpp(param_2,param_5), uVar53 != 0)) {
          bVar8 = param_3 < (undefined8 *)(lVar21 + uVar20 + 0x10);
          if (((!bVar8 || puVar1 >= param_3 + 2) && 0xd < uVar53 - 1) &&
              (bVar8 && puVar1 < param_3 + 2 || uVar53 - 1 != 0xe)) {
            lVar21 = 0;
            do {
              uVar28 = *(undefined8 *)((long)puVar1 + lVar21);
              ((undefined8 *)((long)param_3 + lVar21))[1] =
                   ((undefined8 *)((long)puVar1 + lVar21))[1];
              *(undefined8 *)((long)param_3 + lVar21) = uVar28;
              lVar21 = lVar21 + 0x10;
            } while (((ulong)((uVar53 >> 4) - 1) + 1) * 0x10 - lVar21 != 0);
            goto LAB_0016a594;
          }
          lVar21 = 0;
          do {
            *(byte *)((long)param_3 + lVar21) = *(byte *)((long)puVar1 + lVar21);
            lVar21 = lVar21 + 1;
          } while ((uint)lVar21 < uVar53);
        }
      }
    }
    else if (uVar25 == 6) {
      texture_cache_convert_palette_alpha_5bpp(param_2,param_5);
      if (uVar53 != 0) {
        bVar8 = param_3 < (undefined8 *)(lVar21 + uVar20 + 0x10);
        if (((!bVar8 || puVar1 >= param_3 + 2) && 0xd < uVar53 - 1) &&
            (bVar8 && puVar1 < param_3 + 2 || uVar53 - 1 != 0xe)) {
          lVar21 = 0;
          do {
            uVar28 = *(undefined8 *)((long)puVar1 + lVar21);
            ((undefined8 *)((long)param_3 + lVar21))[1] = ((undefined8 *)((long)puVar1 + lVar21))[1]
            ;
            *(undefined8 *)((long)param_3 + lVar21) = uVar28;
            lVar21 = lVar21 + 0x10;
          } while (((ulong)((uVar53 >> 4) - 1) + 1) * 0x10 - lVar21 != 0);
          goto LAB_0016a594;
        }
        lVar21 = 0;
        do {
          *(byte *)((long)param_3 + lVar21) = *(byte *)((long)puVar1 + lVar21);
          lVar21 = lVar21 + 1;
        } while ((uint)lVar21 < uVar53);
      }
    }
    else if ((uVar25 == 7) && (uVar25 = uVar53 >> 1, uVar53 >> 1 != 0)) {
      if (uVar25 - 1 < 7) {
        uVar54 = 0;
      }
      else {
        uVar53 = uVar53 >> 4;
        puVar10 = param_3;
        puVar19 = puVar1;
        do {
          uVar38 = puVar19[1];
          uVar28 = *puVar19;
          uVar62 = (uint)uVar28 & 0xffff;
          uVar29 = (undefined)((ulong)uVar28 >> 0x10);
          uVar30 = (undefined)((ulong)uVar28 >> 0x20);
          uVar34 = (undefined)((ulong)uVar28 >> 0x30);
          uVar42 = (undefined)(uVar62 >> 10);
          bVar66 = (byte)((ulong)uVar28 >> 0x18);
          bVar43 = bVar66 >> 2;
          bVar67 = (byte)((ulong)uVar28 >> 0x28);
          bVar45 = bVar67 >> 2;
          bVar69 = (byte)((ulong)uVar28 >> 0x38);
          bVar47 = bVar69 >> 2;
          uVar44 = (undefined)(uVar62 >> 5);
          uVar46 = (undefined)((ushort)((ulong)uVar28 >> 0x10) >> 5);
          uVar48 = (undefined)((ushort)((ulong)uVar28 >> 0x20) >> 5);
          uVar49 = (undefined)(ushort)((ulong)uVar28 >> 0x35);
          bVar70 = (byte)((ulong)uVar38 >> 8);
          bVar72 = (byte)((ulong)uVar38 >> 0x18);
          uVar27 = CONCAT16(bVar72 >> 2,(uint6)(uint3)((bVar70 >> 2 & 0x1f) << 0x10)) &
                   0x1fffffffffffff;
          bVar71 = (byte)((ulong)uVar38 >> 0x28);
          bVar73 = (byte)((ulong)uVar38 >> 0x38);
          uVar37 = CONCAT16(bVar73 >> 2,(uint6)(uint3)((bVar71 >> 2 & 0x1f) << 0x10)) &
                   0x1fffffffffffff;
          uVar24 = CONCAT11((char)(uVar27 >> 0x10),(char)((ushort)uVar38 >> 5)) & 0xff1f;
          uVar27 = CONCAT16((char)(uVar27 >> 0x30),
                            CONCAT15((char)((ushort)((ulong)uVar38 >> 0x10) >> 5),
                                     (uint5)(uint3)(uVar24 << 8))) & 0xff1fffffffffff;
          uVar35 = CONCAT11((char)(uVar37 >> 0x10),(char)((ushort)((ulong)uVar38 >> 0x20) >> 5)) &
                   0xff1f;
          uVar37 = CONCAT16((char)(uVar37 >> 0x30),
                            CONCAT15((char)(ushort)((ulong)uVar38 >> 0x35),
                                     (uint5)(uint3)(uVar35 << 8))) & 0xff1fffffffffff;
          uVar24 = CONCAT12((char)(uVar27 >> 0x10),CONCAT11((char)uVar24,(char)uVar38)) & 0xffff1f;
          uVar35 = CONCAT12((char)(uVar37 >> 0x10),
                            CONCAT11((char)uVar35,(char)((ulong)uVar38 >> 0x20))) & 0xffff1f;
          uVar55 = (CONCAT12(bVar43,CONCAT11(uVar46,uVar29)) & 0x1f1f1f) + 0x1f1f1f;
          uVar63 = (CONCAT12(bVar47,CONCAT11(uVar49,uVar34)) & 0x1f1f1f) + 0x1f1f1f;
          uVar54 = (uint)((uint3)(CONCAT16((char)(uVar27 >> 0x30),
                                           CONCAT15((char)(uVar27 >> 0x28),
                                                    CONCAT14((char)((ulong)uVar38 >> 0x10),
                                                             (uint)uVar24))) >> 0x20) & 0xffff1f);
          uVar61 = (uint)((uint3)(CONCAT16((char)(uVar37 >> 0x30),
                                           CONCAT15((char)(uVar37 >> 0x28),
                                                    CONCAT14((char)((ulong)uVar38 >> 0x30),
                                                             (uint)uVar35))) >> 0x20) & 0xffff1f);
          iVar17 = (uint)(CONCAT12((char)((uint3)(uVar55 >> 0xd) >> 8),(short)(uVar55 >> 5)) &
                         0x10101) + (uint)(CONCAT12(bVar43,CONCAT11(uVar46,uVar29)) & 0x1f1f1f) * 2;
          iVar7 = (uint)(CONCAT12((char)((uint3)(uVar63 >> 0xd) >> 8),(short)(uVar63 >> 5)) &
                        0x10101) + (uint)(CONCAT12(bVar47,CONCAT11(uVar49,uVar34)) & 0x1f1f1f) * 2;
          iVar33 = (uint)((uint3)(uVar54 + 0x1f1f1f >> 5) & 0x10101) + uVar54 * 2;
          iVar41 = (uint)((uint3)(uVar61 + 0x1f1f1f >> 5) & 0x10101) + uVar61 * 2;
          puVar10[1] = CONCAT17(((char)bVar69 >> 7) * -0x1f,
                                CONCAT16((char)((uint)iVar7 >> 0x10),
                                         CONCAT15((char)((uint)iVar7 >> 8),
                                                  CONCAT14((char)iVar7,
                                                           CONCAT13(((char)bVar67 >> 7) * -0x1f,
                                                                    ((uint3)((CONCAT12(bVar45,
                                                  CONCAT11(uVar48,uVar30)) & 0x1f1f1f) + 0x1f1f1f >>
                                                  5) & 0x10101) +
                                                  (CONCAT12(bVar45,CONCAT11(uVar48,uVar30)) &
                                                  0x1f1f1f) * 2)))));
          *puVar10 = CONCAT17(((char)bVar66 >> 7) * -0x1f,
                              CONCAT16((char)((uint)iVar17 >> 0x10),
                                       CONCAT15((char)((uint)iVar17 >> 8),
                                                CONCAT14((char)iVar17,
                                                         CONCAT13((char)(uVar62 >> 0xf) * '\x1f',
                                                                  ((uint3)((CONCAT12(uVar42,CONCAT11
                                                  (uVar44,(char)uVar28)) & 0x1f1f1f) + 0x1f1f1f >> 5
                                                  ) & 0x10101) +
                                                  (CONCAT12(uVar42,CONCAT11(uVar44,(char)uVar28)) &
                                                  0x1f1f1f) * 2)))));
          puVar10[3] = CONCAT17(((char)bVar73 >> 7) * -0x1f,
                                CONCAT16((char)((uint)iVar41 >> 0x10),
                                         CONCAT15((char)((uint)iVar41 >> 8),
                                                  CONCAT14((char)iVar41,
                                                           CONCAT13(((char)bVar71 >> 7) * -0x1f,
                                                                    ((uint3)(uVar35 + 0x1f1f1f >> 5)
                                                                    & 0x10101) + uVar35 * 2)))));
          puVar10[2] = CONCAT17(((char)bVar72 >> 7) * -0x1f,
                                CONCAT16((char)((uint)iVar33 >> 0x10),
                                         CONCAT15((char)((uint)iVar33 >> 8),
                                                  CONCAT14((char)iVar33,
                                                           CONCAT13(((char)bVar70 >> 7) * -0x1f,
                                                                    ((uint3)(uVar24 + 0x1f1f1f >> 5)
                                                                    & 0x10101) + uVar24 * 2)))));
          puVar10 = puVar10 + 4;
          puVar19 = puVar19 + 2;
        } while (param_3 + (ulong)(uVar53 - 1) * 4 + 4 != puVar10);
        uVar54 = uVar53 << 3;
        if (uVar25 == uVar53 * 8) goto LAB_0016a4f8;
      }
      uVar22 = *(ushort *)((long)puVar1 + (ulong)uVar54 * 2);
      uVar53 = (uVar22 >> 5 & 0x1f) << 8 | (uVar22 >> 10 & 0x1f) << 0x10 | uVar22 & 0x1f;
      *(uint *)((long)param_3 + (ulong)uVar54 * 4) =
           (uVar53 + 0x1f1f1f >> 5 & 0x10101) + uVar53 * 2 | (uint)(uVar22 >> 0xf) * 0x1f000000;
      uVar53 = uVar54 + 1;
      if (uVar53 < uVar25) {
        uVar22 = *(ushort *)((long)puVar1 + (ulong)uVar53 * 2);
        uVar61 = uVar54 + 2;
        uVar62 = (uVar22 >> 5 & 0x1f) << 8 | (uVar22 >> 10 & 0x1f) << 0x10 | uVar22 & 0x1f;
        *(uint *)((long)param_3 + (ulong)uVar53 * 4) =
             (uVar62 + 0x1f1f1f >> 5 & 0x10101) + uVar62 * 2 | (uint)(uVar22 >> 0xf) * 0x1f000000;
        if (uVar61 < uVar25) {
          uVar22 = *(ushort *)((long)puVar1 + (ulong)uVar61 * 2);
          uVar53 = uVar54 + 3;
          uVar62 = (uVar22 >> 5 & 0x1f) << 8 | (uVar22 >> 10 & 0x1f) << 0x10 | uVar22 & 0x1f;
          *(uint *)((long)param_3 + (ulong)uVar61 * 4) =
               (uVar62 + 0x1f1f1f >> 5 & 0x10101) + uVar62 * 2 | (uint)(uVar22 >> 0xf) * 0x1f000000;
          if (uVar53 < uVar25) {
            uVar22 = *(ushort *)((long)puVar1 + (ulong)uVar53 * 2);
            uVar61 = uVar54 + 4;
            uVar62 = (uVar22 >> 10 & 0x1f) << 0x10 | (uVar22 >> 5 & 0x1f) << 8 | uVar22 & 0x1f;
            *(uint *)((long)param_3 + (ulong)uVar53 * 4) =
                 (uVar62 + 0x1f1f1f >> 5 & 0x10101) + uVar62 * 2 |
                 (uint)(uVar22 >> 0xf) * 0x1f000000;
            if (uVar61 < uVar25) {
              uVar22 = *(ushort *)((long)puVar1 + (ulong)uVar61 * 2);
              uVar53 = uVar54 + 5;
              uVar62 = (uVar22 >> 10 & 0x1f) << 0x10 | (uVar22 >> 5 & 0x1f) << 8 | uVar22 & 0x1f;
              *(uint *)((long)param_3 + (ulong)uVar61 * 4) =
                   (uVar62 + 0x1f1f1f >> 5 & 0x10101) + uVar62 * 2 |
                   (uint)(uVar22 >> 0xf) * 0x1f000000;
              if (uVar53 < uVar25) {
                uVar22 = *(ushort *)((long)puVar1 + (ulong)uVar53 * 2);
                uVar54 = uVar54 + 6;
                uVar61 = (uVar22 >> 5 & 0x1f) << 8 | (uVar22 >> 10 & 0x1f) << 0x10 | uVar22 & 0x1f;
                *(uint *)((long)param_3 + (ulong)uVar53 * 4) =
                     (uVar61 + 0x1f1f1f >> 5 & 0x10101) + uVar61 * 2 |
                     (uint)(uVar22 >> 0xf) * 0x1f000000;
                if (uVar54 < uVar25) {
                  uVar22 = *(ushort *)((long)puVar1 + (ulong)uVar54 * 2);
                  uVar25 = (uVar22 >> 10 & 0x1f) << 0x10 | (uVar22 >> 5 & 0x1f) << 8 | uVar22 & 0x1f
                  ;
                  *(uint *)((long)param_3 + (ulong)uVar54 * 4) =
                       (uVar25 + 0x1f1f1f >> 5 & 0x10101) + uVar25 * 2 |
                       (uint)(uVar22 >> 0xf) * 0x1f000000;
                }
              }
            }
          }
        }
      }
    }
LAB_0016a4f8:
    lVar12 = lVar12 - ___stack_chk_guard;
    sVar14 = 0;
    if (lVar12 == 0) {
      return;
    }
    goto LAB_0016a7c0;
  }
  uVar18 = (ulong)(0x20000 - param_7);
  texture_cache_convert_split
            (param_1,param_2,
             (byte *)((long)param_3 +
                     (ulong)(((0x20000 - param_7 <<
                              (ulong)((byte)(&texels_per_hword_shift)[param_8 & 0xffffffff] & 0x1f))
                             >> 1) * (uint)(byte)bytes_per_dest_texel[param_8 & 0xffffffff])),
             (param_4 - 0x20000) + param_7,param_5,param_6 + 1 & 3,0,param_8,param_9);
  if (lVar21 != 0) goto LAB_00169f00;
LAB_0016a71c:
  iVar17 = (int)uVar18;
  if (uVar25 == 3) {
    texture_cache_convert_palette_null(param_2,param_5,param_9,0x10);
    uVar25 = iVar17 << 1;
joined_r0x0016b04c:
    sVar14 = (ulong)uVar25;
  }
  else {
    sVar14 = uVar18;
    if (uVar25 < 4) {
      if (uVar25 != 1) {
        if (uVar25 == 2) {
          texture_cache_convert_palette_null(param_2,param_5,param_9,4);
          goto joined_r0x0016a7bc;
        }
        goto LAB_0016a4f8;
      }
      piVar15 = *(int **)(param_2 + 0x18);
      *(char *)(param_2 + 0x4a) = (char)param_8;
    }
    else {
      if (uVar25 != 6) {
        if (uVar25 == 7) {
          iVar17 = (int)(uVar18 >> 1);
joined_r0x0016a7bc:
          uVar25 = iVar17 << 2;
          goto joined_r0x0016b04c;
        }
        if (uVar25 != 4) goto LAB_0016a4f8;
        texture_cache_convert_palette_null(param_2,param_5,param_9,0x100);
        goto joined_r0x0016b04c;
      }
      piVar15 = *(int **)(param_2 + 0x18);
      *(undefined *)(param_2 + 0x4a) = 1;
    }
    if (piVar15 == (int *)0x0) {
      piVar15 = (int *)malloc(0x400);
      *(int **)(param_2 + 0x18) = piVar15;
    }
    uVar22 = *param_5;
    uVar25 = (uVar22 >> 5 & 0x1f) << 8 | (uVar22 >> 10 & 0x1f) << 0x10 | uVar22 & 0x1f;
    *piVar15 = (uVar25 + 0x1f1f1f >> 5 & 0x10101) + uVar25 * 2;
  }
joined_r0x0016b04c:
  lVar12 = lVar12 - ___stack_chk_guard;
  if (lVar12 == 0) {
    memset(param_3,0,sVar14);
    return;
  }
LAB_0016a7c0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&__stack_chk_guard,lVar12,sVar14);
}


