/*
 * Ghidra decompilation
 *
 * Function : video_2d_obj_affine_setup_edges
 * Address  : 0804a828
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void video_2d_obj_affine_setup_edges
               (s32 source,s32 d,s32 max,s32 dm,s64 *_edge_base,s64 *_edge_step,s64 *_edge_width)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  s32 base_left;
  uint uVar6;
  s32 base_right;
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  s64 sVar11;
  
  if (d == 0) {
    if (dm == 0) {
      uVar7 = (uint)~source >> 0x1f;
      if (max < source) {
        uVar7 = 0;
      }
      if (uVar7 == 0) {
        lVar9 = SIMDExpandImmediate(0,0xe,0xff);
        iVar3 = 0;
        iVar5 = 0;
        sVar11 = 0;
      }
      else {
        sVar11 = 0;
        iVar3 = 0;
        iVar5 = 0x80;
        lVar9 = 0;
      }
    }
    else {
      if (dm < 1) {
        base_right = max - source;
        iVar5 = -source;
      }
      else {
        iVar5 = max - source;
        base_right = -source;
      }
      iVar5 = __aeabi_idiv(iVar5,dm);
      uVar7 = iVar5 * -0x80;
      lVar9 = (ulonglong)uVar7 << 0x20;
      iVar3 = __aeabi_idiv(base_right,dm,0,uVar7,0,uVar7);
      sVar11 = 0x8000000000;
      uVar8 = VectorShiftRight(CONCAT44(iVar3 * -0x80,iVar3 * -0x80),0x20);
      uVar8 = VectorShiftLeft(uVar8,0x20,0x40,0);
      iVar3 = (int)uVar8;
      iVar5 = (int)((ulonglong)uVar8 >> 0x20) + iVar5 * 0x80 + 0x80;
    }
    goto LAB_0804a8d4;
  }
  if (d < 1) {
    iVar5 = -source;
    iVar3 = (d + max + 1) - source;
  }
  else {
    iVar5 = max - source;
    iVar3 = (d + -1) - source;
  }
  iVar1 = d >> 0x1f;
  uVar8 = VectorShiftRight(CONCAT44(iVar3,iVar3),0x20);
  lVar9 = VectorShiftLeft(uVar8,0x20,0x40,0);
  iVar3 = (int)((ulonglong)lVar9 >> 0x20);
  uVar7 = (uint)lVar9;
  if (lVar9 < 0) {
    if (iVar1 < 0) {
      lVar9 = __aeabi_ldivmod(uVar7 + d + 1U,
                              iVar3 + iVar1 + (uint)(0xfffffffe < (uint)d) +
                              (uint)CARRY4(uVar7,d + 1U),d,iVar1);
      goto LAB_0804aa80;
    }
    lVar9 = __aeabi_ldivmod(uVar7,iVar3,d,iVar1);
LAB_0804a960:
    uVar8 = VectorShiftRight(CONCAT44(iVar5,iVar5),0x20);
    lVar10 = VectorShiftLeft(uVar8,0x20,0x40,0);
    iVar5 = (int)((ulonglong)lVar10 >> 0x20);
    uVar7 = (uint)lVar10;
    if (lVar10 < 0) {
      uVar8 = __aeabi_ldivmod(uVar7,iVar5,d,iVar1);
      iVar3 = (uint)uVar8 - (uint)lVar9;
      iVar5 = (int)((ulonglong)uVar8 >> 0x20) -
              ((int)((ulonglong)lVar9 >> 0x20) + (uint)((uint)uVar8 < (uint)lVar9));
      uVar8 = VectorShiftRight(CONCAT44(-dm,-dm),0x20);
      lVar10 = VectorShiftLeft(uVar8,0x20,0x40,0);
      iVar4 = (int)((ulonglong)lVar10 >> 0x20);
      uVar7 = (uint)lVar10;
      if (-1 < lVar10) {
LAB_0804ab40:
        if (-1 < iVar1) goto LAB_0804a9d4;
      }
    }
    else {
      uVar8 = __aeabi_ldivmod((d - 1U) + uVar7,
                              (iVar1 - (uint)(d == 0)) + iVar5 + (uint)CARRY4(d - 1U,uVar7),d,iVar1)
      ;
      iVar3 = (uint)uVar8 - (uint)lVar9;
      iVar5 = (int)((ulonglong)uVar8 >> 0x20) -
              ((int)((ulonglong)lVar9 >> 0x20) + (uint)((uint)uVar8 < (uint)lVar9));
      uVar8 = VectorShiftRight(CONCAT44(-dm,-dm),0x20);
      lVar10 = VectorShiftLeft(uVar8,0x20,0x40,0);
      iVar4 = (int)((ulonglong)lVar10 >> 0x20);
      uVar7 = (uint)lVar10;
      if (-1 < lVar10) {
LAB_0804a9d4:
        uVar6 = d - 1;
        uVar2 = -(uint)(d == 0);
        goto LAB_0804a9dc;
      }
    }
LAB_0804aad4:
    sVar11 = __aeabi_ldivmod(uVar7,iVar4,d,iVar1);
  }
  else {
    if (-1 < iVar1) {
      lVar9 = __aeabi_ldivmod(uVar7 + (d - 1U),
                              iVar3 + (iVar1 - (uint)(d == 0)) + (uint)CARRY4(uVar7,d - 1U),d,iVar1)
      ;
      goto LAB_0804a960;
    }
    lVar9 = __aeabi_ldivmod(uVar7,iVar3,d,iVar1);
LAB_0804aa80:
    uVar8 = VectorShiftRight(CONCAT44(iVar5,iVar5),0x20);
    lVar10 = VectorShiftLeft(uVar8,0x20,0x40,0);
    iVar5 = (int)((ulonglong)lVar10 >> 0x20);
    uVar7 = (uint)lVar10;
    if (lVar10 < 0) {
      uVar8 = __aeabi_ldivmod(d + 1U + uVar7,
                              iVar1 + (uint)(0xfffffffe < (uint)d) + iVar5 +
                              (uint)CARRY4(d + 1U,uVar7),d,iVar1);
      iVar3 = (uint)uVar8 - (uint)lVar9;
      iVar5 = (int)((ulonglong)uVar8 >> 0x20) -
              ((int)((ulonglong)lVar9 >> 0x20) + (uint)((uint)uVar8 < (uint)lVar9));
      uVar8 = VectorShiftRight(CONCAT44(-dm,-dm),0x20);
      lVar10 = VectorShiftLeft(uVar8,0x20,0x40,0);
      iVar4 = (int)((ulonglong)lVar10 >> 0x20);
      uVar7 = (uint)lVar10;
      if (lVar10 < 0) goto LAB_0804aba8;
      goto LAB_0804ab40;
    }
    uVar8 = __aeabi_ldivmod(uVar7,iVar5,d,iVar1);
    iVar3 = (uint)uVar8 - (uint)lVar9;
    iVar5 = (int)((ulonglong)uVar8 >> 0x20) -
            ((int)((ulonglong)lVar9 >> 0x20) + (uint)((uint)uVar8 < (uint)lVar9));
    uVar8 = VectorShiftRight(CONCAT44(-dm,-dm),0x20);
    lVar10 = VectorShiftLeft(uVar8,0x20,0x40,0);
    iVar4 = (int)((ulonglong)lVar10 >> 0x20);
    uVar7 = (uint)lVar10;
    if (-1 < lVar10) goto LAB_0804aad4;
LAB_0804aba8:
    uVar6 = d + 1;
    uVar2 = (uint)(0xfffffffe < (uint)d);
LAB_0804a9dc:
    sVar11 = __aeabi_ldivmod(uVar6 + uVar7,iVar1 + uVar2 + iVar4 + (uint)CARRY4(uVar6,uVar7),d,iVar1
                            );
  }
LAB_0804a8d4:
  *_edge_base = lVar9;
  *(int *)_edge_width = iVar3;
  *(int *)((int)_edge_width + 4) = iVar5;
  *_edge_step = sVar11;
  return;
}


