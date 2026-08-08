/*
 * Ghidra decompilation
 *
 * Function : FUN_080776fc
 * Address  : 080776fc
 * Program  : drastic16
 */


void FUN_080776fc(undefined8 *param_1,int param_2,int param_3,uint param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  bool bVar16;
  bool bVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  iVar2 = FUN_0807b384(0);
  uVar3 = FUN_0807b3b0(0);
  puVar4 = (undefined8 *)((uVar3 >> 1) * param_3 * 2 + iVar2 + param_2 * 2);
  if (param_5 != 0) {
    iVar2 = 0;
    uVar1 = param_4 & 0xfffffff8;
    uVar5 = uVar1 + 3;
    uVar6 = uVar1 + 6;
    uVar14 = uVar1 + 1;
    uVar13 = uVar1 + 2;
    uVar8 = uVar1 + 4;
    uVar10 = uVar1 + 5;
    iVar15 = 0;
    puVar7 = param_1;
    do {
      if (param_4 != 0) {
        bVar17 = puVar4 <= puVar7 + 2;
        bVar16 = puVar7 + 2 == puVar4;
        if (bVar17 && !bVar16) {
          bVar17 = puVar7 <= puVar4 + 2;
          bVar16 = puVar4 + 2 == puVar7;
        }
        uVar9 = (uint)(!bVar17 || bVar16);
        if (param_4 < 10) {
          uVar9 = 0;
        }
        if (uVar9 == 0) {
          do {
            *(undefined2 *)((int)puVar4 + uVar9) = *(undefined2 *)((int)puVar7 + uVar9);
            uVar9 = uVar9 + 2;
          } while (uVar9 != param_4 * 2);
        }
        else {
          if (uVar1 != 0) {
            uVar9 = 0;
            puVar11 = puVar7;
            puVar12 = puVar4;
            do {
              uVar9 = uVar9 + 1;
              uVar18 = *puVar11;
              uVar19 = puVar11[1];
              puVar11 = puVar11 + 2;
              *puVar12 = uVar18;
              puVar12[1] = uVar19;
              puVar12 = puVar12 + 2;
            } while (uVar9 < param_4 >> 3);
            if (param_4 == uVar1) goto LAB_08077930;
          }
          *(undefined2 *)((int)puVar4 + uVar1 * 2) =
               *(undefined2 *)((int)param_1 + (uVar1 + iVar2) * 2);
          if ((((uVar14 < param_4) &&
               (*(undefined2 *)((int)puVar4 + uVar14 * 2) =
                     *(undefined2 *)((int)param_1 + (uVar14 + iVar2) * 2), uVar13 < param_4)) &&
              (*(undefined2 *)((int)puVar4 + uVar13 * 2) =
                    *(undefined2 *)((int)param_1 + (uVar13 + iVar2) * 2), uVar5 < param_4)) &&
             (((*(undefined2 *)((int)puVar4 + uVar5 * 2) =
                     *(undefined2 *)((int)param_1 + (uVar5 + iVar2) * 2), uVar8 < param_4 &&
               (*(undefined2 *)((int)puVar4 + uVar8 * 2) =
                     *(undefined2 *)((int)param_1 + (uVar8 + iVar2) * 2), uVar10 < param_4)) &&
              (*(undefined2 *)((int)puVar4 + uVar10 * 2) =
                    *(undefined2 *)((int)param_1 + (uVar10 + iVar2) * 2), uVar6 < param_4)))) {
            *(undefined2 *)((int)puVar4 + uVar6 * 2) =
                 *(undefined2 *)((int)param_1 + (uVar6 + iVar2) * 2);
          }
        }
      }
LAB_08077930:
      iVar15 = iVar15 + 1;
      puVar7 = (undefined8 *)((int)puVar7 + param_4 * 2);
      iVar2 = iVar2 + param_4;
      puVar4 = (undefined8 *)((int)puVar4 + (uVar3 & 0xfffffffe));
    } while (iVar15 != param_5);
  }
  return;
}


