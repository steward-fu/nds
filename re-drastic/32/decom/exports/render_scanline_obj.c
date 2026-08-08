/*
 * Ghidra decompilation
 *
 * Function : render_scanline_obj
 * Address  : 080bc2ac
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u32 render_scanline_obj(video_2d_struct *video_2d,u16 *obj_scanline_pixels,u8 *pixel_alpha,
                       u32 (*obj_visibility) [8],u32 *force_blend,u32 *force_alpha_obj,u32 line)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  u32 (*pauVar4) [8];
  u64 *obj_visibility_00;
  uint uVar5;
  u32 left_offset_unalignment;
  ushort *puVar6;
  u32 block_visibility_1;
  uint uVar7;
  u32 uVar8;
  u64 *obj_pixels_00;
  u32 block_visibility;
  uint uVar9;
  u32 right_offset;
  int iVar10;
  byte *pbVar11;
  byte *pbVar12;
  u32 obj_width;
  u16 *obj_pixels;
  int iVar13;
  ushort *puVar14;
  video_2d_obj_struct *obj_00;
  video_2d_obj_struct *obj;
  u32 obj_index;
  u8 (*pauVar15) [128];
  u16 *_obj_pixels;
  u64 *puVar16;
  u8 *aligned_storage;
  uint uVar17;
  u32 block_visibility_2;
  uint uVar18;
  u8 *scanline_obj_list;
  video_2d_obj_set_struct *video_2d_obj_set;
  u8 (*local_1c0) [128];
  u32 *obj_visibility_buffer;
  u8 *local_1ac;
  s32 left_offset;
  u64 _aligned_storage [45];
  
  iVar2 = __stack_chk_guard;
  uVar8 = 0;
  puVar16 = _aligned_storage;
  if (((uint)puVar16 & 8) != 0) {
    puVar16 = _aligned_storage + 1;
  }
  *puVar16 = 0;
  puVar16[1] = 0;
  local_1c0 = (video_2d->obj_set).scanline_priority_list[4] + line;
  local_1ac = (video_2d->obj_set).scanline_priority_counts[4] + line;
  pauVar4 = obj_visibility + -5;
  obj_visibility_00 = puVar16 + 0x28;
  do {
    bVar1 = *local_1ac;
    obj_visibility[4][0] = 0;
    obj_visibility[4][1] = 0;
    obj_visibility[4][2] = 0;
    obj_visibility[4][3] = 0;
    obj_visibility[4][4] = 0;
    obj_visibility[4][5] = 0;
    obj_visibility[4][6] = 0;
    obj_visibility[4][7] = 0;
    if (bVar1 != 0) {
      pauVar15 = (u8 (*) [128])(*local_1c0 + bVar1);
      obj_pixels_00 = puVar16 + 2;
      do {
        while( true ) {
          pauVar15 = (u8 (*) [128])((int)(pauVar15 + -1) + 0x7f);
          obj_00 = (video_2d->obj_set).obj + (*pauVar15)[0];
          left_offset = (s32)obj_00->x;
          uVar8 = (u32)obj_00->width;
          switch(obj_00->mode) {
          case '\0':
            render_scanline_obj_tile_span_4bpp_hflip_no(obj_00,obj_pixels_00,line);
            break;
          case '\x01':
            render_scanline_obj_tile_span_8bpp_hflip_no(obj_00,obj_pixels_00,line);
            break;
          case '\x02':
            render_scanline_obj_bitmap_span_hflip_no(obj_00,obj_pixels_00,line);
            break;
          case '\x04':
            render_scanline_obj_tile_span_4bpp_hflip_yes(obj_00,obj_pixels_00,line);
            break;
          case '\x05':
            render_scanline_obj_tile_span_8bpp_hflip_yes(obj_00,obj_pixels_00,line);
            break;
          case '\x06':
            render_scanline_obj_bitmap_span_hflip_yes(obj_00,obj_pixels_00,line);
            break;
          case '\b':
            uVar8 = render_scanline_obj_affine_4bpp(obj_00,(u16 *)obj_pixels_00,line,&left_offset);
            break;
          case '\t':
            uVar8 = render_scanline_obj_affine_8bpp(obj_00,(u16 *)obj_pixels_00,line,&left_offset);
            break;
          case '\n':
            uVar8 = render_scanline_obj_affine_16bpp(obj_00,(u16 *)obj_pixels_00,line,&left_offset);
          }
          switch(uVar8 + 7 >> 3) {
          case 0:
            goto joined_r0x080bcaa0;
          case 1:
          case 2:
            render_scanline_obj_set_visibility_16(obj_pixels_00,obj_visibility_00,left_offset,uVar8)
            ;
            break;
          case 3:
          case 4:
            render_scanline_obj_set_visibility_32(obj_pixels_00,obj_visibility_00,left_offset,uVar8)
            ;
            break;
          case 5:
          case 6:
          case 7:
          case 8:
            render_scanline_obj_set_visibility_64(obj_pixels_00,obj_visibility_00,left_offset,uVar8)
            ;
            break;
          case 9:
          case 10:
          case 0xb:
          case 0xc:
          case 0xd:
          case 0xe:
          case 0xf:
          case 0x10:
            render_scanline_obj_set_visibility_128
                      ((u16 *)obj_pixels_00,(u32 *)obj_visibility_00,left_offset,uVar8);
          }
          uVar5 = left_offset & 7;
          uVar3 = uVar8 + uVar5;
          iVar10 = left_offset - uVar5;
          uVar9 = uVar3 + 0xf & 0xfffffff0;
          iVar13 = (int)obj_pixels_00 + uVar5 * -2;
          left_offset = iVar10;
          if (uVar3 < uVar9) {
            memset((void *)((int)puVar16 + uVar5 * -2 + 0x10 + uVar3 * 2),0,(uVar9 - uVar3) * 2);
          }
          bVar1 = obj_00->alpha;
          if (bVar1 != 0) break;
          render_scanline_obj_combine_pixels(obj_scanline_pixels + iVar10,iVar13,uVar9);
          uVar18 = *(uint *)((int)puVar16 + 0x144);
          uVar3 = *(uint *)(puVar16 + 0x29);
          uVar9 = *(uint *)((int)puVar16 + 0x14c);
          uVar7 = ~*(uint *)(puVar16 + 0x28);
          uVar17 = ~uVar18;
          obj_visibility[4][0] = obj_visibility[4][0] | *(uint *)(puVar16 + 0x28);
          *force_alpha_obj = *force_alpha_obj & uVar7;
          uVar5 = ~uVar3;
          *force_blend = uVar7 & *force_blend;
          uVar7 = ~uVar9;
          obj_visibility[4][1] = obj_visibility[4][1] | uVar18;
          force_alpha_obj[1] = force_alpha_obj[1] & uVar17;
          uVar18 = *(uint *)(puVar16 + 0x2a);
          force_blend[1] = uVar17 & force_blend[1];
          uVar17 = ~uVar18;
          obj_visibility[4][2] = obj_visibility[4][2] | uVar3;
          force_alpha_obj[2] = force_alpha_obj[2] & uVar5;
          force_blend[2] = uVar5 & force_blend[2];
          obj_visibility[4][3] = obj_visibility[4][3] | uVar9;
          force_alpha_obj[3] = force_alpha_obj[3] & uVar7;
          force_blend[3] = uVar7 & force_blend[3];
          obj_visibility[4][4] = obj_visibility[4][4] | uVar18;
          force_alpha_obj[4] = force_alpha_obj[4] & uVar17;
          uVar7 = *(uint *)((int)puVar16 + 0x154);
          uVar3 = *(uint *)(puVar16 + 0x2b);
          uVar9 = *(uint *)((int)puVar16 + 0x15c);
          force_blend[4] = uVar17 & force_blend[4];
          uVar17 = ~uVar7;
          uVar5 = ~uVar3;
          obj_visibility[4][5] = obj_visibility[4][5] | uVar7;
          uVar7 = ~uVar9;
          force_alpha_obj[5] = force_alpha_obj[5] & uVar17;
          force_blend[5] = uVar17 & force_blend[5];
          obj_visibility[4][6] = obj_visibility[4][6] | uVar3;
          force_alpha_obj[6] = force_alpha_obj[6] & uVar5;
          force_blend[6] = uVar5 & force_blend[6];
          obj_visibility[4][7] = obj_visibility[4][7] | uVar9;
          force_alpha_obj[7] = force_alpha_obj[7] & uVar7;
          force_blend[7] = uVar7 & force_blend[7];
joined_r0x080bcaa0:
          if (pauVar15 == local_1c0) goto LAB_080bc5dc;
        }
        if ((bVar1 & 0x80) != 0) {
          render_scanline_obj_combine_pixels(obj_scanline_pixels + iVar10,iVar13,uVar9);
          uVar17 = *(uint *)(puVar16 + 0x28);
          uVar3 = *(uint *)((int)puVar16 + 0x144);
          uVar5 = *(uint *)(puVar16 + 0x29);
          uVar9 = *(uint *)((int)puVar16 + 0x14c);
          obj_visibility[4][0] = obj_visibility[4][0] | uVar17;
          uVar7 = *(uint *)(puVar16 + 0x2a);
          *force_alpha_obj = *force_alpha_obj & ~uVar17;
          *force_blend = *force_blend | uVar17;
          obj_visibility[4][1] = obj_visibility[4][1] | uVar3;
          force_alpha_obj[1] = force_alpha_obj[1] & ~uVar3;
          force_blend[1] = force_blend[1] | uVar3;
          obj_visibility[4][2] = obj_visibility[4][2] | uVar5;
          force_alpha_obj[2] = force_alpha_obj[2] & ~uVar5;
          force_blend[2] = force_blend[2] | uVar5;
          obj_visibility[4][3] = obj_visibility[4][3] | uVar9;
          force_alpha_obj[3] = force_alpha_obj[3] & ~uVar9;
          force_blend[3] = force_blend[3] | uVar9;
          obj_visibility[4][4] = obj_visibility[4][4] | uVar7;
          force_alpha_obj[4] = force_alpha_obj[4] & ~uVar7;
          uVar3 = *(uint *)((int)puVar16 + 0x154);
          uVar5 = *(uint *)(puVar16 + 0x2b);
          uVar9 = *(uint *)((int)puVar16 + 0x15c);
          force_blend[4] = force_blend[4] | uVar7;
          obj_visibility[4][5] = obj_visibility[4][5] | uVar3;
          force_alpha_obj[5] = force_alpha_obj[5] & ~uVar3;
          force_blend[5] = force_blend[5] | uVar3;
          obj_visibility[4][6] = obj_visibility[4][6] | uVar5;
          force_alpha_obj[6] = force_alpha_obj[6] & ~uVar5;
          force_blend[6] = force_blend[6] | uVar5;
          obj_visibility[4][7] = obj_visibility[4][7] | uVar9;
          force_alpha_obj[7] = force_alpha_obj[7] & ~uVar9;
          force_blend[7] = force_blend[7] | uVar9;
          goto joined_r0x080bcaa0;
        }
        if (uVar9 != 0) {
          puVar14 = (ushort *)(iVar13 + -2);
          puVar6 = obj_scanline_pixels + iVar10;
          pbVar11 = pixel_alpha + iVar10;
          do {
            puVar14 = puVar14 + 1;
            pbVar12 = pbVar11 + 1;
            if ((*puVar14 & 0x8000) != 0) {
              *puVar6 = *puVar14;
              *pbVar11 = bVar1;
            }
            puVar6 = puVar6 + 1;
            pbVar11 = pbVar12;
          } while (pixel_alpha + iVar10 + uVar9 != pbVar12);
        }
        uVar9 = *(uint *)(puVar16 + 0x28);
        uVar17 = *(uint *)((int)puVar16 + 0x144);
        uVar3 = *(uint *)(puVar16 + 0x29);
        uVar5 = *(uint *)((int)puVar16 + 0x14c);
        obj_visibility[4][0] = obj_visibility[4][0] | uVar9;
        *force_alpha_obj = *force_alpha_obj | uVar9;
        uVar7 = *(uint *)(puVar16 + 0x2a);
        *force_blend = *force_blend & ~uVar9;
        obj_visibility[4][1] = obj_visibility[4][1] | uVar17;
        force_alpha_obj[1] = force_alpha_obj[1] | uVar17;
        force_blend[1] = force_blend[1] & ~uVar17;
        obj_visibility[4][2] = obj_visibility[4][2] | uVar3;
        force_alpha_obj[2] = force_alpha_obj[2] | uVar3;
        force_blend[2] = force_blend[2] & ~uVar3;
        obj_visibility[4][3] = obj_visibility[4][3] | uVar5;
        force_alpha_obj[3] = force_alpha_obj[3] | uVar5;
        force_blend[3] = force_blend[3] & ~uVar5;
        obj_visibility[4][4] = obj_visibility[4][4] | uVar7;
        force_alpha_obj[4] = force_alpha_obj[4] | uVar7;
        uVar3 = *(uint *)((int)puVar16 + 0x154);
        uVar5 = *(uint *)(puVar16 + 0x2b);
        uVar9 = *(uint *)((int)puVar16 + 0x15c);
        force_blend[4] = force_blend[4] & ~uVar7;
        obj_visibility[4][5] = obj_visibility[4][5] | uVar3;
        force_alpha_obj[5] = force_alpha_obj[5] | uVar3;
        force_blend[5] = force_blend[5] & ~uVar3;
        obj_visibility[4][6] = obj_visibility[4][6] | uVar5;
        force_alpha_obj[6] = force_alpha_obj[6] | uVar5;
        force_blend[6] = force_blend[6] & ~uVar5;
        obj_visibility[4][7] = obj_visibility[4][7] | uVar9;
        force_alpha_obj[7] = force_alpha_obj[7] | uVar9;
        force_blend[7] = force_blend[7] & ~uVar9;
      } while (pauVar15 != local_1c0);
LAB_080bc5dc:
      uVar8 = 0x10;
    }
    obj_visibility = obj_visibility + -1;
    local_1ac = local_1ac + -0xc0;
    local_1c0 = local_1c0 + -0xc0;
    if (pauVar4 == obj_visibility) {
      if (iVar2 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return uVar8;
    }
  } while( true );
}


