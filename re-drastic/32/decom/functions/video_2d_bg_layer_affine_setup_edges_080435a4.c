/*
 * Ghidra decompilation
 *
 * Function : video_2d_bg_layer_affine_setup_edges
 * Address  : 080435a4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void video_2d_bg_layer_affine_setup_edges
               (s32 source,s32 d,s32 max,s32 dm,s64 *_edge_base,s64 *_edge_step,s64 *_edge_width)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  s32 base_left;
  int iVar4;
  uint uVar5;
  s32 base_right;
  int iVar6;
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
        iVar6 = 0;
        iVar3 = 0;
        sVar11 = 0;
      }
      else {
        sVar11 = 0;
        iVar6 = 0;
        iVar3 = 0x100;
        lVar9 = 0;
      }
    }
    else {
      if (dm < 1) {
        iVar3 = -source;
        iVar6 = (max - source) + -1;
      }
      else {
        iVar6 = -source;
        iVar3 = (max - source) + -1;
      }
      base_left = __aeabi_idiv(iVar3,dm);
      uVar7 = base_left * -0x100;
      lVar9 = (ulonglong)uVar7 << 0x20;
      iVar3 = __aeabi_idiv(iVar6,dm,0,uVar7,0,uVar7);
      sVar11 = 0x10000000000;
      iVar6 = 0;
      iVar3 = iVar3 * -0x100 + base_left * 0x100;
    }
    goto LAB_08043644;
  }
  if (d < 1) {
    iVar6 = -source;
    iVar3 = (d + max + 1) - source;
  }
  else {
    iVar6 = max - source;
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
      goto LAB_080437f0;
    }
    lVar9 = __aeabi_ldivmod(uVar7,iVar3,d,iVar1);
LAB_080436d0:
    uVar8 = VectorShiftRight(CONCAT44(iVar6,iVar6),0x20);
    lVar10 = VectorShiftLeft(uVar8,0x20,0x40,0);
    iVar6 = (int)((ulonglong)lVar10 >> 0x20);
    uVar7 = (uint)lVar10;
    if (lVar10 < 0) {
      uVar8 = __aeabi_ldivmod(uVar7,iVar6,d,iVar1);
      iVar6 = (uint)uVar8 - (uint)lVar9;
      iVar3 = (int)((ulonglong)uVar8 >> 0x20) -
              ((int)((ulonglong)lVar9 >> 0x20) + (uint)((uint)uVar8 < (uint)lVar9));
      uVar8 = VectorShiftRight(CONCAT44(-dm,-dm),0x20);
      lVar10 = VectorShiftLeft(uVar8,0x20,0x40,0);
      iVar4 = (int)((ulonglong)lVar10 >> 0x20);
      uVar7 = (uint)lVar10;
      if (-1 < lVar10) {
LAB_080438b0:
        if (-1 < iVar1) goto LAB_08043744;
      }
    }
    else {
      uVar8 = __aeabi_ldivmod((d - 1U) + uVar7,
                              (iVar1 - (uint)(d == 0)) + iVar6 + (uint)CARRY4(d - 1U,uVar7),d,iVar1)
      ;
      iVar6 = (uint)uVar8 - (uint)lVar9;
      iVar3 = (int)((ulonglong)uVar8 >> 0x20) -
              ((int)((ulonglong)lVar9 >> 0x20) + (uint)((uint)uVar8 < (uint)lVar9));
      uVar8 = VectorShiftRight(CONCAT44(-dm,-dm),0x20);
      lVar10 = VectorShiftLeft(uVar8,0x20,0x40,0);
      iVar4 = (int)((ulonglong)lVar10 >> 0x20);
      uVar7 = (uint)lVar10;
      if (-1 < lVar10) {
LAB_08043744:
        uVar5 = d - 1;
        uVar2 = -(uint)(d == 0);
        goto LAB_0804374c;
      }
    }
LAB_08043844:
    sVar11 = __aeabi_ldivmod(uVar7,iVar4,d,iVar1);
  }
  else {
    if (-1 < iVar1) {
      lVar9 = __aeabi_ldivmod(uVar7 + (d - 1U),
                              iVar3 + (iVar1 - (uint)(d == 0)) + (uint)CARRY4(uVar7,d - 1U),d,iVar1)
      ;
      goto LAB_080436d0;
    }
    lVar9 = __aeabi_ldivmod(uVar7,iVar3,d,iVar1);
LAB_080437f0:
    uVar8 = VectorShiftRight(CONCAT44(iVar6,iVar6),0x20);
    lVar10 = VectorShiftLeft(uVar8,0x20,0x40,0);
    iVar6 = (int)((ulonglong)lVar10 >> 0x20);
    uVar7 = (uint)lVar10;
    if (lVar10 < 0) {
      uVar8 = __aeabi_ldivmod(d + 1U + uVar7,
                              iVar1 + (uint)(0xfffffffe < (uint)d) + iVar6 +
                              (uint)CARRY4(d + 1U,uVar7),d,iVar1);
      iVar6 = (uint)uVar8 - (uint)lVar9;
      iVar3 = (int)((ulonglong)uVar8 >> 0x20) -
              ((int)((ulonglong)lVar9 >> 0x20) + (uint)((uint)uVar8 < (uint)lVar9));
      uVar8 = VectorShiftRight(CONCAT44(-dm,-dm),0x20);
      lVar10 = VectorShiftLeft(uVar8,0x20,0x40,0);
      iVar4 = (int)((ulonglong)lVar10 >> 0x20);
      uVar7 = (uint)lVar10;
      if (lVar10 < 0) goto LAB_08043918;
      goto LAB_080438b0;
    }
    uVar8 = __aeabi_ldivmod(uVar7,iVar6,d,iVar1);
    iVar6 = (uint)uVar8 - (uint)lVar9;
    iVar3 = (int)((ulonglong)uVar8 >> 0x20) -
            ((int)((ulonglong)lVar9 >> 0x20) + (uint)((uint)uVar8 < (uint)lVar9));
    uVar8 = VectorShiftRight(CONCAT44(-dm,-dm),0x20);
    lVar10 = VectorShiftLeft(uVar8,0x20,0x40,0);
    iVar4 = (int)((ulonglong)lVar10 >> 0x20);
    uVar7 = (uint)lVar10;
    if (-1 < lVar10) goto LAB_08043844;
LAB_08043918:
    uVar5 = d + 1;
    uVar2 = (uint)(0xfffffffe < (uint)d);
LAB_0804374c:
    sVar11 = __aeabi_ldivmod(uVar5 + uVar7,iVar1 + uVar2 + iVar4 + (uint)CARRY4(uVar5,uVar7),d,iVar1
                            );
  }
LAB_08043644:
  *_edge_base = lVar9;
  *(int *)_edge_width = iVar6;
  *(int *)((int)_edge_width + 4) = iVar3;
  *_edge_step = sVar11;
  return;
}


