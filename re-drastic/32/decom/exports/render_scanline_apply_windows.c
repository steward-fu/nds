/*
 * Ghidra decompilation
 *
 * Function : render_scanline_apply_windows
 * Address  : 08048320
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void render_scanline_apply_windows
               (video_2d_struct *video_2d,u32 (*layer_visibility) [8],u32 (*layer_inhibit_masks) [8]
               ,u32 active_layers)

{
  undefined auVar1 [16];
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  u32 inhibit_mask;
  int iVar8;
  uint uVar9;
  u32 *puVar10;
  u32 *puVar11;
  uint uVar12;
  uint uVar13;
  u32 *puVar14;
  int iVar15;
  u32 *puVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  undefined auVar24 [16];
  undefined auVar25 [16];
  undefined auVar26 [16];
  
  if ((video_2d->display_control & 0xe000) == 0) {
    return;
  }
  if ((active_layers & 1) != 0) {
    uVar13 = (*layer_inhibit_masks)[1];
    uVar17 = (*layer_inhibit_masks)[2];
    uVar20 = (*layer_inhibit_masks)[3];
    uVar12 = (*layer_visibility)[1];
    uVar9 = (*layer_visibility)[2];
    uVar7 = (*layer_visibility)[3];
    uVar3 = (*layer_inhibit_masks)[4];
    uVar4 = (*layer_inhibit_masks)[5];
    uVar5 = (*layer_inhibit_masks)[6];
    uVar6 = (*layer_inhibit_masks)[7];
    uVar19 = (*layer_visibility)[4];
    uVar22 = (*layer_visibility)[5];
    uVar23 = (*layer_visibility)[6];
    uVar2 = (*layer_visibility)[7];
    (*layer_visibility)[0] = (*layer_visibility)[0] & ~(*layer_inhibit_masks)[0];
    (*layer_visibility)[1] = uVar12 & ~uVar13;
    (*layer_visibility)[4] = uVar9 & ~uVar17;
    (*layer_visibility)[5] = uVar7 & ~uVar20;
    (*layer_visibility)[4] = uVar19 & ~uVar3;
    (*layer_visibility)[5] = uVar22 & ~uVar4;
    layer_visibility[1][0] = uVar23 & ~uVar5;
    layer_visibility[1][1] = uVar2 & ~uVar6;
  }
  if ((active_layers >> 1 & 1) != 0) {
    uVar12 = layer_visibility[1][1];
    uVar9 = layer_visibility[1][2];
    uVar7 = layer_visibility[1][3];
    uVar13 = layer_inhibit_masks[1][1];
    uVar17 = layer_inhibit_masks[1][2];
    uVar20 = layer_inhibit_masks[1][3];
    uVar3 = layer_inhibit_masks[1][4];
    uVar4 = layer_inhibit_masks[1][5];
    uVar5 = layer_inhibit_masks[1][6];
    uVar6 = layer_inhibit_masks[1][7];
    uVar19 = layer_visibility[1][4];
    uVar22 = layer_visibility[1][5];
    uVar23 = layer_visibility[1][6];
    uVar2 = layer_visibility[1][7];
    layer_visibility[1][0] = layer_visibility[1][0] & ~layer_inhibit_masks[1][0];
    layer_visibility[1][1] = uVar12 & ~uVar13;
    layer_visibility[1][4] = uVar9 & ~uVar17;
    layer_visibility[1][5] = uVar7 & ~uVar20;
    layer_visibility[1][4] = uVar19 & ~uVar3;
    layer_visibility[1][5] = uVar22 & ~uVar4;
    layer_visibility[2][0] = uVar23 & ~uVar5;
    layer_visibility[2][1] = uVar2 & ~uVar6;
  }
  if ((active_layers >> 2 & 1) != 0) {
    uVar12 = layer_visibility[2][1];
    uVar9 = layer_visibility[2][2];
    uVar7 = layer_visibility[2][3];
    uVar13 = layer_inhibit_masks[2][1];
    uVar17 = layer_inhibit_masks[2][2];
    uVar20 = layer_inhibit_masks[2][3];
    uVar3 = layer_inhibit_masks[2][4];
    uVar4 = layer_inhibit_masks[2][5];
    uVar5 = layer_inhibit_masks[2][6];
    uVar6 = layer_inhibit_masks[2][7];
    uVar19 = layer_visibility[2][4];
    uVar22 = layer_visibility[2][5];
    uVar23 = layer_visibility[2][6];
    uVar2 = layer_visibility[2][7];
    layer_visibility[2][0] = layer_visibility[2][0] & ~layer_inhibit_masks[2][0];
    layer_visibility[2][1] = uVar12 & ~uVar13;
    layer_visibility[2][4] = uVar9 & ~uVar17;
    layer_visibility[2][5] = uVar7 & ~uVar20;
    layer_visibility[2][4] = uVar19 & ~uVar3;
    layer_visibility[2][5] = uVar22 & ~uVar4;
    layer_visibility[3][0] = uVar23 & ~uVar5;
    layer_visibility[3][1] = uVar2 & ~uVar6;
  }
  if ((active_layers >> 3 & 1) != 0) {
    uVar12 = layer_visibility[3][1];
    uVar9 = layer_visibility[3][2];
    uVar7 = layer_visibility[3][3];
    uVar13 = layer_inhibit_masks[3][1];
    uVar17 = layer_inhibit_masks[3][2];
    uVar20 = layer_inhibit_masks[3][3];
    uVar3 = layer_inhibit_masks[3][4];
    uVar4 = layer_inhibit_masks[3][5];
    uVar5 = layer_inhibit_masks[3][6];
    uVar6 = layer_inhibit_masks[3][7];
    uVar19 = layer_visibility[3][4];
    uVar22 = layer_visibility[3][5];
    uVar23 = layer_visibility[3][6];
    uVar2 = layer_visibility[3][7];
    layer_visibility[3][0] = layer_visibility[3][0] & ~layer_inhibit_masks[3][0];
    layer_visibility[3][1] = uVar12 & ~uVar13;
    layer_visibility[3][4] = uVar9 & ~uVar17;
    layer_visibility[3][5] = uVar7 & ~uVar20;
    layer_visibility[3][4] = uVar19 & ~uVar3;
    layer_visibility[3][5] = uVar22 & ~uVar4;
    layer_visibility[4][0] = uVar23 & ~uVar5;
    layer_visibility[4][1] = uVar2 & ~uVar6;
  }
  if ((active_layers >> 3 & 2) != 0) {
    if (layer_visibility + 4 < layer_inhibit_masks[4] + 4 &&
        layer_inhibit_masks + 4 < layer_visibility[7] + 4) {
      uVar22 = layer_visibility[4][1];
      uVar9 = ~layer_inhibit_masks[4][0];
      uVar17 = layer_visibility[7][1];
      layer_visibility[4][0] = layer_visibility[4][0] & uVar9;
      uVar19 = layer_visibility[5][1];
      layer_visibility[5][0] = layer_visibility[5][0] & uVar9;
      uVar13 = layer_visibility[4][2];
      layer_visibility[6][0] = layer_visibility[6][0] & uVar9;
      uVar12 = layer_visibility[6][1];
      layer_visibility[7][0] = uVar9 & layer_visibility[7][0];
      uVar7 = layer_visibility[5][2];
      uVar9 = ~layer_inhibit_masks[4][1];
      uVar20 = layer_visibility[7][2];
      layer_visibility[4][1] = uVar22 & uVar9;
      uVar22 = layer_visibility[6][2];
      layer_visibility[5][1] = uVar19 & uVar9;
      uVar19 = layer_visibility[4][3];
      layer_visibility[6][1] = uVar12 & uVar9;
      uVar12 = layer_visibility[5][3];
      layer_visibility[7][1] = uVar9 & uVar17;
      uVar9 = ~layer_inhibit_masks[4][2];
      layer_visibility[4][2] = uVar13 & uVar9;
      layer_visibility[5][2] = uVar7 & uVar9;
      layer_visibility[6][2] = uVar22 & uVar9;
      layer_visibility[7][2] = uVar9 & uVar20;
      uVar9 = ~layer_inhibit_masks[4][3];
      layer_visibility[4][3] = uVar19 & uVar9;
      layer_visibility[5][3] = uVar12 & uVar9;
      uVar7 = layer_visibility[4][4];
      uVar13 = layer_visibility[7][3];
      uVar23 = layer_visibility[5][4];
      uVar22 = layer_visibility[6][4];
      uVar20 = layer_visibility[7][4];
      layer_visibility[6][3] = layer_visibility[6][3] & uVar9;
      uVar12 = layer_visibility[4][5];
      uVar17 = layer_visibility[5][5];
      layer_visibility[7][3] = uVar9 & uVar13;
      uVar9 = ~layer_inhibit_masks[4][4];
      uVar19 = layer_visibility[7][5];
      layer_visibility[4][4] = uVar7 & uVar9;
      uVar7 = layer_visibility[6][5];
      layer_visibility[5][4] = uVar23 & uVar9;
      uVar23 = layer_visibility[4][6];
      layer_visibility[6][4] = uVar22 & uVar9;
      uVar22 = layer_visibility[5][6];
      layer_visibility[7][4] = uVar9 & uVar20;
      uVar9 = ~layer_inhibit_masks[4][5];
      layer_visibility[4][5] = uVar12 & uVar9;
      uVar12 = layer_visibility[6][6];
      layer_visibility[5][5] = uVar17 & uVar9;
      uVar13 = layer_visibility[7][6];
      layer_visibility[6][5] = uVar7 & uVar9;
      layer_visibility[7][5] = uVar9 & uVar19;
      uVar9 = ~layer_inhibit_masks[4][6];
      layer_visibility[4][6] = uVar23 & uVar9;
      layer_visibility[5][6] = uVar22 & uVar9;
      layer_visibility[6][6] = uVar12 & uVar9;
      layer_visibility[7][6] = uVar9 & uVar13;
      uVar12 = layer_visibility[5][7];
      uVar9 = layer_visibility[6][7];
      uVar13 = layer_visibility[7][7];
      uVar7 = ~layer_inhibit_masks[4][7];
      layer_visibility[4][7] = layer_visibility[4][7] & uVar7;
      layer_visibility[5][7] = uVar12 & uVar7;
      layer_visibility[6][7] = uVar9 & uVar7;
      layer_visibility[7][7] = uVar7 & uVar13;
    }
    else {
      uVar9 = ((int)layer_visibility << 0x1d) >> 0x1f & 3;
      uVar12 = uVar9;
      if (uVar9 == 0) {
        iVar15 = 8;
        uVar7 = 2;
        iVar18 = iVar15;
        iVar21 = iVar15;
      }
      else {
        uVar7 = ~layer_inhibit_masks[4][0];
        layer_visibility[4][0] = layer_visibility[4][0] & uVar7;
        layer_visibility[5][0] = layer_visibility[5][0] & uVar7;
        layer_visibility[6][0] = layer_visibility[6][0] & uVar7;
        layer_visibility[7][0] = uVar7 & layer_visibility[7][0];
        if (uVar9 == 1) {
          iVar21 = 7;
        }
        else {
          uVar20 = layer_visibility[5][1];
          uVar17 = layer_visibility[6][1];
          uVar13 = layer_visibility[7][1];
          uVar7 = ~layer_inhibit_masks[4][1];
          layer_visibility[4][1] = layer_visibility[4][1] & uVar7;
          layer_visibility[5][1] = uVar20 & uVar7;
          layer_visibility[6][1] = uVar17 & uVar7;
          layer_visibility[7][1] = uVar7 & uVar13;
          if (uVar9 == 3) {
            iVar21 = 5;
            uVar13 = layer_visibility[5][2];
            uVar7 = layer_visibility[6][2];
            uVar17 = layer_visibility[7][2];
            uVar20 = ~layer_inhibit_masks[4][2];
            layer_visibility[4][2] = layer_visibility[4][2] & uVar20;
            layer_visibility[5][2] = uVar13 & uVar20;
            layer_visibility[6][2] = uVar7 & uVar20;
            layer_visibility[7][2] = uVar20 & uVar17;
          }
          else {
            iVar21 = 6;
            uVar12 = 2;
          }
        }
        iVar15 = 8 - uVar9;
        uVar7 = 1;
        iVar18 = 4;
      }
      puVar16 = layer_visibility[4] + uVar9;
      auVar1 = *(undefined (*) [16])(layer_inhibit_masks[4] + uVar9);
      puVar11 = layer_visibility[5] + uVar9;
      puVar14 = layer_visibility[6] + uVar9;
      auVar25 = *(undefined (*) [16])puVar16;
      puVar10 = layer_visibility[7] + uVar9;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = ~auVar1._0_8_;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = ~auVar1._8_8_;
      auVar24 = auVar26 << 8 | auVar24;
      *(longlong *)puVar16 = SUB168(auVar25 & auVar24,0);
      *(longlong *)(puVar16 + 2) = SUB168(auVar25 & auVar24,8);
      auVar26 = *(undefined (*) [16])puVar11;
      *(longlong *)puVar11 = SUB168(auVar26 & auVar24,0);
      *(longlong *)(puVar11 + 2) = SUB168(auVar26 & auVar24,8);
      auVar26 = *(undefined (*) [16])puVar14;
      *(longlong *)puVar14 = SUB168(auVar26 & auVar24,0);
      *(longlong *)(puVar14 + 2) = SUB168(auVar26 & auVar24,8);
      auVar26 = *(undefined (*) [16])puVar10;
      *(longlong *)puVar10 = SUB168(auVar26 & auVar24,0);
      *(longlong *)(puVar10 + 2) = SUB168(auVar26 & auVar24,8);
      if (1 < uVar7) {
        auVar26 = *(undefined (*) [16])(puVar16 + 4);
        auVar24 = *(undefined (*) [16])(layer_inhibit_masks[4] + uVar9 + 4);
        auVar1._8_8_ = 0;
        auVar1._0_8_ = ~auVar24._0_8_;
        auVar25._8_8_ = 0;
        auVar25._0_8_ = ~auVar24._8_8_;
        auVar25 = auVar1 << 8 | auVar25;
        *(longlong *)(puVar16 + 4) = SUB168(auVar26 & auVar25,0);
        *(longlong *)(puVar16 + 6) = SUB168(auVar26 & auVar25,8);
        auVar26 = *(undefined (*) [16])(puVar11 + 4) & auVar25;
        *(longlong *)(puVar11 + 4) = auVar26._0_8_;
        *(longlong *)(puVar11 + 6) = auVar26._8_8_;
        auVar26 = *(undefined (*) [16])(puVar14 + 4) & auVar25;
        *(longlong *)(puVar14 + 4) = auVar26._0_8_;
        *(longlong *)(puVar14 + 6) = auVar26._8_8_;
        auVar25 = *(undefined (*) [16])(puVar10 + 4) & auVar25;
        *(longlong *)(puVar10 + 4) = auVar25._0_8_;
        *(longlong *)(puVar10 + 6) = auVar25._8_8_;
      }
      iVar8 = uVar12 + iVar18;
      if (iVar15 != iVar18) {
        uVar9 = layer_visibility[5][iVar8];
        uVar12 = layer_visibility[6][iVar8];
        uVar7 = layer_visibility[7][iVar8];
        uVar13 = ~layer_inhibit_masks[4][iVar8];
        layer_visibility[4][iVar8] = layer_visibility[4][iVar8] & uVar13;
        layer_visibility[5][iVar8] = uVar9 & uVar13;
        layer_visibility[6][iVar8] = uVar12 & uVar13;
        layer_visibility[7][iVar8] = uVar13 & uVar7;
        if (iVar21 - iVar18 != 1) {
          uVar12 = layer_visibility[5][iVar8 + 1];
          uVar13 = layer_visibility[6][iVar8 + 1];
          uVar9 = layer_visibility[7][iVar8 + 1];
          uVar7 = ~layer_inhibit_masks[4][iVar8 + 1];
          layer_visibility[4][iVar8 + 1] = layer_visibility[4][iVar8 + 1] & uVar7;
          layer_visibility[5][iVar8 + 1] = uVar12 & uVar7;
          layer_visibility[6][iVar8 + 1] = uVar13 & uVar7;
          layer_visibility[7][iVar8 + 1] = uVar7 & uVar9;
          if (iVar21 - iVar18 != 2) {
            uVar12 = layer_visibility[5][iVar8 + 2];
            uVar9 = layer_visibility[6][iVar8 + 2];
            uVar13 = layer_visibility[7][iVar8 + 2];
            uVar7 = ~layer_inhibit_masks[4][iVar8 + 2];
            layer_visibility[4][iVar8 + 2] = layer_visibility[4][iVar8 + 2] & uVar7;
            layer_visibility[5][iVar8 + 2] = uVar12 & uVar7;
            layer_visibility[6][iVar8 + 2] = uVar9 & uVar7;
            layer_visibility[7][iVar8 + 2] = uVar7 & uVar13;
          }
        }
      }
    }
  }
  return;
}


