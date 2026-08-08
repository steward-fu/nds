/*
 * Ghidra decompilation
 *
 * Function : render_polygon_combine_colors_c
 * Address  : 001494a0
 * Program  : drastic64
 */


void render_polygon_combine_colors_c
               (undefined8 *param_1,ulong param_2,ulong param_3,uint param_4,byte param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint3 uVar8;
  uint3 uVar9;
  uint3 uVar10;
  bool bVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  uVar14 = param_3 & 0xffffffff;
  uVar2 = param_2 + uVar14;
  uVar3 = uVar2 + uVar14;
  if (param_4 != 0) {
    uVar15 = (ulong)param_4;
    uVar1 = (long)param_1 + (ulong)param_4 * 4;
    bVar11 = param_1 < (undefined8 *)(param_2 + uVar15);
    uVar7 = (uint)param_5 << 0x18;
    if (((bVar11 && param_2 < uVar1 || param_4 - 1 < 0xe) ||
        (!bVar11 || param_2 >= uVar1) && param_4 - 1 == 0xe) ||
        (param_1 < (undefined8 *)(param_2 + uVar15 + (param_3 & 0xffffffff) * 2) && uVar3 < uVar1 ||
        param_1 < (undefined8 *)(param_2 + uVar14 + uVar15) && uVar2 < uVar1)) {
      lVar12 = 0;
      do {
        *(uint *)((long)param_1 + lVar12 * 4) =
             (uint)*(byte *)(uVar3 + lVar12) << 0x10 | (uint)*(byte *)(uVar2 + lVar12) << 8 |
             *(byte *)(param_2 + lVar12) | uVar7;
        lVar12 = lVar12 + 1;
      } while ((uint)lVar12 < param_4);
      return;
    }
    lVar12 = 0;
    puVar13 = param_1;
    do {
      uVar17 = ((undefined8 *)(param_2 + lVar12))[1];
      uVar16 = *(undefined8 *)(param_2 + lVar12);
      uVar21 = ((undefined8 *)(uVar2 + lVar12))[1];
      uVar20 = *(undefined8 *)(uVar2 + lVar12);
      uVar8 = CONCAT12((char)((ulong)uVar17 >> 8),(short)uVar17) & 0xff00ff;
      uVar9 = CONCAT12((char)((ulong)uVar21 >> 8),(short)uVar21) & 0xff00ff;
      uVar19 = ((undefined8 *)(uVar3 + lVar12))[1];
      uVar18 = *(undefined8 *)(uVar3 + lVar12);
      lVar12 = lVar12 + 0x10;
      uVar10 = CONCAT12((char)((ulong)uVar19 >> 8),(short)uVar19) & 0xff00ff;
      puVar13[1] = CONCAT17(param_5,CONCAT16((char)((ulong)uVar18 >> 0x18),
                                             CONCAT15((char)((ulong)uVar20 >> 0x18),
                                                      CONCAT14((char)((ulong)uVar16 >> 0x18),
                                                               CONCAT13(param_5,CONCAT12((char)((
                                                  ulong)uVar18 >> 0x10),
                                                  CONCAT11((char)((ulong)uVar20 >> 0x10),
                                                           (char)((ulong)uVar16 >> 0x10))))))));
      *puVar13 = CONCAT17(param_5,CONCAT16((char)((ulong)uVar18 >> 8),
                                           CONCAT15((char)((ulong)uVar20 >> 8),
                                                    CONCAT14((char)((ulong)uVar16 >> 8),
                                                             CONCAT13(param_5,CONCAT12((char)uVar18,
                                                                                       CONCAT11((
                                                  char)uVar20,(char)uVar16)))))));
      puVar13[3] = CONCAT17(param_5,CONCAT16((char)((ulong)uVar18 >> 0x38),
                                             CONCAT15((char)((ulong)uVar20 >> 0x38),
                                                      CONCAT14((char)((ulong)uVar16 >> 0x38),
                                                               CONCAT13(param_5,CONCAT12((char)((
                                                  ulong)uVar18 >> 0x30),
                                                  CONCAT11((char)((ulong)uVar20 >> 0x30),
                                                           (char)((ulong)uVar16 >> 0x30))))))));
      puVar13[2] = CONCAT17(param_5,CONCAT16((char)((ulong)uVar18 >> 0x28),
                                             CONCAT15((char)((ulong)uVar20 >> 0x28),
                                                      CONCAT14((char)((ulong)uVar16 >> 0x28),
                                                               CONCAT13(param_5,CONCAT12((char)((
                                                  ulong)uVar18 >> 0x20),
                                                  CONCAT11((char)((ulong)uVar20 >> 0x20),
                                                           (char)((ulong)uVar16 >> 0x20))))))));
      puVar13[5] = CONCAT17(param_5,CONCAT16((char)((ulong)uVar19 >> 0x18),
                                             CONCAT15((char)((ulong)uVar21 >> 0x18),
                                                      CONCAT14((char)((ulong)uVar17 >> 0x18),
                                                               CONCAT13(param_5,CONCAT12((char)((
                                                  ulong)uVar19 >> 0x10),
                                                  CONCAT11((char)((ulong)uVar21 >> 0x10),
                                                           (char)((ulong)uVar17 >> 0x10))))))));
      puVar13[4] = CONCAT17(param_5,CONCAT16((char)(uVar10 >> 0x10),
                                             CONCAT15((char)(uVar9 >> 0x10),
                                                      CONCAT14((char)(uVar8 >> 0x10),
                                                               CONCAT13(param_5,CONCAT12((char)
                                                  uVar10,CONCAT11((char)uVar9,(char)uVar8)))))));
      puVar13[7] = CONCAT17(param_5,CONCAT16((char)((ulong)uVar19 >> 0x38),
                                             CONCAT15((char)((ulong)uVar21 >> 0x38),
                                                      CONCAT14((char)((ulong)uVar17 >> 0x38),
                                                               CONCAT13(param_5,CONCAT12((char)((
                                                  ulong)uVar19 >> 0x30),
                                                  CONCAT11((char)((ulong)uVar21 >> 0x30),
                                                           (char)((ulong)uVar17 >> 0x30))))))));
      puVar13[6] = CONCAT17(param_5,CONCAT16((char)((ulong)uVar19 >> 0x28),
                                             CONCAT15((char)((ulong)uVar21 >> 0x28),
                                                      CONCAT14((char)((ulong)uVar17 >> 0x28),
                                                               CONCAT13(param_5,CONCAT12((char)((
                                                  ulong)uVar19 >> 0x20),
                                                  CONCAT11((char)((ulong)uVar21 >> 0x20),
                                                           (char)((ulong)uVar17 >> 0x20))))))));
      puVar13 = puVar13 + 8;
    } while (lVar12 != ((ulong)((param_4 >> 4) - 1) + 1) * 0x10);
    uVar14 = (ulong)param_4 & 0xfffffff0;
    lVar12 = param_2 + uVar14;
    lVar4 = uVar2 + uVar14;
    lVar5 = uVar3 + uVar14;
    uVar6 = param_4 & 0xfffffff0;
    if ((((((param_4 & 0xf) != 0) &&
          (*(uint *)((long)param_1 + uVar14 * 4) =
                (uint)*(byte *)(uVar3 + uVar6) << 0x10 | (uint)*(byte *)(uVar2 + uVar6) << 8 |
                *(byte *)(param_2 + uVar6) | uVar7, uVar6 + 1 < param_4)) &&
         (*(uint *)((long)param_1 + uVar14 * 4 + 4) =
               (uint)*(byte *)(lVar5 + 1) << 0x10 | (uint)*(byte *)(lVar4 + 1) << 8 |
               *(byte *)(lVar12 + 1) | uVar7, uVar6 + 2 < param_4)) &&
        (((*(uint *)((long)param_1 + uVar14 * 4 + 8) =
                (uint)*(byte *)(lVar5 + 2) << 0x10 | (uint)*(byte *)(lVar4 + 2) << 8 |
                *(byte *)(lVar12 + 2) | uVar7, uVar6 + 3 < param_4 &&
          (*(uint *)((long)param_1 + uVar14 * 4 + 0xc) =
                (uint)*(byte *)(lVar5 + 3) << 0x10 | (uint)*(byte *)(lVar4 + 3) << 8 |
                *(byte *)(lVar12 + 3) | uVar7, uVar6 + 4 < param_4)) &&
         ((*(uint *)((long)param_1 + uVar14 * 4 + 0x10) =
                (uint)*(byte *)(lVar5 + 4) << 0x10 | (uint)*(byte *)(lVar4 + 4) << 8 |
                *(byte *)(lVar12 + 4) | uVar7, uVar6 + 5 < param_4 &&
          ((*(uint *)((long)param_1 + uVar14 * 4 + 0x14) =
                 (uint)*(byte *)(lVar5 + 5) << 0x10 | (uint)*(byte *)(lVar4 + 5) << 8 |
                 *(byte *)(lVar12 + 5) | uVar7, uVar6 + 6 < param_4 &&
           (*(uint *)((long)param_1 + uVar14 * 4 + 0x18) =
                 (uint)*(byte *)(lVar5 + 6) << 0x10 | (uint)*(byte *)(lVar4 + 6) << 8 |
                 *(byte *)(lVar12 + 6) | uVar7, uVar6 + 7 < param_4)))))))) &&
       ((*(uint *)((long)param_1 + uVar14 * 4 + 0x1c) =
              (uint)*(byte *)(lVar5 + 7) << 0x10 | (uint)*(byte *)(lVar4 + 7) << 8 |
              *(byte *)(lVar12 + 7) | uVar7, uVar6 + 8 < param_4 &&
        (((((*(uint *)((long)param_1 + uVar14 * 4 + 0x20) =
                  (uint)*(byte *)(lVar5 + 8) << 0x10 | (uint)*(byte *)(lVar4 + 8) << 8 |
                  *(byte *)(lVar12 + 8) | uVar7, uVar6 + 9 < param_4 &&
            (*(uint *)((long)param_1 + uVar14 * 4 + 0x24) =
                  (uint)*(byte *)(lVar5 + 9) << 0x10 | (uint)*(byte *)(lVar4 + 9) << 8 |
                  *(byte *)(lVar12 + 9) | uVar7, uVar6 + 10 < param_4)) &&
           (*(uint *)((long)param_1 + uVar14 * 4 + 0x28) =
                 (uint)*(byte *)(lVar5 + 10) << 0x10 | (uint)*(byte *)(lVar4 + 10) << 8 |
                 *(byte *)(lVar12 + 10) | uVar7, uVar6 + 0xb < param_4)) &&
          ((*(uint *)((long)param_1 + uVar14 * 4 + 0x2c) =
                 (uint)*(byte *)(lVar5 + 0xb) << 0x10 | (uint)*(byte *)(lVar4 + 0xb) << 8 |
                 *(byte *)(lVar12 + 0xb) | uVar7, uVar6 + 0xc < param_4 &&
           (*(uint *)((long)param_1 + uVar14 * 4 + 0x30) =
                 (uint)*(byte *)(lVar5 + 0xc) << 0x10 | (uint)*(byte *)(lVar4 + 0xc) << 8 |
                 *(byte *)(lVar12 + 0xc) | uVar7, uVar6 + 0xd < param_4)))) &&
         (*(uint *)((long)param_1 + uVar14 * 4 + 0x34) =
               (uint)*(byte *)(lVar5 + 0xd) << 0x10 | (uint)*(byte *)(lVar4 + 0xd) << 8 |
               *(byte *)(lVar12 + 0xd) | uVar7, uVar6 + 0xe < param_4)))))) {
      *(uint *)((long)param_1 + uVar14 * 4 + 0x38) =
           (uint)*(byte *)(lVar5 + 0xe) << 0x10 | (uint)*(byte *)(lVar4 + 0xe) << 8 |
           *(byte *)(lVar12 + 0xe) | uVar7;
    }
  }
  return;
}


