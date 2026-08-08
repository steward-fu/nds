/*
 * Ghidra decompilation
 *
 * Function : render_scanline_update_affine_variables
 * Address  : 08044ecc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void render_scanline_update_affine_variables(video_2d_bg_layer_struct *bg_layer)

{
  short sVar1;
  u32 uVar2;
  uint uVar3;
  int iVar4;
  s32 base_right;
  uint uVar5;
  int iVar6;
  s32 base_left;
  s32 base_left_1;
  int iVar7;
  u32 wrap_width;
  s32 base_right_1;
  s32 dyp;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  s32 dxp;
  bool bVar13;
  bool bVar14;
  undefined8 uVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  s64 sVar19;
  s64 sVar20;
  s64 edge_base;
  uint local_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  
  dxp = (s32)bg_layer->affine_dx;
  iVar4 = (int)bg_layer->affine_dmx;
  iVar6 = bg_layer->affine_current_x;
  iVar7 = (uint)bg_layer->affine_wrap_mask * 0x800 + 0x7ff;
  if (dxp == 0) {
    if (iVar4 == 0) {
      bVar13 = iVar6 < 0;
      bVar14 = bVar13;
      if (!bVar13) {
        bVar14 = iVar7 - iVar6 < 0;
      }
      if (bVar14 == (!bVar13 && SBORROW4(iVar7,iVar6))) {
        local_38 = 0;
        iStack_34 = 0x100;
        sVar19 = 0;
        lVar18 = 0;
      }
      else {
        lVar18 = -1;
        iStack_34 = 0;
        local_38 = 0;
        sVar19 = 0;
      }
    }
    else {
      if (iVar4 < 1) {
        iVar11 = -iVar6;
        iVar8 = (iVar7 - iVar6) + -1;
      }
      else {
        iVar8 = -iVar6;
        iVar11 = (iVar7 - iVar6) + -1;
      }
      iVar6 = __aeabi_idiv(iVar11,iVar4);
      iVar4 = __aeabi_idiv(iVar8,iVar4);
      sVar19 = 0x10000000000;
      lVar18 = (ulonglong)(uint)(iVar6 * -0x100) << 0x20;
      local_38 = 0;
      iStack_34 = iVar4 * -0x100 + iVar6 * 0x100;
    }
  }
  else {
    if (dxp < 1) {
      iVar8 = -iVar6;
      base_left = (iVar7 + dxp + 1) - iVar6;
    }
    else {
      iVar8 = iVar7 - iVar6;
      base_left = (dxp + -1) - iVar6;
    }
    uVar10 = (uint)bg_layer->affine_dx;
    iVar6 = (int)uVar10 >> 0x1f;
    uVar15 = VectorShiftRight(CONCAT44(base_left,base_left),0x20);
    lVar18 = VectorShiftLeft(uVar15,0x20,0x40,0);
    iVar11 = (int)((ulonglong)lVar18 >> 0x20);
    uVar3 = (uint)lVar18;
    if (lVar18 < 0) {
      if (-1 < iVar6) {
        lVar18 = __aeabi_ldivmod(uVar3,iVar11,uVar10,iVar6);
        goto LAB_08044fb0;
      }
      lVar18 = __aeabi_ldivmod(uVar3 + uVar10 + 1,
                               iVar11 + iVar6 + (uint)(0xfffffffe < uVar10) +
                               (uint)CARRY4(uVar3,uVar10 + 1),uVar10,iVar6);
LAB_0804541c:
      iVar11 = (int)((ulonglong)lVar18 >> 0x20);
      uVar3 = (uint)lVar18;
      uVar15 = VectorShiftRight(CONCAT44(iVar8,iVar8),0x20);
      lVar17 = VectorShiftLeft(uVar15,0x20,0x40,0);
      iVar8 = (int)((ulonglong)lVar17 >> 0x20);
      uVar16 = (uint)lVar17;
      if (lVar17 < 0) {
        uVar15 = __aeabi_ldivmod(uVar10 + 1 + uVar16,
                                 iVar6 + (uint)(0xfffffffe < uVar10) + iVar8 +
                                 (uint)CARRY4(uVar10 + 1,uVar16),uVar10,iVar6);
        local_38 = (uint)uVar15 - uVar3;
        iStack_34 = (int)((ulonglong)uVar15 >> 0x20) - (iVar11 + (uint)((uint)uVar15 < uVar3));
        uVar15 = VectorShiftRight(CONCAT44(-iVar4,-iVar4),0x20);
        lVar17 = VectorShiftLeft(uVar15,0x20,0x40,0);
        iVar4 = (int)((ulonglong)lVar17 >> 0x20);
        uVar3 = (uint)lVar17;
        if (-1 < lVar17) {
LAB_08045540:
          if (-1 < iVar6) goto LAB_08045028;
          goto LAB_08045474;
        }
      }
      else {
        uVar15 = __aeabi_ldivmod(uVar16,iVar8,uVar10,iVar6);
        local_38 = (uint)uVar15 - uVar3;
        iStack_34 = (int)((ulonglong)uVar15 >> 0x20) - (iVar11 + (uint)((uint)uVar15 < uVar3));
        uVar15 = VectorShiftRight(CONCAT44(-iVar4,-iVar4),0x20);
        lVar17 = VectorShiftLeft(uVar15,0x20,0x40,0);
        iVar4 = (int)((ulonglong)lVar17 >> 0x20);
        uVar3 = (uint)lVar17;
        if (-1 < lVar17) {
LAB_08045474:
          sVar19 = __aeabi_ldivmod(uVar3,iVar4,uVar10,iVar6);
          goto LAB_08045058;
        }
      }
      uVar5 = uVar10 + 1;
      uVar16 = (uint)(0xfffffffe < uVar10);
    }
    else {
      if (iVar6 < 0) {
        lVar18 = __aeabi_ldivmod(uVar3,iVar11,uVar10,iVar6);
        goto LAB_0804541c;
      }
      lVar18 = __aeabi_ldivmod(uVar3 + (uVar10 - 1),
                               iVar11 + (iVar6 - (uint)(uVar10 == 0)) +
                               (uint)CARRY4(uVar3,uVar10 - 1),uVar10,iVar6);
LAB_08044fb0:
      iVar11 = (int)((ulonglong)lVar18 >> 0x20);
      uVar3 = (uint)lVar18;
      uVar15 = VectorShiftRight(CONCAT44(iVar8,iVar8),0x20);
      lVar17 = VectorShiftLeft(uVar15,0x20,0x40,0);
      iVar8 = (int)((ulonglong)lVar17 >> 0x20);
      uVar16 = (uint)lVar17;
      if (lVar17 < 0) {
        uVar15 = __aeabi_ldivmod(uVar16,iVar8,uVar10,iVar6);
        local_38 = (uint)uVar15 - uVar3;
        iStack_34 = (int)((ulonglong)uVar15 >> 0x20) - (iVar11 + (uint)((uint)uVar15 < uVar3));
        uVar15 = VectorShiftRight(CONCAT44(-iVar4,-iVar4),0x20);
        lVar17 = VectorShiftLeft(uVar15,0x20,0x40,0);
        iVar4 = (int)((ulonglong)lVar17 >> 0x20);
        uVar3 = (uint)lVar17;
        if (lVar17 < 0) goto LAB_08045474;
        goto LAB_08045540;
      }
      uVar15 = __aeabi_ldivmod((uVar10 - 1) + uVar16,
                               (iVar6 - (uint)(uVar10 == 0)) + iVar8 +
                               (uint)CARRY4(uVar10 - 1,uVar16),uVar10,iVar6);
      local_38 = (uint)uVar15 - uVar3;
      iStack_34 = (int)((ulonglong)uVar15 >> 0x20) - (iVar11 + (uint)((uint)uVar15 < uVar3));
      uVar15 = VectorShiftRight(CONCAT44(-iVar4,-iVar4),0x20);
      lVar17 = VectorShiftLeft(uVar15,0x20,0x40,0);
      iVar4 = (int)((ulonglong)lVar17 >> 0x20);
      uVar3 = (uint)lVar17;
      if (lVar17 < 0) goto LAB_08045474;
LAB_08045028:
      uVar5 = uVar10 - 1;
      uVar16 = -(uint)(uVar10 == 0);
    }
    sVar19 = __aeabi_ldivmod(uVar5 + uVar3,iVar6 + uVar16 + iVar4 + (uint)CARRY4(uVar5,uVar3),uVar10
                             ,iVar6);
  }
LAB_08045058:
  sVar1 = bg_layer->affine_dy;
  iVar4 = (int)sVar1;
  bg_layer->affine_edge_current_x = lVar18;
  *(uint *)&bg_layer->affine_edge_width_x = local_38;
  *(int *)((int)&bg_layer->affine_edge_width_x + 4) = iStack_34;
  iVar8 = (int)bg_layer->affine_dmy;
  bg_layer->affine_edge_step_x = sVar19;
  iVar6 = bg_layer->affine_current_y;
  if (iVar4 == 0) {
    if (iVar8 == 0) {
      bVar13 = iVar6 < 0;
      bVar14 = bVar13;
      if (!bVar13) {
        bVar14 = iVar7 - iVar6 < 0;
      }
      if (bVar14 == (!bVar13 && SBORROW4(iVar7,iVar6))) {
        uVar9 = 0;
        iVar7 = 0x100;
        iVar12 = 0;
        iVar6 = 0;
      }
      else {
        iVar7 = 0;
        uVar9 = 0xffffffff;
        iVar12 = -1;
        iVar6 = iVar7;
      }
    }
    else {
      if (iVar8 < 1) {
        iVar12 = -iVar6;
        iVar11 = (iVar7 - iVar6) + -1;
      }
      else {
        iVar11 = -iVar6;
        iVar12 = (iVar7 - iVar6) + -1;
      }
      iVar6 = __aeabi_idiv(iVar12,iVar8);
      iVar12 = (int)((longlong)iVar6 * -0x100);
      uVar9 = 0;
      iVar7 = __aeabi_idiv(iVar11,iVar8,iVar12,(int)((ulonglong)((longlong)iVar6 * -0x100) >> 0x20))
      ;
      iVar6 = 0x100;
      iVar7 = iVar7 * -0x100 - iVar12;
    }
    *(undefined4 *)&bg_layer->affine_edge_current_y = uVar9;
    *(int *)((int)&bg_layer->affine_edge_current_y + 4) = iVar12;
    *(undefined4 *)&bg_layer->affine_edge_width_y = 0;
    *(int *)((int)&bg_layer->affine_edge_width_y + 4) = iVar7;
    *(undefined4 *)&bg_layer->affine_edge_step_y = 0;
    *(int *)((int)&bg_layer->affine_edge_step_y + 4) = iVar6;
    if (dxp < 0) {
      dxp = -dxp;
    }
    if (dxp == 0) goto LAB_0804526c;
LAB_08045300:
    uVar2 = __aeabi_uldivmod(dxp + 0x7fffffff,
                             ((int)(dxp - 1U) >> 0x1f) + (uint)(0x7fffffff < dxp - 1U),dxp,
                             dxp >> 0x1f);
    bg_layer->inv_dxp = uVar2;
    if (iVar4 == 0) goto LAB_0804526c;
  }
  else {
    if (iVar4 < 1) {
      base_right_1 = -iVar6;
      base_left_1 = (iVar7 + iVar4 + 1) - iVar6;
    }
    else {
      base_right_1 = iVar7 - iVar6;
      base_left_1 = (iVar4 + -1) - iVar6;
    }
    uVar10 = (uint)sVar1;
    iVar6 = (int)uVar10 >> 0x1f;
    uVar15 = VectorShiftRight(CONCAT44(base_left_1,base_left_1),0x20);
    lVar18 = VectorShiftLeft(uVar15,0x20,0x40,0);
    iVar7 = (int)((ulonglong)lVar18 >> 0x20);
    uVar3 = (uint)lVar18;
    if (lVar18 < 0) {
      if (-1 < iVar6) {
        sVar19 = __aeabi_ldivmod(uVar3,iVar7,uVar10,iVar6);
        goto LAB_08045174;
      }
      sVar19 = __aeabi_ldivmod(uVar10 + 1 + uVar3,
                               iVar6 + (uint)(0xfffffffe < uVar10) + iVar7 +
                               (uint)CARRY4(uVar10 + 1,uVar3),uVar10,iVar6);
LAB_080453a0:
      iStack_34 = (int)((ulonglong)sVar19 >> 0x20);
      local_38 = (uint)sVar19;
      uVar15 = VectorShiftRight(CONCAT44(base_right_1,base_right_1),0x20);
      lVar18 = VectorShiftLeft(uVar15,0x20,0x40,0);
      iVar7 = (int)((ulonglong)lVar18 >> 0x20);
      uVar3 = (uint)lVar18;
      if (lVar18 < 0) {
        uVar15 = __aeabi_ldivmod(uVar10 + 1 + uVar3,
                                 iVar6 + (uint)(0xfffffffe < uVar10) + iVar7 +
                                 (uint)CARRY4(uVar10 + 1,uVar3),uVar10,iVar6);
        local_30 = (uint)uVar15 - local_38;
        iStack_2c = (int)((ulonglong)uVar15 >> 0x20) - (iStack_34 + (uint)((uint)uVar15 < local_38))
        ;
        uVar15 = VectorShiftRight(CONCAT44(-iVar8,-iVar8),0x20);
        lVar18 = VectorShiftLeft(uVar15,0x20,0x40,0);
        iVar7 = (int)((ulonglong)lVar18 >> 0x20);
        uVar3 = (uint)lVar18;
        if (-1 < lVar18) {
LAB_0804558c:
          if (-1 < iVar6) goto LAB_080451ec;
          goto LAB_080453f8;
        }
LAB_080455f8:
        uVar5 = uVar10 + 1;
        uVar16 = (uint)(0xfffffffe < uVar10);
        goto LAB_080451f4;
      }
      uVar15 = __aeabi_ldivmod(uVar3,iVar7,uVar10,iVar6);
      local_30 = (uint)uVar15 - local_38;
      iStack_2c = (int)((ulonglong)uVar15 >> 0x20) - (iStack_34 + (uint)((uint)uVar15 < local_38));
      uVar15 = VectorShiftRight(CONCAT44(-iVar8,-iVar8),0x20);
      lVar18 = VectorShiftLeft(uVar15,0x20,0x40,0);
      iVar7 = (int)((ulonglong)lVar18 >> 0x20);
      uVar3 = (uint)lVar18;
      if (lVar18 < 0) goto LAB_080455f8;
LAB_080453f8:
      sVar20 = __aeabi_ldivmod(uVar3,iVar7,uVar10,iVar6);
    }
    else {
      if (iVar6 < 0) {
        sVar19 = __aeabi_ldivmod(uVar3,iVar7,uVar10,iVar6);
        goto LAB_080453a0;
      }
      sVar19 = __aeabi_ldivmod((uVar10 - 1) + uVar3,
                               (iVar6 - (uint)(uVar10 == 0)) + iVar7 +
                               (uint)CARRY4(uVar10 - 1,uVar3),uVar10,iVar6);
LAB_08045174:
      iStack_34 = (int)((ulonglong)sVar19 >> 0x20);
      local_38 = (uint)sVar19;
      uVar15 = VectorShiftRight(CONCAT44(base_right_1,base_right_1),0x20);
      lVar18 = VectorShiftLeft(uVar15,0x20,0x40,0);
      iVar7 = (int)((ulonglong)lVar18 >> 0x20);
      uVar3 = (uint)lVar18;
      if (lVar18 < 0) {
        uVar15 = __aeabi_ldivmod(uVar3,iVar7,uVar10,iVar6);
        local_30 = (uint)uVar15 - local_38;
        iStack_2c = (int)((ulonglong)uVar15 >> 0x20) - (iStack_34 + (uint)((uint)uVar15 < local_38))
        ;
        uVar15 = VectorShiftRight(CONCAT44(-iVar8,-iVar8),0x20);
        lVar18 = VectorShiftLeft(uVar15,0x20,0x40,0);
        iVar7 = (int)((ulonglong)lVar18 >> 0x20);
        uVar3 = (uint)lVar18;
        if (lVar18 < 0) goto LAB_080453f8;
        goto LAB_0804558c;
      }
      uVar15 = __aeabi_ldivmod((uVar10 - 1) + uVar3,
                               (iVar6 - (uint)(uVar10 == 0)) + iVar7 +
                               (uint)CARRY4(uVar10 - 1,uVar3),uVar10,iVar6);
      local_30 = (uint)uVar15 - local_38;
      iStack_2c = (int)((ulonglong)uVar15 >> 0x20) - (iStack_34 + (uint)((uint)uVar15 < local_38));
      uVar15 = VectorShiftRight(CONCAT44(-iVar8,-iVar8),0x20);
      lVar18 = VectorShiftLeft(uVar15,0x20,0x40,0);
      iVar7 = (int)((ulonglong)lVar18 >> 0x20);
      uVar3 = (uint)lVar18;
      if (lVar18 < 0) goto LAB_080453f8;
LAB_080451ec:
      uVar5 = uVar10 - 1;
      uVar16 = -(uint)(uVar10 == 0);
LAB_080451f4:
      sVar20 = __aeabi_ldivmod(uVar5 + uVar3,iVar6 + uVar16 + iVar7 + (uint)CARRY4(uVar5,uVar3),
                               uVar10,iVar6);
    }
    bg_layer->affine_edge_step_y = sVar20;
    bg_layer->affine_edge_current_y = sVar19;
    if (dxp < 0) {
      dxp = -dxp;
    }
    *(int *)&bg_layer->affine_edge_width_y = local_30;
    *(int *)((int)&bg_layer->affine_edge_width_y + 4) = iStack_2c;
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    if (dxp != 0) goto LAB_08045300;
  }
  uVar2 = __aeabi_uldivmod(iVar4 + 0x7fffffff,
                           ((int)(iVar4 - 1U) >> 0x1f) + (uint)(0x7fffffff < iVar4 - 1U),iVar4,
                           iVar4 >> 0x1f);
  bg_layer->inv_dyp = uVar2;
LAB_0804526c:
  bg_layer->affine_settings_dirty = '\0';
  return;
}


