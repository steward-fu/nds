/*
 * Ghidra decompilation
 *
 * Function : reset_video
 * Address  : 08036610
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void reset_video(video_struct *video)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined auVar20 [16];
  byte bVar21;
  ushort uVar22;
  ushort uVar23;
  undefined auVar24 [16];
  undefined auVar25 [16];
  undefined auVar26 [16];
  undefined auVar27 [16];
  undefined auVar28 [16];
  undefined auVar29 [16];
  undefined auVar30 [16];
  undefined auVar31 [16];
  undefined auVar32 [16];
  undefined auVar33 [16];
  undefined auVar34 [16];
  undefined auVar35 [16];
  undefined auVar36 [16];
  undefined auVar37 [16];
  undefined auVar38 [16];
  undefined auVar39 [16];
  undefined auVar40 [16];
  undefined auVar41 [16];
  undefined auVar42 [16];
  undefined auVar43 [16];
  undefined auVar44 [16];
  undefined auVar45 [16];
  undefined auVar46 [16];
  u8 uVar47;
  u8 uVar48;
  ulonglong uVar49;
  int iVar50;
  u16 *puVar51;
  uint uVar52;
  memory_struct *pmVar53;
  memory_struct *memory_1;
  u8 **ppuVar54;
  int iVar55;
  u16 **ppuVar56;
  u16 **palette_ram;
  u32 allocation_mask_4;
  u16 *puVar57;
  u16 *puVar58;
  u32 bank_bits_offset_1;
  u16 *puVar59;
  uint uVar60;
  u8 **ppuVar61;
  u32 allocation_mask;
  u32 allocation_mask_1;
  u16 **ppuVar62;
  u32 uVar63;
  u16 *puVar64;
  uint uVar65;
  uint uVar66;
  u8 **ppuVar67;
  u16 *puVar68;
  u16 **ppuVar69;
  u8 **ppuVar70;
  u8 *puVar71;
  uint uVar72;
  u8 *vram_map_dirty_bit_numbers_7;
  video_2d_bg_layer_struct *bg_layers;
  u16 *puVar73;
  u16 *puVar74;
  byte *pbVar75;
  uint uVar76;
  u32 remap_banks;
  u32 vram_region_size;
  u8 *vram_map_dirty_bit_numbers;
  u8 *vram_map_dirty_bit_numbers_2;
  u16 **ppuVar77;
  u8 **ppuVar78;
  int iVar79;
  uint uVar80;
  int iVar81;
  uint uVar82;
  u16 *puVar83;
  u16 *puVar84;
  capture_settings_struct *pcVar85;
  uint uVar86;
  undefined *puVar87;
  u16 *__s;
  u8 *vram_map_dirty_bit_numbers_6;
  int iVar88;
  u8 *vram_map_dirty_bit_numbers_9;
  uint uVar89;
  u16 *vram_map_allocation_bitmap;
  u8 *puVar90;
  int iVar91;
  u32 allocation_mask_3;
  u16 **ppuVar92;
  u16 *puVar93;
  u16 *puVar94;
  memory_struct *pmVar95;
  memory_struct *memory;
  u8 *puVar96;
  u32 vram_bank_dirty_bits;
  uint uVar97;
  u32 allocation_mask_2;
  uint uVar98;
  uint uVar99;
  u8 **ppuVar100;
  bool bVar101;
  bool bVar102;
  bool bVar103;
  bool bVar104;
  undefined auVar105 [16];
  undefined auVar106 [16];
  undefined auVar107 [16];
  undefined auVar108 [16];
  undefined auVar109 [16];
  undefined auVar110 [16];
  undefined auVar111 [16];
  undefined auVar112 [16];
  undefined8 uVar113;
  undefined8 uVar114;
  undefined8 uVar115;
  undefined auVar116 [16];
  undefined auVar117 [16];
  undefined auVar118 [16];
  undefined auVar119 [16];
  undefined auVar120 [16];
  undefined auVar121 [16];
  undefined auVar122 [16];
  undefined auVar123 [16];
  undefined auVar124 [16];
  undefined auVar125 [16];
  undefined auVar126 [16];
  uint local_18c;
  u32 dirty_bit_number_3;
  video_struct *local_184;
  uint local_180;
  u8 **vram_map;
  u8 **local_178;
  video_struct *local_170;
  uint local_16c;
  u8 *vram_map_dirty_bit_numbers_8;
  u8 **local_164;
  u16 *local_160;
  uint local_144;
  u16 *local_140;
  uint local_13c;
  u8 *local_128;
  uint local_120;
  uint local_114;
  uint local_10c;
  u8 *local_104;
  u8 *local_e8;
  u16 *local_e4;
  u8 *local_e0;
  u16 *local_cc;
  u16 *local_c0;
  u8 *local_b0;
  u32 vram_region_sizes [9];
  
  iVar50 = __stack_chk_guard;
  puVar73 = video->vram_map_allocation_bitmap + 0x82;
  puVar64 = video->vram_map_allocation_bitmap + 0x83;
  puVar93 = video->vram_map_allocation_bitmap + 0x80;
  puVar94 = video->vram_map_allocation_bitmap + 0x84;
  pmVar95 = video->memory;
  uVar65 = -((uint)((int)video->vram_map_allocation_bitmap * 0x20000000) >> 0x1e) & 7;
  puVar59 = video->vram_map_allocation_bitmap + 0x86;
  puVar51 = video->vram_map_allocation_bitmap + 0x87;
  uVar66 = -((uint)((int)video << 0x1d) >> 0x1e) & 7;
  uVar99 = -((uint)((int)puVar64 * 0x20000000) >> 0x1e) & 7;
  __s = video->vram_map_allocation_bitmap;
  puVar74 = video->texture_palette_allocation_bitmap;
  ppuVar67 = video->texture_slots;
  puVar68 = video->texture_allocation_bitmap;
  ppuVar69 = video->texture_palette_slots;
  memory = (memory_struct *)((int)video << 0x1d);
  memory = (memory_struct *)((uint)memory >> 0x1e);
  uVar52 = -((uint)((int)puVar51 * 0x20000000) >> 0x1e) & 7;
  uVar60 = -((uint)((int)video->vram_map_allocation_bitmap * 0x20000000) >> 0x1e) & 7;
  ppuVar78 = video->vram_map;
  vram_map_dirty_bit_numbers_8 = (u8 *)0x0;
  local_170 = video;
  local_164 = video->vram_bank_ptrs + 8;
  do {
    pbVar75 = local_164[1];
    local_170->vram_bank_maps[0].address_space_type = VRAM_ADDRESS_SPACE_UNMAPPED;
    uVar76 = (uint)*pbVar75;
    if (uVar76 != local_170->vram_bank_maps[0].map_setting) {
      pbVar75 = local_164[-8];
      video->remap_banks = 0;
      remap_vram_body(video,pbVar75,(u32)vram_map_dirty_bit_numbers_8,uVar76,1);
      local_18c = (uint)video->remap_banks;
      if (local_18c != 0) {
        dirty_bit_number_3 = 0;
        vram_map = video->vram_control_ptrs;
        local_180 = 0;
        local_10c = 0xff768000;
        local_184 = video;
        local_178 = video->vram_bank_ptrs;
        do {
          if ((local_18c & 1) == 0) goto LAB_08036850;
          pbVar75 = *vram_map;
          local_184->vram_bank_maps[0].map_setting = 0xffffffff;
          vram_region_sizes[0] = 0x80;
          vram_region_sizes[1] = 0x80;
          bVar21 = *pbVar75;
          vram_region_sizes[2] = 0x80;
          vram_region_sizes[3] = 0x80;
          vram_region_sizes[4] = 0x40;
          vram_region_sizes[5] = 0x10;
          vram_region_sizes[6] = 0x10;
          vram_region_sizes[7] = 0x20;
          vram_region_sizes[8] = 0x10;
          pmVar53 = video->memory;
          puVar84 = (u16 *)*local_178;
          uVar76 = vram_region_sizes[dirty_bit_number_3];
          local_16c = uVar76;
          if (-1 < (char)bVar21) {
switchD_08036934_caseD_6:
            uVar80 = 0xb;
LAB_08036980:
            uVar86 = 0;
            goto LAB_08036984;
          }
          uVar97 = (uint)(bVar21 >> 3);
          uVar86 = uVar97 & 3;
          uVar47 = (u8)local_180;
          switch(bVar21 & 7) {
          case 0:
            switch(dirty_bit_number_3) {
            case 0:
            case 1:
            case 2:
            case 3:
              uVar63 = (dirty_bit_number_3 + 0x340) * 0x20000;
              uVar82 = dirty_bit_number_3 * -0x20000 - 0x800000;
              uVar86 = local_180 + 0x200;
              local_120 = local_180 + 0x180;
              break;
            case 4:
              uVar86 = 0x220;
              uVar82 = 0xff780000;
              uVar63 = 0x6880000;
              local_120 = 0x1a0;
              break;
            case 5:
            case 6:
              uVar82 = dirty_bit_number_3 * -0x4000 - 0x87c000;
              local_120 = dirty_bit_number_3 + 0x19f;
              uVar86 = dirty_bit_number_3 + 0x21f;
              uVar63 = (dirty_bit_number_3 + 0x1a1f) * 0x4000;
              break;
            case 7:
              uVar86 = 0x226;
              uVar63 = 0x6898000;
              local_120 = 0x1a6;
              uVar82 = local_10c;
              break;
            case 8:
              uVar86 = 0x228;
              uVar63 = 0x68a0000;
              local_120 = 0x1a8;
              uVar82 = 0xff760000;
              break;
            default:
              goto switchD_08036934_caseD_7;
            }
            local_128 = (u8 *)((uVar76 >> 4) << 0xe);
            unmap_memory_page_region_direct(pmVar53->memory_interface_arm9,uVar63,(u32)local_128);
            goto LAB_0803999c;
          case 1:
            switch(dirty_bit_number_3) {
            case 0:
            case 1:
            case 2:
            case 3:
switchD_08036a90_caseD_0:
              uVar86 = uVar86 * 8;
              local_120 = uVar86 - 0x80;
              uVar63 = (uVar86 + 0x1800) * 0x4000;
              uVar82 = (uVar86 + 0x1800) * -0x4000 + 0x6000000;
              break;
            default:
              goto switchD_08036934_caseD_7;
            case 5:
            case 6:
              uVar86 = (uVar97 & 1) + (uVar97 & 2) * 2;
LAB_0803a1ac:
              uVar76 = uVar76 >> 4;
              uVar63 = (uVar86 + 0x1800) * 0x4000;
              unmap_memory_page_region_direct(pmVar53->memory_interface_arm9,uVar63,uVar76 << 0xe);
              uVar97 = uVar86 >> 5;
              iVar81 = (1 << (uVar76 & 0xff)) + -1;
              iVar79 = (uVar76 + 0x26 + uVar86) * 4;
              iVar91 = uVar76 + 0x8be + uVar86;
              iVar88 = uVar86 + 0x197c;
              bVar104 = SBORROW4(iVar79,uVar86 * 2 + 0x117c);
              iVar55 = iVar79 + (uVar86 + 0x8be) * -2;
              bVar102 = iVar55 < 0;
              bVar101 = iVar55 == 0;
              if (bVar101 || bVar102 != bVar104) {
                bVar104 = SBORROW4(iVar79,iVar88);
                bVar102 = iVar79 - iVar88 < 0;
                bVar101 = iVar79 - iVar88 == 0;
              }
              video->vram_map_dirty_bitmap_fine[uVar97] =
                   video->vram_map_dirty_bitmap_fine[uVar97] | iVar81 << (uVar86 & 0x1f);
              uVar23 = (ushort)(1 << (dirty_bit_number_3 & 0xff));
              video->vram_map_dirty_bitmap_coarse =
                   video->vram_map_dirty_bitmap_coarse | 1 << uVar97;
              vram_map_dirty_bit_numbers_7 = (u8 *)((int)puVar84 - (uVar63 + 0xfa000000));
              if (iVar88 + iVar91 * -2 < 0 != SBORROW4(iVar88,iVar91 * 2) ||
                  (!bVar101 && bVar102 == bVar104 || uVar76 < 0x14)) {
                puVar58 = __s + uVar86;
                uVar97 = local_180;
                ppuVar54 = ppuVar78 + uVar86;
                puVar71 = video->vram_map_dirty_bit_numbers + uVar86;
                do {
                  uVar22 = *puVar58;
                  *ppuVar54 = vram_map_dirty_bit_numbers_7;
                  *puVar58 = uVar23 | uVar22;
                  *puVar71 = (u8)uVar97;
                  uVar97 = uVar97 + 1;
                  puVar58 = puVar58 + 1;
                  ppuVar54 = ppuVar54 + 1;
                  puVar71 = puVar71 + 1;
                } while (uVar97 != uVar76 + local_180);
              }
              else {
                uVar97 = -((uint)((int)(video->vram_map_allocation_bitmap + uVar86) * 0x20000000) >>
                          0x1e) & 7;
                if (uVar76 <= uVar97) {
                  uVar97 = uVar76;
                }
                if (uVar97 == 0) {
                  local_144 = local_180;
                  uVar80 = uVar86;
                  local_140 = (u16 *)uVar76;
                }
                else {
                  uVar22 = __s[uVar86];
                  ppuVar78[uVar86] = vram_map_dirty_bit_numbers_7;
                  local_140 = (u16 *)(uVar76 - 1);
                  __s[uVar86] = uVar23 | uVar22;
                  local_144 = local_180 + 1;
                  video->vram_map_dirty_bit_numbers[uVar86] = uVar47;
                  uVar80 = uVar86 + 1;
                  if (uVar97 != 1) {
                    local_144 = local_180 + 2;
                    uVar22 = __s[uVar80];
                    local_140 = (u16 *)(uVar76 - 2);
                    ppuVar78[uVar80] = vram_map_dirty_bit_numbers_7;
                    __s[uVar80] = uVar23 | uVar22;
                    video->vram_map_dirty_bit_numbers[uVar86 + 1] = uVar47 + '\x01';
                    uVar80 = uVar86 + 2;
                    if (uVar97 != 2) {
                      ppuVar78[uVar80] = vram_map_dirty_bit_numbers_7;
                      local_144 = local_180 + 3;
                      local_140 = (u16 *)(uVar76 - 3);
                      __s[uVar80] = uVar23 | __s[uVar80];
                      video->vram_map_dirty_bit_numbers[uVar86 + 2] = uVar47 + '\x02';
                      uVar80 = uVar86 + 3;
                      if (uVar97 != 3) {
                        ppuVar78[uVar80] = vram_map_dirty_bit_numbers_7;
                        local_144 = local_180 + 4;
                        local_140 = (u16 *)(uVar76 - 4);
                        __s[uVar80] = uVar23 | __s[uVar80];
                        video->vram_map_dirty_bit_numbers[uVar86 + 3] = uVar47 + '\x03';
                        uVar80 = uVar86 + 4;
                        if (uVar97 != 4) {
                          ppuVar78[uVar80] = vram_map_dirty_bit_numbers_7;
                          local_144 = local_180 + 5;
                          local_140 = (u16 *)(uVar76 - 5);
                          __s[uVar80] = uVar23 | __s[uVar80];
                          video->vram_map_dirty_bit_numbers[uVar86 + 4] = uVar47 + '\x04';
                          uVar80 = uVar86 + 5;
                          if (uVar97 != 5) {
                            ppuVar78[uVar80] = vram_map_dirty_bit_numbers_7;
                            local_144 = local_180 + 6;
                            local_140 = (u16 *)(uVar76 - 6);
                            __s[uVar80] = uVar23 | __s[uVar80];
                            video->vram_map_dirty_bit_numbers[uVar86 + 5] = uVar47 + '\x05';
                            uVar80 = uVar86 + 6;
                            if (uVar97 == 7) {
                              ppuVar78[uVar80] = vram_map_dirty_bit_numbers_7;
                              local_144 = local_180 + 7;
                              local_140 = (u16 *)(uVar76 - 7);
                              __s[uVar80] = uVar23 | __s[uVar80];
                              video->vram_map_dirty_bit_numbers[uVar86 + 6] = uVar47 + '\x06';
                              uVar80 = uVar86 + 7;
                            }
                          }
                        }
                      }
                    }
                  }
                  if (uVar76 == uVar97) goto LAB_0803a988;
                }
                local_120 = uVar76 - 1;
                uVar82 = ((uVar76 - uVar97) - 0x10 >> 4) + 1;
                iVar79 = uVar82 * 0x10;
                if (0xe < local_120 - uVar97) {
                  auVar1 = SIMDExpandImmediate(0,0,0x10);
                  auVar2 = SIMDExpandImmediate(0,0,4);
                  auVar122 = SIMDExpandImmediate(0,0,8);
                  auVar13._4_4_ = CONCAT22(uVar23,uVar23);
                  auVar13._0_4_ = CONCAT22(uVar23,uVar23);
                  auVar13._8_8_ = 0;
                  auVar13 = auVar13 & auVar13 << 0x40;
                  auVar14._4_4_ = local_144;
                  auVar14._0_4_ = local_144;
                  auVar14._8_8_ = 0;
                  auVar124 = SIMDExpandImmediate(0,0,0xc);
                  auVar36._8_8_ = 0x300000002;
                  auVar36._0_8_ = 0x100000000;
                  auVar123 = VectorAdd(auVar14 & auVar14 << 0x40,auVar36,4);
                  local_b0 = video->vram_map_dirty_bit_numbers + iVar88 + uVar97 + -0x197c;
                  local_13c = 0;
                  ppuVar54 = video->vram_map + uVar97 + uVar86;
                  puVar58 = video->vram_map_allocation_bitmap + uVar97 + uVar86 + 0x10;
                  local_c0 = video->vram_map_allocation_bitmap + uVar97 + uVar86 + 0x10;
                  do {
                    auVar116 = VectorAdd(auVar123,auVar2,4);
                    auVar112 = VectorAdd(auVar123,auVar124,4);
                    auVar118 = *(undefined (*) [16])(puVar58 + -8);
                    auVar105 = VectorAdd(auVar123,auVar122,4);
                    auVar126 = *(undefined (*) [16])(puVar58 + -0x10);
                    local_13c = local_13c + 1;
                    *(undefined8 *)ppuVar54 = 0;
                    *(undefined8 *)(ppuVar54 + 2) = 0;
                    *(undefined8 *)(ppuVar54 + 4) = 0;
                    *(undefined8 *)(ppuVar54 + 6) = 0;
                    uVar113 = VectorCopyNarrow(auVar123,4);
                    uVar114 = VectorCopyNarrow(auVar116,4);
                    auVar119._0_8_ = VectorCopyNarrow(auVar105,4);
                    auVar119._8_8_ = VectorCopyNarrow(auVar112,4);
                    auVar123 = VectorAdd(auVar123,auVar1,4);
                    auVar26._8_8_ = uVar114;
                    auVar26._0_8_ = uVar113;
                    uVar113 = VectorCopyNarrow(auVar26,2);
                    uVar114 = VectorCopyNarrow(auVar119,2);
                    auVar126 = auVar126 | auVar13;
                    *(undefined8 *)(ppuVar54 + 8) = 0;
                    *(undefined8 *)(ppuVar54 + 10) = 0;
                    *(undefined8 *)(ppuVar54 + 0xc) = 0;
                    *(undefined8 *)(ppuVar54 + 0xe) = 0;
                    auVar118 = auVar13 | auVar118;
                    *(longlong *)(local_c0 + -0x10) = auVar126._0_8_;
                    *(longlong *)(local_c0 + -0xc) = auVar126._8_8_;
                    *(longlong *)(local_c0 + -8) = auVar118._0_8_;
                    *(longlong *)(local_c0 + -4) = auVar118._8_8_;
                    *(undefined8 *)local_b0 = uVar113;
                    *(undefined8 *)(local_b0 + 8) = uVar114;
                    local_b0 = local_b0 + 0x10;
                    ppuVar54 = ppuVar54 + 0x10;
                    puVar58 = puVar58 + 0x10;
                    local_c0 = local_c0 + 0x10;
                  } while (local_13c < uVar82);
                  local_140 = (u16 *)((int)local_140 + uVar82 * -0x10);
                  uVar80 = uVar80 + iVar79;
                  local_144 = local_144 + iVar79;
                  if (uVar76 - uVar97 == iVar79) goto LAB_0803a988;
                }
                uVar22 = __s[uVar80];
                ppuVar78[uVar80] = vram_map_dirty_bit_numbers_7;
                iVar79 = uVar80 + 1;
                __s[uVar80] = uVar23 | uVar22;
                uVar48 = (u8)local_144;
                video->vram_map_dirty_bit_numbers[uVar80] = uVar48;
                if (local_140 != (u16 *)0x1) {
                  iVar55 = uVar80 + 2;
                  ppuVar78[iVar79] = vram_map_dirty_bit_numbers_7;
                  __s[iVar79] = uVar23 | __s[iVar79];
                  video->vram_map_dirty_bit_numbers[uVar80 + 1] = uVar48 + '\x01';
                  if (local_140 != (u16 *)0x2) {
                    ppuVar78[iVar55] = vram_map_dirty_bit_numbers_7;
                    iVar79 = uVar80 + 3;
                    __s[iVar55] = uVar23 | __s[iVar55];
                    video->vram_map_dirty_bit_numbers[uVar80 + 2] = uVar48 + '\x02';
                    if (local_140 != (u16 *)0x3) {
                      ppuVar78[iVar79] = vram_map_dirty_bit_numbers_7;
                      iVar55 = uVar80 + 4;
                      __s[iVar79] = uVar23 | __s[iVar79];
                      video->vram_map_dirty_bit_numbers[uVar80 + 3] = uVar48 + '\x03';
                      if (local_140 != (u16 *)0x4) {
                        ppuVar78[iVar55] = vram_map_dirty_bit_numbers_7;
                        iVar79 = uVar80 + 5;
                        __s[iVar55] = uVar23 | __s[iVar55];
                        video->vram_map_dirty_bit_numbers[uVar80 + 4] = uVar48 + '\x04';
                        if (local_140 != (u16 *)0x5) {
                          ppuVar78[iVar79] = vram_map_dirty_bit_numbers_7;
                          iVar55 = uVar80 + 6;
                          __s[iVar79] = uVar23 | __s[iVar79];
                          video->vram_map_dirty_bit_numbers[uVar80 + 5] = uVar48 + '\x05';
                          if (local_140 != (u16 *)0x6) {
                            ppuVar78[iVar55] = vram_map_dirty_bit_numbers_7;
                            iVar79 = uVar80 + 7;
                            __s[iVar55] = uVar23 | __s[iVar55];
                            video->vram_map_dirty_bit_numbers[uVar80 + 6] = uVar48 + '\x06';
                            if (local_140 != (u16 *)0x7) {
                              ppuVar78[iVar79] = vram_map_dirty_bit_numbers_7;
                              iVar55 = uVar80 + 8;
                              __s[iVar79] = uVar23 | __s[iVar79];
                              video->vram_map_dirty_bit_numbers[uVar80 + 7] = uVar48 + '\a';
                              if (local_140 != (u16 *)0x8) {
                                ppuVar78[iVar55] = vram_map_dirty_bit_numbers_7;
                                iVar79 = uVar80 + 9;
                                __s[iVar55] = uVar23 | __s[iVar55];
                                video->vram_map_dirty_bit_numbers[uVar80 + 8] = uVar48 + '\b';
                                if (local_140 != (u16 *)0x9) {
                                  ppuVar78[iVar79] = vram_map_dirty_bit_numbers_7;
                                  iVar55 = uVar80 + 10;
                                  __s[iVar79] = uVar23 | __s[iVar79];
                                  video->vram_map_dirty_bit_numbers[uVar80 + 9] = uVar48 + '\t';
                                  if (local_140 != (u16 *)0xa) {
                                    ppuVar78[iVar55] = vram_map_dirty_bit_numbers_7;
                                    iVar79 = uVar80 + 0xb;
                                    __s[iVar55] = uVar23 | __s[iVar55];
                                    video->vram_map_dirty_bit_numbers[uVar80 + 10] = uVar48 + '\n';
                                    if (local_140 != (u16 *)0xb) {
                                      ppuVar78[iVar79] = vram_map_dirty_bit_numbers_7;
                                      iVar55 = uVar80 + 0xc;
                                      __s[iVar79] = uVar23 | __s[iVar79];
                                      video->vram_map_dirty_bit_numbers[uVar80 + 0xb] =
                                           uVar48 + '\v';
                                      if (local_140 != (u16 *)0xc) {
                                        ppuVar78[iVar55] = vram_map_dirty_bit_numbers_7;
                                        iVar79 = uVar80 + 0xd;
                                        __s[iVar55] = uVar23 | __s[iVar55];
                                        video->vram_map_dirty_bit_numbers[uVar80 + 0xc] =
                                             uVar48 + '\f';
                                        if (local_140 != (u16 *)0xd) {
                                          iVar55 = uVar80 + 0xe;
                                          ppuVar78[iVar79] = vram_map_dirty_bit_numbers_7;
                                          __s[iVar79] = uVar23 | __s[iVar79];
                                          video->vram_map_dirty_bit_numbers[uVar80 + 0xd] =
                                               uVar48 + '\r';
                                          if (local_140 != (u16 *)0xe) {
                                            ppuVar78[iVar55] = vram_map_dirty_bit_numbers_7;
                                            __s[iVar55] = uVar23 | __s[iVar55];
                                            video->vram_map_dirty_bit_numbers[uVar80 + 0xe] =
                                                 uVar48 + '\x0e';
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
LAB_0803a988:
              local_114 = uVar86 + 3;
              unmap_memory_page_region_direct
                        (video->memory->memory_interface_arm9,uVar63 + 0xc000,uVar76 << 0xe);
              uVar97 = local_114 >> 5;
              iVar79 = (uVar76 + 0x29 + uVar86) * 4;
              iVar88 = uVar86 + 0x197f;
              video->vram_map_dirty_bitmap_fine[uVar97] =
                   video->vram_map_dirty_bitmap_fine[uVar97] | iVar81 << (local_114 & 0x1f);
              iVar81 = uVar76 + 0x8c1 + uVar86;
              iVar91 = uVar86 * 2 + 0x1182;
              iVar55 = iVar79 - iVar91;
              bVar102 = iVar55 == 0;
              if (bVar102 || iVar79 < iVar91) {
                iVar55 = iVar79 - iVar88;
                bVar102 = iVar55 == 0;
                iVar91 = iVar88;
              }
              video->vram_map_dirty_bitmap_coarse =
                   video->vram_map_dirty_bitmap_coarse | 1 << uVar97;
              puVar71 = (u8 *)((int)puVar84 + (-0xc000 - (uVar63 + 0xfa000000)));
              if (iVar88 + iVar81 * -2 < 0 != SBORROW4(iVar88,iVar81 * 2) ||
                  (uVar76 < 0x14 || !bVar102 && iVar55 < 0 == SBORROW4(iVar79,iVar91))) {
                ppuVar54 = ppuVar78 + uVar86 + 2;
                puVar90 = video->vram_map_dirty_bit_numbers + uVar86 + 2;
                puVar84 = __s + uVar86 + 3;
                uVar97 = local_180;
                do {
                  uVar22 = *puVar84;
                  ppuVar54 = ppuVar54 + 1;
                  *ppuVar54 = puVar71;
                  *puVar84 = uVar23 | uVar22;
                  puVar90 = puVar90 + 1;
                  *puVar90 = (u8)uVar97;
                  uVar97 = uVar97 + 1;
                  puVar84 = puVar84 + 1;
                } while (uVar97 != uVar76 + local_180);
                uVar80 = 8;
                goto LAB_08036984;
              }
              uVar97 = -((uint)((int)(video->vram_map_allocation_bitmap + uVar86 + 3) * 0x20000000)
                        >> 0x1e) & 7;
              if (uVar76 <= uVar97) {
                uVar97 = uVar76;
              }
              uVar80 = uVar76;
              uVar82 = local_180;
              if (uVar97 == 0) {
LAB_0803ac44:
                local_120 = uVar76 - 1;
                uVar72 = ((uVar76 - uVar97) - 0x10 >> 4) + 1;
                iVar79 = uVar72 * 0x10;
                if (0xe < local_120 - uVar97) {
                  auVar15._4_4_ = uVar82;
                  auVar15._0_4_ = uVar82;
                  auVar15._8_8_ = 0;
                  auVar1 = SIMDExpandImmediate(0,0,0x10);
                  auVar2 = SIMDExpandImmediate(0,0,4);
                  auVar16._4_4_ = CONCAT22(uVar23,uVar23);
                  auVar16._0_4_ = CONCAT22(uVar23,uVar23);
                  auVar16._8_8_ = 0;
                  auVar16 = auVar16 & auVar16 << 0x40;
                  auVar122 = SIMDExpandImmediate(0,0,8);
                  auVar124 = SIMDExpandImmediate(0,0,0xc);
                  local_128 = video->vram_map_dirty_bit_numbers + iVar88 + uVar97 + -0x197c;
                  auVar37._8_8_ = 0x300000002;
                  auVar37._0_8_ = 0x100000000;
                  auVar123 = VectorAdd(auVar15 & auVar15 << 0x40,auVar37,4);
                  local_140 = (u16 *)0x0;
                  puVar84 = video->vram_map_allocation_bitmap + uVar97 + uVar86 + 0x13;
                  puVar58 = video->vram_map_allocation_bitmap + uVar97 + uVar86 + 0x13;
                  ppuVar54 = video->vram_map + uVar97 + uVar86 + 3;
                  do {
                    auVar116 = VectorAdd(auVar123,auVar2,4);
                    auVar112 = VectorAdd(auVar123,auVar124,4);
                    auVar118 = *(undefined (*) [16])(puVar58 + -8);
                    auVar105 = VectorAdd(auVar123,auVar122,4);
                    auVar126 = *(undefined (*) [16])(puVar58 + -0x10);
                    local_140 = (u16 *)((int)local_140 + 1);
                    *(undefined8 *)ppuVar54 = 0;
                    *(undefined8 *)(ppuVar54 + 2) = 0;
                    uVar113 = VectorCopyNarrow(auVar123,4);
                    uVar114 = VectorCopyNarrow(auVar116,4);
                    auVar120._0_8_ = VectorCopyNarrow(auVar105,4);
                    auVar120._8_8_ = VectorCopyNarrow(auVar112,4);
                    auVar123 = VectorAdd(auVar123,auVar1,4);
                    auVar27._8_8_ = uVar114;
                    auVar27._0_8_ = uVar113;
                    uVar113 = VectorCopyNarrow(auVar27,2);
                    uVar114 = VectorCopyNarrow(auVar120,2);
                    *(undefined8 *)(ppuVar54 + 4) = 0;
                    *(undefined8 *)(ppuVar54 + 6) = 0;
                    auVar126 = auVar126 | auVar16;
                    *(undefined8 *)(ppuVar54 + 8) = 0;
                    *(undefined8 *)(ppuVar54 + 10) = 0;
                    *(undefined8 *)(ppuVar54 + 0xc) = 0;
                    *(undefined8 *)(ppuVar54 + 0xe) = 0;
                    *(longlong *)(puVar84 + -0x10) = auVar126._0_8_;
                    *(longlong *)(puVar84 + -0xc) = auVar126._8_8_;
                    auVar118 = auVar16 | auVar118;
                    *(longlong *)(puVar84 + -8) = auVar118._0_8_;
                    *(longlong *)(puVar84 + -4) = auVar118._8_8_;
                    *(undefined8 *)local_128 = uVar113;
                    *(undefined8 *)(local_128 + 8) = uVar114;
                    local_128 = local_128 + 0x10;
                    puVar84 = puVar84 + 0x10;
                    puVar58 = puVar58 + 0x10;
                    ppuVar54 = ppuVar54 + 0x10;
                  } while (local_140 < uVar72);
                  local_114 = local_114 + iVar79;
                  uVar80 = uVar80 + uVar72 * -0x10;
                  uVar82 = uVar82 + iVar79;
                  if (uVar76 - uVar97 == iVar79) goto LAB_0803b078;
                }
                uVar47 = (u8)uVar82;
                uVar22 = __s[local_114];
                iVar79 = local_114 + 1;
                ppuVar78[local_114] = puVar71;
                __s[local_114] = uVar23 | uVar22;
                video->vram_map_dirty_bit_numbers[local_114] = uVar47;
                if (uVar80 != 1) {
                  ppuVar78[iVar79] = puVar71;
                  iVar55 = local_114 + 2;
                  __s[iVar79] = uVar23 | __s[iVar79];
                  video->vram_map_dirty_bit_numbers[local_114 + 1] = uVar47 + '\x01';
                  if (uVar80 != 2) {
                    uVar22 = __s[iVar55];
                    ppuVar78[iVar55] = puVar71;
                    iVar79 = local_114 + 3;
                    __s[iVar55] = uVar23 | uVar22;
                    video->vram_map_dirty_bit_numbers[local_114 + 2] = uVar47 + '\x02';
                    if (uVar80 != 3) {
                      uVar22 = __s[iVar79];
                      ppuVar78[iVar79] = puVar71;
                      iVar55 = local_114 + 4;
                      __s[iVar79] = uVar23 | uVar22;
                      video->vram_map_dirty_bit_numbers[local_114 + 3] = uVar47 + '\x03';
                      if (uVar80 != 4) {
                        uVar22 = __s[iVar55];
                        ppuVar78[iVar55] = puVar71;
                        iVar79 = local_114 + 5;
                        __s[iVar55] = uVar23 | uVar22;
                        video->vram_map_dirty_bit_numbers[local_114 + 4] = uVar47 + '\x04';
                        if (uVar80 != 5) {
                          uVar22 = __s[iVar79];
                          ppuVar78[iVar79] = puVar71;
                          iVar55 = local_114 + 6;
                          __s[iVar79] = uVar23 | uVar22;
                          video->vram_map_dirty_bit_numbers[local_114 + 5] = uVar47 + '\x05';
                          if (uVar80 != 6) {
                            uVar22 = __s[iVar55];
                            ppuVar78[iVar55] = puVar71;
                            iVar79 = local_114 + 7;
                            __s[iVar55] = uVar23 | uVar22;
                            video->vram_map_dirty_bit_numbers[local_114 + 6] = uVar47 + '\x06';
                            if (uVar80 != 7) {
                              uVar22 = __s[iVar79];
                              ppuVar78[iVar79] = puVar71;
                              iVar55 = local_114 + 8;
                              __s[iVar79] = uVar23 | uVar22;
                              video->vram_map_dirty_bit_numbers[local_114 + 7] = uVar47 + '\a';
                              if (uVar80 != 8) {
                                uVar22 = __s[iVar55];
                                ppuVar78[iVar55] = puVar71;
                                iVar79 = local_114 + 9;
                                __s[iVar55] = uVar23 | uVar22;
                                video->vram_map_dirty_bit_numbers[local_114 + 8] = uVar47 + '\b';
                                if (uVar80 != 9) {
                                  uVar22 = __s[iVar79];
                                  ppuVar78[iVar79] = puVar71;
                                  iVar55 = local_114 + 10;
                                  __s[iVar79] = uVar23 | uVar22;
                                  video->vram_map_dirty_bit_numbers[local_114 + 9] = uVar47 + '\t';
                                  if (uVar80 != 10) {
                                    uVar22 = __s[iVar55];
                                    ppuVar78[iVar55] = puVar71;
                                    iVar79 = local_114 + 0xb;
                                    __s[iVar55] = uVar23 | uVar22;
                                    video->vram_map_dirty_bit_numbers[local_114 + 10] =
                                         uVar47 + '\n';
                                    if (uVar80 != 0xb) {
                                      uVar22 = __s[iVar79];
                                      ppuVar78[iVar79] = puVar71;
                                      iVar55 = local_114 + 0xc;
                                      __s[iVar79] = uVar23 | uVar22;
                                      video->vram_map_dirty_bit_numbers[local_114 + 0xb] =
                                           uVar47 + '\v';
                                      if (uVar80 != 0xc) {
                                        uVar22 = __s[iVar55];
                                        ppuVar78[iVar55] = puVar71;
                                        iVar79 = local_114 + 0xd;
                                        __s[iVar55] = uVar23 | uVar22;
                                        video->vram_map_dirty_bit_numbers[local_114 + 0xc] =
                                             uVar47 + '\f';
                                        if (uVar80 != 0xd) {
                                          iVar55 = local_114 + 0xe;
                                          ppuVar78[iVar79] = puVar71;
                                          __s[iVar79] = uVar23 | __s[iVar79];
                                          video->vram_map_dirty_bit_numbers[local_114 + 0xd] =
                                               uVar47 + '\r';
                                          if (uVar80 != 0xe) {
                                            ppuVar78[iVar55] = puVar71;
                                            __s[iVar55] = uVar23 | __s[iVar55];
                                            video->vram_map_dirty_bit_numbers[local_114 + 0xe] =
                                                 uVar47 + '\x0e';
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                uVar80 = uVar76 - 1;
                uVar22 = __s[local_114];
                uVar82 = local_180 + 1;
                ppuVar78[local_114] = puVar71;
                __s[local_114] = uVar23 | uVar22;
                video->vram_map_dirty_bit_numbers[uVar86 + 3] = uVar47;
                local_114 = uVar86 + 4;
                if (uVar97 != 1) {
                  uVar80 = uVar76 - 2;
                  uVar82 = local_180 + 2;
                  ppuVar78[local_114] = puVar71;
                  __s[local_114] = uVar23 | __s[local_114];
                  video->vram_map_dirty_bit_numbers[uVar86 + 4] = uVar47 + '\x01';
                  local_114 = uVar86 + 5;
                  if (uVar97 != 2) {
                    uVar80 = uVar76 - 3;
                    uVar82 = local_180 + 3;
                    ppuVar78[local_114] = puVar71;
                    __s[local_114] = uVar23 | __s[local_114];
                    video->vram_map_dirty_bit_numbers[uVar86 + 5] = uVar47 + '\x02';
                    local_114 = uVar86 + 6;
                    if (uVar97 != 3) {
                      uVar80 = uVar76 - 4;
                      uVar82 = local_180 + 4;
                      ppuVar78[local_114] = puVar71;
                      __s[local_114] = uVar23 | __s[local_114];
                      video->vram_map_dirty_bit_numbers[uVar86 + 6] = uVar47 + '\x03';
                      local_114 = uVar86 + 7;
                      if (uVar97 != 4) {
                        uVar80 = uVar76 - 5;
                        uVar82 = local_180 + 5;
                        ppuVar78[local_114] = puVar71;
                        __s[local_114] = uVar23 | __s[local_114];
                        video->vram_map_dirty_bit_numbers[uVar86 + 7] = uVar47 + '\x04';
                        local_114 = uVar86 + 8;
                        if (uVar97 != 5) {
                          uVar80 = uVar76 - 6;
                          uVar82 = local_180 + 6;
                          ppuVar78[local_114] = puVar71;
                          __s[local_114] = uVar23 | __s[local_114];
                          video->vram_map_dirty_bit_numbers[uVar86 + 8] = uVar47 + '\x05';
                          local_114 = uVar86 + 9;
                          if (uVar97 == 7) {
                            uVar22 = __s[local_114];
                            uVar82 = local_180 + 7;
                            ppuVar78[local_114] = puVar71;
                            uVar80 = uVar76 - 7;
                            __s[local_114] = uVar23 | uVar22;
                            video->vram_map_dirty_bit_numbers[uVar86 + 9] = uVar47 + '\x06';
                            local_114 = uVar86 + 10;
                          }
                        }
                      }
                    }
                  }
                }
                if (uVar76 != uVar97) goto LAB_0803ac44;
              }
LAB_0803b078:
              uVar80 = 8;
              goto LAB_08036984;
            case 7:
              uVar76 = uVar76 >> 4;
              unmap_memory_page_region_direct
                        (pmVar53->memory_interface_arm9,0x6200000,uVar76 << 0xe);
              ppuVar54 = video->vram_map + 0x80;
              puVar90 = video->vram_map_dirty_bit_numbers + uVar76 + 0x80;
              puVar58 = video->vram_map_allocation_bitmap + uVar76 + 0x80;
              ppuVar61 = video->vram_map + uVar76 + 0x80;
              puVar71 = video->vram_map_dirty_bit_numbers + 0x80;
              bVar101 = ppuVar54 <= puVar58;
              bVar102 = (u8 **)puVar58 == ppuVar54;
              if (bVar101 && !bVar102) {
                bVar101 = puVar93 <= ppuVar61;
                bVar102 = ppuVar61 == (u8 **)puVar93;
              }
              bVar103 = puVar93 <= puVar90;
              bVar104 = (u16 *)puVar90 == puVar93;
              if (bVar103 && !bVar104) {
                bVar103 = puVar71 <= puVar58;
                bVar104 = puVar58 == (u16 *)puVar71;
              }
              uVar97 = video->vram_map_dirty_bitmap_coarse;
              uVar86 = ~(-1 << (uVar76 & 0xff));
              video->vram_map_dirty_bitmap_fine[4] = video->vram_map_dirty_bitmap_fine[4] | uVar86;
              vram_map_dirty_bit_numbers = (u8 *)(puVar84 + -0x100000);
              video->vram_map_dirty_bitmap_coarse = uVar97 | 0x10;
              if (((puVar71 < ppuVar61 && ppuVar54 < puVar90 || bVar101 && !bVar102) ||
                  uVar76 < 0x14) || bVar103 && !bVar104) {
                ppuVar54 = video->vram_map + 0x7f;
                puVar71 = video->vram_map_dirty_bit_numbers + 0x7f;
                iVar79 = 0x38;
                puVar58 = puVar93;
                do {
                  uVar23 = *puVar58;
                  ppuVar54 = ppuVar54 + 1;
                  *ppuVar54 = vram_map_dirty_bit_numbers;
                  *puVar58 = uVar23 | 0x80;
                  puVar71 = puVar71 + 1;
                  *puVar71 = (u8)iVar79;
                  iVar79 = iVar79 + 1;
                  puVar58 = puVar58 + 1;
                } while (uVar76 + 0x38 != iVar79);
              }
              else {
                uVar97 = uVar76;
                if (uVar60 <= uVar76) {
                  uVar97 = uVar60;
                }
                if (uVar97 == 0) {
                  iVar79 = 0x38;
                  iVar55 = 0x80;
                  uVar80 = uVar76;
                }
                else {
                  uVar80 = uVar76 - 1;
                  uVar23 = video->vram_map_allocation_bitmap[0x80];
                  video->vram_map[0x80] = vram_map_dirty_bit_numbers;
                  video->vram_map_allocation_bitmap[0x80] = uVar23 | 0x80;
                  video->vram_map_dirty_bit_numbers[0x80] = '8';
                  if (uVar97 == 1) {
                    iVar79 = 0x39;
                    iVar55 = 0x81;
                  }
                  else {
                    uVar23 = video->vram_map_allocation_bitmap[0x81];
                    video->vram_map[0x81] = vram_map_dirty_bit_numbers;
                    uVar80 = uVar76 - 2;
                    video->vram_map_dirty_bit_numbers[0x81] = '9';
                    video->vram_map_allocation_bitmap[0x81] = uVar23 | 0x80;
                    if (uVar97 == 2) {
                      iVar79 = 0x3a;
                      iVar55 = 0x82;
                    }
                    else {
                      uVar80 = uVar76 - 3;
                      uVar23 = *puVar73;
                      video->vram_map[0x82] = vram_map_dirty_bit_numbers;
                      *puVar73 = uVar23 | 0x80;
                      video->vram_map_dirty_bit_numbers[0x82] = ':';
                      if (uVar97 == 3) {
                        iVar79 = 0x3b;
                        iVar55 = 0x83;
                      }
                      else {
                        uVar23 = video->vram_map_allocation_bitmap[0x83];
                        video->vram_map[0x83] = vram_map_dirty_bit_numbers;
                        uVar80 = uVar76 - 4;
                        video->vram_map_dirty_bit_numbers[0x83] = ';';
                        video->vram_map_allocation_bitmap[0x83] = uVar23 | 0x80;
                        if (uVar97 == 4) {
                          iVar79 = 0x3c;
                          iVar55 = 0x84;
                        }
                        else {
                          uVar23 = video->vram_map_allocation_bitmap[0x84];
                          video->vram_map[0x84] = vram_map_dirty_bit_numbers;
                          uVar80 = uVar76 - 5;
                          video->vram_map_allocation_bitmap[0x84] = uVar23 | 0x80;
                          video->vram_map_dirty_bit_numbers[0x84] = '<';
                          if (uVar97 == 5) {
                            iVar79 = 0x3d;
                            iVar55 = 0x85;
                          }
                          else {
                            uVar23 = video->vram_map_allocation_bitmap[0x85];
                            video->vram_map[0x85] = vram_map_dirty_bit_numbers;
                            uVar80 = uVar76 - 6;
                            video->vram_map_dirty_bit_numbers[0x85] = '=';
                            video->vram_map_allocation_bitmap[0x85] = uVar23 | 0x80;
                            if (uVar97 == 7) {
                              uVar23 = video->vram_map_allocation_bitmap[0x86];
                              uVar80 = uVar76 - 7;
                              iVar79 = 0x3f;
                              iVar55 = 0x87;
                              video->vram_map[0x86] = vram_map_dirty_bit_numbers;
                              video->vram_map_allocation_bitmap[0x86] = uVar23 | 0x80;
                              video->vram_map_dirty_bit_numbers[0x86] = '>';
                            }
                            else {
                              iVar79 = 0x3e;
                              iVar55 = 0x86;
                            }
                          }
                        }
                      }
                    }
                  }
                  if (uVar76 == uVar97) goto LAB_08037168;
                }
                uVar82 = ((uVar76 - uVar97) - 0x10 >> 4) + 1;
                iVar91 = uVar82 * 0x10;
                if (0xe < (uVar76 - 1) - uVar97) {
                  auVar3._4_4_ = iVar79;
                  auVar3._0_4_ = iVar79;
                  auVar3._8_8_ = 0;
                  local_104 = video->vram_map_dirty_bit_numbers + uVar97 + 0x80;
                  auVar1 = SIMDExpandImmediate(0,0,0x10);
                  auVar2 = SIMDExpandImmediate(0,0,4);
                  auVar122 = SIMDExpandImmediate(0,0,8);
                  auVar124 = SIMDExpandImmediate(0,0,0xc);
                  local_e8 = (u8 *)0x0;
                  auVar42._8_8_ = 0x300000002;
                  auVar42._0_8_ = 0x100000000;
                  auVar123 = VectorAdd(auVar3 & auVar3 << 0x40,auVar42,4);
                  ppuVar54 = video->vram_map + uVar97 + 0x80;
                  puVar58 = video->vram_map_allocation_bitmap + uVar97 + 0x90;
                  local_e4 = video->vram_map_allocation_bitmap + uVar97 + 0x90;
                  do {
                    auVar118 = VectorAdd(auVar123,auVar2,4);
                    auVar126 = VectorAdd(auVar123,auVar122,4);
                    auVar105 = *(undefined (*) [16])(local_e4 + -8);
                    auVar106._0_8_ = VectorCopyNarrow(auVar123,4);
                    auVar106._8_8_ = VectorCopyNarrow(auVar118,4);
                    auVar118 = VectorAdd(auVar123,auVar124,4);
                    auVar112 = *(undefined (*) [16])(local_e4 + -0x10);
                    local_e8 = (u8 *)((int)local_e8 + 1);
                    *(undefined8 *)ppuVar54 = 0;
                    *(undefined8 *)(ppuVar54 + 2) = 0;
                    auVar123 = VectorAdd(auVar123,auVar1,4);
                    uVar113 = VectorCopyNarrow(auVar126,4);
                    uVar114 = VectorCopyNarrow(auVar118,4);
                    *(undefined8 *)(ppuVar54 + 4) = 0;
                    *(undefined8 *)(ppuVar54 + 6) = 0;
                    uVar115 = VectorCopyNarrow(auVar106,2);
                    auVar32._8_8_ = uVar114;
                    auVar32._0_8_ = uVar113;
                    uVar113 = VectorCopyNarrow(auVar32,2);
                    *(undefined8 *)(ppuVar54 + 8) = 0;
                    *(undefined8 *)(ppuVar54 + 10) = 0;
                    auVar126 = SIMDExpandImmediate(0,9,0x80);
                    *(undefined8 *)(ppuVar54 + 0xc) = 0;
                    *(undefined8 *)(ppuVar54 + 0xe) = 0;
                    auVar118 = SIMDExpandImmediate(0,9,0x80);
                    *(longlong *)(puVar58 + -0x10) = SUB168(auVar112 | auVar118,0);
                    *(longlong *)(puVar58 + -0xc) = SUB168(auVar112 | auVar118,8);
                    *(longlong *)(puVar58 + -8) = SUB168(auVar105 | auVar126,0);
                    *(longlong *)(puVar58 + -4) = SUB168(auVar105 | auVar126,8);
                    *(undefined8 *)local_104 = uVar115;
                    *(undefined8 *)(local_104 + 8) = uVar113;
                    local_104 = local_104 + 0x10;
                    ppuVar54 = ppuVar54 + 0x10;
                    puVar58 = puVar58 + 0x10;
                    local_e4 = local_e4 + 0x10;
                  } while (local_e8 < uVar82);
                  uVar80 = uVar80 + uVar82 * -0x10;
                  iVar79 = iVar79 + iVar91;
                  iVar55 = iVar55 + iVar91;
                  if (uVar76 - uVar97 == iVar91) goto LAB_08037168;
                }
                uVar47 = (u8)iVar79;
                uVar23 = __s[iVar55];
                iVar79 = iVar55 + 1;
                ppuVar78[iVar55] = vram_map_dirty_bit_numbers;
                __s[iVar55] = uVar23 | 0x80;
                video->vram_map_dirty_bit_numbers[iVar55] = uVar47;
                if (uVar80 != 1) {
                  ppuVar78[iVar79] = vram_map_dirty_bit_numbers;
                  iVar91 = iVar55 + 2;
                  __s[iVar79] = __s[iVar79] | 0x80;
                  video->vram_map_dirty_bit_numbers[iVar55 + 1] = uVar47 + '\x01';
                  if (uVar80 != 2) {
                    uVar23 = __s[iVar91];
                    ppuVar78[iVar91] = vram_map_dirty_bit_numbers;
                    iVar79 = iVar55 + 3;
                    __s[iVar91] = uVar23 | 0x80;
                    video->vram_map_dirty_bit_numbers[iVar55 + 2] = uVar47 + '\x02';
                    if (uVar80 != 3) {
                      uVar23 = __s[iVar79];
                      ppuVar78[iVar79] = vram_map_dirty_bit_numbers;
                      iVar91 = iVar55 + 4;
                      __s[iVar79] = uVar23 | 0x80;
                      video->vram_map_dirty_bit_numbers[iVar55 + 3] = uVar47 + '\x03';
                      if (uVar80 != 4) {
                        uVar23 = __s[iVar91];
                        ppuVar78[iVar91] = vram_map_dirty_bit_numbers;
                        iVar79 = iVar55 + 5;
                        __s[iVar91] = uVar23 | 0x80;
                        video->vram_map_dirty_bit_numbers[iVar55 + 4] = uVar47 + '\x04';
                        if (uVar80 != 5) {
                          uVar23 = __s[iVar79];
                          ppuVar78[iVar79] = vram_map_dirty_bit_numbers;
                          iVar91 = iVar55 + 6;
                          __s[iVar79] = uVar23 | 0x80;
                          video->vram_map_dirty_bit_numbers[iVar55 + 5] = uVar47 + '\x05';
                          if (uVar80 != 6) {
                            uVar23 = __s[iVar91];
                            ppuVar78[iVar91] = vram_map_dirty_bit_numbers;
                            iVar79 = iVar55 + 7;
                            __s[iVar91] = uVar23 | 0x80;
                            video->vram_map_dirty_bit_numbers[iVar55 + 6] = uVar47 + '\x06';
                            if (uVar80 != 7) {
                              uVar23 = __s[iVar79];
                              ppuVar78[iVar79] = vram_map_dirty_bit_numbers;
                              iVar91 = iVar55 + 8;
                              __s[iVar79] = uVar23 | 0x80;
                              video->vram_map_dirty_bit_numbers[iVar55 + 7] = uVar47 + '\a';
                              if (uVar80 != 8) {
                                uVar23 = __s[iVar91];
                                ppuVar78[iVar91] = vram_map_dirty_bit_numbers;
                                iVar79 = iVar55 + 9;
                                __s[iVar91] = uVar23 | 0x80;
                                video->vram_map_dirty_bit_numbers[iVar55 + 8] = uVar47 + '\b';
                                if (uVar80 != 9) {
                                  uVar23 = __s[iVar79];
                                  ppuVar78[iVar79] = vram_map_dirty_bit_numbers;
                                  iVar91 = iVar55 + 10;
                                  __s[iVar79] = uVar23 | 0x80;
                                  video->vram_map_dirty_bit_numbers[iVar55 + 9] = uVar47 + '\t';
                                  if (uVar80 != 10) {
                                    uVar23 = __s[iVar91];
                                    ppuVar78[iVar91] = vram_map_dirty_bit_numbers;
                                    iVar79 = iVar55 + 0xb;
                                    __s[iVar91] = uVar23 | 0x80;
                                    video->vram_map_dirty_bit_numbers[iVar55 + 10] = uVar47 + '\n';
                                    if (uVar80 != 0xb) {
                                      uVar23 = __s[iVar79];
                                      ppuVar78[iVar79] = vram_map_dirty_bit_numbers;
                                      iVar91 = iVar55 + 0xc;
                                      __s[iVar79] = uVar23 | 0x80;
                                      video->vram_map_dirty_bit_numbers[iVar55 + 0xb] =
                                           uVar47 + '\v';
                                      if (uVar80 != 0xc) {
                                        uVar23 = __s[iVar91];
                                        ppuVar78[iVar91] = vram_map_dirty_bit_numbers;
                                        iVar79 = iVar55 + 0xd;
                                        __s[iVar91] = uVar23 | 0x80;
                                        video->vram_map_dirty_bit_numbers[iVar55 + 0xc] =
                                             uVar47 + '\f';
                                        if (uVar80 != 0xd) {
                                          iVar91 = iVar55 + 0xe;
                                          ppuVar78[iVar79] = vram_map_dirty_bit_numbers;
                                          __s[iVar79] = __s[iVar79] | 0x80;
                                          video->vram_map_dirty_bit_numbers[iVar55 + 0xd] =
                                               uVar47 + '\r';
                                          if (uVar80 != 0xe) {
                                            ppuVar78[iVar91] = vram_map_dirty_bit_numbers;
                                            __s[iVar91] = __s[iVar91] | 0x80;
                                            video->vram_map_dirty_bit_numbers[iVar55 + 0xe] =
                                                 uVar47 + '\x0e';
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
LAB_08037168:
              puVar84 = puVar84 + -0x108000;
              unmap_memory_page_region_direct
                        (video->memory->memory_interface_arm9,0x6210000,uVar76 << 0xe);
              ppuVar54 = video->vram_map + 0x84;
              puVar71 = video->vram_map_dirty_bit_numbers + uVar76 + 0x84;
              uVar97 = video->vram_map_dirty_bitmap_fine[4];
              ppuVar61 = video->vram_map + uVar76 + 0x84;
              puVar58 = video->vram_map_allocation_bitmap + uVar76 + 0x84;
              puVar90 = video->vram_map_dirty_bit_numbers + 0x84;
              bVar101 = ppuVar54 <= puVar58;
              bVar102 = (u8 **)puVar58 == ppuVar54;
              if (bVar101 && !bVar102) {
                bVar101 = puVar94 <= ppuVar61;
                bVar102 = ppuVar61 == (u8 **)puVar94;
              }
              bVar103 = puVar94 <= puVar71;
              bVar104 = (u16 *)puVar71 == puVar94;
              if (bVar103 && !bVar104) {
                bVar103 = puVar90 <= puVar58;
                bVar104 = puVar58 == (u16 *)puVar90;
              }
              video->vram_map_dirty_bitmap_coarse = video->vram_map_dirty_bitmap_coarse | 0x10;
              video->vram_map_dirty_bitmap_fine[4] = uVar97 | uVar86 << 4;
              if ((uVar76 < 0x14 ||
                  (puVar90 < ppuVar61 && ppuVar54 < puVar71 || bVar101 && !bVar102)) ||
                  bVar103 && !bVar104) {
                puVar71 = video->vram_map_dirty_bit_numbers + 0x83;
                ppuVar54 = video->vram_map + 0x83;
                iVar79 = 0x38;
                puVar58 = puVar94;
                do {
                  uVar23 = *puVar58;
                  ppuVar54 = ppuVar54 + 1;
                  *ppuVar54 = (u8 *)puVar84;
                  *puVar58 = uVar23 | 0x80;
                  puVar71 = puVar71 + 1;
                  *puVar71 = (u8)iVar79;
                  iVar79 = iVar79 + 1;
                  puVar58 = puVar58 + 1;
                } while (iVar79 != uVar76 + 0x38);
                uVar86 = 0x80;
                uVar80 = 10;
                goto LAB_08036984;
              }
              uVar86 = uVar76;
              if (uVar65 <= uVar76) {
                uVar86 = uVar65;
              }
              if (uVar86 == 0) {
                iVar79 = 0x38;
                iVar55 = 0x84;
                uVar97 = uVar76;
LAB_08037360:
                uVar80 = ((uVar76 - uVar86) - 0x10 >> 4) + 1;
                iVar91 = uVar80 * 0x10;
                if (0xe < (uVar76 - 1) - uVar86) {
                  auVar4._4_4_ = iVar79;
                  auVar4._0_4_ = iVar79;
                  auVar4._8_8_ = 0;
                  auVar1 = SIMDExpandImmediate(0,0,0x10);
                  local_144 = 0;
                  auVar2 = SIMDExpandImmediate(0,0,4);
                  auVar122 = SIMDExpandImmediate(0,0,8);
                  auVar124 = SIMDExpandImmediate(0,0,0xc);
                  puVar71 = video->vram_map_dirty_bit_numbers + uVar86 + 0x84;
                  auVar43._8_8_ = 0x300000002;
                  auVar43._0_8_ = 0x100000000;
                  auVar123 = VectorAdd(auVar4 & auVar4 << 0x40,auVar43,4);
                  ppuVar54 = video->vram_map + uVar86 + 0x84;
                  puVar58 = video->vram_map_allocation_bitmap + uVar86 + 0x94;
                  local_140 = video->vram_map_allocation_bitmap + uVar86 + 0x94;
                  do {
                    auVar118 = VectorAdd(auVar123,auVar2,4);
                    auVar126 = VectorAdd(auVar123,auVar122,4);
                    auVar105 = *(undefined (*) [16])(puVar58 + -0x10);
                    auVar112 = *(undefined (*) [16])(puVar58 + -8);
                    local_144 = local_144 + 1;
                    *(undefined8 *)ppuVar54 = 0;
                    *(undefined8 *)(ppuVar54 + 2) = 0;
                    auVar107._0_8_ = VectorCopyNarrow(auVar123,4);
                    auVar107._8_8_ = VectorCopyNarrow(auVar118,4);
                    auVar118 = VectorAdd(auVar123,auVar124,4);
                    auVar123 = VectorAdd(auVar123,auVar1,4);
                    *(undefined8 *)(ppuVar54 + 4) = 0;
                    *(undefined8 *)(ppuVar54 + 6) = 0;
                    uVar113 = VectorCopyNarrow(auVar126,4);
                    uVar114 = VectorCopyNarrow(auVar118,4);
                    *(undefined8 *)(ppuVar54 + 8) = 0;
                    *(undefined8 *)(ppuVar54 + 10) = 0;
                    auVar126 = SIMDExpandImmediate(0,9,0x80);
                    uVar115 = VectorCopyNarrow(auVar107,2);
                    auVar33._8_8_ = uVar114;
                    auVar33._0_8_ = uVar113;
                    uVar113 = VectorCopyNarrow(auVar33,2);
                    *(undefined8 *)(ppuVar54 + 0xc) = 0;
                    *(undefined8 *)(ppuVar54 + 0xe) = 0;
                    auVar118 = SIMDExpandImmediate(0,9,0x80);
                    *(longlong *)(local_140 + -0x10) = SUB168(auVar105 | auVar126,0);
                    *(longlong *)(local_140 + -0xc) = SUB168(auVar105 | auVar126,8);
                    *(longlong *)(local_140 + -8) = SUB168(auVar112 | auVar118,0);
                    *(longlong *)(local_140 + -4) = SUB168(auVar112 | auVar118,8);
                    *(undefined8 *)puVar71 = uVar115;
                    *(undefined8 *)(puVar71 + 8) = uVar113;
                    puVar71 = puVar71 + 0x10;
                    ppuVar54 = ppuVar54 + 0x10;
                    puVar58 = puVar58 + 0x10;
                    local_140 = local_140 + 0x10;
                  } while (local_144 < uVar80);
                  uVar97 = uVar97 + uVar80 * -0x10;
                  iVar79 = iVar79 + iVar91;
                  iVar55 = iVar55 + iVar91;
                  if (uVar76 - uVar86 == iVar91) goto LAB_080376e8;
                }
                uVar47 = (u8)iVar79;
                uVar23 = __s[iVar55];
                iVar79 = iVar55 + 1;
                ppuVar78[iVar55] = (u8 *)puVar84;
                __s[iVar55] = uVar23 | 0x80;
                video->vram_map_dirty_bit_numbers[iVar55] = uVar47;
                if (uVar97 != 1) {
                  ppuVar78[iVar79] = (u8 *)puVar84;
                  iVar91 = iVar55 + 2;
                  __s[iVar79] = __s[iVar79] | 0x80;
                  video->vram_map_dirty_bit_numbers[iVar55 + 1] = uVar47 + '\x01';
                  if (uVar97 != 2) {
                    ppuVar78[iVar91] = (u8 *)puVar84;
                    iVar79 = iVar55 + 3;
                    __s[iVar91] = __s[iVar91] | 0x80;
                    video->vram_map_dirty_bit_numbers[iVar55 + 2] = uVar47 + '\x02';
                    if (uVar97 != 3) {
                      ppuVar78[iVar79] = (u8 *)puVar84;
                      iVar91 = iVar55 + 4;
                      __s[iVar79] = __s[iVar79] | 0x80;
                      video->vram_map_dirty_bit_numbers[iVar55 + 3] = uVar47 + '\x03';
                      if (uVar97 != 4) {
                        ppuVar78[iVar91] = (u8 *)puVar84;
                        iVar79 = iVar55 + 5;
                        __s[iVar91] = __s[iVar91] | 0x80;
                        video->vram_map_dirty_bit_numbers[iVar55 + 4] = uVar47 + '\x04';
                        if (uVar97 != 5) {
                          ppuVar78[iVar79] = (u8 *)puVar84;
                          iVar91 = iVar55 + 6;
                          __s[iVar79] = __s[iVar79] | 0x80;
                          video->vram_map_dirty_bit_numbers[iVar55 + 5] = uVar47 + '\x05';
                          if (uVar97 != 6) {
                            ppuVar78[iVar91] = (u8 *)puVar84;
                            iVar79 = iVar55 + 7;
                            __s[iVar91] = __s[iVar91] | 0x80;
                            video->vram_map_dirty_bit_numbers[iVar55 + 6] = uVar47 + '\x06';
                            if (uVar97 != 7) {
                              ppuVar78[iVar79] = (u8 *)puVar84;
                              iVar91 = iVar55 + 8;
                              __s[iVar79] = __s[iVar79] | 0x80;
                              video->vram_map_dirty_bit_numbers[iVar55 + 7] = uVar47 + '\a';
                              if (uVar97 != 8) {
                                ppuVar78[iVar91] = (u8 *)puVar84;
                                iVar79 = iVar55 + 9;
                                __s[iVar91] = __s[iVar91] | 0x80;
                                video->vram_map_dirty_bit_numbers[iVar55 + 8] = uVar47 + '\b';
                                if (uVar97 != 9) {
                                  ppuVar78[iVar79] = (u8 *)puVar84;
                                  iVar91 = iVar55 + 10;
                                  __s[iVar79] = __s[iVar79] | 0x80;
                                  video->vram_map_dirty_bit_numbers[iVar55 + 9] = uVar47 + '\t';
                                  if (uVar97 != 10) {
                                    ppuVar78[iVar91] = (u8 *)puVar84;
                                    iVar79 = iVar55 + 0xb;
                                    __s[iVar91] = __s[iVar91] | 0x80;
                                    video->vram_map_dirty_bit_numbers[iVar55 + 10] = uVar47 + '\n';
                                    if (uVar97 != 0xb) {
                                      ppuVar78[iVar79] = (u8 *)puVar84;
                                      iVar91 = iVar55 + 0xc;
                                      __s[iVar79] = __s[iVar79] | 0x80;
                                      video->vram_map_dirty_bit_numbers[iVar55 + 0xb] =
                                           uVar47 + '\v';
                                      if (uVar97 != 0xc) {
                                        ppuVar78[iVar91] = (u8 *)puVar84;
                                        iVar79 = iVar55 + 0xd;
                                        __s[iVar91] = __s[iVar91] | 0x80;
                                        video->vram_map_dirty_bit_numbers[iVar55 + 0xc] =
                                             uVar47 + '\f';
                                        if (uVar97 != 0xd) {
                                          ppuVar78[iVar79] = (u8 *)puVar84;
                                          iVar91 = iVar55 + 0xe;
                                          __s[iVar79] = __s[iVar79] | 0x80;
                                          video->vram_map_dirty_bit_numbers[iVar55 + 0xd] =
                                               uVar47 + '\r';
                                          if (uVar97 != 0xe) {
                                            ppuVar78[iVar91] = (u8 *)puVar84;
                                            __s[iVar91] = __s[iVar91] | 0x80;
                                            video->vram_map_dirty_bit_numbers[iVar55 + 0xe] =
                                                 uVar47 + '\x0e';
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                uVar23 = video->vram_map_allocation_bitmap[0x84];
                uVar97 = uVar76 - 1;
                video->vram_map[0x84] = (u8 *)puVar84;
                video->vram_map_allocation_bitmap[0x84] = uVar23 | 0x80;
                video->vram_map_dirty_bit_numbers[0x84] = '8';
                if (uVar86 == 1) {
                  iVar79 = 0x39;
                  iVar55 = 0x85;
                }
                else {
                  uVar23 = video->vram_map_allocation_bitmap[0x85];
                  video->vram_map[0x85] = (u8 *)puVar84;
                  uVar97 = uVar76 - 2;
                  video->vram_map_dirty_bit_numbers[0x85] = '9';
                  video->vram_map_allocation_bitmap[0x85] = uVar23 | 0x80;
                  if (uVar86 == 2) {
                    iVar79 = 0x3a;
                    iVar55 = 0x86;
                  }
                  else {
                    uVar23 = video->vram_map_allocation_bitmap[0x86];
                    video->vram_map[0x86] = (u8 *)puVar84;
                    uVar97 = uVar76 - 3;
                    video->vram_map_allocation_bitmap[0x86] = uVar23 | 0x80;
                    video->vram_map_dirty_bit_numbers[0x86] = ':';
                    if (uVar86 == 3) {
                      iVar79 = 0x3b;
                      iVar55 = 0x87;
                    }
                    else {
                      uVar23 = video->vram_map_allocation_bitmap[0x87];
                      video->vram_map[0x87] = (u8 *)puVar84;
                      uVar97 = uVar76 - 4;
                      video->vram_map_dirty_bit_numbers[0x87] = ';';
                      video->vram_map_allocation_bitmap[0x87] = uVar23 | 0x80;
                      if (uVar86 == 4) {
                        iVar79 = 0x3c;
                        iVar55 = 0x88;
                      }
                      else {
                        uVar23 = video->vram_map_allocation_bitmap[0x88];
                        video->vram_map[0x88] = (u8 *)puVar84;
                        uVar97 = uVar76 - 5;
                        video->vram_map_allocation_bitmap[0x88] = uVar23 | 0x80;
                        video->vram_map_dirty_bit_numbers[0x88] = '<';
                        if (uVar86 == 5) {
                          iVar79 = 0x3d;
                          iVar55 = 0x89;
                        }
                        else {
                          uVar23 = video->vram_map_allocation_bitmap[0x89];
                          video->vram_map[0x89] = (u8 *)puVar84;
                          uVar97 = uVar76 - 6;
                          video->vram_map_dirty_bit_numbers[0x89] = '=';
                          video->vram_map_allocation_bitmap[0x89] = uVar23 | 0x80;
                          if (uVar86 == 7) {
                            uVar23 = video->vram_map_allocation_bitmap[0x8a];
                            uVar97 = uVar76 - 7;
                            iVar79 = 0x3f;
                            iVar55 = 0x8b;
                            video->vram_map[0x8a] = (u8 *)puVar84;
                            video->vram_map_allocation_bitmap[0x8a] = uVar23 | 0x80;
                            video->vram_map_dirty_bit_numbers[0x8a] = '>';
                          }
                          else {
                            iVar79 = 0x3e;
                            iVar55 = 0x8a;
                          }
                        }
                      }
                    }
                  }
                }
                if (uVar76 != uVar86) goto LAB_08037360;
              }
LAB_080376e8:
              uVar86 = 0x80;
              uVar80 = 10;
              goto LAB_08036984;
            case 8:
              uVar76 = uVar76 >> 4;
              uVar63 = uVar76 << 0xe;
              ppuVar54 = video->vram_map + 0x82;
              uVar86 = (uint)(0x13 < uVar76);
              unmap_memory_page_region_direct(pmVar53->memory_interface_arm9,0x6208000,uVar63);
              puVar71 = video->vram_map_dirty_bit_numbers + 0x82;
              puVar90 = video->vram_map_dirty_bit_numbers + uVar76 + 0x82;
              puVar58 = video->vram_map_allocation_bitmap + uVar76 + 0x82;
              ppuVar61 = video->vram_map + uVar76 + 0x82;
              bVar101 = ppuVar54 <= puVar58;
              bVar102 = (u8 **)puVar58 == ppuVar54;
              if (bVar101 && !bVar102) {
                bVar101 = puVar73 <= ppuVar61;
                bVar102 = ppuVar61 == (u8 **)puVar73;
              }
              bVar103 = puVar73 <= puVar90;
              bVar104 = (u16 *)puVar90 == puVar73;
              if (bVar103 && !bVar104) {
                bVar103 = puVar71 <= puVar58;
                bVar104 = puVar58 == (u16 *)puVar71;
              }
              uVar80 = video->vram_map_dirty_bitmap_coarse;
              uVar97 = (uint)(puVar90 <= ppuVar54);
              if (ppuVar61 <= puVar71) {
                uVar97 = 1;
              }
              uVar82 = ~(-1 << (uVar76 & 0xff));
              vram_map_dirty_bit_numbers_2 = (u8 *)(puVar84 + -0x104000);
              video->vram_map_dirty_bitmap_fine[4] =
                   video->vram_map_dirty_bitmap_fine[4] | uVar82 << 2;
              video->vram_map_dirty_bitmap_coarse = uVar80 | 0x10;
              if ((uVar97 & (!bVar101 || bVar102) & uVar86 & (uint)(!bVar103 || bVar104)) == 0) {
                ppuVar61 = video->vram_map + 0x81;
                puVar90 = video->vram_map_dirty_bit_numbers + 0x81;
                iVar79 = 0x40;
                puVar58 = puVar73;
                do {
                  uVar23 = *puVar58;
                  ppuVar61 = ppuVar61 + 1;
                  *ppuVar61 = vram_map_dirty_bit_numbers_2;
                  *puVar58 = uVar23 | 0x100;
                  puVar90 = puVar90 + 1;
                  *puVar90 = (u8)iVar79;
                  iVar79 = iVar79 + 1;
                  puVar58 = puVar58 + 1;
                } while (iVar79 != uVar76 + 0x40);
              }
              else {
                uVar97 = uVar76;
                if (uVar66 <= uVar76) {
                  uVar97 = uVar66;
                }
                if (uVar97 == 0) {
                  iVar79 = 0x40;
                  iVar55 = 0x82;
                  uVar80 = uVar76;
                }
                else {
                  uVar80 = uVar76 - 1;
                  uVar23 = *puVar73;
                  video->vram_map[0x82] = vram_map_dirty_bit_numbers_2;
                  *puVar73 = uVar23 | 0x100;
                  video->vram_map_dirty_bit_numbers[0x82] = '@';
                  if (uVar97 == 1) {
                    iVar79 = 0x41;
                    iVar55 = 0x83;
                  }
                  else {
                    uVar23 = video->vram_map_allocation_bitmap[0x83];
                    video->vram_map[0x83] = vram_map_dirty_bit_numbers_2;
                    uVar80 = uVar76 - 2;
                    video->vram_map_dirty_bit_numbers[0x83] = 'A';
                    video->vram_map_allocation_bitmap[0x83] = uVar23 | 0x100;
                    if (uVar97 == 2) {
                      iVar79 = 0x42;
                      iVar55 = 0x84;
                    }
                    else {
                      uVar23 = video->vram_map_allocation_bitmap[0x84];
                      video->vram_map[0x84] = vram_map_dirty_bit_numbers_2;
                      uVar80 = uVar76 - 3;
                      video->vram_map_allocation_bitmap[0x84] = uVar23 | 0x100;
                      video->vram_map_dirty_bit_numbers[0x84] = 'B';
                      if (uVar97 == 3) {
                        iVar79 = 0x43;
                        iVar55 = 0x85;
                      }
                      else {
                        uVar23 = video->vram_map_allocation_bitmap[0x85];
                        video->vram_map[0x85] = vram_map_dirty_bit_numbers_2;
                        uVar80 = uVar76 - 4;
                        video->vram_map_dirty_bit_numbers[0x85] = 'C';
                        video->vram_map_allocation_bitmap[0x85] = uVar23 | 0x100;
                        if (uVar97 == 4) {
                          iVar79 = 0x44;
                          iVar55 = 0x86;
                        }
                        else {
                          uVar23 = video->vram_map_allocation_bitmap[0x86];
                          video->vram_map[0x86] = vram_map_dirty_bit_numbers_2;
                          uVar80 = uVar76 - 5;
                          video->vram_map_allocation_bitmap[0x86] = uVar23 | 0x100;
                          video->vram_map_dirty_bit_numbers[0x86] = 'D';
                          if (uVar97 == 5) {
                            iVar79 = 0x45;
                            iVar55 = 0x87;
                          }
                          else {
                            uVar23 = video->vram_map_allocation_bitmap[0x87];
                            video->vram_map[0x87] = vram_map_dirty_bit_numbers_2;
                            uVar80 = uVar76 - 6;
                            video->vram_map_dirty_bit_numbers[0x87] = 'E';
                            video->vram_map_allocation_bitmap[0x87] = uVar23 | 0x100;
                            if (uVar97 == 7) {
                              uVar23 = video->vram_map_allocation_bitmap[0x88];
                              uVar80 = uVar76 - 7;
                              iVar79 = 0x47;
                              iVar55 = 0x89;
                              video->vram_map[0x88] = vram_map_dirty_bit_numbers_2;
                              video->vram_map_allocation_bitmap[0x88] = uVar23 | 0x100;
                              video->vram_map_dirty_bit_numbers[0x88] = 'F';
                            }
                            else {
                              iVar79 = 0x46;
                              iVar55 = 0x88;
                            }
                          }
                        }
                      }
                    }
                  }
                  if (uVar76 == uVar97) goto LAB_08037d70;
                }
                uVar72 = ((uVar76 - uVar97) - 0x10 >> 4) + 1;
                iVar91 = uVar72 * 0x10;
                if (0xe < (uVar76 - 1) - uVar97) {
                  auVar5._4_4_ = iVar79;
                  auVar5._0_4_ = iVar79;
                  auVar5._8_8_ = 0;
                  local_e0 = video->vram_map_dirty_bit_numbers + uVar97 + 0x82;
                  auVar1 = SIMDExpandImmediate(0,0,0x10);
                  auVar2 = SIMDExpandImmediate(0,0,4);
                  auVar122 = SIMDExpandImmediate(0,0,8);
                  auVar124 = SIMDExpandImmediate(0,0,0xc);
                  local_e4 = (u16 *)0x0;
                  auVar38._8_8_ = 0x300000002;
                  auVar38._0_8_ = 0x100000000;
                  auVar123 = VectorAdd(auVar5 & auVar5 << 0x40,auVar38,4);
                  ppuVar61 = video->vram_map + uVar97 + 0x82;
                  puVar58 = video->vram_map_allocation_bitmap + uVar97 + 0x92;
                  local_cc = video->vram_map_allocation_bitmap + uVar97 + 0x92;
                  do {
                    auVar118 = VectorAdd(auVar123,auVar2,4);
                    auVar126 = VectorAdd(auVar123,auVar122,4);
                    auVar105 = *(undefined (*) [16])(puVar58 + -0x10);
                    auVar112 = *(undefined (*) [16])(puVar58 + -8);
                    local_e4 = (u16 *)((int)local_e4 + 1);
                    *(undefined8 *)ppuVar61 = 0;
                    *(undefined8 *)(ppuVar61 + 2) = 0;
                    auVar108._0_8_ = VectorCopyNarrow(auVar123,4);
                    auVar108._8_8_ = VectorCopyNarrow(auVar118,4);
                    auVar118 = VectorAdd(auVar123,auVar124,4);
                    auVar123 = VectorAdd(auVar123,auVar1,4);
                    *(undefined8 *)(ppuVar61 + 4) = 0;
                    *(undefined8 *)(ppuVar61 + 6) = 0;
                    uVar113 = VectorCopyNarrow(auVar126,4);
                    uVar114 = VectorCopyNarrow(auVar118,4);
                    *(undefined8 *)(ppuVar61 + 8) = 0;
                    *(undefined8 *)(ppuVar61 + 10) = 0;
                    auVar126 = SIMDExpandImmediate(0,0xb,1);
                    uVar115 = VectorCopyNarrow(auVar108,2);
                    auVar28._8_8_ = uVar114;
                    auVar28._0_8_ = uVar113;
                    uVar113 = VectorCopyNarrow(auVar28,2);
                    *(undefined8 *)(ppuVar61 + 0xc) = 0;
                    *(undefined8 *)(ppuVar61 + 0xe) = 0;
                    auVar118 = SIMDExpandImmediate(0,0xb,1);
                    *(longlong *)(local_cc + -0x10) = SUB168(auVar105 | auVar126,0);
                    *(longlong *)(local_cc + -0xc) = SUB168(auVar105 | auVar126,8);
                    *(longlong *)(local_cc + -8) = SUB168(auVar112 | auVar118,0);
                    *(longlong *)(local_cc + -4) = SUB168(auVar112 | auVar118,8);
                    *(undefined8 *)local_e0 = uVar115;
                    *(undefined8 *)(local_e0 + 8) = uVar113;
                    local_e0 = local_e0 + 0x10;
                    ppuVar61 = ppuVar61 + 0x10;
                    puVar58 = puVar58 + 0x10;
                    local_cc = local_cc + 0x10;
                  } while (local_e4 < uVar72);
                  iVar55 = iVar55 + iVar91;
                  uVar80 = uVar80 + uVar72 * -0x10;
                  iVar79 = iVar79 + iVar91;
                  if (uVar76 - uVar97 == iVar91) goto LAB_08037d70;
                }
                uVar47 = (u8)iVar79;
                uVar23 = __s[iVar55];
                iVar79 = iVar55 + 1;
                ppuVar78[iVar55] = vram_map_dirty_bit_numbers_2;
                __s[iVar55] = uVar23 | 0x100;
                video->vram_map_dirty_bit_numbers[iVar55] = uVar47;
                if (uVar80 != 1) {
                  ppuVar78[iVar79] = vram_map_dirty_bit_numbers_2;
                  iVar91 = iVar55 + 2;
                  __s[iVar79] = __s[iVar79] | 0x100;
                  video->vram_map_dirty_bit_numbers[iVar55 + 1] = uVar47 + '\x01';
                  if (uVar80 != 2) {
                    uVar23 = __s[iVar91];
                    ppuVar78[iVar91] = vram_map_dirty_bit_numbers_2;
                    iVar79 = iVar55 + 3;
                    __s[iVar91] = uVar23 | 0x100;
                    video->vram_map_dirty_bit_numbers[iVar55 + 2] = uVar47 + '\x02';
                    if (uVar80 != 3) {
                      uVar23 = __s[iVar79];
                      ppuVar78[iVar79] = vram_map_dirty_bit_numbers_2;
                      iVar91 = iVar55 + 4;
                      __s[iVar79] = uVar23 | 0x100;
                      video->vram_map_dirty_bit_numbers[iVar55 + 3] = uVar47 + '\x03';
                      if (uVar80 != 4) {
                        uVar23 = __s[iVar91];
                        ppuVar78[iVar91] = vram_map_dirty_bit_numbers_2;
                        iVar79 = iVar55 + 5;
                        __s[iVar91] = uVar23 | 0x100;
                        video->vram_map_dirty_bit_numbers[iVar55 + 4] = uVar47 + '\x04';
                        if (uVar80 != 5) {
                          uVar23 = __s[iVar79];
                          ppuVar78[iVar79] = vram_map_dirty_bit_numbers_2;
                          iVar91 = iVar55 + 6;
                          __s[iVar79] = uVar23 | 0x100;
                          video->vram_map_dirty_bit_numbers[iVar55 + 5] = uVar47 + '\x05';
                          if (uVar80 != 6) {
                            uVar23 = __s[iVar91];
                            ppuVar78[iVar91] = vram_map_dirty_bit_numbers_2;
                            iVar79 = iVar55 + 7;
                            __s[iVar91] = uVar23 | 0x100;
                            video->vram_map_dirty_bit_numbers[iVar55 + 6] = uVar47 + '\x06';
                            if (uVar80 != 7) {
                              uVar23 = __s[iVar79];
                              ppuVar78[iVar79] = vram_map_dirty_bit_numbers_2;
                              iVar91 = iVar55 + 8;
                              __s[iVar79] = uVar23 | 0x100;
                              video->vram_map_dirty_bit_numbers[iVar55 + 7] = uVar47 + '\a';
                              if (uVar80 != 8) {
                                uVar23 = __s[iVar91];
                                ppuVar78[iVar91] = vram_map_dirty_bit_numbers_2;
                                iVar79 = iVar55 + 9;
                                __s[iVar91] = uVar23 | 0x100;
                                video->vram_map_dirty_bit_numbers[iVar55 + 8] = uVar47 + '\b';
                                if (uVar80 != 9) {
                                  uVar23 = __s[iVar79];
                                  ppuVar78[iVar79] = vram_map_dirty_bit_numbers_2;
                                  iVar91 = iVar55 + 10;
                                  __s[iVar79] = uVar23 | 0x100;
                                  video->vram_map_dirty_bit_numbers[iVar55 + 9] = uVar47 + '\t';
                                  if (uVar80 != 10) {
                                    uVar23 = __s[iVar91];
                                    ppuVar78[iVar91] = vram_map_dirty_bit_numbers_2;
                                    iVar79 = iVar55 + 0xb;
                                    __s[iVar91] = uVar23 | 0x100;
                                    video->vram_map_dirty_bit_numbers[iVar55 + 10] = uVar47 + '\n';
                                    if (uVar80 != 0xb) {
                                      uVar23 = __s[iVar79];
                                      ppuVar78[iVar79] = vram_map_dirty_bit_numbers_2;
                                      iVar91 = iVar55 + 0xc;
                                      __s[iVar79] = uVar23 | 0x100;
                                      video->vram_map_dirty_bit_numbers[iVar55 + 0xb] =
                                           uVar47 + '\v';
                                      if (uVar80 != 0xc) {
                                        uVar23 = __s[iVar91];
                                        ppuVar78[iVar91] = vram_map_dirty_bit_numbers_2;
                                        iVar79 = iVar55 + 0xd;
                                        __s[iVar91] = uVar23 | 0x100;
                                        video->vram_map_dirty_bit_numbers[iVar55 + 0xc] =
                                             uVar47 + '\f';
                                        if (uVar80 != 0xd) {
                                          iVar91 = iVar55 + 0xe;
                                          ppuVar78[iVar79] = vram_map_dirty_bit_numbers_2;
                                          __s[iVar79] = __s[iVar79] | 0x100;
                                          video->vram_map_dirty_bit_numbers[iVar55 + 0xd] =
                                               uVar47 + '\r';
                                          if (uVar80 != 0xe) {
                                            ppuVar78[iVar91] = vram_map_dirty_bit_numbers_2;
                                            __s[iVar91] = __s[iVar91] | 0x100;
                                            video->vram_map_dirty_bit_numbers[iVar55 + 0xe] =
                                                 uVar47 + '\x0e';
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
LAB_08037d70:
              unmap_memory_page_region_direct(video->memory->memory_interface_arm9,0x620c000,uVar63)
              ;
              ppuVar100 = video->vram_map + 0x83;
              puVar90 = video->vram_map_dirty_bit_numbers + 0x83;
              puVar96 = video->vram_map_dirty_bit_numbers + uVar76 + 0x83;
              ppuVar61 = video->vram_map + 0x3da;
              if (ppuVar100 < puVar96) {
                ppuVar61 = (u8 **)0x0;
              }
              uVar97 = video->vram_map_dirty_bitmap_fine[4];
              if (ppuVar100 >= puVar96) {
                ppuVar61 = (u8 **)0x1;
              }
              ppuVar70 = video->vram_map + uVar76 + 0x83;
              if (ppuVar70 <= puVar90) {
                ppuVar61 = (u8 **)((uint)ppuVar61 | 1);
              }
              puVar58 = video->vram_map_allocation_bitmap + uVar76 + 0x83;
              bVar101 = ppuVar100 <= puVar58;
              bVar102 = (u8 **)puVar58 == ppuVar100;
              if (bVar101 && !bVar102) {
                bVar101 = puVar64 <= ppuVar70;
                bVar102 = ppuVar70 == (u8 **)puVar64;
              }
              video->vram_map_dirty_bitmap_coarse = video->vram_map_dirty_bitmap_coarse | 0x10;
              bVar103 = puVar64 <= puVar96;
              bVar104 = (u16 *)puVar96 == puVar64;
              if (bVar103 && !bVar104) {
                bVar103 = puVar90 <= puVar58;
                bVar104 = puVar58 == (u16 *)puVar90;
              }
              puVar58 = puVar84 + -0x106000;
              video->vram_map_dirty_bitmap_fine[4] = uVar97 | uVar82 << 3;
              if (((uint)(!bVar101 || bVar102) & (uint)ppuVar61 & uVar86 &
                  (uint)(!bVar103 || bVar104)) == 0) {
                iVar79 = 0x40;
                puVar57 = puVar64;
                do {
                  uVar23 = *puVar57;
                  ppuVar54 = ppuVar54 + 1;
                  *ppuVar54 = (u8 *)puVar58;
                  *puVar57 = uVar23 | 0x100;
                  puVar71 = puVar71 + 1;
                  *puVar71 = (u8)iVar79;
                  iVar79 = iVar79 + 1;
                  puVar57 = puVar57 + 1;
                } while (iVar79 != uVar76 + 0x40);
              }
              else {
                uVar97 = uVar76;
                if (uVar99 <= uVar76) {
                  uVar97 = uVar99;
                }
                if (uVar97 == 0) {
                  iVar79 = 0x40;
                  iVar55 = 0x83;
                  uVar80 = uVar76;
                }
                else {
                  uVar23 = video->vram_map_allocation_bitmap[0x83];
                  uVar80 = uVar76 - 1;
                  video->vram_map[0x83] = (u8 *)puVar58;
                  video->vram_map_dirty_bit_numbers[0x83] = '@';
                  video->vram_map_allocation_bitmap[0x83] = uVar23 | 0x100;
                  if (uVar97 == 1) {
                    iVar79 = 0x41;
                    iVar55 = 0x84;
                  }
                  else {
                    uVar23 = video->vram_map_allocation_bitmap[0x84];
                    video->vram_map[0x84] = (u8 *)puVar58;
                    uVar80 = uVar76 - 2;
                    video->vram_map_allocation_bitmap[0x84] = uVar23 | 0x100;
                    video->vram_map_dirty_bit_numbers[0x84] = 'A';
                    if (uVar97 == 2) {
                      iVar79 = 0x42;
                      iVar55 = 0x85;
                    }
                    else {
                      uVar23 = video->vram_map_allocation_bitmap[0x85];
                      video->vram_map[0x85] = (u8 *)puVar58;
                      uVar80 = uVar76 - 3;
                      video->vram_map_dirty_bit_numbers[0x85] = 'B';
                      video->vram_map_allocation_bitmap[0x85] = uVar23 | 0x100;
                      if (uVar97 == 3) {
                        iVar79 = 0x43;
                        iVar55 = 0x86;
                      }
                      else {
                        uVar23 = video->vram_map_allocation_bitmap[0x86];
                        video->vram_map[0x86] = (u8 *)puVar58;
                        uVar80 = uVar76 - 4;
                        video->vram_map_allocation_bitmap[0x86] = uVar23 | 0x100;
                        video->vram_map_dirty_bit_numbers[0x86] = 'C';
                        if (uVar97 == 4) {
                          iVar79 = 0x44;
                          iVar55 = 0x87;
                        }
                        else {
                          uVar23 = video->vram_map_allocation_bitmap[0x87];
                          video->vram_map[0x87] = (u8 *)puVar58;
                          uVar80 = uVar76 - 5;
                          video->vram_map_dirty_bit_numbers[0x87] = 'D';
                          video->vram_map_allocation_bitmap[0x87] = uVar23 | 0x100;
                          if (uVar97 == 5) {
                            iVar79 = 0x45;
                            iVar55 = 0x88;
                          }
                          else {
                            uVar23 = video->vram_map_allocation_bitmap[0x88];
                            video->vram_map[0x88] = (u8 *)puVar58;
                            uVar80 = uVar76 - 6;
                            video->vram_map_allocation_bitmap[0x88] = uVar23 | 0x100;
                            video->vram_map_dirty_bit_numbers[0x88] = 'E';
                            if (uVar97 == 7) {
                              uVar23 = video->vram_map_allocation_bitmap[0x89];
                              uVar80 = uVar76 - 7;
                              video->vram_map[0x89] = (u8 *)puVar58;
                              iVar79 = 0x47;
                              video->vram_map_dirty_bit_numbers[0x89] = 'F';
                              iVar55 = 0x8a;
                              video->vram_map_allocation_bitmap[0x89] = uVar23 | 0x100;
                            }
                            else {
                              iVar79 = 0x46;
                              iVar55 = 0x89;
                            }
                          }
                        }
                      }
                    }
                  }
                  if (uVar76 == uVar97) goto LAB_08038390;
                }
                uVar72 = ((uVar76 - uVar97) - 0x10 >> 4) + 1;
                iVar91 = uVar72 * 0x10;
                if (0xe < (uVar76 - 1) - uVar97) {
                  auVar6._4_4_ = iVar79;
                  auVar6._0_4_ = iVar79;
                  auVar6._8_8_ = 0;
                  local_e8 = video->vram_map_dirty_bit_numbers + uVar97 + 0x83;
                  auVar1 = SIMDExpandImmediate(0,0,0x10);
                  auVar2 = SIMDExpandImmediate(0,0,4);
                  auVar122 = SIMDExpandImmediate(0,0,8);
                  auVar124 = SIMDExpandImmediate(0,0,0xc);
                  local_104 = (u8 *)0x0;
                  auVar39._8_8_ = 0x300000002;
                  auVar39._0_8_ = 0x100000000;
                  auVar123 = VectorAdd(auVar6 & auVar6 << 0x40,auVar39,4);
                  ppuVar54 = video->vram_map + uVar97 + 0x83;
                  puVar57 = video->vram_map_allocation_bitmap + uVar97 + 0x93;
                  local_e4 = video->vram_map_allocation_bitmap + uVar97 + 0x93;
                  do {
                    auVar118 = VectorAdd(auVar123,auVar2,4);
                    auVar126 = VectorAdd(auVar123,auVar122,4);
                    auVar105 = *(undefined (*) [16])(puVar57 + -0x10);
                    auVar112 = *(undefined (*) [16])(puVar57 + -8);
                    local_104 = (u8 *)((int)local_104 + 1);
                    *(undefined8 *)ppuVar54 = 0;
                    *(undefined8 *)(ppuVar54 + 2) = 0;
                    auVar109._0_8_ = VectorCopyNarrow(auVar123,4);
                    auVar109._8_8_ = VectorCopyNarrow(auVar118,4);
                    auVar118 = VectorAdd(auVar123,auVar124,4);
                    auVar123 = VectorAdd(auVar123,auVar1,4);
                    *(undefined8 *)(ppuVar54 + 4) = 0;
                    *(undefined8 *)(ppuVar54 + 6) = 0;
                    uVar113 = VectorCopyNarrow(auVar126,4);
                    uVar114 = VectorCopyNarrow(auVar118,4);
                    *(undefined8 *)(ppuVar54 + 8) = 0;
                    *(undefined8 *)(ppuVar54 + 10) = 0;
                    auVar126 = SIMDExpandImmediate(0,0xb,1);
                    uVar115 = VectorCopyNarrow(auVar109,2);
                    auVar29._8_8_ = uVar114;
                    auVar29._0_8_ = uVar113;
                    uVar113 = VectorCopyNarrow(auVar29,2);
                    *(undefined8 *)(ppuVar54 + 0xc) = 0;
                    *(undefined8 *)(ppuVar54 + 0xe) = 0;
                    auVar118 = SIMDExpandImmediate(0,0xb,1);
                    *(longlong *)(local_e4 + -0x10) = SUB168(auVar105 | auVar126,0);
                    *(longlong *)(local_e4 + -0xc) = SUB168(auVar105 | auVar126,8);
                    *(longlong *)(local_e4 + -8) = SUB168(auVar112 | auVar118,0);
                    *(longlong *)(local_e4 + -4) = SUB168(auVar112 | auVar118,8);
                    *(undefined8 *)local_e8 = uVar115;
                    *(undefined8 *)(local_e8 + 8) = uVar113;
                    local_e8 = local_e8 + 0x10;
                    ppuVar54 = ppuVar54 + 0x10;
                    puVar57 = puVar57 + 0x10;
                    local_e4 = local_e4 + 0x10;
                  } while (local_104 < uVar72);
                  iVar55 = iVar55 + iVar91;
                  uVar80 = uVar80 + uVar72 * -0x10;
                  iVar79 = iVar79 + iVar91;
                  if (uVar76 - uVar97 == iVar91) goto LAB_08038390;
                }
                uVar47 = (u8)iVar79;
                uVar23 = __s[iVar55];
                iVar79 = iVar55 + 1;
                ppuVar78[iVar55] = (u8 *)puVar58;
                __s[iVar55] = uVar23 | 0x100;
                video->vram_map_dirty_bit_numbers[iVar55] = uVar47;
                if (uVar80 != 1) {
                  ppuVar78[iVar79] = (u8 *)puVar58;
                  iVar91 = iVar55 + 2;
                  __s[iVar79] = __s[iVar79] | 0x100;
                  video->vram_map_dirty_bit_numbers[iVar55 + 1] = uVar47 + '\x01';
                  if (uVar80 != 2) {
                    uVar23 = __s[iVar91];
                    ppuVar78[iVar91] = (u8 *)puVar58;
                    iVar79 = iVar55 + 3;
                    __s[iVar91] = uVar23 | 0x100;
                    video->vram_map_dirty_bit_numbers[iVar55 + 2] = uVar47 + '\x02';
                    if (uVar80 != 3) {
                      uVar23 = __s[iVar79];
                      ppuVar78[iVar79] = (u8 *)puVar58;
                      iVar91 = iVar55 + 4;
                      __s[iVar79] = uVar23 | 0x100;
                      video->vram_map_dirty_bit_numbers[iVar55 + 3] = uVar47 + '\x03';
                      if (uVar80 != 4) {
                        uVar23 = __s[iVar91];
                        ppuVar78[iVar91] = (u8 *)puVar58;
                        iVar79 = iVar55 + 5;
                        __s[iVar91] = uVar23 | 0x100;
                        video->vram_map_dirty_bit_numbers[iVar55 + 4] = uVar47 + '\x04';
                        if (uVar80 != 5) {
                          uVar23 = __s[iVar79];
                          ppuVar78[iVar79] = (u8 *)puVar58;
                          iVar91 = iVar55 + 6;
                          __s[iVar79] = uVar23 | 0x100;
                          video->vram_map_dirty_bit_numbers[iVar55 + 5] = uVar47 + '\x05';
                          if (uVar80 != 6) {
                            uVar23 = __s[iVar91];
                            ppuVar78[iVar91] = (u8 *)puVar58;
                            iVar79 = iVar55 + 7;
                            __s[iVar91] = uVar23 | 0x100;
                            video->vram_map_dirty_bit_numbers[iVar55 + 6] = uVar47 + '\x06';
                            if (uVar80 != 7) {
                              uVar23 = __s[iVar79];
                              ppuVar78[iVar79] = (u8 *)puVar58;
                              iVar91 = iVar55 + 8;
                              __s[iVar79] = uVar23 | 0x100;
                              video->vram_map_dirty_bit_numbers[iVar55 + 7] = uVar47 + '\a';
                              if (uVar80 != 8) {
                                uVar23 = __s[iVar91];
                                ppuVar78[iVar91] = (u8 *)puVar58;
                                iVar79 = iVar55 + 9;
                                __s[iVar91] = uVar23 | 0x100;
                                video->vram_map_dirty_bit_numbers[iVar55 + 8] = uVar47 + '\b';
                                if (uVar80 != 9) {
                                  uVar23 = __s[iVar79];
                                  ppuVar78[iVar79] = (u8 *)puVar58;
                                  iVar91 = iVar55 + 10;
                                  __s[iVar79] = uVar23 | 0x100;
                                  video->vram_map_dirty_bit_numbers[iVar55 + 9] = uVar47 + '\t';
                                  if (uVar80 != 10) {
                                    uVar23 = __s[iVar91];
                                    ppuVar78[iVar91] = (u8 *)puVar58;
                                    iVar79 = iVar55 + 0xb;
                                    __s[iVar91] = uVar23 | 0x100;
                                    video->vram_map_dirty_bit_numbers[iVar55 + 10] = uVar47 + '\n';
                                    if (uVar80 != 0xb) {
                                      uVar23 = __s[iVar79];
                                      ppuVar78[iVar79] = (u8 *)puVar58;
                                      iVar91 = iVar55 + 0xc;
                                      __s[iVar79] = uVar23 | 0x100;
                                      video->vram_map_dirty_bit_numbers[iVar55 + 0xb] =
                                           uVar47 + '\v';
                                      if (uVar80 != 0xc) {
                                        uVar23 = __s[iVar91];
                                        ppuVar78[iVar91] = (u8 *)puVar58;
                                        iVar79 = iVar55 + 0xd;
                                        __s[iVar91] = uVar23 | 0x100;
                                        video->vram_map_dirty_bit_numbers[iVar55 + 0xc] =
                                             uVar47 + '\f';
                                        if (uVar80 != 0xd) {
                                          iVar91 = iVar55 + 0xe;
                                          ppuVar78[iVar79] = (u8 *)puVar58;
                                          __s[iVar79] = __s[iVar79] | 0x100;
                                          video->vram_map_dirty_bit_numbers[iVar55 + 0xd] =
                                               uVar47 + '\r';
                                          if (uVar80 != 0xe) {
                                            ppuVar78[iVar91] = (u8 *)puVar58;
                                            __s[iVar91] = __s[iVar91] | 0x100;
                                            video->vram_map_dirty_bit_numbers[iVar55 + 0xe] =
                                                 uVar47 + '\x0e';
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
LAB_08038390:
              ppuVar54 = video->vram_map + 0x86;
              unmap_memory_page_region_direct(video->memory->memory_interface_arm9,0x6218000,uVar63)
              ;
              puVar90 = video->vram_map_dirty_bit_numbers + 0x86;
              puVar71 = video->vram_map_dirty_bit_numbers + uVar76 + 0x86;
              uVar97 = (uint)(puVar71 <= ppuVar54);
              uVar80 = video->vram_map_dirty_bitmap_fine[4];
              ppuVar61 = video->vram_map + uVar76 + 0x86;
              if (ppuVar61 <= puVar90) {
                uVar97 = 1;
              }
              puVar58 = video->vram_map_allocation_bitmap + uVar76 + 0x86;
              bVar101 = ppuVar54 <= puVar58;
              bVar102 = (u8 **)puVar58 == ppuVar54;
              if (bVar101 && !bVar102) {
                bVar101 = puVar59 <= ppuVar61;
                bVar102 = ppuVar61 == (u8 **)puVar59;
              }
              video->vram_map_dirty_bitmap_coarse = video->vram_map_dirty_bitmap_coarse | 0x10;
              bVar103 = puVar59 <= puVar71;
              bVar104 = (u16 *)puVar71 == puVar59;
              if (bVar103 && !bVar104) {
                bVar103 = puVar90 <= puVar58;
                bVar104 = puVar58 == (u16 *)puVar90;
              }
              video->vram_map_dirty_bitmap_fine[4] = uVar80 | uVar82 << 6;
              puVar58 = puVar84 + -0x10c000;
              if (((!bVar101 || bVar102) & uVar97 & uVar86 & (uint)(!bVar103 || bVar104)) == 0) {
                ppuVar61 = video->vram_map + 0x85;
                puVar71 = video->vram_map_dirty_bit_numbers + 0x85;
                iVar79 = 0x40;
                puVar57 = puVar59;
                do {
                  uVar23 = *puVar57;
                  ppuVar61 = ppuVar61 + 1;
                  *ppuVar61 = (u8 *)puVar58;
                  *puVar57 = uVar23 | 0x100;
                  puVar71 = puVar71 + 1;
                  *puVar71 = (u8)iVar79;
                  iVar79 = iVar79 + 1;
                  puVar57 = puVar57 + 1;
                } while (iVar79 != uVar76 + 0x40);
              }
              else {
                uVar97 = uVar76;
                if ((-(int)memory & 7U) <= uVar76) {
                  uVar97 = -(int)memory & 7U;
                }
                if (uVar97 == 0) {
                  iVar79 = 0x40;
                  iVar55 = 0x86;
                  uVar80 = uVar76;
                }
                else {
                  uVar23 = video->vram_map_allocation_bitmap[0x86];
                  uVar80 = uVar76 - 1;
                  video->vram_map[0x86] = (u8 *)puVar58;
                  video->vram_map_allocation_bitmap[0x86] = uVar23 | 0x100;
                  video->vram_map_dirty_bit_numbers[0x86] = '@';
                  if (uVar97 == 1) {
                    iVar79 = 0x41;
                    iVar55 = 0x87;
                  }
                  else {
                    uVar23 = video->vram_map_allocation_bitmap[0x87];
                    video->vram_map[0x87] = (u8 *)puVar58;
                    uVar80 = uVar76 - 2;
                    video->vram_map_dirty_bit_numbers[0x87] = 'A';
                    video->vram_map_allocation_bitmap[0x87] = uVar23 | 0x100;
                    if (uVar97 == 2) {
                      iVar79 = 0x42;
                      iVar55 = 0x88;
                    }
                    else {
                      uVar23 = video->vram_map_allocation_bitmap[0x88];
                      video->vram_map[0x88] = (u8 *)puVar58;
                      uVar80 = uVar76 - 3;
                      video->vram_map_allocation_bitmap[0x88] = uVar23 | 0x100;
                      video->vram_map_dirty_bit_numbers[0x88] = 'B';
                      if (uVar97 == 3) {
                        iVar79 = 0x43;
                        iVar55 = 0x89;
                      }
                      else {
                        uVar23 = video->vram_map_allocation_bitmap[0x89];
                        video->vram_map[0x89] = (u8 *)puVar58;
                        uVar80 = uVar76 - 4;
                        video->vram_map_dirty_bit_numbers[0x89] = 'C';
                        video->vram_map_allocation_bitmap[0x89] = uVar23 | 0x100;
                        if (uVar97 == 4) {
                          iVar79 = 0x44;
                          iVar55 = 0x8a;
                        }
                        else {
                          uVar23 = video->vram_map_allocation_bitmap[0x8a];
                          video->vram_map[0x8a] = (u8 *)puVar58;
                          uVar80 = uVar76 - 5;
                          video->vram_map_allocation_bitmap[0x8a] = uVar23 | 0x100;
                          video->vram_map_dirty_bit_numbers[0x8a] = 'D';
                          if (uVar97 == 5) {
                            iVar79 = 0x45;
                            iVar55 = 0x8b;
                          }
                          else {
                            uVar23 = video->vram_map_allocation_bitmap[0x8b];
                            video->vram_map[0x8b] = (u8 *)puVar58;
                            uVar80 = uVar76 - 6;
                            video->vram_map_dirty_bit_numbers[0x8b] = 'E';
                            video->vram_map_allocation_bitmap[0x8b] = uVar23 | 0x100;
                            if (uVar97 == 7) {
                              uVar23 = video->vram_map_allocation_bitmap[0x8c];
                              uVar80 = uVar76 - 7;
                              iVar79 = 0x47;
                              iVar55 = 0x8d;
                              video->vram_map[0x8c] = (u8 *)puVar58;
                              video->vram_map_allocation_bitmap[0x8c] = uVar23 | 0x100;
                              video->vram_map_dirty_bit_numbers[0x8c] = 'F';
                            }
                            else {
                              iVar79 = 0x46;
                              iVar55 = 0x8c;
                            }
                          }
                        }
                      }
                    }
                  }
                  if (uVar76 == uVar97) goto LAB_080389c0;
                }
                uVar72 = ((uVar76 - uVar97) - 0x10 >> 4) + 1;
                iVar91 = uVar72 * 0x10;
                if (0xe < (uVar76 - 1) - uVar97) {
                  auVar7._4_4_ = iVar79;
                  auVar7._0_4_ = iVar79;
                  auVar7._8_8_ = 0;
                  local_e0 = video->vram_map_dirty_bit_numbers + uVar97 + 0x86;
                  auVar1 = SIMDExpandImmediate(0,0,0x10);
                  auVar2 = SIMDExpandImmediate(0,0,4);
                  auVar122 = SIMDExpandImmediate(0,0,8);
                  auVar124 = SIMDExpandImmediate(0,0,0xc);
                  local_e4 = (u16 *)0x0;
                  auVar40._8_8_ = 0x300000002;
                  auVar40._0_8_ = 0x100000000;
                  auVar123 = VectorAdd(auVar7 & auVar7 << 0x40,auVar40,4);
                  ppuVar61 = video->vram_map + uVar97 + 0x86;
                  puVar57 = video->vram_map_allocation_bitmap + uVar97 + 0x96;
                  local_cc = video->vram_map_allocation_bitmap + uVar97 + 0x96;
                  do {
                    auVar118 = VectorAdd(auVar123,auVar2,4);
                    auVar126 = VectorAdd(auVar123,auVar122,4);
                    auVar105 = *(undefined (*) [16])(puVar57 + -0x10);
                    auVar112 = *(undefined (*) [16])(puVar57 + -8);
                    local_e4 = (u16 *)((int)local_e4 + 1);
                    *(undefined8 *)ppuVar61 = 0;
                    *(undefined8 *)(ppuVar61 + 2) = 0;
                    auVar110._0_8_ = VectorCopyNarrow(auVar123,4);
                    auVar110._8_8_ = VectorCopyNarrow(auVar118,4);
                    auVar118 = VectorAdd(auVar123,auVar124,4);
                    auVar123 = VectorAdd(auVar123,auVar1,4);
                    *(undefined8 *)(ppuVar61 + 4) = 0;
                    *(undefined8 *)(ppuVar61 + 6) = 0;
                    uVar113 = VectorCopyNarrow(auVar126,4);
                    uVar114 = VectorCopyNarrow(auVar118,4);
                    *(undefined8 *)(ppuVar61 + 8) = 0;
                    *(undefined8 *)(ppuVar61 + 10) = 0;
                    auVar126 = SIMDExpandImmediate(0,0xb,1);
                    uVar115 = VectorCopyNarrow(auVar110,2);
                    auVar30._8_8_ = uVar114;
                    auVar30._0_8_ = uVar113;
                    uVar113 = VectorCopyNarrow(auVar30,2);
                    *(undefined8 *)(ppuVar61 + 0xc) = 0;
                    *(undefined8 *)(ppuVar61 + 0xe) = 0;
                    auVar118 = SIMDExpandImmediate(0,0xb,1);
                    *(longlong *)(local_cc + -0x10) = SUB168(auVar105 | auVar126,0);
                    *(longlong *)(local_cc + -0xc) = SUB168(auVar105 | auVar126,8);
                    *(longlong *)(local_cc + -8) = SUB168(auVar112 | auVar118,0);
                    *(longlong *)(local_cc + -4) = SUB168(auVar112 | auVar118,8);
                    *(undefined8 *)local_e0 = uVar115;
                    *(undefined8 *)(local_e0 + 8) = uVar113;
                    local_e0 = local_e0 + 0x10;
                    ppuVar61 = ppuVar61 + 0x10;
                    puVar57 = puVar57 + 0x10;
                    local_cc = local_cc + 0x10;
                  } while (local_e4 < uVar72);
                  iVar55 = iVar55 + iVar91;
                  uVar80 = uVar80 + uVar72 * -0x10;
                  iVar79 = iVar79 + iVar91;
                  if (uVar76 - uVar97 == iVar91) goto LAB_080389c0;
                }
                uVar47 = (u8)iVar79;
                uVar23 = __s[iVar55];
                iVar79 = iVar55 + 1;
                ppuVar78[iVar55] = (u8 *)puVar58;
                __s[iVar55] = uVar23 | 0x100;
                video->vram_map_dirty_bit_numbers[iVar55] = uVar47;
                if (uVar80 != 1) {
                  ppuVar78[iVar79] = (u8 *)puVar58;
                  iVar91 = iVar55 + 2;
                  __s[iVar79] = __s[iVar79] | 0x100;
                  video->vram_map_dirty_bit_numbers[iVar55 + 1] = uVar47 + '\x01';
                  if (uVar80 != 2) {
                    uVar23 = __s[iVar91];
                    ppuVar78[iVar91] = (u8 *)puVar58;
                    iVar79 = iVar55 + 3;
                    __s[iVar91] = uVar23 | 0x100;
                    video->vram_map_dirty_bit_numbers[iVar55 + 2] = uVar47 + '\x02';
                    if (uVar80 != 3) {
                      uVar23 = __s[iVar79];
                      ppuVar78[iVar79] = (u8 *)puVar58;
                      iVar91 = iVar55 + 4;
                      __s[iVar79] = uVar23 | 0x100;
                      video->vram_map_dirty_bit_numbers[iVar55 + 3] = uVar47 + '\x03';
                      if (uVar80 != 4) {
                        uVar23 = __s[iVar91];
                        ppuVar78[iVar91] = (u8 *)puVar58;
                        iVar79 = iVar55 + 5;
                        __s[iVar91] = uVar23 | 0x100;
                        video->vram_map_dirty_bit_numbers[iVar55 + 4] = uVar47 + '\x04';
                        if (uVar80 != 5) {
                          uVar23 = __s[iVar79];
                          ppuVar78[iVar79] = (u8 *)puVar58;
                          iVar91 = iVar55 + 6;
                          __s[iVar79] = uVar23 | 0x100;
                          video->vram_map_dirty_bit_numbers[iVar55 + 5] = uVar47 + '\x05';
                          if (uVar80 != 6) {
                            uVar23 = __s[iVar91];
                            ppuVar78[iVar91] = (u8 *)puVar58;
                            iVar79 = iVar55 + 7;
                            __s[iVar91] = uVar23 | 0x100;
                            video->vram_map_dirty_bit_numbers[iVar55 + 6] = uVar47 + '\x06';
                            if (uVar80 != 7) {
                              uVar23 = __s[iVar79];
                              ppuVar78[iVar79] = (u8 *)puVar58;
                              iVar91 = iVar55 + 8;
                              __s[iVar79] = uVar23 | 0x100;
                              video->vram_map_dirty_bit_numbers[iVar55 + 7] = uVar47 + '\a';
                              if (uVar80 != 8) {
                                uVar23 = __s[iVar91];
                                ppuVar78[iVar91] = (u8 *)puVar58;
                                iVar79 = iVar55 + 9;
                                __s[iVar91] = uVar23 | 0x100;
                                video->vram_map_dirty_bit_numbers[iVar55 + 8] = uVar47 + '\b';
                                if (uVar80 != 9) {
                                  uVar23 = __s[iVar79];
                                  ppuVar78[iVar79] = (u8 *)puVar58;
                                  iVar91 = iVar55 + 10;
                                  __s[iVar79] = uVar23 | 0x100;
                                  video->vram_map_dirty_bit_numbers[iVar55 + 9] = uVar47 + '\t';
                                  if (uVar80 != 10) {
                                    uVar23 = __s[iVar91];
                                    ppuVar78[iVar91] = (u8 *)puVar58;
                                    iVar79 = iVar55 + 0xb;
                                    __s[iVar91] = uVar23 | 0x100;
                                    video->vram_map_dirty_bit_numbers[iVar55 + 10] = uVar47 + '\n';
                                    if (uVar80 != 0xb) {
                                      uVar23 = __s[iVar79];
                                      ppuVar78[iVar79] = (u8 *)puVar58;
                                      iVar91 = iVar55 + 0xc;
                                      __s[iVar79] = uVar23 | 0x100;
                                      video->vram_map_dirty_bit_numbers[iVar55 + 0xb] =
                                           uVar47 + '\v';
                                      if (uVar80 != 0xc) {
                                        uVar23 = __s[iVar91];
                                        ppuVar78[iVar91] = (u8 *)puVar58;
                                        iVar79 = iVar55 + 0xd;
                                        __s[iVar91] = uVar23 | 0x100;
                                        video->vram_map_dirty_bit_numbers[iVar55 + 0xc] =
                                             uVar47 + '\f';
                                        if (uVar80 != 0xd) {
                                          iVar91 = iVar55 + 0xe;
                                          ppuVar78[iVar79] = (u8 *)puVar58;
                                          __s[iVar79] = __s[iVar79] | 0x100;
                                          video->vram_map_dirty_bit_numbers[iVar55 + 0xd] =
                                               uVar47 + '\r';
                                          if (uVar80 != 0xe) {
                                            ppuVar78[iVar91] = (u8 *)puVar58;
                                            __s[iVar91] = __s[iVar91] | 0x100;
                                            video->vram_map_dirty_bit_numbers[iVar55 + 0xe] =
                                                 uVar47 + '\x0e';
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
LAB_080389c0:
              puVar84 = puVar84 + -0x10e000;
              unmap_memory_page_region_direct(video->memory->memory_interface_arm9,0x621c000,uVar63)
              ;
              uVar80 = video->vram_map_dirty_bitmap_fine[4];
              ppuVar61 = video->vram_map + 0x87;
              ppuVar100 = video->vram_map + uVar76 + 0x87;
              puVar58 = video->vram_map_allocation_bitmap + uVar76 + 0x87;
              uVar97 = (uint)(video->vram_map_dirty_bit_numbers + uVar76 + 0x87 <= ppuVar61);
              if (ppuVar100 <= video->vram_map_dirty_bit_numbers + 0x87) {
                uVar97 = 1;
              }
              bVar101 = puVar51 <= ppuVar100;
              bVar102 = ppuVar100 == (u8 **)puVar51;
              if (bVar101 && !bVar102) {
                bVar101 = ppuVar61 <= puVar58;
                bVar102 = (u8 **)puVar58 == ppuVar61;
              }
              video->vram_map_dirty_bitmap_coarse = video->vram_map_dirty_bitmap_coarse | 0x10;
              uVar72 = (uint)(video->vram_map_dirty_bit_numbers + uVar76 + 0x87 <= puVar51);
              if (puVar58 <= video->vram_map_dirty_bit_numbers + 0x87) {
                uVar72 = 1;
              }
              video->vram_map_dirty_bitmap_fine[4] = uVar80 | uVar82 << 7;
              if ((uVar86 & (!bVar101 || bVar102) & uVar97 & uVar72) == 0) {
                iVar79 = 0x40;
                puVar58 = puVar51;
                do {
                  uVar23 = *puVar58;
                  ppuVar54 = ppuVar54 + 1;
                  *ppuVar54 = (u8 *)puVar84;
                  *puVar58 = uVar23 | 0x100;
                  puVar90 = puVar90 + 1;
                  *puVar90 = (u8)iVar79;
                  iVar79 = iVar79 + 1;
                  puVar58 = puVar58 + 1;
                } while (iVar79 != uVar76 + 0x40);
                uVar86 = 0x82;
                uVar80 = 9;
                goto LAB_08036984;
              }
              uVar86 = uVar76;
              if (uVar52 <= uVar76) {
                uVar86 = uVar52;
              }
              if (uVar86 == 0) {
                iVar79 = 0x40;
                iVar55 = 0x87;
                uVar97 = uVar76;
LAB_08038bc0:
                uVar80 = ((uVar76 - uVar86) - 0x10 >> 4) + 1;
                iVar91 = uVar80 * 0x10;
                if (0xe < (uVar76 - 1) - uVar86) {
                  auVar8._4_4_ = iVar79;
                  auVar8._0_4_ = iVar79;
                  auVar8._8_8_ = 0;
                  auVar1 = SIMDExpandImmediate(0,0,0x10);
                  local_144 = 0;
                  auVar2 = SIMDExpandImmediate(0,0,4);
                  auVar122 = SIMDExpandImmediate(0,0,8);
                  auVar124 = SIMDExpandImmediate(0,0,0xc);
                  puVar71 = video->vram_map_dirty_bit_numbers + uVar86 + 0x87;
                  auVar41._8_8_ = 0x300000002;
                  auVar41._0_8_ = 0x100000000;
                  auVar123 = VectorAdd(auVar8 & auVar8 << 0x40,auVar41,4);
                  ppuVar54 = video->vram_map + uVar86 + 0x87;
                  puVar58 = video->vram_map_allocation_bitmap + uVar86 + 0x97;
                  local_140 = video->vram_map_allocation_bitmap + uVar86 + 0x97;
                  do {
                    auVar118 = VectorAdd(auVar123,auVar2,4);
                    auVar126 = VectorAdd(auVar123,auVar122,4);
                    auVar105 = *(undefined (*) [16])(puVar58 + -0x10);
                    auVar112 = *(undefined (*) [16])(puVar58 + -8);
                    local_144 = local_144 + 1;
                    *(undefined8 *)ppuVar54 = 0;
                    *(undefined8 *)(ppuVar54 + 2) = 0;
                    auVar111._0_8_ = VectorCopyNarrow(auVar123,4);
                    auVar111._8_8_ = VectorCopyNarrow(auVar118,4);
                    auVar118 = VectorAdd(auVar123,auVar124,4);
                    auVar123 = VectorAdd(auVar123,auVar1,4);
                    *(undefined8 *)(ppuVar54 + 4) = 0;
                    *(undefined8 *)(ppuVar54 + 6) = 0;
                    uVar113 = VectorCopyNarrow(auVar126,4);
                    uVar114 = VectorCopyNarrow(auVar118,4);
                    *(undefined8 *)(ppuVar54 + 8) = 0;
                    *(undefined8 *)(ppuVar54 + 10) = 0;
                    auVar126 = SIMDExpandImmediate(0,0xb,1);
                    uVar115 = VectorCopyNarrow(auVar111,2);
                    auVar31._8_8_ = uVar114;
                    auVar31._0_8_ = uVar113;
                    uVar113 = VectorCopyNarrow(auVar31,2);
                    *(undefined8 *)(ppuVar54 + 0xc) = 0;
                    *(undefined8 *)(ppuVar54 + 0xe) = 0;
                    auVar118 = SIMDExpandImmediate(0,0xb,1);
                    *(longlong *)(local_140 + -0x10) = SUB168(auVar105 | auVar126,0);
                    *(longlong *)(local_140 + -0xc) = SUB168(auVar105 | auVar126,8);
                    *(longlong *)(local_140 + -8) = SUB168(auVar112 | auVar118,0);
                    *(longlong *)(local_140 + -4) = SUB168(auVar112 | auVar118,8);
                    *(undefined8 *)puVar71 = uVar115;
                    *(undefined8 *)(puVar71 + 8) = uVar113;
                    puVar71 = puVar71 + 0x10;
                    ppuVar54 = ppuVar54 + 0x10;
                    puVar58 = puVar58 + 0x10;
                    local_140 = local_140 + 0x10;
                  } while (local_144 < uVar80);
                  uVar97 = uVar97 + uVar80 * -0x10;
                  iVar79 = iVar79 + iVar91;
                  iVar55 = iVar55 + iVar91;
                  if (uVar76 - uVar86 == iVar91) goto LAB_08038f4c;
                }
                uVar47 = (u8)iVar79;
                uVar23 = __s[iVar55];
                iVar79 = iVar55 + 1;
                ppuVar78[iVar55] = (u8 *)puVar84;
                __s[iVar55] = uVar23 | 0x100;
                video->vram_map_dirty_bit_numbers[iVar55] = uVar47;
                if (uVar97 != 1) {
                  ppuVar78[iVar79] = (u8 *)puVar84;
                  iVar91 = iVar55 + 2;
                  __s[iVar79] = __s[iVar79] | 0x100;
                  video->vram_map_dirty_bit_numbers[iVar55 + 1] = uVar47 + '\x01';
                  if (uVar97 != 2) {
                    ppuVar78[iVar91] = (u8 *)puVar84;
                    iVar79 = iVar55 + 3;
                    __s[iVar91] = __s[iVar91] | 0x100;
                    video->vram_map_dirty_bit_numbers[iVar55 + 2] = uVar47 + '\x02';
                    if (uVar97 != 3) {
                      ppuVar78[iVar79] = (u8 *)puVar84;
                      iVar91 = iVar55 + 4;
                      __s[iVar79] = __s[iVar79] | 0x100;
                      video->vram_map_dirty_bit_numbers[iVar55 + 3] = uVar47 + '\x03';
                      if (uVar97 != 4) {
                        ppuVar78[iVar91] = (u8 *)puVar84;
                        iVar79 = iVar55 + 5;
                        __s[iVar91] = __s[iVar91] | 0x100;
                        video->vram_map_dirty_bit_numbers[iVar55 + 4] = uVar47 + '\x04';
                        if (uVar97 != 5) {
                          ppuVar78[iVar79] = (u8 *)puVar84;
                          iVar91 = iVar55 + 6;
                          __s[iVar79] = __s[iVar79] | 0x100;
                          video->vram_map_dirty_bit_numbers[iVar55 + 5] = uVar47 + '\x05';
                          if (uVar97 != 6) {
                            ppuVar78[iVar91] = (u8 *)puVar84;
                            iVar79 = iVar55 + 7;
                            __s[iVar91] = __s[iVar91] | 0x100;
                            video->vram_map_dirty_bit_numbers[iVar55 + 6] = uVar47 + '\x06';
                            if (uVar97 != 7) {
                              ppuVar78[iVar79] = (u8 *)puVar84;
                              iVar91 = iVar55 + 8;
                              __s[iVar79] = __s[iVar79] | 0x100;
                              video->vram_map_dirty_bit_numbers[iVar55 + 7] = uVar47 + '\a';
                              if (uVar97 != 8) {
                                ppuVar78[iVar91] = (u8 *)puVar84;
                                iVar79 = iVar55 + 9;
                                __s[iVar91] = __s[iVar91] | 0x100;
                                video->vram_map_dirty_bit_numbers[iVar55 + 8] = uVar47 + '\b';
                                if (uVar97 != 9) {
                                  ppuVar78[iVar79] = (u8 *)puVar84;
                                  iVar91 = iVar55 + 10;
                                  __s[iVar79] = __s[iVar79] | 0x100;
                                  video->vram_map_dirty_bit_numbers[iVar55 + 9] = uVar47 + '\t';
                                  if (uVar97 != 10) {
                                    ppuVar78[iVar91] = (u8 *)puVar84;
                                    iVar79 = iVar55 + 0xb;
                                    __s[iVar91] = __s[iVar91] | 0x100;
                                    video->vram_map_dirty_bit_numbers[iVar55 + 10] = uVar47 + '\n';
                                    if (uVar97 != 0xb) {
                                      ppuVar78[iVar79] = (u8 *)puVar84;
                                      iVar91 = iVar55 + 0xc;
                                      __s[iVar79] = __s[iVar79] | 0x100;
                                      video->vram_map_dirty_bit_numbers[iVar55 + 0xb] =
                                           uVar47 + '\v';
                                      if (uVar97 != 0xc) {
                                        ppuVar78[iVar91] = (u8 *)puVar84;
                                        iVar79 = iVar55 + 0xd;
                                        __s[iVar91] = __s[iVar91] | 0x100;
                                        video->vram_map_dirty_bit_numbers[iVar55 + 0xc] =
                                             uVar47 + '\f';
                                        if (uVar97 != 0xd) {
                                          ppuVar78[iVar79] = (u8 *)puVar84;
                                          iVar91 = iVar55 + 0xe;
                                          __s[iVar79] = __s[iVar79] | 0x100;
                                          video->vram_map_dirty_bit_numbers[iVar55 + 0xd] =
                                               uVar47 + '\r';
                                          if (uVar97 != 0xe) {
                                            ppuVar78[iVar91] = (u8 *)puVar84;
                                            __s[iVar91] = __s[iVar91] | 0x100;
                                            video->vram_map_dirty_bit_numbers[iVar55 + 0xe] =
                                                 uVar47 + '\x0e';
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                uVar23 = video->vram_map_allocation_bitmap[0x87];
                uVar97 = uVar76 - 1;
                video->vram_map[0x87] = (u8 *)puVar84;
                video->vram_map_dirty_bit_numbers[0x87] = '@';
                video->vram_map_allocation_bitmap[0x87] = uVar23 | 0x100;
                if (uVar86 == 1) {
                  iVar79 = 0x41;
                  iVar55 = 0x88;
                }
                else {
                  uVar23 = video->vram_map_allocation_bitmap[0x88];
                  video->vram_map[0x88] = (u8 *)puVar84;
                  uVar97 = uVar76 - 2;
                  video->vram_map_allocation_bitmap[0x88] = uVar23 | 0x100;
                  video->vram_map_dirty_bit_numbers[0x88] = 'A';
                  if (uVar86 == 2) {
                    iVar79 = 0x42;
                    iVar55 = 0x89;
                  }
                  else {
                    uVar23 = video->vram_map_allocation_bitmap[0x89];
                    video->vram_map[0x89] = (u8 *)puVar84;
                    uVar97 = uVar76 - 3;
                    video->vram_map_dirty_bit_numbers[0x89] = 'B';
                    video->vram_map_allocation_bitmap[0x89] = uVar23 | 0x100;
                    if (uVar86 == 3) {
                      iVar79 = 0x43;
                      iVar55 = 0x8a;
                    }
                    else {
                      uVar23 = video->vram_map_allocation_bitmap[0x8a];
                      video->vram_map[0x8a] = (u8 *)puVar84;
                      uVar97 = uVar76 - 4;
                      video->vram_map_allocation_bitmap[0x8a] = uVar23 | 0x100;
                      video->vram_map_dirty_bit_numbers[0x8a] = 'C';
                      if (uVar86 == 4) {
                        iVar79 = 0x44;
                        iVar55 = 0x8b;
                      }
                      else {
                        uVar23 = video->vram_map_allocation_bitmap[0x8b];
                        video->vram_map[0x8b] = (u8 *)puVar84;
                        uVar97 = uVar76 - 5;
                        video->vram_map_dirty_bit_numbers[0x8b] = 'D';
                        video->vram_map_allocation_bitmap[0x8b] = uVar23 | 0x100;
                        if (uVar86 == 5) {
                          iVar79 = 0x45;
                          iVar55 = 0x8c;
                        }
                        else {
                          uVar23 = video->vram_map_allocation_bitmap[0x8c];
                          video->vram_map[0x8c] = (u8 *)puVar84;
                          uVar97 = uVar76 - 6;
                          video->vram_map_allocation_bitmap[0x8c] = uVar23 | 0x100;
                          video->vram_map_dirty_bit_numbers[0x8c] = 'E';
                          if (uVar86 == 7) {
                            uVar23 = video->vram_map_allocation_bitmap[0x8d];
                            uVar97 = uVar76 - 7;
                            video->vram_map[0x8d] = (u8 *)puVar84;
                            iVar79 = 0x47;
                            video->vram_map_dirty_bit_numbers[0x8d] = 'F';
                            iVar55 = 0x8e;
                            video->vram_map_allocation_bitmap[0x8d] = uVar23 | 0x100;
                          }
                          else {
                            iVar79 = 0x46;
                            iVar55 = 0x8d;
                          }
                        }
                      }
                    }
                  }
                }
                if (uVar76 != uVar86) goto LAB_08038bc0;
              }
LAB_08038f4c:
              uVar86 = 0x82;
              uVar80 = 9;
              goto LAB_08036984;
            }
            break;
          case 2:
            switch(dirty_bit_number_3) {
            case 0:
            case 1:
              uVar86 = (uVar97 & 1) + 0x20;
              goto switchD_08036a90_caseD_0;
            case 2:
            case 3:
              uVar97 = uVar97 & 1;
              uVar86 = uVar97 * 8;
              unmap_memory_page_region
                        (pmVar53->memory_interface_arm7,(uVar86 + 0x1800) * 0x4000,uVar76 << 10);
              uVar76 = uVar76 >> 7;
              iVar55 = uVar97 * 0x10 + 0x1da4;
              iVar79 = uVar76 + 0x44c + uVar86;
              uVar23 = (ushort)(1 << (dirty_bit_number_3 & 0xff));
              if (uVar76 < 0xc || iVar55 + iVar79 * -4 < 0 != SBORROW4(iVar55,iVar79 * 4)) {
                puVar58 = video->arm7_vram_allocation_bitmap + uVar97 * 8;
                ppuVar54 = video->arm7_vram_slots + uVar97 * 8;
                do {
                  uVar22 = *puVar58;
                  ppuVar61 = ppuVar54 + 1;
                  *ppuVar54 = (u8 *)puVar84;
                  puVar84 = puVar84 + 0x10000;
                  *puVar58 = uVar23 | uVar22;
                  puVar58 = puVar58 + 1;
                  ppuVar54 = ppuVar61;
                } while (ppuVar61 != video->arm7_vram_slots + uVar86 + uVar76);
              }
              else {
                uVar80 = -((uint)((int)video->arm7_vram_allocation_bitmap * 0x20000000) >> 0x1e) & 7
                ;
                if (uVar76 <= uVar80) {
                  uVar80 = uVar76;
                }
                uVar82 = uVar76;
                uVar72 = uVar86;
                puVar58 = puVar84;
                if (uVar80 != 0) {
                  uVar22 = video->arm7_vram_allocation_bitmap[uVar97 * 8];
                  uVar82 = uVar76 - 1;
                  video->arm7_vram_slots[uVar97 * 8] = (u8 *)puVar84;
                  puVar58 = puVar84 + 0x10000;
                  uVar72 = uVar86 + 1;
                  video->arm7_vram_allocation_bitmap[uVar97 * 8] = uVar23 | uVar22;
                  if (uVar80 != 1) {
                    video->arm7_vram_slots[uVar97 * 8 + 1] = (u8 *)puVar58;
                    uVar82 = uVar76 - 2;
                    puVar58 = puVar84 + 0x20000;
                    uVar72 = uVar86 + 2;
                    video->arm7_vram_allocation_bitmap[uVar97 * 8 + 1] =
                         uVar23 | video->arm7_vram_allocation_bitmap[uVar97 * 8 + 1];
                    if (uVar80 != 2) {
                      video->vram_map_dirty_bitmap_fine[uVar97 * 8] = (u32)puVar58;
                      uVar82 = uVar76 - 3;
                      puVar58 = puVar84 + 0x30000;
                      uVar72 = uVar86 + 3;
                      *(ushort *)(video->palette_ram + uVar97 * 4) =
                           uVar23 | *(ushort *)(video->palette_ram + uVar97 * 4);
                      if (uVar80 != 3) {
                        video->vram_map_dirty_bitmap_fine[uVar97 * 8 + 1] = (u32)puVar58;
                        uVar82 = uVar76 - 4;
                        puVar58 = puVar84 + 0x40000;
                        uVar72 = uVar86 + 4;
                        *(ushort *)((int)video->palette_ram + uVar97 * 0x10 + 2) =
                             uVar23 | *(ushort *)((int)video->palette_ram + uVar97 * 0x10 + 2);
                        if (uVar80 != 4) {
                          video->vram_map_dirty_bitmap_fine[uVar97 * 8 + 2] = (u32)puVar58;
                          uVar82 = uVar76 - 5;
                          puVar58 = puVar84 + 0x50000;
                          uVar72 = uVar86 + 5;
                          *(ushort *)(video->palette_ram + uVar97 * 4 + 1) =
                               uVar23 | *(ushort *)(video->palette_ram + uVar97 * 4 + 1);
                          if (uVar80 != 5) {
                            video->vram_map_dirty_bitmap_fine[uVar97 * 8 + 3] = (u32)puVar58;
                            uVar82 = uVar76 - 6;
                            puVar58 = puVar84 + 0x60000;
                            uVar72 = uVar86 + 6;
                            *(ushort *)((int)video->palette_ram + uVar97 * 0x10 + 6) =
                                 uVar23 | *(ushort *)((int)video->palette_ram + uVar97 * 0x10 + 6);
                            if (uVar80 == 7) {
                              video->vram_map_dirty_bitmap_fine[uVar97 * 8 + 4] = (u32)puVar58;
                              *(ushort *)(video->oam_ram + uVar97 * 4) =
                                   uVar23 | *(ushort *)(video->oam_ram + uVar97 * 4);
                              uVar82 = uVar76 - 7;
                              uVar72 = uVar86 + 7;
                              puVar58 = puVar84 + 0x70000;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                local_160 = (u16 *)(uVar76 - 1);
                uVar89 = ((uVar76 - uVar80) - 8 >> 3) + 1;
                if (6 < (int)local_160 - uVar80) {
                  auVar9._4_4_ = puVar58;
                  auVar9._0_4_ = puVar58;
                  auVar9._8_8_ = 0;
                  auVar10._4_4_ = CONCAT22(uVar23,uVar23);
                  auVar10._0_4_ = CONCAT22(uVar23,uVar23);
                  auVar10._8_8_ = 0;
                  auVar1 = SIMDExpandImmediate(0,4,0x10);
                  ppuVar77 = (u16 **)(video->arm7_vram_allocation_bitmap + uVar80 + uVar97 * 8);
                  auVar2 = SIMDExpandImmediate(0,4,8);
                  uVar98 = 0;
                  auVar45._8_8_ = 0x6000000040000;
                  auVar45._0_8_ = 0x2000000000000;
                  auVar122 = VectorAdd(auVar9 & auVar9 << 0x40,auVar45,4);
                  ppuVar54 = video->arm7_vram_slots + uVar80 + uVar97 * 8;
                  ppuVar56 = ppuVar77;
                  do {
                    auVar124 = *(undefined (*) [16])ppuVar77;
                    auVar123 = VectorAdd(auVar122,auVar2,4);
                    uVar98 = uVar98 + 1;
                    *(longlong *)ppuVar54 = auVar122._0_8_;
                    *(longlong *)(ppuVar54 + 2) = auVar122._8_8_;
                    ppuVar77 = ppuVar77 + 4;
                    auVar122 = VectorAdd(auVar122,auVar1,4);
                    *(longlong *)(ppuVar54 + 4) = auVar123._0_8_;
                    *(longlong *)(ppuVar54 + 6) = auVar123._8_8_;
                    auVar124 = auVar124 | auVar10 & auVar10 << 0x40;
                    *(longlong *)ppuVar56 = auVar124._0_8_;
                    *(longlong *)(ppuVar56 + 2) = auVar124._8_8_;
                    ppuVar54 = ppuVar54 + 8;
                    ppuVar56 = ppuVar56 + 4;
                  } while (uVar98 < uVar89);
                  puVar58 = puVar58 + uVar89 * 0x80000;
                  uVar82 = uVar82 + uVar89 * -8;
                  uVar72 = uVar72 + uVar89 * 8;
                  if (uVar76 - uVar80 == uVar89 * 8) goto LAB_0803969c;
                }
                video->arm7_vram_slots[uVar72] = (u8 *)puVar58;
                video->arm7_vram_allocation_bitmap[uVar72] =
                     uVar23 | video->arm7_vram_allocation_bitmap[uVar72];
                if (uVar82 != 1) {
                  video->arm7_vram_slots[uVar72 + 1] = (u8 *)(puVar58 + 0x10000);
                  video->arm7_vram_allocation_bitmap[uVar72 + 1] =
                       uVar23 | video->arm7_vram_allocation_bitmap[uVar72 + 1];
                  if (uVar82 != 2) {
                    video->vram_map_dirty_bitmap_fine[uVar72] = (u32)(puVar58 + 0x20000);
                    *(ushort *)((int)video->palette_ram + uVar72 * 2) =
                         uVar23 | *(ushort *)((int)video->palette_ram + uVar72 * 2);
                    if (uVar82 != 3) {
                      video->vram_map_dirty_bitmap_fine[uVar72 + 1] = (u32)(puVar58 + 0x30000);
                      *(ushort *)((int)video->palette_ram + uVar72 * 2 + 2) =
                           uVar23 | *(ushort *)((int)video->palette_ram + uVar72 * 2 + 2);
                      if (uVar82 != 4) {
                        video->vram_map_dirty_bitmap_fine[uVar72 + 2] = (u32)(puVar58 + 0x40000);
                        *(ushort *)((int)video->palette_ram + uVar72 * 2 + 4) =
                             uVar23 | *(ushort *)((int)video->palette_ram + uVar72 * 2 + 4);
                        if (uVar82 != 5) {
                          video->vram_map_dirty_bitmap_fine[uVar72 + 3] = (u32)(puVar58 + 0x50000);
                          *(ushort *)((int)video->palette_ram + uVar72 * 2 + 6) =
                               uVar23 | *(ushort *)((int)video->palette_ram + uVar72 * 2 + 6);
                          if (uVar82 != 6) {
                            video->vram_map_dirty_bitmap_fine[uVar72 + 4] = (u32)(puVar58 + 0x60000)
                            ;
                            *(ushort *)((int)video->oam_ram + uVar72 * 2) =
                                 uVar23 | *(ushort *)((int)video->oam_ram + uVar72 * 2);
                          }
                        }
                      }
                    }
                  }
                }
              }
LAB_0803969c:
              uVar80 = 7;
              goto LAB_08036984;
            case 4:
              uVar97 = 8;
              uVar80 = 0x100;
              uVar86 = 0x100;
              uVar82 = 0xffc00000;
              uVar63 = 0x6400000;
              local_120 = 0x80;
              break;
            case 5:
            case 6:
              uVar86 = (uVar97 & 1) + 0x100 + (uVar97 & 2) * 2;
              goto LAB_0803a1ac;
            case 7:
              uVar86 = 0;
              uVar80 = 1;
              goto LAB_0803bdd0;
            case 8:
switchD_080369c0_caseD_3:
              uVar97 = 0xc;
              uVar82 = 0xffa00000;
              uVar63 = 0x6600000;
              local_120 = 0x100;
              uVar80 = 0x1000;
              uVar86 = 0x180;
              break;
            default:
              goto switchD_08036934_caseD_7;
            }
            goto LAB_08039928;
          case 3:
            switch(dirty_bit_number_3) {
            case 0:
            case 1:
            case 2:
            case 3:
              uVar76 = uVar76 >> 7;
              iVar55 = uVar76 + 0x442 + uVar86;
              uVar97 = video->vram_abcd_dirty;
              iVar79 = uVar86 * 2 + 0x1d90;
              uVar23 = (ushort)(1 << (dirty_bit_number_3 & 0xff));
              if (uVar76 < 0xc || iVar79 + iVar55 * -4 < 0 != SBORROW4(iVar79,iVar55 * 4)) {
                ppuVar54 = ppuVar67 + uVar86;
                puVar58 = puVar68 + uVar86;
                do {
                  uVar22 = *puVar58;
                  ppuVar61 = ppuVar54 + 1;
                  *ppuVar54 = (u8 *)puVar84;
                  puVar84 = puVar84 + 0x10000;
                  *puVar58 = uVar23 | uVar22;
                  ppuVar54 = ppuVar61;
                  puVar58 = puVar58 + 1;
                } while (ppuVar61 != ppuVar67 + uVar86 + uVar76);
              }
              else {
                uVar80 = -((uint)((int)(video->texture_allocation_bitmap + uVar86) * 0x20000000) >>
                          0x1e) & 7;
                if (uVar76 <= uVar80) {
                  uVar80 = uVar76;
                }
                uVar82 = uVar86;
                puVar58 = puVar84;
                uVar72 = uVar76;
                if (uVar80 != 0) {
                  uVar72 = uVar76 - 1;
                  puVar58 = puVar84 + 0x10000;
                  ppuVar67[uVar86] = (u8 *)puVar84;
                  uVar82 = uVar86 + 1;
                  puVar68[uVar86] = uVar23 | puVar68[uVar86];
                  if (uVar80 != 1) {
                    uVar22 = puVar68[uVar82];
                    ppuVar67[uVar82] = (u8 *)puVar58;
                    puVar58 = puVar84 + 0x20000;
                    uVar89 = uVar86 + 2;
                    uVar72 = uVar76 - 2;
                    puVar68[uVar82] = uVar23 | uVar22;
                    uVar82 = uVar89;
                    if (uVar80 != 2) {
                      uVar22 = puVar68[uVar89];
                      ppuVar67[uVar89] = (u8 *)puVar58;
                      puVar58 = puVar84 + 0x30000;
                      uVar82 = uVar86 + 3;
                      uVar72 = uVar76 - 3;
                      puVar68[uVar89] = uVar23 | uVar22;
                      if (uVar80 != 3) {
                        uVar22 = puVar68[uVar82];
                        ppuVar67[uVar82] = (u8 *)puVar58;
                        puVar58 = puVar84 + 0x40000;
                        uVar89 = uVar86 + 4;
                        uVar72 = uVar76 - 4;
                        puVar68[uVar82] = uVar23 | uVar22;
                        uVar82 = uVar89;
                        if (uVar80 != 4) {
                          uVar22 = puVar68[uVar89];
                          ppuVar67[uVar89] = (u8 *)puVar58;
                          puVar58 = puVar84 + 0x50000;
                          uVar98 = uVar86 + 5;
                          uVar72 = uVar76 - 5;
                          puVar68[uVar89] = uVar23 | uVar22;
                          uVar82 = uVar98;
                          if (uVar80 != 5) {
                            uVar22 = puVar68[uVar98];
                            ppuVar67[uVar98] = (u8 *)puVar58;
                            puVar58 = puVar84 + 0x60000;
                            uVar82 = uVar86 + 6;
                            uVar72 = uVar76 - 6;
                            puVar68[uVar98] = uVar23 | uVar22;
                            if (uVar80 == 7) {
                              uVar22 = puVar68[uVar82];
                              ppuVar67[uVar82] = (u8 *)puVar58;
                              puVar68[uVar82] = uVar23 | uVar22;
                              uVar82 = uVar86 + 7;
                              puVar58 = puVar84 + 0x70000;
                              uVar72 = uVar76 - 7;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                uVar89 = ((uVar76 - uVar80) - 8 >> 3) + 1;
                if (6 < (uVar76 - 1) - uVar80) {
                  auVar112._4_4_ = puVar58;
                  auVar112._0_4_ = puVar58;
                  auVar112._8_8_ = 0;
                  auVar116._4_4_ = CONCAT22(uVar23,uVar23);
                  auVar116._0_4_ = CONCAT22(uVar23,uVar23);
                  auVar116._8_8_ = 0;
                  puVar57 = video->texture_allocation_bitmap + uVar80 + uVar86;
                  auVar1 = SIMDExpandImmediate(0,4,0x10);
                  auVar2 = SIMDExpandImmediate(0,4,8);
                  uVar98 = 0;
                  auVar44._8_8_ = 0x6000000040000;
                  auVar44._0_8_ = 0x2000000000000;
                  auVar122 = VectorAdd(auVar112 & auVar112 << 0x40,auVar44,4);
                  ppuVar56 = (u16 **)(video->texture_slots + uVar80 + uVar86);
                  puVar84 = puVar57;
                  do {
                    auVar124 = *(undefined (*) [16])puVar57;
                    auVar123 = VectorAdd(auVar122,auVar2,4);
                    uVar98 = uVar98 + 1;
                    *(longlong *)ppuVar56 = auVar122._0_8_;
                    *(longlong *)(ppuVar56 + 2) = auVar122._8_8_;
                    puVar57 = puVar57 + 8;
                    auVar122 = VectorAdd(auVar122,auVar1,4);
                    *(longlong *)(ppuVar56 + 4) = auVar123._0_8_;
                    *(longlong *)(ppuVar56 + 6) = auVar123._8_8_;
                    auVar124 = auVar124 | auVar116 & auVar116 << 0x40;
                    *(longlong *)puVar84 = auVar124._0_8_;
                    *(longlong *)(puVar84 + 4) = auVar124._8_8_;
                    ppuVar56 = ppuVar56 + 8;
                    puVar84 = puVar84 + 8;
                  } while (uVar98 < uVar89);
                  puVar58 = puVar58 + uVar89 * 0x80000;
                  uVar82 = uVar82 + uVar89 * 8;
                  uVar72 = uVar72 + uVar89 * -8;
                  if (uVar76 - uVar80 == uVar89 * 8) goto LAB_080392dc;
                }
                iVar79 = uVar82 + 1;
                ppuVar67[uVar82] = (u8 *)puVar58;
                puVar68[uVar82] = uVar23 | puVar68[uVar82];
                if (uVar72 != 1) {
                  ppuVar67[iVar79] = (u8 *)(puVar58 + 0x10000);
                  iVar55 = uVar82 + 2;
                  puVar68[iVar79] = uVar23 | puVar68[iVar79];
                  if (uVar72 != 2) {
                    ppuVar67[iVar55] = (u8 *)(puVar58 + 0x20000);
                    iVar79 = uVar82 + 3;
                    puVar68[iVar55] = uVar23 | puVar68[iVar55];
                    if (uVar72 != 3) {
                      ppuVar67[iVar79] = (u8 *)(puVar58 + 0x30000);
                      iVar55 = uVar82 + 4;
                      puVar68[iVar79] = uVar23 | puVar68[iVar79];
                      if (uVar72 != 4) {
                        ppuVar67[iVar55] = (u8 *)(puVar58 + 0x40000);
                        iVar79 = uVar82 + 5;
                        puVar68[iVar55] = uVar23 | puVar68[iVar55];
                        if (uVar72 != 5) {
                          ppuVar67[iVar79] = (u8 *)(puVar58 + 0x50000);
                          iVar55 = uVar82 + 6;
                          puVar68[iVar79] = uVar23 | puVar68[iVar79];
                          if (uVar72 != 6) {
                            ppuVar67[iVar55] = (u8 *)(puVar58 + 0x60000);
                            puVar68[iVar55] = uVar23 | puVar68[iVar55];
                          }
                        }
                      }
                    }
                  }
                }
              }
LAB_080392dc:
              uVar76 = 0xff << (local_180 & 0xff);
              uVar80 = 4;
              (video->texture_cache).texture_slots_dirty =
                   (video->texture_cache).texture_slots_dirty |
                   (uVar97 >> (local_180 & 0xff) & 0xff) << (uVar86 << 3);
              (video->texture_cache).texture_slots_allocated =
                   (video->texture_cache).texture_slots_allocated | uVar76;
              video->vram_abcd_dirty = uVar97 & ~uVar76;
              break;
            case 4:
              uVar86 = 0;
              goto LAB_0803b11c;
            case 5:
            case 6:
              uVar86 = (uVar97 & 1) + (uVar97 & 2) * 2;
LAB_0803b11c:
              uVar76 = uVar76 >> 4;
              iVar79 = uVar86 * 2 + 0x1d98;
              iVar55 = uVar76 + 0x446 + uVar86;
              uVar97 = 1 << (dirty_bit_number_3 & 0xff);
              uVar23 = (ushort)uVar97;
              if (uVar76 < 0xc || iVar79 + iVar55 * -4 < 0 != SBORROW4(iVar79,iVar55 * 4)) {
                ppuVar56 = ppuVar69 + uVar86;
                puVar58 = puVar74 + uVar86;
                do {
                  uVar22 = *puVar58;
                  ppuVar77 = ppuVar56 + 1;
                  *ppuVar56 = puVar84;
                  puVar84 = puVar84 + 0x2000;
                  *puVar58 = uVar23 | uVar22;
                  ppuVar56 = ppuVar77;
                  puVar58 = puVar58 + 1;
                } while (ppuVar77 != ppuVar69 + uVar76 + uVar86);
              }
              else {
                uVar80 = -((uint)((int)(video->texture_palette_allocation_bitmap + uVar86) *
                                 0x20000000) >> 0x1e) & 7;
                if (uVar76 <= uVar80) {
                  uVar80 = uVar76;
                }
                uVar82 = uVar86;
                puVar58 = puVar84;
                uVar72 = uVar76;
                if (uVar80 != 0) {
                  uVar72 = uVar76 - 1;
                  puVar58 = puVar84 + 0x2000;
                  ppuVar69[uVar86] = puVar84;
                  uVar82 = uVar86 + 1;
                  puVar74[uVar86] = uVar23 | puVar74[uVar86];
                  if (uVar80 != 1) {
                    uVar22 = puVar74[uVar82];
                    ppuVar69[uVar82] = puVar58;
                    puVar58 = puVar84 + 0x4000;
                    uVar89 = uVar86 + 2;
                    uVar72 = uVar76 - 2;
                    puVar74[uVar82] = uVar23 | uVar22;
                    uVar82 = uVar89;
                    if (uVar80 != 2) {
                      uVar22 = puVar74[uVar89];
                      ppuVar69[uVar89] = puVar58;
                      puVar58 = puVar84 + 0x6000;
                      uVar82 = uVar86 + 3;
                      uVar72 = uVar76 - 3;
                      puVar74[uVar89] = uVar23 | uVar22;
                      if (uVar80 != 3) {
                        uVar22 = puVar74[uVar82];
                        ppuVar69[uVar82] = puVar58;
                        puVar58 = puVar84 + 0x8000;
                        uVar89 = uVar86 + 4;
                        uVar72 = uVar76 - 4;
                        puVar74[uVar82] = uVar23 | uVar22;
                        uVar82 = uVar89;
                        if (uVar80 != 4) {
                          uVar22 = puVar74[uVar89];
                          ppuVar69[uVar89] = puVar58;
                          puVar58 = puVar84 + 0xa000;
                          uVar98 = uVar86 + 5;
                          uVar72 = uVar76 - 5;
                          puVar74[uVar89] = uVar23 | uVar22;
                          uVar82 = uVar98;
                          if (uVar80 != 5) {
                            uVar22 = puVar74[uVar98];
                            ppuVar69[uVar98] = puVar58;
                            puVar58 = puVar84 + 0xc000;
                            uVar82 = uVar86 + 6;
                            uVar72 = uVar76 - 6;
                            puVar74[uVar98] = uVar23 | uVar22;
                            if (uVar80 == 7) {
                              uVar22 = puVar74[uVar82];
                              ppuVar69[uVar82] = puVar58;
                              puVar74[uVar82] = uVar23 | uVar22;
                              uVar82 = uVar86 + 7;
                              puVar58 = puVar84 + 0xe000;
                              uVar72 = uVar76 - 7;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                uVar89 = ((uVar76 - uVar80) - 8 >> 3) + 1;
                if (6 < (uVar76 - 1) - uVar80) {
                  auVar126._4_4_ = puVar58;
                  auVar126._0_4_ = puVar58;
                  auVar126._8_8_ = 0;
                  auVar118._4_4_ = CONCAT22(uVar23,uVar23);
                  auVar118._0_4_ = CONCAT22(uVar23,uVar23);
                  auVar118._8_8_ = 0;
                  ppuVar62 = (u16 **)(video->texture_palette_allocation_bitmap + uVar80 + uVar86);
                  auVar1 = SIMDExpandImmediate(0,4,2);
                  auVar2 = SIMDExpandImmediate(0,4,1);
                  uVar98 = 0;
                  auVar105._8_8_ = 0xc00000008000;
                  auVar105._0_8_ = 0x400000000000;
                  auVar122 = VectorAdd(auVar126 & auVar126 << 0x40,auVar105,4);
                  ppuVar56 = video->texture_palette_slots + uVar80 + uVar86;
                  ppuVar77 = ppuVar62;
                  do {
                    auVar124 = *(undefined (*) [16])ppuVar62;
                    auVar123 = VectorAdd(auVar122,auVar2,4);
                    uVar98 = uVar98 + 1;
                    *(longlong *)ppuVar56 = auVar122._0_8_;
                    *(longlong *)(ppuVar56 + 2) = auVar122._8_8_;
                    ppuVar62 = ppuVar62 + 4;
                    auVar122 = VectorAdd(auVar122,auVar1,4);
                    *(longlong *)(ppuVar56 + 4) = auVar123._0_8_;
                    *(longlong *)(ppuVar56 + 6) = auVar123._8_8_;
                    auVar124 = auVar124 | auVar118 & auVar118 << 0x40;
                    *(longlong *)ppuVar77 = auVar124._0_8_;
                    *(longlong *)(ppuVar77 + 2) = auVar124._8_8_;
                    ppuVar56 = ppuVar56 + 8;
                    ppuVar77 = ppuVar77 + 4;
                  } while (uVar98 < uVar89);
                  puVar58 = puVar58 + uVar89 * 0x10000;
                  uVar82 = uVar82 + uVar89 * 8;
                  uVar72 = uVar72 + uVar89 * -8;
                  if (uVar76 - uVar80 == uVar89 * 8) goto LAB_0803b484;
                }
                iVar79 = uVar82 + 1;
                ppuVar69[uVar82] = puVar58;
                puVar74[uVar82] = uVar23 | puVar74[uVar82];
                if (uVar72 != 1) {
                  ppuVar69[iVar79] = puVar58 + 0x2000;
                  iVar55 = uVar82 + 2;
                  puVar74[iVar79] = uVar23 | puVar74[iVar79];
                  if (uVar72 != 2) {
                    ppuVar69[iVar55] = puVar58 + 0x4000;
                    iVar79 = uVar82 + 3;
                    puVar74[iVar55] = uVar23 | puVar74[iVar55];
                    if (uVar72 != 3) {
                      ppuVar69[iVar79] = puVar58 + 0x6000;
                      iVar55 = uVar82 + 4;
                      puVar74[iVar79] = uVar23 | puVar74[iVar79];
                      if (uVar72 != 4) {
                        ppuVar69[iVar55] = puVar58 + 0x8000;
                        iVar79 = uVar82 + 5;
                        puVar74[iVar55] = uVar23 | puVar74[iVar55];
                        if (uVar72 != 5) {
                          ppuVar69[iVar79] = puVar58 + 0xa000;
                          iVar55 = uVar82 + 6;
                          puVar74[iVar79] = uVar23 | puVar74[iVar79];
                          if (uVar72 != 6) {
                            ppuVar69[iVar55] = puVar58 + 0xc000;
                            puVar74[iVar55] = uVar23 | puVar74[iVar55];
                          }
                        }
                      }
                    }
                  }
                }
              }
LAB_0803b484:
              if (dirty_bit_number_3 == 4) {
                uVar76 = video->vram_efg_dirty;
                uVar80 = 5;
                (video->texture_cache).texture_palette_slots_dirty =
                     (video->texture_cache).texture_palette_slots_dirty | uVar76 & 0xf;
                video->vram_efg_dirty = uVar76 & 0xffffff00;
                (video->texture_cache).texture_palette_slots_allocated = 0xf;
              }
              else {
                uVar76 = video->vram_efg_dirty;
                uVar82 = (video->texture_cache).texture_palette_slots_allocated;
                uVar80 = 5;
                (video->texture_cache).texture_palette_slots_dirty =
                     (video->texture_cache).texture_palette_slots_dirty |
                     (uVar76 >> (local_180 - 0x20 & 0xff) & 1) << (uVar86 << 3);
                video->vram_efg_dirty = uVar76 & ~(0xff << (local_180 - 0x20 & 0xff));
                (video->texture_cache).texture_palette_slots_allocated = uVar82 | uVar97;
              }
              break;
            case 7:
switchD_080369c0_caseD_0:
              uVar80 = 0xc;
              goto LAB_08036980;
            case 8:
              local_144 = 1;
              uVar80 = 3;
LAB_0803c254:
              local_16c = uVar76 >> 1;
              uVar76 = uVar76 >> 4;
              iVar79 = (uVar76 + local_144 + 0x440) * 4;
              iVar55 = iVar79 + (local_144 + 0xec6) * -2;
              puVar58 = video->extended_palette_obj_allocation_bitmap + local_144;
              uVar23 = (ushort)(1 << (dirty_bit_number_3 & 0xff));
              if ((iVar55 == 0 || iVar55 < 0 != SBORROW4(iVar79,local_144 * 2 + 0x1d8c)) &&
                  0xb < uVar76) {
                uVar86 = -((uint)((int)(video->extended_palette_obj_allocation_bitmap + local_144) *
                                 0x20000000) >> 0x1e) & 7;
                if (uVar76 <= uVar86) {
                  uVar86 = uVar76;
                }
                puVar57 = puVar84;
                uVar97 = uVar86;
                uVar82 = uVar76;
                if (uVar86 != 0) {
                  uVar22 = video->extended_palette_obj_allocation_bitmap[local_144];
                  uVar82 = uVar76 - 1;
                  video->extended_palette_obj_slots[local_144] = puVar84;
                  puVar57 = puVar84 + 0x1000;
                  video->extended_palette_obj_allocation_bitmap[local_144] = uVar23 | uVar22;
                  if (uVar86 != 1) {
                    uVar22 = video->extended_palette_obj_allocation_bitmap[local_144 + 1];
                    video->extended_palette_obj_slots[local_144 + 1] = puVar57;
                    uVar82 = uVar76 - 2;
                    puVar57 = puVar84 + 0x2000;
                    video->extended_palette_obj_allocation_bitmap[local_144 + 1] = uVar23 | uVar22;
                    if (uVar86 != 2) {
                      uVar22 = video->texture_allocation_bitmap[local_144];
                      video->texture_slots[local_144] = (u8 *)puVar57;
                      uVar82 = uVar76 - 3;
                      puVar57 = puVar84 + 0x3000;
                      video->texture_allocation_bitmap[local_144] = uVar23 | uVar22;
                      if (uVar86 != 3) {
                        uVar22 = video->texture_allocation_bitmap[local_144 + 1];
                        video->texture_slots[local_144 + 1] = (u8 *)puVar57;
                        uVar82 = uVar76 - 4;
                        puVar57 = puVar84 + 0x4000;
                        video->texture_allocation_bitmap[local_144 + 1] = uVar23 | uVar22;
                        if (uVar86 != 4) {
                          uVar22 = video->texture_allocation_bitmap[local_144 + 2];
                          video->texture_slots[local_144 + 2] = (u8 *)puVar57;
                          uVar82 = uVar76 - 5;
                          puVar57 = puVar84 + 0x5000;
                          video->texture_allocation_bitmap[local_144 + 2] = uVar23 | uVar22;
                          if (uVar86 != 5) {
                            uVar22 = video->texture_allocation_bitmap[local_144 + 3];
                            video->texture_slots[local_144 + 3] = (u8 *)puVar57;
                            video->texture_allocation_bitmap[local_144 + 3] = uVar23 | uVar22;
                            if (uVar86 == 7) {
                              uVar22 = video->texture_palette_allocation_bitmap[local_144];
                              video->texture_palette_slots[local_144] = puVar84 + 0x6000;
                              video->texture_palette_allocation_bitmap[local_144] = uVar23 | uVar22;
                              puVar57 = puVar84 + 0x7000;
                              uVar82 = uVar76 - 7;
                            }
                            else {
                              puVar57 = puVar84 + 0x6000;
                              uVar97 = 6;
                              uVar82 = uVar76 - 6;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                local_140 = (u16 *)(uVar76 - 1);
                uVar72 = ((uVar76 - uVar86) - 8 >> 3) + 1;
                if (6 < (int)local_140 - uVar86) {
                  auVar122._4_4_ = puVar57;
                  auVar122._0_4_ = puVar57;
                  auVar122._8_8_ = 0;
                  auVar124._4_4_ = CONCAT22(uVar23,uVar23);
                  auVar124._0_4_ = CONCAT22(uVar23,uVar23);
                  auVar124._8_8_ = 0;
                  puVar83 = video->extended_palette_obj_allocation_bitmap + uVar86 + local_144;
                  auVar1 = SIMDExpandImmediate(0,4,1);
                  auVar2 = SIMDExpandImmediate(0,2,0x80);
                  uVar89 = 0;
                  auVar123._8_8_ = 0x600000004000;
                  auVar123._0_8_ = 0x200000000000;
                  auVar122 = VectorAdd(auVar122 & auVar122 << 0x40,auVar123,4);
                  ppuVar56 = video->extended_palette_obj_slots + uVar86 + local_144;
                  puVar84 = puVar83;
                  do {
                    auVar123 = *(undefined (*) [16])puVar83;
                    auVar126 = VectorAdd(auVar122,auVar2,4);
                    uVar89 = uVar89 + 1;
                    *(longlong *)ppuVar56 = auVar122._0_8_;
                    *(longlong *)(ppuVar56 + 2) = auVar122._8_8_;
                    puVar83 = puVar83 + 8;
                    auVar122 = VectorAdd(auVar122,auVar1,4);
                    *(longlong *)(ppuVar56 + 4) = auVar126._0_8_;
                    *(longlong *)(ppuVar56 + 6) = auVar126._8_8_;
                    auVar123 = auVar123 | auVar124 & auVar124 << 0x40;
                    *(longlong *)puVar84 = auVar123._0_8_;
                    *(longlong *)(puVar84 + 4) = auVar123._8_8_;
                    ppuVar56 = ppuVar56 + 8;
                    puVar84 = puVar84 + 8;
                  } while (uVar89 < uVar72);
                  puVar57 = puVar57 + uVar72 * 0x8000;
                  uVar97 = uVar97 + uVar72 * 8;
                  uVar82 = uVar82 + uVar72 * -8;
                  if (uVar76 - uVar86 == uVar72 * 8) goto LAB_0803c574;
                }
                video->extended_palette_obj_slots[local_144 + uVar97] = puVar57;
                puVar58[uVar97] = uVar23 | puVar58[uVar97];
                if (uVar82 != 1) {
                  video->extended_palette_obj_slots[local_144 + uVar97 + 1] = puVar57 + 0x1000;
                  puVar58[uVar97 + 1] = uVar23 | puVar58[uVar97 + 1];
                  if (uVar82 != 2) {
                    video->texture_slots[local_144 + uVar97] = (u8 *)(puVar57 + 0x2000);
                    puVar58[uVar97 + 2] = uVar23 | puVar58[uVar97 + 2];
                    if (uVar82 != 3) {
                      video->texture_slots[local_144 + uVar97 + 1] = (u8 *)(puVar57 + 0x3000);
                      puVar58[uVar97 + 3] = uVar23 | puVar58[uVar97 + 3];
                      if (uVar82 != 4) {
                        video->texture_slots[local_144 + uVar97 + 2] = (u8 *)(puVar57 + 0x4000);
                        puVar58[uVar97 + 4] = uVar23 | puVar58[uVar97 + 4];
                        if (uVar82 != 5) {
                          video->texture_slots[local_144 + uVar97 + 3] = (u8 *)(puVar57 + 0x5000);
                          puVar58[uVar97 + 5] = uVar23 | puVar58[uVar97 + 5];
                          if (uVar82 != 6) {
                            video->texture_palette_slots[local_144 + uVar97] = puVar57 + 0x6000;
                            puVar58[uVar97 + 6] = uVar23 | puVar58[uVar97 + 6];
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                ppuVar56 = video->extended_palette_bg_slots[1] + local_144 + 3;
                puVar57 = puVar58;
                do {
                  uVar22 = *puVar57;
                  ppuVar56 = ppuVar56 + 1;
                  *ppuVar56 = puVar84;
                  puVar84 = puVar84 + 0x1000;
                  puVar83 = puVar57 + 1;
                  *puVar57 = uVar23 | uVar22;
                  puVar57 = puVar83;
                } while (puVar58 + uVar76 != puVar83);
              }
LAB_0803c574:
              uVar86 = 0;
              video->video_2d_engine[local_144].extended_obj_palette =
                   video->extended_palette_obj_slots[local_144];
              break;
            default:
              goto switchD_08036934_caseD_7;
            }
            goto LAB_08036984;
          case 4:
            switch(dirty_bit_number_3) {
            case 0:
            case 1:
            case 7:
            case 8:
              goto switchD_080369c0_caseD_0;
            case 2:
              uVar97 = 4;
              uVar82 = 0xffe00000;
              uVar63 = 0x6200000;
              uVar80 = 0x10;
              uVar86 = 0x80;
              local_120 = 0;
              goto LAB_08039928;
            case 3:
              goto switchD_080369c0_caseD_3;
            case 4:
              uVar80 = 0;
              uVar86 = uVar80;
              local_16c = uVar76 >> 1;
              break;
            case 5:
            case 6:
              uVar80 = 0;
              uVar86 = (uVar97 & 1) << 1;
              break;
            default:
              goto switchD_08036934_caseD_7;
            }
LAB_0803bdd0:
            uVar76 = local_16c >> 3;
            ppuVar56 = video->extended_palette_bg_slots[uVar80] + uVar86 + uVar76;
            ppuVar62 = (u16 **)(video->extended_palette_bg_allocation_bitmap[uVar80] +
                               uVar86 + uVar76);
            ppuVar92 = video->extended_palette_bg_slots[uVar80] + uVar86;
            ppuVar77 = (u16 **)(video->extended_palette_bg_allocation_bitmap[uVar80] + uVar86);
            bVar101 = ppuVar92 <= ppuVar62;
            bVar102 = ppuVar62 == ppuVar92;
            if (bVar101 && !bVar102) {
              bVar101 = ppuVar77 <= ppuVar56;
              bVar102 = ppuVar56 == ppuVar77;
            }
            uVar23 = (ushort)(1 << (dirty_bit_number_3 & 0xff));
            if (uVar76 < 0xc || bVar101 && !bVar102) {
              ppuVar56 = video->extended_palette_bg_slots[uVar80] + uVar86;
              puVar58 = video->extended_palette_bg_allocation_bitmap[uVar80] + uVar86;
              do {
                uVar22 = *puVar58;
                ppuVar77 = ppuVar56 + 1;
                *ppuVar56 = puVar84;
                puVar84 = puVar84 + 0x1000;
                *puVar58 = uVar23 | uVar22;
                ppuVar56 = ppuVar77;
                puVar58 = puVar58 + 1;
              } while (ppuVar77 != video->extended_palette_bg_slots[uVar80] + uVar86 + uVar76);
            }
            else {
              uVar97 = -((uint)((int)(video->extended_palette_bg_allocation_bitmap[uVar80] + uVar86)
                               * 0x20000000) >> 0x1e) & 7;
              if (uVar76 <= uVar97) {
                uVar97 = uVar76;
              }
              uVar82 = uVar76;
              uVar72 = uVar86;
              puVar58 = puVar84;
              if (uVar97 != 0) {
                uVar82 = uVar76 - 1;
                uVar22 = video->extended_palette_bg_allocation_bitmap[uVar80][uVar86];
                video->extended_palette_bg_slots[uVar80][uVar86] = puVar84;
                uVar72 = uVar86 + 1;
                puVar58 = puVar84 + 0x1000;
                video->extended_palette_bg_allocation_bitmap[uVar80][uVar86] = uVar23 | uVar22;
                if (uVar97 != 1) {
                  uVar22 = video->extended_palette_bg_allocation_bitmap[uVar80][uVar86 + 1];
                  video->extended_palette_bg_slots[uVar80][uVar86 + 1] = puVar58;
                  puVar58 = puVar84 + 0x2000;
                  uVar72 = uVar86 + 2;
                  uVar82 = uVar76 - 2;
                  video->extended_palette_bg_allocation_bitmap[uVar80][uVar86 + 1] = uVar23 | uVar22
                  ;
                  if (uVar97 != 2) {
                    uVar22 = video->extended_palette_bg_allocation_bitmap[uVar80][uVar86 + 2];
                    video->extended_palette_bg_slots[uVar80][uVar86 + 2] = puVar58;
                    puVar58 = puVar84 + 0x3000;
                    uVar72 = uVar86 + 3;
                    uVar82 = uVar76 - 3;
                    video->extended_palette_bg_allocation_bitmap[uVar80][uVar86 + 2] =
                         uVar23 | uVar22;
                    if (uVar97 != 3) {
                      uVar22 = video->extended_palette_bg_allocation_bitmap[uVar80][uVar86 + 3];
                      video->extended_palette_bg_slots[uVar80][uVar86 + 3] = puVar58;
                      puVar58 = puVar84 + 0x4000;
                      uVar72 = uVar86 + 4;
                      uVar82 = uVar76 - 4;
                      video->extended_palette_bg_allocation_bitmap[uVar80][uVar86 + 3] =
                           uVar23 | uVar22;
                      if (uVar97 != 4) {
                        uVar22 = video->extended_palette_bg_allocation_bitmap[uVar80 + 1][uVar86];
                        video->extended_palette_bg_slots[uVar80 + 1][uVar86] = puVar58;
                        puVar58 = puVar84 + 0x5000;
                        uVar72 = uVar86 + 5;
                        uVar82 = uVar76 - 5;
                        video->extended_palette_bg_allocation_bitmap[uVar80 + 1][uVar86] =
                             uVar23 | uVar22;
                        if (uVar97 != 5) {
                          uVar22 = video->extended_palette_bg_allocation_bitmap[uVar80 + 1]
                                   [uVar86 + 1];
                          video->extended_palette_bg_slots[uVar80 + 1][uVar86 + 1] = puVar58;
                          puVar58 = puVar84 + 0x6000;
                          uVar72 = uVar86 + 6;
                          uVar82 = uVar76 - 6;
                          video->extended_palette_bg_allocation_bitmap[uVar80 + 1][uVar86 + 1] =
                               uVar23 | uVar22;
                          if (uVar97 == 7) {
                            uVar22 = video->extended_palette_bg_allocation_bitmap[uVar80 + 1]
                                     [uVar86 + 2];
                            video->extended_palette_bg_slots[uVar80 + 1][uVar86 + 2] = puVar58;
                            video->extended_palette_bg_allocation_bitmap[uVar80 + 1][uVar86 + 2] =
                                 uVar23 | uVar22;
                            uVar82 = uVar76 - 7;
                            uVar72 = uVar86 + 7;
                            puVar58 = puVar84 + 0x7000;
                          }
                        }
                      }
                    }
                  }
                }
              }
              local_120 = uVar76 - 1;
              uVar89 = ((uVar76 - uVar97) - 8 >> 3) + 1;
              if (6 < local_120 - uVar97) {
                auVar19._4_4_ = puVar58;
                auVar19._0_4_ = puVar58;
                auVar19._8_8_ = 0;
                auVar1 = SIMDExpandImmediate(0,4,1);
                auVar2 = SIMDExpandImmediate(0,2,0x80);
                auVar20._4_4_ = CONCAT22(uVar23,uVar23);
                auVar20._0_4_ = CONCAT22(uVar23,uVar23);
                auVar20._8_8_ = 0;
                auVar46._8_8_ = 0x600000004000;
                auVar46._0_8_ = 0x200000000000;
                auVar122 = VectorAdd(auVar19 & auVar19 << 0x40,auVar46,4);
                puVar57 = video->extended_palette_bg_allocation_bitmap[uVar80] + uVar97 + uVar86;
                uVar98 = 0;
                ppuVar56 = video->extended_palette_bg_slots[uVar80] + uVar97 + uVar86;
                puVar84 = puVar57;
                do {
                  auVar124 = *(undefined (*) [16])puVar57;
                  auVar123 = VectorAdd(auVar122,auVar2,4);
                  uVar98 = uVar98 + 1;
                  *(longlong *)ppuVar56 = auVar122._0_8_;
                  *(longlong *)(ppuVar56 + 2) = auVar122._8_8_;
                  puVar57 = puVar57 + 8;
                  auVar122 = VectorAdd(auVar122,auVar1,4);
                  *(longlong *)(ppuVar56 + 4) = auVar123._0_8_;
                  *(longlong *)(ppuVar56 + 6) = auVar123._8_8_;
                  auVar124 = auVar124 | auVar20 & auVar20 << 0x40;
                  *(longlong *)puVar84 = auVar124._0_8_;
                  *(longlong *)(puVar84 + 4) = auVar124._8_8_;
                  ppuVar56 = ppuVar56 + 8;
                  puVar84 = puVar84 + 8;
                } while (uVar98 < uVar89);
                puVar58 = puVar58 + uVar89 * 0x8000;
                uVar72 = uVar72 + uVar89 * 8;
                uVar82 = uVar82 + uVar89 * -8;
                if (uVar76 - uVar97 == uVar89 * 8) goto LAB_0803c1c4;
              }
              uVar22 = video->extended_palette_bg_allocation_bitmap[uVar80][uVar72];
              video->extended_palette_bg_slots[uVar80][uVar72] = puVar58;
              video->extended_palette_bg_allocation_bitmap[uVar80][uVar72] = uVar23 | uVar22;
              if (uVar82 != 1) {
                video->extended_palette_bg_slots[uVar80][uVar72 + 1] = puVar58 + 0x1000;
                video->extended_palette_bg_allocation_bitmap[uVar80][uVar72 + 1] =
                     uVar23 | video->extended_palette_bg_allocation_bitmap[uVar80][uVar72 + 1];
                if (uVar82 != 2) {
                  video->extended_palette_bg_slots[uVar80][uVar72 + 2] = puVar58 + 0x2000;
                  video->extended_palette_bg_allocation_bitmap[uVar80][uVar72 + 2] =
                       uVar23 | video->extended_palette_bg_allocation_bitmap[uVar80][uVar72 + 2];
                  if (uVar82 != 3) {
                    video->extended_palette_bg_slots[uVar80][uVar72 + 3] = puVar58 + 0x3000;
                    video->extended_palette_bg_allocation_bitmap[uVar80][uVar72 + 3] =
                         uVar23 | video->extended_palette_bg_allocation_bitmap[uVar80][uVar72 + 3];
                    if (uVar82 != 4) {
                      video->extended_palette_bg_slots[uVar80 + 1][uVar72] = puVar58 + 0x4000;
                      video->extended_palette_bg_allocation_bitmap[uVar80 + 1][uVar72] =
                           uVar23 | video->extended_palette_bg_allocation_bitmap[uVar80 + 1][uVar72]
                      ;
                      if (uVar82 != 5) {
                        video->extended_palette_bg_slots[uVar80 + 1][uVar72 + 1] = puVar58 + 0x5000;
                        video->extended_palette_bg_allocation_bitmap[uVar80 + 1][uVar72 + 1] =
                             uVar23 | video->extended_palette_bg_allocation_bitmap[uVar80 + 1]
                                      [uVar72 + 1];
                        if (uVar82 != 6) {
                          video->extended_palette_bg_slots[uVar80 + 1][uVar72 + 2] =
                               puVar58 + 0x6000;
                          video->extended_palette_bg_allocation_bitmap[uVar80 + 1][uVar72 + 2] =
                               uVar23 | video->extended_palette_bg_allocation_bitmap[uVar80 + 1]
                                        [uVar72 + 2];
                        }
                      }
                    }
                  }
                }
              }
            }
LAB_0803c1c4:
            ppuVar56 = video->video_2d_engine[uVar80].extended_bg_palettes;
            uVar23 = video->video_2d_engine[uVar80].bg_layers[1].bg_control;
            video->video_2d_engine[uVar80].bg_layers[0].extended_palette =
                 ppuVar56[((int)((uint)video->video_2d_engine[uVar80].bg_layers[0].bg_control <<
                                0x12) >> 0x1f) * -2];
            video->video_2d_engine[uVar80].bg_layers[1].extended_palette =
                 ppuVar56[((int)((uint)uVar23 << 0x12) >> 0x1f) * -2 + 1];
            video->video_2d_engine[uVar80].bg_layers[2].extended_palette = ppuVar56[2];
            video->video_2d_engine[uVar80].bg_layers[3].extended_palette = ppuVar56[3];
            goto LAB_08036984;
          case 5:
            if (dirty_bit_number_3 < 9) {
              uVar80 = 1;
              uVar86 = 1 << (dirty_bit_number_3 & 0xff);
              if ((uVar86 & 0x19f) != 0) goto switchD_080369c0_caseD_0;
              if ((uVar86 & 0x60) != 0) {
                uVar80 = 2;
                local_144 = 0;
                goto LAB_0803c254;
              }
              uVar63 = 0x6000000;
              local_120 = 0xffffff80;
              uVar86 = 0;
              uVar82 = 0;
              uVar97 = 0;
            }
            else {
              uVar86 = 0;
              uVar82 = 0;
              uVar97 = 0;
              uVar63 = 0x6000000;
              local_120 = 0xffffff80;
              uVar80 = 1;
            }
LAB_08039928:
            local_128 = (u8 *)((uVar76 >> 4) << 0xe);
            unmap_memory_page_region_direct(pmVar53->memory_interface_arm9,uVar63,(u32)local_128);
            uVar72 = 0;
            goto LAB_0803996c;
          case 6:
            goto switchD_08036934_caseD_6;
          default:
switchD_08036934_caseD_7:
            uVar86 = 0;
            uVar63 = 0x6000000;
            local_120 = 0xffffff80;
            uVar82 = uVar86;
          }
          uVar97 = uVar86 >> 5;
          local_128 = (u8 *)((uVar76 >> 4) << 0xe);
          unmap_memory_page_region_direct(pmVar53->memory_interface_arm9,uVar63,(u32)local_128);
          uVar80 = 1 << uVar97;
          uVar72 = uVar86 & 0x1f;
LAB_0803996c:
          local_160 = (u16 *)(uVar76 >> 4);
          video->vram_map_dirty_bitmap_fine[uVar97] =
               video->vram_map_dirty_bitmap_fine[uVar97] |
               ~(-1 << ((uint)local_160 & 0xff)) << uVar72;
          video->vram_map_dirty_bitmap_coarse = video->vram_map_dirty_bitmap_coarse | uVar80;
LAB_0803999c:
          local_160 = (u16 *)(uVar76 >> 4);
          uVar76 = (uint)local_160;
          puVar90 = (u8 *)((int)puVar84 + uVar82);
          puVar71 = video->vram_map_dirty_bit_numbers + uVar86;
          iVar79 = uVar86 + (int)local_160;
          ppuVar54 = ppuVar78 + uVar86;
          puVar58 = __s + uVar86;
          bVar102 = local_160 < 0x14;
          uVar23 = (ushort)(1 << (dirty_bit_number_3 & 0xff));
          if ((bVar102 ||
              (puVar58 < ppuVar78 + iVar79 && ppuVar54 < __s + iVar79 ||
              ppuVar54 < video->vram_map_dirty_bit_numbers + iVar79 && puVar71 < ppuVar78 + iVar79))
              || puVar58 < video->vram_map_dirty_bit_numbers + iVar79 && puVar71 < __s + iVar79) {
            uVar97 = local_180;
            do {
              uVar22 = *puVar58;
              *ppuVar54 = puVar90;
              *puVar58 = uVar23 | uVar22;
              *puVar71 = (u8)uVar97;
              uVar97 = uVar97 + 1;
              puVar71 = puVar71 + 1;
              ppuVar54 = ppuVar54 + 1;
              puVar58 = puVar58 + 1;
            } while (uVar97 != (int)local_160 + local_180);
          }
          else {
            local_140 = local_160;
            uVar97 = -((uint)((int)puVar58 * 0x20000000) >> 0x1e) & 7;
            if (local_160 <= uVar97) {
              uVar97 = (uint)local_160;
            }
            if (uVar97 == 0) {
              local_144 = local_180;
              uVar80 = uVar86;
            }
            else {
              uVar22 = __s[uVar86];
              local_140 = (u16 *)((int)local_160 - 1);
              uVar80 = uVar86 + 1;
              ppuVar78[uVar86] = puVar90;
              local_144 = local_180 + 1;
              __s[uVar86] = uVar23 | uVar22;
              *puVar71 = uVar47;
              if (uVar97 != 1) {
                ppuVar78[uVar80] = puVar90;
                local_144 = local_180 + 2;
                local_140 = (u16 *)((int)local_160 - 2);
                __s[uVar80] = uVar23 | __s[uVar80];
                video->vram_map_dirty_bit_numbers[uVar86 + 1] = uVar47 + '\x01';
                uVar80 = uVar86 + 2;
                if (uVar97 != 2) {
                  ppuVar78[uVar80] = puVar90;
                  local_144 = local_180 + 3;
                  local_140 = (u16 *)((int)local_160 - 3);
                  __s[uVar80] = uVar23 | __s[uVar80];
                  video->vram_map_dirty_bit_numbers[uVar86 + 2] = uVar47 + '\x02';
                  uVar80 = uVar86 + 3;
                  if (uVar97 != 3) {
                    ppuVar78[uVar80] = puVar90;
                    local_144 = local_180 + 4;
                    local_140 = (u16 *)((int)local_160 - 4);
                    __s[uVar80] = uVar23 | __s[uVar80];
                    video->vram_map_dirty_bit_numbers[uVar86 + 3] = uVar47 + '\x03';
                    uVar80 = uVar86 + 4;
                    if (uVar97 != 4) {
                      ppuVar78[uVar80] = puVar90;
                      local_144 = local_180 + 5;
                      local_140 = (u16 *)((int)local_160 - 5);
                      __s[uVar80] = uVar23 | __s[uVar80];
                      video->vram_map_dirty_bit_numbers[uVar86 + 4] = uVar47 + '\x04';
                      uVar80 = uVar86 + 5;
                      if (uVar97 != 5) {
                        local_144 = local_180 + 6;
                        ppuVar78[uVar80] = puVar90;
                        local_140 = (u16 *)((int)local_160 - 6);
                        __s[uVar80] = uVar23 | __s[uVar80];
                        video->vram_map_dirty_bit_numbers[uVar86 + 5] = uVar47 + '\x05';
                        uVar80 = uVar86 + 6;
                        if (uVar97 == 7) {
                          ppuVar78[uVar80] = puVar90;
                          local_144 = local_180 + 7;
                          local_140 = (u16 *)((int)local_160 - 7);
                          __s[uVar80] = uVar23 | __s[uVar80];
                          video->vram_map_dirty_bit_numbers[uVar86 + 6] = uVar47 + '\x06';
                          uVar80 = uVar86 + 7;
                        }
                      }
                    }
                  }
                }
              }
              if (local_160 == (u16 *)uVar97) goto LAB_0803a100;
            }
            uVar82 = local_144;
            local_e8 = (u8 *)((int)local_160 - 1);
            iVar91 = (int)local_160 - uVar97;
            uVar72 = (iVar91 - 0x10U >> 4) + 1;
            iVar55 = uVar72 * 0x10;
            if (0xe < (int)local_e8 - uVar97) {
              auVar1 = SIMDExpandImmediate(0,0,0x10);
              auVar2 = SIMDExpandImmediate(0,0,4);
              auVar122 = SIMDExpandImmediate(0,0,8);
              auVar124 = SIMDExpandImmediate(0,0,0xc);
              auVar11._4_4_ = local_144;
              auVar11._0_4_ = local_144;
              auVar11._8_8_ = 0;
              auVar12._4_4_ = CONCAT22(uVar23,uVar23);
              auVar12._0_4_ = CONCAT22(uVar23,uVar23);
              auVar12._8_8_ = 0;
              auVar12 = auVar12 & auVar12 << 0x40;
              auVar34._8_8_ = 0x300000002;
              auVar34._0_8_ = 0x100000000;
              auVar123 = VectorAdd(auVar11 & auVar11 << 0x40,auVar34,4);
              local_e8 = video->vram_map_dirty_bit_numbers + uVar86 + uVar97;
              local_144 = 0;
              ppuVar54 = ppuVar78 + uVar97 + uVar86;
              puVar58 = __s + uVar97 + uVar86 + 0x10;
              local_160 = __s + uVar97 + uVar86 + 0x10;
              do {
                auVar116 = VectorAdd(auVar123,auVar2,4);
                auVar112 = VectorAdd(auVar123,auVar124,4);
                auVar118 = *(undefined (*) [16])(puVar58 + -8);
                auVar105 = VectorAdd(auVar123,auVar122,4);
                auVar126 = *(undefined (*) [16])(puVar58 + -0x10);
                local_144 = local_144 + 1;
                *(undefined8 *)ppuVar54 = 0;
                *(undefined8 *)(ppuVar54 + 2) = 0;
                *(undefined8 *)(ppuVar54 + 4) = 0;
                *(undefined8 *)(ppuVar54 + 6) = 0;
                uVar113 = VectorCopyNarrow(auVar123,4);
                uVar114 = VectorCopyNarrow(auVar116,4);
                auVar117._0_8_ = VectorCopyNarrow(auVar105,4);
                auVar117._8_8_ = VectorCopyNarrow(auVar112,4);
                auVar123 = VectorAdd(auVar123,auVar1,4);
                auVar24._8_8_ = uVar114;
                auVar24._0_8_ = uVar113;
                uVar113 = VectorCopyNarrow(auVar24,2);
                uVar114 = VectorCopyNarrow(auVar117,2);
                *(undefined8 *)(ppuVar54 + 8) = 0;
                *(undefined8 *)(ppuVar54 + 10) = 0;
                auVar126 = auVar126 | auVar12;
                *(undefined8 *)(ppuVar54 + 0xc) = 0;
                *(undefined8 *)(ppuVar54 + 0xe) = 0;
                *(longlong *)(local_160 + -0x10) = auVar126._0_8_;
                *(longlong *)(local_160 + -0xc) = auVar126._8_8_;
                auVar118 = auVar12 | auVar118;
                *(longlong *)(local_160 + -8) = auVar118._0_8_;
                *(longlong *)(local_160 + -4) = auVar118._8_8_;
                *(undefined8 *)local_e8 = uVar113;
                *(undefined8 *)(local_e8 + 8) = uVar114;
                local_e8 = local_e8 + 0x10;
                ppuVar54 = ppuVar54 + 0x10;
                puVar58 = puVar58 + 0x10;
                local_160 = local_160 + 0x10;
              } while (local_144 < uVar72);
              local_140 = (u16 *)((int)local_140 + uVar72 * -0x10);
              uVar80 = uVar80 + iVar55;
              local_144 = uVar82 + iVar55;
              if (iVar55 - iVar91 == 0) goto LAB_0803a100;
            }
            uVar22 = __s[uVar80];
            ppuVar78[uVar80] = puVar90;
            uVar48 = (u8)local_144;
            iVar55 = uVar80 + 1;
            __s[uVar80] = uVar23 | uVar22;
            video->vram_map_dirty_bit_numbers[uVar80] = uVar48;
            if (local_140 != (u16 *)0x1) {
              uVar22 = __s[iVar55];
              ppuVar78[iVar55] = puVar90;
              iVar91 = uVar80 + 2;
              __s[iVar55] = uVar23 | uVar22;
              video->vram_map_dirty_bit_numbers[uVar80 + 1] = uVar48 + '\x01';
              if (local_140 != (u16 *)0x2) {
                uVar22 = __s[iVar91];
                ppuVar78[iVar91] = puVar90;
                __s[iVar91] = uVar23 | uVar22;
                iVar55 = uVar80 + 3;
                video->vram_map_dirty_bit_numbers[uVar80 + 2] = uVar48 + '\x02';
                if (local_140 != (u16 *)0x3) {
                  uVar22 = __s[iVar55];
                  ppuVar78[iVar55] = puVar90;
                  iVar91 = uVar80 + 4;
                  __s[iVar55] = uVar23 | uVar22;
                  video->vram_map_dirty_bit_numbers[uVar80 + 3] = uVar48 + '\x03';
                  if (local_140 != (u16 *)0x4) {
                    uVar22 = __s[iVar91];
                    ppuVar78[iVar91] = puVar90;
                    __s[iVar91] = uVar23 | uVar22;
                    iVar55 = uVar80 + 5;
                    video->vram_map_dirty_bit_numbers[uVar80 + 4] = uVar48 + '\x04';
                    if (local_140 != (u16 *)0x5) {
                      uVar22 = __s[iVar55];
                      ppuVar78[iVar55] = puVar90;
                      iVar91 = uVar80 + 6;
                      __s[iVar55] = uVar23 | uVar22;
                      video->vram_map_dirty_bit_numbers[uVar80 + 5] = uVar48 + '\x05';
                      if (local_140 != (u16 *)0x6) {
                        uVar22 = __s[iVar91];
                        ppuVar78[iVar91] = puVar90;
                        __s[iVar91] = uVar23 | uVar22;
                        iVar55 = uVar80 + 7;
                        video->vram_map_dirty_bit_numbers[uVar80 + 6] = uVar48 + '\x06';
                        if (local_140 != (u16 *)0x7) {
                          uVar22 = __s[iVar55];
                          ppuVar78[iVar55] = puVar90;
                          iVar91 = uVar80 + 8;
                          __s[iVar55] = uVar23 | uVar22;
                          video->vram_map_dirty_bit_numbers[uVar80 + 7] = uVar48 + '\a';
                          if (local_140 != (u16 *)0x8) {
                            uVar22 = __s[iVar91];
                            ppuVar78[iVar91] = puVar90;
                            __s[iVar91] = uVar23 | uVar22;
                            iVar55 = uVar80 + 9;
                            video->vram_map_dirty_bit_numbers[uVar80 + 8] = uVar48 + '\b';
                            if (local_140 != (u16 *)0x9) {
                              uVar22 = __s[iVar55];
                              ppuVar78[iVar55] = puVar90;
                              iVar91 = uVar80 + 10;
                              __s[iVar55] = uVar23 | uVar22;
                              video->vram_map_dirty_bit_numbers[uVar80 + 9] = uVar48 + '\t';
                              if (local_140 != (u16 *)0xa) {
                                uVar22 = __s[iVar91];
                                ppuVar78[iVar91] = puVar90;
                                __s[iVar91] = uVar23 | uVar22;
                                iVar55 = uVar80 + 0xb;
                                video->vram_map_dirty_bit_numbers[uVar80 + 10] = uVar48 + '\n';
                                if (local_140 != (u16 *)0xb) {
                                  uVar22 = __s[iVar55];
                                  ppuVar78[iVar55] = puVar90;
                                  iVar91 = uVar80 + 0xc;
                                  __s[iVar55] = uVar23 | uVar22;
                                  video->vram_map_dirty_bit_numbers[uVar80 + 0xb] = uVar48 + '\v';
                                  if (local_140 != (u16 *)0xc) {
                                    ppuVar78[iVar91] = puVar90;
                                    iVar55 = uVar80 + 0xd;
                                    __s[iVar91] = uVar23 | __s[iVar91];
                                    video->vram_map_dirty_bit_numbers[uVar80 + 0xc] = uVar48 + '\f';
                                    if (local_140 != (u16 *)0xd) {
                                      iVar91 = uVar80 + 0xe;
                                      ppuVar78[iVar55] = puVar90;
                                      __s[iVar55] = uVar23 | __s[iVar55];
                                      video->vram_map_dirty_bit_numbers[uVar80 + 0xd] =
                                           uVar48 + '\r';
                                      if (local_140 != (u16 *)0xe) {
                                        ppuVar78[iVar91] = puVar90;
                                        __s[iVar91] = uVar23 | __s[iVar91];
                                        video->vram_map_dirty_bit_numbers[uVar80 + 0xe] =
                                             uVar48 + '\x0e';
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
LAB_0803a100:
          if (local_120 < 0x80) {
            uVar80 = uVar86 + 8;
            uVar63 = (uVar86 + 0x1808) * 0x4000;
            unmap_memory_page_region_direct
                      (video->memory->memory_interface_arm9,uVar63,(u32)local_128);
            uVar97 = uVar80 >> 5;
            puVar90 = (u8 *)((int)puVar84 - (uVar63 + 0xfa000000));
            video->vram_map_dirty_bitmap_fine[uVar97] =
                 video->vram_map_dirty_bitmap_fine[uVar97] |
                 (1 << (uVar76 & 0xff)) + -1 << (uVar80 & 0x1f);
            puVar96 = video->vram_map_dirty_bit_numbers + uVar86 + 8;
            ppuVar61 = ppuVar78 + iVar79 + 8;
            puVar71 = video->vram_map_dirty_bit_numbers + iVar79 + 8;
            puVar84 = __s + uVar86 + 8;
            ppuVar54 = ppuVar78 + uVar86 + 8;
            bVar104 = puVar96 <= ppuVar61;
            bVar101 = ppuVar61 == (u8 **)puVar96;
            if (bVar104 && !bVar101) {
              bVar104 = ppuVar54 <= puVar71;
              bVar101 = (u8 **)puVar71 == ppuVar54;
            }
            video->vram_map_dirty_bitmap_coarse =
                 video->vram_map_dirty_bitmap_coarse | 1 << (uVar97 & 0xff);
            if ((bVar102 ||
                (bVar104 && !bVar101 || ppuVar54 < __s + iVar79 + 8 && puVar84 < ppuVar61)) ||
                puVar96 < __s + iVar79 + 8 && puVar84 < puVar71) {
              puVar71 = video->vram_map_dirty_bit_numbers + uVar86 + 7;
              ppuVar54 = ppuVar78 + uVar86 + 7;
              uVar97 = local_180;
              do {
                uVar22 = *puVar84;
                ppuVar54 = ppuVar54 + 1;
                *ppuVar54 = puVar90;
                *puVar84 = uVar23 | uVar22;
                puVar71 = puVar71 + 1;
                *puVar71 = (u8)uVar97;
                uVar97 = uVar97 + 1;
                puVar84 = puVar84 + 1;
              } while (uVar97 != uVar76 + local_180);
            }
            else {
              local_140 = (u16 *)uVar76;
              uVar97 = -((uint)((int)puVar84 * 0x20000000) >> 0x1e) & 7;
              if (uVar76 <= uVar97) {
                uVar97 = uVar76;
              }
              if (uVar97 == 0) {
                local_144 = local_180;
                uVar82 = uVar80;
              }
              else {
                uVar22 = __s[uVar80];
                ppuVar78[uVar80] = puVar90;
                local_140 = (u16 *)(uVar76 - 1);
                local_144 = local_180 + 1;
                __s[uVar80] = uVar23 | uVar22;
                uVar82 = uVar86 + 9;
                *puVar96 = uVar47;
                if (uVar97 != 1) {
                  ppuVar78[uVar82] = puVar90;
                  local_144 = local_180 + 2;
                  local_140 = (u16 *)(uVar76 - 2);
                  __s[uVar82] = uVar23 | __s[uVar82];
                  video->vram_map_dirty_bit_numbers[uVar86 + 9] = uVar47 + '\x01';
                  uVar82 = uVar86 + 10;
                  if (uVar97 != 2) {
                    local_144 = local_180 + 3;
                    uVar22 = __s[uVar82];
                    ppuVar78[uVar82] = puVar90;
                    local_140 = (u16 *)(uVar76 - 3);
                    __s[uVar82] = uVar23 | uVar22;
                    video->vram_map_dirty_bit_numbers[uVar86 + 10] = uVar47 + '\x02';
                    uVar82 = uVar86 + 0xb;
                    if (uVar97 != 3) {
                      local_144 = local_180 + 4;
                      uVar22 = __s[uVar82];
                      ppuVar78[uVar82] = puVar90;
                      local_140 = (u16 *)(uVar76 - 4);
                      __s[uVar82] = uVar23 | uVar22;
                      video->vram_map_dirty_bit_numbers[uVar86 + 0xb] = uVar47 + '\x03';
                      uVar82 = uVar86 + 0xc;
                      if (uVar97 != 4) {
                        local_144 = local_180 + 5;
                        uVar22 = __s[uVar82];
                        ppuVar78[uVar82] = puVar90;
                        local_140 = (u16 *)(uVar76 - 5);
                        __s[uVar82] = uVar23 | uVar22;
                        video->vram_map_dirty_bit_numbers[uVar86 + 0xc] = uVar47 + '\x04';
                        uVar82 = uVar86 + 0xd;
                        if (uVar97 != 5) {
                          local_144 = local_180 + 6;
                          uVar22 = __s[uVar82];
                          ppuVar78[uVar82] = puVar90;
                          local_140 = (u16 *)(uVar76 - 6);
                          __s[uVar82] = uVar23 | uVar22;
                          video->vram_map_dirty_bit_numbers[uVar86 + 0xd] = uVar47 + '\x05';
                          uVar82 = uVar86 + 0xe;
                          if (uVar97 == 7) {
                            ppuVar78[uVar82] = puVar90;
                            local_144 = local_180 + 7;
                            local_140 = (u16 *)(uVar76 - 7);
                            __s[uVar82] = uVar23 | __s[uVar82];
                            video->vram_map_dirty_bit_numbers[uVar86 + 0xe] = uVar47 + '\x06';
                            uVar82 = uVar86 + 0xf;
                          }
                        }
                      }
                    }
                  }
                }
                if (uVar76 == uVar97) goto LAB_0803a10c;
              }
              local_e8 = (u8 *)(uVar76 - 1);
              uVar72 = ((uVar76 - uVar97) - 0x10 >> 4) + 1;
              iVar79 = uVar72 * 0x10;
              if (0xe < (int)local_e8 - uVar97) {
                auVar1 = SIMDExpandImmediate(0,0,0x10);
                auVar2 = SIMDExpandImmediate(0,0,4);
                auVar122 = SIMDExpandImmediate(0,0,8);
                auVar17._4_4_ = local_144;
                auVar17._0_4_ = local_144;
                auVar17._8_8_ = 0;
                auVar18._4_4_ = CONCAT22(uVar23,uVar23);
                auVar18._0_4_ = CONCAT22(uVar23,uVar23);
                auVar18._8_8_ = 0;
                auVar18 = auVar18 & auVar18 << 0x40;
                iVar55 = uVar80 + uVar97;
                auVar35._8_8_ = 0x300000002;
                auVar35._0_8_ = 0x100000000;
                auVar124 = VectorAdd(auVar17 & auVar17 << 0x40,auVar35,4);
                puVar58 = __s + iVar55 + 0x10;
                uVar80 = 0;
                ppuVar54 = ppuVar78 + iVar55;
                puVar84 = puVar58;
                local_160 = (u16 *)(video->vram_map_dirty_bit_numbers + iVar55);
                do {
                  auVar123 = VectorAdd(auVar124,auVar2,4);
                  auVar126 = *(undefined (*) [16])(puVar58 + -0x10);
                  uVar80 = uVar80 + 1;
                  auVar105 = VectorAdd(auVar124,auVar122,4);
                  auVar118 = *(undefined (*) [16])(puVar58 + -8);
                  *(undefined8 *)ppuVar54 = 0;
                  *(undefined8 *)(ppuVar54 + 2) = 0;
                  puVar58 = puVar58 + 0x10;
                  uVar113 = VectorCopyNarrow(auVar124,4);
                  uVar114 = VectorCopyNarrow(auVar123,4);
                  auVar123 = SIMDExpandImmediate(0,0,0xc);
                  *(undefined8 *)(ppuVar54 + 4) = 0;
                  *(undefined8 *)(ppuVar54 + 6) = 0;
                  auVar123 = VectorAdd(auVar124,auVar123,4);
                  auVar126 = auVar126 | auVar18;
                  auVar124 = VectorAdd(auVar124,auVar1,4);
                  *(undefined8 *)(ppuVar54 + 8) = 0;
                  *(undefined8 *)(ppuVar54 + 10) = 0;
                  *(undefined8 *)(ppuVar54 + 0xc) = 0;
                  *(undefined8 *)(ppuVar54 + 0xe) = 0;
                  auVar118 = auVar18 | auVar118;
                  auVar121._0_8_ = VectorCopyNarrow(auVar105,4);
                  auVar121._8_8_ = VectorCopyNarrow(auVar123,4);
                  auVar25._8_8_ = uVar114;
                  auVar25._0_8_ = uVar113;
                  uVar113 = VectorCopyNarrow(auVar25,2);
                  uVar114 = VectorCopyNarrow(auVar121,2);
                  *(longlong *)(puVar84 + -0x10) = auVar126._0_8_;
                  *(longlong *)(puVar84 + -0xc) = auVar126._8_8_;
                  *(longlong *)(puVar84 + -8) = auVar118._0_8_;
                  *(longlong *)(puVar84 + -4) = auVar118._8_8_;
                  *(undefined8 *)local_160 = uVar113;
                  *(undefined8 *)((int)local_160 + 8) = uVar114;
                  ppuVar54 = ppuVar54 + 0x10;
                  puVar84 = puVar84 + 0x10;
                  local_160 = (u16 *)((int)local_160 + 0x10);
                } while (uVar80 < uVar72);
                uVar82 = uVar82 + iVar79;
                local_140 = (u16 *)((int)local_140 + uVar72 * -0x10);
                local_144 = local_144 + iVar79;
                if (iVar79 - (uVar76 - uVar97) == 0) goto LAB_0803a10c;
              }
              uVar22 = __s[uVar82];
              ppuVar78[uVar82] = puVar90;
              __s[uVar82] = uVar23 | uVar22;
              iVar79 = uVar82 + 1;
              video->vram_map_dirty_bit_numbers[uVar82] = (u8)local_144;
              if (local_140 != (u16 *)0x1) {
                uVar22 = __s[iVar79];
                ppuVar78[iVar79] = puVar90;
                iVar55 = uVar82 + 2;
                __s[iVar79] = uVar23 | uVar22;
                video->vram_map_dirty_bit_numbers[uVar82 + 1] = (u8)local_144 + '\x01';
                if (local_140 != (u16 *)0x2) {
                  ppuVar78[iVar55] = puVar90;
                  iVar79 = uVar82 + 3;
                  __s[iVar55] = uVar23 | __s[iVar55];
                  video->vram_map_dirty_bit_numbers[uVar82 + 2] = (u8)local_144 + '\x02';
                  if (local_140 != (u16 *)0x3) {
                    ppuVar78[iVar79] = puVar90;
                    iVar55 = uVar82 + 4;
                    __s[iVar79] = uVar23 | __s[iVar79];
                    video->vram_map_dirty_bit_numbers[uVar82 + 3] = (u8)local_144 + '\x03';
                    if (local_140 != (u16 *)0x4) {
                      ppuVar78[iVar55] = puVar90;
                      iVar79 = uVar82 + 5;
                      __s[iVar55] = uVar23 | __s[iVar55];
                      video->vram_map_dirty_bit_numbers[uVar82 + 4] = (u8)local_144 + '\x04';
                      if (local_140 != (u16 *)0x5) {
                        ppuVar78[iVar79] = puVar90;
                        iVar55 = uVar82 + 6;
                        __s[iVar79] = uVar23 | __s[iVar79];
                        video->vram_map_dirty_bit_numbers[uVar82 + 5] = (u8)local_144 + '\x05';
                        if (local_140 != (u16 *)0x6) {
                          ppuVar78[iVar55] = puVar90;
                          iVar79 = uVar82 + 7;
                          __s[iVar55] = uVar23 | __s[iVar55];
                          video->vram_map_dirty_bit_numbers[uVar82 + 6] = (u8)local_144 + '\x06';
                          if (local_140 != (u16 *)0x7) {
                            ppuVar78[iVar79] = puVar90;
                            iVar55 = uVar82 + 8;
                            __s[iVar79] = uVar23 | __s[iVar79];
                            video->vram_map_dirty_bit_numbers[uVar82 + 7] = (u8)local_144 + '\a';
                            if (local_140 != (u16 *)0x8) {
                              ppuVar78[iVar55] = puVar90;
                              iVar79 = uVar82 + 9;
                              __s[iVar55] = uVar23 | __s[iVar55];
                              video->vram_map_dirty_bit_numbers[uVar82 + 8] = (u8)local_144 + '\b';
                              if (local_140 != (u16 *)0x9) {
                                ppuVar78[iVar79] = puVar90;
                                iVar55 = uVar82 + 10;
                                __s[iVar79] = uVar23 | __s[iVar79];
                                video->vram_map_dirty_bit_numbers[uVar82 + 9] = (u8)local_144 + '\t'
                                ;
                                if (local_140 != (u16 *)0xa) {
                                  ppuVar78[iVar55] = puVar90;
                                  iVar79 = uVar82 + 0xb;
                                  __s[iVar55] = uVar23 | __s[iVar55];
                                  video->vram_map_dirty_bit_numbers[uVar82 + 10] =
                                       (u8)local_144 + '\n';
                                  if (local_140 != (u16 *)0xb) {
                                    ppuVar78[iVar79] = puVar90;
                                    iVar55 = uVar82 + 0xc;
                                    __s[iVar79] = uVar23 | __s[iVar79];
                                    video->vram_map_dirty_bit_numbers[uVar82 + 0xb] =
                                         (u8)local_144 + '\v';
                                    if (local_140 != (u16 *)0xc) {
                                      ppuVar78[iVar55] = puVar90;
                                      iVar79 = uVar82 + 0xd;
                                      __s[iVar55] = uVar23 | __s[iVar55];
                                      video->vram_map_dirty_bit_numbers[uVar82 + 0xc] =
                                           (u8)local_144 + '\f';
                                      if (local_140 != (u16 *)0xd) {
                                        iVar55 = uVar82 + 0xe;
                                        ppuVar78[iVar79] = puVar90;
                                        __s[iVar79] = uVar23 | __s[iVar79];
                                        video->vram_map_dirty_bit_numbers[uVar82 + 0xd] =
                                             (u8)local_144 + '\r';
                                        if (local_140 != (u16 *)0xe) {
                                          uVar22 = __s[iVar55];
                                          ppuVar78[iVar55] = puVar90;
                                          __s[iVar55] = uVar23 | uVar22;
                                          video->vram_map_dirty_bit_numbers[uVar82 + 0xe] =
                                               (u8)local_144 + '\x0e';
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
LAB_0803a10c:
          uVar80 = 6;
LAB_08036984:
          uVar49 = CONCAT35(0,CONCAT14(bVar21,uVar80));
          auVar1._8_4_ = uVar86;
          auVar1._0_8_ = uVar49;
          auVar1._12_4_ = local_16c;
          local_184->vram_bank_maps[0].address_space_type = (int)uVar49;
          local_184->vram_bank_maps[0].map_setting = (int)(uVar49 >> 0x20);
          local_184->vram_bank_maps[0].region_offset = (int)auVar1._8_8_;
          local_184->vram_bank_maps[0].region_size = (int)((ulonglong)auVar1._8_8_ >> 0x20);
LAB_08036850:
          local_18c = local_18c >> 1;
          dirty_bit_number_3 = dirty_bit_number_3 + 1;
          local_184 = (video_struct *)&local_184->vram_bank_maps[0].region_offset;
          local_178 = local_178 + 1;
          vram_map = vram_map + 1;
          local_180 = local_180 + 8;
        } while (local_18c != 0);
      }
    }
    local_170 = (video_struct *)&local_170->vram_bank_maps[0].region_offset;
    vram_map_dirty_bit_numbers_8 = vram_map_dirty_bit_numbers_8 + 1;
    local_164 = local_164 + 1;
    if (vram_map_dirty_bit_numbers_8 == (u8 *)0x9) {
      auVar125._8_8_ = 0x300000002;
      auVar125._0_8_ = 0x100000000;
      auVar1 = SIMDExpandImmediate(0,0,4);
      puVar71 = pmVar95->null_buffer_video_load;
      auVar2._4_4_ = puVar71;
      auVar2._0_4_ = puVar71;
      auVar2._8_8_ = 0;
      do {
        auVar122 = VectorShiftLeft(auVar125,0xe,0x20,0);
        ppuVar54 = ppuVar78 + 4;
        auVar125 = VectorAdd(auVar125,auVar1,4);
        auVar122 = VectorSub(auVar2 & auVar2 << 0x40,auVar122,4);
        *(longlong *)ppuVar78 = auVar122._0_8_;
        *(longlong *)(ppuVar78 + 2) = auVar122._8_8_;
        ppuVar78 = ppuVar54;
      } while (video->vram_bank_ptrs != ppuVar54);
      memset(__s,0,0x800);
      *(undefined8 *)video->vram_map_dirty_bitmap_fine = 0;
      *(undefined8 *)(video->vram_map_dirty_bitmap_fine + 2) = 0;
      *(undefined8 *)(video->vram_map_dirty_bitmap_fine + 4) = 0;
      *(undefined8 *)(video->vram_map_dirty_bitmap_fine + 6) = 0;
      pcVar85 = &video->capture_settings;
      *(undefined8 *)(video->vram_map_dirty_bitmap_fine + 8) = 0;
      *(undefined8 *)(video->vram_map_dirty_bitmap_fine + 10) = 0;
      puVar71 = pmVar95->null_buffer_load;
      puVar87 = (undefined *)((int)(video->capture_settings).hires_bank_ptrs + 0xf);
      *(undefined8 *)(video->vram_map_dirty_bitmap_fine + 0xc) = 0;
      *(undefined8 *)(video->vram_map_dirty_bitmap_fine + 0xe) = 0;
      video->extended_palette_bg_slots[0][0] = (u16 *)0x0;
      video->extended_palette_obj_allocation_bitmap[0] = 0;
      video->extended_palette_bg_allocation_bitmap[0][0] = 0;
      video->extended_palette_bg_allocation_bitmap[0][1] = 0;
      video->extended_palette_bg_slots[0][1] = (u16 *)0x0;
      video->extended_palette_bg_slots[0][2] = (u16 *)0x0;
      video->extended_palette_obj_slots[0] = (u16 *)0x0;
      video->vram_map_dirty_bitmap_coarse = 0;
      video->extended_palette_bg_allocation_bitmap[0][2] = 0;
      video->extended_palette_bg_allocation_bitmap[0][3] = 0;
      video->extended_palette_obj_allocation_bitmap[1] = 0;
      video->extended_palette_bg_allocation_bitmap[1][0] = 0;
      video->extended_palette_bg_allocation_bitmap[1][1] = 0;
      video->extended_palette_bg_allocation_bitmap[1][2] = 0;
      video->extended_palette_bg_allocation_bitmap[1][3] = 0;
      video->extended_palette_bg_slots[0][3] = (u16 *)0x0;
      video->extended_palette_bg_slots[1][0] = (u16 *)0x0;
      video->extended_palette_bg_slots[1][1] = (u16 *)0x0;
      video->extended_palette_bg_slots[1][2] = (u16 *)0x0;
      video->extended_palette_bg_slots[1][3] = (u16 *)0x0;
      video->extended_palette_obj_slots[1] = (u16 *)0x0;
      *(undefined8 *)ppuVar67 = 0;
      *(undefined8 *)(video->texture_slots + 2) = 0;
      *(undefined8 *)puVar68 = 0;
      video->arm7_vram_allocation_bitmap[0] = 0;
      video->arm7_vram_allocation_bitmap[1] = 0;
      video->arm7_vram_slots[0] = puVar71;
      video->arm7_vram_slots[1] = puVar71;
      *(undefined8 *)ppuVar69 = 0;
      *(undefined8 *)(video->texture_palette_slots + 2) = 0;
      *(undefined8 *)(video->texture_palette_slots + 4) = 0;
      *(undefined8 *)puVar74 = 0;
      *(undefined8 *)(video->texture_palette_allocation_bitmap + 2) = 0;
      video->scanlines_rendered = 0;
      do {
        if (pcVar85->hires_bank_ptrs[0] != (u16 *)0x0) {
          free(pcVar85->hires_bank_ptrs[0]);
          pcVar85->hires_bank_ptrs[0] = (u16 *)0x0;
        }
        pcVar85 = (capture_settings_struct *)(pcVar85->hires_bank_ptrs + 1);
        puVar87 = puVar87 + 1;
        *puVar87 = 0;
      } while (pcVar85 != (capture_settings_struct *)(video->capture_settings).hires_valid);
      reset_video_2d(video->video_2d_engine);
      reset_video_2d(video->video_2d_engine + 1);
      reset_texture_cache(&video->texture_cache);
      reset_geometry(&video->geometry);
      if (iVar50 == __stack_chk_guard) {
        reset_video_3d(&video->video_3d);
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}


