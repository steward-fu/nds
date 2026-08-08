/*
 * Ghidra decompilation
 *
 * Function : render_scanline_window_inhibit_masks_triple
 * Address  : 080465f4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void render_scanline_window_inhibit_masks_triple
               (u32 (*layer_inhibit_masks) [8],u32 *color_effects_disable,u32 active_layers,
               u32 *w0_mask,u32 *w1_mask,u32 *w2_mask,u32 w0_inhibits,u32 w1_inhibits,
               u32 w2_inhibits,u32 w3_inhibits)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  u32 _inhibits;
  u32 _inhibits_1;
  u32 _inhibits_2;
  u32 _inhibits_3;
  u32 (*pauVar8) [8];
  uint *puVar9;
  uint uVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint local_58;
  int local_54;
  u32 w0_mask_or_w1_mask [8];
  
  puVar9 = w0_mask + 4;
  uVar6 = w0_mask[7];
  uVar7 = w0_inhibits & active_layers;
  uVar5 = w1_mask[7];
  uVar21 = *w0_mask | *w1_mask;
  uVar22 = w0_mask[1] | w1_mask[1];
  uVar19 = *puVar9 | w1_mask[4];
  uVar20 = w0_mask[5] | w1_mask[5];
  pauVar8 = layer_inhibit_masks;
  if ((w0_inhibits & 0x20) != 0) {
    if (color_effects_disable < puVar9 && w0_mask < color_effects_disable + 4) {
      *color_effects_disable = *color_effects_disable | *w0_mask;
      color_effects_disable[1] = color_effects_disable[1] | w0_mask[1];
      color_effects_disable[2] = color_effects_disable[2] | w0_mask[2];
      color_effects_disable[3] = color_effects_disable[3] | w0_mask[3];
      color_effects_disable[4] = color_effects_disable[4] | w0_mask[4];
      color_effects_disable[5] = color_effects_disable[5] | w0_mask[5];
      color_effects_disable[6] = color_effects_disable[6] | w0_mask[6];
      color_effects_disable[7] = color_effects_disable[7] | w0_mask[7];
    }
    else {
      uVar10 = ((int)color_effects_disable << 0x1d) >> 0x1f & 3;
      local_58 = uVar10;
      if (uVar10 == 0) {
        iVar12 = 8;
        iVar16 = 2;
        local_54 = 8;
        iVar13 = iVar12;
      }
      else {
        *color_effects_disable = *color_effects_disable | *w0_mask;
        if (uVar10 == 1) {
          iVar13 = 7;
        }
        else {
          color_effects_disable[1] = color_effects_disable[1] | w0_mask[1];
          if (uVar10 == 3) {
            iVar13 = 5;
            color_effects_disable[2] = color_effects_disable[2] | w0_mask[2];
          }
          else {
            iVar13 = 6;
            local_58 = 2;
          }
        }
        local_54 = 8 - uVar10;
        iVar16 = 1;
        iVar12 = 4;
      }
      puVar17 = color_effects_disable + uVar10;
      puVar11 = w0_mask + uVar10;
      uVar10 = puVar11[1];
      uVar15 = puVar11[2];
      uVar18 = puVar11[3];
      *puVar17 = *puVar17 | *puVar11;
      puVar17[1] = puVar17[1] | uVar10;
      puVar17[4] = puVar17[2] | uVar15;
      puVar17[5] = puVar17[3] | uVar18;
      if (iVar16 == 2) {
        uVar10 = puVar11[5];
        uVar15 = puVar11[6];
        uVar18 = puVar11[7];
        puVar17[4] = puVar17[4] | puVar11[4];
        puVar17[5] = puVar17[5] | uVar10;
        puVar17[8] = puVar17[6] | uVar15;
        puVar17[9] = puVar17[7] | uVar18;
      }
      iVar16 = iVar12 + local_58;
      if (local_54 != iVar12) {
        iVar14 = iVar16 + 1;
        color_effects_disable[iVar16] = color_effects_disable[iVar16] | w0_mask[iVar16];
        if (iVar13 - iVar12 != 1) {
          iVar16 = iVar16 + 2;
          color_effects_disable[iVar14] = color_effects_disable[iVar14] | w0_mask[iVar14];
          if (iVar13 - iVar12 != 2) {
            color_effects_disable[iVar16] = color_effects_disable[iVar16] | w0_mask[iVar16];
          }
        }
      }
    }
  }
  for (; uVar7 != 0; uVar7 = uVar7 >> 1) {
    if ((uVar7 & 1) != 0) {
      uVar15 = (*pauVar8)[1];
      uVar10 = (*pauVar8)[2];
      uVar18 = (*pauVar8)[3];
      (*pauVar8)[0] = (*pauVar8)[0] | *w0_mask;
      (*pauVar8)[1] = uVar15 | w0_mask[1];
      (*pauVar8)[2] = uVar10 | w0_mask[2];
      (*pauVar8)[3] = uVar18 | w0_mask[3];
      (*pauVar8)[4] = (*pauVar8)[4] | w0_mask[4];
      (*pauVar8)[5] = (*pauVar8)[5] | w0_mask[5];
      (*pauVar8)[6] = (*pauVar8)[6] | w0_mask[6];
      (*pauVar8)[7] = (*pauVar8)[7] | w0_mask[7];
    }
    pauVar8 = pauVar8 + 1;
  }
  uVar7 = active_layers & w1_inhibits;
  pauVar8 = layer_inhibit_masks;
  if ((w1_inhibits & 0x20) != 0) {
    if (w1_mask < color_effects_disable + 4 && color_effects_disable < w1_mask + 4 ||
        w0_mask < color_effects_disable + 4 && color_effects_disable < puVar9) {
      *color_effects_disable = *color_effects_disable | *w1_mask & ~*w0_mask;
      color_effects_disable[1] = color_effects_disable[1] | w1_mask[1] & ~w0_mask[1];
      color_effects_disable[2] = color_effects_disable[2] | w1_mask[2] & ~w0_mask[2];
      color_effects_disable[3] = color_effects_disable[3] | w1_mask[3] & ~w0_mask[3];
      color_effects_disable[4] = color_effects_disable[4] | w1_mask[4] & ~w0_mask[4];
      color_effects_disable[5] = color_effects_disable[5] | w1_mask[5] & ~w0_mask[5];
      color_effects_disable[6] = color_effects_disable[6] | w1_mask[6] & ~w0_mask[6];
      color_effects_disable[7] = color_effects_disable[7] | w1_mask[7] & ~w0_mask[7];
    }
    else {
      uVar15 = ((int)color_effects_disable << 0x1d) >> 0x1f & 3;
      uVar10 = uVar15;
      if (uVar15 == 0) {
        iVar16 = 8;
        iVar14 = 2;
        iVar13 = iVar16;
        iVar12 = iVar16;
      }
      else {
        *color_effects_disable = *color_effects_disable | *w1_mask & ~*w0_mask;
        if (uVar15 == 1) {
          iVar16 = 7;
        }
        else {
          color_effects_disable[1] = color_effects_disable[1] | w1_mask[1] & ~w0_mask[1];
          if (uVar15 == 3) {
            iVar16 = 5;
            color_effects_disable[2] = color_effects_disable[2] | w1_mask[2] & ~w0_mask[2];
          }
          else {
            iVar16 = 6;
            uVar10 = 2;
          }
        }
        iVar14 = 1;
        iVar13 = 4;
        iVar12 = 8 - uVar15;
      }
      puVar17 = w0_mask + uVar15;
      puVar11 = w1_mask + uVar15;
      puVar9 = color_effects_disable + uVar15;
      uVar15 = puVar11[1];
      uVar18 = puVar11[2];
      uVar1 = puVar11[3];
      uVar2 = puVar17[1];
      uVar3 = puVar17[2];
      uVar4 = puVar17[3];
      *puVar9 = *puVar9 | *puVar11 & ~*puVar17;
      puVar9[1] = puVar9[1] | uVar15 & ~uVar2;
      puVar9[4] = puVar9[2] | uVar18 & ~uVar3;
      puVar9[5] = puVar9[3] | uVar1 & ~uVar4;
      if (iVar14 == 2) {
        uVar2 = puVar17[5];
        uVar3 = puVar17[6];
        uVar4 = puVar17[7];
        uVar15 = puVar11[5];
        uVar18 = puVar11[6];
        uVar1 = puVar11[7];
        puVar9[4] = puVar9[4] | puVar11[4] & ~puVar17[4];
        puVar9[5] = puVar9[5] | uVar15 & ~uVar2;
        puVar9[8] = puVar9[6] | uVar18 & ~uVar3;
        puVar9[9] = puVar9[7] | uVar1 & ~uVar4;
      }
      iVar14 = uVar10 + iVar13;
      if (iVar13 != iVar12) {
        iVar12 = iVar14 + 1;
        color_effects_disable[iVar14] =
             color_effects_disable[iVar14] | w1_mask[iVar14] & ~w0_mask[iVar14];
        if (iVar16 - iVar13 != 1) {
          iVar14 = iVar14 + 2;
          color_effects_disable[iVar12] =
               color_effects_disable[iVar12] | w1_mask[iVar12] & ~w0_mask[iVar12];
          if (iVar16 - iVar13 != 2) {
            color_effects_disable[iVar14] =
                 color_effects_disable[iVar14] | w1_mask[iVar14] & ~w0_mask[iVar14];
          }
        }
      }
    }
  }
  for (; uVar7 != 0; uVar7 = uVar7 >> 1) {
    if ((uVar7 & 1) != 0) {
      uVar10 = (*pauVar8)[1];
      uVar18 = (*pauVar8)[2];
      uVar15 = (*pauVar8)[3];
      (*pauVar8)[0] = (*pauVar8)[0] | *w1_mask & ~*w0_mask;
      (*pauVar8)[1] = uVar10 | w1_mask[1] & ~w0_mask[1];
      (*pauVar8)[2] = uVar18 | w1_mask[2] & ~w0_mask[2];
      (*pauVar8)[3] = uVar15 | w1_mask[3] & ~w0_mask[3];
      (*pauVar8)[4] = (*pauVar8)[4] | w1_mask[4] & ~w0_mask[4];
      (*pauVar8)[5] = (*pauVar8)[5] | w1_mask[5] & ~w0_mask[5];
      (*pauVar8)[6] = (*pauVar8)[6] | w1_mask[6] & ~w0_mask[6];
      (*pauVar8)[7] = (*pauVar8)[7] | w1_mask[7] & ~w0_mask[7];
    }
    pauVar8 = pauVar8 + 1;
  }
  uVar7 = active_layers & w2_inhibits;
  if ((w2_inhibits & 0x20) != 0) {
    puVar9 = color_effects_disable + 4;
    if (w2_mask < puVar9 && color_effects_disable < w2_mask + 4) {
      *color_effects_disable = *color_effects_disable | *w2_mask & ~uVar21;
      color_effects_disable[1] = color_effects_disable[1] | w2_mask[1] & ~uVar22;
      color_effects_disable[2] = color_effects_disable[2] | w2_mask[2] & ~w0_mask_or_w1_mask[2];
      color_effects_disable[3] = color_effects_disable[3] | w2_mask[3] & ~w0_mask_or_w1_mask[3];
      color_effects_disable[4] = color_effects_disable[4] | w2_mask[4] & ~uVar19;
      color_effects_disable[5] = color_effects_disable[5] | w2_mask[5] & ~uVar20;
      color_effects_disable[6] = color_effects_disable[6] | w2_mask[6] & ~w0_mask_or_w1_mask[6];
      color_effects_disable[7] = color_effects_disable[7] | w2_mask[7] & ~w0_mask_or_w1_mask[7];
    }
    else {
      uVar10 = w2_mask[1];
      uVar15 = w2_mask[2];
      uVar18 = w2_mask[3];
      *color_effects_disable = *w2_mask & ~uVar21 | *color_effects_disable;
      color_effects_disable[1] = uVar10 & ~uVar22 | color_effects_disable[1];
      color_effects_disable[4] = uVar15 & ~w0_mask_or_w1_mask[2] | color_effects_disable[2];
      color_effects_disable[5] = uVar18 & ~w0_mask_or_w1_mask[3] | color_effects_disable[3];
      uVar10 = w2_mask[5];
      uVar15 = w2_mask[6];
      uVar18 = w2_mask[7];
      *puVar9 = w2_mask[4] & ~uVar19 | *puVar9;
      color_effects_disable[5] = uVar10 & ~uVar20 | color_effects_disable[5];
      color_effects_disable[8] = uVar15 & ~w0_mask_or_w1_mask[6] | color_effects_disable[6];
      color_effects_disable[9] = uVar18 & ~w0_mask_or_w1_mask[7] | color_effects_disable[7];
    }
  }
  if (uVar7 != 0) {
    pauVar8 = layer_inhibit_masks;
    do {
      if ((uVar7 & 1) != 0) {
        uVar10 = (*pauVar8)[1];
        (*pauVar8)[0] = (*pauVar8)[0] | *w2_mask & ~uVar21;
        (*pauVar8)[1] = uVar10 | w2_mask[1] & ~uVar22;
        (*pauVar8)[2] = (*pauVar8)[2] | w2_mask[2] & ~w0_mask_or_w1_mask[2];
        (*pauVar8)[3] = (*pauVar8)[3] | w2_mask[3] & ~w0_mask_or_w1_mask[3];
        (*pauVar8)[4] = (*pauVar8)[4] | w2_mask[4] & ~uVar19;
        (*pauVar8)[5] = (*pauVar8)[5] | w2_mask[5] & ~uVar20;
        (*pauVar8)[6] = (*pauVar8)[6] | w2_mask[6] & ~w0_mask_or_w1_mask[6];
        (*pauVar8)[7] = (*pauVar8)[7] | w2_mask[7] & ~w0_mask_or_w1_mask[7];
      }
      uVar7 = uVar7 >> 1;
      pauVar8 = pauVar8 + 1;
    } while (uVar7 != 0);
  }
  uVar7 = active_layers & w3_inhibits;
  if ((w3_inhibits & 0x20) != 0) {
    puVar9 = color_effects_disable + 4;
    if (w2_mask < puVar9 && color_effects_disable < w2_mask + 4) {
      *color_effects_disable = *color_effects_disable | ~(*w2_mask | uVar21);
      color_effects_disable[1] = color_effects_disable[1] | ~(uVar22 | w2_mask[1]);
      color_effects_disable[2] = color_effects_disable[2] | ~(w2_mask[2] | w0_mask_or_w1_mask[2]);
      color_effects_disable[3] = color_effects_disable[3] | ~(w2_mask[3] | w0_mask_or_w1_mask[3]);
      color_effects_disable[4] = color_effects_disable[4] | ~(w2_mask[4] | uVar19);
      color_effects_disable[5] = color_effects_disable[5] | ~(w2_mask[5] | uVar20);
      color_effects_disable[6] = color_effects_disable[6] | ~(w2_mask[6] | w0_mask_or_w1_mask[6]);
      color_effects_disable[7] = color_effects_disable[7] | ~(w0_mask_or_w1_mask[7] | w2_mask[7]);
    }
    else {
      uVar10 = w2_mask[1];
      uVar15 = w2_mask[2];
      uVar18 = w2_mask[3];
      *color_effects_disable = *color_effects_disable | ~(*w2_mask | uVar21);
      color_effects_disable[1] = color_effects_disable[1] | ~(uVar10 | uVar22);
      color_effects_disable[4] = color_effects_disable[2] | ~(uVar15 | w0_mask_or_w1_mask[2]);
      color_effects_disable[5] = color_effects_disable[3] | ~(uVar18 | w0_mask_or_w1_mask[3]);
      uVar10 = w2_mask[5];
      uVar15 = w2_mask[6];
      uVar18 = w2_mask[7];
      *puVar9 = *puVar9 | ~(w2_mask[4] | uVar19);
      color_effects_disable[5] = color_effects_disable[5] | ~(uVar10 | uVar20);
      color_effects_disable[8] = color_effects_disable[6] | ~(uVar15 | w0_mask_or_w1_mask[6]);
      color_effects_disable[9] = color_effects_disable[7] | ~(uVar18 | w0_mask_or_w1_mask[7]);
    }
  }
  for (; uVar7 != 0; uVar7 = uVar7 >> 1) {
    if ((uVar7 & 1) != 0) {
      uVar15 = (*layer_inhibit_masks)[1];
      uVar10 = (*layer_inhibit_masks)[2];
      (*layer_inhibit_masks)[0] = (*layer_inhibit_masks)[0] | ~(uVar21 | *w2_mask);
      (*layer_inhibit_masks)[1] = uVar15 | ~(uVar22 | w2_mask[1]);
      (*layer_inhibit_masks)[2] = uVar10 | ~(w0_mask_or_w1_mask[2] | w2_mask[2]);
      (*layer_inhibit_masks)[3] = (*layer_inhibit_masks)[3] | ~(w0_mask_or_w1_mask[3] | w2_mask[3]);
      (*layer_inhibit_masks)[4] = (*layer_inhibit_masks)[4] | ~(uVar19 | w2_mask[4]);
      (*layer_inhibit_masks)[5] = (*layer_inhibit_masks)[5] | ~(uVar20 | w2_mask[5]);
      (*layer_inhibit_masks)[6] = (*layer_inhibit_masks)[6] | ~(w0_mask_or_w1_mask[6] | w2_mask[6]);
      (*layer_inhibit_masks)[7] = (*layer_inhibit_masks)[7] | ~(w0_mask_or_w1_mask[7] | w2_mask[7]);
    }
    layer_inhibit_masks = layer_inhibit_masks + 1;
  }
  if ((uVar6 | uVar5) == __stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


