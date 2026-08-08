/*
 * Ghidra decompilation
 *
 * Function : spu_render_samples
 * Address  : 0016c030
 * Program  : drastic64
 */


void spu_render_samples(long param_1,undefined8 *param_2,int param_3)

{
  undefined8 *puVar1;
  char cVar2;
  short sVar3;
  bool bVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  uint extraout_w9;
  uint extraout_w9_00;
  ulong uVar15;
  long extraout_x13;
  long lVar16;
  long extraout_x13_00;
  ulong extraout_x13_01;
  uint extraout_w14;
  uint extraout_w14_00;
  ulong uVar17;
  ulong extraout_x15;
  long extraout_x15_00;
  ulong extraout_x18;
  ulong extraout_x18_00;
  long lVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  long lVar22;
  
  lVar12 = param_1 + 0x40028;
  lVar16 = (long)param_2 + (ulong)(param_3 - 1) * 8 + 0xc;
  lVar18 = 0x3ffc;
LAB_0016c074:
  if (*(char *)(lVar12 + 0xbe) != '\0') {
    uVar14 = (uint)*(byte *)(lVar12 + 0xbc);
    if (*(char *)(lVar12 + 0xbd) == '\0') {
      iVar6 = (int)*(short *)(lVar12 + 0xb4);
      iVar20 = (int)*(short *)(lVar12 + 0xb6);
      uVar19 = *(uint *)(lVar12 + 0xac);
      uVar15 = *(ulong *)(lVar12 + 0x80);
      lVar22 = *(long *)(lVar12 + 0x88);
      lVar13 = *(long *)(lVar12 + 0xa0);
      iVar7 = (int)*(short *)(lVar12 + 0xb4);
      iVar21 = (int)*(short *)(lVar12 + 0xb6);
      if (*(byte *)(lVar12 + 0xbc) == 1) goto LAB_0016c458;
LAB_0016c0a4:
      if (uVar14 == 2) {
        lVar13 = (long)param_2 + 4;
        if (param_3 != 0) {
          do {
            uVar17 = uVar15 >> 0x20;
            if (*(uint *)(lVar12 + 0x90) <= (uint)(uVar15 >> 0x20)) {
              do {
                spu_adpcm_decode_block(lVar12);
                uVar15 = extraout_x13_01;
                lVar13 = extraout_x15_00;
                uVar17 = extraout_x18_00;
              } while (*(uint *)(lVar12 + 0x90) <= extraout_w14_00);
            }
            uVar15 = uVar15 + lVar22;
            sVar3 = *(short *)(lVar12 + (uVar17 & 0x3f) * 2);
            *(short *)(lVar13 + lVar18) = (short)(((int)sVar3 & 0xfU) << 0xc);
            *(ulong *)(lVar13 + -4) =
                 CONCAT44(iVar21 * sVar3 + (int)((ulong)*(undefined8 *)(lVar13 + -4) >> 0x20),
                          iVar7 * sVar3 + (int)*(undefined8 *)(lVar13 + -4));
            if ((ulong)uVar19 <= uVar15 >> 0x20) {
              puVar8 = *(uint **)(lVar12 + 0x98);
              uVar14 = *puVar8;
              if ((uVar14 >> 0x1b & 1) == 0) goto LAB_0016c5a4;
              uVar14 = *(uint *)(lVar12 + 0xb0);
              if (*(char *)(lVar12 + 0xc1) == '\0') {
                uVar19 = uVar19 + uVar14;
                *(uint *)(lVar12 + 0xac) = uVar19;
                *(undefined2 *)(lVar12 + 0xb8) = *(undefined2 *)(lVar12 + 0xba);
                *(undefined *)(lVar12 + 0xbf) = *(undefined *)(lVar12 + 0xc0);
                *(undefined *)(lVar12 + 0xc1) = 1;
              }
              else {
                uVar15 = uVar15 - ((ulong)uVar14 << 0x20);
                *(uint *)(lVar12 + 0x90) = *(int *)(lVar12 + 0x90) - uVar14;
                *(undefined2 *)(lVar12 + 0xba) = *(undefined2 *)(lVar12 + 0xb8);
                *(undefined *)(lVar12 + 0xc0) = *(undefined *)(lVar12 + 0xbf);
              }
            }
            lVar13 = lVar13 + 8;
          } while (lVar16 != lVar13);
        }
      }
      else if ((uVar14 == 0) && (param_3 != 0)) {
        lVar9 = (long)param_2 + 4;
        do {
          uVar17 = uVar15 >> 0x20;
          uVar15 = uVar15 + lVar22;
          cVar2 = *(char *)(lVar13 + uVar17);
          *(undefined2 *)(lVar9 + lVar18) = 0;
          iVar6 = cVar2 * 0x100;
          *(ulong *)(lVar9 + -4) =
               CONCAT44(iVar21 * iVar6 + (int)((ulong)*(undefined8 *)(lVar9 + -4) >> 0x20),
                        iVar7 * iVar6 + (int)*(undefined8 *)(lVar9 + -4));
          if ((ulong)uVar19 <= uVar15 >> 0x20) {
            puVar8 = *(uint **)(lVar12 + 0x98);
            uVar14 = *puVar8;
            if ((uVar14 >> 0x1b & 1) == 0) goto LAB_0016c5a4;
            uVar15 = uVar15 - ((ulong)*(uint *)(lVar12 + 0xb0) << 0x20);
          }
          lVar9 = lVar9 + 8;
        } while (lVar16 != lVar9);
      }
    }
    else {
      spu_update_channel_settings(param_1,lVar12);
      iVar6 = (int)*(short *)(lVar12 + 0xb4);
      iVar20 = (int)*(short *)(lVar12 + 0xb6);
      uVar19 = *(uint *)(lVar12 + 0xac);
      uVar15 = *(ulong *)(lVar12 + 0x80);
      lVar22 = *(long *)(lVar12 + 0x88);
      lVar13 = *(long *)(lVar12 + 0xa0);
      uVar14 = extraout_w9_00;
      iVar7 = iVar6;
      iVar21 = iVar20;
      if (extraout_w9_00 != 1) goto LAB_0016c0a4;
LAB_0016c458:
      lVar9 = (long)param_2 + 4;
      if (param_3 != 0) {
        do {
          uVar17 = uVar15 >> 0x20;
          uVar15 = uVar15 + lVar22;
          iVar7 = (int)*(short *)(lVar13 + uVar17 * 2);
          *(short *)(lVar9 + lVar18) = (short)((*(ushort *)(lVar13 + uVar17 * 2) & 0xf) << 0xc);
          *(ulong *)(lVar9 + -4) =
               CONCAT44(iVar20 * iVar7 + (int)((ulong)*(undefined8 *)(lVar9 + -4) >> 0x20),
                        iVar6 * iVar7 + (int)*(undefined8 *)(lVar9 + -4));
          if ((ulong)uVar19 <= uVar15 >> 0x20) {
            uVar14 = **(uint **)(lVar12 + 0x98);
            if ((uVar14 >> 0x1b & 1) == 0) {
              **(uint **)(lVar12 + 0x98) = uVar14 & 0x7fffffff;
              *(undefined *)(lVar12 + 0xbe) = 0;
              break;
            }
            uVar15 = uVar15 - ((ulong)*(uint *)(lVar12 + 0xb0) << 0x20);
          }
          lVar9 = lVar9 + 8;
        } while (lVar16 != lVar9);
      }
    }
    goto LAB_0016c0b0;
  }
  goto LAB_0016c0b4;
LAB_0016c5a4:
  *puVar8 = uVar14 & 0x7fffffff;
  *(undefined *)(lVar12 + 0xbe) = 0;
LAB_0016c0b0:
  *(ulong *)(lVar12 + 0x80) = uVar15;
LAB_0016c0b4:
  lVar18 = lVar18 + 2;
  lVar12 = lVar12 + 200;
  if (lVar18 == 0x4004) goto code_r0x0016c0c8;
  goto LAB_0016c074;
code_r0x0016c0c8:
  lVar16 = param_1 + 0x40348;
  puVar1 = param_2 + (ulong)(param_3 - 1) + 1;
LAB_0016c0e8:
  if (*(char *)(lVar16 + 0xbe) != '\0') {
    if (*(char *)(lVar16 + 0xbd) == '\0') {
      iVar6 = (int)*(short *)(lVar16 + 0xb4);
      iVar20 = (int)*(short *)(lVar16 + 0xb6);
      uVar17 = (ulong)*(uint *)(lVar16 + 0xac);
      uVar14 = (uint)*(byte *)(lVar16 + 0xbc);
      bVar4 = uVar14 == 2;
      uVar15 = *(ulong *)(lVar16 + 0x80);
      lVar18 = *(long *)(lVar16 + 0x88);
      lVar12 = *(long *)(lVar16 + 0xa0);
      iVar7 = (int)*(short *)(lVar16 + 0xb4);
      iVar21 = (int)*(short *)(lVar16 + 0xb6);
      if (bVar4) goto LAB_0016c2a0;
LAB_0016c118:
      if (uVar14 < 2 || bVar4) {
        if (uVar14 == 0) {
          puVar11 = param_2;
          if (param_3 != 0) {
            do {
              uVar5 = uVar15 >> 0x20;
              uVar15 = uVar15 + lVar18;
              iVar6 = *(char *)(lVar12 + uVar5) * 0x100;
              puVar10 = puVar11 + 1;
              *puVar11 = CONCAT44(iVar21 * iVar6 + (int)((ulong)*puVar11 >> 0x20),
                                  iVar7 * iVar6 + (int)*puVar11);
              if (uVar17 <= uVar15 >> 0x20) {
                puVar8 = *(uint **)(lVar16 + 0x98);
                uVar14 = *puVar8;
                if ((uVar14 >> 0x1b & 1) == 0) goto LAB_0016c420;
                uVar15 = uVar15 - ((ulong)*(uint *)(lVar16 + 0xb0) << 0x20);
              }
              puVar11 = puVar10;
            } while (puVar10 != puVar1);
          }
        }
        else {
          puVar11 = param_2;
          if (param_3 != 0) {
            do {
              uVar5 = uVar15 >> 0x20;
              uVar15 = uVar15 + lVar18;
              iVar6 = (int)*(short *)(lVar12 + uVar5 * 2);
              puVar10 = puVar11 + 1;
              *puVar11 = CONCAT44(iVar21 * iVar6 + (int)((ulong)*puVar11 >> 0x20),
                                  iVar7 * iVar6 + (int)*puVar11);
              if (uVar17 <= uVar15 >> 0x20) {
                puVar8 = *(uint **)(lVar16 + 0x98);
                uVar14 = *puVar8;
                if ((uVar14 >> 0x1b & 1) == 0) goto LAB_0016c420;
                uVar15 = uVar15 - ((ulong)*(uint *)(lVar16 + 0xb0) << 0x20);
              }
              puVar11 = puVar10;
            } while (puVar10 != puVar1);
          }
        }
      }
      else if (uVar14 == 3) {
        puVar11 = param_2;
        if (param_3 != 0) {
          do {
            uVar5 = uVar15 >> 0x20;
            uVar15 = uVar15 + lVar18;
            iVar6 = (int)*(short *)(lVar12 + uVar5 * 2);
            puVar10 = puVar11 + 1;
            *puVar11 = CONCAT44(iVar21 * iVar6 + (int)((ulong)*puVar11 >> 0x20),
                                iVar7 * iVar6 + (int)*puVar11);
            if (uVar17 <= uVar15 >> 0x20) {
              uVar15 = uVar15 - ((ulong)*(uint *)(lVar16 + 0xb0) << 0x20);
            }
            puVar11 = puVar10;
          } while (puVar10 != puVar1);
        }
      }
      else if ((uVar14 == 4) && (puVar11 = param_2, param_3 != 0)) {
        do {
          uVar5 = uVar15 >> 0x20;
          uVar15 = uVar15 + lVar18;
          iVar6 = *(char *)(lVar12 + uVar5) * 0x100;
          puVar10 = puVar11 + 1;
          *puVar11 = CONCAT44(iVar21 * iVar6 + (int)((ulong)*puVar11 >> 0x20),
                              iVar7 * iVar6 + (int)*puVar11);
          if (uVar17 <= uVar15 >> 0x20) {
            uVar15 = uVar15 - ((ulong)*(uint *)(lVar16 + 0xb0) << 0x20);
          }
          puVar11 = puVar10;
        } while (puVar10 != puVar1);
      }
    }
    else {
      spu_update_channel_settings(param_1,lVar16);
      iVar6 = (int)*(short *)(extraout_x13 + 0xb4);
      iVar20 = (int)*(short *)(extraout_x13 + 0xb6);
      uVar17 = (ulong)*(uint *)(extraout_x13 + 0xac);
      bVar4 = extraout_w9 == 2;
      uVar15 = *(ulong *)(extraout_x13 + 0x80);
      lVar18 = *(long *)(extraout_x13 + 0x88);
      lVar12 = *(long *)(extraout_x13 + 0xa0);
      lVar16 = extraout_x13;
      iVar7 = iVar6;
      iVar21 = iVar20;
      uVar14 = extraout_w9;
      if (!bVar4) goto LAB_0016c118;
LAB_0016c2a0:
      puVar11 = param_2;
      if (param_3 != 0) {
        do {
          uVar5 = uVar15 >> 0x20;
          if (*(uint *)(lVar16 + 0x90) <= (uint)(uVar15 >> 0x20)) {
            do {
              spu_adpcm_decode_block(lVar16);
              lVar16 = extraout_x13_00;
              uVar17 = extraout_x15;
              uVar5 = extraout_x18;
            } while (*(uint *)(extraout_x13_00 + 0x90) <= extraout_w14);
          }
          uVar15 = uVar15 + lVar18;
          iVar7 = (int)*(short *)(lVar16 + (uVar5 & 0x3f) * 2);
          puVar10 = puVar11 + 1;
          *puVar11 = CONCAT44(iVar20 * iVar7 + (int)((ulong)*puVar11 >> 0x20),
                              iVar6 * iVar7 + (int)*puVar11);
          if ((uVar17 & 0xffffffff) <= uVar15 >> 0x20) {
            puVar8 = *(uint **)(lVar16 + 0x98);
            uVar14 = *puVar8;
            if ((uVar14 >> 0x1b & 1) == 0) goto LAB_0016c420;
            uVar14 = *(uint *)(lVar16 + 0xb0);
            if (*(char *)(lVar16 + 0xc1) == '\0') {
              uVar14 = (int)uVar17 + uVar14;
              uVar17 = (ulong)uVar14;
              *(uint *)(lVar16 + 0xac) = uVar14;
              *(undefined2 *)(lVar16 + 0xb8) = *(undefined2 *)(lVar16 + 0xba);
              *(undefined *)(lVar16 + 0xbf) = *(undefined *)(lVar16 + 0xc0);
              *(undefined *)(lVar16 + 0xc1) = 1;
            }
            else {
              uVar15 = uVar15 - ((ulong)uVar14 << 0x20);
              *(uint *)(lVar16 + 0x90) = *(int *)(lVar16 + 0x90) - uVar14;
              *(undefined2 *)(lVar16 + 0xba) = *(undefined2 *)(lVar16 + 0xb8);
              *(undefined *)(lVar16 + 0xc0) = *(undefined *)(lVar16 + 0xbf);
            }
          }
          puVar11 = puVar10;
        } while (puVar10 != puVar1);
      }
    }
    goto LAB_0016c180;
  }
  goto LAB_0016c184;
LAB_0016c420:
  *puVar8 = uVar14 & 0x7fffffff;
  *(undefined *)(lVar16 + 0xbe) = 0;
LAB_0016c180:
  *(ulong *)(lVar16 + 0x80) = uVar15;
LAB_0016c184:
  lVar16 = lVar16 + 200;
  if (lVar16 == param_1 + 0x40ca8) {
    return;
  }
  goto LAB_0016c0e8;
}


