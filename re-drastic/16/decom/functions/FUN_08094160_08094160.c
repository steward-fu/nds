/*
 * Ghidra decompilation
 *
 * Function : FUN_08094160
 * Address  : 08094160
 * Program  : drastic16
 */


void FUN_08094160(int param_1,undefined8 *param_2,int param_3)

{
  undefined uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  undefined8 uVar17;
  undefined auVar18 [16];
  
  if (param_3 == 0) {
    return;
  }
  iVar7 = 0x10;
  iVar4 = param_1 + 0x40018;
  do {
    uVar8 = *(uint *)(iVar4 + 0xb0);
    if ((uVar8 & 0x10000) != 0) {
      if ((uVar8 & 0x300) != 0) {
        FUN_08058b30(param_1,iVar4);
      }
      uVar9 = *(uint *)(iVar4 + 0x80);
      uVar10 = *(uint *)(iVar4 + 0x84);
      uVar11 = *(uint *)(iVar4 + 0x88);
      iVar12 = *(int *)(iVar4 + 0x8c);
      uVar17 = CONCAT44(*(undefined4 *)(iVar4 + 0xa8),*(undefined4 *)(iVar4 + 0xa8));
      uVar13 = *(uint *)(iVar4 + 0xa0);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(uVar8 & 0xff) {
      case 0:
        iVar14 = *(int *)(iVar4 + 0x98);
        puVar5 = param_2;
        iVar6 = param_3;
        do {
          while( true ) {
            uVar1 = *(undefined *)(iVar14 + uVar10);
            uVar2 = CONCAT11(uVar1,uVar1);
            uVar3 = CONCAT22(uVar2,uVar2);
            auVar18 = VectorShiftLongLeft(CONCAT44(uVar3,uVar3),1);
            bVar16 = CARRY4(uVar9,uVar11);
            uVar9 = uVar9 + uVar11;
            auVar18 = VectorMultiplyAccumulate(auVar18._0_8_,uVar17,2,0);
            uVar10 = uVar10 + iVar12 + (uint)bVar16;
            *puVar5 = auVar18._0_8_;
            puVar5 = puVar5 + 1;
            if (uVar13 <= uVar10) break;
            iVar6 = iVar6 + -1;
            if (iVar6 == 0) goto LAB_08093eac;
          }
          uVar8 = **(uint **)(iVar4 + 0x94);
          if ((uVar8 & 0x8000000) == 0) {
            **(uint **)(iVar4 + 0x94) = uVar8 & 0x7fffffff;
            *(undefined *)(iVar4 + 0xb2) = 0;
            break;
          }
          uVar10 = uVar10 - *(int *)(iVar4 + 0xa4);
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
LAB_08093eac:
        *(uint *)(iVar4 + 0x80) = uVar9;
        *(uint *)(iVar4 + 0x84) = uVar10;
        break;
      case 1:
        iVar14 = *(int *)(iVar4 + 0x98);
        puVar5 = param_2;
        iVar6 = param_3;
        do {
          while( true ) {
            uVar2 = *(undefined2 *)(iVar14 + uVar10 * 2);
            uVar3 = CONCAT22(uVar2,uVar2);
            bVar16 = CARRY4(uVar9,uVar11);
            uVar9 = uVar9 + uVar11;
            auVar18 = VectorMultiplyAccumulate(CONCAT44(uVar3,uVar3),uVar17,2,0);
            uVar10 = uVar10 + iVar12 + (uint)bVar16;
            *puVar5 = auVar18._0_8_;
            puVar5 = puVar5 + 1;
            if (uVar13 <= uVar10) break;
            iVar6 = iVar6 + -1;
            if (iVar6 == 0) goto LAB_08093f30;
          }
          uVar8 = **(uint **)(iVar4 + 0x94);
          if ((uVar8 & 0x8000000) == 0) {
            **(uint **)(iVar4 + 0x94) = uVar8 & 0x7fffffff;
            *(undefined *)(iVar4 + 0xb2) = 0;
            break;
          }
          uVar10 = uVar10 - *(int *)(iVar4 + 0xa4);
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
LAB_08093f30:
        *(uint *)(iVar4 + 0x80) = uVar9;
        *(uint *)(iVar4 + 0x84) = uVar10;
        break;
      case 2:
        uVar8 = *(uint *)(iVar4 + 0x90);
        puVar5 = param_2;
        iVar6 = param_3;
        do {
          while( true ) {
            for (; uVar8 <= uVar10; uVar8 = uVar8 + 8) {
              uVar17 = FUN_08058a58();
            }
            uVar2 = *(undefined2 *)(iVar4 + (uVar10 & 0x3f) * 2);
            uVar3 = CONCAT22(uVar2,uVar2);
            bVar16 = CARRY4(uVar9,uVar11);
            uVar9 = uVar9 + uVar11;
            auVar18 = VectorMultiplyAccumulate(CONCAT44(uVar3,uVar3),uVar17,2,0);
            uVar10 = uVar10 + iVar12 + (uint)bVar16;
            *puVar5 = auVar18._0_8_;
            puVar5 = puVar5 + 1;
            if (uVar13 <= uVar10) break;
joined_r0x08094028:
            iVar6 = iVar6 + -1;
            if (iVar6 == 0) goto LAB_08093fc4;
          }
          uVar15 = **(uint **)(iVar4 + 0x94);
          if ((uVar15 & 0x8000000) == 0) {
            **(uint **)(iVar4 + 0x94) = uVar15 & 0x7fffffff;
            *(undefined *)(iVar4 + 0xb2) = 0;
            break;
          }
          iVar14 = *(int *)(iVar4 + 0xa4);
          uVar10 = uVar10 - iVar14;
          if (*(char *)(iVar4 + 0xb5) == '\0') {
            uVar10 = uVar10 + iVar14;
            uVar13 = uVar13 + iVar14;
            *(uint *)(iVar4 + 0xa0) = uVar13;
            *(undefined2 *)(iVar4 + 0xac) = *(undefined2 *)(iVar4 + 0xae);
            *(undefined *)(iVar4 + 0xb3) = *(undefined *)(iVar4 + 0xb4);
            *(undefined *)(iVar4 + 0xb5) = 1;
            goto joined_r0x08094028;
          }
          uVar8 = uVar8 - iVar14;
          *(uint *)(iVar4 + 0x90) = uVar8;
          *(undefined2 *)(iVar4 + 0xae) = *(undefined2 *)(iVar4 + 0xac);
          *(uint *)(iVar4 + 0x90) = uVar8;
          *(undefined *)(iVar4 + 0xb4) = *(undefined *)(iVar4 + 0xb3);
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
LAB_08093fc4:
        *(uint *)(iVar4 + 0x80) = uVar9;
        *(uint *)(iVar4 + 0x84) = uVar10;
        break;
      case 3:
        iVar14 = *(int *)(iVar4 + 0x98);
        puVar5 = param_2;
        iVar6 = param_3;
        do {
          while( true ) {
            uVar2 = *(undefined2 *)(iVar14 + uVar10 * 2);
            uVar3 = CONCAT22(uVar2,uVar2);
            bVar16 = CARRY4(uVar9,uVar11);
            uVar9 = uVar9 + uVar11;
            auVar18 = VectorMultiplyAccumulate(CONCAT44(uVar3,uVar3),uVar17,2,0);
            uVar10 = uVar10 + iVar12 + (uint)bVar16;
            *puVar5 = auVar18._0_8_;
            puVar5 = puVar5 + 1;
            if (uVar13 <= uVar10) break;
            iVar6 = iVar6 + -1;
            if (iVar6 == 0) goto LAB_080940a0;
          }
          uVar10 = uVar10 - *(int *)(iVar4 + 0xa4);
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
LAB_080940a0:
        *(uint *)(iVar4 + 0x80) = uVar9;
        *(uint *)(iVar4 + 0x84) = uVar10;
        break;
      case 4:
        iVar14 = *(int *)(iVar4 + 0x98);
        puVar5 = param_2;
        iVar6 = param_3;
        do {
          while( true ) {
            uVar1 = *(undefined *)(iVar14 + uVar10);
            uVar2 = CONCAT11(uVar1,uVar1);
            uVar3 = CONCAT22(uVar2,uVar2);
            auVar18 = VectorShiftLongLeft(CONCAT44(uVar3,uVar3),1);
            bVar16 = CARRY4(uVar9,uVar11);
            uVar9 = uVar9 + uVar11;
            auVar18 = VectorMultiplyAccumulate(auVar18._0_8_,uVar17,2,0);
            uVar10 = uVar10 + iVar12 + (uint)bVar16;
            *puVar5 = auVar18._0_8_;
            puVar5 = puVar5 + 1;
            if (uVar13 <= uVar10) break;
            iVar6 = iVar6 + -1;
            if (iVar6 == 0) goto LAB_0809411c;
          }
          uVar10 = uVar10 - *(int *)(iVar4 + 0xa4);
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
LAB_0809411c:
        *(uint *)(iVar4 + 0x80) = uVar9;
        *(uint *)(iVar4 + 0x84) = uVar10;
      }
    }
    iVar4 = iVar4 + 0xb8;
    iVar7 = iVar7 + -1;
    if (iVar7 == 0) {
      return;
    }
  } while( true );
}


