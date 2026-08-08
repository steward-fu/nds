/*
 * Ghidra decompilation
 *
 * Function : render_polygon_interpolate_uv_c
 * Address  : 00145e70
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void render_polygon_interpolate_uv_c
               (short *param_1,int *param_2,undefined8 *param_3,ulong param_4,int param_5)

{
  bool bVar1;
  short *psVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  short *psVar11;
  short *psVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  short sVar25;
  short sVar26;
  short sVar27;
  short sVar28;
  short sVar29;
  short sVar30;
  short sVar31;
  short sVar33;
  short sVar34;
  undefined8 uVar32;
  short sVar35;
  undefined8 uVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  int iVar51;
  
  lVar4 = ___stack_chk_guard;
  psVar2 = (short *)((long)param_2 + (ulong)(uint)(param_5 << 2));
  uVar5 = (uint)param_4;
  if (uVar5 != 0) {
    bVar1 = param_1 < (short *)((long)param_3 + (param_4 & 0xffffffff) * 2);
    uVar3 = uVar5 - 1;
    if (((bVar1 && param_3 < param_1 + (param_4 & 0xffffffff) * 2 || uVar3 < 6) ||
        (!bVar1 || param_3 >= param_1 + (param_4 & 0xffffffff) * 2) && uVar3 == 6) ||
        param_1 < (short *)((long)param_2 + (ulong)(uint)(param_5 << 2) + 0x20) &&
        psVar2 < param_1 + 0x10) {
      lVar6 = 0;
      do {
        sVar13 = *(short *)((long)param_3 + lVar6);
        iVar37 = param_2[lVar6 + 1];
        param_1[lVar6] = (short)(param_2[lVar6] + (int)psVar2[lVar6] * (int)sVar13 >> 0x13);
        param_1[lVar6 + 1] = (short)(iVar37 + (int)psVar2[lVar6 + 1] * (int)sVar13 >> 0x13);
        lVar6 = lVar6 + 2;
      } while ((ulong)uVar3 * 2 + 2 != lVar6);
    }
    else {
      piVar8 = param_2;
      puVar9 = param_3;
      psVar11 = param_1;
      psVar12 = psVar2;
      do {
        sVar16 = *psVar12;
        sVar24 = psVar12[1];
        sVar17 = psVar12[2];
        sVar25 = psVar12[3];
        sVar18 = psVar12[4];
        sVar26 = psVar12[5];
        sVar19 = psVar12[6];
        sVar27 = psVar12[7];
        sVar20 = psVar12[8];
        sVar28 = psVar12[9];
        sVar21 = psVar12[10];
        sVar29 = psVar12[0xb];
        sVar22 = psVar12[0xc];
        sVar30 = psVar12[0xd];
        sVar23 = psVar12[0xe];
        sVar31 = psVar12[0xf];
        psVar12 = psVar12 + 0x10;
        iVar48 = piVar8[1];
        iVar45 = piVar8[2];
        iVar49 = piVar8[3];
        iVar46 = piVar8[4];
        iVar50 = piVar8[5];
        iVar47 = piVar8[6];
        iVar51 = piVar8[7];
        puVar10 = puVar9 + 2;
        uVar36 = puVar9[1];
        uVar32 = *puVar9;
        iVar37 = piVar8[8];
        iVar41 = piVar8[9];
        iVar38 = piVar8[10];
        iVar42 = piVar8[0xb];
        iVar39 = piVar8[0xc];
        iVar43 = piVar8[0xd];
        iVar40 = piVar8[0xe];
        iVar44 = piVar8[0xf];
        sVar33 = (short)((ulong)uVar32 >> 0x10);
        sVar34 = (short)((ulong)uVar32 >> 0x20);
        sVar35 = (short)((ulong)uVar32 >> 0x30);
        sVar13 = (short)((ulong)uVar36 >> 0x10);
        sVar14 = (short)((ulong)uVar36 >> 0x20);
        sVar15 = (short)((ulong)uVar36 >> 0x30);
        *psVar11 = (short)(*piVar8 + (int)(short)uVar32 * (int)sVar16 >> 0x13);
        psVar11[1] = (short)(iVar48 + (int)(short)uVar32 * (int)sVar24 >> 0x13);
        psVar11[2] = (short)(iVar45 + (int)sVar33 * (int)sVar17 >> 0x13);
        psVar11[3] = (short)(iVar49 + (int)sVar33 * (int)sVar25 >> 0x13);
        psVar11[4] = (short)(iVar46 + (int)sVar34 * (int)sVar18 >> 0x13);
        psVar11[5] = (short)(iVar50 + (int)sVar34 * (int)sVar26 >> 0x13);
        psVar11[6] = (short)(iVar47 + (int)sVar35 * (int)sVar19 >> 0x13);
        psVar11[7] = (short)(iVar51 + (int)sVar35 * (int)sVar27 >> 0x13);
        psVar11[8] = (short)(iVar37 + (int)(short)uVar36 * (int)sVar20 >> 0x13);
        psVar11[9] = (short)(iVar41 + (int)(short)uVar36 * (int)sVar28 >> 0x13);
        psVar11[10] = (short)(iVar38 + (int)sVar13 * (int)sVar21 >> 0x13);
        psVar11[0xb] = (short)(iVar42 + (int)sVar13 * (int)sVar29 >> 0x13);
        psVar11[0xc] = (short)(iVar39 + (int)sVar14 * (int)sVar22 >> 0x13);
        psVar11[0xd] = (short)(iVar43 + (int)sVar14 * (int)sVar30 >> 0x13);
        psVar11[0xe] = (short)(iVar40 + (int)sVar15 * (int)sVar23 >> 0x13);
        psVar11[0xf] = (short)(iVar44 + (int)sVar15 * (int)sVar31 >> 0x13);
        psVar11 = psVar11 + 0x10;
        piVar8 = piVar8 + 0x10;
        puVar9 = puVar10;
      } while (puVar10 != param_3 + (ulong)((uVar5 >> 3) - 1) * 2 + 2);
      uVar7 = param_4 & 0xfffffff8;
      lVar6 = uVar7 * 2;
      uVar3 = uVar5 & 0xfffffff8;
      if ((param_4 & 7) != 0) {
        sVar13 = *(short *)((long)param_3 + lVar6);
        iVar37 = param_2[uVar7 * 2 + 1];
        param_1[uVar7 * 2] =
             (short)(param_2[uVar7 * 2] + (int)psVar2[uVar7 * 2] * (int)sVar13 >> 0x13);
        param_1[uVar7 * 2 + 1] = (short)(iVar37 + (int)psVar2[uVar7 * 2 + 1] * (int)sVar13 >> 0x13);
        if (uVar3 + 1 < uVar5) {
          iVar37 = param_2[uVar7 * 2 + 3];
          iVar38 = (int)*(short *)((long)param_3 + lVar6 + 2);
          param_1[uVar7 * 2 + 2] =
               (short)(param_2[uVar7 * 2 + 2] + psVar2[uVar7 * 2 + 2] * iVar38 >> 0x13);
          param_1[uVar7 * 2 + 3] = (short)(iVar37 + psVar2[uVar7 * 2 + 3] * iVar38 >> 0x13);
          if (uVar3 + 2 < uVar5) {
            iVar37 = param_2[uVar7 * 2 + 5];
            iVar38 = (int)*(short *)((long)param_3 + lVar6 + 4);
            param_1[uVar7 * 2 + 4] =
                 (short)(param_2[uVar7 * 2 + 4] + psVar2[uVar7 * 2 + 4] * iVar38 >> 0x13);
            param_1[uVar7 * 2 + 5] = (short)(iVar37 + psVar2[uVar7 * 2 + 5] * iVar38 >> 0x13);
            if (uVar3 + 3 < uVar5) {
              iVar37 = param_2[uVar7 * 2 + 7];
              iVar38 = (int)*(short *)((long)param_3 + lVar6 + 6);
              param_1[uVar7 * 2 + 6] =
                   (short)(param_2[uVar7 * 2 + 6] + psVar2[uVar7 * 2 + 6] * iVar38 >> 0x13);
              param_1[uVar7 * 2 + 7] = (short)(iVar37 + psVar2[uVar7 * 2 + 7] * iVar38 >> 0x13);
              if (uVar3 + 4 < uVar5) {
                iVar37 = param_2[uVar7 * 2 + 9];
                iVar38 = (int)*(short *)((long)param_3 + lVar6 + 8);
                param_1[uVar7 * 2 + 8] =
                     (short)(param_2[uVar7 * 2 + 8] + psVar2[uVar7 * 2 + 8] * iVar38 >> 0x13);
                param_1[uVar7 * 2 + 9] = (short)(iVar37 + psVar2[uVar7 * 2 + 9] * iVar38 >> 0x13);
                if (uVar3 + 5 < uVar5) {
                  iVar37 = param_2[uVar7 * 2 + 0xb];
                  iVar38 = (int)*(short *)((long)param_3 + lVar6 + 10);
                  param_1[uVar7 * 2 + 10] =
                       (short)(param_2[uVar7 * 2 + 10] + psVar2[uVar7 * 2 + 10] * iVar38 >> 0x13);
                  param_1[uVar7 * 2 + 0xb] =
                       (short)(iVar37 + psVar2[uVar7 * 2 + 0xb] * iVar38 >> 0x13);
                  if (uVar3 + 6 < uVar5) {
                    iVar37 = param_2[uVar7 * 2 + 0xd];
                    iVar38 = (int)*(short *)((long)param_3 + lVar6 + 0xc);
                    param_1[uVar7 * 2 + 0xc] =
                         (short)(param_2[uVar7 * 2 + 0xc] + psVar2[uVar7 * 2 + 0xc] * iVar38 >> 0x13
                                );
                    param_1[uVar7 * 2 + 0xd] =
                         (short)(iVar37 + psVar2[uVar7 * 2 + 0xd] * iVar38 >> 0x13);
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
  __stack_chk_fail(lVar4 - ___stack_chk_guard,0);
}


