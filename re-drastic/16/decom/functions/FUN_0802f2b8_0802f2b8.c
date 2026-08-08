/*
 * Ghidra decompilation
 *
 * Function : FUN_0802f2b8
 * Address  : 0802f2b8
 * Program  : drastic16
 */


void FUN_0802f2b8(int param_1,uint param_2,int param_3,int param_4,int param_5,undefined8 *param_6,
                 undefined8 *param_7,int *param_8)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  
  if (param_2 == 0) {
    if (param_4 == 0) {
      if (param_1 < 0 || param_3 < param_1) {
        iVar3 = 0;
        iVar7 = 0;
        uVar8 = 0xffffffffffffffff;
        uVar10 = 0;
      }
      else {
        uVar10 = 0;
        iVar3 = 0;
        uVar8 = 0;
        iVar7 = 0x80;
      }
    }
    else {
      if (param_4 < 1) {
        param_3 = param_3 + 1;
      }
      uVar5 = param_1 - param_5 * param_4;
      if (param_4 < 1) {
        iVar3 = -uVar5;
        uVar5 = param_3 - uVar5;
      }
      else {
        iVar3 = param_3 - uVar5;
        uVar5 = ~uVar5;
      }
      iVar3 = __aeabi_idiv(iVar3,param_4);
      uVar8 = VectorShiftRight(CONCAT44(iVar3 * -0x80,iVar3 * -0x80),0x20);
      uVar8 = VectorShiftLeft(uVar8,0x20,0x40,0);
      iVar3 = __aeabi_idiv(uVar5,param_4);
      uVar10 = 0x8000000000;
      uVar9 = VectorShiftRight(CONCAT44(iVar3 * -0x80,iVar3 * -0x80),0x20);
      uVar9 = VectorShiftLeft(uVar9,0x20,0x40,0);
      iVar3 = (uint)uVar9 - (uint)uVar8;
      iVar7 = (int)((ulonglong)uVar9 >> 0x20) -
              ((int)((ulonglong)uVar8 >> 0x20) + (uint)((uint)uVar9 < (uint)uVar8));
    }
    goto LAB_0802f340;
  }
  if ((int)param_2 < 1) {
    param_3 = param_3 + param_2 + 1;
    iVar3 = -param_1;
  }
  else {
    iVar3 = param_3 - param_1;
  }
  iVar7 = param_4 * param_5;
  if (0 < (int)param_2) {
    param_5 = param_2 - 1;
  }
  iVar1 = (int)param_2 >> 0x1f;
  if (0 < (int)param_2) {
    param_3 = param_5;
  }
  iVar4 = (param_3 - param_1) + iVar7;
  uVar8 = VectorShiftRight(CONCAT44(iVar4,iVar4),0x20);
  lVar11 = VectorShiftLeft(uVar8,0x20,0x40,0);
  iVar4 = (int)((ulonglong)lVar11 >> 0x20);
  uVar5 = (uint)lVar11;
  if (lVar11 < 0) {
    if (-1 < iVar1) {
      uVar8 = __aeabi_ldivmod(uVar5,iVar4,param_2,iVar1,param_4);
      goto LAB_0802f3dc;
    }
    uVar8 = __aeabi_ldivmod(uVar5 + param_2 + 1,
                            iVar4 + iVar1 + (uint)(0xfffffffe < param_2) +
                            (uint)CARRY4(uVar5,param_2 + 1),param_2,iVar1,param_4);
LAB_0802f4f8:
    uVar10 = VectorShiftRight(CONCAT44(iVar3 + iVar7,iVar3 + iVar7),0x20);
    lVar11 = VectorShiftLeft(uVar10,0x20,0x40,0);
    iVar3 = (int)((ulonglong)lVar11 >> 0x20);
    uVar5 = (uint)lVar11;
    if (lVar11 < 0) {
LAB_0802f518:
      if (-1 < iVar1) {
        uVar10 = __aeabi_ldivmod(uVar5,iVar3,param_2,iVar1);
        goto LAB_0802f418;
      }
      uVar10 = __aeabi_ldivmod(uVar5 + param_2 + 1,
                               iVar3 + iVar1 + (uint)(0xfffffffe < param_2) +
                               (uint)CARRY4(uVar5,param_2 + 1),param_2,iVar1);
    }
    else {
      uVar10 = __aeabi_ldivmod(uVar5,iVar3,param_2,iVar1);
    }
    iVar3 = (uint)uVar10 - (uint)uVar8;
    iVar7 = (int)((ulonglong)uVar10 >> 0x20) -
            ((int)((ulonglong)uVar8 >> 0x20) + (uint)((uint)uVar10 < (uint)uVar8));
    uVar10 = VectorShiftRight(CONCAT44(-param_4,-param_4),0x20);
    lVar11 = VectorShiftLeft(uVar10,0x20,0x40,0);
    iVar4 = (int)((ulonglong)lVar11 >> 0x20);
    uVar5 = (uint)lVar11;
    if (lVar11 < 0) {
LAB_0802f570:
      if (iVar1 < 0) {
        uVar6 = param_2 + 1;
        uVar2 = (uint)(0xfffffffe < param_2);
        goto LAB_0802f450;
      }
    }
    uVar10 = __aeabi_ldivmod(uVar5,iVar4,param_2,iVar1);
  }
  else {
    if (iVar1 < 0) {
      uVar8 = __aeabi_ldivmod(uVar5,iVar4,param_2,iVar1,param_4);
      goto LAB_0802f4f8;
    }
    uVar8 = __aeabi_ldivmod(uVar5 + (param_2 - 1),
                            iVar4 + (iVar1 - (uint)(param_2 == 0)) + (uint)CARRY4(uVar5,param_2 - 1)
                            ,param_2,iVar1,param_4);
LAB_0802f3dc:
    uVar10 = VectorShiftRight(CONCAT44(iVar3 + iVar7,iVar3 + iVar7),0x20);
    lVar11 = VectorShiftLeft(uVar10,0x20,0x40,0);
    iVar3 = (int)((ulonglong)lVar11 >> 0x20);
    uVar5 = (uint)lVar11;
    if (lVar11 < 0) goto LAB_0802f518;
    uVar10 = __aeabi_ldivmod(uVar5 + (param_2 - 1),
                             iVar3 + (iVar1 - (uint)(param_2 == 0)) +
                             (uint)CARRY4(uVar5,param_2 - 1),param_2,iVar1);
LAB_0802f418:
    iVar3 = (uint)uVar10 - (uint)uVar8;
    iVar7 = (int)((ulonglong)uVar10 >> 0x20) -
            ((int)((ulonglong)uVar8 >> 0x20) + (uint)((uint)uVar10 < (uint)uVar8));
    uVar10 = VectorShiftRight(CONCAT44(-param_4,-param_4),0x20);
    lVar11 = VectorShiftLeft(uVar10,0x20,0x40,0);
    iVar4 = (int)((ulonglong)lVar11 >> 0x20);
    uVar5 = (uint)lVar11;
    if (lVar11 < 0) goto LAB_0802f570;
    uVar6 = param_2 - 1;
    uVar2 = -(uint)(param_2 == 0);
LAB_0802f450:
    uVar10 = __aeabi_ldivmod(uVar5 + uVar6,iVar4 + iVar1 + uVar2 + (uint)CARRY4(uVar5,uVar6),param_2
                             ,iVar1);
  }
LAB_0802f340:
  *param_6 = uVar8;
  *param_8 = iVar3;
  param_8[1] = iVar7;
  *param_7 = uVar10;
  return;
}


