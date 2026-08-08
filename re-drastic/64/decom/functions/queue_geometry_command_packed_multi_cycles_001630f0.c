/*
 * Ghidra decompilation
 *
 * Function : queue_geometry_command_packed_multi_cycles
 * Address  : 001630f0
 * Program  : drastic64
 */


int queue_geometry_command_packed_multi_cycles(long param_1,uint *param_2,ulong param_3)

{
  bool bVar1;
  undefined *puVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  undefined *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  int iVar16;
  ulong uVar17;
  uint *puVar18;
  undefined8 uVar19;
  
  bVar3 = *(byte *)(param_1 + 0x9ac1);
  uVar17 = param_3 & 0xffffffff;
  puVar6 = *(undefined **)(param_1 + 0x9a78);
  puVar10 = *(uint **)(param_1 + 0x9a80);
  if (bVar3 != 0) {
    uVar7 = (uint)param_3;
    uVar8 = (uint)bVar3;
    if (uVar7 <= bVar3 && uVar8 != uVar7) {
      if (uVar7 != 0) {
        uVar8 = uVar7 - 1;
        bVar1 = (ulong)((long)puVar10 + (0xf - (long)param_2)) < 0x1f;
        if ((bVar1 || uVar8 < 5) || !bVar1 && uVar8 == 5) {
          lVar5 = 0;
          do {
            puVar10[lVar5] = param_2[lVar5];
            lVar5 = lVar5 + 1;
          } while ((uint)lVar5 < uVar7);
        }
        else {
          lVar5 = 0;
          do {
            uVar19 = *(undefined8 *)((long)param_2 + lVar5);
            ((undefined8 *)((long)puVar10 + lVar5))[1] = ((undefined8 *)((long)param_2 + lVar5))[1];
            *(undefined8 *)((long)puVar10 + lVar5) = uVar19;
            lVar5 = lVar5 + 0x10;
          } while (lVar5 != ((ulong)((uVar7 >> 2) - 1) + 1) * 0x10);
          uVar17 = param_3 & 0xfffffffc;
          if ((((param_3 & 3) != 0) &&
              (puVar10[uVar17] = param_2[uVar17], (uVar7 & 0xfffffffc) + 1 < uVar7)) &&
             (puVar10[uVar17 + 1] = param_2[uVar17 + 1], (uVar7 & 0xfffffffc) + 2 < uVar7)) {
            puVar10[uVar17 + 2] = param_2[uVar17 + 2];
          }
        }
        puVar10 = puVar10 + (ulong)uVar8 + 1;
      }
      *(byte *)(param_1 + 0x9ac1) = bVar3 - (char)param_3;
      *(uint **)(param_1 + 0x9a80) = puVar10;
      return 0;
    }
    uVar4 = uVar8 - 1;
    bVar1 = (ulong)((long)puVar10 + (0xf - (long)param_2)) < 0x1f;
    uVar9 = (uint)bVar3;
    if ((bVar1 || uVar4 < 5) || !bVar1 && uVar4 == 5) {
      lVar5 = 0;
      do {
        puVar10[lVar5] = param_2[lVar5];
        lVar5 = lVar5 + 1;
      } while ((uint)lVar5 <= uVar8 && uVar9 != (uint)lVar5);
    }
    else {
      lVar5 = 0;
      do {
        uVar19 = *(undefined8 *)((long)param_2 + lVar5);
        ((undefined8 *)((long)puVar10 + lVar5))[1] = ((undefined8 *)((long)param_2 + lVar5))[1];
        *(undefined8 *)((long)puVar10 + lVar5) = uVar19;
        lVar5 = lVar5 + 0x10;
      } while (lVar5 != ((ulong)((bVar3 >> 2) - 1) + 1) * 0x10);
      uVar17 = (ulong)bVar3 & 0xfc;
      if ((((bVar3 & 3) != 0) &&
          (puVar10[uVar17] = param_2[uVar17], (uVar9 & 0xfffffffc) + 1 < uVar9)) &&
         (puVar10[uVar17 + 1] = param_2[uVar17 + 1], (uVar9 & 0xfffffffc) + 2 < uVar9)) {
        puVar10[uVar17 + 2] = param_2[uVar17 + 2];
      }
    }
    puVar10 = puVar10 + (ulong)uVar4 + 1;
    param_2 = param_2 + (ulong)uVar4 + 1;
    uVar17 = (ulong)(uVar7 - uVar9);
    if (uVar7 - uVar9 == 0) {
      *(undefined *)(param_1 + 0x9ac1) = 0;
      *(undefined **)(param_1 + 0x9a68) = puVar6;
      *(uint **)(param_1 + 0x9a70) = puVar10;
      *(uint **)(param_1 + 0x9a80) = puVar10;
      return 0;
    }
  }
  puVar2 = (undefined *)(param_1 + 0x79b00);
  uVar7 = (int)puVar6 - (int)puVar2;
  iVar16 = 0;
  do {
    while( true ) {
      uVar8 = *param_2;
      uVar14 = (ulong)(uVar8 >> 0x10) & 0x7f;
      uVar15 = (ulong)(uVar8 >> 8) & 0x7f;
      uVar13 = (ulong)(uVar8 >> 0x18) & 0x7f;
      uVar4 = uVar8 & 0x7f;
      iVar16 = (uint)*(ushort *)(geometry_command_cycles + uVar13 * 2) +
               (uint)*(ushort *)(geometry_command_cycles + uVar15 * 2) +
               (uint)*(ushort *)(geometry_command_cycles + uVar14 * 2) +
               (uint)*(ushort *)(geometry_command_cycles + ((ulong)uVar8 & 0x7f) * 2) + iVar16;
      uVar8 = (uint)(byte)geometry_command_parameters[uVar15] +
              (uint)(byte)geometry_command_parameters[uVar14] +
              (uint)(byte)geometry_command_parameters[uVar13] +
              (uint)(byte)geometry_command_parameters[uVar4];
      puVar11 = puVar6;
      if (uVar4 != 0) {
        puVar11 = puVar6 + 1;
        *puVar6 = (char)uVar4;
      }
      puVar12 = puVar11;
      if ((int)uVar15 != 0) {
        puVar12 = puVar11 + 1;
        *puVar11 = (char)uVar15;
      }
      puVar11 = puVar12;
      if ((int)uVar14 != 0) {
        puVar11 = puVar12 + 1;
        *puVar12 = (char)uVar14;
      }
      puVar12 = puVar11;
      if ((int)uVar13 != 0) {
        puVar12 = puVar11 + 1;
        *puVar11 = (char)uVar13;
      }
      uVar4 = (int)uVar17 - 1;
      puVar18 = param_2 + 1;
      if (uVar4 < uVar8) {
        *(uint **)(param_1 + 0x9a70) = puVar10;
        if (uVar4 != 0) {
          uVar7 = (int)uVar17 - 2;
          bVar1 = (ulong)((long)param_2 + (0x13 - (long)puVar10)) < 0x1f;
          if ((bVar1 || uVar7 < 5) || !bVar1 && uVar7 == 5) {
            lVar5 = 0;
            do {
              puVar10[lVar5] = puVar18[lVar5];
              lVar5 = lVar5 + 1;
            } while ((uint)lVar5 < uVar4);
          }
          else {
            lVar5 = 0;
            do {
              uVar19 = *(undefined8 *)((long)puVar18 + lVar5);
              ((undefined8 *)((long)puVar10 + lVar5))[1] =
                   ((undefined8 *)((long)puVar18 + lVar5))[1];
              *(undefined8 *)((long)puVar10 + lVar5) = uVar19;
              lVar5 = lVar5 + 0x10;
            } while (((ulong)((uVar4 >> 2) - 1) + 1) * 0x10 - lVar5 != 0);
            uVar17 = (ulong)uVar4 & 0xfffffffc;
            if ((((uVar4 & 3) != 0) &&
                (puVar10[uVar17] = puVar18[uVar17], (uVar4 & 0xfffffffc) + 1 < uVar4)) &&
               (puVar10[uVar17 + 1] = puVar18[uVar17 + 1], (uVar4 & 0xfffffffc) + 2 < uVar4)) {
              puVar10[uVar17 + 2] = puVar18[uVar17 + 2];
            }
          }
          puVar10 = puVar10 + (ulong)uVar7 + 1;
        }
        *(char *)(param_1 + 0x9ac1) = (char)uVar8 - (char)uVar4;
        *(undefined **)(param_1 + 0x9a68) = puVar6;
        *(undefined **)(param_1 + 0x9a78) = puVar12;
        *(uint **)(param_1 + 0x9a80) = puVar10;
        return iVar16;
      }
      if (uVar8 != 0) {
        uVar9 = uVar8 - 1;
        if ((puVar18 < puVar10 + 4 && puVar10 < param_2 + 5 || uVar9 < 5) ||
            (puVar18 >= puVar10 + 4 || puVar10 >= param_2 + 5) && uVar9 == 5) {
          lVar5 = 0;
          do {
            puVar10[lVar5] = puVar18[lVar5];
            lVar5 = lVar5 + 1;
          } while ((uint)lVar5 < uVar8);
        }
        else {
          lVar5 = 0;
          do {
            uVar19 = *(undefined8 *)((long)puVar18 + lVar5);
            ((undefined8 *)((long)puVar10 + lVar5))[1] = ((undefined8 *)((long)puVar18 + lVar5))[1];
            *(undefined8 *)((long)puVar10 + lVar5) = uVar19;
            lVar5 = lVar5 + 0x10;
          } while (lVar5 != ((ulong)((uVar8 >> 2) - 1) + 1) * 0x10);
          uVar17 = (ulong)uVar8 & 0x3fc;
          if ((((uVar8 & 0xfffffc03) != 0) &&
              (puVar10[uVar17] = puVar18[uVar17], (uVar8 & 0xfffffffc) + 1 < uVar8)) &&
             (puVar10[uVar17 + 1] = puVar18[uVar17 + 1], (uVar8 & 0xfffffffc) + 2 < uVar8)) {
            puVar10[uVar17 + 2] = puVar18[uVar17 + 2];
          }
        }
        puVar10 = puVar10 + (ulong)uVar9 + 1;
        puVar18 = puVar18 + (ulong)uVar9 + 1;
      }
      uVar7 = uVar7 + 1;
      uVar4 = uVar4 - uVar8;
      uVar17 = (ulong)uVar4;
      param_2 = puVar18;
      if (0x3ff < uVar7) break;
      puVar6 = puVar12;
      if (uVar4 == 0) goto LAB_00163358;
    }
    *(undefined **)(param_1 + 0x9a68) = puVar12;
    *(uint **)(param_1 + 0x9a70) = puVar10;
    *(undefined **)(param_1 + 0x9a78) = puVar12;
    *(uint **)(param_1 + 0x9a80) = puVar10;
    process_geometry(param_1);
    uVar7 = 0;
    puVar6 = puVar2;
    puVar12 = puVar2;
    puVar10 = (uint *)(param_1 + 0x81b00);
  } while (uVar4 != 0);
LAB_00163358:
  *(undefined **)(param_1 + 0x9a68) = puVar12;
  *(uint **)(param_1 + 0x9a70) = puVar10;
  *(undefined **)(param_1 + 0x9a78) = puVar12;
  *(uint **)(param_1 + 0x9a80) = puVar10;
  *(undefined *)(param_1 + 0x9ac1) = 0;
  return iVar16;
}


