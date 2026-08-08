/*
 * Ghidra decompilation
 *
 * Function : FUN_08097b20
 * Address  : 08097b20
 * Program  : drastic16
 */


void FUN_08097b20(int param_1,int param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined uVar2;
  uint uVar3;
  uint uVar4;
  undefined2 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined *puVar13;
  longlong lVar15;
  undefined in_q8 [16];
  undefined auVar16 [16];
  undefined in_q9 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined8 *puVar14;
  
  iVar6 = *(int *)(*(int *)(param_1 + 0x40) + param_2 * 4);
  uVar3 = *(int *)(*(int *)(param_1 + 0x40) + (param_2 + 1) * 4) - iVar6;
  if ((param_3 != (undefined8 *)0x0) &&
     (puVar7 = (undefined8 *)(*(int *)(param_1 + 0x44) + iVar6 * 2), uVar3 != 0)) {
    if (uVar3 < 0x10 || puVar7 < param_3 + 4 && param_3 < puVar7 + 4) {
      puVar5 = (undefined2 *)((int)param_3 + -2);
      puVar14 = puVar7;
      do {
        puVar9 = (undefined8 *)((int)puVar14 + 2);
        puVar5 = puVar5 + 1;
        *puVar5 = *(undefined2 *)puVar14;
        puVar14 = puVar9;
      } while (puVar9 != (undefined8 *)((int)puVar7 + uVar3 * 2));
      return;
    }
    uVar12 = uVar3 >> 4;
    uVar10 = 0;
    uVar4 = uVar3 & 0xfffffff0;
    puVar14 = param_3;
    puVar9 = puVar7;
    do {
      puVar8 = (undefined *)0x380;
      puVar1 = (undefined *)0x390;
      lVar15 = 8;
      puVar11 = puVar14;
      puVar14 = puVar9;
      while( true ) {
        *puVar8 = *(undefined *)puVar14;
        puVar13 = (undefined *)((int)puVar14 + 1);
        *puVar1 = *puVar13;
        puVar14 = (undefined8 *)(puVar13 + 1);
        lVar15 = lVar15 + -1;
        if (lVar15 == 0) break;
        puVar8 = puVar8 + 1;
        puVar1 = puVar1 + 1;
      }
      puVar8 = (undefined *)0x388;
      puVar1 = (undefined *)0x398;
      lVar15 = 8;
      while( true ) {
        *puVar8 = *(undefined *)puVar14;
        puVar13 = (undefined *)((int)puVar14 + 1);
        *puVar1 = *puVar13;
        puVar14 = (undefined8 *)(puVar13 + 1);
        lVar15 = lVar15 + -1;
        if (lVar15 == 0) break;
        puVar8 = puVar8 + 1;
        puVar1 = puVar1 + 1;
      }
      puVar9 = puVar9 + 4;
      uVar10 = uVar10 + 1;
      puVar14 = puVar11 + 4;
      auVar18 = VectorCopyLong(in_q8._0_8_,1,1);
      auVar17 = VectorShiftLongLeft(in_q9._8_8_,1);
      auVar19 = VectorShiftLongLeft(in_q9._0_8_,1);
      auVar16 = VectorCopyLong(in_q8._8_8_,1,1);
      in_q9 = auVar19 | auVar18;
      in_q8 = auVar17 | auVar16;
      *puVar11 = in_q9._0_8_;
      puVar11[1] = in_q9._8_8_;
      puVar11[2] = in_q8._0_8_;
      puVar11[3] = in_q8._8_8_;
    } while (uVar10 < uVar12);
    if (uVar3 != uVar4) {
      puVar8 = (undefined *)((int)puVar7 + uVar4 * 2 + 1);
      puVar5 = (undefined2 *)((int)param_3 + uVar4 * 2 + -2);
      do {
        uVar2 = *puVar8;
        uVar4 = uVar4 + 1;
        puVar1 = puVar8 + -1;
        puVar8 = puVar8 + 2;
        puVar5 = puVar5 + 1;
        *puVar5 = CONCAT11(uVar2,*puVar1);
      } while (uVar4 < uVar3);
    }
  }
  return;
}


