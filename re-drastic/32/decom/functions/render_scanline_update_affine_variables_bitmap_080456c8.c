/*
 * Ghidra decompilation
 *
 * Function : render_scanline_update_affine_variables_bitmap
 * Address  : 080456c8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void render_scanline_update_affine_variables_bitmap(video_2d_bg_layer_struct *bg_layer)

{
  uint uVar1;
  short sVar2;
  s32 base_left;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  u32 wrap_width_x;
  int iVar8;
  s32 base_left_1;
  int iVar9;
  s32 base_right;
  int iVar10;
  uint uVar11;
  int iVar12;
  u32 wrap_width_y;
  s32 base_right_1;
  bool bVar13;
  bool bVar14;
  undefined8 uVar15;
  longlong lVar16;
  longlong lVar17;
  s64 sVar18;
  s64 edge_base;
  
  iVar9 = (int)bg_layer->affine_dx;
  iVar4 = bg_layer->affine_current_x;
  iVar10 = (int)bg_layer->affine_dmx;
  iVar7 = (uint)bg_layer->bitmap_wrap_mask_x * 0x100 + 0xff;
  iVar12 = (uint)bg_layer->bitmap_wrap_mask_y * 0x100 + 0xff;
  if (iVar9 == 0) {
    if (iVar10 == 0) {
      bVar13 = iVar4 < 0;
      bVar14 = bVar13;
      if (!bVar13) {
        bVar14 = iVar7 - iVar4 < 0;
      }
      if (bVar14 == (!bVar13 && SBORROW4(iVar7,iVar4))) {
        sVar18 = 0;
        iVar4 = 0;
        iVar8 = 0x100;
        uVar5 = 0;
        lVar17 = 0;
        uVar11 = 0;
      }
      else {
        lVar17 = SIMDExpandImmediate(0,0xe,0xff);
        iVar4 = 0;
        iVar8 = 0;
        sVar18 = 0;
        uVar11 = (uint)((ulonglong)lVar17 >> 0x20);
        uVar5 = (undefined4)lVar17;
      }
    }
    else {
      if (iVar10 < 1) {
        iVar9 = -iVar4;
        base_right = (iVar7 - iVar4) + -1;
      }
      else {
        iVar9 = (iVar7 - iVar4) + -1;
        base_right = -iVar4;
      }
      base_left = __aeabi_idiv(iVar9,iVar10);
      uVar11 = base_left * -0x100;
      lVar17 = (ulonglong)uVar11 << 0x20;
      iVar7 = __aeabi_idiv(base_right,iVar10,0,uVar11,0);
      sVar18 = 0x10000000000;
      iVar4 = 0;
      iVar8 = iVar7 * -0x100 + base_left * 0x100;
      uVar5 = 0;
    }
  }
  else {
    if (iVar9 < 1) {
      iVar8 = -iVar4;
      iVar4 = (iVar7 + iVar9 + 1) - iVar4;
    }
    else {
      iVar8 = iVar7 - iVar4;
      iVar4 = (iVar9 + -1) - iVar4;
    }
    uVar11 = (uint)bg_layer->affine_dx;
    iVar7 = (int)uVar11 >> 0x1f;
    uVar15 = VectorShiftRight(CONCAT44(iVar4,iVar4),0x20);
    lVar17 = VectorShiftLeft(uVar15,0x20,0x40,0);
    iVar4 = (int)((ulonglong)lVar17 >> 0x20);
    uVar3 = (uint)lVar17;
    if (lVar17 < 0) {
      if (iVar7 < 0) {
        lVar17 = __aeabi_ldivmod(uVar3 + uVar11 + 1,
                                 iVar4 + iVar7 + (uint)(0xfffffffe < uVar11) +
                                 (uint)CARRY4(uVar3,uVar11 + 1),uVar11,iVar7);
        goto LAB_08045b90;
      }
      lVar17 = __aeabi_ldivmod(uVar3,iVar4,uVar11,iVar7);
LAB_08045840:
      uVar15 = VectorShiftRight(CONCAT44(iVar8,iVar8),0x20);
      lVar16 = VectorShiftLeft(uVar15,0x20,0x40,0);
      iVar4 = (int)((ulonglong)lVar16 >> 0x20);
      uVar3 = (uint)lVar16;
      if (lVar16 < 0) {
        uVar15 = __aeabi_ldivmod(uVar3,iVar4,uVar11,iVar7);
        iVar4 = (uint)uVar15 - (uint)lVar17;
        iVar8 = (int)((ulonglong)uVar15 >> 0x20) -
                ((int)((ulonglong)lVar17 >> 0x20) + (uint)((uint)uVar15 < (uint)lVar17));
        uVar15 = VectorShiftRight(CONCAT44(-iVar10,-iVar10),0x20);
        lVar16 = VectorShiftLeft(uVar15,0x20,0x40,0);
        iVar9 = (int)((ulonglong)lVar16 >> 0x20);
        uVar3 = (uint)lVar16;
        if (-1 < lVar16) {
LAB_08045c94:
          if (-1 < iVar7) goto LAB_080458b4;
        }
      }
      else {
        uVar15 = __aeabi_ldivmod((uVar11 - 1) + uVar3,
                                 (iVar7 - (uint)(uVar11 == 0)) + iVar4 +
                                 (uint)CARRY4(uVar11 - 1,uVar3),uVar11,iVar7);
        iVar4 = (uint)uVar15 - (uint)lVar17;
        iVar8 = (int)((ulonglong)uVar15 >> 0x20) -
                ((int)((ulonglong)lVar17 >> 0x20) + (uint)((uint)uVar15 < (uint)lVar17));
        uVar15 = VectorShiftRight(CONCAT44(-iVar10,-iVar10),0x20);
        lVar16 = VectorShiftLeft(uVar15,0x20,0x40,0);
        iVar9 = (int)((ulonglong)lVar16 >> 0x20);
        uVar3 = (uint)lVar16;
        if (-1 < lVar16) {
LAB_080458b4:
          uVar6 = uVar11 - 1;
          uVar1 = -(uint)(uVar11 == 0);
          goto LAB_080458bc;
        }
      }
LAB_08045be4:
      sVar18 = __aeabi_ldivmod(uVar3,iVar9,uVar11,iVar7);
      uVar5 = (undefined4)lVar17;
      uVar11 = (uint)((ulonglong)lVar17 >> 0x20);
    }
    else {
      if (-1 < iVar7) {
        lVar17 = __aeabi_ldivmod(uVar3 + (uVar11 - 1),
                                 iVar4 + (iVar7 - (uint)(uVar11 == 0)) +
                                 (uint)CARRY4(uVar3,uVar11 - 1),uVar11,iVar7);
        goto LAB_08045840;
      }
      lVar17 = __aeabi_ldivmod(uVar3,iVar4,uVar11,iVar7);
LAB_08045b90:
      uVar15 = VectorShiftRight(CONCAT44(iVar8,iVar8),0x20);
      lVar16 = VectorShiftLeft(uVar15,0x20,0x40,0);
      iVar4 = (int)((ulonglong)lVar16 >> 0x20);
      uVar3 = (uint)lVar16;
      if (lVar16 < 0) {
        uVar15 = __aeabi_ldivmod(uVar11 + 1 + uVar3,
                                 iVar7 + (uint)(0xfffffffe < uVar11) + iVar4 +
                                 (uint)CARRY4(uVar11 + 1,uVar3),uVar11,iVar7);
        iVar4 = (uint)uVar15 - (uint)lVar17;
        iVar8 = (int)((ulonglong)uVar15 >> 0x20) -
                ((int)((ulonglong)lVar17 >> 0x20) + (uint)((uint)uVar15 < (uint)lVar17));
        uVar15 = VectorShiftRight(CONCAT44(-iVar10,-iVar10),0x20);
        lVar16 = VectorShiftLeft(uVar15,0x20,0x40,0);
        iVar9 = (int)((ulonglong)lVar16 >> 0x20);
        uVar3 = (uint)lVar16;
        if (lVar16 < 0) goto LAB_08045da8;
        goto LAB_08045c94;
      }
      uVar15 = __aeabi_ldivmod(uVar3,iVar4,uVar11,iVar7);
      iVar4 = (uint)uVar15 - (uint)lVar17;
      iVar8 = (int)((ulonglong)uVar15 >> 0x20) -
              ((int)((ulonglong)lVar17 >> 0x20) + (uint)((uint)uVar15 < (uint)lVar17));
      uVar15 = VectorShiftRight(CONCAT44(-iVar10,-iVar10),0x20);
      lVar16 = VectorShiftLeft(uVar15,0x20,0x40,0);
      iVar9 = (int)((ulonglong)lVar16 >> 0x20);
      uVar3 = (uint)lVar16;
      if (-1 < lVar16) goto LAB_08045be4;
LAB_08045da8:
      uVar6 = uVar11 + 1;
      uVar1 = (uint)(0xfffffffe < uVar11);
LAB_080458bc:
      sVar18 = __aeabi_ldivmod(uVar6 + uVar3,iVar7 + uVar1 + iVar9 + (uint)CARRY4(uVar6,uVar3),
                               uVar11,iVar7);
      uVar5 = (undefined4)lVar17;
      uVar11 = (uint)((ulonglong)lVar17 >> 0x20);
    }
  }
  sVar2 = bg_layer->affine_dy;
  iVar7 = (int)sVar2;
  *(undefined4 *)&bg_layer->affine_edge_current_x = uVar5;
  *(uint *)((int)&bg_layer->affine_edge_current_x + 4) = uVar11;
  iVar9 = (int)bg_layer->affine_dmy;
  *(int *)&bg_layer->affine_edge_width_x = iVar4;
  *(int *)((int)&bg_layer->affine_edge_width_x + 4) = iVar8;
  bg_layer->affine_edge_step_x = sVar18;
  iVar4 = bg_layer->affine_current_y;
  if (iVar7 == 0) {
    if (iVar9 == 0) {
      bVar13 = iVar4 < 0;
      bVar14 = bVar13;
      if (!bVar13) {
        bVar14 = iVar12 - iVar4 < 0;
      }
      if (bVar14 == (!bVar13 && SBORROW4(iVar12,iVar4))) {
        iVar4 = 0;
        sVar18 = 0;
        iVar7 = 0x100;
        lVar17 = 0;
      }
      else {
        lVar17 = SIMDExpandImmediate(0,0xe,0xff);
        iVar4 = 0;
        iVar7 = 0;
        sVar18 = 0;
      }
    }
    else {
      if (iVar9 < 1) {
        iVar10 = -iVar4;
        iVar7 = (iVar12 - iVar4) + -1;
      }
      else {
        iVar7 = -iVar4;
        iVar10 = (iVar12 - iVar4) + -1;
      }
      iVar10 = __aeabi_idiv(iVar10,iVar9);
      uVar11 = iVar10 * -0x100;
      lVar17 = (ulonglong)uVar11 << 0x20;
      iVar7 = __aeabi_idiv(iVar7,iVar9,0,uVar11,0,uVar11);
      sVar18 = 0x10000000000;
      iVar4 = 0;
      iVar7 = iVar7 * -0x100 + iVar10 * 0x100;
    }
    goto LAB_08045a14;
  }
  if (iVar7 < 1) {
    base_right_1 = -iVar4;
    base_left_1 = (iVar12 + iVar7 + 1) - iVar4;
  }
  else {
    base_right_1 = iVar12 - iVar4;
    base_left_1 = (iVar7 + -1) - iVar4;
  }
  uVar11 = (uint)sVar2;
  iVar10 = (int)uVar11 >> 0x1f;
  uVar15 = VectorShiftRight(CONCAT44(base_left_1,base_left_1),0x20);
  lVar16 = VectorShiftLeft(uVar15,0x20,0x40,0);
  iVar4 = (int)((ulonglong)lVar16 >> 0x20);
  uVar3 = (uint)lVar16;
  if (lVar16 < 0) {
    if (iVar10 < 0) {
      lVar17 = __aeabi_ldivmod(uVar3 + uVar11 + 1,
                               iVar4 + iVar10 + (uint)(0xfffffffe < uVar11) +
                               (uint)CARRY4(uVar3,uVar11 + 1),uVar11,iVar10,lVar17);
      goto LAB_08045b18;
    }
    lVar17 = __aeabi_ldivmod(uVar3,iVar4,uVar11,iVar10,lVar17);
LAB_08045970:
    uVar15 = VectorShiftRight(CONCAT44(base_right_1,base_right_1),0x20);
    lVar16 = VectorShiftLeft(uVar15,0x20,0x40,0);
    iVar4 = (int)((ulonglong)lVar16 >> 0x20);
    uVar3 = (uint)lVar16;
    if (lVar16 < 0) {
      uVar15 = __aeabi_ldivmod(uVar3,iVar4,uVar11,iVar10);
      iVar4 = (uint)uVar15 - (uint)lVar17;
      iVar7 = (int)((ulonglong)uVar15 >> 0x20) -
              ((int)((ulonglong)lVar17 >> 0x20) + (uint)((uint)uVar15 < (uint)lVar17));
      uVar15 = VectorShiftRight(CONCAT44(-iVar9,-iVar9),0x20);
      lVar16 = VectorShiftLeft(uVar15,0x20,0x40,0);
      iVar9 = (int)((ulonglong)lVar16 >> 0x20);
      uVar3 = (uint)lVar16;
      if (-1 < lVar16) {
LAB_08045cdc:
        if (-1 < iVar10) goto LAB_080459e4;
      }
    }
    else {
      uVar15 = __aeabi_ldivmod((uVar11 - 1) + uVar3,
                               (iVar10 - (uint)(uVar11 == 0)) + iVar4 +
                               (uint)CARRY4(uVar11 - 1,uVar3),uVar11,iVar10);
      iVar4 = (uint)uVar15 - (uint)lVar17;
      iVar7 = (int)((ulonglong)uVar15 >> 0x20) -
              ((int)((ulonglong)lVar17 >> 0x20) + (uint)((uint)uVar15 < (uint)lVar17));
      uVar15 = VectorShiftRight(CONCAT44(-iVar9,-iVar9),0x20);
      lVar16 = VectorShiftLeft(uVar15,0x20,0x40,0);
      iVar9 = (int)((ulonglong)lVar16 >> 0x20);
      uVar3 = (uint)lVar16;
      if (-1 < lVar16) {
LAB_080459e4:
        uVar6 = uVar11 - 1;
        uVar1 = -(uint)(uVar11 == 0);
        goto LAB_080459ec;
      }
    }
LAB_08045b6c:
    sVar18 = __aeabi_ldivmod(uVar3,iVar9,uVar11,iVar10);
  }
  else {
    if (-1 < iVar10) {
      lVar17 = __aeabi_ldivmod(uVar3 + (uVar11 - 1),
                               iVar4 + (iVar10 - (uint)(uVar11 == 0)) +
                               (uint)CARRY4(uVar3,uVar11 - 1),uVar11,iVar10,lVar17);
      goto LAB_08045970;
    }
    lVar17 = __aeabi_ldivmod(uVar3,iVar4,uVar11,iVar10,lVar17);
LAB_08045b18:
    uVar15 = VectorShiftRight(CONCAT44(base_right_1,base_right_1),0x20);
    lVar16 = VectorShiftLeft(uVar15,0x20,0x40,0);
    iVar4 = (int)((ulonglong)lVar16 >> 0x20);
    uVar3 = (uint)lVar16;
    if (lVar16 < 0) {
      uVar15 = __aeabi_ldivmod(uVar11 + 1 + uVar3,
                               iVar10 + (uint)(0xfffffffe < uVar11) + iVar4 +
                               (uint)CARRY4(uVar11 + 1,uVar3),uVar11,iVar10);
      iVar4 = (uint)uVar15 - (uint)lVar17;
      iVar7 = (int)((ulonglong)uVar15 >> 0x20) -
              ((int)((ulonglong)lVar17 >> 0x20) + (uint)((uint)uVar15 < (uint)lVar17));
      uVar15 = VectorShiftRight(CONCAT44(-iVar9,-iVar9),0x20);
      lVar16 = VectorShiftLeft(uVar15,0x20,0x40,0);
      iVar9 = (int)((ulonglong)lVar16 >> 0x20);
      uVar3 = (uint)lVar16;
      if (lVar16 < 0) goto LAB_08045d44;
      goto LAB_08045cdc;
    }
    uVar15 = __aeabi_ldivmod(uVar3,iVar4,uVar11,iVar10);
    iVar4 = (uint)uVar15 - (uint)lVar17;
    iVar7 = (int)((ulonglong)uVar15 >> 0x20) -
            ((int)((ulonglong)lVar17 >> 0x20) + (uint)((uint)uVar15 < (uint)lVar17));
    uVar15 = VectorShiftRight(CONCAT44(-iVar9,-iVar9),0x20);
    lVar16 = VectorShiftLeft(uVar15,0x20,0x40,0);
    iVar9 = (int)((ulonglong)lVar16 >> 0x20);
    uVar3 = (uint)lVar16;
    if (-1 < lVar16) goto LAB_08045b6c;
LAB_08045d44:
    uVar6 = uVar11 + 1;
    uVar1 = (uint)(0xfffffffe < uVar11);
LAB_080459ec:
    sVar18 = __aeabi_ldivmod(uVar6 + uVar3,iVar10 + uVar1 + iVar9 + (uint)CARRY4(uVar6,uVar3),uVar11
                             ,iVar10);
  }
LAB_08045a14:
  bg_layer->affine_edge_current_y = lVar17;
  *(int *)&bg_layer->affine_edge_width_y = iVar4;
  *(int *)((int)&bg_layer->affine_edge_width_y + 4) = iVar7;
  bg_layer->affine_edge_step_y = sVar18;
  bg_layer->affine_settings_dirty = '\0';
  return;
}


