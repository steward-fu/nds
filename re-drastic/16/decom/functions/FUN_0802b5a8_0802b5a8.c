/*
 * Ghidra decompilation
 *
 * Function : FUN_0802b5a8
 * Address  : 0802b5a8
 * Program  : drastic16
 */


void FUN_0802b5a8(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int unaff_r5;
  int iVar7;
  undefined4 uVar8;
  int unaff_r6;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  int local_30;
  
  iVar4 = *(int *)(param_1 + 0x68);
  uVar14 = (uint)*(short *)(param_1 + 0x76);
  iVar12 = (int)*(short *)(param_1 + 0x7a);
  iVar13 = (uint)*(byte *)(param_1 + 0x83) * 0x800 + 0x7ff;
  if (uVar14 == 0) {
    if (iVar12 == 0) {
      iVar12 = iVar13 - iVar4;
      if (iVar13 >= iVar4) {
        iVar12 = iVar4;
      }
      if (iVar12 < 0 == (iVar13 < iVar4 && SBORROW4(iVar13,iVar4))) {
        uVar15 = 0;
        iVar4 = 0;
        iVar2 = 0x100;
        iVar12 = 0;
        iVar5 = 0;
      }
      else {
        uVar16 = SIMDExpandImmediate(0,0xe,0xff);
        iVar4 = 0;
        iVar2 = 0;
        uVar15 = 0;
        iVar5 = (int)((ulonglong)uVar16 >> 0x20);
        iVar12 = (int)uVar16;
      }
    }
    else {
      if (iVar12 < 1) {
        iVar2 = -iVar4;
        iVar4 = (iVar13 - iVar4) + -1;
      }
      else {
        iVar2 = (iVar13 - iVar4) + -1;
        iVar4 = -iVar4;
      }
      iVar2 = __aeabi_idiv(iVar2,iVar12);
      lVar17 = (ulonglong)(uint)(iVar2 * -0x100) << 0x20;
      iVar2 = __aeabi_idiv(iVar4,iVar12);
      uVar15 = 0x10000000000;
      iVar12 = (int)lVar17;
      iVar5 = (int)((ulonglong)lVar17 >> 0x20);
      iVar4 = -iVar12;
      iVar2 = iVar2 * -0x100 - (iVar5 + (uint)(iVar12 != 0));
    }
  }
  else {
    if ((int)uVar14 < 1) {
      iVar2 = iVar13 + uVar14 + 1;
      unaff_r6 = -iVar4;
    }
    else {
      iVar2 = uVar14 - 1;
      unaff_r5 = iVar13 - iVar4;
    }
    if (0 < (int)uVar14) {
      local_30 = unaff_r5;
    }
    uVar11 = (uint)*(short *)(param_1 + 0x76);
    if ((int)uVar14 < 1) {
      local_30 = unaff_r6;
    }
    iVar5 = (int)uVar11 >> 0x1f;
    uVar16 = VectorShiftRight(CONCAT44(iVar2 - iVar4,iVar2 - iVar4),0x20);
    lVar17 = VectorShiftLeft(uVar16,0x20,0x40,0);
    iVar4 = (int)((ulonglong)lVar17 >> 0x20);
    uVar3 = (uint)lVar17;
    if (lVar17 < 0) {
      if (iVar5 < 0) {
        uVar16 = __aeabi_ldivmod(uVar3 + uVar11 + 1,
                                 iVar4 + iVar5 + (uint)(0xfffffffe < uVar11) +
                                 (uint)CARRY4(uVar3,uVar11 + 1),uVar11,iVar5);
        goto LAB_0802ba30;
      }
      uVar16 = __aeabi_ldivmod(uVar3,iVar4,uVar11,iVar5);
LAB_0802b71c:
      uVar15 = VectorShiftRight(CONCAT44(local_30,local_30),0x20);
      lVar17 = VectorShiftLeft(uVar15,0x20,0x40,0);
      iVar4 = (int)((ulonglong)lVar17 >> 0x20);
      uVar3 = (uint)lVar17;
      if (lVar17 < 0) {
LAB_0802ba50:
        if (iVar5 < 0) {
          uVar15 = __aeabi_ldivmod(uVar3 + uVar11 + 1,
                                   iVar4 + iVar5 + (uint)(0xfffffffe < uVar11) +
                                   (uint)CARRY4(uVar3,uVar11 + 1),uVar11,iVar5);
          goto LAB_0802bb0c;
        }
        uVar15 = __aeabi_ldivmod(uVar3,iVar4,uVar11,iVar5);
      }
      else {
        uVar15 = __aeabi_ldivmod(uVar3 + (uVar11 - 1),
                                 iVar4 + (iVar5 - (uint)(uVar11 == 0)) +
                                 (uint)CARRY4(uVar3,uVar11 - 1),uVar11,iVar5);
      }
      iVar4 = (uint)uVar15 - (uint)uVar16;
      iVar2 = (int)((ulonglong)uVar15 >> 0x20) -
              ((int)((ulonglong)uVar16 >> 0x20) + (uint)((uint)uVar15 < (uint)uVar16));
      uVar15 = VectorShiftRight(CONCAT44(-iVar12,-iVar12),0x20);
      lVar17 = VectorShiftLeft(uVar15,0x20,0x40,0);
      iVar12 = (int)((ulonglong)lVar17 >> 0x20);
      uVar3 = (uint)lVar17;
      if (lVar17 < 0) {
LAB_0802bb38:
        if (-1 < iVar5) goto LAB_0802bb44;
        uVar10 = uVar11 + 1;
        uVar1 = (uint)(0xfffffffe < uVar11);
      }
      else {
        uVar10 = uVar11 - 1;
        uVar1 = -(uint)(uVar11 == 0);
      }
      uVar15 = __aeabi_ldivmod(uVar3 + uVar10,iVar12 + iVar5 + uVar1 + (uint)CARRY4(uVar3,uVar10),
                               uVar11,iVar5);
      iVar12 = (int)uVar16;
      iVar5 = (int)((ulonglong)uVar16 >> 0x20);
    }
    else {
      if (-1 < iVar5) {
        uVar16 = __aeabi_ldivmod(uVar3 + (uVar11 - 1),
                                 iVar4 + (iVar5 - (uint)(uVar11 == 0)) +
                                 (uint)CARRY4(uVar3,uVar11 - 1),uVar11,iVar5);
        goto LAB_0802b71c;
      }
      uVar16 = __aeabi_ldivmod(uVar3,iVar4,uVar11,iVar5);
LAB_0802ba30:
      uVar15 = VectorShiftRight(CONCAT44(local_30,local_30),0x20);
      lVar17 = VectorShiftLeft(uVar15,0x20,0x40,0);
      iVar4 = (int)((ulonglong)lVar17 >> 0x20);
      uVar3 = (uint)lVar17;
      if (lVar17 < 0) goto LAB_0802ba50;
      uVar15 = __aeabi_ldivmod(uVar3,iVar4,uVar11,iVar5);
LAB_0802bb0c:
      iVar4 = (uint)uVar15 - (uint)uVar16;
      iVar2 = (int)((ulonglong)uVar15 >> 0x20) -
              ((int)((ulonglong)uVar16 >> 0x20) + (uint)((uint)uVar15 < (uint)uVar16));
      uVar15 = VectorShiftRight(CONCAT44(-iVar12,-iVar12),0x20);
      lVar17 = VectorShiftLeft(uVar15,0x20,0x40,0);
      iVar12 = (int)((ulonglong)lVar17 >> 0x20);
      uVar3 = (uint)lVar17;
      if (lVar17 < 0) goto LAB_0802bb38;
LAB_0802bb44:
      uVar15 = __aeabi_ldivmod(uVar3,iVar12,uVar11,iVar5);
      iVar12 = (int)uVar16;
      iVar5 = (int)((ulonglong)uVar16 >> 0x20);
    }
  }
  iVar7 = (int)*(short *)(param_1 + 0x7c);
  *(int *)(param_1 + 0x30) = iVar12;
  *(int *)(param_1 + 0x34) = iVar5;
  iVar12 = (int)*(short *)(param_1 + 0x78);
  *(int *)(param_1 + 0x38) = iVar4;
  *(int *)(param_1 + 0x3c) = iVar2;
  *(undefined8 *)(param_1 + 0x40) = uVar15;
  iVar4 = *(int *)(param_1 + 0x6c);
  if (iVar12 == 0) {
    if (iVar7 == 0) {
      iVar2 = iVar13 - iVar4;
      if (iVar13 >= iVar4) {
        iVar2 = iVar4;
      }
      if (iVar2 < 0 == (iVar13 < iVar4 && SBORROW4(iVar13,iVar4))) {
        lVar17 = 0;
        uVar9 = 0;
        uVar11 = 0x100;
        uVar16 = 0;
        lVar19 = 0x10000000000;
        uVar6 = 0;
        uVar8 = 0;
      }
      else {
        lVar19 = 0;
        lVar17 = SIMDExpandImmediate(0,0xe,0xff);
        uVar16 = 0;
        uVar11 = 0;
        uVar9 = 0;
        uVar8 = (undefined4)((ulonglong)lVar17 >> 0x20);
        uVar6 = (undefined4)lVar17;
      }
    }
    else {
      if (iVar7 < 1) {
        iVar2 = -iVar4;
        iVar4 = (iVar13 - iVar4) + -1;
      }
      else {
        iVar2 = (iVar13 - iVar4) + -1;
        iVar4 = -iVar4;
      }
      iVar13 = __aeabi_idiv(iVar2,iVar7);
      lVar17 = (ulonglong)(uint)(iVar13 * -0x100) << 0x20;
      iVar4 = __aeabi_idiv(iVar4,iVar7);
      uVar16 = 0x10000000000;
      uVar6 = (undefined4)lVar17;
      uVar8 = (undefined4)((ulonglong)lVar17 >> 0x20);
      uVar9 = 0;
      uVar11 = iVar4 * -0x100 + iVar13 * 0x100;
      lVar19 = (ulonglong)uVar11 << 0x20;
    }
    goto LAB_0802b8dc;
  }
  if (iVar12 < 1) {
    iVar2 = iVar13 + iVar12 + 1;
    iVar13 = -iVar4;
  }
  else {
    iVar2 = iVar12 + -1;
    iVar13 = iVar13 - iVar4;
  }
  uVar11 = (uint)*(short *)(param_1 + 0x78);
  iVar5 = (int)uVar11 >> 0x1f;
  uVar16 = VectorShiftRight(CONCAT44(iVar2 - iVar4,iVar2 - iVar4),0x20);
  lVar17 = VectorShiftLeft(uVar16,0x20,0x40,0);
  iVar4 = (int)((ulonglong)lVar17 >> 0x20);
  uVar3 = (uint)lVar17;
  if (lVar17 < 0) {
    if (iVar5 < 0) {
      lVar17 = __aeabi_ldivmod(uVar3 + uVar11 + 1,
                               iVar4 + iVar5 + (uint)(0xfffffffe < uVar11) +
                               (uint)CARRY4(uVar3,uVar11 + 1),uVar11,iVar5);
      goto LAB_0802ba7c;
    }
    lVar17 = __aeabi_ldivmod(uVar3,iVar4,uVar11,iVar5);
LAB_0802b848:
    uVar16 = VectorShiftRight(CONCAT44(iVar13,iVar13),0x20);
    lVar19 = VectorShiftLeft(uVar16,0x20,0x40,0);
    iVar4 = (int)((ulonglong)lVar19 >> 0x20);
    uVar3 = (uint)lVar19;
    if (lVar19 < 0) {
LAB_0802bb5c:
      if (iVar5 < 0) {
        uVar16 = __aeabi_ldivmod(uVar3 + uVar11 + 1,
                                 iVar4 + iVar5 + (uint)(0xfffffffe < uVar11) +
                                 (uint)CARRY4(uVar3,uVar11 + 1),uVar11,iVar5);
        goto LAB_0802baa4;
      }
      uVar16 = __aeabi_ldivmod(uVar3,iVar4,uVar11,iVar5);
    }
    else {
      uVar16 = __aeabi_ldivmod(uVar3 + (uVar11 - 1),
                               iVar4 + (iVar5 - (uint)(uVar11 == 0)) +
                               (uint)CARRY4(uVar3,uVar11 - 1),uVar11,iVar5);
    }
    lVar19 = CONCAT44((int)((ulonglong)uVar16 >> 0x20) -
                      ((int)((ulonglong)lVar17 >> 0x20) + (uint)((uint)uVar16 < (uint)lVar17)),
                      (uint)uVar16 - (uint)lVar17);
    uVar16 = VectorShiftRight(CONCAT44(-iVar7,-iVar7),0x20);
    lVar18 = VectorShiftLeft(uVar16,0x20,0x40,0);
    iVar4 = (int)((ulonglong)lVar18 >> 0x20);
    uVar3 = (uint)lVar18;
    if (lVar18 < 0) {
LAB_0802bad8:
      if (-1 < iVar5) goto LAB_0802bae4;
      uVar10 = uVar11 + 1;
      uVar1 = (uint)(0xfffffffe < uVar11);
    }
    else {
      uVar10 = uVar11 - 1;
      uVar1 = -(uint)(uVar11 == 0);
    }
    uVar16 = __aeabi_ldivmod(uVar3 + uVar10,iVar4 + iVar5 + uVar1 + (uint)CARRY4(uVar3,uVar10),
                             uVar11,iVar5);
    uVar6 = (undefined4)lVar17;
    uVar8 = (undefined4)((ulonglong)lVar17 >> 0x20);
    uVar9 = (undefined4)lVar19;
    uVar11 = (uint)((ulonglong)lVar19 >> 0x20);
  }
  else {
    if (-1 < iVar5) {
      lVar17 = __aeabi_ldivmod(uVar3 + (uVar11 - 1),
                               iVar4 + (iVar5 - (uint)(uVar11 == 0)) +
                               (uint)CARRY4(uVar3,uVar11 - 1),uVar11,iVar5);
      goto LAB_0802b848;
    }
    lVar17 = __aeabi_ldivmod(uVar3,iVar4,uVar11,iVar5);
LAB_0802ba7c:
    uVar16 = VectorShiftRight(CONCAT44(iVar13,iVar13),0x20);
    lVar19 = VectorShiftLeft(uVar16,0x20,0x40,0);
    iVar4 = (int)((ulonglong)lVar19 >> 0x20);
    uVar3 = (uint)lVar19;
    if (lVar19 < 0) goto LAB_0802bb5c;
    uVar16 = __aeabi_ldivmod(uVar3,iVar4,uVar11,iVar5);
LAB_0802baa4:
    lVar19 = CONCAT44((int)((ulonglong)uVar16 >> 0x20) -
                      ((int)((ulonglong)lVar17 >> 0x20) + (uint)((uint)uVar16 < (uint)lVar17)),
                      (uint)uVar16 - (uint)lVar17);
    uVar16 = VectorShiftRight(CONCAT44(-iVar7,-iVar7),0x20);
    lVar18 = VectorShiftLeft(uVar16,0x20,0x40,0);
    iVar4 = (int)((ulonglong)lVar18 >> 0x20);
    uVar3 = (uint)lVar18;
    if (lVar18 < 0) goto LAB_0802bad8;
LAB_0802bae4:
    uVar16 = __aeabi_ldivmod(uVar3,iVar4,uVar11,iVar5);
    uVar6 = (undefined4)lVar17;
    uVar8 = (undefined4)((ulonglong)lVar17 >> 0x20);
    uVar9 = (undefined4)lVar19;
    uVar11 = (uint)((ulonglong)lVar19 >> 0x20);
  }
LAB_0802b8dc:
  iVar4 = (uVar14 ^ (int)uVar14 >> 0x1f) - ((int)uVar14 >> 0x1f);
  if (iVar12 < 0) {
    iVar12 = -iVar12;
  }
  *(undefined4 *)(param_1 + 0x48) = uVar6;
  *(undefined4 *)(param_1 + 0x4c) = uVar8;
  *(undefined4 *)(param_1 + 0x50) = uVar9;
  *(uint *)(param_1 + 0x54) = uVar11;
  *(undefined8 *)(param_1 + 0x58) = uVar16;
  if (iVar4 != 0) {
    uVar9 = __aeabi_uldivmod(iVar4 + 0x7fffffff,
                             ((int)(iVar4 - 1U) >> 0x1f) + (uint)(0x7fffffff < iVar4 - 1U),iVar4,
                             iVar4 >> 0x1f,lVar17,lVar19);
    *(undefined4 *)(param_1 + 0x28) = uVar9;
  }
  if (iVar12 != 0) {
    uVar9 = __aeabi_uldivmod(iVar12 + 0x7fffffff,
                             ((int)(iVar12 - 1U) >> 0x1f) + (uint)(0x7fffffff < iVar12 - 1U),iVar12,
                             iVar12 >> 0x1f,lVar17);
    *(undefined4 *)(param_1 + 0x2c) = uVar9;
  }
  *(undefined *)(param_1 + 0x86) = 0;
  return;
}


