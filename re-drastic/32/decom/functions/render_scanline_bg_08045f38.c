/*
 * Ghidra decompilation
 *
 * Function : render_scanline_bg
 * Address  : 08045f38
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void render_scanline_bg(video_2d_struct *video_2d,u16 (*bg_buffers) [272],u32 (*bg_visibility) [8],
                       u32 line)

{
  uint uVar1;
  ushort uVar2;
  byte bVar3;
  ushort uVar4;
  u8 bg_v_mosaic;
  u8 mosaic_wrap;
  uint uVar5;
  int extraout_r1;
  uint extraout_r1_00;
  video_2d_bg_layer_struct *bg_layers;
  int iVar6;
  u32 layer_index;
  u16 *puVar7;
  u16 *puVar8;
  int iVar9;
  u32 affine_current_x;
  uint uVar10;
  u32 mosaic_mask;
  u32 wrap_shift_increment;
  uint uVar11;
  video_2d_bg_layer_struct *pvVar12;
  video_2d_bg_layer_struct *current_bg_layer;
  u32 *puVar13;
  u32 *puVar14;
  u32 bits;
  uint uVar15;
  u8 *puVar16;
  u8 bg_h_mosaic;
  uint uVar17;
  int iVar18;
  uint uVar19;
  u16 uVar20;
  u32 affine_current_y;
  int local_38;
  
  uVar4 = video_2d->mosaic;
  uVar5 = ((uint)uVar4 << 0x18) >> 0x1c;
  uVar17 = uVar4 & 0xf;
  if (uVar5 == 0) {
    local_38 = 0;
  }
  else {
    __aeabi_uidivmod(line,uVar5 + 1);
    local_38 = extraout_r1;
  }
  uVar5 = (uint)video_2d->active_bg_layers;
  if (uVar5 != 0) {
    puVar16 = video_2d->layer_order + 7;
    iVar6 = uVar17 + 1;
    uVar19 = 0;
    do {
      while( true ) {
        puVar16 = puVar16 + 1;
        bVar3 = *puVar16;
        uVar2 = (ushort)bVar3;
        pvVar12 = video_2d->bg_layers + (short)uVar2;
        if (pvVar12->direct_bank_ptr != (u16 *)0x0) break;
        puVar13 = bg_visibility[(short)uVar2];
        puVar8 = bg_buffers[bVar3] + 8;
        if ((pvVar12->bg_control & 0x40) == 0) {
          (*pvVar12->render_function)(pvVar12,puVar8,puVar13,line);
        }
        else {
          iVar9 = pvVar12->affine_current_x;
          iVar18 = pvVar12->affine_current_y;
          uVar20 = pvVar12->vertical_offset;
          pvVar12->affine_current_x = iVar9 - local_38 * pvVar12->affine_dmx;
          pvVar12->affine_current_y = iVar18 - local_38 * pvVar12->affine_dmy;
          pvVar12->vertical_offset = uVar20 - (short)local_38;
          (*pvVar12->render_function)(pvVar12,puVar8,puVar13,line);
          pvVar12->vertical_offset = uVar20;
          pvVar12->affine_current_x = iVar9;
          pvVar12->affine_current_y = iVar18;
          if ((uVar4 & 0xf) != 0) {
            uVar10 = render_scanline_apply_mosaic_visibility::mosaic_masks[uVar17];
            __aeabi_idivmod(0x20,iVar6);
            uVar5 = bg_visibility[(short)uVar2][0] & uVar10;
            puVar14 = puVar13 + 7;
            uVar11 = 0;
            uVar15 = uVar5;
            while( true ) {
              __aeabi_uidivmod((iVar6 - _mosaic_wrap) + uVar11,iVar6);
              if ((uVar4 & 0xf) != 0) {
                uVar11 = 0;
                do {
                  uVar11 = uVar11 + 1;
                  uVar5 = uVar5 << 1;
                  uVar15 = uVar15 | uVar5;
                } while (uVar11 != uVar17);
              }
              uVar1 = uVar15 >> 0x1f;
              *puVar13 = uVar15;
              if (puVar14 == puVar13) break;
              puVar13 = puVar13 + 1;
              uVar5 = *puVar13 & uVar10 << (extraout_r1_00 & 0xff);
              uVar11 = extraout_r1_00;
              uVar15 = uVar5;
              if (((((extraout_r1_00 != 0) && (uVar15 = uVar5 | uVar1, extraout_r1_00 != 1)) &&
                   (uVar15 = uVar5 | uVar1 | uVar1 << 1, extraout_r1_00 != 2)) &&
                  (((uVar15 = uVar15 | uVar1 << 2, extraout_r1_00 != 3 &&
                    (uVar15 = uVar15 | uVar1 << 3, extraout_r1_00 != 4)) &&
                   ((uVar15 = uVar15 | uVar1 << 4, extraout_r1_00 != 5 &&
                    ((uVar15 = uVar15 | uVar1 << 5, extraout_r1_00 != 6 &&
                     (uVar15 = uVar15 | uVar1 << 6, extraout_r1_00 != 7)))))))) &&
                 ((uVar15 = uVar15 | uVar1 << 7, extraout_r1_00 != 8 &&
                  (((((uVar15 = uVar15 | uVar1 << 8, extraout_r1_00 != 9 &&
                      (uVar15 = uVar15 | uVar1 << 9, extraout_r1_00 != 10)) &&
                     (uVar15 = uVar15 | uVar1 << 10, extraout_r1_00 != 0xb)) &&
                    ((uVar15 = uVar15 | uVar1 << 0xb, extraout_r1_00 != 0xc &&
                     (uVar15 = uVar15 | uVar1 << 0xc, extraout_r1_00 != 0xd)))) &&
                   (uVar15 = uVar15 | uVar1 << 0xd, extraout_r1_00 == 0xf)))))) {
                uVar15 = uVar15 | uVar1 << 0xe;
              }
            }
            uVar5 = 1;
            uVar20 = bg_buffers[bVar3][8];
            do {
              uVar11 = uVar5 + 1;
              puVar7 = puVar8 + uVar5;
              puVar8[uVar5] = uVar20;
              if (1 < uVar17) {
                uVar15 = uVar11;
                do {
                  uVar10 = uVar15 + 1;
                  if (0xff < uVar15) goto LAB_080462a0;
                  puVar7 = puVar7 + 1;
                  *puVar7 = uVar20;
                  uVar11 = uVar5 + uVar17;
                  uVar15 = uVar10;
                } while (uVar10 != uVar5 + uVar17);
              }
              uVar5 = uVar11 + 1;
              uVar20 = puVar8[uVar11];
            } while (uVar5 < 0x100);
LAB_080462a0:
            uVar5 = (uint)video_2d->active_bg_layers;
            break;
          }
        }
        uVar19 = uVar19 + 1;
        uVar5 = (uint)video_2d->active_bg_layers;
        if (uVar5 <= uVar19) {
          return;
        }
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 < uVar5);
  }
  return;
}


