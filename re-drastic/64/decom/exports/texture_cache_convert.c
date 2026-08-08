/*
 * Ghidra decompilation
 *
 * Function : texture_cache_convert
 * Address  : 00168660
 * Program  : drastic64
 */


/* WARNING: Removing unreachable block (ram,0x00169698) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void texture_cache_convert
               (long param_1,undefined8 *param_2,undefined8 *param_3,ushort *param_4,uint param_5,
               ulong param_6,int param_7)

{
  bool bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  uint *puVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar15;
  uint uVar16;
  int *piVar17;
  ulong *puVar18;
  size_t __n;
  undefined8 *puVar19;
  ushort uVar20;
  ushort uVar21;
  uint3 uVar22;
  uint6 uVar23;
  undefined uVar26;
  undefined uVar31;
  uint7 uVar24;
  undefined uVar27;
  uint uVar28;
  uint uVar29;
  undefined8 uVar25;
  int iVar30;
  uint3 uVar32;
  uint6 uVar33;
  uint7 uVar34;
  uint uVar36;
  uint uVar37;
  undefined8 uVar35;
  int iVar38;
  undefined uVar39;
  byte bVar40;
  undefined uVar41;
  byte bVar42;
  undefined uVar43;
  byte bVar44;
  undefined uVar45;
  undefined uVar46;
  undefined uVar48;
  uint uVar47;
  undefined uVar49;
  undefined uVar54;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  undefined uVar56;
  uint uVar55;
  undefined uVar57;
  undefined uVar62;
  uint uVar58;
  uint uVar59;
  uint uVar60;
  uint uVar61;
  byte bVar63;
  byte bVar64;
  undefined uVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  undefined uVar77;
  undefined8 *puVar14;
  
  lVar15 = ___stack_chk_guard;
  __n = param_6 & 0xffffffff;
  uVar16 = (uint)param_6;
  if (param_5 == 4) {
    if (param_3 == (undefined8 *)0x0) {
      texture_cache_convert_palette_null(param_1,param_4,param_7,0x100);
      goto joined_r0x00169710;
    }
    *(undefined *)(param_1 + 0x4a) = 1;
    puVar10 = *(uint **)(param_1 + 0x18);
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)malloc(0x400);
      *(uint **)(param_1 + 0x18) = puVar10;
    }
    uVar20 = *param_4;
    uVar50 = (uVar20 >> 5 & 0x1f) << 8 | (uVar20 >> 10 & 0x1f) << 0x10 | uVar20 & 0x1f;
    uVar50 = (uVar50 + 0x1f1f1f >> 5 & 0x10101) + uVar50 * 2;
    if (param_7 == 0) {
      uVar50 = uVar50 | 0x1f000000;
    }
    puVar18 = (ulong *)(puVar10 + 1);
    *puVar10 = uVar50;
    puVar13 = (undefined8 *)(param_4 + 1);
    do {
      puVar19 = puVar13 + 2;
      uVar35 = puVar13[1];
      uVar25 = *puVar13;
      uVar20 = (ushort)((ulong)uVar35 >> 0x10);
      uVar21 = (ushort)((ulong)uVar35 >> 0x30);
      uVar26 = (undefined)((ulong)uVar25 >> 0x20);
      uVar27 = (undefined)((ulong)uVar25 >> 0x30);
      uVar31 = (undefined)((ushort)uVar25 >> 5);
      uVar39 = (undefined)((ushort)((ulong)uVar25 >> 0x10) >> 5);
      uVar41 = (undefined)((ushort)((ulong)uVar25 >> 0x20) >> 5);
      uVar43 = (undefined)(ushort)((ulong)uVar25 >> 0x35);
      uVar23 = CONCAT15((char)(uVar20 >> 5),
                        (uint5)((byte)((CONCAT24(uVar20,(uint)uVar35) & 0xffff0000ffff) >> 5) & 0x1f
                               ) << 8) & 0x1fffffffffff;
      uVar33 = CONCAT15((char)(uVar21 >> 5),
                        (uint5)((byte)(CONCAT24(uVar21,(uint)(ushort)((ulong)uVar35 >> 0x20)) >> 5)
                               & 0x1f) << 8) & 0x1fffffffffff;
      bVar63 = (byte)((ulong)uVar25 >> 8) >> 2;
      bVar64 = (byte)((ulong)uVar25 >> 0x18) >> 2;
      bVar66 = (byte)((ulong)uVar25 >> 0x28) >> 2;
      bVar67 = (byte)((ulong)uVar25 >> 0x3a);
      uVar22 = CONCAT12((char)((ulong)uVar25 >> 0x10),(ushort)((byte)uVar25 & 0x1f)) & 0x1fffff;
      uVar24 = CONCAT16((byte)((ulong)uVar35 >> 0x18) >> 2,
                        CONCAT15((char)(uVar23 >> 0x28),
                                 (uint5)(uint3)((CONCAT11((char)(((uint)uVar35 & 0xffff) >> 10),
                                                          (char)(uVar23 >> 8)) & 0x1fff) << 8))) &
               0x1fffffffffffff;
      uVar34 = CONCAT16((byte)((ulong)uVar35 >> 0x3a),
                        CONCAT15((char)(uVar33 >> 0x28),
                                 (uint5)(uint3)((CONCAT11((byte)((ulong)uVar35 >> 0x28) >> 2,
                                                          (char)(uVar33 >> 8)) & 0x1fff) << 8))) &
               0x1fffffffffffff;
      uVar45 = (undefined)uVar22;
      uVar46 = (undefined)(uVar22 >> 0x10);
      uVar50 = (uint)(CONCAT12((char)(uVar24 >> 0x10),CONCAT11((char)(uVar24 >> 8),(char)uVar35)) &
                     0xffff1f);
      uVar58 = (uint)(CONCAT12((char)(uVar34 >> 0x10),
                               CONCAT11((char)(uVar34 >> 8),(char)((ulong)uVar35 >> 0x20))) &
                     0xffff1f);
      uVar60 = (CONCAT12(bVar64,CONCAT11(uVar39,uVar46)) & 0x1f1fff) + 0x1f1f1f;
      uVar29 = (CONCAT12(bVar67,CONCAT11(uVar43,uVar27)) & 0x1f1f1f) + 0x1f1f1f;
      uVar51 = (uint)((uint3)(CONCAT16((char)(uVar24 >> 0x30),
                                       CONCAT15((char)(uVar24 >> 0x28),
                                                CONCAT14((char)((ulong)uVar35 >> 0x10),uVar50))) >>
                             0x20) & 0xffff1f);
      uVar59 = (uint)((uint3)(CONCAT16((char)(uVar34 >> 0x30),
                                       CONCAT15((char)(uVar34 >> 0x28),
                                                CONCAT14((char)((ulong)uVar35 >> 0x30),uVar58))) >>
                             0x20) & 0xffff1f);
      uVar53 = uVar60 >> 5;
      uVar61 = uVar29 >> 5;
      uVar52 = (uint)((uint3)((CONCAT12(bVar63,CONCAT11(uVar31,uVar45)) & 0x1f1fff) + 0x1f1f1f >> 5)
                     & 0x10101);
      uVar28 = (uint)((uint3)((CONCAT12(bVar66,CONCAT11(uVar41,uVar26)) & 0x1f1f1f) + 0x1f1f1f >> 5)
                     & 0x10101);
      iVar7 = (uint)((uint3)(CONCAT16((char)((uint3)(uVar60 >> 0xd) >> 8),
                                      CONCAT15((char)(uVar53 >> 8),CONCAT14((char)uVar53,uVar52)))
                            >> 0x20) & 0x10101) +
              (uint)(CONCAT12(bVar64,CONCAT11(uVar39,uVar46)) & 0x1f1fff) * 2;
      iVar8 = (uint)((uint3)(CONCAT16((char)((uint3)(uVar29 >> 0xd) >> 8),
                                      CONCAT15((char)(uVar61 >> 8),CONCAT14((char)uVar61,uVar28)))
                            >> 0x20) & 0x10101) +
              (uint)(CONCAT12(bVar67,CONCAT11(uVar43,uVar27)) & 0x1f1f1f) * 2;
      puVar18[1] = (ulong)CONCAT16((char)((uint)iVar8 >> 0x10),
                                   CONCAT15((char)((uint)iVar8 >> 8),
                                            CONCAT14((char)iVar8,
                                                     uVar28 + (uint)(CONCAT12(bVar66,CONCAT11(uVar41
                                                  ,uVar26)) & 0x1f1f1f) * 2))) | 0x1f0000001f000000;
      *puVar18 = (ulong)CONCAT16((char)((uint)iVar7 >> 0x10),
                                 CONCAT15((char)((uint)iVar7 >> 8),
                                          CONCAT14((char)iVar7,
                                                   uVar52 + (uint)(CONCAT12(bVar63,CONCAT11(uVar31,
                                                  uVar45)) & 0x1f1fff) * 2))) | 0x1f0000001f000000;
      puVar18[3] = CONCAT44((uint)((uint3)(uVar59 + 0x1f1f1f >> 5) & 0x10101) + uVar59 * 2,
                            (uint)((uint3)(uVar58 + 0x1f1f1f >> 5) & 0x10101) + uVar58 * 2) |
                   0x1f0000001f000000;
      puVar18[2] = CONCAT44((uint)((uint3)(uVar51 + 0x1f1f1f >> 5) & 0x10101) + uVar51 * 2,
                            (uint)((uint3)(uVar50 + 0x1f1f1f >> 5) & 0x10101) + uVar50 * 2) |
                   0x1f0000001f000000;
      puVar18 = puVar18 + 4;
      puVar13 = puVar19;
    } while ((undefined8 *)(param_4 + 0xf9) != puVar19);
    uVar20 = param_4[0xfb];
    uVar21 = param_4[0xf9];
    uVar2 = param_4[0xfa];
    uVar3 = param_4[0xfd];
    uVar4 = param_4[0xfe];
    uVar5 = param_4[0xff];
    uVar6 = param_4[0xfc];
    uVar50 = (uVar3 >> 5 & 0x1f) << 8 | (uVar3 >> 10 & 0x1f) << 0x10 | uVar3 & 0x1f;
    uVar51 = (uVar4 >> 5 & 0x1f) << 8 | (uVar4 >> 10 & 0x1f) << 0x10 | uVar4 & 0x1f;
    uVar58 = (uVar20 >> 5 & 0x1f) << 8 | (uVar20 >> 10 & 0x1f) << 0x10 | uVar20 & 0x1f;
    uVar59 = (uVar6 >> 5 & 0x1f) << 8 | (uVar6 >> 10 & 0x1f) << 0x10 | uVar6 & 0x1f;
    uVar52 = (uVar5 >> 5 & 0x1f) << 8 | (uVar5 >> 10 & 0x1f) << 0x10 | uVar5 & 0x1f;
    uVar60 = (uVar21 >> 5 & 0x1f) << 8 | (uVar21 >> 10 & 0x1f) << 0x10 | uVar21 & 0x1f;
    uVar53 = (uVar2 >> 5 & 0x1f) << 8 | (uVar2 >> 10 & 0x1f) << 0x10 | uVar2 & 0x1f;
    puVar10[0xf9] = (uVar60 + 0x1f1f1f >> 5 & 0x10101) + uVar60 * 2 | 0x1f000000;
    puVar10[0xfa] = (uVar53 + 0x1f1f1f >> 5 & 0x10101) + uVar53 * 2 | 0x1f000000;
    puVar10[0xfb] = (uVar58 + 0x1f1f1f >> 5 & 0x10101) + uVar58 * 2 | 0x1f000000;
    puVar10[0xfc] = (uVar59 + 0x1f1f1f >> 5 & 0x10101) + uVar59 * 2 | 0x1f000000;
    puVar10[0xfd] = (uVar50 + 0x1f1f1f >> 5 & 0x10101) + uVar50 * 2 | 0x1f000000;
    puVar10[0xfe] = (uVar51 + 0x1f1f1f >> 5 & 0x10101) + uVar51 * 2 | 0x1f000000;
    puVar10[0xff] = (uVar52 + 0x1f1f1f >> 5 & 0x10101) + uVar52 * 2 | 0x1f000000;
    if (uVar16 != 0) {
      bVar1 = (byte *)((long)param_3 + (0xf - (long)param_2)) < (byte *)0x1f;
      if ((bVar1 || uVar16 - 1 < 0xe) || !bVar1 && uVar16 - 1 == 0xe) {
        lVar11 = 0;
        do {
          *(byte *)((long)param_2 + lVar11) = *(byte *)((long)param_3 + lVar11);
          lVar11 = lVar11 + 1;
        } while ((uint)lVar11 < uVar16);
      }
      else {
        lVar11 = 0;
        do {
          uVar25 = *(undefined8 *)((long)param_3 + lVar11);
          ((undefined8 *)((long)param_2 + lVar11))[1] = ((undefined8 *)((long)param_3 + lVar11))[1];
          *(undefined8 *)((long)param_2 + lVar11) = uVar25;
          lVar11 = lVar11 + 0x10;
        } while (((ulong)((uVar16 >> 4) - 1) + 1) * 0x10 - lVar11 != 0);
LAB_00168d24:
        uVar12 = param_6 & 0xfffffff0;
        uVar50 = uVar16 & 0xfffffff0;
        if ((param_6 & 0xf) != 0) {
          *(byte *)((long)param_2 + (ulong)uVar50) = *(byte *)((long)param_3 + (ulong)uVar50);
          if (uVar50 + 1 < uVar16) {
            *(byte *)((long)param_2 + uVar12 + 1) = *(byte *)((long)param_3 + (ulong)(uVar50 + 1));
            if (uVar50 + 2 < uVar16) {
              *(byte *)((long)param_2 + uVar12 + 2) = *(byte *)((long)param_3 + (ulong)(uVar50 + 2))
              ;
              if (uVar50 + 3 < uVar16) {
                *(byte *)((long)param_2 + uVar12 + 3) =
                     *(byte *)((long)param_3 + (ulong)(uVar50 + 3));
                if (uVar50 + 4 < uVar16) {
                  *(byte *)((long)param_2 + uVar12 + 4) =
                       *(byte *)((long)param_3 + (ulong)(uVar50 + 4));
                  if (uVar50 + 5 < uVar16) {
                    *(byte *)((long)param_2 + uVar12 + 5) =
                         *(byte *)((long)param_3 + (ulong)(uVar50 + 5));
                    if (uVar50 + 6 < uVar16) {
                      *(byte *)((long)param_2 + uVar12 + 6) =
                           *(byte *)((long)param_3 + (ulong)(uVar50 + 6));
                      if (uVar50 + 7 < uVar16) {
                        *(byte *)((long)param_2 + uVar12 + 7) =
                             *(byte *)((long)param_3 + (ulong)(uVar50 + 7));
                        if (uVar50 + 8 < uVar16) {
                          *(byte *)((long)param_2 + uVar12 + 8) =
                               *(byte *)((long)param_3 + (ulong)(uVar50 + 8));
                          if (uVar50 + 9 < uVar16) {
                            *(byte *)((long)param_2 + uVar12 + 9) =
                                 *(byte *)((long)param_3 + (ulong)(uVar50 + 9));
                            if (uVar50 + 10 < uVar16) {
                              *(byte *)((long)param_2 + uVar12 + 10) =
                                   *(byte *)((long)param_3 + (ulong)(uVar50 + 10));
                              if (uVar50 + 0xb < uVar16) {
                                *(byte *)((long)param_2 + uVar12 + 0xb) =
                                     *(byte *)((long)param_3 + (ulong)(uVar50 + 0xb));
                                if (uVar50 + 0xc < uVar16) {
                                  *(byte *)((long)param_2 + uVar12 + 0xc) =
                                       *(byte *)((long)param_3 + (ulong)(uVar50 + 0xc));
                                  if (uVar50 + 0xd < uVar16) {
                                    *(byte *)((long)param_2 + uVar12 + 0xd) =
                                         *(byte *)((long)param_3 + (ulong)(uVar50 + 0xd));
                                    if (uVar50 + 0xe < uVar16) {
                                      *(byte *)((long)param_2 + uVar12 + 0xe) =
                                           *(byte *)((long)param_3 + (ulong)(uVar50 + 0xe));
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
  else if (param_5 < 5) {
    if (param_5 == 2) {
      if (param_3 == (undefined8 *)0x0) {
        texture_cache_convert_palette_null(param_1,param_4,param_7,4);
        __n = (size_t)(uVar16 << 2);
        goto joined_r0x00169710;
      }
      *(undefined *)(param_1 + 0x4a) = 1;
      puVar10 = *(uint **)(param_1 + 0x18);
      if (puVar10 == (uint *)0x0) {
        puVar10 = (uint *)malloc(0x10);
        *(uint **)(param_1 + 0x18) = puVar10;
      }
      uVar20 = *param_4;
      uVar50 = (uVar20 >> 5 & 0x1f) << 8 | (uVar20 >> 10 & 0x1f) << 0x10 | uVar20 & 0x1f;
      uVar50 = (uVar50 + 0x1f1f1f >> 5 & 0x10101) + uVar50 * 2;
      if (param_7 == 0) {
        uVar50 = uVar50 | 0x1f000000;
      }
      uVar20 = param_4[1];
      uVar21 = param_4[2];
      uVar2 = param_4[3];
      uVar51 = (uVar2 >> 5 & 0x1f) << 8 | (uVar2 >> 10 & 0x1f) << 0x10 | uVar2 & 0x1f;
      uVar58 = (uVar20 >> 5 & 0x1f) << 8 | (uVar20 >> 10 & 0x1f) << 0x10 | uVar20 & 0x1f;
      uVar59 = (uVar21 >> 5 & 0x1f) << 8 | (uVar21 >> 10 & 0x1f) << 0x10 | uVar21 & 0x1f;
      *puVar10 = uVar50;
      puVar10[1] = (uVar58 + 0x1f1f1f >> 5 & 0x10101) + uVar58 * 2 | 0x1f000000;
      puVar10[2] = (uVar59 + 0x1f1f1f >> 5 & 0x10101) + uVar59 * 2 | 0x1f000000;
      puVar10[3] = (uVar51 + 0x1f1f1f >> 5 & 0x10101) + uVar51 * 2 | 0x1f000000;
      if (uVar16 != 0) {
        bVar9 = param_3 < (undefined8 *)((long)param_2 + __n * 4);
        bVar1 = param_2 < (undefined8 *)((long)param_3 + __n);
        uVar50 = uVar16 - 1;
        if ((bVar9 && bVar1 || uVar50 < 0xe) || (!bVar9 || !bVar1) && uVar50 == 0xe) {
          puVar13 = param_3;
          do {
            puVar19 = (undefined8 *)((long)puVar13 + 1);
            bVar63 = *(byte *)puVar13;
            *(byte *)param_2 = bVar63 & 3;
            *(byte *)((long)param_2 + 1) = bVar63 >> 2 & 3;
            *(byte *)((long)param_2 + 2) = bVar63 >> 4 & 3;
            *(byte *)((long)param_2 + 3) = bVar63 >> 6;
            puVar13 = puVar19;
            param_2 = (undefined8 *)((long)param_2 + 4);
          } while ((undefined8 *)((long)param_3 + (ulong)uVar50 + 1) != puVar19);
        }
        else {
          puVar13 = param_3;
          puVar19 = param_2;
          do {
            puVar14 = puVar13 + 2;
            uVar35 = puVar13[1];
            uVar25 = *puVar13;
            bVar63 = (byte)uVar25;
            bVar64 = (byte)((ulong)uVar25 >> 8);
            bVar66 = (byte)((ulong)uVar25 >> 0x10);
            bVar67 = (byte)((ulong)uVar25 >> 0x18);
            bVar68 = (byte)((ulong)uVar25 >> 0x20);
            bVar69 = (byte)((ulong)uVar25 >> 0x28);
            bVar70 = (byte)((ulong)uVar25 >> 0x30);
            bVar40 = (byte)((ulong)uVar25 >> 0x38);
            bVar42 = (byte)uVar35;
            bVar44 = (byte)((ulong)uVar35 >> 8);
            bVar71 = (byte)((ulong)uVar35 >> 0x10);
            bVar72 = (byte)((ulong)uVar35 >> 0x18);
            bVar73 = (byte)((ulong)uVar35 >> 0x20);
            bVar74 = (byte)((ulong)uVar35 >> 0x28);
            bVar75 = (byte)((ulong)uVar35 >> 0x30);
            bVar76 = (byte)((ulong)uVar35 >> 0x38);
            uVar20 = (ushort)uVar25 & 0x303;
            uVar21 = (ushort)uVar35 & 0x303;
            *(byte *)puVar19 = (byte)uVar20;
            *(byte *)((long)puVar19 + 1) = bVar63 >> 2 & 3;
            *(byte *)((long)puVar19 + 2) = bVar63 >> 4 & 3;
            *(byte *)((long)puVar19 + 3) = bVar63 >> 6;
            *(byte *)((long)puVar19 + 4) = (byte)(uVar20 >> 8);
            *(byte *)((long)puVar19 + 5) = bVar64 >> 2 & 3;
            *(byte *)((long)puVar19 + 6) = bVar64 >> 4 & 3;
            *(byte *)((long)puVar19 + 7) = bVar64 >> 6;
            *(byte *)(puVar19 + 1) = bVar66 & 3;
            *(byte *)((long)puVar19 + 9) = bVar66 >> 2 & 3;
            *(byte *)((long)puVar19 + 10) = bVar66 >> 4 & 3;
            *(byte *)((long)puVar19 + 0xb) = bVar66 >> 6;
            *(byte *)((long)puVar19 + 0xc) = bVar67 & 3;
            *(byte *)((long)puVar19 + 0xd) = bVar67 >> 2 & 3;
            *(byte *)((long)puVar19 + 0xe) = bVar67 >> 4 & 3;
            *(byte *)((long)puVar19 + 0xf) = bVar67 >> 6;
            *(byte *)(puVar19 + 2) = bVar68 & 3;
            *(byte *)((long)puVar19 + 0x11) = bVar68 >> 2 & 3;
            *(byte *)((long)puVar19 + 0x12) = bVar68 >> 4 & 3;
            *(byte *)((long)puVar19 + 0x13) = bVar68 >> 6;
            *(byte *)((long)puVar19 + 0x14) = bVar69 & 3;
            *(byte *)((long)puVar19 + 0x15) = bVar69 >> 2 & 3;
            *(byte *)((long)puVar19 + 0x16) = bVar69 >> 4 & 3;
            *(byte *)((long)puVar19 + 0x17) = bVar69 >> 6;
            *(byte *)(puVar19 + 3) = bVar70 & 3;
            *(byte *)((long)puVar19 + 0x19) = bVar70 >> 2 & 3;
            *(byte *)((long)puVar19 + 0x1a) = bVar70 >> 4 & 3;
            *(byte *)((long)puVar19 + 0x1b) = bVar70 >> 6;
            *(byte *)((long)puVar19 + 0x1c) = bVar40 & 3;
            *(byte *)((long)puVar19 + 0x1d) = bVar40 >> 2 & 3;
            *(byte *)((long)puVar19 + 0x1e) = bVar40 >> 4 & 3;
            *(byte *)((long)puVar19 + 0x1f) = bVar40 >> 6;
            *(byte *)(puVar19 + 4) = (byte)uVar21;
            *(byte *)((long)puVar19 + 0x21) = bVar42 >> 2 & 3;
            *(byte *)((long)puVar19 + 0x22) = bVar42 >> 4 & 3;
            *(byte *)((long)puVar19 + 0x23) = bVar42 >> 6;
            *(byte *)((long)puVar19 + 0x24) = (byte)(uVar21 >> 8);
            *(byte *)((long)puVar19 + 0x25) = bVar44 >> 2 & 3;
            *(byte *)((long)puVar19 + 0x26) = bVar44 >> 4 & 3;
            *(byte *)((long)puVar19 + 0x27) = bVar44 >> 6;
            *(byte *)(puVar19 + 5) = bVar71 & 3;
            *(byte *)((long)puVar19 + 0x29) = bVar71 >> 2 & 3;
            *(byte *)((long)puVar19 + 0x2a) = bVar71 >> 4 & 3;
            *(byte *)((long)puVar19 + 0x2b) = bVar71 >> 6;
            *(byte *)((long)puVar19 + 0x2c) = bVar72 & 3;
            *(byte *)((long)puVar19 + 0x2d) = bVar72 >> 2 & 3;
            *(byte *)((long)puVar19 + 0x2e) = bVar72 >> 4 & 3;
            *(byte *)((long)puVar19 + 0x2f) = bVar72 >> 6;
            *(byte *)(puVar19 + 6) = bVar73 & 3;
            *(byte *)((long)puVar19 + 0x31) = bVar73 >> 2 & 3;
            *(byte *)((long)puVar19 + 0x32) = bVar73 >> 4 & 3;
            *(byte *)((long)puVar19 + 0x33) = bVar73 >> 6;
            *(byte *)((long)puVar19 + 0x34) = bVar74 & 3;
            *(byte *)((long)puVar19 + 0x35) = bVar74 >> 2 & 3;
            *(byte *)((long)puVar19 + 0x36) = bVar74 >> 4 & 3;
            *(byte *)((long)puVar19 + 0x37) = bVar74 >> 6;
            *(byte *)(puVar19 + 7) = bVar75 & 3;
            *(byte *)((long)puVar19 + 0x39) = bVar75 >> 2 & 3;
            *(byte *)((long)puVar19 + 0x3a) = bVar75 >> 4 & 3;
            *(byte *)((long)puVar19 + 0x3b) = bVar75 >> 6;
            *(byte *)((long)puVar19 + 0x3c) = bVar76 & 3;
            *(byte *)((long)puVar19 + 0x3d) = bVar76 >> 2 & 3;
            *(byte *)((long)puVar19 + 0x3e) = bVar76 >> 4 & 3;
            *(byte *)((long)puVar19 + 0x3f) = bVar76 >> 6;
            puVar19 = puVar19 + 8;
            puVar13 = puVar14;
          } while (param_3 + ((ulong)((uVar16 >> 4) - 1) + 1) * 2 != puVar14);
          lVar11 = (param_6 & 0xfffffff0) * 4;
          uVar50 = uVar16 & 0xfffffff0;
          if ((param_6 & 0xf) != 0) {
            bVar63 = *(byte *)((long)param_3 + (ulong)uVar50);
            *(byte *)((long)param_2 + lVar11) = bVar63 & 3;
            *(byte *)((long)param_2 + lVar11 + 1) = bVar63 >> 2 & 3;
            *(byte *)((long)param_2 + lVar11 + 2) = bVar63 >> 4 & 3;
            *(byte *)((long)param_2 + lVar11 + 3) = bVar63 >> 6;
            if (uVar50 + 1 < uVar16) {
              bVar63 = *(byte *)((long)param_3 + (ulong)(uVar50 + 1));
              *(byte *)((long)param_2 + lVar11 + 4) = bVar63 & 3;
              *(byte *)((long)param_2 + lVar11 + 5) = bVar63 >> 2 & 3;
              *(byte *)((long)param_2 + lVar11 + 6) = bVar63 >> 4 & 3;
              *(byte *)((long)param_2 + lVar11 + 7) = bVar63 >> 6;
              if (uVar50 + 2 < uVar16) {
                bVar63 = *(byte *)((long)param_3 + (ulong)(uVar50 + 2));
                *(byte *)((long)param_2 + lVar11 + 8) = bVar63 & 3;
                *(byte *)((long)param_2 + lVar11 + 9) = bVar63 >> 2 & 3;
                *(byte *)((long)param_2 + lVar11 + 10) = bVar63 >> 4 & 3;
                *(byte *)((long)param_2 + lVar11 + 0xb) = bVar63 >> 6;
                if (uVar50 + 3 < uVar16) {
                  bVar63 = *(byte *)((long)param_3 + (ulong)(uVar50 + 3));
                  *(byte *)((long)param_2 + lVar11 + 0xc) = bVar63 & 3;
                  *(byte *)((long)param_2 + lVar11 + 0xd) = bVar63 >> 2 & 3;
                  *(byte *)((long)param_2 + lVar11 + 0xe) = bVar63 >> 4 & 3;
                  *(byte *)((long)param_2 + lVar11 + 0xf) = bVar63 >> 6;
                  if (uVar50 + 4 < uVar16) {
                    bVar63 = *(byte *)((long)param_3 + (ulong)(uVar50 + 4));
                    *(byte *)((long)param_2 + lVar11 + 0x10) = bVar63 & 3;
                    *(byte *)((long)param_2 + lVar11 + 0x11) = bVar63 >> 2 & 3;
                    *(byte *)((long)param_2 + lVar11 + 0x12) = bVar63 >> 4 & 3;
                    *(byte *)((long)param_2 + lVar11 + 0x13) = bVar63 >> 6;
                    if (uVar50 + 5 < uVar16) {
                      bVar63 = *(byte *)((long)param_3 + (ulong)(uVar50 + 5));
                      *(byte *)((long)param_2 + lVar11 + 0x14) = bVar63 & 3;
                      *(byte *)((long)param_2 + lVar11 + 0x15) = bVar63 >> 2 & 3;
                      *(byte *)((long)param_2 + lVar11 + 0x16) = bVar63 >> 4 & 3;
                      *(byte *)((long)param_2 + lVar11 + 0x17) = bVar63 >> 6;
                      if (uVar50 + 6 < uVar16) {
                        bVar63 = *(byte *)((long)param_3 + (ulong)(uVar50 + 6));
                        *(byte *)((long)param_2 + lVar11 + 0x18) = bVar63 & 3;
                        *(byte *)((long)param_2 + lVar11 + 0x19) = bVar63 >> 2 & 3;
                        *(byte *)((long)param_2 + lVar11 + 0x1a) = bVar63 >> 4 & 3;
                        *(byte *)((long)param_2 + lVar11 + 0x1b) = bVar63 >> 6;
                        if (uVar50 + 7 < uVar16) {
                          bVar63 = *(byte *)((long)param_3 + (ulong)(uVar50 + 7));
                          *(byte *)((long)param_2 + lVar11 + 0x1c) = bVar63 & 3;
                          *(byte *)((long)param_2 + lVar11 + 0x1d) = bVar63 >> 2 & 3;
                          *(byte *)((long)param_2 + lVar11 + 0x1e) = bVar63 >> 4 & 3;
                          *(byte *)((long)param_2 + lVar11 + 0x1f) = bVar63 >> 6;
                          if (uVar50 + 8 < uVar16) {
                            bVar63 = *(byte *)((long)param_3 + (ulong)(uVar50 + 8));
                            *(byte *)((long)param_2 + lVar11 + 0x20) = bVar63 & 3;
                            *(byte *)((long)param_2 + lVar11 + 0x21) = bVar63 >> 2 & 3;
                            *(byte *)((long)param_2 + lVar11 + 0x22) = bVar63 >> 4 & 3;
                            *(byte *)((long)param_2 + lVar11 + 0x23) = bVar63 >> 6;
                            if (uVar50 + 9 < uVar16) {
                              bVar63 = *(byte *)((long)param_3 + (ulong)(uVar50 + 9));
                              *(byte *)((long)param_2 + lVar11 + 0x24) = bVar63 & 3;
                              *(byte *)((long)param_2 + lVar11 + 0x25) = bVar63 >> 2 & 3;
                              *(byte *)((long)param_2 + lVar11 + 0x26) = bVar63 >> 4 & 3;
                              *(byte *)((long)param_2 + lVar11 + 0x27) = bVar63 >> 6;
                              if (uVar50 + 10 < uVar16) {
                                bVar63 = *(byte *)((long)param_3 + (ulong)(uVar50 + 10));
                                *(byte *)((long)param_2 + lVar11 + 0x28) = bVar63 & 3;
                                *(byte *)((long)param_2 + lVar11 + 0x29) = bVar63 >> 2 & 3;
                                *(byte *)((long)param_2 + lVar11 + 0x2a) = bVar63 >> 4 & 3;
                                *(byte *)((long)param_2 + lVar11 + 0x2b) = bVar63 >> 6;
                                if (uVar50 + 0xb < uVar16) {
                                  bVar63 = *(byte *)((long)param_3 + (ulong)(uVar50 + 0xb));
                                  *(byte *)((long)param_2 + lVar11 + 0x2c) = bVar63 & 3;
                                  *(byte *)((long)param_2 + lVar11 + 0x2d) = bVar63 >> 2 & 3;
                                  *(byte *)((long)param_2 + lVar11 + 0x2e) = bVar63 >> 4 & 3;
                                  *(byte *)((long)param_2 + lVar11 + 0x2f) = bVar63 >> 6;
                                  if (uVar50 + 0xc < uVar16) {
                                    bVar63 = *(byte *)((long)param_3 + (ulong)(uVar50 + 0xc));
                                    *(byte *)((long)param_2 + lVar11 + 0x30) = bVar63 & 3;
                                    *(byte *)((long)param_2 + lVar11 + 0x31) = bVar63 >> 2 & 3;
                                    *(byte *)((long)param_2 + lVar11 + 0x32) = bVar63 >> 4 & 3;
                                    *(byte *)((long)param_2 + lVar11 + 0x33) = bVar63 >> 6;
                                    if (uVar50 + 0xd < uVar16) {
                                      bVar63 = *(byte *)((long)param_3 + (ulong)(uVar50 + 0xd));
                                      *(byte *)((long)param_2 + lVar11 + 0x34) = bVar63 & 3;
                                      *(byte *)((long)param_2 + lVar11 + 0x35) = bVar63 >> 2 & 3;
                                      *(byte *)((long)param_2 + lVar11 + 0x36) = bVar63 >> 4 & 3;
                                      *(byte *)((long)param_2 + lVar11 + 0x37) = bVar63 >> 6;
                                      if (uVar50 + 0xe < uVar16) {
                                        bVar63 = *(byte *)((long)param_3 + (ulong)(uVar50 + 0xe));
                                        *(byte *)((long)param_2 + lVar11 + 0x38) = bVar63 & 3;
                                        *(byte *)((long)param_2 + lVar11 + 0x39) = bVar63 >> 2 & 3;
                                        *(byte *)((long)param_2 + lVar11 + 0x3a) = bVar63 >> 4 & 3;
                                        *(byte *)((long)param_2 + lVar11 + 0x3b) = bVar63 >> 6;
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
      if (param_5 == 3) {
        if (param_3 != (undefined8 *)0x0) {
          *(undefined *)(param_1 + 0x4a) = 1;
          puVar10 = *(uint **)(param_1 + 0x18);
          if (puVar10 == (uint *)0x0) {
            puVar10 = (uint *)malloc(0x40);
            *(uint **)(param_1 + 0x18) = puVar10;
          }
          uVar20 = *param_4;
          uVar16 = (uVar20 >> 5 & 0x1f) << 8 | (uVar20 >> 10 & 0x1f) << 0x10 | uVar20 & 0x1f;
          uVar16 = (uVar16 + 0x1f1f1f >> 5 & 0x10101) + uVar16 * 2;
          if (param_7 == 0) {
            uVar16 = uVar16 | 0x1f000000;
          }
          uVar35 = *(undefined8 *)(param_4 + 5);
          uVar25 = *(undefined8 *)(param_4 + 1);
          uVar51 = (uint)uVar25 & 0xffff;
          uVar50 = (uint)uVar35 & 0xffff;
          uVar41 = (undefined)(uVar51 >> 5);
          uVar43 = (undefined)((ushort)((ulong)uVar25 >> 0x10) >> 5);
          uVar45 = (undefined)((ushort)((ulong)uVar25 >> 0x20) >> 5);
          uVar46 = (undefined)(ushort)((ulong)uVar25 >> 0x35);
          uVar26 = (undefined)(uVar50 >> 5);
          uVar27 = (undefined)((ushort)((ulong)uVar35 >> 0x10) >> 5);
          uVar31 = (undefined)((ushort)((ulong)uVar35 >> 0x20) >> 5);
          uVar39 = (undefined)(ushort)((ulong)uVar35 >> 0x35);
          uVar48 = (undefined)((ulong)uVar25 >> 0x10);
          uVar49 = (undefined)((ulong)uVar25 >> 0x20);
          uVar54 = (undefined)((ulong)uVar25 >> 0x30);
          uVar56 = (undefined)((ulong)uVar35 >> 0x10);
          uVar57 = (undefined)((ulong)uVar35 >> 0x20);
          uVar62 = (undefined)((ulong)uVar35 >> 0x30);
          uVar77 = (undefined)(uVar51 >> 10);
          bVar67 = (byte)((ulong)uVar25 >> 0x18) >> 2;
          bVar68 = (byte)((ulong)uVar25 >> 0x28) >> 2;
          bVar69 = (byte)((ulong)uVar25 >> 0x3a);
          uVar65 = (undefined)(uVar50 >> 10);
          bVar63 = (byte)((ulong)uVar35 >> 0x18) >> 2;
          bVar64 = (byte)((ulong)uVar35 >> 0x28) >> 2;
          bVar66 = (byte)((ulong)uVar35 >> 0x3a);
          uVar20 = param_4[0xb];
          uVar21 = param_4[0xe];
          uVar50 = (CONCAT12(bVar67,CONCAT11(uVar43,uVar48)) & 0x1f1f1f) + 0x1f1f1f;
          uVar58 = (CONCAT12(bVar69,CONCAT11(uVar46,uVar54)) & 0x1f1f1f) + 0x1f1f1f;
          uVar2 = param_4[10];
          uVar28 = (CONCAT12(bVar63,CONCAT11(uVar27,uVar56)) & 0x1f1f1f) + 0x1f1f1f;
          uVar36 = (CONCAT12(bVar66,CONCAT11(uVar39,uVar62)) & 0x1f1f1f) + 0x1f1f1f;
          uVar3 = param_4[0xc];
          uVar51 = uVar50 >> 5;
          uVar59 = uVar58 >> 5;
          uVar29 = uVar28 >> 5;
          uVar37 = uVar36 >> 5;
          uVar4 = param_4[0xd];
          uVar5 = param_4[9];
          uVar6 = param_4[0xf];
          *puVar10 = uVar16;
          uVar47 = (uint)((uint3)((CONCAT12(uVar77,CONCAT11(uVar41,(char)uVar25)) & 0x1f1f1f) +
                                  0x1f1f1f >> 5) & 0x10101);
          uVar55 = (uint)((uint3)((CONCAT12(bVar68,CONCAT11(uVar45,uVar49)) & 0x1f1f1f) + 0x1f1f1f
                                 >> 5) & 0x10101);
          uVar53 = (uint)((uint3)((CONCAT12(uVar65,CONCAT11(uVar26,(char)uVar35)) & 0x1f1f1f) +
                                  0x1f1f1f >> 5) & 0x10101);
          uVar61 = (uint)((uint3)((CONCAT12(bVar64,CONCAT11(uVar31,uVar57)) & 0x1f1f1f) + 0x1f1f1f
                                 >> 5) & 0x10101);
          iVar7 = (uint)((uint3)(CONCAT16((char)((uint3)(uVar50 >> 0xd) >> 8),
                                          CONCAT15((char)(uVar51 >> 8),CONCAT14((char)uVar51,uVar47)
                                                  )) >> 0x20) & 0x10101) +
                  (uint)(CONCAT12(bVar67,CONCAT11(uVar43,uVar48)) & 0x1f1f1f) * 2;
          iVar8 = (uint)((uint3)(CONCAT16((char)((uint3)(uVar58 >> 0xd) >> 8),
                                          CONCAT15((char)(uVar59 >> 8),CONCAT14((char)uVar59,uVar55)
                                                  )) >> 0x20) & 0x10101) +
                  (uint)(CONCAT12(bVar69,CONCAT11(uVar46,uVar54)) & 0x1f1f1f) * 2;
          uVar16 = (uVar20 >> 5 & 0x1f) << 8 | (uVar20 >> 10 & 0x1f) << 0x10 | uVar20 & 0x1f;
          uVar50 = (uVar3 >> 5 & 0x1f) << 8 | (uVar3 >> 10 & 0x1f) << 0x10 | uVar3 & 0x1f;
          uVar51 = (uVar4 >> 5 & 0x1f) << 8 | (uVar4 >> 10 & 0x1f) << 0x10 | uVar4 & 0x1f;
          uVar58 = (uVar21 >> 5 & 0x1f) << 8 | (uVar21 >> 10 & 0x1f) << 0x10 | uVar21 & 0x1f;
          uVar59 = (uVar6 >> 5 & 0x1f) << 8 | (uVar6 >> 10 & 0x1f) << 0x10 | uVar6 & 0x1f;
          uVar52 = (uVar5 >> 5 & 0x1f) << 8 | (uVar5 >> 10 & 0x1f) << 0x10 | uVar5 & 0x1f;
          uVar60 = (uVar2 >> 5 & 0x1f) << 8 | (uVar2 >> 10 & 0x1f) << 0x10 | uVar2 & 0x1f;
          puVar10[9] = (uVar52 + 0x1f1f1f >> 5 & 0x10101) + uVar52 * 2 | 0x1f000000;
          puVar10[10] = (uVar60 + 0x1f1f1f >> 5 & 0x10101) + uVar60 * 2 | 0x1f000000;
          puVar10[0xb] = (uVar16 + 0x1f1f1f >> 5 & 0x10101) + uVar16 * 2 | 0x1f000000;
          puVar10[0xc] = (uVar50 + 0x1f1f1f >> 5 & 0x10101) + uVar50 * 2 | 0x1f000000;
          puVar10[0xd] = (uVar51 + 0x1f1f1f >> 5 & 0x10101) + uVar51 * 2 | 0x1f000000;
          puVar10[0xe] = (uVar58 + 0x1f1f1f >> 5 & 0x10101) + uVar58 * 2 | 0x1f000000;
          puVar10[0xf] = (uVar59 + 0x1f1f1f >> 5 & 0x10101) + uVar59 * 2 | 0x1f000000;
          *(ulong *)(puVar10 + 3) =
               (ulong)CONCAT16((char)((uint)iVar8 >> 0x10),
                               CONCAT15((char)((uint)iVar8 >> 8),
                                        CONCAT14((char)iVar8,
                                                 uVar55 + (uint)(CONCAT12(bVar68,CONCAT11(uVar45,
                                                  uVar49)) & 0x1f1f1f) * 2))) | 0x1f0000001f000000;
          *(ulong *)(puVar10 + 1) =
               (ulong)CONCAT16((char)((uint)iVar7 >> 0x10),
                               CONCAT15((char)((uint)iVar7 >> 8),
                                        CONCAT14((char)iVar7,
                                                 uVar47 + (uint)(CONCAT12(uVar77,CONCAT11(uVar41,(
                                                  char)uVar25)) & 0x1f1f1f) * 2))) |
               0x1f0000001f000000;
          lVar15 = lVar15 - ___stack_chk_guard;
          *(ulong *)(puVar10 + 7) =
               CONCAT44((uint)((uint3)(CONCAT16((char)((uint3)(uVar36 >> 0xd) >> 8),
                                                CONCAT15((char)(uVar37 >> 8),
                                                         CONCAT14((char)uVar37,uVar61))) >> 0x20) &
                              0x10101) +
                        (uint)(CONCAT12(bVar66,CONCAT11(uVar39,uVar62)) & 0x1f1f1f) * 2,
                        uVar61 + (uint)(CONCAT12(bVar64,CONCAT11(uVar31,uVar57)) & 0x1f1f1f) * 2) |
               0x1f0000001f000000;
          *(ulong *)(puVar10 + 5) =
               CONCAT44((uint)((uint3)(CONCAT16((char)((uint3)(uVar28 >> 0xd) >> 8),
                                                CONCAT15((char)(uVar29 >> 8),
                                                         CONCAT14((char)uVar29,uVar53))) >> 0x20) &
                              0x10101) +
                        (uint)(CONCAT12(bVar63,CONCAT11(uVar27,uVar56)) & 0x1f1f1f) * 2,
                        uVar53 + (uint)(CONCAT12(uVar65,CONCAT11(uVar26,(char)uVar35)) & 0x1f1f1f) *
                                 2) | 0x1f0000001f000000;
          if (lVar15 == 0) {
            texture_cache_convert_4bpp_asm(param_2,param_3,__n);
            return;
          }
          goto LAB_0016967c;
        }
        texture_cache_convert_palette_null(param_1,param_4,param_7,0x10);
        __n = (size_t)(uVar16 << 1);
joined_r0x00169710:
        puVar10 = (uint *)(lVar15 - ___stack_chk_guard);
        lVar15 = 0;
        if (puVar10 == (uint *)0x0) {
LAB_00169634:
          memset(param_2,0,__n);
          return;
        }
        goto LAB_0016967c;
      }
      if (param_5 == 1) {
        if (param_3 == (undefined8 *)0x0) {
          piVar17 = *(int **)(param_1 + 0x18);
          *(undefined *)(param_1 + 0x4a) = 1;
          goto joined_r0x001696d4;
        }
        texture_cache_convert_palette_alpha_3bpp(param_1,param_4);
        if (uVar16 != 0) {
          bVar1 = (byte *)((long)param_3 + (0xf - (long)param_2)) < (byte *)0x1f;
          if ((!bVar1 && 0xd < uVar16 - 1) && (bVar1 || uVar16 - 1 != 0xe)) {
            lVar11 = 0;
            do {
              uVar25 = *(undefined8 *)((long)param_3 + lVar11);
              ((undefined8 *)((long)param_2 + lVar11))[1] =
                   ((undefined8 *)((long)param_3 + lVar11))[1];
              *(undefined8 *)((long)param_2 + lVar11) = uVar25;
              lVar11 = lVar11 + 0x10;
            } while (((ulong)((uVar16 >> 4) - 1) + 1) * 0x10 - lVar11 != 0);
            goto LAB_00168d24;
          }
          lVar11 = 0;
          do {
            *(byte *)((long)param_2 + lVar11) = *(byte *)((long)param_3 + lVar11);
            lVar11 = lVar11 + 1;
          } while ((uint)lVar11 < uVar16);
        }
      }
    }
  }
  else if (param_5 == 6) {
    if (param_3 == (undefined8 *)0x0) {
      piVar17 = *(int **)(param_1 + 0x18);
      *(undefined *)(param_1 + 0x4a) = 1;
joined_r0x001696d4:
      if (piVar17 == (int *)0x0) {
        piVar17 = (int *)malloc(0x400);
        *(int **)(param_1 + 0x18) = piVar17;
      }
      uVar20 = *param_4;
      uVar16 = (uVar20 >> 5 & 0x1f) << 8 | (uVar20 >> 10 & 0x1f) << 0x10 | uVar20 & 0x1f;
      *piVar17 = (uVar16 + 0x1f1f1f >> 5 & 0x10101) + uVar16 * 2;
      goto joined_r0x00169710;
    }
    texture_cache_convert_palette_alpha_5bpp(param_1,param_4);
    if (uVar16 != 0) {
      bVar1 = (byte *)((long)param_3 + (0xf - (long)param_2)) < (byte *)0x1f;
      if ((!bVar1 && 0xd < uVar16 - 1) && (bVar1 || uVar16 - 1 != 0xe)) {
        lVar11 = 0;
        do {
          uVar25 = *(undefined8 *)((long)param_3 + lVar11);
          ((undefined8 *)((long)param_2 + lVar11))[1] = ((undefined8 *)((long)param_3 + lVar11))[1];
          *(undefined8 *)((long)param_2 + lVar11) = uVar25;
          lVar11 = lVar11 + 0x10;
        } while (((ulong)((uVar16 >> 4) - 1) + 1) * 0x10 - lVar11 != 0);
        goto LAB_00168d24;
      }
      lVar11 = 0;
      do {
        *(byte *)((long)param_2 + lVar11) = *(byte *)((long)param_3 + lVar11);
        lVar11 = lVar11 + 1;
      } while ((uint)lVar11 < uVar16);
    }
  }
  else if (param_5 == 7) {
    uVar16 = (uint)(param_6 >> 1) & 0x7fffffff;
    if (param_3 == (undefined8 *)0x0) {
      __n = (size_t)(uVar16 << 2);
      goto LAB_00169634;
    }
    if ((param_6 >> 1 & 0x7fffffff) != 0) {
      if (uVar16 - 1 < 7) {
        uVar50 = 0;
      }
      else {
        uVar51 = (uint)(param_6 >> 4) & 0xfffffff;
        puVar13 = param_2;
        puVar19 = param_3;
        do {
          uVar35 = puVar19[1];
          uVar25 = *puVar19;
          uVar59 = (uint)uVar25 & 0xffff;
          uVar26 = (undefined)((ulong)uVar25 >> 0x10);
          uVar27 = (undefined)((ulong)uVar25 >> 0x20);
          uVar31 = (undefined)((ulong)uVar25 >> 0x30);
          uVar39 = (undefined)(uVar59 >> 10);
          bVar63 = (byte)((ulong)uVar25 >> 0x18);
          bVar40 = bVar63 >> 2;
          bVar64 = (byte)((ulong)uVar25 >> 0x28);
          bVar42 = bVar64 >> 2;
          bVar66 = (byte)((ulong)uVar25 >> 0x38);
          bVar44 = bVar66 >> 2;
          uVar41 = (undefined)(uVar59 >> 5);
          uVar43 = (undefined)((ushort)((ulong)uVar25 >> 0x10) >> 5);
          uVar45 = (undefined)((ushort)((ulong)uVar25 >> 0x20) >> 5);
          uVar46 = (undefined)(ushort)((ulong)uVar25 >> 0x35);
          bVar67 = (byte)((ulong)uVar35 >> 8);
          bVar69 = (byte)((ulong)uVar35 >> 0x18);
          uVar24 = CONCAT16(bVar69 >> 2,(uint6)(uint3)((bVar67 >> 2 & 0x1f) << 0x10)) &
                   0x1fffffffffffff;
          bVar68 = (byte)((ulong)uVar35 >> 0x28);
          bVar70 = (byte)((ulong)uVar35 >> 0x38);
          uVar34 = CONCAT16(bVar70 >> 2,(uint6)(uint3)((bVar68 >> 2 & 0x1f) << 0x10)) &
                   0x1fffffffffffff;
          uVar22 = CONCAT11((char)(uVar24 >> 0x10),(char)((ushort)uVar35 >> 5)) & 0xff1f;
          uVar24 = CONCAT16((char)(uVar24 >> 0x30),
                            CONCAT15((char)((ushort)((ulong)uVar35 >> 0x10) >> 5),
                                     (uint5)(uint3)(uVar22 << 8))) & 0xff1fffffffffff;
          uVar32 = CONCAT11((char)(uVar34 >> 0x10),(char)((ushort)((ulong)uVar35 >> 0x20) >> 5)) &
                   0xff1f;
          uVar34 = CONCAT16((char)(uVar34 >> 0x30),
                            CONCAT15((char)(ushort)((ulong)uVar35 >> 0x35),
                                     (uint5)(uint3)(uVar32 << 8))) & 0xff1fffffffffff;
          uVar22 = CONCAT12((char)(uVar24 >> 0x10),CONCAT11((char)uVar22,(char)uVar35)) & 0xffff1f;
          uVar32 = CONCAT12((char)(uVar34 >> 0x10),
                            CONCAT11((char)uVar32,(char)((ulong)uVar35 >> 0x20))) & 0xffff1f;
          uVar52 = (CONCAT12(bVar40,CONCAT11(uVar43,uVar26)) & 0x1f1f1f) + 0x1f1f1f;
          uVar60 = (CONCAT12(bVar44,CONCAT11(uVar46,uVar31)) & 0x1f1f1f) + 0x1f1f1f;
          uVar50 = (uint)((uint3)(CONCAT16((char)(uVar24 >> 0x30),
                                           CONCAT15((char)(uVar24 >> 0x28),
                                                    CONCAT14((char)((ulong)uVar35 >> 0x10),
                                                             (uint)uVar22))) >> 0x20) & 0xffff1f);
          uVar58 = (uint)((uint3)(CONCAT16((char)(uVar34 >> 0x30),
                                           CONCAT15((char)(uVar34 >> 0x28),
                                                    CONCAT14((char)((ulong)uVar35 >> 0x30),
                                                             (uint)uVar32))) >> 0x20) & 0xffff1f);
          iVar7 = (uint)(CONCAT12((char)((uint3)(uVar52 >> 0xd) >> 8),(short)(uVar52 >> 5)) &
                        0x10101) + (uint)(CONCAT12(bVar40,CONCAT11(uVar43,uVar26)) & 0x1f1f1f) * 2;
          iVar8 = (uint)(CONCAT12((char)((uint3)(uVar60 >> 0xd) >> 8),(short)(uVar60 >> 5)) &
                        0x10101) + (uint)(CONCAT12(bVar44,CONCAT11(uVar46,uVar31)) & 0x1f1f1f) * 2;
          iVar30 = (uint)((uint3)(uVar50 + 0x1f1f1f >> 5) & 0x10101) + uVar50 * 2;
          iVar38 = (uint)((uint3)(uVar58 + 0x1f1f1f >> 5) & 0x10101) + uVar58 * 2;
          puVar13[1] = CONCAT17(((char)bVar66 >> 7) * -0x1f,
                                CONCAT16((char)((uint)iVar8 >> 0x10),
                                         CONCAT15((char)((uint)iVar8 >> 8),
                                                  CONCAT14((char)iVar8,
                                                           CONCAT13(((char)bVar64 >> 7) * -0x1f,
                                                                    ((uint3)((CONCAT12(bVar42,
                                                  CONCAT11(uVar45,uVar27)) & 0x1f1f1f) + 0x1f1f1f >>
                                                  5) & 0x10101) +
                                                  (CONCAT12(bVar42,CONCAT11(uVar45,uVar27)) &
                                                  0x1f1f1f) * 2)))));
          *puVar13 = CONCAT17(((char)bVar63 >> 7) * -0x1f,
                              CONCAT16((char)((uint)iVar7 >> 0x10),
                                       CONCAT15((char)((uint)iVar7 >> 8),
                                                CONCAT14((char)iVar7,
                                                         CONCAT13((char)(uVar59 >> 0xf) * '\x1f',
                                                                  ((uint3)((CONCAT12(uVar39,CONCAT11
                                                  (uVar41,(char)uVar25)) & 0x1f1f1f) + 0x1f1f1f >> 5
                                                  ) & 0x10101) +
                                                  (CONCAT12(uVar39,CONCAT11(uVar41,(char)uVar25)) &
                                                  0x1f1f1f) * 2)))));
          puVar13[3] = CONCAT17(((char)bVar70 >> 7) * -0x1f,
                                CONCAT16((char)((uint)iVar38 >> 0x10),
                                         CONCAT15((char)((uint)iVar38 >> 8),
                                                  CONCAT14((char)iVar38,
                                                           CONCAT13(((char)bVar68 >> 7) * -0x1f,
                                                                    ((uint3)(uVar32 + 0x1f1f1f >> 5)
                                                                    & 0x10101) + uVar32 * 2)))));
          puVar13[2] = CONCAT17(((char)bVar69 >> 7) * -0x1f,
                                CONCAT16((char)((uint)iVar30 >> 0x10),
                                         CONCAT15((char)((uint)iVar30 >> 8),
                                                  CONCAT14((char)iVar30,
                                                           CONCAT13(((char)bVar67 >> 7) * -0x1f,
                                                                    ((uint3)(uVar22 + 0x1f1f1f >> 5)
                                                                    & 0x10101) + uVar22 * 2)))));
          puVar13 = puVar13 + 4;
          puVar19 = puVar19 + 2;
        } while (param_2 + (ulong)(uVar51 - 1) * 4 + 4 != puVar13);
        uVar50 = uVar51 << 3;
        if (uVar16 == uVar51 * 8) goto LAB_00168c98;
      }
      uVar20 = *(ushort *)((long)param_3 + (ulong)uVar50 * 2);
      uVar51 = (uVar20 >> 5 & 0x1f) << 8 | (uVar20 >> 10 & 0x1f) << 0x10 | uVar20 & 0x1f;
      *(uint *)((long)param_2 + (ulong)uVar50 * 4) =
           (uVar51 + 0x1f1f1f >> 5 & 0x10101) + uVar51 * 2 | (uint)(uVar20 >> 0xf) * 0x1f000000;
      uVar51 = uVar50 + 1;
      if (uVar51 < uVar16) {
        uVar20 = *(ushort *)((long)param_3 + (ulong)uVar51 * 2);
        uVar58 = uVar50 + 2;
        uVar59 = (uVar20 >> 5 & 0x1f) << 8 | (uVar20 >> 10 & 0x1f) << 0x10 | uVar20 & 0x1f;
        *(uint *)((long)param_2 + (ulong)uVar51 * 4) =
             (uVar59 + 0x1f1f1f >> 5 & 0x10101) + uVar59 * 2 | (uint)(uVar20 >> 0xf) * 0x1f000000;
        if (uVar58 < uVar16) {
          uVar20 = *(ushort *)((long)param_3 + (ulong)uVar58 * 2);
          uVar51 = uVar50 + 3;
          uVar59 = (uVar20 >> 5 & 0x1f) << 8 | (uVar20 >> 10 & 0x1f) << 0x10 | uVar20 & 0x1f;
          *(uint *)((long)param_2 + (ulong)uVar58 * 4) =
               (uVar59 + 0x1f1f1f >> 5 & 0x10101) + uVar59 * 2 | (uint)(uVar20 >> 0xf) * 0x1f000000;
          if (uVar51 < uVar16) {
            uVar20 = *(ushort *)((long)param_3 + (ulong)uVar51 * 2);
            uVar58 = uVar50 + 4;
            uVar59 = (uVar20 >> 10 & 0x1f) << 0x10 | (uVar20 >> 5 & 0x1f) << 8 | uVar20 & 0x1f;
            *(uint *)((long)param_2 + (ulong)uVar51 * 4) =
                 (uVar59 + 0x1f1f1f >> 5 & 0x10101) + uVar59 * 2 |
                 (uint)(uVar20 >> 0xf) * 0x1f000000;
            if (uVar58 < uVar16) {
              uVar20 = *(ushort *)((long)param_3 + (ulong)uVar58 * 2);
              uVar51 = uVar50 + 5;
              uVar59 = (uVar20 >> 10 & 0x1f) << 0x10 | (uVar20 >> 5 & 0x1f) << 8 | uVar20 & 0x1f;
              *(uint *)((long)param_2 + (ulong)uVar58 * 4) =
                   (uVar59 + 0x1f1f1f >> 5 & 0x10101) + uVar59 * 2 |
                   (uint)(uVar20 >> 0xf) * 0x1f000000;
              if (uVar51 < uVar16) {
                uVar20 = *(ushort *)((long)param_3 + (ulong)uVar51 * 2);
                uVar50 = uVar50 + 6;
                uVar58 = (uVar20 >> 5 & 0x1f) << 8 | (uVar20 >> 10 & 0x1f) << 0x10 | uVar20 & 0x1f;
                *(uint *)((long)param_2 + (ulong)uVar51 * 4) =
                     (uVar58 + 0x1f1f1f >> 5 & 0x10101) + uVar58 * 2 |
                     (uint)(uVar20 >> 0xf) * 0x1f000000;
                if (uVar50 < uVar16) {
                  uVar20 = *(ushort *)((long)param_3 + (ulong)uVar50 * 2);
                  uVar16 = (uVar20 >> 10 & 0x1f) << 0x10 | (uVar20 >> 5 & 0x1f) << 8 | uVar20 & 0x1f
                  ;
                  *(uint *)((long)param_2 + (ulong)uVar50 * 4) =
                       (uVar16 + 0x1f1f1f >> 5 & 0x10101) + uVar16 * 2 |
                       (uint)(uVar20 >> 0xf) * 0x1f000000;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_00168c98:
  puVar10 = (uint *)(lVar15 - ___stack_chk_guard);
  lVar15 = 0;
  if (puVar10 == (uint *)0x0) {
    return;
  }
LAB_0016967c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar10,lVar15);
}


