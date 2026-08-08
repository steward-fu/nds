/*
 * Ghidra decompilation
 *
 * Function : render_scanline_affine_setup_tile_offsets_c
 * Address  : 001a3230
 * Program  : drastic64
 */


void render_scanline_affine_setup_tile_offsets_c
               (undefined8 *param_1,int param_2,int param_3,int param_4,int param_5,uint param_6)

{
  uint uVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  ulong uVar5;
  uint uVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar11;
  ulong uVar9;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar20;
  ulong uVar19;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  ulong uVar32;
  ulong uVar34;
  int iVar35;
  undefined8 uVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  ulong uVar10;
  uint uVar15;
  int iVar33;
  
  if (param_6 - 0xf < 0xfffffff0) {
    iVar12 = param_4 + (param_2 + param_4 & 0xffffU);
    uVar14 = param_5 + (param_3 + param_5 & 0xffffU);
    iVar38 = param_5 * 0x10;
    iVar29 = param_5 * 4;
    iVar39 = param_4 * 0x10;
    iVar30 = param_4 * 4;
    uVar1 = (param_6 - 0xf >> 4) + 1;
    uVar6 = 0;
    puVar7 = param_1;
    uVar5 = CONCAT44(param_3 + param_5,param_3) & 0xffffffffffff;
    uVar32 = CONCAT44(param_5 + (uVar14 & 0xffff),uVar14) & 0xffff0000ffff;
    uVar34 = CONCAT44(param_2 + param_4,param_2) & 0xffffffffffff;
    uVar36 = CONCAT44(param_4 + iVar12,iVar12);
    do {
      iVar25 = (int)uVar5 + iVar29;
      iVar31 = (int)(uVar5 >> 0x20);
      iVar26 = iVar31 + iVar29;
      iVar27 = (int)uVar32 + iVar29;
      iVar33 = (int)(uVar32 >> 0x20);
      iVar28 = iVar33 + iVar29;
      iVar13 = (int)uVar34 + iVar30;
      iVar35 = (int)(uVar34 >> 0x20);
      iVar16 = iVar35 + iVar30;
      iVar18 = (int)uVar36 + iVar30;
      iVar37 = (int)((ulong)uVar36 >> 0x20);
      iVar20 = iVar37 + iVar30;
      iVar21 = iVar29 + iVar25;
      iVar22 = iVar29 + iVar26;
      iVar23 = iVar29 + iVar27;
      iVar24 = iVar29 + iVar28;
      iVar12 = iVar30 + iVar13;
      iVar2 = iVar30 + iVar16;
      iVar8 = iVar30 + iVar18;
      iVar11 = iVar30 + iVar20;
      sVar3 = (short)iVar29;
      sVar4 = (short)iVar30;
      uVar6 = uVar6 + 1;
      uVar9 = CONCAT71((int7)(((ulong)CONCAT15((char)((ushort)(sVar3 + (short)iVar24) >> 8),
                                               CONCAT14((char)((ushort)(sVar3 + (short)iVar23) >> 8)
                                                        ,CONCAT13((char)((ushort)(sVar3 + (short)
                                                  iVar22) >> 8),
                                                  CONCAT12((char)((ushort)(sVar3 + (short)iVar21) >>
                                                                 8),CONCAT11((char)((uint)iVar24 >>
                                                                                   8),(char)((uint)
                                                  iVar23 >> 8)))))) << 0x10) >> 8),
                       (char)((uint)iVar21 >> 8)) & 0xffffffffffffff07;
      uVar10 = CONCAT62((int6)(uVar9 >> 0x10),CONCAT11((char)((uint)iVar22 >> 8),(char)uVar9)) &
               0xffffffffffff07ff;
      uVar9 = CONCAT53((int5)(uVar10 >> 0x18),CONCAT12((char)(uVar9 >> 0x10),(short)uVar10)) &
              0xffffffffff07ffff;
      uVar10 = CONCAT44((int)(uVar9 >> 0x20),CONCAT13((char)(uVar10 >> 0x18),(int3)uVar9)) &
               0xffffffff07ffffff;
      uVar9 = CONCAT35((int3)(uVar10 >> 0x28),CONCAT14((char)(uVar9 >> 0x20),(int)uVar10)) &
              0xffffff07ffffffff;
      uVar10 = CONCAT26((short)(uVar9 >> 0x30),CONCAT15((char)(uVar10 >> 0x28),(int5)uVar9)) &
               0xffff07ffffffffff;
      uVar10 = CONCAT17((char)(uVar10 >> 0x38),CONCAT16((char)(uVar9 >> 0x30),(int6)uVar10)) &
               0x707ffffffffffff;
      uVar14 = CONCAT31((int3)(((uint)CONCAT11((char)((ulong)uVar36 >> 0x28),
                                               (char)((ulong)uVar36 >> 8)) << 0x10) >> 8),
                        (char)(uVar34 >> 8)) & 0xffffff07;
      uVar15 = CONCAT22((short)(uVar14 >> 0x10),CONCAT11((char)(uVar34 >> 0x28),(char)uVar14)) &
               0xffff07ff;
      uVar14 = CONCAT13((char)(uVar15 >> 0x18),CONCAT12((char)(uVar14 >> 0x10),(short)uVar15)) &
               0x707ffff;
      uVar15 = CONCAT31((int3)(((uint)CONCAT11((char)((uint)iVar20 >> 8),(char)((uint)iVar18 >> 8))
                               << 0x10) >> 8),(char)((uint)iVar13 >> 8)) & 0xffffff07;
      uVar17 = CONCAT22((short)(uVar15 >> 0x10),CONCAT11((char)((uint)iVar16 >> 8),(char)uVar15)) &
               0xffff07ff;
      uVar15 = CONCAT13((char)(uVar17 >> 0x18),CONCAT12((char)(uVar15 >> 0x10),(short)uVar17)) &
               0x707ffff;
      uVar9 = CONCAT71((int7)(((ulong)CONCAT15((char)((ushort)(sVar4 + (short)iVar11) >> 8),
                                               CONCAT14((char)((ushort)(sVar4 + (short)iVar8) >> 8),
                                                        CONCAT13((char)((ushort)(sVar4 + (short)
                                                  iVar2) >> 8),
                                                  CONCAT12((char)((ushort)(sVar4 + (short)iVar12) >>
                                                                 8),CONCAT11((char)((uint)iVar11 >>
                                                                                   8),(char)((uint)
                                                  iVar8 >> 8)))))) << 0x10) >> 8),
                       (char)((uint)iVar12 >> 8)) & 0xffffffffffffff07;
      uVar19 = CONCAT62((int6)(uVar9 >> 0x10),CONCAT11((char)((uint)iVar2 >> 8),(char)uVar9)) &
               0xffffffffffff07ff;
      uVar9 = CONCAT53((int5)(uVar19 >> 0x18),CONCAT12((char)(uVar9 >> 0x10),(short)uVar19)) &
              0xffffffffff07ffff;
      uVar19 = CONCAT44((int)(uVar9 >> 0x20),CONCAT13((char)(uVar19 >> 0x18),(int3)uVar9)) &
               0xffffffff07ffffff;
      uVar9 = CONCAT35((int3)(uVar19 >> 0x28),CONCAT14((char)(uVar9 >> 0x20),(int)uVar19)) &
              0xffffff07ffffffff;
      uVar19 = CONCAT26((short)(uVar9 >> 0x30),CONCAT15((char)(uVar19 >> 0x28),(int5)uVar9)) &
               0xffff07ffffffffff;
      uVar9 = CONCAT17((char)(uVar19 >> 0x38),CONCAT16((char)(uVar9 >> 0x30),(int6)uVar19)) &
              0x707ffffffffffff;
      puVar7[1] = CONCAT17((char)(uVar10 >> 0x38) * '\b' + (char)(uVar9 >> 0x38),
                           CONCAT16((char)(uVar10 >> 0x30) * '\b' + (char)(uVar9 >> 0x30),
                                    CONCAT15((char)(uVar10 >> 0x28) * '\b' + (char)(uVar9 >> 0x28),
                                             CONCAT14((char)(uVar10 >> 0x20) * '\b' +
                                                      (char)(uVar9 >> 0x20),
                                                      CONCAT13((char)(uVar10 >> 0x18) * '\b' +
                                                               (char)(uVar9 >> 0x18),
                                                               CONCAT12((char)(uVar10 >> 0x10) *
                                                                        '\b' + (char)(uVar9 >> 0x10)
                                                                        ,CONCAT11((char)(uVar10 >> 8
                                                                                        ) * '\b' +
                                                                                  (char)(uVar9 >> 8)
                                                                                  ,(char)uVar10 *
                                                                                   '\b' + (char)
                                                  uVar9)))))));
      *puVar7 = CONCAT17(((byte)((uint)iVar28 >> 8) & 7) * '\b' + (char)(uVar15 >> 0x18),
                         CONCAT16(((byte)((uint)iVar27 >> 8) & 7) * '\b' + (char)(uVar15 >> 0x10),
                                  CONCAT15(((byte)((uint)iVar26 >> 8) & 7) * '\b' +
                                           (char)(uVar15 >> 8),
                                           CONCAT14(((byte)((uint)iVar25 >> 8) & 7) * '\b' +
                                                    (char)uVar15,
                                                    CONCAT13(((byte)(uVar32 >> 0x28) & 7) * '\b' +
                                                             (char)(uVar14 >> 0x18),
                                                             CONCAT12(((byte)(uVar32 >> 8) & 7) *
                                                                      '\b' + (char)(uVar14 >> 0x10),
                                                                      CONCAT11(((byte)(uVar5 >> 0x28
                                                                                      ) & 7) * '\b'
                                                                               + (char)(uVar14 >> 8)
                                                                               ,((byte)(uVar5 >> 8)
                                                                                & 7) * '\b' +
                                                                                (char)uVar14)))))));
      puVar7 = puVar7 + 2;
      uVar5 = CONCAT44(iVar31 + iVar38,(int)uVar5 + iVar38);
      uVar32 = CONCAT44(iVar33 + iVar38,(int)uVar32 + iVar38);
      uVar34 = CONCAT44(iVar35 + iVar39,(int)uVar34 + iVar39);
      uVar36 = CONCAT44(iVar37 + iVar39,(int)uVar36 + iVar39);
    } while (uVar6 < uVar1);
    uVar1 = uVar1 * 0x10;
    param_2 = param_2 + param_4 * uVar1;
    param_3 = param_3 + param_5 * uVar1;
    if (param_6 + 1 != uVar1) {
      *(byte *)((long)param_1 + (ulong)uVar1) =
           ((byte)((uint)param_2 >> 8) & 7) + ((byte)((uint)param_3 >> 8) & 7) * '\b';
      param_3 = param_5 + param_3;
      param_2 = param_4 + param_2;
      if (uVar1 + 1 <= param_6) {
        *(byte *)((long)param_1 + (ulong)(uVar1 + 1)) =
             ((byte)((uint)param_2 >> 8) & 7) + ((byte)((uint)param_3 >> 8) & 7) * '\b';
        param_3 = param_5 + param_3;
        param_2 = param_4 + param_2;
        if (uVar1 + 2 <= param_6) {
          *(byte *)((long)param_1 + (ulong)(uVar1 + 2)) =
               ((byte)((uint)param_2 >> 8) & 7) + ((byte)((uint)param_3 >> 8) & 7) * '\b';
          param_3 = param_5 + param_3;
          param_2 = param_4 + param_2;
          if (uVar1 + 3 <= param_6) {
            *(byte *)((long)param_1 + (ulong)(uVar1 + 3)) =
                 ((byte)((uint)param_2 >> 8) & 7) + ((byte)((uint)param_3 >> 8) & 7) * '\b';
            param_3 = param_5 + param_3;
            param_2 = param_4 + param_2;
            if (uVar1 + 4 <= param_6) {
              *(byte *)((long)param_1 + (ulong)(uVar1 + 4)) =
                   ((byte)((uint)param_2 >> 8) & 7) + ((byte)((uint)param_3 >> 8) & 7) * '\b';
              param_3 = param_5 + param_3;
              param_2 = param_4 + param_2;
              if (uVar1 + 5 <= param_6) {
                *(byte *)((long)param_1 + (ulong)(uVar1 + 5)) =
                     ((byte)((uint)param_2 >> 8) & 7) + ((byte)((uint)param_3 >> 8) & 7) * '\b';
                param_3 = param_5 + param_3;
                param_2 = param_4 + param_2;
                if (uVar1 + 6 <= param_6) {
                  *(byte *)((long)param_1 + (ulong)(uVar1 + 6)) =
                       ((byte)((uint)param_2 >> 8) & 7) + ((byte)((uint)param_3 >> 8) & 7) * '\b';
                  param_3 = param_5 + param_3;
                  param_2 = param_4 + param_2;
                  if (uVar1 + 7 <= param_6) {
                    *(byte *)((long)param_1 + (ulong)(uVar1 + 7)) =
                         ((byte)((uint)param_2 >> 8) & 7) + ((byte)((uint)param_3 >> 8) & 7) * '\b';
                    param_3 = param_5 + param_3;
                    param_2 = param_4 + param_2;
                    if (uVar1 + 8 <= param_6) {
                      *(byte *)((long)param_1 + (ulong)(uVar1 + 8)) =
                           ((byte)((uint)param_2 >> 8) & 7) +
                           ((byte)((uint)param_3 >> 8) & 7) * '\b';
                      param_3 = param_5 + param_3;
                      param_2 = param_4 + param_2;
                      if (uVar1 + 9 <= param_6) {
                        *(byte *)((long)param_1 + (ulong)(uVar1 + 9)) =
                             ((byte)((uint)param_2 >> 8) & 7) +
                             ((byte)((uint)param_3 >> 8) & 7) * '\b';
                        param_3 = param_5 + param_3;
                        param_2 = param_4 + param_2;
                        if (uVar1 + 10 <= param_6) {
                          *(byte *)((long)param_1 + (ulong)(uVar1 + 10)) =
                               ((byte)((uint)param_2 >> 8) & 7) +
                               ((byte)((uint)param_3 >> 8) & 7) * '\b';
                          param_3 = param_5 + param_3;
                          param_2 = param_4 + param_2;
                          if (uVar1 + 0xb <= param_6) {
                            *(byte *)((long)param_1 + (ulong)(uVar1 + 0xb)) =
                                 ((byte)((uint)param_2 >> 8) & 7) +
                                 ((byte)((uint)param_3 >> 8) & 7) * '\b';
                            param_3 = param_5 + param_3;
                            param_2 = param_4 + param_2;
                            if (uVar1 + 0xc <= param_6) {
                              *(byte *)((long)param_1 + (ulong)(uVar1 + 0xc)) =
                                   ((byte)((uint)param_2 >> 8) & 7) +
                                   ((byte)((uint)param_3 >> 8) & 7) * '\b';
                              param_3 = param_5 + param_3;
                              param_2 = param_4 + param_2;
                              if (uVar1 + 0xd <= param_6) {
                                *(byte *)((long)param_1 + (ulong)(uVar1 + 0xd)) =
                                     ((byte)((uint)param_2 >> 8) & 7) +
                                     ((byte)((uint)param_3 >> 8) & 7) * '\b';
                                if (uVar1 + 0xe <= param_6) {
                                  *(byte *)((long)param_1 + (ulong)(uVar1 + 0xe)) =
                                       ((byte)((uint)(param_4 + param_2) >> 8) & 7) +
                                       ((byte)((uint)(param_5 + param_3) >> 8) & 7) * '\b';
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
    return;
  }
  uVar5 = 0;
  do {
    *(byte *)((long)param_1 + uVar5) =
         ((byte)((uint)param_2 >> 8) & 7) + ((byte)((uint)param_3 >> 8) & 7) * '\b';
    uVar1 = (int)uVar5 + 1;
    uVar5 = (ulong)uVar1;
    param_3 = param_3 + param_5;
    param_2 = param_2 + param_4;
  } while (uVar1 <= param_6);
  return;
}


