/*
 * Ghidra decompilation
 *
 * Function : geometry_transform_vertexes
 * Address  : 0015e060
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void geometry_transform_vertexes(long param_1)

{
  ushort *puVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  byte bVar17;
  ushort uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  undefined4 *puVar23;
  int *piVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  int iVar27;
  int iVar28;
  uint uVar29;
  uint uVar30;
  byte *pbVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  ushort *puVar35;
  ushort *puVar36;
  byte *pbVar37;
  int iVar38;
  int iVar39;
  uint uVar40;
  ulong uVar41;
  undefined8 *puVar42;
  long lVar43;
  uint uVar44;
  ushort *puVar45;
  ushort *puVar46;
  uint uVar47;
  ulong uVar48;
  uint uVar49;
  undefined2 uVar50;
  ushort local_90 [68];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 0x300) != 0) {
    uVar44 = *(uint *)(param_1 + 0x330);
    if (*(char *)(param_1 + 0x9ad0) != '\0') {
      geometry_matrix_multiply_4x4_by_4x4_asm
                (param_1 + 0x97e4,param_1 + 0x9824,*(undefined8 *)(param_1 + 0x9a58));
      *(undefined *)(param_1 + 0x9ad0) = 0;
    }
    geometry_transform_vertex_block_asm(param_1);
    uVar47 = *(uint *)(param_1 + 0x300);
    uVar48 = (ulong)uVar47;
    uVar3 = uVar44;
    if (uVar47 != 0) {
      uVar3 = uVar47 + uVar44;
      puVar23 = (undefined4 *)(param_1 + 0x52c);
      do {
        uVar41 = (ulong)uVar44;
        uVar44 = uVar44 + 1;
        *(undefined4 *)(param_1 + uVar41 * 4 + 0x14dc) = *puVar23;
        puVar23 = puVar23 + 1;
      } while (uVar44 != uVar3);
    }
    puVar1 = (ushort *)(param_1 + 0x44c);
    iVar27 = (int)(*(long *)(param_1 + 800) - (long)puVar1 >> 1);
    pbVar2 = (byte *)(param_1 + 0x4dc);
    uVar44 = *(uint *)(param_1 + 0x644);
    puVar42 = (undefined8 *)(param_1 + 0x1354 + (ulong)*(uint *)(param_1 + 0x330) * 2);
    iVar21 = (int)(*(long *)(param_1 + 0x318) - (param_1 + 0x33c) >> 2);
    if (iVar21 == 0) {
      if (iVar27 != 0) {
        pbVar31 = (byte *)(param_1 + 0x4dc);
        uVar40 = uVar44;
        uVar30 = 0;
        do {
          pbVar37 = pbVar31 + 1;
          uVar33 = *pbVar31 & 0x7f;
          uVar30 = uVar33 - uVar30;
          uVar44 = (uint)*(ushort *)((-0x56e - param_1) + (long)pbVar37 * 2);
          if (uVar30 != 0) {
            uVar50 = (undefined2)uVar40;
            if (uVar30 - 1 < 7) {
              uVar40 = 0;
              puVar26 = puVar42;
LAB_0015e778:
              *(undefined2 *)puVar26 = uVar50;
              if ((((uVar40 + 1 < uVar30) &&
                   (*(undefined2 *)((long)puVar26 + 2) = uVar50, uVar40 + 2 < uVar30)) &&
                  (*(undefined2 *)((long)puVar26 + 4) = uVar50, uVar40 + 3 < uVar30)) &&
                 (((*(undefined2 *)((long)puVar26 + 6) = uVar50, uVar40 + 4 < uVar30 &&
                   (*(undefined2 *)(puVar26 + 1) = uVar50, uVar40 + 5 < uVar30)) &&
                  (*(undefined2 *)((long)puVar26 + 10) = uVar50, uVar40 + 6 < uVar30)))) {
                *(undefined2 *)((long)puVar26 + 0xc) = uVar50;
              }
            }
            else {
              puVar26 = puVar42;
              do {
                puVar25 = puVar26 + 2;
                puVar26[1] = CONCAT26(uVar50,CONCAT24(uVar50,CONCAT22(uVar50,uVar50)));
                *puVar26 = CONCAT26(uVar50,CONCAT24(uVar50,CONCAT22(uVar50,uVar50)));
                puVar26 = puVar25;
              } while (puVar42 + (ulong)((uVar30 >> 3) - 1) * 2 + 2 != puVar25);
              uVar40 = uVar30 & 0xfffffff8;
              puVar26 = (undefined8 *)((long)puVar42 + ((ulong)uVar30 & 0xfffffff8) * 2);
              if ((uVar30 & 7) != 0) goto LAB_0015e778;
            }
            puVar42 = (undefined8 *)((long)puVar42 + (ulong)(uVar30 - 1) * 2 + 2);
          }
          pbVar31 = pbVar37;
          uVar40 = uVar44;
          uVar30 = uVar33;
        } while (pbVar37 != (byte *)(param_1 + (ulong)(iVar27 - 1) + 0x4dd));
        uVar48 = (ulong)(uVar47 - uVar33);
      }
    }
    else {
      uVar48 = (ulong)(iVar21 - 1);
      piVar24 = *(int **)(param_1 + 0x9a60);
      uVar30 = *(uint *)(param_1 + 0x9758);
      uVar40 = *(uint *)(param_1 + 0x975c);
      uVar33 = *(uint *)(param_1 + 0x9760);
      iVar10 = *piVar24;
      iVar11 = piVar24[1];
      iVar12 = piVar24[4];
      iVar13 = piVar24[5];
      iVar14 = piVar24[8];
      iVar15 = piVar24[2];
      iVar16 = piVar24[6];
      iVar21 = piVar24[9];
      iVar9 = piVar24[10];
      puVar46 = local_90;
      bVar17 = *(byte *)(param_1 + 0x9ac3);
      lVar43 = 1;
      do {
        uVar41 = (ulong)*(uint *)(param_1 + 0x338 + lVar43 * 4);
        iVar22 = (int)((long)(uVar41 << 0x2c) >> 0x36);
        iVar28 = (int)((long)(uVar41 << 0x36) >> 0x36);
        iVar38 = (int)((long)(uVar41 << 0x22) >> 0x36);
        iVar20 = (int)((ulong)((long)iVar22 * (long)iVar12 + (long)iVar28 * (long)iVar10 +
                              (long)iVar38 * (long)iVar14) >> 0xc);
        iVar19 = (int)((ulong)((long)iVar22 * (long)iVar13 + (long)iVar28 * (long)iVar11 +
                              (long)iVar38 * (long)iVar21) >> 0xc);
        uVar49 = (uint)bVar17;
        uVar32 = uVar30;
        uVar34 = uVar40;
        uVar29 = uVar33;
        if (uVar49 != 0) {
          uVar41 = 0;
          do {
            if ((uVar49 & 1) != 0) {
              lVar5 = uVar41 * 0xc + 0x96c8;
              lVar6 = param_1 + lVar5;
              lVar7 = uVar41 * 0xc + 0x96f8;
              lVar8 = param_1 + lVar7;
              iVar39 = (int)((ulong)((long)iVar22 * (long)iVar16 + (long)iVar28 * (long)iVar15 +
                                    (long)iVar38 * (long)iVar9) >> 0xc);
              iVar4 = (iVar19 * *(int *)(lVar6 + 4) >> 9) +
                      (iVar20 * *(int *)(param_1 + lVar5) >> 9) +
                      (iVar39 * *(int *)(lVar6 + 8) >> 9);
              if (iVar4 < 0) {
                iVar4 = 0;
              }
              iVar39 = (iVar19 * *(int *)(lVar8 + 4) >> 9) +
                       (iVar20 * *(int *)(param_1 + lVar7) >> 9) +
                       (iVar39 * *(int *)(lVar8 + 8) >> 9);
              if (iVar39 < 0) {
                iVar39 = 0;
              }
              if (*(char *)(param_1 + 0x9ace) == '\0') {
                iVar39 = iVar39 * iVar39 >> 9;
              }
              else {
                iVar39 = iVar39 * iVar39 >> 0xb;
                if (0x7f < iVar39) {
                  iVar39 = 0x7f;
                }
                iVar39 = (uint)*(byte *)(param_1 + iVar39 + 0x98a4) * 2;
              }
              lVar5 = param_1 + uVar41 * 6;
              uVar32 = uVar32 + (uint)*(ushort *)(lVar5 + 0x9728) * iVar4 +
                       (uint)*(ushort *)(lVar5 + 0x9740) * iVar39;
              uVar34 = uVar34 + (uint)*(ushort *)(lVar5 + 0x972a) * iVar4 +
                       (uint)*(ushort *)(lVar5 + 0x9742) * iVar39;
              uVar29 = uVar29 + (uint)*(ushort *)(lVar5 + 0x972c) * iVar4 +
                       (uint)*(ushort *)(lVar5 + 0x9744) * iVar39;
            }
            uVar41 = (ulong)((int)uVar41 + 1);
            uVar49 = uVar49 >> 1;
          } while (uVar49 != 0);
        }
        uVar34 = uVar34 >> 0xe;
        uVar29 = uVar29 >> 0xe;
        if (0x1f < uVar34) {
          uVar34 = 0x1f;
        }
        if (0x1f < uVar29) {
          uVar29 = 0x1f;
        }
        uVar32 = uVar32 >> 0xe;
        if (0x1f < uVar32) {
          uVar32 = 0x1f;
        }
        local_90[lVar43 + -1] = (ushort)(uVar29 << 10) | (ushort)(uVar34 << 5) | (ushort)uVar32;
        lVar43 = lVar43 + 1;
      } while (lVar43 != uVar48 + 2);
      if (iVar27 == 0) {
        pbVar31 = pbVar2;
        uVar40 = uVar44;
        uVar30 = 0;
        do {
          pbVar37 = pbVar31 + 1;
          uVar33 = (uint)*pbVar31;
          uVar30 = uVar33 - uVar30;
          uVar44 = (uint)*puVar46;
          if (uVar30 != 0) {
            uVar50 = (undefined2)uVar40;
            if (uVar30 - 1 < 7) {
              uVar40 = 0;
              puVar26 = puVar42;
LAB_0015e520:
              *(undefined2 *)puVar26 = uVar50;
              if (((uVar40 + 1 < uVar30) &&
                  (*(undefined2 *)((long)puVar26 + 2) = uVar50, uVar40 + 2 < uVar30)) &&
                 ((*(undefined2 *)((long)puVar26 + 4) = uVar50, uVar40 + 3 < uVar30 &&
                  (((*(undefined2 *)((long)puVar26 + 6) = uVar50, uVar40 + 4 < uVar30 &&
                    (*(undefined2 *)(puVar26 + 1) = uVar50, uVar40 + 5 < uVar30)) &&
                   (*(undefined2 *)((long)puVar26 + 10) = uVar50, uVar40 + 6 < uVar30)))))) {
                *(undefined2 *)((long)puVar26 + 0xc) = uVar50;
              }
            }
            else {
              puVar26 = puVar42;
              do {
                puVar25 = puVar26 + 2;
                puVar26[1] = CONCAT26(uVar50,CONCAT24(uVar50,CONCAT22(uVar50,uVar50)));
                *puVar26 = CONCAT26(uVar50,CONCAT24(uVar50,CONCAT22(uVar50,uVar50)));
                puVar26 = puVar25;
              } while (puVar25 != puVar42 + (ulong)((uVar30 >> 3) - 1) * 2 + 2);
              uVar40 = uVar30 & 0xfffffff8;
              puVar26 = (undefined8 *)((long)puVar42 + ((ulong)uVar30 & 0xfffffff8) * 2);
              if ((uVar30 & 7) != 0) goto LAB_0015e520;
            }
            puVar42 = (undefined8 *)((long)puVar42 + (ulong)(uVar30 - 1) * 2 + 2);
          }
          pbVar31 = pbVar37;
          puVar46 = puVar46 + 1;
          uVar40 = uVar44;
          uVar30 = uVar33;
        } while (pbVar37 != (byte *)(param_1 + uVar48 + 0x4dd));
        uVar48 = (ulong)(uVar47 - uVar33);
      }
      else {
        iVar21 = (int)*(undefined8 *)(param_1 + 0x328);
        if (iVar21 != (int)pbVar2) {
          pbVar31 = (byte *)(param_1 + 0x4dd);
          uVar40 = (uint)*pbVar2;
          puVar35 = puVar1;
          puVar36 = puVar1;
          puVar45 = puVar46;
          uVar30 = 0;
          if ((char)*pbVar2 < '\0') goto LAB_0015e478;
LAB_0015e390:
          puVar46 = puVar45 + 1;
          uVar18 = *puVar45;
          pbVar37 = pbVar31;
          uVar33 = uVar44;
          do {
            uVar44 = (uint)uVar18;
            uVar34 = uVar40 & 0x7f;
            uVar30 = uVar34 - uVar30;
            if (uVar30 != 0) {
              uVar50 = (undefined2)uVar33;
              if (uVar30 - 1 < 7) {
                uVar40 = 0;
                puVar26 = puVar42;
LAB_0015e3f0:
                *(undefined2 *)puVar26 = uVar50;
                if (((uVar40 + 1 < uVar30) &&
                    (*(undefined2 *)((long)puVar26 + 2) = uVar50, uVar40 + 2 < uVar30)) &&
                   (((*(undefined2 *)((long)puVar26 + 4) = uVar50, uVar40 + 3 < uVar30 &&
                     ((*(undefined2 *)((long)puVar26 + 6) = uVar50, uVar40 + 4 < uVar30 &&
                      (*(undefined2 *)(puVar26 + 1) = uVar50, uVar40 + 5 < uVar30)))) &&
                    (*(undefined2 *)((long)puVar26 + 10) = uVar50, uVar40 + 6 < uVar30)))) {
                  *(undefined2 *)((long)puVar26 + 0xc) = uVar50;
                }
              }
              else {
                puVar26 = puVar42;
                do {
                  puVar25 = puVar26 + 2;
                  puVar26[1] = CONCAT26(uVar50,CONCAT24(uVar50,CONCAT22(uVar50,uVar50)));
                  *puVar26 = CONCAT26(uVar50,CONCAT24(uVar50,CONCAT22(uVar50,uVar50)));
                  puVar26 = puVar25;
                } while (puVar25 != puVar42 + (ulong)((uVar30 >> 3) - 1) * 2 + 2);
                uVar40 = uVar30 & 0xfffffff8;
                puVar26 = (undefined8 *)((long)puVar42 + ((ulong)uVar30 & 0xfffffff8) * 2);
                if ((uVar30 & 7) != 0) goto LAB_0015e3f0;
              }
              puVar42 = (undefined8 *)((long)puVar42 + (ulong)(uVar30 - 1) * 2 + 2);
            }
            if ((byte *)(param_1 + (ulong)((iVar21 - (int)pbVar2) - 1) + 0x4dd) == pbVar37) {
              uVar47 = uVar47 - uVar34;
              break;
            }
            pbVar31 = pbVar37 + 1;
            uVar40 = (uint)*pbVar37;
            puVar36 = puVar35;
            puVar45 = puVar46;
            uVar30 = uVar34;
            if (-1 < (char)*pbVar37) goto LAB_0015e390;
LAB_0015e478:
            puVar35 = puVar36 + 1;
            uVar18 = *puVar36;
            pbVar37 = pbVar31;
            uVar33 = uVar44;
          } while( true );
        }
        uVar48 = (ulong)uVar47;
      }
    }
    uVar47 = (uint)uVar48;
    if (uVar47 != 0) {
      uVar50 = (undefined2)uVar44;
      if (uVar47 - 1 < 7) {
        uVar30 = 0;
      }
      else {
        puVar26 = puVar42;
        do {
          puVar25 = puVar26 + 2;
          puVar26[1] = CONCAT26(uVar50,CONCAT24(uVar50,CONCAT22(uVar50,uVar50)));
          *puVar26 = CONCAT26(uVar50,CONCAT24(uVar50,CONCAT22(uVar50,uVar50)));
          puVar26 = puVar25;
        } while (puVar42 + (ulong)((uVar47 >> 3) - 1) * 2 + 2 != puVar25);
        puVar42 = (undefined8 *)((long)puVar42 + (uVar48 & 0xfffffff8) * 2);
        uVar30 = uVar47 & 0xfffffff8;
        if ((uVar48 & 7) == 0) goto LAB_0015e65c;
      }
      *(undefined2 *)puVar42 = uVar50;
      if (((((uVar30 + 1 < uVar47) &&
            (*(undefined2 *)((long)puVar42 + 2) = uVar50, uVar30 + 2 < uVar47)) &&
           (*(undefined2 *)((long)puVar42 + 4) = uVar50, uVar30 + 3 < uVar47)) &&
          ((*(undefined2 *)((long)puVar42 + 6) = uVar50, uVar30 + 4 < uVar47 &&
           (*(undefined2 *)(puVar42 + 1) = uVar50, uVar30 + 5 < uVar47)))) &&
         (*(undefined2 *)((long)puVar42 + 10) = uVar50, uVar30 + 6 < uVar47)) {
        *(undefined2 *)((long)puVar42 + 0xc) = uVar50;
      }
    }
LAB_0015e65c:
    *(undefined4 *)(param_1 + 0x310) = 0xff;
    *(long *)(param_1 + 0x318) = param_1 + 0x33c;
    *(ushort **)(param_1 + 800) = puVar1;
    *(undefined4 *)(param_1 + 0x300) = 0;
    *(byte **)(param_1 + 0x328) = pbVar2;
    *(uint *)(param_1 + 0x330) = uVar3;
    *(uint *)(param_1 + 0x644) = uVar44;
    if (0x7f < uVar3) {
      lVar43 = local_8 - ___stack_chk_guard;
      if (lVar43 == 0) {
        geometry_flush_polygons(param_1,0,0);
        return;
      }
      goto LAB_0015e878;
    }
  }
  lVar43 = local_8 - ___stack_chk_guard;
  if (lVar43 == 0) {
    return;
  }
LAB_0015e878:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&__stack_chk_guard,lVar43,0);
}


