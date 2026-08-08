/*
 * Ghidra decompilation
 *
 * Function : FUN_0802bc38
 * Address  : 0802bc38
 * Program  : drastic16
 */


void FUN_0802bc38(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  
  iVar4 = (int)*(short *)(param_1 + 0x76);
  iVar6 = *(int *)(param_1 + 0x68);
  iVar8 = (uint)*(ushort *)(param_1 + 0x7e) * 0x100 + 0xff;
  iVar10 = (uint)*(ushort *)(param_1 + 0x80) * 0x100 + 0xff;
  iVar9 = (int)*(short *)(param_1 + 0x7a);
  if (iVar4 == 0) {
    if (iVar9 == 0) {
      iVar4 = iVar8 - iVar6;
      if (iVar8 >= iVar6) {
        iVar4 = iVar6;
      }
      if (iVar4 < 0 == (iVar8 < iVar6 && SBORROW4(iVar8,iVar6))) {
        uVar11 = 0;
        lVar13 = 0;
        iVar6 = 0;
        iVar4 = 0x100;
        iVar8 = 0;
        iVar9 = 0;
      }
      else {
        lVar13 = SIMDExpandImmediate(0,0xe,0xff);
        iVar6 = 0;
        iVar4 = 0;
        uVar11 = 0;
        iVar9 = (int)((ulonglong)lVar13 >> 0x20);
        iVar8 = (int)lVar13;
      }
    }
    else {
      if (iVar9 < 1) {
        iVar4 = -iVar6;
        iVar6 = (iVar8 - iVar6) + -1;
      }
      else {
        iVar4 = (iVar8 - iVar6) + -1;
        iVar6 = -iVar6;
      }
      iVar8 = __aeabi_idiv(iVar4,iVar9);
      lVar12 = (longlong)iVar8 * -0x100;
      lVar13 = lVar12 << 0x20;
      iVar4 = __aeabi_idiv(iVar6,iVar9,(int)lVar12,(int)((ulonglong)lVar12 >> 0x20));
      iVar8 = (int)lVar13;
      iVar9 = (int)((ulonglong)lVar13 >> 0x20);
      uVar11 = 0x10000000000;
      iVar6 = -iVar8;
      iVar4 = iVar4 * -0x100 - (iVar9 + (uint)(iVar8 != 0));
    }
  }
  else {
    if (iVar4 < 1) {
      iVar4 = iVar8 + iVar4 + 1;
      iVar8 = -iVar6;
    }
    else {
      iVar4 = iVar4 + -1;
      iVar8 = iVar8 - iVar6;
    }
    uVar7 = (uint)*(short *)(param_1 + 0x76);
    iVar1 = (int)uVar7 >> 0x1f;
    uVar11 = VectorShiftRight(CONCAT44(iVar4 - iVar6,iVar4 - iVar6),0x20);
    lVar13 = VectorShiftLeft(uVar11,0x20,0x40,0);
    iVar6 = (int)((ulonglong)lVar13 >> 0x20);
    uVar3 = (uint)lVar13;
    if (lVar13 < 0) {
      if (-1 < iVar1) {
        lVar13 = __aeabi_ldivmod(uVar3,iVar6,uVar7,iVar1);
        goto LAB_0802bd9c;
      }
      lVar13 = __aeabi_ldivmod(uVar3 + uVar7 + 1,
                               iVar6 + iVar1 + (uint)(0xfffffffe < uVar7) +
                               (uint)CARRY4(uVar3,uVar7 + 1),uVar7,iVar1);
LAB_0802c048:
      uVar11 = VectorShiftRight(CONCAT44(iVar8,iVar8),0x20);
      lVar12 = VectorShiftLeft(uVar11,0x20,0x40,0);
      iVar6 = (int)((ulonglong)lVar12 >> 0x20);
      uVar3 = (uint)lVar12;
      if (lVar12 < 0) {
LAB_0802c064:
        if (-1 < iVar1) {
          uVar11 = __aeabi_ldivmod(uVar3,iVar6,uVar7,iVar1);
          goto LAB_0802bdd4;
        }
        uVar11 = __aeabi_ldivmod(uVar3 + uVar7 + 1,
                                 iVar6 + iVar1 + (uint)(0xfffffffe < uVar7) +
                                 (uint)CARRY4(uVar3,uVar7 + 1),uVar7,iVar1);
      }
      else {
        uVar11 = __aeabi_ldivmod(uVar3,iVar6,uVar7,iVar1);
      }
      iVar6 = (uint)uVar11 - (uint)lVar13;
      iVar4 = (int)((ulonglong)uVar11 >> 0x20) -
              ((int)((ulonglong)lVar13 >> 0x20) + (uint)((uint)uVar11 < (uint)lVar13));
      uVar11 = VectorShiftRight(CONCAT44(-iVar9,-iVar9),0x20);
      lVar12 = VectorShiftLeft(uVar11,0x20,0x40,0);
      iVar8 = (int)((ulonglong)lVar12 >> 0x20);
      uVar3 = (uint)lVar12;
      if (lVar12 < 0) {
LAB_0802c144:
        if (iVar1 < 0) {
          uVar5 = uVar7 + 1;
          uVar2 = (uint)(0xfffffffe < uVar7);
          goto LAB_0802be08;
        }
      }
      uVar11 = __aeabi_ldivmod(uVar3,iVar8,uVar7,iVar1);
      iVar8 = (int)lVar13;
      iVar9 = (int)((ulonglong)lVar13 >> 0x20);
    }
    else {
      if (iVar1 < 0) {
        lVar13 = __aeabi_ldivmod(uVar3,iVar6,uVar7,iVar1);
        goto LAB_0802c048;
      }
      lVar13 = __aeabi_ldivmod(uVar3 + (uVar7 - 1),
                               iVar6 + (iVar1 - (uint)(uVar7 == 0)) + (uint)CARRY4(uVar3,uVar7 - 1),
                               uVar7,iVar1);
LAB_0802bd9c:
      uVar11 = VectorShiftRight(CONCAT44(iVar8,iVar8),0x20);
      lVar12 = VectorShiftLeft(uVar11,0x20,0x40,0);
      iVar6 = (int)((ulonglong)lVar12 >> 0x20);
      uVar3 = (uint)lVar12;
      if (lVar12 < 0) goto LAB_0802c064;
      uVar11 = __aeabi_ldivmod(uVar3 + (uVar7 - 1),
                               iVar6 + (iVar1 - (uint)(uVar7 == 0)) + (uint)CARRY4(uVar3,uVar7 - 1),
                               uVar7,iVar1);
LAB_0802bdd4:
      iVar6 = (uint)uVar11 - (uint)lVar13;
      iVar4 = (int)((ulonglong)uVar11 >> 0x20) -
              ((int)((ulonglong)lVar13 >> 0x20) + (uint)((uint)uVar11 < (uint)lVar13));
      uVar11 = VectorShiftRight(CONCAT44(-iVar9,-iVar9),0x20);
      lVar12 = VectorShiftLeft(uVar11,0x20,0x40,0);
      iVar8 = (int)((ulonglong)lVar12 >> 0x20);
      uVar3 = (uint)lVar12;
      if (lVar12 < 0) goto LAB_0802c144;
      uVar5 = uVar7 - 1;
      uVar2 = -(uint)(uVar7 == 0);
LAB_0802be08:
      uVar11 = __aeabi_ldivmod(uVar3 + uVar5,iVar8 + iVar1 + uVar2 + (uint)CARRY4(uVar3,uVar5),uVar7
                               ,iVar1);
      iVar8 = (int)lVar13;
      iVar9 = (int)((ulonglong)lVar13 >> 0x20);
    }
  }
  *(int *)(param_1 + 0x30) = iVar8;
  *(int *)(param_1 + 0x34) = iVar9;
  *(int *)(param_1 + 0x38) = iVar6;
  *(int *)(param_1 + 0x3c) = iVar4;
  iVar8 = (int)*(short *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x40) = uVar11;
  iVar6 = *(int *)(param_1 + 0x6c);
  iVar4 = (int)*(short *)(param_1 + 0x7c);
  if (iVar8 == 0) {
    if (iVar4 == 0) {
      iVar8 = iVar10 - iVar6;
      if (iVar10 >= iVar6) {
        iVar8 = iVar6;
      }
      if (iVar8 < 0 == (iVar10 < iVar6 && SBORROW4(iVar10,iVar6))) {
        iVar6 = 0;
        uVar11 = 0;
        iVar8 = 0x100;
        lVar13 = 0;
      }
      else {
        iVar6 = 0;
        iVar8 = 0;
        uVar11 = 0;
        lVar13 = -1;
      }
    }
    else {
      if (iVar4 < 1) {
        iVar8 = -iVar6;
        iVar6 = (iVar10 - iVar6) + -1;
      }
      else {
        iVar8 = (iVar10 - iVar6) + -1;
        iVar6 = -iVar6;
      }
      iVar8 = __aeabi_idiv(iVar8,iVar4);
      iVar10 = __aeabi_idiv(iVar6,iVar4);
      uVar11 = 0x10000000000;
      lVar13 = (ulonglong)(uint)(iVar8 * -0x100) << 0x20;
      iVar6 = 0;
      iVar8 = iVar10 * -0x100 + iVar8 * 0x100;
    }
    goto LAB_0802bf58;
  }
  if (iVar8 < 1) {
    iVar8 = iVar10 + iVar8 + 1;
    iVar10 = -iVar6;
  }
  else {
    iVar8 = iVar8 + -1;
    iVar10 = iVar10 - iVar6;
  }
  uVar7 = (uint)*(short *)(param_1 + 0x78);
  iVar9 = (int)uVar7 >> 0x1f;
  uVar11 = VectorShiftRight(CONCAT44(iVar8 - iVar6,iVar8 - iVar6),0x20);
  lVar12 = VectorShiftLeft(uVar11,0x20,0x40,0);
  iVar6 = (int)((ulonglong)lVar12 >> 0x20);
  uVar3 = (uint)lVar12;
  if (lVar12 < 0) {
    if (-1 < iVar9) {
      lVar13 = __aeabi_ldivmod(uVar3,iVar6,uVar7,iVar9,lVar13);
      goto LAB_0802bec8;
    }
    lVar13 = __aeabi_ldivmod(uVar3 + uVar7 + 1,
                             iVar6 + iVar9 + (uint)(0xfffffffe < uVar7) +
                             (uint)CARRY4(uVar3,uVar7 + 1),uVar7,iVar9,lVar13);
LAB_0802c094:
    uVar11 = VectorShiftRight(CONCAT44(iVar10,iVar10),0x20);
    lVar12 = VectorShiftLeft(uVar11,0x20,0x40,0);
    iVar6 = (int)((ulonglong)lVar12 >> 0x20);
    uVar3 = (uint)lVar12;
    if (lVar12 < 0) {
LAB_0802c168:
      if (-1 < iVar9) {
        uVar11 = __aeabi_ldivmod(uVar3,iVar6,uVar7,iVar9);
        goto LAB_0802bf00;
      }
      uVar11 = __aeabi_ldivmod(uVar3 + uVar7 + 1,
                               iVar6 + iVar9 + (uint)(0xfffffffe < uVar7) +
                               (uint)CARRY4(uVar3,uVar7 + 1),uVar7,iVar9);
    }
    else {
      uVar11 = __aeabi_ldivmod(uVar3,iVar6,uVar7,iVar9);
    }
    iVar6 = (uint)uVar11 - (uint)lVar13;
    iVar8 = (int)((ulonglong)uVar11 >> 0x20) -
            ((int)((ulonglong)lVar13 >> 0x20) + (uint)((uint)uVar11 < (uint)lVar13));
    uVar11 = VectorShiftRight(CONCAT44(-iVar4,-iVar4),0x20);
    lVar12 = VectorShiftLeft(uVar11,0x20,0x40,0);
    iVar10 = (int)((ulonglong)lVar12 >> 0x20);
    uVar3 = (uint)lVar12;
    if (lVar12 < 0) {
LAB_0802c0ec:
      if (iVar9 < 0) {
        uVar5 = uVar7 + 1;
        uVar2 = (uint)(0xfffffffe < uVar7);
        goto LAB_0802bf38;
      }
    }
    uVar11 = __aeabi_ldivmod(uVar3,iVar10,uVar7,iVar9);
  }
  else {
    if (iVar9 < 0) {
      lVar13 = __aeabi_ldivmod(uVar3,iVar6,uVar7,iVar9,lVar13);
      goto LAB_0802c094;
    }
    lVar13 = __aeabi_ldivmod(uVar3 + (uVar7 - 1),
                             iVar6 + (iVar9 - (uint)(uVar7 == 0)) + (uint)CARRY4(uVar3,uVar7 - 1),
                             uVar7,iVar9,lVar13);
LAB_0802bec8:
    uVar11 = VectorShiftRight(CONCAT44(iVar10,iVar10),0x20);
    lVar12 = VectorShiftLeft(uVar11,0x20,0x40,0);
    iVar6 = (int)((ulonglong)lVar12 >> 0x20);
    uVar3 = (uint)lVar12;
    if (lVar12 < 0) goto LAB_0802c168;
    uVar11 = __aeabi_ldivmod(uVar3 + (uVar7 - 1),
                             iVar6 + (iVar9 - (uint)(uVar7 == 0)) + (uint)CARRY4(uVar3,uVar7 - 1),
                             uVar7,iVar9);
LAB_0802bf00:
    iVar6 = (uint)uVar11 - (uint)lVar13;
    iVar8 = (int)((ulonglong)uVar11 >> 0x20) -
            ((int)((ulonglong)lVar13 >> 0x20) + (uint)((uint)uVar11 < (uint)lVar13));
    uVar11 = VectorShiftRight(CONCAT44(-iVar4,-iVar4),0x20);
    lVar12 = VectorShiftLeft(uVar11,0x20,0x40,0);
    iVar10 = (int)((ulonglong)lVar12 >> 0x20);
    uVar3 = (uint)lVar12;
    if (lVar12 < 0) goto LAB_0802c0ec;
    uVar5 = uVar7 - 1;
    uVar2 = -(uint)(uVar7 == 0);
LAB_0802bf38:
    uVar11 = __aeabi_ldivmod(uVar3 + uVar5,iVar10 + iVar9 + uVar2 + (uint)CARRY4(uVar3,uVar5),uVar7,
                             iVar9);
  }
LAB_0802bf58:
  *(longlong *)(param_1 + 0x48) = lVar13;
  *(int *)(param_1 + 0x50) = iVar6;
  *(int *)(param_1 + 0x54) = iVar8;
  *(undefined8 *)(param_1 + 0x58) = uVar11;
  *(undefined *)(param_1 + 0x86) = 0;
  return;
}


