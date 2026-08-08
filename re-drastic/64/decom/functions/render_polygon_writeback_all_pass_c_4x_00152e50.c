/*
 * Ghidra decompilation
 *
 * Function : render_polygon_writeback_all_pass_c_4x
 * Address  : 00152e50
 * Program  : drastic64
 */


void render_polygon_writeback_all_pass_c_4x
               (long param_1,long param_2,long param_3,int param_4,byte param_5,ulong param_6,
               ulong param_7)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  ushort uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  ushort *puVar16;
  ushort *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  if (param_4 != 0) {
    uVar10 = (uint)param_5 << 0x18;
    puVar16 = (ushort *)(param_1 + 0x580);
    do {
      uVar9 = puVar16[0x58];
      puVar17 = puVar16 + 2;
      uVar15 = (ulong)*puVar16;
      if (uVar9 != 0) {
        lVar12 = (uVar15 + 4) * 4;
        uVar2 = param_2 + lVar12;
        uVar3 = param_3 + lVar12 + -0x10;
        uVar4 = param_3 + lVar12;
        uVar5 = param_2 + lVar12 + -0x10;
        uVar13 = param_7 + 0x10;
        uVar11 = uVar9 - 1;
        uVar14 = (uint)uVar9;
        if (((param_7 < uVar4 && uVar3 < uVar13 || uVar11 < 4) ||
            (param_7 >= uVar4 || uVar3 >= uVar13) && uVar11 == 4) ||
            (((uVar2 > uVar3 && uVar5 <= uVar4) && (uVar2 <= uVar3 || uVar4 != uVar5) ||
             param_6 < uVar2 && uVar5 < param_6 + 0x10) ||
            (param_7 < uVar2 && uVar5 < uVar13 || param_6 < uVar4 && uVar3 < param_6 + 0x10))) {
          lVar12 = 0;
          do {
            uVar8 = *(undefined4 *)(param_6 + lVar12 * 4);
            *(uint *)(param_3 + uVar15 * 4 + lVar12 * 4) = *(uint *)(param_7 + lVar12 * 4) | uVar10;
            *(undefined4 *)(param_2 + uVar15 * 4 + lVar12 * 4) = uVar8;
            lVar12 = lVar12 + 1;
          } while ((uint)lVar12 < uVar14);
        }
        else {
          lVar12 = 0;
          do {
            uVar19 = ((undefined8 *)(param_7 + lVar12))[1];
            uVar18 = *(undefined8 *)(param_7 + lVar12);
            uVar21 = ((undefined8 *)(param_6 + lVar12))[1];
            uVar20 = *(undefined8 *)(param_6 + lVar12);
            ((undefined8 *)(uVar3 + lVar12))[1] =
                 CONCAT17((byte)((ulong)uVar19 >> 0x38) | param_5,
                          CONCAT16((char)((ulong)uVar19 >> 0x30),
                                   CONCAT15((char)((ulong)uVar19 >> 0x28),
                                            CONCAT14((char)((ulong)uVar19 >> 0x20),
                                                     CONCAT13((byte)((ulong)uVar19 >> 0x18) |
                                                              param_5,(int3)uVar19)))));
            *(undefined8 *)(uVar3 + lVar12) =
                 CONCAT17((byte)((ulong)uVar18 >> 0x38) | param_5,
                          CONCAT16((char)((ulong)uVar18 >> 0x30),
                                   CONCAT15((char)((ulong)uVar18 >> 0x28),
                                            CONCAT14((char)((ulong)uVar18 >> 0x20),
                                                     CONCAT13((byte)((ulong)uVar18 >> 0x18) |
                                                              param_5,(int3)uVar18)))));
            ((undefined8 *)(uVar5 + lVar12))[1] = uVar21;
            *(undefined8 *)(uVar5 + lVar12) = uVar20;
            lVar12 = lVar12 + 0x10;
          } while (lVar12 != ((ulong)((uVar9 >> 2) - 1) + 1) * 0x10);
          uVar13 = (ulong)uVar9 & 0xfffc;
          lVar12 = param_6 + uVar13 * 4;
          lVar6 = param_7 + uVar13 * 4;
          if ((uVar9 & 3) != 0) {
            uVar8 = *(undefined4 *)(param_6 + uVar13 * 4);
            *(uint *)(param_3 + (uVar15 + uVar13) * 4) = *(uint *)(param_7 + uVar13 * 4) | uVar10;
            *(undefined4 *)(param_2 + (uVar15 + uVar13) * 4) = uVar8;
            uVar1 = (uVar14 & 0xfffffffc) + 1;
            if (uVar1 < uVar14) {
              lVar7 = uVar1 + uVar15;
              uVar8 = *(undefined4 *)(lVar12 + 4);
              *(uint *)(param_3 + lVar7 * 4) = *(uint *)(lVar6 + 4) | uVar10;
              *(undefined4 *)(param_2 + lVar7 * 4) = uVar8;
              uVar1 = (uVar14 & 0xfffffffc) + 2;
              if (uVar1 < uVar14) {
                lVar7 = uVar15 + uVar1;
                uVar8 = *(undefined4 *)(lVar12 + 8);
                *(uint *)(param_3 + lVar7 * 4) = *(uint *)(lVar6 + 8) | uVar10;
                *(undefined4 *)(param_2 + lVar7 * 4) = uVar8;
              }
            }
          }
        }
        lVar12 = (ulong)uVar11 * 4 + 4;
        param_6 = param_6 + lVar12;
        param_7 = param_7 + lVar12;
      }
      param_2 = param_2 + 0x800;
      param_3 = param_3 + 0x800;
      puVar16 = puVar17;
    } while (puVar17 != (ushort *)(param_1 + ((ulong)(param_4 - 1) + 0x161) * 4));
  }
  return;
}


