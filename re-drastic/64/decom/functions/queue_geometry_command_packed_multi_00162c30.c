/*
 * Ghidra decompilation
 *
 * Function : queue_geometry_command_packed_multi
 * Address  : 00162c30
 * Program  : drastic64
 */


void queue_geometry_command_packed_multi(long param_1,uint *param_2,ulong param_3)

{
  bool bVar1;
  undefined *puVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined *puVar11;
  ulong uVar12;
  uint *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  uint *puVar16;
  ulong uVar17;
  undefined8 uVar18;
  
  uVar17 = param_3 & 0xffffffff;
  bVar3 = *(byte *)(param_1 + 0x9ac1);
  puVar11 = *(undefined **)(param_1 + 0x9a78);
  puVar13 = *(uint **)(param_1 + 0x9a80);
  if (bVar3 != 0) {
    uVar8 = (uint)param_3;
    uVar9 = (uint)bVar3;
    if (uVar8 <= bVar3 && uVar9 != uVar8) {
      if (uVar8 != 0) {
        uVar9 = uVar8 - 1;
        bVar1 = (ulong)((long)puVar13 + (0xf - (long)param_2)) < 0x1f;
        if ((bVar1 || uVar9 < 5) || !bVar1 && uVar9 == 5) {
          lVar5 = 0;
          do {
            puVar13[lVar5] = param_2[lVar5];
            lVar5 = lVar5 + 1;
          } while ((uint)lVar5 < uVar8);
        }
        else {
          lVar5 = 0;
          do {
            uVar18 = *(undefined8 *)((long)param_2 + lVar5);
            ((undefined8 *)((long)puVar13 + lVar5))[1] = ((undefined8 *)((long)param_2 + lVar5))[1];
            *(undefined8 *)((long)puVar13 + lVar5) = uVar18;
            lVar5 = lVar5 + 0x10;
          } while (lVar5 != ((ulong)((uVar8 >> 2) - 1) + 1) * 0x10);
          uVar17 = param_3 & 0xfffffffc;
          if ((((param_3 & 3) != 0) &&
              (puVar13[uVar17] = param_2[uVar17], (uVar8 & 0xfffffffc) + 1 < uVar8)) &&
             (puVar13[uVar17 + 1] = param_2[uVar17 + 1], (uVar8 & 0xfffffffc) + 2 < uVar8)) {
            puVar13[uVar17 + 2] = param_2[uVar17 + 2];
          }
        }
        puVar13 = puVar13 + (ulong)uVar9 + 1;
      }
      *(byte *)(param_1 + 0x9ac1) = bVar3 - (char)param_3;
      *(uint **)(param_1 + 0x9a80) = puVar13;
      return;
    }
    uVar4 = uVar9 - 1;
    bVar1 = (ulong)((long)puVar13 + (0xf - (long)param_2)) < 0x1f;
    uVar10 = (uint)bVar3;
    if ((bVar1 || uVar4 < 5) || !bVar1 && uVar4 == 5) {
      lVar5 = 0;
      do {
        puVar13[lVar5] = param_2[lVar5];
        lVar5 = lVar5 + 1;
      } while ((uint)lVar5 <= uVar9 && uVar10 != (uint)lVar5);
    }
    else {
      lVar5 = 0;
      do {
        uVar18 = *(undefined8 *)((long)param_2 + lVar5);
        ((undefined8 *)((long)puVar13 + lVar5))[1] = ((undefined8 *)((long)param_2 + lVar5))[1];
        *(undefined8 *)((long)puVar13 + lVar5) = uVar18;
        lVar5 = lVar5 + 0x10;
      } while (lVar5 != ((ulong)((bVar3 >> 2) - 1) + 1) * 0x10);
      uVar17 = (ulong)bVar3 & 0xfc;
      if ((((bVar3 & 3) != 0) &&
          (puVar13[uVar17] = param_2[uVar17], (uVar10 & 0xfffffffc) + 1 < uVar10)) &&
         (puVar13[uVar17 + 1] = param_2[uVar17 + 1], (uVar10 & 0xfffffffc) + 2 < uVar10)) {
        puVar13[uVar17 + 2] = param_2[uVar17 + 2];
      }
    }
    puVar13 = puVar13 + (ulong)uVar4 + 1;
    param_2 = param_2 + (ulong)uVar4 + 1;
    uVar17 = (ulong)(uVar8 - uVar10);
    if (uVar8 - uVar10 == 0) {
      *(undefined *)(param_1 + 0x9ac1) = 0;
      *(undefined **)(param_1 + 0x9a68) = puVar11;
      *(uint **)(param_1 + 0x9a70) = puVar13;
      *(uint **)(param_1 + 0x9a80) = puVar13;
      return;
    }
  }
  puVar2 = (undefined *)(param_1 + 0x79b00);
  uVar8 = (int)puVar11 - (int)puVar2;
  do {
    while( true ) {
      uVar9 = *param_2;
      uVar4 = uVar9 & 0x7f;
      uVar6 = (ulong)(uVar9 >> 0x18) & 0x7f;
      uVar12 = (ulong)(uVar9 >> 8) & 0x7f;
      uVar7 = (ulong)(uVar9 >> 0x10) & 0x7f;
      uVar9 = (uint)(byte)geometry_command_parameters[uVar12] +
              (uint)(byte)geometry_command_parameters[uVar7] +
              (uint)(byte)geometry_command_parameters[uVar6] +
              (uint)(byte)geometry_command_parameters[uVar4];
      puVar14 = puVar11;
      if (uVar4 != 0) {
        puVar14 = puVar11 + 1;
        *puVar11 = (char)uVar4;
      }
      puVar15 = puVar14;
      if ((int)uVar12 != 0) {
        puVar15 = puVar14 + 1;
        *puVar14 = (char)uVar12;
      }
      puVar14 = puVar15;
      if ((int)uVar7 != 0) {
        puVar14 = puVar15 + 1;
        *puVar15 = (char)uVar7;
      }
      puVar15 = puVar14;
      if ((int)uVar6 != 0) {
        puVar15 = puVar14 + 1;
        *puVar14 = (char)uVar6;
      }
      uVar4 = (int)uVar17 - 1;
      puVar16 = param_2 + 1;
      if (uVar4 < uVar9) {
        *(uint **)(param_1 + 0x9a70) = puVar13;
        if (uVar4 != 0) {
          uVar8 = (int)uVar17 - 2;
          bVar1 = (ulong)((long)param_2 + (0x13 - (long)puVar13)) < 0x1f;
          if ((bVar1 || uVar8 < 5) || !bVar1 && uVar8 == 5) {
            lVar5 = 0;
            do {
              puVar13[lVar5] = puVar16[lVar5];
              lVar5 = lVar5 + 1;
            } while ((uint)lVar5 < uVar4);
          }
          else {
            lVar5 = 0;
            do {
              uVar18 = *(undefined8 *)((long)puVar16 + lVar5);
              ((undefined8 *)((long)puVar13 + lVar5))[1] =
                   ((undefined8 *)((long)puVar16 + lVar5))[1];
              *(undefined8 *)((long)puVar13 + lVar5) = uVar18;
              lVar5 = lVar5 + 0x10;
            } while (((ulong)((uVar4 >> 2) - 1) + 1) * 0x10 - lVar5 != 0);
            uVar17 = (ulong)uVar4 & 0xfffffffc;
            if ((((uVar4 & 3) != 0) &&
                (puVar13[uVar17] = puVar16[uVar17], (uVar4 & 0xfffffffc) + 1 < uVar4)) &&
               (puVar13[uVar17 + 1] = puVar16[uVar17 + 1], (uVar4 & 0xfffffffc) + 2 < uVar4)) {
              puVar13[uVar17 + 2] = puVar16[uVar17 + 2];
            }
          }
          puVar13 = puVar13 + (ulong)uVar8 + 1;
        }
        *(char *)(param_1 + 0x9ac1) = (char)uVar9 - (char)uVar4;
        *(undefined **)(param_1 + 0x9a68) = puVar11;
        *(undefined **)(param_1 + 0x9a78) = puVar15;
        *(uint **)(param_1 + 0x9a80) = puVar13;
        return;
      }
      if (uVar9 != 0) {
        uVar10 = uVar9 - 1;
        if ((puVar16 < puVar13 + 4 && puVar13 < param_2 + 5 || uVar10 < 5) ||
            (puVar16 >= puVar13 + 4 || puVar13 >= param_2 + 5) && uVar10 == 5) {
          lVar5 = 0;
          do {
            puVar13[lVar5] = puVar16[lVar5];
            lVar5 = lVar5 + 1;
          } while ((uint)lVar5 < uVar9);
        }
        else {
          lVar5 = 0;
          do {
            uVar18 = *(undefined8 *)((long)puVar16 + lVar5);
            ((undefined8 *)((long)puVar13 + lVar5))[1] = ((undefined8 *)((long)puVar16 + lVar5))[1];
            *(undefined8 *)((long)puVar13 + lVar5) = uVar18;
            lVar5 = lVar5 + 0x10;
          } while (lVar5 != ((ulong)((uVar9 >> 2) - 1) + 1) * 0x10);
          uVar17 = (ulong)uVar9 & 0x3fc;
          if ((((uVar9 & 0xfffffc03) != 0) &&
              (puVar13[uVar17] = puVar16[uVar17], (uVar9 & 0xfffffffc) + 1 < uVar9)) &&
             (puVar13[uVar17 + 1] = puVar16[uVar17 + 1], (uVar9 & 0xfffffffc) + 2 < uVar9)) {
            puVar13[uVar17 + 2] = puVar16[uVar17 + 2];
          }
        }
        puVar13 = puVar13 + (ulong)uVar10 + 1;
        puVar16 = puVar16 + (ulong)uVar10 + 1;
      }
      uVar8 = uVar8 + 1;
      uVar4 = uVar4 - uVar9;
      uVar17 = (ulong)uVar4;
      param_2 = puVar16;
      if (0x3ff < uVar8) break;
      puVar11 = puVar15;
      if (uVar4 == 0) goto LAB_00162e58;
    }
    *(undefined **)(param_1 + 0x9a68) = puVar15;
    *(uint **)(param_1 + 0x9a70) = puVar13;
    *(undefined **)(param_1 + 0x9a78) = puVar15;
    *(uint **)(param_1 + 0x9a80) = puVar13;
    process_geometry(param_1);
    uVar8 = 0;
    puVar11 = puVar2;
    puVar15 = puVar2;
    puVar13 = (uint *)(param_1 + 0x81b00);
  } while (uVar4 != 0);
LAB_00162e58:
  *(undefined **)(param_1 + 0x9a68) = puVar15;
  *(uint **)(param_1 + 0x9a70) = puVar13;
  *(undefined **)(param_1 + 0x9a78) = puVar15;
  *(uint **)(param_1 + 0x9a80) = puVar13;
  *(undefined *)(param_1 + 0x9ac1) = 0;
  return;
}


