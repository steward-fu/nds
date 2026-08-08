/*
 * Ghidra decompilation
 *
 * Function : render_scanline_window_inhibit_masks_single
 * Address  : 08047a64
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void render_scanline_window_inhibit_masks_single
               (u32 (*layer_inhibit_masks) [8],u32 *color_effects_disable,u32 active_layers,
               u32 *w0_mask,u32 w0_inhibits,u32 w1_inhibits)

{
  u32 (*pauVar1) [8];
  u32 _inhibits_1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  u32 _inhibits;
  
  uVar13 = w0_inhibits & active_layers;
  pauVar1 = layer_inhibit_masks;
  if ((w0_inhibits & 0x20) != 0) {
    if (w0_mask < color_effects_disable + 4 && color_effects_disable < w0_mask + 4) {
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
      uVar11 = ((int)color_effects_disable << 0x1d) >> 0x1f & 3;
      uVar4 = uVar11;
      if (uVar11 == 0) {
        iVar2 = 8;
        iVar6 = 2;
        iVar5 = iVar2;
        iVar3 = iVar2;
      }
      else {
        *color_effects_disable = *color_effects_disable | *w0_mask;
        if (uVar11 == 1) {
          iVar2 = 7;
        }
        else {
          color_effects_disable[1] = color_effects_disable[1] | w0_mask[1];
          if (uVar11 == 3) {
            iVar2 = 5;
            color_effects_disable[2] = color_effects_disable[2] | w0_mask[2];
          }
          else {
            iVar2 = 6;
            uVar4 = 2;
          }
        }
        iVar6 = 1;
        iVar5 = 4;
        iVar3 = 8 - uVar11;
      }
      puVar7 = color_effects_disable + uVar11;
      puVar12 = w0_mask + uVar11;
      uVar11 = puVar12[1];
      uVar8 = puVar12[2];
      uVar9 = puVar12[3];
      *puVar7 = *puVar7 | *puVar12;
      puVar7[1] = puVar7[1] | uVar11;
      puVar7[4] = puVar7[2] | uVar8;
      puVar7[5] = puVar7[3] | uVar9;
      if (iVar6 == 2) {
        uVar11 = puVar12[5];
        uVar8 = puVar12[6];
        uVar9 = puVar12[7];
        puVar7[4] = puVar7[4] | puVar12[4];
        puVar7[5] = puVar7[5] | uVar11;
        puVar7[8] = puVar7[6] | uVar8;
        puVar7[9] = puVar7[7] | uVar9;
      }
      iVar6 = uVar4 + iVar5;
      if (iVar5 != iVar3) {
        iVar3 = iVar6 + 1;
        color_effects_disable[iVar6] = color_effects_disable[iVar6] | w0_mask[iVar6];
        if (iVar2 - iVar5 != 1) {
          iVar6 = iVar6 + 2;
          color_effects_disable[iVar3] = color_effects_disable[iVar3] | w0_mask[iVar3];
          if (iVar2 - iVar5 != 2) {
            color_effects_disable[iVar6] = color_effects_disable[iVar6] | w0_mask[iVar6];
          }
        }
      }
    }
  }
  for (; uVar13 != 0; uVar13 = uVar13 >> 1) {
    if ((uVar13 & 1) != 0) {
      uVar8 = (*pauVar1)[1];
      uVar4 = (*pauVar1)[2];
      uVar10 = (*pauVar1)[3];
      uVar9 = (*pauVar1)[5];
      uVar11 = (*pauVar1)[4];
      (*pauVar1)[0] = (*pauVar1)[0] | *w0_mask;
      (*pauVar1)[1] = uVar8 | w0_mask[1];
      (*pauVar1)[2] = uVar4 | w0_mask[2];
      (*pauVar1)[3] = uVar10 | w0_mask[3];
      (*pauVar1)[4] = uVar11 | w0_mask[4];
      (*pauVar1)[5] = uVar9 | w0_mask[5];
      (*pauVar1)[6] = (*pauVar1)[6] | w0_mask[6];
      (*pauVar1)[7] = (*pauVar1)[7] | w0_mask[7];
    }
    pauVar1 = pauVar1 + 1;
  }
  uVar13 = active_layers & w1_inhibits;
  if ((w1_inhibits & 0x20) != 0) {
    if (w0_mask < color_effects_disable + 4 && color_effects_disable < w0_mask + 4) {
      *color_effects_disable = *color_effects_disable | ~*w0_mask;
      color_effects_disable[1] = color_effects_disable[1] | ~w0_mask[1];
      color_effects_disable[2] = color_effects_disable[2] | ~w0_mask[2];
      color_effects_disable[3] = color_effects_disable[3] | ~w0_mask[3];
      color_effects_disable[4] = color_effects_disable[4] | ~w0_mask[4];
      color_effects_disable[5] = color_effects_disable[5] | ~w0_mask[5];
      color_effects_disable[6] = color_effects_disable[6] | ~w0_mask[6];
      color_effects_disable[7] = color_effects_disable[7] | ~w0_mask[7];
    }
    else {
      uVar11 = ((int)color_effects_disable << 0x1d) >> 0x1f & 3;
      uVar4 = uVar11;
      if (uVar11 == 0) {
        iVar2 = 8;
        iVar6 = 2;
        iVar5 = iVar2;
        iVar3 = iVar2;
      }
      else {
        *color_effects_disable = *color_effects_disable | ~*w0_mask;
        if (uVar11 == 1) {
          iVar2 = 7;
        }
        else {
          color_effects_disable[1] = color_effects_disable[1] | ~w0_mask[1];
          if (uVar11 == 3) {
            iVar2 = 5;
            color_effects_disable[2] = color_effects_disable[2] | ~w0_mask[2];
          }
          else {
            iVar2 = 6;
            uVar4 = 2;
          }
        }
        iVar6 = 1;
        iVar5 = 8 - uVar11;
        iVar3 = 4;
      }
      puVar7 = color_effects_disable + uVar11;
      puVar12 = w0_mask + uVar11;
      uVar11 = puVar12[1];
      uVar8 = puVar12[2];
      uVar9 = puVar12[3];
      *puVar7 = *puVar7 | ~*puVar12;
      puVar7[1] = puVar7[1] | ~uVar11;
      puVar7[4] = puVar7[2] | ~uVar8;
      puVar7[5] = puVar7[3] | ~uVar9;
      if (iVar6 == 2) {
        uVar11 = puVar12[5];
        uVar8 = puVar12[6];
        uVar9 = puVar12[7];
        puVar7[4] = puVar7[4] | ~puVar12[4];
        puVar7[5] = puVar7[5] | ~uVar11;
        puVar7[8] = puVar7[6] | ~uVar8;
        puVar7[9] = puVar7[7] | ~uVar9;
      }
      iVar6 = uVar4 + iVar3;
      if (iVar5 != iVar3) {
        iVar5 = iVar6 + 1;
        color_effects_disable[iVar6] = color_effects_disable[iVar6] | ~w0_mask[iVar6];
        if (iVar2 - iVar3 != 1) {
          iVar6 = iVar6 + 2;
          color_effects_disable[iVar5] = color_effects_disable[iVar5] | ~w0_mask[iVar5];
          if (iVar2 - iVar3 != 2) {
            color_effects_disable[iVar6] = color_effects_disable[iVar6] | ~w0_mask[iVar6];
          }
        }
      }
    }
  }
  for (; uVar13 != 0; uVar13 = uVar13 >> 1) {
    if ((uVar13 & 1) != 0) {
      uVar9 = (*layer_inhibit_masks)[1];
      uVar4 = (*layer_inhibit_masks)[2];
      uVar8 = (*layer_inhibit_masks)[3];
      uVar11 = (*layer_inhibit_masks)[4];
      uVar10 = (*layer_inhibit_masks)[5];
      (*layer_inhibit_masks)[0] = (*layer_inhibit_masks)[0] | ~*w0_mask;
      (*layer_inhibit_masks)[1] = uVar9 | ~w0_mask[1];
      (*layer_inhibit_masks)[2] = uVar4 | ~w0_mask[2];
      (*layer_inhibit_masks)[3] = uVar8 | ~w0_mask[3];
      (*layer_inhibit_masks)[4] = uVar11 | ~w0_mask[4];
      (*layer_inhibit_masks)[5] = uVar10 | ~w0_mask[5];
      (*layer_inhibit_masks)[6] = (*layer_inhibit_masks)[6] | ~w0_mask[6];
      (*layer_inhibit_masks)[7] = (*layer_inhibit_masks)[7] | ~w0_mask[7];
    }
    layer_inhibit_masks = layer_inhibit_masks + 1;
  }
  return;
}


