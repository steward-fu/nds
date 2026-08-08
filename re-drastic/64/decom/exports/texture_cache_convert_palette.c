/*
 * Ghidra decompilation
 *
 * Function : texture_cache_convert_palette
 * Address  : 001675f0
 * Program  : drastic64
 */


void texture_cache_convert_palette(long param_1,ushort *param_2,int param_3,uint param_4)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint3 uVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  ulong *puVar10;
  undefined8 *puVar11;
  uint *puVar12;
  uint uVar13;
  uint6 uVar14;
  undefined uVar19;
  uint7 uVar15;
  undefined uVar17;
  undefined8 uVar16;
  uint uVar18;
  uint uVar20;
  uint6 uVar21;
  uint7 uVar22;
  undefined8 uVar23;
  uint uVar24;
  undefined uVar25;
  undefined uVar26;
  undefined uVar27;
  undefined uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  undefined uVar33;
  undefined uVar34;
  
  puVar12 = *(uint **)(param_1 + 0x18);
  *(undefined *)(param_1 + 0x4a) = 1;
  if (puVar12 == (uint *)0x0) {
    puVar12 = (uint *)malloc((ulong)(param_4 << 2));
    *(uint **)(param_1 + 0x18) = puVar12;
  }
  uVar1 = *param_2;
  uVar2 = (uVar1 >> 5 & 0x1f) << 8 | (uVar1 >> 10 & 0x1f) << 0x10 | uVar1 & 0x1f;
  uVar2 = (uVar2 + 0x1f1f1f >> 5 & 0x10101) + uVar2 * 2;
  uVar13 = uVar2 | 0x1f000000;
  if (param_3 != 0) {
    uVar13 = uVar2;
  }
  *puVar12 = uVar13;
  if (1 < param_4) {
    uVar2 = param_4 - 1;
    if (param_4 - 2 < 7) {
      uVar13 = 1;
    }
    else {
      puVar10 = (ulong *)(puVar12 + 1);
      puVar11 = (undefined8 *)(param_2 + 1);
      do {
        uVar23 = puVar11[1];
        uVar16 = *puVar11;
        uVar17 = (undefined)((ulong)uVar16 >> 0x20);
        uVar19 = (undefined)((ulong)uVar16 >> 0x30);
        uVar25 = (undefined)((ushort)uVar16 >> 5);
        uVar26 = (undefined)((ushort)((ulong)uVar16 >> 0x10) >> 5);
        uVar27 = (undefined)((ushort)((ulong)uVar16 >> 0x20) >> 5);
        uVar28 = (undefined)(ushort)((ulong)uVar16 >> 0x35);
        uVar14 = CONCAT15((char)((ushort)((ulong)uVar23 >> 0x10) >> 5),
                          (uint5)((byte)((ushort)uVar23 >> 5) & 0x1f) << 8) & 0x1fffffffffff;
        uVar21 = CONCAT15((char)(ushort)((ulong)uVar23 >> 0x35),
                          (uint5)((byte)((ushort)((ulong)uVar23 >> 0x20) >> 5) & 0x1f) << 8) &
                 0x1fffffffffff;
        bVar6 = (byte)((ulong)uVar16 >> 8) >> 2;
        bVar7 = (byte)((ulong)uVar16 >> 0x18) >> 2;
        bVar8 = (byte)((ulong)uVar16 >> 0x28) >> 2;
        bVar9 = (byte)((ulong)uVar16 >> 0x3a);
        uVar5 = CONCAT12((char)((ulong)uVar16 >> 0x10),(ushort)((byte)uVar16 & 0x1f)) & 0x1fffff;
        uVar15 = CONCAT16((byte)((ulong)uVar23 >> 0x18) >> 2,
                          CONCAT15((char)(uVar14 >> 0x28),
                                   (uint5)(uint3)((CONCAT11((byte)((ulong)uVar23 >> 8) >> 2,
                                                            (char)(uVar14 >> 8)) & 0x1fff) << 8))) &
                 0x1fffffffffffff;
        uVar22 = CONCAT16((byte)((ulong)uVar23 >> 0x3a),
                          CONCAT15((char)(uVar21 >> 0x28),
                                   (uint5)(uint3)((CONCAT11((byte)((ulong)uVar23 >> 0x28) >> 2,
                                                            (char)(uVar21 >> 8)) & 0x1fff) << 8))) &
                 0x1fffffffffffff;
        uVar33 = (undefined)uVar5;
        uVar34 = (undefined)(uVar5 >> 0x10);
        uVar13 = (uint)(CONCAT12((char)(uVar15 >> 0x10),CONCAT11((char)(uVar15 >> 8),(char)uVar23))
                       & 0xffff1f);
        uVar20 = (uint)(CONCAT12((char)(uVar22 >> 0x10),
                                 CONCAT11((char)(uVar22 >> 8),(char)((ulong)uVar23 >> 0x20))) &
                       0xffff1f);
        uVar29 = (CONCAT12(bVar6,CONCAT11(uVar25,uVar33)) & 0x1f1fff) + 0x1f1f1f;
        uVar30 = (CONCAT12(bVar7,CONCAT11(uVar26,uVar34)) & 0x1f1fff) + 0x1f1f1f;
        uVar31 = (CONCAT12(bVar8,CONCAT11(uVar27,uVar17)) & 0x1f1f1f) + 0x1f1f1f;
        uVar32 = (CONCAT12(bVar9,CONCAT11(uVar28,uVar19)) & 0x1f1f1f) + 0x1f1f1f;
        uVar18 = (uint)((uint3)(CONCAT16((char)(uVar15 >> 0x30),
                                         CONCAT15((char)(uVar15 >> 0x28),
                                                  CONCAT14((char)((ulong)uVar23 >> 0x10),uVar13)))
                               >> 0x20) & 0xffff1f);
        uVar24 = (uint)((uint3)(CONCAT16((char)(uVar22 >> 0x30),
                                         CONCAT15((char)(uVar22 >> 0x28),
                                                  CONCAT14((char)((ulong)uVar23 >> 0x30),uVar20)))
                               >> 0x20) & 0xffff1f);
        iVar3 = (uint)(CONCAT12((char)(ushort)(uVar30 >> 0x15),
                                CONCAT11((char)(uint3)(uVar30 >> 0xd),(char)(uVar30 >> 5))) &
                      0x10101) + (uint)(CONCAT12(bVar7,CONCAT11(uVar26,uVar34)) & 0x1f1fff) * 2;
        iVar4 = (uint)(CONCAT12((char)(ushort)(uVar32 >> 0x15),
                                CONCAT11((char)(uint3)(uVar32 >> 0xd),(char)(uVar32 >> 5))) &
                      0x10101) + (uint)(CONCAT12(bVar9,CONCAT11(uVar28,uVar19)) & 0x1f1f1f) * 2;
        puVar10[1] = (ulong)CONCAT16((char)((uint)iVar4 >> 0x10),
                                     CONCAT15((char)((uint)iVar4 >> 8),
                                              CONCAT14((char)iVar4,
                                                       (uint)(CONCAT12((char)(ushort)(uVar31 >> 0x15
                                                                                     ),
                                                                       CONCAT11((char)(uint3)(uVar31
                                                                                             >> 0xd)
                                                                                ,(char)(uVar31 >> 5)
                                                                               )) & 0x10101) +
                                                       (uint)(CONCAT12(bVar8,CONCAT11(uVar27,uVar17)
                                                                      ) & 0x1f1f1f) * 2))) |
                     0x1f0000001f000000;
        *puVar10 = (ulong)CONCAT16((char)((uint)iVar3 >> 0x10),
                                   CONCAT15((char)((uint)iVar3 >> 8),
                                            CONCAT14((char)iVar3,
                                                     (uint)(CONCAT12((char)(ushort)(uVar29 >> 0x15),
                                                                     CONCAT11((char)(uint3)(uVar29 
                                                  >> 0xd),(char)(uVar29 >> 5))) & 0x10101) +
                                                  (uint)(CONCAT12(bVar6,CONCAT11(uVar25,uVar33)) &
                                                        0x1f1fff) * 2))) | 0x1f0000001f000000;
        puVar10[3] = CONCAT44((uint)((uint3)(uVar24 + 0x1f1f1f >> 5) & 0x10101) + uVar24 * 2,
                              (uint)((uint3)(uVar20 + 0x1f1f1f >> 5) & 0x10101) + uVar20 * 2) |
                     0x1f0000001f000000;
        puVar10[2] = CONCAT44((uint)((uint3)(uVar18 + 0x1f1f1f >> 5) & 0x10101) + uVar18 * 2,
                              (uint)((uint3)(uVar13 + 0x1f1f1f >> 5) & 0x10101) + uVar13 * 2) |
                     0x1f0000001f000000;
        puVar10 = puVar10 + 4;
        puVar11 = puVar11 + 2;
      } while (puVar10 != (ulong *)(puVar12 + (ulong)((uVar2 >> 3) - 1) * 8 + 9));
      uVar13 = (uVar2 & 0xfffffff8) + 1;
      if ((uVar2 & 0xfffffff8) == uVar2) {
        return;
      }
    }
    uVar1 = param_2[uVar13];
    uVar2 = (uVar1 >> 10 & 0x1f) << 0x10 | (uVar1 >> 5 & 0x1f) << 8 | uVar1 & 0x1f;
    puVar12[uVar13] = (uVar2 + 0x1f1f1f >> 5 & 0x10101) + uVar2 * 2 | 0x1f000000;
    uVar2 = uVar13 + 1;
    if (uVar2 < param_4) {
      uVar1 = param_2[uVar2];
      uVar18 = uVar13 + 2;
      uVar20 = (uVar1 >> 5 & 0x1f) << 8 | (uVar1 >> 10 & 0x1f) << 0x10 | uVar1 & 0x1f;
      puVar12[uVar2] = (uVar20 + 0x1f1f1f >> 5 & 0x10101) + uVar20 * 2 | 0x1f000000;
      if (uVar18 < param_4) {
        uVar1 = param_2[uVar18];
        uVar2 = uVar13 + 3;
        uVar20 = (uVar1 >> 5 & 0x1f) << 8 | (uVar1 >> 10 & 0x1f) << 0x10 | uVar1 & 0x1f;
        puVar12[uVar18] = (uVar20 + 0x1f1f1f >> 5 & 0x10101) + uVar20 * 2 | 0x1f000000;
        if (uVar2 < param_4) {
          uVar1 = param_2[uVar2];
          uVar18 = uVar13 + 4;
          uVar20 = (uVar1 >> 5 & 0x1f) << 8 | (uVar1 >> 10 & 0x1f) << 0x10 | uVar1 & 0x1f;
          puVar12[uVar2] = (uVar20 + 0x1f1f1f >> 5 & 0x10101) + uVar20 * 2 | 0x1f000000;
          if (uVar18 < param_4) {
            uVar1 = param_2[uVar18];
            uVar2 = uVar13 + 5;
            uVar20 = (uVar1 >> 5 & 0x1f) << 8 | (uVar1 >> 10 & 0x1f) << 0x10 | uVar1 & 0x1f;
            puVar12[uVar18] = (uVar20 + 0x1f1f1f >> 5 & 0x10101) + uVar20 * 2 | 0x1f000000;
            if (uVar2 < param_4) {
              uVar1 = param_2[uVar2];
              uVar13 = uVar13 + 6;
              uVar18 = (uVar1 >> 5 & 0x1f) << 8 | (uVar1 >> 10 & 0x1f) << 0x10 | uVar1 & 0x1f;
              puVar12[uVar2] = (uVar18 + 0x1f1f1f >> 5 & 0x10101) + uVar18 * 2 | 0x1f000000;
              if (uVar13 < param_4) {
                uVar1 = param_2[uVar13];
                uVar2 = (uVar1 >> 10 & 0x1f) << 0x10 | (uVar1 >> 5 & 0x1f) << 8 | uVar1 & 0x1f;
                puVar12[uVar13] = (uVar2 + 0x1f1f1f >> 5 & 0x10101) + uVar2 * 2 | 0x1f000000;
              }
            }
          }
        }
      }
    }
  }
  return;
}


