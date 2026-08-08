/*
 * Ghidra decompilation
 *
 * Function : texture_cache_convert_compressed
 * Address  : 0808bf84
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void texture_cache_convert_compressed
               (texture_cache_element_struct *texture_cache_element,u32 *texture_source,
               u16 *texture_palette_select,u32 palette_offset,u16 **palette_slots)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  u32 pixel_index;
  u32 *puVar4;
  u32 pixel_index_1;
  u32 pixel_index_2;
  u32 uVar5;
  u16 *puVar6;
  u32 *puVar7;
  u32 texture_width;
  u32 pixel_index_3;
  u32 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  u32 pixel_4;
  uint uVar13;
  u32 texture_dest_pitch;
  u32 current_compressed_block;
  uint uVar14;
  u32 pixel_5;
  uint uVar15;
  uint *puVar16;
  int iVar17;
  size_t __size;
  uint uVar18;
  size_t __size_00;
  u32 uVar19;
  u32 *puVar20;
  u32 pixel_1;
  u32 *puVar21;
  u32 *texture_dest;
  u32 uVar22;
  uint uVar23;
  uint *puVar24;
  u32 uVar25;
  u32 uVar26;
  uint uVar27;
  u16 *local_4e0;
  uint local_4dc;
  u16 *current_palette;
  u32 pixel;
  u32 *local_4a0;
  u32 *local_49c;
  u16 *local_498;
  uint local_494;
  u32 pixel_2;
  u32 pixel_3;
  uint local_444;
  uint local_440;
  u32 quantized_palette [260];
  
  iVar3 = __stack_chk_guard;
  puVar7 = texture_cache_element->data;
  uVar13 = (uint)texture_cache_element->width;
  uVar12 = (uint)(texture_cache_element->height >> 2);
  uVar1 = (uint)(texture_cache_element->width >> 2);
  if (uVar12 == 0) {
    __size_00 = 4;
    local_4dc = 1;
    __size = 0;
LAB_0808c718:
    quantized_palette[0] = 0;
    puVar7 = (u32 *)malloc(__size_00);
    texture_cache_element->palette = puVar7;
    memcpy(puVar7,quantized_palette,__size_00);
    puVar7 = (u32 *)realloc(texture_cache_element->data,__size);
    texture_cache_element->data = puVar7;
    texture_cache_element->format = '\b';
    texture_cache_element->paletted = '\x01';
    if (local_4dc < 2) goto LAB_0808c670;
  }
  else {
    local_494 = 0;
    local_4e0 = texture_cache_convert_compressed::zero_palette;
    local_4dc = 1;
    local_4a0 = puVar7;
    local_49c = texture_source;
    local_498 = texture_palette_select;
    do {
      if (uVar1 != 0) {
        uVar18 = 0;
        current_palette = (u16 *)(local_49c + -1);
        puVar20 = local_4a0 + uVar13 * 2 + uVar13;
        pixel = (u32)(local_498 + -1);
        puVar21 = local_4a0 + uVar13 * 2;
        puVar4 = local_4a0;
        do {
          pixel = pixel + 2;
          current_palette = current_palette + 2;
          uVar14 = *(uint *)current_palette;
          uVar2 = *(ushort *)pixel >> 0xe;
          uVar9 = palette_offset + (*(ushort *)pixel & 0x3fff) * 2;
          uVar10 = uVar9 & 0x1fff;
          puVar6 = palette_slots[uVar9 >> 0xd];
          if (palette_slots[uVar9 >> 0xd] == (u16 *)0x0) {
            puVar6 = local_4e0;
          }
          uVar9 = (uint)puVar6[uVar10];
          uVar15 = (uint)puVar6[uVar10 + 1];
          uVar23 = ((uVar15 << 0x16) >> 0x1b) << 8 | ((uVar15 << 0x11) >> 0x1b) << 0x10 |
                   uVar15 & 0x1f;
          uVar11 = ((uVar9 << 0x11) >> 0x1b) << 0x10 | ((uVar9 << 0x16) >> 0x1b) << 8 | uVar9 & 0x1f
          ;
          uVar15 = (uVar23 + 0x1f1f1f >> 5 & 0x10101) + uVar23 * 2;
          uVar9 = (uVar11 + 0x1f1f1f >> 5 & 0x10101) + uVar11 * 2;
          pixel_2 = uVar9 | 0x1f000000;
          pixel_3 = uVar15 | 0x1f000000;
          if (uVar2 == 2) {
            uVar11 = (uint)puVar6[uVar10 + 2];
            uVar10 = (uint)puVar6[uVar10 + 3];
            uVar11 = ((uVar11 << 0x11) >> 0x1b) << 0x10 | ((uVar11 << 0x16) >> 0x1b) << 8 |
                     uVar11 & 0x1f;
            uVar10 = ((uVar10 << 0x11) >> 0x1b) << 0x10 | ((uVar10 << 0x16) >> 0x1b) << 8 |
                     uVar10 & 0x1f;
            local_444 = (uVar11 + 0x1f1f1f >> 5 & 0x10101) + uVar11 * 2 | 0x1f000000;
            local_440 = (uVar10 + 0x1f1f1f >> 5 & 0x10101) + uVar10 * 2 | 0x1f000000;
          }
          else if (uVar2 == 3) {
            uVar27 = uVar23 * 5 + uVar11 * 3 >> 3 & 0x1f1f1f;
            uVar10 = uVar23 * 3 + uVar11 * 5 >> 3 & 0x1f1f1f;
            local_444 = (uVar10 + 0x1f1f1f >> 5 & 0x10101) + uVar10 * 2 | 0x1f000000;
            local_440 = (uVar27 + 0x1f1f1f >> 5 & 0x10101) + uVar27 * 2 | 0x1f000000;
          }
          else if (uVar2 == 1) {
            uVar10 = uVar23 + uVar11 >> 1 & 0x1f1f1f;
            local_440 = 0;
            local_444 = (uVar10 + 0x1f1f1f >> 5 & 0x10101) + uVar10 * 2 | 0x1f000000;
          }
          else {
            local_440 = 0;
            uVar10 = (uint)puVar6[uVar10 + 2];
            uVar10 = ((uVar10 << 0x11) >> 0x1b) << 0x10 | ((uVar10 << 0x16) >> 0x1b) << 8 |
                     uVar10 & 0x1f;
            local_444 = (uVar10 + 0x1f1f1f >> 5 & 0x10101) + uVar10 * 2 | 0x1f000000;
          }
          if (local_4dc < 0x101) {
            uVar10 = (uVar9 & 0x3f0000) >> 4 | (uVar9 & 0x3f00) >> 2 | uVar9 & 0x3f;
            if (texture_cache_convert_compressed::unique_color_map[uVar10] == '\0') {
              texture_cache_convert_compressed::unique_color_map[uVar10] = (u8)local_4dc;
              quantized_palette[local_4dc] = uVar9 | 0x1f000000;
              local_4dc = local_4dc + 1;
            }
            uVar9 = (uVar15 & 0x3f0000) >> 4 | (uVar15 & 0x3f00) >> 2 | uVar15 & 0x3f;
            if (texture_cache_convert_compressed::unique_color_map[uVar9] == '\0') {
              texture_cache_convert_compressed::unique_color_map[uVar9] = (u8)local_4dc;
              quantized_palette[local_4dc] = uVar15 | 0x1f000000;
              local_4dc = local_4dc + 1;
            }
            uVar9 = (local_444 & 0x3f0000) >> 4 | (local_444 & 0x3f00) >> 2 | local_444 & 0x3f;
            if (texture_cache_convert_compressed::unique_color_map[uVar9] == '\0') {
              texture_cache_convert_compressed::unique_color_map[uVar9] = (u8)local_4dc;
              quantized_palette[local_4dc] = local_444;
              local_4dc = local_4dc + 1;
            }
            if ((local_440 != 0) &&
               (uVar9 = (local_440 & 0x3f0000) >> 4 | (local_440 & 0x3f00) >> 2 | local_440 & 0x3f,
               texture_cache_convert_compressed::unique_color_map[uVar9] == '\0')) {
              texture_cache_convert_compressed::unique_color_map[uVar9] = (u8)local_4dc;
              quantized_palette[local_4dc] = local_440;
              local_4dc = local_4dc + 1;
            }
          }
          uVar5 = (&pixel_2)[uVar14 >> 0x1e];
          uVar25 = (&pixel_2)[(uVar14 << 0x1a) >> 0x1e];
          *puVar4 = (&pixel_2)[uVar14 & 3];
          uVar8 = (&pixel_2)[(uVar14 << 0x18) >> 0x1e];
          uVar19 = (&pixel_2)[(uVar14 << 0x16) >> 0x1e];
          puVar4[2] = uVar25;
          puVar4[3] = uVar8;
          uVar26 = (&pixel_2)[(uVar14 << 0x12) >> 0x1e];
          uVar25 = (&pixel_2)[(uVar14 << 0x14) >> 0x1e];
          puVar4[1] = *(u32 *)((int)&pixel_2 + (uVar14 & 0xc));
          uVar22 = (&pixel_2)[(uVar14 << 0x10) >> 0x1e];
          uVar8 = (&pixel_2)[(uVar14 << 0xe) >> 0x1e];
          local_4a0[uVar13 + uVar18 * 4] = uVar19;
          uVar19 = (&pixel_2)[(uVar14 << 0xc) >> 0x1e];
          local_4a0[uVar13 + uVar18 * 4 + 1] = uVar25;
          local_4a0[uVar13 + uVar18 * 4 + 2] = uVar26;
          uVar26 = (&pixel_2)[(uVar14 << 8) >> 0x1e];
          local_4a0[uVar13 + uVar18 * 4 + 3] = uVar22;
          uVar22 = (&pixel_2)[(uVar14 << 10) >> 0x1e];
          *puVar21 = uVar8;
          puVar21[1] = uVar19;
          uVar8 = (&pixel_2)[(uVar14 << 6) >> 0x1e];
          uVar25 = (&pixel_2)[(uVar14 << 4) >> 0x1e];
          local_4a0[uVar13 * 2 + uVar18 * 4 + 2] = uVar22;
          puVar21[3] = uVar26;
          uVar19 = (&pixel_2)[(uVar14 << 2) >> 0x1e];
          *puVar20 = uVar8;
          puVar20[1] = uVar25;
          puVar20[2] = uVar19;
          puVar20 = puVar20 + 4;
          local_4a0[uVar13 * 3 + uVar18 * 4 + 3] = uVar5;
          uVar18 = uVar18 + 1;
          puVar21 = puVar21 + 4;
          puVar4 = puVar4 + 4;
        } while (uVar1 != uVar18);
        local_49c = local_49c + uVar1;
        local_498 = local_498 + uVar1;
        local_4a0 = local_4a0 + uVar1 * 4;
      }
      local_494 = local_494 + 1;
      local_4a0 = local_4a0 + uVar13 * 3;
    } while (uVar12 != local_494);
    if (local_4dc < 0x101) {
      __size_00 = local_4dc << 2;
      iVar17 = uVar12 * uVar1;
      __size = iVar17 * 0x10;
      if (iVar17 != 0) {
        puVar4 = puVar7 + -1;
        puVar21 = puVar7 + iVar17 * 4;
        do {
          puVar4 = puVar4 + 1;
          uVar12 = *puVar4;
          if (uVar12 != 0) {
            uVar12 = (uint)texture_cache_convert_compressed::unique_color_map
                           [uVar12 & 0x3f | (uVar12 & 0x3f0000) >> 4 | (uVar12 & 0x3f00) >> 2];
          }
          *(char *)puVar7 = (char)uVar12;
          puVar7 = (u32 *)((int)puVar7 + 1);
        } while (puVar21 != puVar7);
      }
      goto LAB_0808c718;
    }
  }
  puVar24 = quantized_palette;
  puVar16 = puVar24 + local_4dc + 0x3fffffff;
  do {
    puVar24 = puVar24 + 1;
    uVar12 = *puVar24;
    texture_cache_convert_compressed::unique_color_map
    [uVar12 & 0x3f | (uVar12 & 0x3f0000) >> 4 | (uVar12 & 0x3f00) >> 2] = '\0';
  } while (puVar16 != puVar24);
LAB_0808c670:
  if (iVar3 == __stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


