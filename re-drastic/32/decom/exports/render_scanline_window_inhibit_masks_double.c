/*
 * Ghidra decompilation
 *
 * Function : render_scanline_window_inhibit_masks_double
 * Address  : 080470d0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void render_scanline_window_inhibit_masks_double
               (u32 (*layer_inhibit_masks) [8],u32 *color_effects_disable,u32 active_layers,
               u32 *w0_mask,u32 *w1_mask,u32 w0_inhibits,u32 w1_inhibits,u32 w2_inhibits)

{
  u32 (*pauVar1) [8];
  u32 _inhibits_2;
  u32 _inhibits_1;
  uint uVar2;
  u32 _inhibits;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  uint *puVar15;
  uint uVar16;
  
  uVar2 = w0_inhibits & active_layers;
  pauVar1 = layer_inhibit_masks;
  if ((w0_inhibits & 0x20) != 0) {
    if (color_effects_disable < w0_mask + 4 && w0_mask < color_effects_disable + 4) {
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
      uVar13 = ((int)color_effects_disable << 0x1d) >> 0x1f & 3;
      uVar4 = uVar13;
      if (uVar13 == 0) {
        iVar3 = 8;
        iVar10 = 2;
        iVar6 = iVar3;
        iVar7 = iVar3;
      }
      else {
        *color_effects_disable = *color_effects_disable | *w0_mask;
        if (uVar13 == 1) {
          iVar6 = 7;
        }
        else {
          color_effects_disable[1] = color_effects_disable[1] | w0_mask[1];
          if (uVar13 == 3) {
            iVar6 = 5;
            color_effects_disable[2] = color_effects_disable[2] | w0_mask[2];
          }
          else {
            iVar6 = 6;
            uVar4 = 2;
          }
        }
        iVar3 = 4;
        iVar10 = 1;
        iVar7 = 8 - uVar13;
      }
      puVar11 = color_effects_disable + uVar13;
      puVar14 = w0_mask + uVar13;
      uVar13 = puVar14[1];
      uVar9 = puVar14[2];
      uVar12 = puVar14[3];
      *puVar11 = *puVar11 | *puVar14;
      puVar11[1] = puVar11[1] | uVar13;
      puVar11[4] = puVar11[2] | uVar9;
      puVar11[5] = puVar11[3] | uVar12;
      if (iVar10 == 2) {
        uVar13 = puVar14[5];
        uVar9 = puVar14[6];
        uVar12 = puVar14[7];
        puVar11[4] = puVar11[4] | puVar14[4];
        puVar11[5] = puVar11[5] | uVar13;
        puVar11[8] = puVar11[6] | uVar9;
        puVar11[9] = puVar11[7] | uVar12;
      }
      iVar10 = iVar3 + uVar4;
      if (iVar3 != iVar7) {
        iVar7 = iVar10 + 1;
        color_effects_disable[iVar10] = color_effects_disable[iVar10] | w0_mask[iVar10];
        if (iVar6 - iVar3 != 1) {
          iVar10 = iVar10 + 2;
          color_effects_disable[iVar7] = color_effects_disable[iVar7] | w0_mask[iVar7];
          if (iVar6 - iVar3 != 2) {
            color_effects_disable[iVar10] = color_effects_disable[iVar10] | w0_mask[iVar10];
          }
        }
      }
    }
  }
  for (; uVar2 != 0; uVar2 = uVar2 >> 1) {
    if ((uVar2 & 1) != 0) {
      uVar4 = (*pauVar1)[1];
      uVar12 = (*pauVar1)[2];
      uVar9 = (*pauVar1)[3];
      uVar13 = (*pauVar1)[4];
      (*pauVar1)[0] = (*pauVar1)[0] | *w0_mask;
      (*pauVar1)[1] = uVar4 | w0_mask[1];
      (*pauVar1)[2] = uVar12 | w0_mask[2];
      (*pauVar1)[3] = uVar9 | w0_mask[3];
      (*pauVar1)[4] = uVar13 | w0_mask[4];
      (*pauVar1)[5] = (*pauVar1)[5] | w0_mask[5];
      (*pauVar1)[6] = (*pauVar1)[6] | w0_mask[6];
      (*pauVar1)[7] = (*pauVar1)[7] | w0_mask[7];
    }
    pauVar1 = pauVar1 + 1;
  }
  uVar2 = w1_inhibits & active_layers;
  pauVar1 = layer_inhibit_masks;
  if ((w1_inhibits & 0x20) != 0) {
    if (w1_mask < color_effects_disable + 4 && color_effects_disable < w1_mask + 4 ||
        w0_mask < color_effects_disable + 4 && color_effects_disable < w0_mask + 4) {
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
      uVar13 = ((int)color_effects_disable << 0x1d) >> 0x1f & 3;
      uVar4 = uVar13;
      if (uVar13 == 0) {
        iVar3 = 8;
        iVar10 = 2;
        iVar6 = iVar3;
        iVar7 = iVar3;
      }
      else {
        *color_effects_disable = *color_effects_disable | *w1_mask & ~*w0_mask;
        if (uVar13 == 1) {
          iVar3 = 7;
        }
        else {
          color_effects_disable[1] = color_effects_disable[1] | w1_mask[1] & ~w0_mask[1];
          if (uVar13 == 3) {
            iVar3 = 5;
            color_effects_disable[2] = color_effects_disable[2] | w1_mask[2] & ~w0_mask[2];
          }
          else {
            iVar3 = 6;
            uVar4 = 2;
          }
        }
        iVar10 = 1;
        iVar6 = 4;
        iVar7 = 8 - uVar13;
      }
      puVar15 = w1_mask + uVar13;
      puVar14 = w0_mask + uVar13;
      puVar11 = color_effects_disable + uVar13;
      uVar13 = puVar15[1];
      uVar9 = puVar15[2];
      uVar12 = puVar15[3];
      uVar5 = puVar14[1];
      uVar8 = puVar14[2];
      uVar16 = puVar14[3];
      *puVar11 = *puVar11 | *puVar15 & ~*puVar14;
      puVar11[1] = puVar11[1] | uVar13 & ~uVar5;
      puVar11[4] = puVar11[2] | uVar9 & ~uVar8;
      puVar11[5] = puVar11[3] | uVar12 & ~uVar16;
      if (iVar10 == 2) {
        uVar5 = puVar14[5];
        uVar8 = puVar14[6];
        uVar16 = puVar14[7];
        uVar13 = puVar15[5];
        uVar9 = puVar15[6];
        uVar12 = puVar15[7];
        puVar11[4] = puVar11[4] | puVar15[4] & ~puVar14[4];
        puVar11[5] = puVar11[5] | uVar13 & ~uVar5;
        puVar11[8] = puVar11[6] | uVar9 & ~uVar8;
        puVar11[9] = puVar11[7] | uVar12 & ~uVar16;
      }
      iVar10 = uVar4 + iVar6;
      if (iVar6 != iVar7) {
        iVar7 = iVar10 + 1;
        color_effects_disable[iVar10] =
             color_effects_disable[iVar10] | w1_mask[iVar10] & ~w0_mask[iVar10];
        if (iVar3 - iVar6 != 1) {
          iVar10 = iVar10 + 2;
          color_effects_disable[iVar7] =
               color_effects_disable[iVar7] | w1_mask[iVar7] & ~w0_mask[iVar7];
          if (iVar3 - iVar6 != 2) {
            color_effects_disable[iVar10] =
                 color_effects_disable[iVar10] | w1_mask[iVar10] & ~w0_mask[iVar10];
          }
        }
      }
    }
  }
  for (; uVar2 != 0; uVar2 = uVar2 >> 1) {
    if ((uVar2 & 1) != 0) {
      uVar12 = (*pauVar1)[1];
      uVar9 = (*pauVar1)[2];
      uVar13 = (*pauVar1)[3];
      uVar4 = (*pauVar1)[4];
      (*pauVar1)[0] = (*pauVar1)[0] | *w1_mask & ~*w0_mask;
      (*pauVar1)[1] = uVar12 | w1_mask[1] & ~w0_mask[1];
      (*pauVar1)[2] = uVar9 | w1_mask[2] & ~w0_mask[2];
      (*pauVar1)[3] = uVar13 | w1_mask[3] & ~w0_mask[3];
      (*pauVar1)[4] = uVar4 | w1_mask[4] & ~w0_mask[4];
      (*pauVar1)[5] = (*pauVar1)[5] | w1_mask[5] & ~w0_mask[5];
      (*pauVar1)[6] = (*pauVar1)[6] | w1_mask[6] & ~w0_mask[6];
      (*pauVar1)[7] = (*pauVar1)[7] | w1_mask[7] & ~w0_mask[7];
    }
    pauVar1 = pauVar1 + 1;
  }
  uVar2 = active_layers & w2_inhibits;
  if ((w2_inhibits & 0x20) != 0) {
    if (w1_mask < color_effects_disable + 4 && color_effects_disable < w1_mask + 4 ||
        w0_mask < color_effects_disable + 4 && color_effects_disable < w0_mask + 4) {
      *color_effects_disable = *color_effects_disable | ~(*w0_mask | *w1_mask);
      color_effects_disable[1] = color_effects_disable[1] | ~(w1_mask[1] | w0_mask[1]);
      color_effects_disable[2] = color_effects_disable[2] | ~(w0_mask[2] | w1_mask[2]);
      color_effects_disable[3] = color_effects_disable[3] | ~(w0_mask[3] | w1_mask[3]);
      color_effects_disable[4] = color_effects_disable[4] | ~(w0_mask[4] | w1_mask[4]);
      color_effects_disable[5] = color_effects_disable[5] | ~(w0_mask[5] | w1_mask[5]);
      color_effects_disable[6] = color_effects_disable[6] | ~(w0_mask[6] | w1_mask[6]);
      color_effects_disable[7] = color_effects_disable[7] | ~(w1_mask[7] | w0_mask[7]);
    }
    else {
      uVar13 = ((int)color_effects_disable << 0x1d) >> 0x1f & 3;
      uVar4 = uVar13;
      if (uVar13 == 0) {
        iVar3 = 8;
        iVar10 = 2;
        iVar6 = iVar3;
        iVar7 = iVar3;
      }
      else {
        *color_effects_disable = *color_effects_disable | ~(*w0_mask | *w1_mask);
        if (uVar13 == 1) {
          iVar6 = 7;
        }
        else {
          color_effects_disable[1] = color_effects_disable[1] | ~(w0_mask[1] | w1_mask[1]);
          if (uVar13 == 3) {
            iVar6 = 5;
            color_effects_disable[2] = color_effects_disable[2] | ~(w1_mask[2] | w0_mask[2]);
          }
          else {
            iVar6 = 6;
            uVar4 = 2;
          }
        }
        iVar10 = 1;
        iVar3 = 4;
        iVar7 = 8 - uVar13;
      }
      puVar14 = w1_mask + uVar13;
      puVar11 = w0_mask + uVar13;
      puVar15 = color_effects_disable + uVar13;
      uVar5 = puVar11[1];
      uVar8 = puVar11[2];
      uVar16 = puVar11[3];
      uVar13 = puVar14[1];
      uVar9 = puVar14[2];
      uVar12 = puVar14[3];
      *puVar15 = *puVar15 | ~(*puVar11 | *puVar14);
      puVar15[1] = puVar15[1] | ~(uVar5 | uVar13);
      puVar15[4] = puVar15[2] | ~(uVar8 | uVar9);
      puVar15[5] = puVar15[3] | ~(uVar16 | uVar12);
      if (iVar10 == 2) {
        uVar5 = puVar14[5];
        uVar8 = puVar14[6];
        uVar16 = puVar14[7];
        uVar13 = puVar11[5];
        uVar9 = puVar11[6];
        uVar12 = puVar11[7];
        puVar15[4] = puVar15[4] | ~(puVar14[4] | puVar11[4]);
        puVar15[5] = puVar15[5] | ~(uVar5 | uVar13);
        puVar15[8] = puVar15[6] | ~(uVar8 | uVar9);
        puVar15[9] = puVar15[7] | ~(uVar16 | uVar12);
      }
      iVar10 = iVar3 + uVar4;
      if (iVar7 != iVar3) {
        iVar7 = iVar10 + 1;
        color_effects_disable[iVar10] =
             color_effects_disable[iVar10] | ~(w0_mask[iVar10] | w1_mask[iVar10]);
        if (iVar6 - iVar3 != 1) {
          iVar10 = iVar10 + 2;
          color_effects_disable[iVar7] =
               color_effects_disable[iVar7] | ~(w0_mask[iVar7] | w1_mask[iVar7]);
          if (iVar6 - iVar3 != 2) {
            color_effects_disable[iVar10] =
                 color_effects_disable[iVar10] | ~(w1_mask[iVar10] | w0_mask[iVar10]);
          }
        }
      }
    }
  }
  for (; uVar2 != 0; uVar2 = uVar2 >> 1) {
    if ((uVar2 & 1) != 0) {
      uVar4 = (*layer_inhibit_masks)[1];
      uVar8 = (*layer_inhibit_masks)[2];
      uVar5 = (*layer_inhibit_masks)[3];
      uVar12 = (*layer_inhibit_masks)[4];
      uVar9 = (*layer_inhibit_masks)[6];
      uVar16 = (*layer_inhibit_masks)[5];
      uVar13 = (*layer_inhibit_masks)[7];
      (*layer_inhibit_masks)[0] = (*layer_inhibit_masks)[0] | ~(*w0_mask | *w1_mask);
      (*layer_inhibit_masks)[1] = uVar4 | ~(w0_mask[1] | w1_mask[1]);
      (*layer_inhibit_masks)[2] = uVar8 | ~(w0_mask[2] | w1_mask[2]);
      (*layer_inhibit_masks)[3] = uVar5 | ~(w0_mask[3] | w1_mask[3]);
      (*layer_inhibit_masks)[4] = uVar12 | ~(w0_mask[4] | w1_mask[4]);
      (*layer_inhibit_masks)[5] = uVar16 | ~(w0_mask[5] | w1_mask[5]);
      (*layer_inhibit_masks)[6] = uVar9 | ~(w0_mask[6] | w1_mask[6]);
      (*layer_inhibit_masks)[7] = uVar13 | ~(w0_mask[7] | w1_mask[7]);
    }
    layer_inhibit_masks = layer_inhibit_masks + 1;
  }
  return;
}


