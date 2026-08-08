/*
 * Ghidra decompilation
 *
 * Function : render_polygon_edge_interpolate_parameters_c
 * Address  : 0014c340
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void render_polygon_edge_interpolate_parameters_c
               (long param_1,long param_2,undefined8 *param_3,byte *param_4,int param_5)

{
  bool bVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  short sVar14;
  short sVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  long lVar19;
  int iVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined2 *puVar23;
  long lVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  short sVar27;
  short sVar28;
  short sVar29;
  undefined2 *puVar30;
  undefined2 *puVar31;
  long lVar32;
  undefined2 *puVar33;
  undefined2 *puVar34;
  ulong uVar35;
  short sVar36;
  short sVar37;
  short sVar38;
  short sVar39;
  short sVar40;
  short sVar41;
  short sVar42;
  short sVar43;
  undefined8 uVar44;
  
  lVar19 = ___stack_chk_guard;
  if (param_5 != 0) {
    puVar33 = (undefined2 *)(param_2 + 0x2c0);
    puVar34 = (undefined2 *)(param_2 + 0x420);
    param_2 = param_2 + 0x580;
    uVar35 = 0;
    pbVar3 = param_4 + (ulong)(param_5 - 1) + 1;
    do {
      lVar24 = *(long *)(param_1 + uVar35 * 8);
      bVar8 = *param_4;
      lVar32 = *(long *)(param_1 + (ulong)((int)uVar35 + 1) * 8);
      uVar21 = texture_cache_build_pixel(*(undefined2 *)(lVar24 + 10));
      uVar22 = texture_cache_build_pixel(*(undefined2 *)(lVar32 + 10));
      uVar4 = (uint)uVar21 & 0x3f;
      sVar14 = *(short *)(lVar32 + 0xc) - *(short *)(lVar24 + 0xc);
      sVar15 = *(short *)(lVar32 + 0xe) - *(short *)(lVar24 + 0xe);
      uVar5 = (uint)((uVar21 & 0xffffffff) >> 8) & 0x3f;
      uVar18 = (uint)((uVar21 & 0xffffffff) >> 0x10) & 0x3f;
      iVar9 = *(short *)(lVar24 + 0xc) * 0x8000;
      iVar16 = (int)sVar14;
      iVar17 = (int)sVar15;
      iVar10 = *(short *)(lVar24 + 0xe) * 0x8000;
      iVar6 = iVar9 + 0x800;
      if (iVar16 < 1) {
        iVar6 = iVar9;
      }
      iVar11 = (((uint)uVar22 & 0x3f) - uVar4) * 8;
      iVar9 = uVar4 * 0x40000 + 0x38000;
      iVar12 = (((uint)((ulong)uVar22 >> 8) & 0x3f) - uVar5) * 8;
      iVar2 = uVar5 * 0x40000 + 0x38000;
      iVar13 = (((uint)((ulong)uVar22 >> 0x10) & 0x3f) - uVar18) * 8;
      iVar7 = iVar10 + 0x800;
      if (iVar17 < 1) {
        iVar7 = iVar10;
      }
      iVar10 = uVar18 * 0x40000 + 0x38000;
      if (bVar8 != 0) {
        puVar23 = (undefined2 *)(param_2 + 2);
        uVar21 = (ulong)(uint)bVar8;
        uVar4 = bVar8 - 1;
        bVar1 = (ulong)((long)puVar33 + (0x1f - (long)puVar34)) < 0x3f;
        puVar30 = (undefined2 *)((long)param_3 + uVar21 * 2);
        if (param_3 < (undefined8 *)(param_2 + uVar21 * 4) && puVar23 < puVar30 ||
            ((((bVar1 || uVar4 < 6) || !bVar1 && uVar4 == 6) ||
             (puVar23 < puVar34 + 0x10 && puVar34 < (undefined2 *)(param_2 + 0x20U) ||
             puVar23 < puVar33 + 0x10 && puVar33 < (undefined2 *)(param_2 + 0x20U))) ||
            (param_3 < puVar34 + uVar21 * 2 && puVar34 < puVar30 ||
            param_3 < puVar33 + uVar21 * 2 && puVar33 < puVar30))) {
          lVar24 = 0;
          do {
            sVar14 = *(short *)((long)param_3 + lVar24);
            iVar20 = (int)sVar14;
            puVar33[lVar24] = (short)(iVar6 + iVar16 * sVar14 >> 0xf);
            puVar33[lVar24 + 1] = (short)(iVar7 + iVar17 * sVar14 >> 0xf);
            puVar34[lVar24] = (short)((uint)(iVar9 + iVar11 * iVar20) >> 0xf);
            puVar34[lVar24 + 1] = (short)((uint)(iVar2 + iVar12 * iVar20) >> 0xf);
            puVar23[lVar24] = (short)((uint)(iVar10 + iVar13 * iVar20) >> 0xf);
            lVar24 = lVar24 + 2;
          } while ((ulong)uVar4 * 2 + 2 != lVar24);
        }
        else {
          sVar28 = (short)iVar11;
          sVar29 = (short)iVar12;
          sVar27 = (short)iVar13;
          puVar25 = param_3;
          puVar30 = puVar34;
          puVar31 = puVar33;
          do {
            puVar26 = puVar25 + 2;
            uVar44 = puVar25[1];
            uVar22 = *puVar25;
            sVar40 = (short)uVar22;
            sVar41 = (short)((ulong)uVar22 >> 0x10);
            sVar42 = (short)((ulong)uVar22 >> 0x20);
            sVar43 = (short)((ulong)uVar22 >> 0x30);
            sVar36 = (short)uVar44;
            sVar37 = (short)((ulong)uVar44 >> 0x10);
            sVar38 = (short)((ulong)uVar44 >> 0x20);
            sVar39 = (short)((ulong)uVar44 >> 0x30);
            *puVar31 = (short)(iVar6 + (int)sVar40 * (int)sVar14 >> 0xf);
            puVar31[1] = (short)(iVar7 + (int)sVar40 * (int)sVar15 >> 0xf);
            puVar31[2] = (short)(iVar6 + (int)sVar41 * (int)sVar14 >> 0xf);
            puVar31[3] = (short)(iVar7 + (int)sVar41 * (int)sVar15 >> 0xf);
            puVar31[4] = (short)(iVar6 + (int)sVar42 * (int)sVar14 >> 0xf);
            puVar31[5] = (short)(iVar7 + (int)sVar42 * (int)sVar15 >> 0xf);
            puVar31[6] = (short)(iVar6 + (int)sVar43 * (int)sVar14 >> 0xf);
            puVar31[7] = (short)(iVar7 + (int)sVar43 * (int)sVar15 >> 0xf);
            puVar31[8] = (short)(iVar6 + (int)sVar36 * (int)sVar14 >> 0xf);
            puVar31[9] = (short)(iVar7 + (int)sVar36 * (int)sVar15 >> 0xf);
            puVar31[10] = (short)(iVar6 + (int)sVar37 * (int)sVar14 >> 0xf);
            puVar31[0xb] = (short)(iVar7 + (int)sVar37 * (int)sVar15 >> 0xf);
            puVar31[0xc] = (short)(iVar6 + (int)sVar38 * (int)sVar14 >> 0xf);
            puVar31[0xd] = (short)(iVar7 + (int)sVar38 * (int)sVar15 >> 0xf);
            puVar31[0xe] = (short)(iVar6 + (int)sVar39 * (int)sVar14 >> 0xf);
            puVar31[0xf] = (short)(iVar7 + (int)sVar39 * (int)sVar15 >> 0xf);
            puVar31 = puVar31 + 0x10;
            *puVar30 = (short)((uint)(iVar9 + (int)sVar40 * (int)sVar28) >> 0xf);
            puVar30[1] = (short)((uint)(iVar2 + (int)sVar40 * (int)sVar29) >> 0xf);
            puVar30[2] = (short)((uint)(iVar9 + (int)sVar41 * (int)sVar28) >> 0xf);
            puVar30[3] = (short)((uint)(iVar2 + (int)sVar41 * (int)sVar29) >> 0xf);
            puVar30[4] = (short)((uint)(iVar9 + (int)sVar42 * (int)sVar28) >> 0xf);
            puVar30[5] = (short)((uint)(iVar2 + (int)sVar42 * (int)sVar29) >> 0xf);
            puVar30[6] = (short)((uint)(iVar9 + (int)sVar43 * (int)sVar28) >> 0xf);
            puVar30[7] = (short)((uint)(iVar2 + (int)sVar43 * (int)sVar29) >> 0xf);
            puVar30[8] = (short)((uint)(iVar9 + (int)sVar36 * (int)sVar28) >> 0xf);
            puVar30[9] = (short)((uint)(iVar2 + (int)sVar36 * (int)sVar29) >> 0xf);
            puVar30[10] = (short)((uint)(iVar9 + (int)sVar37 * (int)sVar28) >> 0xf);
            puVar30[0xb] = (short)((uint)(iVar2 + (int)sVar37 * (int)sVar29) >> 0xf);
            puVar30[0xc] = (short)((uint)(iVar9 + (int)sVar38 * (int)sVar28) >> 0xf);
            puVar30[0xd] = (short)((uint)(iVar2 + (int)sVar38 * (int)sVar29) >> 0xf);
            puVar30[0xe] = (short)((uint)(iVar9 + (int)sVar39 * (int)sVar28) >> 0xf);
            puVar30[0xf] = (short)((uint)(iVar2 + (int)sVar39 * (int)sVar29) >> 0xf);
            puVar30 = puVar30 + 0x10;
            *puVar23 = (short)((uint)(iVar10 + (int)sVar40 * (int)sVar27) >> 0xf);
            puVar23[2] = (short)((uint)(iVar10 + (int)sVar41 * (int)sVar27) >> 0xf);
            puVar23[4] = (short)((uint)(iVar10 + (int)sVar42 * (int)sVar27) >> 0xf);
            puVar23[6] = (short)((uint)(iVar10 + (int)sVar43 * (int)sVar27) >> 0xf);
            puVar23[8] = (short)((uint)(iVar10 + (int)sVar36 * (int)sVar27) >> 0xf);
            puVar23[10] = (short)((uint)(iVar10 + (int)sVar37 * (int)sVar27) >> 0xf);
            puVar23[0xc] = (short)((uint)(iVar10 + (int)sVar38 * (int)sVar27) >> 0xf);
            puVar23[0xe] = (short)((uint)(iVar10 + (int)sVar39 * (int)sVar27) >> 0xf);
            puVar23 = puVar23 + 0x10;
            puVar25 = puVar26;
          } while (param_3 + (ulong)(bVar8 >> 3) * 2 != puVar26);
          uVar21 = (ulong)bVar8 & 0xf8;
          lVar32 = uVar21 * 2;
          uVar5 = bVar8 & 7;
          lVar24 = param_2 + uVar21 * 4;
          if ((bVar8 & 7) != 0) {
            sVar14 = *(short *)((long)param_3 + lVar32);
            iVar20 = (int)sVar14;
            puVar33[uVar21 * 2] = (short)(iVar6 + sVar14 * iVar16 >> 0xf);
            puVar33[uVar21 * 2 + 1] = (short)(iVar7 + sVar14 * iVar17 >> 0xf);
            puVar34[uVar21 * 2] = (short)((uint)(iVar9 + iVar20 * iVar11) >> 0xf);
            puVar34[uVar21 * 2 + 1] = (short)((uint)(iVar2 + iVar20 * iVar12) >> 0xf);
            *(short *)(lVar24 + 2) = (short)((uint)(iVar10 + iVar20 * iVar13) >> 0xf);
            if (uVar5 != 1) {
              sVar14 = *(short *)((long)param_3 + lVar32 + 2);
              iVar20 = (int)sVar14;
              puVar33[uVar21 * 2 + 2] = (short)(iVar6 + iVar16 * sVar14 >> 0xf);
              puVar33[uVar21 * 2 + 3] = (short)(iVar7 + iVar17 * sVar14 >> 0xf);
              puVar34[uVar21 * 2 + 2] = (short)((uint)(iVar9 + iVar11 * iVar20) >> 0xf);
              puVar34[uVar21 * 2 + 3] = (short)((uint)(iVar2 + iVar12 * iVar20) >> 0xf);
              *(short *)(lVar24 + 6) = (short)((uint)(iVar10 + iVar13 * iVar20) >> 0xf);
              if (uVar5 != 2) {
                sVar14 = *(short *)((long)param_3 + lVar32 + 4);
                iVar20 = (int)sVar14;
                puVar33[uVar21 * 2 + 4] = (short)(iVar6 + iVar16 * sVar14 >> 0xf);
                puVar33[uVar21 * 2 + 5] = (short)(iVar7 + iVar17 * sVar14 >> 0xf);
                puVar34[uVar21 * 2 + 4] = (short)((uint)(iVar9 + iVar11 * iVar20) >> 0xf);
                puVar34[uVar21 * 2 + 5] = (short)((uint)(iVar2 + iVar12 * iVar20) >> 0xf);
                *(short *)(lVar24 + 10) = (short)((uint)(iVar10 + iVar13 * iVar20) >> 0xf);
                if (uVar5 != 3) {
                  sVar14 = *(short *)((long)param_3 + lVar32 + 6);
                  iVar20 = (int)sVar14;
                  puVar33[uVar21 * 2 + 6] = (short)(iVar6 + iVar16 * sVar14 >> 0xf);
                  puVar33[uVar21 * 2 + 7] = (short)(iVar7 + iVar17 * sVar14 >> 0xf);
                  puVar34[uVar21 * 2 + 6] = (short)((uint)(iVar9 + iVar11 * iVar20) >> 0xf);
                  puVar34[uVar21 * 2 + 7] = (short)((uint)(iVar2 + iVar12 * iVar20) >> 0xf);
                  *(short *)(lVar24 + 0xe) = (short)((uint)(iVar10 + iVar13 * iVar20) >> 0xf);
                  if (uVar5 != 4) {
                    sVar14 = *(short *)((long)param_3 + lVar32 + 8);
                    iVar20 = (int)sVar14;
                    puVar33[uVar21 * 2 + 9] = (short)(iVar7 + iVar17 * sVar14 >> 0xf);
                    puVar33[uVar21 * 2 + 8] = (short)(iVar6 + iVar16 * sVar14 >> 0xf);
                    puVar34[uVar21 * 2 + 8] = (short)((uint)(iVar9 + iVar11 * iVar20) >> 0xf);
                    puVar34[uVar21 * 2 + 9] = (short)((uint)(iVar2 + iVar12 * iVar20) >> 0xf);
                    *(short *)(lVar24 + 0x12) = (short)((uint)(iVar10 + iVar13 * iVar20) >> 0xf);
                    if (uVar5 != 5) {
                      sVar14 = *(short *)((long)param_3 + lVar32 + 10);
                      iVar20 = (int)sVar14;
                      puVar33[uVar21 * 2 + 10] = (short)(iVar6 + iVar16 * sVar14 >> 0xf);
                      puVar33[uVar21 * 2 + 0xb] = (short)(iVar7 + iVar17 * sVar14 >> 0xf);
                      puVar34[uVar21 * 2 + 10] = (short)((uint)(iVar9 + iVar11 * iVar20) >> 0xf);
                      puVar34[uVar21 * 2 + 0xb] = (short)((uint)(iVar2 + iVar12 * iVar20) >> 0xf);
                      *(short *)(lVar24 + 0x16) = (short)((uint)(iVar10 + iVar13 * iVar20) >> 0xf);
                      if (uVar5 != 6) {
                        sVar14 = *(short *)((long)param_3 + lVar32 + 0xc);
                        iVar20 = (int)sVar14;
                        puVar33[uVar21 * 2 + 0xc] = (short)(iVar6 + iVar16 * sVar14 >> 0xf);
                        puVar33[uVar21 * 2 + 0xd] = (short)(iVar7 + iVar17 * sVar14 >> 0xf);
                        puVar34[uVar21 * 2 + 0xc] = (short)((uint)(iVar9 + iVar11 * iVar20) >> 0xf);
                        puVar34[uVar21 * 2 + 0xd] = (short)((uint)(iVar2 + iVar12 * iVar20) >> 0xf);
                        *(short *)(lVar24 + 0x1a) = (short)((uint)(iVar10 + iVar13 * iVar20) >> 0xf)
                        ;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        lVar24 = (long)(int)uVar4 + 1;
        param_3 = (undefined8 *)((long)param_3 + lVar24 * 2);
        puVar33 = puVar33 + lVar24 * 2;
        puVar34 = puVar34 + lVar24 * 2;
        param_2 = param_2 + lVar24 * 4;
      }
      param_4 = param_4 + 1;
      uVar35 = (ulong)((int)uVar35 + 2);
    } while (param_4 != pbVar3);
  }
  if (lVar19 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&__stack_chk_guard,lVar19 - ___stack_chk_guard,0);
}


