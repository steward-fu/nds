/*
 * Ghidra decompilation
 *
 * Function : video_load_savestate
 * Address  : 0803cd1c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable bank_bits_offset_1:u32[r1:4] conflicts with parameter, skipped. */

void video_load_savestate(video_struct *video,mem_file_struct *savestate_file,u32 version)

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
  u16 *puVar52;
  memory_struct *pmVar53;
  memory_struct *memory;
  u8 **ppuVar54;
  uint uVar55;
  u32 allocation_mask_2;
  uint uVar56;
  uint uVar57;
  u16 **ppuVar58;
  u16 **palette_ram;
  u16 *puVar59;
  u16 *puVar60;
  u8 *puVar61;
  u16 *puVar62;
  uint uVar63;
  u8 **ppuVar64;
  u32 allocation_mask;
  uint uVar65;
  u16 *puVar66;
  uint uVar67;
  u8 **ppuVar68;
  uint uVar69;
  int iVar70;
  int iVar71;
  int iVar72;
  video_2d_bg_layer_struct *bg_layers;
  byte *pbVar73;
  u16 *puVar74;
  u16 *puVar75;
  uint uVar76;
  uint uVar77;
  u32 remap_banks;
  u32 vram_region_size;
  u8 **vram_map;
  u8 **vram_map_2;
  u8 **vram_map_6;
  int iVar78;
  uint uVar79;
  int iVar80;
  u8 **vram_map_7;
  uint uVar81;
  u16 *vram_map_allocation_bitmap;
  u16 *vram_map_allocation_bitmap_1;
  u16 *vram_map_allocation_bitmap_2;
  u16 *vram_map_allocation_bitmap_3;
  u16 *vram_map_allocation_bitmap_4;
  u16 *vram_map_allocation_bitmap_5;
  u32 vram_bank_dirty_bits;
  u16 *vram_map_allocation_bitmap_6;
  int iVar82;
  u16 *vram_map_allocation_bitmap_9;
  u32 vram_region;
  u8 *vram_map_dirty_bit_numbers_6;
  u32 allocation_mask_1;
  u16 **ppuVar83;
  u8 *vram_map_dirty_bit_numbers_9;
  u8 *puVar84;
  u16 **ppuVar85;
  video_struct *pvVar86;
  u16 *puVar87;
  u32 uVar88;
  video_struct *pvVar89;
  u16 *puVar90;
  uint uVar91;
  u8 **ppuVar92;
  uint uVar93;
  uint uVar94;
  u8 **ppuVar95;
  u8 *puVar96;
  u16 **ppuVar97;
  bool bVar98;
  bool bVar99;
  bool bVar100;
  bool bVar101;
  undefined auVar102 [16];
  undefined auVar103 [16];
  undefined auVar104 [16];
  undefined auVar105 [16];
  undefined auVar106 [16];
  undefined auVar107 [16];
  undefined auVar108 [16];
  undefined auVar109 [16];
  undefined8 uVar110;
  undefined8 uVar111;
  undefined8 uVar112;
  undefined auVar113 [16];
  undefined auVar114 [16];
  undefined auVar115 [16];
  undefined auVar116 [16];
  undefined auVar117 [16];
  undefined auVar118 [16];
  undefined auVar119 [16];
  undefined auVar120 [16];
  undefined auVar121 [16];
  undefined auVar122 [16];
  uint local_184;
  uint local_180;
  video_struct *local_17c;
  u16 *vram_map_allocation_bitmap_8;
  u8 **local_174;
  uint local_170;
  u32 dirty_bit_number_3;
  uint local_160;
  video_struct *local_15c;
  uint local_158;
  u8 **vram_map_9;
  u8 **local_150;
  u8 **vram_map_8;
  uint local_140;
  uint local_12c;
  u8 *local_128;
  u8 *local_11c;
  uint local_114;
  uint local_10c;
  uint local_108;
  int local_d4;
  uint local_d0;
  u8 *local_c4;
  u16 dummy_scanline_number;
  u32 vram_region_sizes [9];
  
  iVar50 = __stack_chk_guard;
  uVar88 = 0;
  ppuVar92 = video->vram_bank_ptrs;
  video_2d_load_savestate(video->video_2d_engine,savestate_file,version);
  video_2d_load_savestate(video->video_2d_engine + 1,savestate_file,version);
  geometry_load_savestate(&video->geometry,savestate_file,version);
  savestate_file->buffer_ptr = savestate_file->buffer_ptr + 2;
  pvVar89 = video;
  ppuVar54 = ppuVar92;
  do {
    if (pvVar89->vram_bank_maps[0].map_setting != 0) {
      vram_region = 0;
      puVar61 = *ppuVar54;
      video->remap_banks = 0;
      remap_vram_body(video,puVar61,uVar88,0,1);
      ppuVar64 = ppuVar92;
      pvVar86 = video;
      for (uVar81 = (uint)video->remap_banks; uVar81 != 0; uVar81 = uVar81 >> 1) {
        if ((uVar81 & 1) != 0) {
          puVar61 = *ppuVar64;
          pbVar73 = ppuVar64[9];
          pvVar86->vram_bank_maps[0].map_setting = 0xffffffff;
          remap_vram_body(video,puVar61,vram_region,(uint)*pbVar73,0);
        }
        vram_region = vram_region + 1;
        pvVar86 = (video_struct *)&pvVar86->vram_bank_maps[0].region_offset;
        ppuVar64 = ppuVar64 + 1;
      }
    }
    uVar88 = uVar88 + 1;
    pvVar89 = (video_struct *)&pvVar89->vram_bank_maps[0].region_offset;
    ppuVar54 = ppuVar54 + 1;
  } while (uVar88 != 9);
  puVar74 = video->vram_map_allocation_bitmap + 0x82;
  puVar75 = video->vram_map_allocation_bitmap + 0x83;
  puVar51 = video->vram_map_allocation_bitmap + 0x80;
  puVar62 = video->vram_map_allocation_bitmap + 0x87;
  puVar52 = video->vram_map_allocation_bitmap + 0x84;
  uVar76 = -((uint)((int)video << 0x1d) >> 0x1e) & 7;
  puVar66 = video->vram_map_allocation_bitmap + 0x86;
  uVar94 = -((uint)((int)puVar75 * 0x20000000) >> 0x1e) & 7;
  uVar93 = -((uint)((int)video << 0x1d) >> 0x1e) & 7;
  uVar81 = -((uint)((int)puVar62 * 0x20000000) >> 0x1e) & 7;
  uVar63 = -((uint)((int)video->vram_map_allocation_bitmap * 0x20000000) >> 0x1e) & 7;
  uVar67 = -((uint)((int)video->vram_map_allocation_bitmap * 0x20000000) >> 0x1e) & 7;
  vram_map_9 = (u8 **)0x0;
  local_15c = video;
  local_150 = video->vram_bank_ptrs + 8;
  do {
    uVar77 = (uint)*local_150[1];
    if (local_15c->vram_bank_maps[0].map_setting != uVar77) {
      pbVar73 = local_150[-8];
      video->remap_banks = 0;
      remap_vram_body(video,pbVar73,(u32)vram_map_9,uVar77,1);
      local_184 = (uint)video->remap_banks;
      if (local_184 != 0) {
        local_180 = 0;
        vram_map_allocation_bitmap_8 = (u16 *)video->vram_control_ptrs;
        local_160 = 0;
        local_17c = video;
        local_174 = ppuVar92;
        do {
          if ((local_184 & 1) == 0) goto LAB_0803d004;
          pbVar73 = *(byte **)vram_map_allocation_bitmap_8;
          local_17c->vram_bank_maps[0].map_setting = 0xffffffff;
          vram_region_sizes[0] = 0x80;
          vram_region_sizes[1] = 0x80;
          bVar21 = *pbVar73;
          vram_region_sizes[2] = 0x80;
          vram_region_sizes[3] = 0x80;
          vram_region_sizes[4] = 0x40;
          vram_region_sizes[5] = 0x10;
          vram_region_sizes[6] = 0x10;
          vram_region_sizes[7] = 0x20;
          vram_region_sizes[8] = 0x10;
          pmVar53 = video->memory;
          puVar90 = (u16 *)*local_174;
          uVar77 = vram_region_sizes[local_180];
          local_158 = uVar77;
          if (-1 < (char)bVar21) {
switchD_0803d0e8_caseD_6:
            uVar79 = 0xb;
LAB_0803d134:
            uVar91 = 0;
            goto LAB_0803d138;
          }
          uVar55 = (uint)(bVar21 >> 3);
          uVar91 = uVar55 & 3;
          uVar47 = (u8)local_160;
          switch(bVar21 & 7) {
          case 0:
            switch(local_180) {
            case 0:
            case 1:
            case 2:
            case 3:
              uVar88 = (local_180 + 0x340) * 0x20000;
              local_140 = local_180 * -0x20000 + -0x800000;
              uVar91 = local_160 + 0x200;
              local_114 = local_160 + 0x180;
              break;
            case 4:
              uVar91 = 0x220;
              uVar88 = 0x6880000;
              local_140 = -0x880000;
              local_114 = 0x1a0;
              break;
            case 5:
            case 6:
              local_140 = local_180 * -0x4000 + -0x87c000;
              uVar91 = local_180 + 0x21f;
              local_114 = local_180 + 0x19f;
              uVar88 = (local_180 + 0x1a1f) * 0x4000;
              break;
            case 7:
              local_140 = -0x898000;
              uVar91 = 0x226;
              uVar88 = 0x6898000;
              local_114 = 0x1a6;
              break;
            case 8:
              uVar91 = 0x228;
              uVar88 = 0x68a0000;
              local_140 = -0x8a0000;
              local_114 = 0x1a8;
              break;
            default:
              goto switchD_0803d0e8_caseD_7;
            }
            local_11c = (u8 *)((uVar77 >> 4) << 0xe);
            unmap_memory_page_region_direct(pmVar53->memory_interface_arm9,uVar88,(u32)local_11c);
            goto LAB_0803ff20;
          case 1:
            switch(local_180) {
            case 0:
            case 1:
            case 2:
            case 3:
              uVar91 = uVar91 << 3;
LAB_080406bc:
              local_114 = uVar91 - 0x80;
              uVar88 = (uVar91 + 0x1800) * 0x4000;
              local_140 = (uVar91 + 0x1800) * -0x4000 + 0x6000000;
              break;
            default:
              goto switchD_0803d0e8_caseD_7;
            case 5:
            case 6:
              uVar91 = (uVar55 & 1) + (uVar55 & 2) * 2;
LAB_0804073c:
              uVar77 = uVar77 >> 4;
              uVar88 = (uVar91 + 0x1800) * 0x4000;
              unmap_memory_page_region_direct(pmVar53->memory_interface_arm9,uVar88,uVar77 << 0xe);
              uVar55 = uVar91 >> 5;
              iVar80 = (1 << (uVar77 & 0xff)) + -1;
              iVar72 = uVar91 * 2 + 0x117c;
              iVar78 = (uVar77 + 0x26 + uVar91) * 4;
              iVar82 = uVar91 + 0x197c;
              video->vram_map_dirty_bitmap_fine[uVar55] =
                   video->vram_map_dirty_bitmap_fine[uVar55] | iVar80 << (uVar91 & 0x1f);
              iVar70 = uVar77 + 0x8be + uVar91;
              iVar71 = iVar78 + (uVar91 + 0x8be) * -2;
              bVar98 = iVar71 == 0;
              if (bVar98 || iVar78 < iVar72) {
                iVar71 = iVar78 - iVar82;
                bVar98 = iVar71 == 0;
                iVar72 = iVar82;
              }
              video->vram_map_dirty_bitmap_coarse =
                   video->vram_map_dirty_bitmap_coarse | 1 << uVar55;
              puVar61 = (u8 *)((int)puVar90 - (uVar88 + 0xfa000000));
              uVar23 = (ushort)(1 << (local_180 & 0xff));
              if (iVar82 + iVar70 * -2 < 0 == SBORROW4(iVar82,iVar70 * 2) &&
                  ((bVar98 || iVar71 < 0 != SBORROW4(iVar78,iVar72)) && 0x13 < uVar77)) {
                uVar55 = -((uint)((int)(video->vram_map_allocation_bitmap + uVar91) * 0x20000000) >>
                          0x1e) & 7;
                if (uVar77 <= uVar55) {
                  uVar55 = uVar77;
                }
                uVar79 = local_160;
                uVar69 = uVar91;
                local_12c = uVar77;
                if (uVar55 != 0) {
                  video->vram_map[uVar91] = puVar61;
                  uVar79 = local_160 + 1;
                  local_12c = uVar77 - 1;
                  uVar69 = uVar91 + 1;
                  video->vram_map_allocation_bitmap[uVar91] =
                       uVar23 | video->vram_map_allocation_bitmap[uVar91];
                  video->vram_map_dirty_bit_numbers[uVar91] = uVar47;
                  if (uVar55 != 1) {
                    local_12c = uVar77 - 2;
                    video->vram_map[uVar91 + 1] = puVar61;
                    uVar79 = local_160 + 2;
                    video->vram_map_allocation_bitmap[uVar91 + 1] =
                         uVar23 | video->vram_map_allocation_bitmap[uVar91 + 1];
                    video->vram_map_dirty_bit_numbers[uVar91 + 1] = uVar47 + '\x01';
                    uVar69 = uVar91 + 2;
                    if (uVar55 != 2) {
                      video->vram_map[uVar91 + 2] = puVar61;
                      uVar79 = local_160 + 3;
                      local_12c = uVar77 - 3;
                      video->vram_map_allocation_bitmap[uVar91 + 2] =
                           uVar23 | video->vram_map_allocation_bitmap[uVar91 + 2];
                      video->vram_map_dirty_bit_numbers[uVar91 + 2] = uVar47 + '\x02';
                      uVar69 = uVar91 + 3;
                      if (uVar55 != 3) {
                        uVar22 = video->vram_map_allocation_bitmap[uVar91 + 3];
                        video->vram_map[uVar91 + 3] = puVar61;
                        uVar79 = local_160 + 4;
                        local_12c = uVar77 - 4;
                        video->vram_map_allocation_bitmap[uVar91 + 3] = uVar23 | uVar22;
                        video->vram_map_dirty_bit_numbers[uVar91 + 3] = uVar47 + '\x03';
                        uVar69 = uVar91 + 4;
                        if (uVar55 != 4) {
                          uVar22 = video->vram_map_allocation_bitmap[uVar91 + 4];
                          video->vram_map[uVar91 + 4] = puVar61;
                          uVar79 = local_160 + 5;
                          local_12c = uVar77 - 5;
                          video->vram_map_allocation_bitmap[uVar91 + 4] = uVar23 | uVar22;
                          video->vram_map_dirty_bit_numbers[uVar91 + 4] = uVar47 + '\x04';
                          uVar69 = uVar91 + 5;
                          if (uVar55 != 5) {
                            uVar22 = video->vram_map_allocation_bitmap[uVar91 + 5];
                            video->vram_map[uVar91 + 5] = puVar61;
                            uVar79 = local_160 + 6;
                            local_12c = uVar77 - 6;
                            video->vram_map_allocation_bitmap[uVar91 + 5] = uVar23 | uVar22;
                            video->vram_map_dirty_bit_numbers[uVar91 + 5] = uVar47 + '\x05';
                            uVar69 = uVar91 + 6;
                            if (uVar55 == 7) {
                              video->vram_map[uVar91 + 6] = puVar61;
                              uVar79 = local_160 + 7;
                              local_12c = uVar77 - 7;
                              video->vram_map_allocation_bitmap[uVar91 + 6] =
                                   uVar23 | video->vram_map_allocation_bitmap[uVar91 + 6];
                              video->vram_map_dirty_bit_numbers[uVar91 + 6] = uVar47 + '\x06';
                              uVar69 = uVar91 + 7;
                            }
                          }
                        }
                      }
                    }
                  }
                  if (uVar77 == uVar55) goto LAB_08040f64;
                }
                local_114 = uVar77 - 1;
                uVar65 = ((uVar77 - uVar55) - 0x10 >> 4) + 1;
                iVar78 = uVar65 * 0x10;
                if (0xe < local_114 - uVar55) {
                  auVar13._4_4_ = uVar79;
                  auVar13._0_4_ = uVar79;
                  auVar13._8_8_ = 0;
                  auVar1 = SIMDExpandImmediate(0,0,0x10);
                  auVar2 = SIMDExpandImmediate(0,0,4);
                  auVar120 = SIMDExpandImmediate(0,0,8);
                  auVar121 = SIMDExpandImmediate(0,0,0xc);
                  auVar36._8_8_ = 0x300000002;
                  auVar36._0_8_ = 0x100000000;
                  auVar119 = VectorAdd(auVar13 & auVar13 << 0x40,auVar36,4);
                  auVar14._4_4_ = CONCAT22(uVar23,uVar23);
                  auVar14._0_4_ = CONCAT22(uVar23,uVar23);
                  auVar14._8_8_ = 0;
                  auVar14 = auVar14 & auVar14 << 0x40;
                  local_114 = 0;
                  puVar59 = video->vram_map_allocation_bitmap + uVar55 + uVar91 + 0x10;
                  puVar60 = video->vram_map_allocation_bitmap + uVar55 + uVar91 + 0x10;
                  ppuVar54 = video->vram_map + uVar55 + uVar91;
                  local_c4 = video->vram_map_dirty_bit_numbers + iVar82 + uVar55 + -0x197c;
                  do {
                    auVar113 = VectorAdd(auVar119,auVar2,4);
                    auVar109 = VectorAdd(auVar119,auVar121,4);
                    auVar115 = *(undefined (*) [16])(puVar59 + -8);
                    auVar102 = VectorAdd(auVar119,auVar120,4);
                    auVar122 = *(undefined (*) [16])(puVar59 + -0x10);
                    local_114 = local_114 + 1;
                    *(undefined8 *)ppuVar54 = 0;
                    *(undefined8 *)(ppuVar54 + 2) = 0;
                    *(undefined8 *)(ppuVar54 + 4) = 0;
                    *(undefined8 *)(ppuVar54 + 6) = 0;
                    uVar110 = VectorCopyNarrow(auVar119,4);
                    uVar111 = VectorCopyNarrow(auVar113,4);
                    auVar116._0_8_ = VectorCopyNarrow(auVar102,4);
                    auVar116._8_8_ = VectorCopyNarrow(auVar109,4);
                    auVar119 = VectorAdd(auVar119,auVar1,4);
                    auVar26._8_8_ = uVar111;
                    auVar26._0_8_ = uVar110;
                    uVar110 = VectorCopyNarrow(auVar26,2);
                    uVar111 = VectorCopyNarrow(auVar116,2);
                    auVar122 = auVar122 | auVar14;
                    *(undefined8 *)(ppuVar54 + 8) = 0;
                    *(undefined8 *)(ppuVar54 + 10) = 0;
                    *(undefined8 *)(ppuVar54 + 0xc) = 0;
                    *(undefined8 *)(ppuVar54 + 0xe) = 0;
                    *(longlong *)(puVar60 + -0x10) = auVar122._0_8_;
                    *(longlong *)(puVar60 + -0xc) = auVar122._8_8_;
                    auVar115 = auVar14 | auVar115;
                    *(longlong *)(puVar60 + -8) = auVar115._0_8_;
                    *(longlong *)(puVar60 + -4) = auVar115._8_8_;
                    *(undefined8 *)local_c4 = uVar110;
                    *(undefined8 *)(local_c4 + 8) = uVar111;
                    puVar59 = puVar59 + 0x10;
                    puVar60 = puVar60 + 0x10;
                    ppuVar54 = ppuVar54 + 0x10;
                    local_c4 = local_c4 + 0x10;
                  } while (local_114 < uVar65);
                  local_12c = local_12c + uVar65 * -0x10;
                  uVar79 = uVar79 + iVar78;
                  uVar69 = uVar69 + iVar78;
                  if (uVar77 - uVar55 == iVar78) goto LAB_08040f64;
                }
                uVar48 = (u8)uVar79;
                video->vram_map[uVar69] = puVar61;
                video->vram_map_allocation_bitmap[uVar69] =
                     uVar23 | video->vram_map_allocation_bitmap[uVar69];
                video->vram_map_dirty_bit_numbers[uVar69] = uVar48;
                if (local_12c != 1) {
                  video->vram_map[uVar69 + 1] = puVar61;
                  local_114._0_1_ = uVar48 + '\x02';
                  video->vram_map_allocation_bitmap[uVar69 + 1] =
                       uVar23 | video->vram_map_allocation_bitmap[uVar69 + 1];
                  video->vram_map_dirty_bit_numbers[uVar69 + 1] = uVar48 + '\x01';
                  if (local_12c != 2) {
                    video->vram_map[uVar69 + 2] = puVar61;
                    video->vram_map_allocation_bitmap[uVar69 + 2] =
                         uVar23 | video->vram_map_allocation_bitmap[uVar69 + 2];
                    video->vram_map_dirty_bit_numbers[uVar69 + 2] = (u8)local_114;
                    if (local_12c != 3) {
                      video->vram_map[uVar69 + 3] = puVar61;
                      local_114._0_1_ = uVar48 + '\x04';
                      video->vram_map_allocation_bitmap[uVar69 + 3] =
                           uVar23 | video->vram_map_allocation_bitmap[uVar69 + 3];
                      video->vram_map_dirty_bit_numbers[uVar69 + 3] = uVar48 + '\x03';
                      if (local_12c != 4) {
                        video->vram_map[uVar69 + 4] = puVar61;
                        video->vram_map_allocation_bitmap[uVar69 + 4] =
                             uVar23 | video->vram_map_allocation_bitmap[uVar69 + 4];
                        video->vram_map_dirty_bit_numbers[uVar69 + 4] = (u8)local_114;
                        if (local_12c != 5) {
                          video->vram_map[uVar69 + 5] = puVar61;
                          local_114._0_1_ = uVar48 + '\x06';
                          video->vram_map_allocation_bitmap[uVar69 + 5] =
                               uVar23 | video->vram_map_allocation_bitmap[uVar69 + 5];
                          video->vram_map_dirty_bit_numbers[uVar69 + 5] = uVar48 + '\x05';
                          if (local_12c != 6) {
                            video->vram_map[uVar69 + 6] = puVar61;
                            video->vram_map_allocation_bitmap[uVar69 + 6] =
                                 uVar23 | video->vram_map_allocation_bitmap[uVar69 + 6];
                            video->vram_map_dirty_bit_numbers[uVar69 + 6] = (u8)local_114;
                            if (local_12c != 7) {
                              video->vram_map[uVar69 + 7] = puVar61;
                              local_114._0_1_ = uVar48 + '\b';
                              video->vram_map_allocation_bitmap[uVar69 + 7] =
                                   uVar23 | video->vram_map_allocation_bitmap[uVar69 + 7];
                              video->vram_map_dirty_bit_numbers[uVar69 + 7] = uVar48 + '\a';
                              if (local_12c != 8) {
                                video->vram_map[uVar69 + 8] = puVar61;
                                video->vram_map_allocation_bitmap[uVar69 + 8] =
                                     uVar23 | video->vram_map_allocation_bitmap[uVar69 + 8];
                                video->vram_map_dirty_bit_numbers[uVar69 + 8] = (u8)local_114;
                                if (local_12c != 9) {
                                  video->vram_map[uVar69 + 9] = puVar61;
                                  local_114._0_1_ = uVar48 + '\n';
                                  video->vram_map_allocation_bitmap[uVar69 + 9] =
                                       uVar23 | video->vram_map_allocation_bitmap[uVar69 + 9];
                                  video->vram_map_dirty_bit_numbers[uVar69 + 9] = uVar48 + '\t';
                                  if (local_12c != 10) {
                                    video->vram_map[uVar69 + 10] = puVar61;
                                    video->vram_map_allocation_bitmap[uVar69 + 10] =
                                         uVar23 | video->vram_map_allocation_bitmap[uVar69 + 10];
                                    video->vram_map_dirty_bit_numbers[uVar69 + 10] = (u8)local_114;
                                    if (local_12c != 0xb) {
                                      video->vram_map[uVar69 + 0xb] = puVar61;
                                      local_114._0_1_ = uVar48 + '\f';
                                      video->vram_map_allocation_bitmap[uVar69 + 0xb] =
                                           uVar23 | video->vram_map_allocation_bitmap[uVar69 + 0xb];
                                      video->vram_map_dirty_bit_numbers[uVar69 + 0xb] =
                                           uVar48 + '\v';
                                      if (local_12c != 0xc) {
                                        video->vram_map[uVar69 + 0xc] = puVar61;
                                        video->vram_map_allocation_bitmap[uVar69 + 0xc] =
                                             uVar23 | video->vram_map_allocation_bitmap
                                                      [uVar69 + 0xc];
                                        video->vram_map_dirty_bit_numbers[uVar69 + 0xc] =
                                             (u8)local_114;
                                        if (local_12c != 0xd) {
                                          video->vram_map[uVar69 + 0xd] = puVar61;
                                          video->vram_map_allocation_bitmap[uVar69 + 0xd] =
                                               uVar23 | video->vram_map_allocation_bitmap
                                                        [uVar69 + 0xd];
                                          video->vram_map_dirty_bit_numbers[uVar69 + 0xd] =
                                               uVar48 + '\r';
                                          if (local_12c != 0xe) {
                                            video->vram_map[uVar69 + 0xe] = puVar61;
                                            video->vram_map_allocation_bitmap[uVar69 + 0xe] =
                                                 uVar23 | video->vram_map_allocation_bitmap
                                                          [uVar69 + 0xe];
                                            video->vram_map_dirty_bit_numbers[uVar69 + 0xe] =
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
              else {
                puVar59 = video->vram_map_allocation_bitmap + uVar91;
                uVar55 = local_160;
                ppuVar54 = video->vram_map + uVar91;
                puVar84 = video->vram_map_dirty_bit_numbers + uVar91;
                do {
                  uVar22 = *puVar59;
                  *ppuVar54 = puVar61;
                  *puVar59 = uVar23 | uVar22;
                  *puVar84 = (u8)uVar55;
                  uVar55 = uVar55 + 1;
                  puVar59 = puVar59 + 1;
                  ppuVar54 = ppuVar54 + 1;
                  puVar84 = puVar84 + 1;
                } while (uVar55 != uVar77 + local_160);
              }
LAB_08040f64:
              local_10c = uVar91 + 3;
              iVar70 = uVar91 + 0x197f;
              unmap_memory_page_region_direct
                        (video->memory->memory_interface_arm9,uVar88 + 0xc000,uVar77 << 0xe);
              uVar55 = local_10c >> 5;
              iVar78 = (uVar77 + 0x29 + uVar91) * 4;
              uVar79 = uVar77 + 0x8c1 + uVar91;
              video->vram_map_dirty_bitmap_fine[uVar55] =
                   video->vram_map_dirty_bitmap_fine[uVar55] | iVar80 << (local_10c & 0x1f);
              iVar71 = uVar91 * 2 + 0x1182;
              iVar72 = iVar78 - iVar71;
              bVar98 = iVar72 == 0;
              if (bVar98 || iVar78 < iVar71) {
                iVar72 = iVar78 - iVar70;
                bVar98 = iVar72 == 0;
                iVar71 = iVar70;
              }
              bVar101 = SBORROW4(iVar70,uVar79 * 2);
              bVar100 = (int)(iVar70 + uVar79 * -2) < 0;
              if (bVar100 != bVar101) {
                uVar79 = 0;
              }
              video->vram_map_dirty_bitmap_coarse =
                   video->vram_map_dirty_bitmap_coarse | 1 << uVar55;
              if (bVar100 == bVar101) {
                uVar79 = (uint)(0x13 < uVar77 && (bVar98 || iVar72 < 0 != SBORROW4(iVar78,iVar71)));
              }
              puVar61 = (u8 *)((int)puVar90 + (-0xc000 - (uVar88 + 0xfa000000)));
              if (uVar79 == 0) {
                puVar84 = video->vram_map_dirty_bit_numbers + uVar91 + 2;
                ppuVar54 = video->vram_map + uVar91 + 2;
                uVar77 = local_160;
                puVar90 = video->vram_map_allocation_bitmap + uVar91 + 3;
                do {
                  uVar22 = *puVar90;
                  ppuVar54 = ppuVar54 + 1;
                  *ppuVar54 = puVar61;
                  *puVar90 = uVar23 | uVar22;
                  puVar84 = puVar84 + 1;
                  *puVar84 = (u8)uVar77;
                  uVar77 = uVar77 + 1;
                  puVar90 = puVar90 + 1;
                } while (uVar77 != uVar77 + local_160);
                uVar79 = 8;
                goto LAB_0803d138;
              }
              uVar55 = -((uint)((int)(video->vram_map_allocation_bitmap + uVar91 + 3) * 0x20000000)
                        >> 0x1e) & 7;
              if (uVar77 <= uVar55) {
                uVar55 = uVar77;
              }
              uVar79 = local_160;
              local_12c = uVar77;
              if (uVar55 == 0) {
LAB_08041224:
                local_114 = uVar77 - 1;
                uVar77 = ((uVar77 - uVar55) - 0x10 >> 4) + 1;
                iVar78 = uVar77 * 0x10;
                if (0xe < local_114 - uVar55) {
                  auVar15._4_4_ = uVar79;
                  auVar15._0_4_ = uVar79;
                  auVar15._8_8_ = 0;
                  auVar1 = SIMDExpandImmediate(0,0,0x10);
                  auVar2 = SIMDExpandImmediate(0,0,4);
                  auVar120 = SIMDExpandImmediate(0,0,8);
                  auVar121 = SIMDExpandImmediate(0,0,0xc);
                  auVar16._4_4_ = CONCAT22(uVar23,uVar23);
                  auVar16._0_4_ = CONCAT22(uVar23,uVar23);
                  auVar16._8_8_ = 0;
                  auVar16 = auVar16 & auVar16 << 0x40;
                  auVar37._8_8_ = 0x300000002;
                  auVar37._0_8_ = 0x100000000;
                  auVar119 = VectorAdd(auVar15 & auVar15 << 0x40,auVar37,4);
                  local_128 = (u8 *)0x0;
                  puVar90 = video->vram_map_allocation_bitmap + uVar55 + uVar91 + 0x13;
                  puVar59 = video->vram_map_allocation_bitmap + uVar55 + uVar91 + 0x13;
                  ppuVar54 = video->vram_map + uVar55 + uVar91 + 3;
                  local_11c = video->vram_map_dirty_bit_numbers + iVar70 + uVar55 + -0x197c;
                  do {
                    auVar113 = VectorAdd(auVar119,auVar2,4);
                    auVar109 = VectorAdd(auVar119,auVar121,4);
                    auVar115 = *(undefined (*) [16])(puVar59 + -8);
                    auVar102 = VectorAdd(auVar119,auVar120,4);
                    auVar122 = *(undefined (*) [16])(puVar59 + -0x10);
                    local_128 = (u8 *)((int)local_128 + 1);
                    *(undefined8 *)ppuVar54 = 0;
                    *(undefined8 *)(ppuVar54 + 2) = 0;
                    *(undefined8 *)(ppuVar54 + 4) = 0;
                    *(undefined8 *)(ppuVar54 + 6) = 0;
                    uVar110 = VectorCopyNarrow(auVar119,4);
                    uVar111 = VectorCopyNarrow(auVar113,4);
                    auVar117._0_8_ = VectorCopyNarrow(auVar102,4);
                    auVar117._8_8_ = VectorCopyNarrow(auVar109,4);
                    auVar119 = VectorAdd(auVar119,auVar1,4);
                    auVar27._8_8_ = uVar111;
                    auVar27._0_8_ = uVar110;
                    uVar110 = VectorCopyNarrow(auVar27,2);
                    uVar111 = VectorCopyNarrow(auVar117,2);
                    auVar122 = auVar122 | auVar16;
                    *(undefined8 *)(ppuVar54 + 8) = 0;
                    *(undefined8 *)(ppuVar54 + 10) = 0;
                    *(undefined8 *)(ppuVar54 + 0xc) = 0;
                    *(undefined8 *)(ppuVar54 + 0xe) = 0;
                    *(longlong *)(puVar90 + -0x10) = auVar122._0_8_;
                    *(longlong *)(puVar90 + -0xc) = auVar122._8_8_;
                    auVar115 = auVar16 | auVar115;
                    *(longlong *)(puVar90 + -8) = auVar115._0_8_;
                    *(longlong *)(puVar90 + -4) = auVar115._8_8_;
                    *(undefined8 *)local_11c = uVar110;
                    *(undefined8 *)(local_11c + 8) = uVar111;
                    puVar90 = puVar90 + 0x10;
                    puVar59 = puVar59 + 0x10;
                    ppuVar54 = ppuVar54 + 0x10;
                    local_11c = local_11c + 0x10;
                  } while (local_128 < uVar77);
                  local_12c = local_12c + uVar77 * -0x10;
                  local_10c = local_10c + iVar78;
                  uVar79 = uVar79 + iVar78;
                  if (uVar77 - uVar55 == iVar78) goto LAB_08041694;
                }
                uVar47 = (u8)uVar79;
                video->vram_map[local_10c] = puVar61;
                video->vram_map_allocation_bitmap[local_10c] =
                     uVar23 | video->vram_map_allocation_bitmap[local_10c];
                video->vram_map_dirty_bit_numbers[local_10c] = uVar47;
                if (local_12c != 1) {
                  video->vram_map[local_10c + 1] = puVar61;
                  video->vram_map_allocation_bitmap[local_10c + 1] =
                       uVar23 | video->vram_map_allocation_bitmap[local_10c + 1];
                  video->vram_map_dirty_bit_numbers[local_10c + 1] = uVar47 + '\x01';
                  if (local_12c != 2) {
                    video->vram_map[local_10c + 2] = puVar61;
                    video->vram_map_allocation_bitmap[local_10c + 2] =
                         uVar23 | video->vram_map_allocation_bitmap[local_10c + 2];
                    video->vram_map_dirty_bit_numbers[local_10c + 2] = uVar47 + '\x02';
                    if (local_12c != 3) {
                      video->vram_map[local_10c + 3] = puVar61;
                      video->vram_map_allocation_bitmap[local_10c + 3] =
                           uVar23 | video->vram_map_allocation_bitmap[local_10c + 3];
                      video->vram_map_dirty_bit_numbers[local_10c + 3] = uVar47 + '\x03';
                      if (local_12c != 4) {
                        video->vram_map[local_10c + 4] = puVar61;
                        video->vram_map_allocation_bitmap[local_10c + 4] =
                             uVar23 | video->vram_map_allocation_bitmap[local_10c + 4];
                        video->vram_map_dirty_bit_numbers[local_10c + 4] = uVar47 + '\x04';
                        if (local_12c != 5) {
                          video->vram_map[local_10c + 5] = puVar61;
                          video->vram_map_allocation_bitmap[local_10c + 5] =
                               uVar23 | video->vram_map_allocation_bitmap[local_10c + 5];
                          video->vram_map_dirty_bit_numbers[local_10c + 5] = uVar47 + '\x05';
                          if (local_12c != 6) {
                            video->vram_map[local_10c + 6] = puVar61;
                            video->vram_map_allocation_bitmap[local_10c + 6] =
                                 uVar23 | video->vram_map_allocation_bitmap[local_10c + 6];
                            video->vram_map_dirty_bit_numbers[local_10c + 6] = uVar47 + '\x06';
                            if (local_12c != 7) {
                              video->vram_map[local_10c + 7] = puVar61;
                              video->vram_map_allocation_bitmap[local_10c + 7] =
                                   uVar23 | video->vram_map_allocation_bitmap[local_10c + 7];
                              video->vram_map_dirty_bit_numbers[local_10c + 7] = uVar47 + '\a';
                              if (local_12c != 8) {
                                video->vram_map[local_10c + 8] = puVar61;
                                video->vram_map_allocation_bitmap[local_10c + 8] =
                                     uVar23 | video->vram_map_allocation_bitmap[local_10c + 8];
                                video->vram_map_dirty_bit_numbers[local_10c + 8] = uVar47 + '\b';
                                if (local_12c != 9) {
                                  video->vram_map[local_10c + 9] = puVar61;
                                  video->vram_map_allocation_bitmap[local_10c + 9] =
                                       uVar23 | video->vram_map_allocation_bitmap[local_10c + 9];
                                  video->vram_map_dirty_bit_numbers[local_10c + 9] = uVar47 + '\t';
                                  if (local_12c != 10) {
                                    video->vram_map[local_10c + 10] = puVar61;
                                    video->vram_map_allocation_bitmap[local_10c + 10] =
                                         uVar23 | video->vram_map_allocation_bitmap[local_10c + 10];
                                    video->vram_map_dirty_bit_numbers[local_10c + 10] =
                                         uVar47 + '\n';
                                    if (local_12c != 0xb) {
                                      video->vram_map[local_10c + 0xb] = puVar61;
                                      video->vram_map_allocation_bitmap[local_10c + 0xb] =
                                           uVar23 | video->vram_map_allocation_bitmap
                                                    [local_10c + 0xb];
                                      video->vram_map_dirty_bit_numbers[local_10c + 0xb] =
                                           uVar47 + '\v';
                                      if (local_12c != 0xc) {
                                        video->vram_map[local_10c + 0xc] = puVar61;
                                        video->vram_map_allocation_bitmap[local_10c + 0xc] =
                                             uVar23 | video->vram_map_allocation_bitmap
                                                      [local_10c + 0xc];
                                        video->vram_map_dirty_bit_numbers[local_10c + 0xc] =
                                             uVar47 + '\f';
                                        if (local_12c != 0xd) {
                                          video->vram_map[local_10c + 0xd] = puVar61;
                                          video->vram_map_allocation_bitmap[local_10c + 0xd] =
                                               uVar23 | video->vram_map_allocation_bitmap
                                                        [local_10c + 0xd];
                                          video->vram_map_dirty_bit_numbers[local_10c + 0xd] =
                                               uVar47 + '\r';
                                          if (local_12c != 0xe) {
                                            video->vram_map[local_10c + 0xe] = puVar61;
                                            video->vram_map_allocation_bitmap[local_10c + 0xe] =
                                                 uVar23 | video->vram_map_allocation_bitmap
                                                          [local_10c + 0xe];
                                            video->vram_map_dirty_bit_numbers[local_10c + 0xe] =
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
                local_12c = uVar77 - 1;
                video->vram_map[uVar91 + 3] = puVar61;
                uVar79 = local_160 + 1;
                video->vram_map_allocation_bitmap[uVar91 + 3] =
                     uVar23 | video->vram_map_allocation_bitmap[uVar91 + 3];
                video->vram_map_dirty_bit_numbers[uVar91 + 3] = uVar47;
                local_10c = uVar91 + 4;
                if (uVar55 != 1) {
                  uVar22 = video->vram_map_allocation_bitmap[uVar91 + 4];
                  uVar79 = local_160 + 2;
                  video->vram_map[uVar91 + 4] = puVar61;
                  local_12c = uVar77 - 2;
                  video->vram_map_allocation_bitmap[uVar91 + 4] = uVar23 | uVar22;
                  video->vram_map_dirty_bit_numbers[uVar91 + 4] = uVar47 + '\x01';
                  local_10c = uVar91 + 5;
                  if (uVar55 != 2) {
                    uVar22 = video->vram_map_allocation_bitmap[uVar91 + 5];
                    uVar79 = local_160 + 3;
                    video->vram_map[uVar91 + 5] = puVar61;
                    local_12c = uVar77 - 3;
                    video->vram_map_allocation_bitmap[uVar91 + 5] = uVar23 | uVar22;
                    video->vram_map_dirty_bit_numbers[uVar91 + 5] = uVar47 + '\x02';
                    local_10c = uVar91 + 6;
                    if (uVar55 != 3) {
                      uVar22 = video->vram_map_allocation_bitmap[uVar91 + 6];
                      uVar79 = local_160 + 4;
                      video->vram_map[uVar91 + 6] = puVar61;
                      local_12c = uVar77 - 4;
                      video->vram_map_allocation_bitmap[uVar91 + 6] = uVar23 | uVar22;
                      video->vram_map_dirty_bit_numbers[uVar91 + 6] = uVar47 + '\x03';
                      local_10c = uVar91 + 7;
                      if (uVar55 != 4) {
                        uVar22 = video->vram_map_allocation_bitmap[uVar91 + 7];
                        uVar79 = local_160 + 5;
                        video->vram_map[uVar91 + 7] = puVar61;
                        local_12c = uVar77 - 5;
                        video->vram_map_allocation_bitmap[uVar91 + 7] = uVar23 | uVar22;
                        video->vram_map_dirty_bit_numbers[uVar91 + 7] = uVar47 + '\x04';
                        local_10c = uVar91 + 8;
                        if (uVar55 != 5) {
                          uVar22 = video->vram_map_allocation_bitmap[uVar91 + 8];
                          uVar79 = local_160 + 6;
                          video->vram_map[uVar91 + 8] = puVar61;
                          local_12c = uVar77 - 6;
                          video->vram_map_allocation_bitmap[uVar91 + 8] = uVar23 | uVar22;
                          video->vram_map_dirty_bit_numbers[uVar91 + 8] = uVar47 + '\x05';
                          local_10c = uVar91 + 9;
                          if (uVar55 == 7) {
                            uVar79 = local_160 + 7;
                            video->vram_map[uVar91 + 9] = puVar61;
                            local_12c = uVar77 - 7;
                            video->vram_map_allocation_bitmap[uVar91 + 9] =
                                 uVar23 | video->vram_map_allocation_bitmap[uVar91 + 9];
                            video->vram_map_dirty_bit_numbers[uVar91 + 9] = uVar47 + '\x06';
                            local_10c = uVar91 + 10;
                          }
                        }
                      }
                    }
                  }
                }
                if (uVar77 != uVar55) goto LAB_08041224;
              }
LAB_08041694:
              uVar79 = 8;
              goto LAB_0803d138;
            case 7:
              uVar77 = uVar77 >> 4;
              unmap_memory_page_region_direct
                        (pmVar53->memory_interface_arm9,0x6200000,uVar77 << 0xe);
              ppuVar54 = video->vram_map + 0x80;
              puVar84 = video->vram_map_dirty_bit_numbers + uVar77 + 0x80;
              puVar59 = video->vram_map_allocation_bitmap + uVar77 + 0x80;
              ppuVar64 = video->vram_map + uVar77 + 0x80;
              puVar61 = video->vram_map_dirty_bit_numbers + 0x80;
              uVar91 = (uint)(puVar84 <= ppuVar54);
              bVar100 = ppuVar54 <= puVar59;
              bVar98 = (u8 **)puVar59 == ppuVar54;
              if (bVar100 && !bVar98) {
                bVar100 = puVar51 <= ppuVar64;
                bVar98 = ppuVar64 == (u8 **)puVar51;
              }
              if (ppuVar64 <= puVar61) {
                uVar91 = 1;
              }
              bVar99 = puVar51 <= puVar84;
              bVar101 = (u16 *)puVar84 == puVar51;
              if (bVar99 && !bVar101) {
                bVar99 = puVar61 <= puVar59;
                bVar101 = puVar59 == (u16 *)puVar61;
              }
              uVar55 = ~(-1 << (uVar77 & 0xff));
              uVar79 = video->vram_map_dirty_bitmap_coarse;
              if (!bVar99 || bVar101) {
                puVar61 = (u8 *)0x1;
              }
              if (bVar99 && !bVar101) {
                puVar61 = (u8 *)0x0;
              }
              video->vram_map_dirty_bitmap_fine[4] = video->vram_map_dirty_bitmap_fine[4] | uVar55;
              video->vram_map_dirty_bitmap_coarse = uVar79 | 0x10;
              vram_map = (u8 **)(puVar90 + -0x100000);
              if (((!bVar100 || bVar98) & uVar91 & (uint)(0x13 < uVar77) & (uint)puVar61) == 0) {
                ppuVar54 = video->vram_map + 0x7f;
                puVar61 = video->vram_map_dirty_bit_numbers + 0x7f;
                iVar78 = 0x38;
                puVar59 = puVar51;
                do {
                  uVar23 = *puVar59;
                  ppuVar54 = ppuVar54 + 1;
                  *ppuVar54 = (u8 *)vram_map;
                  *puVar59 = uVar23 | 0x80;
                  puVar61 = puVar61 + 1;
                  *puVar61 = (u8)iVar78;
                  iVar78 = iVar78 + 1;
                  puVar59 = puVar59 + 1;
                } while (uVar77 + 0x38 != iVar78);
              }
              else {
                uVar91 = uVar77;
                if (uVar63 <= uVar77) {
                  uVar91 = uVar63;
                }
                if (uVar91 == 0) {
                  iVar72 = 0x38;
                  iVar78 = 0x80;
                  uVar79 = uVar77;
                }
                else {
                  uVar79 = uVar77 - 1;
                  uVar23 = video->vram_map_allocation_bitmap[0x80];
                  video->vram_map[0x80] = (u8 *)vram_map;
                  video->vram_map_allocation_bitmap[0x80] = uVar23 | 0x80;
                  video->vram_map_dirty_bit_numbers[0x80] = '8';
                  if (uVar91 == 1) {
                    iVar72 = 0x39;
                    iVar78 = 0x81;
                  }
                  else {
                    uVar23 = video->vram_map_allocation_bitmap[0x81];
                    video->vram_map[0x81] = (u8 *)vram_map;
                    uVar79 = uVar77 - 2;
                    video->vram_map_dirty_bit_numbers[0x81] = '9';
                    video->vram_map_allocation_bitmap[0x81] = uVar23 | 0x80;
                    if (uVar91 == 2) {
                      iVar72 = 0x3a;
                      iVar78 = 0x82;
                    }
                    else {
                      uVar79 = uVar77 - 3;
                      uVar23 = *puVar74;
                      video->vram_map[0x82] = (u8 *)vram_map;
                      *puVar74 = uVar23 | 0x80;
                      video->vram_map_dirty_bit_numbers[0x82] = ':';
                      if (uVar91 == 3) {
                        iVar72 = 0x3b;
                        iVar78 = 0x83;
                      }
                      else {
                        uVar23 = video->vram_map_allocation_bitmap[0x83];
                        video->vram_map[0x83] = (u8 *)vram_map;
                        uVar79 = uVar77 - 4;
                        video->vram_map_dirty_bit_numbers[0x83] = ';';
                        video->vram_map_allocation_bitmap[0x83] = uVar23 | 0x80;
                        if (uVar91 == 4) {
                          iVar72 = 0x3c;
                          iVar78 = 0x84;
                        }
                        else {
                          uVar23 = video->vram_map_allocation_bitmap[0x84];
                          video->vram_map[0x84] = (u8 *)vram_map;
                          uVar79 = uVar77 - 5;
                          video->vram_map_allocation_bitmap[0x84] = uVar23 | 0x80;
                          video->vram_map_dirty_bit_numbers[0x84] = '<';
                          if (uVar91 == 5) {
                            iVar72 = 0x3d;
                            iVar78 = 0x85;
                          }
                          else {
                            uVar23 = video->vram_map_allocation_bitmap[0x85];
                            video->vram_map[0x85] = (u8 *)vram_map;
                            uVar79 = uVar77 - 6;
                            video->vram_map_dirty_bit_numbers[0x85] = '=';
                            video->vram_map_allocation_bitmap[0x85] = uVar23 | 0x80;
                            if (uVar91 == 7) {
                              uVar23 = video->vram_map_allocation_bitmap[0x86];
                              uVar79 = uVar77 - 7;
                              iVar72 = 0x3f;
                              iVar78 = 0x87;
                              video->vram_map[0x86] = (u8 *)vram_map;
                              video->vram_map_allocation_bitmap[0x86] = uVar23 | 0x80;
                              video->vram_map_dirty_bit_numbers[0x86] = '>';
                            }
                            else {
                              iVar72 = 0x3e;
                              iVar78 = 0x86;
                            }
                          }
                        }
                      }
                    }
                  }
                  if (uVar77 == uVar91) goto LAB_0803d908;
                }
                uVar69 = ((uVar77 - uVar91) - 0x10 >> 4) + 1;
                iVar71 = uVar69 * 0x10;
                if (0xe < (uVar77 - 1) - uVar91) {
                  auVar3._4_4_ = iVar72;
                  auVar3._0_4_ = iVar72;
                  auVar3._8_8_ = 0;
                  auVar1 = SIMDExpandImmediate(0,0,0x10);
                  auVar2 = SIMDExpandImmediate(0,0,4);
                  auVar120 = SIMDExpandImmediate(0,0,8);
                  auVar121 = SIMDExpandImmediate(0,0,0xc);
                  puVar61 = video->vram_map_dirty_bit_numbers + uVar91 + 0x80;
                  local_108 = 0;
                  auVar42._8_8_ = 0x300000002;
                  auVar42._0_8_ = 0x100000000;
                  auVar119 = VectorAdd(auVar3 & auVar3 << 0x40,auVar42,4);
                  ppuVar54 = video->vram_map + uVar91 + 0x80;
                  puVar59 = video->vram_map_allocation_bitmap + uVar91 + 0x90;
                  puVar60 = video->vram_map_allocation_bitmap + uVar91 + 0x90;
                  do {
                    auVar102 = *(undefined (*) [16])(puVar59 + -0x10);
                    auVar115 = VectorAdd(auVar119,auVar2,4);
                    auVar122 = VectorAdd(auVar119,auVar120,4);
                    auVar109 = *(undefined (*) [16])(puVar59 + -8);
                    *(undefined8 *)ppuVar54 = 0;
                    *(undefined8 *)(ppuVar54 + 2) = 0;
                    auVar103._0_8_ = VectorCopyNarrow(auVar119,4);
                    auVar103._8_8_ = VectorCopyNarrow(auVar115,4);
                    auVar115 = VectorAdd(auVar119,auVar121,4);
                    auVar119 = VectorAdd(auVar119,auVar1,4);
                    local_108 = local_108 + 1;
                    uVar110 = VectorCopyNarrow(auVar122,4);
                    uVar111 = VectorCopyNarrow(auVar115,4);
                    auVar122 = SIMDExpandImmediate(0,9,0x80);
                    uVar112 = VectorCopyNarrow(auVar103,2);
                    auVar32._8_8_ = uVar111;
                    auVar32._0_8_ = uVar110;
                    uVar110 = VectorCopyNarrow(auVar32,2);
                    auVar115 = SIMDExpandImmediate(0,9,0x80);
                    *(undefined8 *)(ppuVar54 + 4) = 0;
                    *(undefined8 *)(ppuVar54 + 6) = 0;
                    *(undefined8 *)(ppuVar54 + 8) = 0;
                    *(undefined8 *)(ppuVar54 + 10) = 0;
                    *(undefined8 *)(ppuVar54 + 0xc) = 0;
                    *(undefined8 *)(ppuVar54 + 0xe) = 0;
                    *(longlong *)(puVar60 + -0x10) = SUB168(auVar102 | auVar122,0);
                    *(longlong *)(puVar60 + -0xc) = SUB168(auVar102 | auVar122,8);
                    *(longlong *)(puVar60 + -8) = SUB168(auVar109 | auVar115,0);
                    *(longlong *)(puVar60 + -4) = SUB168(auVar109 | auVar115,8);
                    *(undefined8 *)puVar61 = uVar112;
                    *(undefined8 *)(puVar61 + 8) = uVar110;
                    puVar61 = puVar61 + 0x10;
                    ppuVar54 = ppuVar54 + 0x10;
                    puVar59 = puVar59 + 0x10;
                    puVar60 = puVar60 + 0x10;
                  } while (local_108 < uVar69);
                  iVar78 = iVar78 + iVar71;
                  uVar79 = uVar79 + uVar69 * -0x10;
                  iVar72 = iVar72 + iVar71;
                  if (uVar77 - uVar91 == iVar71) goto LAB_0803d908;
                }
                uVar47 = (u8)iVar72;
                uVar23 = video->vram_map_allocation_bitmap[iVar78];
                video->vram_map[iVar78] = (u8 *)vram_map;
                video->vram_map_allocation_bitmap[iVar78] = uVar23 | 0x80;
                video->vram_map_dirty_bit_numbers[iVar78] = uVar47;
                if (uVar79 != 1) {
                  video->vram_map[iVar78 + 1] = (u8 *)vram_map;
                  video->vram_map_allocation_bitmap[iVar78 + 1] =
                       video->vram_map_allocation_bitmap[iVar78 + 1] | 0x80;
                  video->vram_map_dirty_bit_numbers[iVar78 + 1] = uVar47 + '\x01';
                  if (uVar79 != 2) {
                    uVar23 = video->vram_map_allocation_bitmap[iVar78 + 2];
                    video->vram_map[iVar78 + 2] = (u8 *)vram_map;
                    video->vram_map_allocation_bitmap[iVar78 + 2] = uVar23 | 0x80;
                    video->vram_map_dirty_bit_numbers[iVar78 + 2] = uVar47 + '\x02';
                    if (uVar79 != 3) {
                      uVar23 = video->vram_map_allocation_bitmap[iVar78 + 3];
                      video->vram_map[iVar78 + 3] = (u8 *)vram_map;
                      video->vram_map_allocation_bitmap[iVar78 + 3] = uVar23 | 0x80;
                      video->vram_map_dirty_bit_numbers[iVar78 + 3] = uVar47 + '\x03';
                      if (uVar79 != 4) {
                        uVar23 = video->vram_map_allocation_bitmap[iVar78 + 4];
                        video->vram_map[iVar78 + 4] = (u8 *)vram_map;
                        video->vram_map_allocation_bitmap[iVar78 + 4] = uVar23 | 0x80;
                        video->vram_map_dirty_bit_numbers[iVar78 + 4] = uVar47 + '\x04';
                        if (uVar79 != 5) {
                          uVar23 = video->vram_map_allocation_bitmap[iVar78 + 5];
                          video->vram_map[iVar78 + 5] = (u8 *)vram_map;
                          video->vram_map_allocation_bitmap[iVar78 + 5] = uVar23 | 0x80;
                          video->vram_map_dirty_bit_numbers[iVar78 + 5] = uVar47 + '\x05';
                          if (uVar79 != 6) {
                            uVar23 = video->vram_map_allocation_bitmap[iVar78 + 6];
                            video->vram_map[iVar78 + 6] = (u8 *)vram_map;
                            video->vram_map_allocation_bitmap[iVar78 + 6] = uVar23 | 0x80;
                            video->vram_map_dirty_bit_numbers[iVar78 + 6] = uVar47 + '\x06';
                            if (uVar79 != 7) {
                              uVar23 = video->vram_map_allocation_bitmap[iVar78 + 7];
                              video->vram_map[iVar78 + 7] = (u8 *)vram_map;
                              video->vram_map_allocation_bitmap[iVar78 + 7] = uVar23 | 0x80;
                              video->vram_map_dirty_bit_numbers[iVar78 + 7] = uVar47 + '\a';
                              if (uVar79 != 8) {
                                uVar23 = video->vram_map_allocation_bitmap[iVar78 + 8];
                                video->vram_map[iVar78 + 8] = (u8 *)vram_map;
                                video->vram_map_allocation_bitmap[iVar78 + 8] = uVar23 | 0x80;
                                video->vram_map_dirty_bit_numbers[iVar78 + 8] = uVar47 + '\b';
                                if (uVar79 != 9) {
                                  uVar23 = video->vram_map_allocation_bitmap[iVar78 + 9];
                                  video->vram_map[iVar78 + 9] = (u8 *)vram_map;
                                  video->vram_map_allocation_bitmap[iVar78 + 9] = uVar23 | 0x80;
                                  video->vram_map_dirty_bit_numbers[iVar78 + 9] = uVar47 + '\t';
                                  if (uVar79 != 10) {
                                    uVar23 = video->vram_map_allocation_bitmap[iVar78 + 10];
                                    video->vram_map[iVar78 + 10] = (u8 *)vram_map;
                                    video->vram_map_allocation_bitmap[iVar78 + 10] = uVar23 | 0x80;
                                    video->vram_map_dirty_bit_numbers[iVar78 + 10] = uVar47 + '\n';
                                    if (uVar79 != 0xb) {
                                      uVar23 = video->vram_map_allocation_bitmap[iVar78 + 0xb];
                                      video->vram_map[iVar78 + 0xb] = (u8 *)vram_map;
                                      video->vram_map_allocation_bitmap[iVar78 + 0xb] =
                                           uVar23 | 0x80;
                                      video->vram_map_dirty_bit_numbers[iVar78 + 0xb] =
                                           uVar47 + '\v';
                                      if (uVar79 != 0xc) {
                                        uVar23 = video->vram_map_allocation_bitmap[iVar78 + 0xc];
                                        video->vram_map[iVar78 + 0xc] = (u8 *)vram_map;
                                        video->vram_map_allocation_bitmap[iVar78 + 0xc] =
                                             uVar23 | 0x80;
                                        video->vram_map_dirty_bit_numbers[iVar78 + 0xc] =
                                             uVar47 + '\f';
                                        if (uVar79 != 0xd) {
                                          video->vram_map[iVar78 + 0xd] = (u8 *)vram_map;
                                          video->vram_map_allocation_bitmap[iVar78 + 0xd] =
                                               video->vram_map_allocation_bitmap[iVar78 + 0xd] |
                                               0x80;
                                          video->vram_map_dirty_bit_numbers[iVar78 + 0xd] =
                                               uVar47 + '\r';
                                          if (uVar79 != 0xe) {
                                            video->vram_map[iVar78 + 0xe] = (u8 *)vram_map;
                                            video->vram_map_allocation_bitmap[iVar78 + 0xe] =
                                                 video->vram_map_allocation_bitmap[iVar78 + 0xe] |
                                                 0x80;
                                            video->vram_map_dirty_bit_numbers[iVar78 + 0xe] =
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
LAB_0803d908:
              unmap_memory_page_region_direct
                        (video->memory->memory_interface_arm9,0x6210000,uVar77 << 0xe);
              ppuVar54 = video->vram_map + 0x84;
              puVar61 = video->vram_map_dirty_bit_numbers + uVar77 + 0x84;
              uVar79 = video->vram_map_dirty_bitmap_fine[4];
              ppuVar64 = video->vram_map + uVar77 + 0x84;
              puVar59 = video->vram_map_allocation_bitmap + uVar77 + 0x84;
              puVar84 = video->vram_map_dirty_bit_numbers + 0x84;
              uVar91 = (uint)(puVar61 <= ppuVar54);
              bVar100 = ppuVar54 <= puVar59;
              bVar98 = (u8 **)puVar59 == ppuVar54;
              if (bVar100 && !bVar98) {
                bVar100 = puVar52 <= ppuVar64;
                bVar98 = ppuVar64 == (u8 **)puVar52;
              }
              if (ppuVar64 <= puVar84) {
                uVar91 = 1;
              }
              bVar99 = puVar52 <= puVar61;
              bVar101 = (u16 *)puVar61 == puVar52;
              if (bVar99 && !bVar101) {
                bVar99 = puVar84 <= puVar59;
                bVar101 = puVar59 == (u16 *)puVar84;
              }
              video->vram_map_dirty_bitmap_coarse = video->vram_map_dirty_bitmap_coarse | 0x10;
              video->vram_map_dirty_bitmap_fine[4] = uVar79 | uVar55 << 4;
              puVar90 = puVar90 + -0x108000;
              if (((uint)(0x13 < uVar77) & uVar91 & (!bVar100 || bVar98) &
                  (uint)(!bVar99 || bVar101)) == 0) {
                puVar61 = video->vram_map_dirty_bit_numbers + 0x83;
                ppuVar54 = video->vram_map + 0x83;
                iVar78 = 0x38;
                puVar59 = puVar52;
                do {
                  uVar23 = *puVar59;
                  ppuVar54 = ppuVar54 + 1;
                  *ppuVar54 = (u8 *)puVar90;
                  *puVar59 = uVar23 | 0x80;
                  puVar61 = puVar61 + 1;
                  *puVar61 = (u8)iVar78;
                  iVar78 = iVar78 + 1;
                  puVar59 = puVar59 + 1;
                } while (iVar78 != uVar77 + 0x38);
                uVar91 = 0x80;
                uVar79 = 10;
                goto LAB_0803d138;
              }
              uVar91 = uVar77;
              if (uVar67 <= uVar77) {
                uVar91 = uVar67;
              }
              if (uVar91 == 0) {
                iVar78 = 0x38;
                iVar72 = 0x84;
                uVar55 = uVar77;
LAB_0803db00:
                uVar79 = ((uVar77 - uVar91) - 0x10 >> 4) + 1;
                iVar71 = uVar79 * 0x10;
                if (0xe < (uVar77 - 1) - uVar91) {
                  auVar4._4_4_ = iVar78;
                  auVar4._0_4_ = iVar78;
                  auVar4._8_8_ = 0;
                  auVar1 = SIMDExpandImmediate(0,0,0x10);
                  auVar2 = SIMDExpandImmediate(0,0,4);
                  auVar120 = SIMDExpandImmediate(0,0,8);
                  auVar121 = SIMDExpandImmediate(0,0,0xc);
                  puVar61 = video->vram_map_dirty_bit_numbers + uVar91 + 0x84;
                  local_140 = 0;
                  auVar43._8_8_ = 0x300000002;
                  auVar43._0_8_ = 0x100000000;
                  auVar119 = VectorAdd(auVar4 & auVar4 << 0x40,auVar43,4);
                  puVar59 = video->vram_map_allocation_bitmap + uVar91 + 0x94;
                  ppuVar54 = video->vram_map + uVar91 + 0x84;
                  puVar60 = video->vram_map_allocation_bitmap + uVar91 + 0x94;
                  do {
                    auVar102 = *(undefined (*) [16])(puVar60 + -0x10);
                    auVar115 = VectorAdd(auVar119,auVar2,4);
                    auVar122 = VectorAdd(auVar119,auVar120,4);
                    auVar109 = *(undefined (*) [16])(puVar60 + -8);
                    *(undefined8 *)ppuVar54 = 0;
                    *(undefined8 *)(ppuVar54 + 2) = 0;
                    auVar104._0_8_ = VectorCopyNarrow(auVar119,4);
                    auVar104._8_8_ = VectorCopyNarrow(auVar115,4);
                    auVar115 = VectorAdd(auVar119,auVar121,4);
                    auVar119 = VectorAdd(auVar119,auVar1,4);
                    local_140 = local_140 + 1;
                    uVar110 = VectorCopyNarrow(auVar122,4);
                    uVar111 = VectorCopyNarrow(auVar115,4);
                    auVar122 = SIMDExpandImmediate(0,9,0x80);
                    uVar112 = VectorCopyNarrow(auVar104,2);
                    auVar33._8_8_ = uVar111;
                    auVar33._0_8_ = uVar110;
                    uVar110 = VectorCopyNarrow(auVar33,2);
                    auVar115 = SIMDExpandImmediate(0,9,0x80);
                    *(undefined8 *)(ppuVar54 + 4) = 0;
                    *(undefined8 *)(ppuVar54 + 6) = 0;
                    *(undefined8 *)(ppuVar54 + 8) = 0;
                    *(undefined8 *)(ppuVar54 + 10) = 0;
                    *(undefined8 *)(ppuVar54 + 0xc) = 0;
                    *(undefined8 *)(ppuVar54 + 0xe) = 0;
                    *(longlong *)(puVar59 + -0x10) = SUB168(auVar102 | auVar122,0);
                    *(longlong *)(puVar59 + -0xc) = SUB168(auVar102 | auVar122,8);
                    *(longlong *)(puVar59 + -8) = SUB168(auVar109 | auVar115,0);
                    *(longlong *)(puVar59 + -4) = SUB168(auVar109 | auVar115,8);
                    *(undefined8 *)puVar61 = uVar112;
                    *(undefined8 *)(puVar61 + 8) = uVar110;
                    puVar61 = puVar61 + 0x10;
                    puVar59 = puVar59 + 0x10;
                    ppuVar54 = ppuVar54 + 0x10;
                    puVar60 = puVar60 + 0x10;
                  } while (local_140 < uVar79);
                  uVar55 = uVar55 + uVar79 * -0x10;
                  iVar78 = iVar78 + iVar71;
                  iVar72 = iVar72 + iVar71;
                  if (uVar77 - uVar91 == iVar71) goto LAB_0803de84;
                }
                uVar47 = (u8)iVar78;
                uVar23 = video->vram_map_allocation_bitmap[iVar72];
                video->vram_map[iVar72] = (u8 *)puVar90;
                video->vram_map_allocation_bitmap[iVar72] = uVar23 | 0x80;
                video->vram_map_dirty_bit_numbers[iVar72] = uVar47;
                if (uVar55 != 1) {
                  video->vram_map[iVar72 + 1] = (u8 *)puVar90;
                  video->vram_map_allocation_bitmap[iVar72 + 1] =
                       video->vram_map_allocation_bitmap[iVar72 + 1] | 0x80;
                  video->vram_map_dirty_bit_numbers[iVar72 + 1] = uVar47 + '\x01';
                  if (uVar55 != 2) {
                    video->vram_map[iVar72 + 2] = (u8 *)puVar90;
                    video->vram_map_allocation_bitmap[iVar72 + 2] =
                         video->vram_map_allocation_bitmap[iVar72 + 2] | 0x80;
                    video->vram_map_dirty_bit_numbers[iVar72 + 2] = uVar47 + '\x02';
                    if (uVar55 != 3) {
                      video->vram_map[iVar72 + 3] = (u8 *)puVar90;
                      video->vram_map_allocation_bitmap[iVar72 + 3] =
                           video->vram_map_allocation_bitmap[iVar72 + 3] | 0x80;
                      video->vram_map_dirty_bit_numbers[iVar72 + 3] = uVar47 + '\x03';
                      if (uVar55 != 4) {
                        video->vram_map[iVar72 + 4] = (u8 *)puVar90;
                        video->vram_map_allocation_bitmap[iVar72 + 4] =
                             video->vram_map_allocation_bitmap[iVar72 + 4] | 0x80;
                        video->vram_map_dirty_bit_numbers[iVar72 + 4] = uVar47 + '\x04';
                        if (uVar55 != 5) {
                          video->vram_map[iVar72 + 5] = (u8 *)puVar90;
                          video->vram_map_allocation_bitmap[iVar72 + 5] =
                               video->vram_map_allocation_bitmap[iVar72 + 5] | 0x80;
                          video->vram_map_dirty_bit_numbers[iVar72 + 5] = uVar47 + '\x05';
                          if (uVar55 != 6) {
                            video->vram_map[iVar72 + 6] = (u8 *)puVar90;
                            video->vram_map_allocation_bitmap[iVar72 + 6] =
                                 video->vram_map_allocation_bitmap[iVar72 + 6] | 0x80;
                            video->vram_map_dirty_bit_numbers[iVar72 + 6] = uVar47 + '\x06';
                            if (uVar55 != 7) {
                              video->vram_map[iVar72 + 7] = (u8 *)puVar90;
                              video->vram_map_allocation_bitmap[iVar72 + 7] =
                                   video->vram_map_allocation_bitmap[iVar72 + 7] | 0x80;
                              video->vram_map_dirty_bit_numbers[iVar72 + 7] = uVar47 + '\a';
                              if (uVar55 != 8) {
                                video->vram_map[iVar72 + 8] = (u8 *)puVar90;
                                video->vram_map_allocation_bitmap[iVar72 + 8] =
                                     video->vram_map_allocation_bitmap[iVar72 + 8] | 0x80;
                                video->vram_map_dirty_bit_numbers[iVar72 + 8] = uVar47 + '\b';
                                if (uVar55 != 9) {
                                  video->vram_map[iVar72 + 9] = (u8 *)puVar90;
                                  video->vram_map_allocation_bitmap[iVar72 + 9] =
                                       video->vram_map_allocation_bitmap[iVar72 + 9] | 0x80;
                                  video->vram_map_dirty_bit_numbers[iVar72 + 9] = uVar47 + '\t';
                                  if (uVar55 != 10) {
                                    video->vram_map[iVar72 + 10] = (u8 *)puVar90;
                                    video->vram_map_allocation_bitmap[iVar72 + 10] =
                                         video->vram_map_allocation_bitmap[iVar72 + 10] | 0x80;
                                    video->vram_map_dirty_bit_numbers[iVar72 + 10] = uVar47 + '\n';
                                    if (uVar55 != 0xb) {
                                      video->vram_map[iVar72 + 0xb] = (u8 *)puVar90;
                                      video->vram_map_allocation_bitmap[iVar72 + 0xb] =
                                           video->vram_map_allocation_bitmap[iVar72 + 0xb] | 0x80;
                                      video->vram_map_dirty_bit_numbers[iVar72 + 0xb] =
                                           uVar47 + '\v';
                                      if (uVar55 != 0xc) {
                                        video->vram_map[iVar72 + 0xc] = (u8 *)puVar90;
                                        video->vram_map_allocation_bitmap[iVar72 + 0xc] =
                                             video->vram_map_allocation_bitmap[iVar72 + 0xc] | 0x80;
                                        video->vram_map_dirty_bit_numbers[iVar72 + 0xc] =
                                             uVar47 + '\f';
                                        if (uVar55 != 0xd) {
                                          video->vram_map[iVar72 + 0xd] = (u8 *)puVar90;
                                          video->vram_map_allocation_bitmap[iVar72 + 0xd] =
                                               video->vram_map_allocation_bitmap[iVar72 + 0xd] |
                                               0x80;
                                          video->vram_map_dirty_bit_numbers[iVar72 + 0xd] =
                                               uVar47 + '\r';
                                          if (uVar55 != 0xe) {
                                            video->vram_map[iVar72 + 0xe] = (u8 *)puVar90;
                                            video->vram_map_allocation_bitmap[iVar72 + 0xe] =
                                                 video->vram_map_allocation_bitmap[iVar72 + 0xe] |
                                                 0x80;
                                            video->vram_map_dirty_bit_numbers[iVar72 + 0xe] =
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
                uVar55 = uVar77 - 1;
                video->vram_map[0x84] = (u8 *)puVar90;
                video->vram_map_allocation_bitmap[0x84] = uVar23 | 0x80;
                video->vram_map_dirty_bit_numbers[0x84] = '8';
                if (uVar91 == 1) {
                  iVar78 = 0x39;
                  iVar72 = 0x85;
                }
                else {
                  uVar23 = video->vram_map_allocation_bitmap[0x85];
                  video->vram_map[0x85] = (u8 *)puVar90;
                  uVar55 = uVar77 - 2;
                  video->vram_map_dirty_bit_numbers[0x85] = '9';
                  video->vram_map_allocation_bitmap[0x85] = uVar23 | 0x80;
                  if (uVar91 == 2) {
                    iVar78 = 0x3a;
                    iVar72 = 0x86;
                  }
                  else {
                    uVar23 = video->vram_map_allocation_bitmap[0x86];
                    video->vram_map[0x86] = (u8 *)puVar90;
                    uVar55 = uVar77 - 3;
                    video->vram_map_allocation_bitmap[0x86] = uVar23 | 0x80;
                    video->vram_map_dirty_bit_numbers[0x86] = ':';
                    if (uVar91 == 3) {
                      iVar78 = 0x3b;
                      iVar72 = 0x87;
                    }
                    else {
                      uVar23 = video->vram_map_allocation_bitmap[0x87];
                      video->vram_map[0x87] = (u8 *)puVar90;
                      uVar55 = uVar77 - 4;
                      video->vram_map_dirty_bit_numbers[0x87] = ';';
                      video->vram_map_allocation_bitmap[0x87] = uVar23 | 0x80;
                      if (uVar91 == 4) {
                        iVar78 = 0x3c;
                        iVar72 = 0x88;
                      }
                      else {
                        uVar23 = video->vram_map_allocation_bitmap[0x88];
                        video->vram_map[0x88] = (u8 *)puVar90;
                        uVar55 = uVar77 - 5;
                        video->vram_map_allocation_bitmap[0x88] = uVar23 | 0x80;
                        video->vram_map_dirty_bit_numbers[0x88] = '<';
                        if (uVar91 == 5) {
                          iVar78 = 0x3d;
                          iVar72 = 0x89;
                        }
                        else {
                          uVar23 = video->vram_map_allocation_bitmap[0x89];
                          video->vram_map[0x89] = (u8 *)puVar90;
                          uVar55 = uVar77 - 6;
                          video->vram_map_dirty_bit_numbers[0x89] = '=';
                          video->vram_map_allocation_bitmap[0x89] = uVar23 | 0x80;
                          if (uVar91 == 7) {
                            uVar23 = video->vram_map_allocation_bitmap[0x8a];
                            uVar55 = uVar77 - 7;
                            iVar78 = 0x3f;
                            iVar72 = 0x8b;
                            video->vram_map[0x8a] = (u8 *)puVar90;
                            video->vram_map_allocation_bitmap[0x8a] = uVar23 | 0x80;
                            video->vram_map_dirty_bit_numbers[0x8a] = '>';
                          }
                          else {
                            iVar78 = 0x3e;
                            iVar72 = 0x8a;
                          }
                        }
                      }
                    }
                  }
                }
                if (uVar77 != uVar91) goto LAB_0803db00;
              }
LAB_0803de84:
              uVar91 = 0x80;
              uVar79 = 10;
              goto LAB_0803d138;
            case 8:
              uVar77 = uVar77 >> 4;
              uVar88 = uVar77 << 0xe;
              ppuVar54 = video->vram_map + 0x82;
              uVar91 = (uint)(0x13 < uVar77);
              unmap_memory_page_region_direct(pmVar53->memory_interface_arm9,0x6208000,uVar88);
              ppuVar64 = video->vram_map + uVar77 + 0x82;
              puVar59 = video->vram_map_allocation_bitmap + uVar77 + 0x82;
              puVar61 = video->vram_map_dirty_bit_numbers + uVar77 + 0x82;
              bVar100 = ppuVar54 <= puVar59;
              bVar98 = (u8 **)puVar59 == ppuVar54;
              if (bVar100 && !bVar98) {
                bVar100 = puVar74 <= ppuVar64;
                bVar98 = ppuVar64 == (u8 **)puVar74;
              }
              puVar84 = video->vram_map_dirty_bit_numbers + 0x82;
              uVar79 = video->vram_map_dirty_bitmap_coarse;
              uVar55 = (uint)(puVar61 <= ppuVar54);
              if (ppuVar64 <= puVar84) {
                uVar55 = 1;
              }
              uVar69 = ~(-1 << (uVar77 & 0xff));
              bVar99 = puVar74 <= puVar61;
              bVar101 = (u16 *)puVar61 == puVar74;
              if (bVar99 && !bVar101) {
                bVar99 = puVar84 <= puVar59;
                bVar101 = puVar59 == (u16 *)puVar84;
              }
              video->vram_map_dirty_bitmap_fine[4] =
                   video->vram_map_dirty_bitmap_fine[4] | uVar69 << 2;
              video->vram_map_dirty_bitmap_coarse = uVar79 | 0x10;
              vram_map_2 = (u8 **)(puVar90 + -0x104000);
              if ((uVar55 & (!bVar100 || bVar98) & uVar91 & (uint)(!bVar99 || bVar101)) == 0) {
                ppuVar64 = video->vram_map + 0x81;
                puVar61 = video->vram_map_dirty_bit_numbers + 0x81;
                iVar78 = 0x40;
                puVar59 = puVar74;
                do {
                  uVar23 = *puVar59;
                  ppuVar64 = ppuVar64 + 1;
                  *ppuVar64 = (u8 *)vram_map_2;
                  *puVar59 = uVar23 | 0x100;
                  puVar61 = puVar61 + 1;
                  *puVar61 = (u8)iVar78;
                  iVar78 = iVar78 + 1;
                  puVar59 = puVar59 + 1;
                } while (iVar78 != uVar77 + 0x40);
              }
              else {
                uVar55 = uVar77;
                if (uVar76 <= uVar77) {
                  uVar55 = uVar76;
                }
                if (uVar55 == 0) {
                  iVar72 = 0x40;
                  iVar78 = 0x82;
                  uVar79 = uVar77;
                }
                else {
                  uVar79 = uVar77 - 1;
                  uVar23 = *puVar74;
                  video->vram_map[0x82] = (u8 *)vram_map_2;
                  *puVar74 = uVar23 | 0x100;
                  video->vram_map_dirty_bit_numbers[0x82] = '@';
                  if (uVar55 == 1) {
                    iVar72 = 0x41;
                    iVar78 = 0x83;
                  }
                  else {
                    uVar23 = video->vram_map_allocation_bitmap[0x83];
                    video->vram_map[0x83] = (u8 *)vram_map_2;
                    uVar79 = uVar77 - 2;
                    video->vram_map_dirty_bit_numbers[0x83] = 'A';
                    video->vram_map_allocation_bitmap[0x83] = uVar23 | 0x100;
                    if (uVar55 == 2) {
                      iVar72 = 0x42;
                      iVar78 = 0x84;
                    }
                    else {
                      uVar23 = video->vram_map_allocation_bitmap[0x84];
                      video->vram_map[0x84] = (u8 *)vram_map_2;
                      uVar79 = uVar77 - 3;
                      video->vram_map_allocation_bitmap[0x84] = uVar23 | 0x100;
                      video->vram_map_dirty_bit_numbers[0x84] = 'B';
                      if (uVar55 == 3) {
                        iVar72 = 0x43;
                        iVar78 = 0x85;
                      }
                      else {
                        uVar23 = video->vram_map_allocation_bitmap[0x85];
                        video->vram_map[0x85] = (u8 *)vram_map_2;
                        uVar79 = uVar77 - 4;
                        video->vram_map_dirty_bit_numbers[0x85] = 'C';
                        video->vram_map_allocation_bitmap[0x85] = uVar23 | 0x100;
                        if (uVar55 == 4) {
                          iVar72 = 0x44;
                          iVar78 = 0x86;
                        }
                        else {
                          uVar23 = video->vram_map_allocation_bitmap[0x86];
                          video->vram_map[0x86] = (u8 *)vram_map_2;
                          uVar79 = uVar77 - 5;
                          video->vram_map_allocation_bitmap[0x86] = uVar23 | 0x100;
                          video->vram_map_dirty_bit_numbers[0x86] = 'D';
                          if (uVar55 == 5) {
                            iVar72 = 0x45;
                            iVar78 = 0x87;
                          }
                          else {
                            uVar23 = video->vram_map_allocation_bitmap[0x87];
                            video->vram_map[0x87] = (u8 *)vram_map_2;
                            uVar79 = uVar77 - 6;
                            video->vram_map_dirty_bit_numbers[0x87] = 'E';
                            video->vram_map_allocation_bitmap[0x87] = uVar23 | 0x100;
                            if (uVar55 == 7) {
                              uVar79 = uVar77 - 7;
                              uVar23 = video->vram_map_allocation_bitmap[0x88];
                              iVar72 = 0x47;
                              iVar78 = 0x89;
                              video->vram_map[0x88] = (u8 *)vram_map_2;
                              video->vram_map_allocation_bitmap[0x88] = uVar23 | 0x100;
                              video->vram_map_dirty_bit_numbers[0x88] = 'F';
                            }
                            else {
                              iVar72 = 0x46;
                              iVar78 = 0x88;
                            }
                          }
                        }
                      }
                    }
                  }
                  if (uVar77 == uVar55) goto LAB_0803e508;
                }
                uVar65 = ((uVar77 - uVar55) - 0x10 >> 4) + 1;
                iVar71 = uVar65 * 0x10;
                if (0xe < (uVar77 - 1) - uVar55) {
                  auVar5._4_4_ = iVar72;
                  auVar5._0_4_ = iVar72;
                  auVar5._8_8_ = 0;
                  auVar1 = SIMDExpandImmediate(0,0,0x10);
                  auVar2 = SIMDExpandImmediate(0,0,4);
                  auVar120 = SIMDExpandImmediate(0,0,8);
                  local_d0 = 0;
                  auVar121 = SIMDExpandImmediate(0,0,0xc);
                  puVar61 = video->vram_map_dirty_bit_numbers + uVar55 + 0x82;
                  auVar38._8_8_ = 0x300000002;
                  auVar38._0_8_ = 0x100000000;
                  auVar119 = VectorAdd(auVar5 & auVar5 << 0x40,auVar38,4);
                  ppuVar64 = video->vram_map + uVar55 + 0x82;
                  puVar59 = video->vram_map_allocation_bitmap + uVar55 + 0x92;
                  puVar60 = video->vram_map_allocation_bitmap + uVar55 + 0x92;
                  do {
                    auVar102 = *(undefined (*) [16])(puVar60 + -0x10);
                    auVar115 = VectorAdd(auVar119,auVar2,4);
                    auVar122 = VectorAdd(auVar119,auVar120,4);
                    auVar109 = *(undefined (*) [16])(puVar60 + -8);
                    *(undefined8 *)ppuVar64 = 0;
                    *(undefined8 *)(ppuVar64 + 2) = 0;
                    auVar105._0_8_ = VectorCopyNarrow(auVar119,4);
                    auVar105._8_8_ = VectorCopyNarrow(auVar115,4);
                    auVar115 = VectorAdd(auVar119,auVar121,4);
                    auVar119 = VectorAdd(auVar119,auVar1,4);
                    local_d0 = local_d0 + 1;
                    uVar110 = VectorCopyNarrow(auVar122,4);
                    uVar111 = VectorCopyNarrow(auVar115,4);
                    auVar122 = SIMDExpandImmediate(0,0xb,1);
                    uVar112 = VectorCopyNarrow(auVar105,2);
                    auVar28._8_8_ = uVar111;
                    auVar28._0_8_ = uVar110;
                    uVar110 = VectorCopyNarrow(auVar28,2);
                    auVar115 = SIMDExpandImmediate(0,0xb,1);
                    *(undefined8 *)(ppuVar64 + 4) = 0;
                    *(undefined8 *)(ppuVar64 + 6) = 0;
                    *(undefined8 *)(ppuVar64 + 8) = 0;
                    *(undefined8 *)(ppuVar64 + 10) = 0;
                    *(undefined8 *)(ppuVar64 + 0xc) = 0;
                    *(undefined8 *)(ppuVar64 + 0xe) = 0;
                    *(longlong *)(puVar59 + -0x10) = SUB168(auVar102 | auVar122,0);
                    *(longlong *)(puVar59 + -0xc) = SUB168(auVar102 | auVar122,8);
                    *(longlong *)(puVar59 + -8) = SUB168(auVar109 | auVar115,0);
                    *(longlong *)(puVar59 + -4) = SUB168(auVar109 | auVar115,8);
                    *(undefined8 *)puVar61 = uVar112;
                    *(undefined8 *)(puVar61 + 8) = uVar110;
                    puVar61 = puVar61 + 0x10;
                    ppuVar64 = ppuVar64 + 0x10;
                    puVar59 = puVar59 + 0x10;
                    puVar60 = puVar60 + 0x10;
                  } while (local_d0 < uVar65);
                  iVar78 = iVar78 + iVar71;
                  uVar79 = uVar79 + uVar65 * -0x10;
                  iVar72 = iVar72 + iVar71;
                  if (uVar77 - uVar55 == iVar71) goto LAB_0803e508;
                }
                uVar47 = (u8)iVar72;
                uVar23 = video->vram_map_allocation_bitmap[iVar78];
                video->vram_map[iVar78] = (u8 *)vram_map_2;
                video->vram_map_allocation_bitmap[iVar78] = uVar23 | 0x100;
                video->vram_map_dirty_bit_numbers[iVar78] = uVar47;
                if (uVar79 != 1) {
                  video->vram_map[iVar78 + 1] = (u8 *)vram_map_2;
                  video->vram_map_allocation_bitmap[iVar78 + 1] =
                       video->vram_map_allocation_bitmap[iVar78 + 1] | 0x100;
                  video->vram_map_dirty_bit_numbers[iVar78 + 1] = uVar47 + '\x01';
                  if (uVar79 != 2) {
                    uVar23 = video->vram_map_allocation_bitmap[iVar78 + 2];
                    video->vram_map[iVar78 + 2] = (u8 *)vram_map_2;
                    video->vram_map_allocation_bitmap[iVar78 + 2] = uVar23 | 0x100;
                    video->vram_map_dirty_bit_numbers[iVar78 + 2] = uVar47 + '\x02';
                    if (uVar79 != 3) {
                      uVar23 = video->vram_map_allocation_bitmap[iVar78 + 3];
                      video->vram_map[iVar78 + 3] = (u8 *)vram_map_2;
                      video->vram_map_allocation_bitmap[iVar78 + 3] = uVar23 | 0x100;
                      video->vram_map_dirty_bit_numbers[iVar78 + 3] = uVar47 + '\x03';
                      if (uVar79 != 4) {
                        uVar23 = video->vram_map_allocation_bitmap[iVar78 + 4];
                        video->vram_map[iVar78 + 4] = (u8 *)vram_map_2;
                        video->vram_map_allocation_bitmap[iVar78 + 4] = uVar23 | 0x100;
                        video->vram_map_dirty_bit_numbers[iVar78 + 4] = uVar47 + '\x04';
                        if (uVar79 != 5) {
                          uVar23 = video->vram_map_allocation_bitmap[iVar78 + 5];
                          video->vram_map[iVar78 + 5] = (u8 *)vram_map_2;
                          video->vram_map_allocation_bitmap[iVar78 + 5] = uVar23 | 0x100;
                          video->vram_map_dirty_bit_numbers[iVar78 + 5] = uVar47 + '\x05';
                          if (uVar79 != 6) {
                            uVar23 = video->vram_map_allocation_bitmap[iVar78 + 6];
                            video->vram_map[iVar78 + 6] = (u8 *)vram_map_2;
                            video->vram_map_allocation_bitmap[iVar78 + 6] = uVar23 | 0x100;
                            video->vram_map_dirty_bit_numbers[iVar78 + 6] = uVar47 + '\x06';
                            if (uVar79 != 7) {
                              uVar23 = video->vram_map_allocation_bitmap[iVar78 + 7];
                              video->vram_map[iVar78 + 7] = (u8 *)vram_map_2;
                              video->vram_map_allocation_bitmap[iVar78 + 7] = uVar23 | 0x100;
                              video->vram_map_dirty_bit_numbers[iVar78 + 7] = uVar47 + '\a';
                              if (uVar79 != 8) {
                                uVar23 = video->vram_map_allocation_bitmap[iVar78 + 8];
                                video->vram_map[iVar78 + 8] = (u8 *)vram_map_2;
                                video->vram_map_allocation_bitmap[iVar78 + 8] = uVar23 | 0x100;
                                video->vram_map_dirty_bit_numbers[iVar78 + 8] = uVar47 + '\b';
                                if (uVar79 != 9) {
                                  uVar23 = video->vram_map_allocation_bitmap[iVar78 + 9];
                                  video->vram_map[iVar78 + 9] = (u8 *)vram_map_2;
                                  video->vram_map_allocation_bitmap[iVar78 + 9] = uVar23 | 0x100;
                                  video->vram_map_dirty_bit_numbers[iVar78 + 9] = uVar47 + '\t';
                                  if (uVar79 != 10) {
                                    uVar23 = video->vram_map_allocation_bitmap[iVar78 + 10];
                                    video->vram_map[iVar78 + 10] = (u8 *)vram_map_2;
                                    video->vram_map_allocation_bitmap[iVar78 + 10] = uVar23 | 0x100;
                                    video->vram_map_dirty_bit_numbers[iVar78 + 10] = uVar47 + '\n';
                                    if (uVar79 != 0xb) {
                                      uVar23 = video->vram_map_allocation_bitmap[iVar78 + 0xb];
                                      video->vram_map[iVar78 + 0xb] = (u8 *)vram_map_2;
                                      video->vram_map_allocation_bitmap[iVar78 + 0xb] =
                                           uVar23 | 0x100;
                                      video->vram_map_dirty_bit_numbers[iVar78 + 0xb] =
                                           uVar47 + '\v';
                                      if (uVar79 != 0xc) {
                                        uVar23 = video->vram_map_allocation_bitmap[iVar78 + 0xc];
                                        video->vram_map[iVar78 + 0xc] = (u8 *)vram_map_2;
                                        video->vram_map_allocation_bitmap[iVar78 + 0xc] =
                                             uVar23 | 0x100;
                                        video->vram_map_dirty_bit_numbers[iVar78 + 0xc] =
                                             uVar47 + '\f';
                                        if (uVar79 != 0xd) {
                                          video->vram_map[iVar78 + 0xd] = (u8 *)vram_map_2;
                                          video->vram_map_allocation_bitmap[iVar78 + 0xd] =
                                               video->vram_map_allocation_bitmap[iVar78 + 0xd] |
                                               0x100;
                                          video->vram_map_dirty_bit_numbers[iVar78 + 0xd] =
                                               uVar47 + '\r';
                                          if (uVar79 != 0xe) {
                                            video->vram_map[iVar78 + 0xe] = (u8 *)vram_map_2;
                                            video->vram_map_allocation_bitmap[iVar78 + 0xe] =
                                                 video->vram_map_allocation_bitmap[iVar78 + 0xe] |
                                                 0x100;
                                            video->vram_map_dirty_bit_numbers[iVar78 + 0xe] =
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
LAB_0803e508:
              unmap_memory_page_region_direct(video->memory->memory_interface_arm9,0x620c000,uVar88)
              ;
              ppuVar95 = video->vram_map + 0x83;
              puVar61 = video->vram_map_dirty_bit_numbers + 0x83;
              puVar96 = video->vram_map_dirty_bit_numbers + uVar77 + 0x83;
              ppuVar64 = video->vram_map + 0x3da;
              if (ppuVar95 < puVar96) {
                ppuVar64 = (u8 **)0x0;
              }
              uVar55 = video->vram_map_dirty_bitmap_fine[4];
              if (ppuVar95 >= puVar96) {
                ppuVar64 = (u8 **)0x1;
              }
              ppuVar68 = video->vram_map + uVar77 + 0x83;
              if (ppuVar68 <= puVar61) {
                ppuVar64 = (u8 **)((uint)ppuVar64 | 1);
              }
              puVar59 = video->vram_map_allocation_bitmap + uVar77 + 0x83;
              bVar100 = ppuVar95 <= puVar59;
              bVar98 = (u8 **)puVar59 == ppuVar95;
              if (bVar100 && !bVar98) {
                bVar100 = puVar75 <= ppuVar68;
                bVar98 = ppuVar68 == (u8 **)puVar75;
              }
              video->vram_map_dirty_bitmap_coarse = video->vram_map_dirty_bitmap_coarse | 0x10;
              bVar99 = puVar75 <= puVar96;
              bVar101 = (u16 *)puVar96 == puVar75;
              if (bVar99 && !bVar101) {
                bVar99 = puVar61 <= puVar59;
                bVar101 = puVar59 == (u16 *)puVar61;
              }
              puVar59 = puVar90 + -0x106000;
              video->vram_map_dirty_bitmap_fine[4] = uVar55 | uVar69 << 3;
              if (((uint)(!bVar100 || bVar98) & (uint)ppuVar64 & uVar91 & (uint)(!bVar99 || bVar101)
                  ) == 0) {
                iVar78 = 0x40;
                puVar60 = puVar75;
                do {
                  uVar23 = *puVar60;
                  ppuVar54 = ppuVar54 + 1;
                  *ppuVar54 = (u8 *)puVar59;
                  *puVar60 = uVar23 | 0x100;
                  puVar84 = puVar84 + 1;
                  *puVar84 = (u8)iVar78;
                  iVar78 = iVar78 + 1;
                  puVar60 = puVar60 + 1;
                } while (iVar78 != uVar77 + 0x40);
              }
              else {
                uVar55 = uVar77;
                if (uVar94 <= uVar77) {
                  uVar55 = uVar94;
                }
                if (uVar55 == 0) {
                  iVar72 = 0x40;
                  iVar78 = 0x83;
                  uVar79 = uVar77;
                }
                else {
                  uVar23 = video->vram_map_allocation_bitmap[0x83];
                  uVar79 = uVar77 - 1;
                  video->vram_map[0x83] = (u8 *)puVar59;
                  video->vram_map_dirty_bit_numbers[0x83] = '@';
                  video->vram_map_allocation_bitmap[0x83] = uVar23 | 0x100;
                  if (uVar55 == 1) {
                    iVar72 = 0x41;
                    iVar78 = 0x84;
                  }
                  else {
                    uVar23 = video->vram_map_allocation_bitmap[0x84];
                    video->vram_map[0x84] = (u8 *)puVar59;
                    uVar79 = uVar77 - 2;
                    video->vram_map_allocation_bitmap[0x84] = uVar23 | 0x100;
                    video->vram_map_dirty_bit_numbers[0x84] = 'A';
                    if (uVar55 == 2) {
                      iVar72 = 0x42;
                      iVar78 = 0x85;
                    }
                    else {
                      uVar23 = video->vram_map_allocation_bitmap[0x85];
                      video->vram_map[0x85] = (u8 *)puVar59;
                      uVar79 = uVar77 - 3;
                      video->vram_map_dirty_bit_numbers[0x85] = 'B';
                      video->vram_map_allocation_bitmap[0x85] = uVar23 | 0x100;
                      if (uVar55 == 3) {
                        iVar72 = 0x43;
                        iVar78 = 0x86;
                      }
                      else {
                        uVar23 = video->vram_map_allocation_bitmap[0x86];
                        video->vram_map[0x86] = (u8 *)puVar59;
                        uVar79 = uVar77 - 4;
                        video->vram_map_allocation_bitmap[0x86] = uVar23 | 0x100;
                        video->vram_map_dirty_bit_numbers[0x86] = 'C';
                        if (uVar55 == 4) {
                          iVar72 = 0x44;
                          iVar78 = 0x87;
                        }
                        else {
                          uVar23 = video->vram_map_allocation_bitmap[0x87];
                          video->vram_map[0x87] = (u8 *)puVar59;
                          uVar79 = uVar77 - 5;
                          video->vram_map_dirty_bit_numbers[0x87] = 'D';
                          video->vram_map_allocation_bitmap[0x87] = uVar23 | 0x100;
                          if (uVar55 == 5) {
                            iVar72 = 0x45;
                            iVar78 = 0x88;
                          }
                          else {
                            uVar23 = video->vram_map_allocation_bitmap[0x88];
                            video->vram_map[0x88] = (u8 *)puVar59;
                            uVar79 = uVar77 - 6;
                            video->vram_map_allocation_bitmap[0x88] = uVar23 | 0x100;
                            video->vram_map_dirty_bit_numbers[0x88] = 'E';
                            if (uVar55 == 7) {
                              uVar23 = video->vram_map_allocation_bitmap[0x89];
                              uVar79 = uVar77 - 7;
                              video->vram_map[0x89] = (u8 *)puVar59;
                              iVar72 = 0x47;
                              video->vram_map_dirty_bit_numbers[0x89] = 'F';
                              iVar78 = 0x8a;
                              video->vram_map_allocation_bitmap[0x89] = uVar23 | 0x100;
                            }
                            else {
                              iVar72 = 0x46;
                              iVar78 = 0x89;
                            }
                          }
                        }
                      }
                    }
                  }
                  if (uVar77 == uVar55) goto LAB_0803eb18;
                }
                uVar65 = ((uVar77 - uVar55) - 0x10 >> 4) + 1;
                iVar71 = uVar65 * 0x10;
                if (0xe < (uVar77 - 1) - uVar55) {
                  auVar6._4_4_ = iVar72;
                  auVar6._0_4_ = iVar72;
                  auVar6._8_8_ = 0;
                  auVar1 = SIMDExpandImmediate(0,0,0x10);
                  local_108 = 0;
                  auVar2 = SIMDExpandImmediate(0,0,4);
                  auVar120 = SIMDExpandImmediate(0,0,8);
                  auVar121 = SIMDExpandImmediate(0,0,0xc);
                  puVar61 = video->vram_map_dirty_bit_numbers + uVar55 + 0x83;
                  auVar39._8_8_ = 0x300000002;
                  auVar39._0_8_ = 0x100000000;
                  auVar119 = VectorAdd(auVar6 & auVar6 << 0x40,auVar39,4);
                  ppuVar54 = video->vram_map + uVar55 + 0x83;
                  puVar60 = video->vram_map_allocation_bitmap + uVar55 + 0x93;
                  puVar87 = video->vram_map_allocation_bitmap + uVar55 + 0x93;
                  do {
                    auVar102 = *(undefined (*) [16])(puVar87 + -0x10);
                    auVar115 = VectorAdd(auVar119,auVar2,4);
                    auVar122 = VectorAdd(auVar119,auVar120,4);
                    auVar109 = *(undefined (*) [16])(puVar87 + -8);
                    *(undefined8 *)ppuVar54 = 0;
                    *(undefined8 *)(ppuVar54 + 2) = 0;
                    auVar106._0_8_ = VectorCopyNarrow(auVar119,4);
                    auVar106._8_8_ = VectorCopyNarrow(auVar115,4);
                    auVar115 = VectorAdd(auVar119,auVar121,4);
                    auVar119 = VectorAdd(auVar119,auVar1,4);
                    local_108 = local_108 + 1;
                    uVar110 = VectorCopyNarrow(auVar122,4);
                    uVar111 = VectorCopyNarrow(auVar115,4);
                    auVar122 = SIMDExpandImmediate(0,0xb,1);
                    uVar112 = VectorCopyNarrow(auVar106,2);
                    auVar29._8_8_ = uVar111;
                    auVar29._0_8_ = uVar110;
                    uVar110 = VectorCopyNarrow(auVar29,2);
                    auVar115 = SIMDExpandImmediate(0,0xb,1);
                    *(undefined8 *)(ppuVar54 + 4) = 0;
                    *(undefined8 *)(ppuVar54 + 6) = 0;
                    *(undefined8 *)(ppuVar54 + 8) = 0;
                    *(undefined8 *)(ppuVar54 + 10) = 0;
                    *(undefined8 *)(ppuVar54 + 0xc) = 0;
                    *(undefined8 *)(ppuVar54 + 0xe) = 0;
                    *(longlong *)(puVar60 + -0x10) = SUB168(auVar102 | auVar122,0);
                    *(longlong *)(puVar60 + -0xc) = SUB168(auVar102 | auVar122,8);
                    *(longlong *)(puVar60 + -8) = SUB168(auVar109 | auVar115,0);
                    *(longlong *)(puVar60 + -4) = SUB168(auVar109 | auVar115,8);
                    *(undefined8 *)puVar61 = uVar112;
                    *(undefined8 *)(puVar61 + 8) = uVar110;
                    puVar61 = puVar61 + 0x10;
                    ppuVar54 = ppuVar54 + 0x10;
                    puVar60 = puVar60 + 0x10;
                    puVar87 = puVar87 + 0x10;
                  } while (local_108 < uVar65);
                  uVar79 = uVar79 + uVar65 * -0x10;
                  iVar72 = iVar72 + iVar71;
                  iVar78 = iVar78 + iVar71;
                  if (uVar77 - uVar55 == iVar71) goto LAB_0803eb18;
                }
                uVar47 = (u8)iVar72;
                uVar23 = video->vram_map_allocation_bitmap[iVar78];
                video->vram_map[iVar78] = (u8 *)puVar59;
                video->vram_map_allocation_bitmap[iVar78] = uVar23 | 0x100;
                video->vram_map_dirty_bit_numbers[iVar78] = uVar47;
                if (uVar79 != 1) {
                  video->vram_map[iVar78 + 1] = (u8 *)puVar59;
                  video->vram_map_allocation_bitmap[iVar78 + 1] =
                       video->vram_map_allocation_bitmap[iVar78 + 1] | 0x100;
                  video->vram_map_dirty_bit_numbers[iVar78 + 1] = uVar47 + '\x01';
                  if (uVar79 != 2) {
                    uVar23 = video->vram_map_allocation_bitmap[iVar78 + 2];
                    video->vram_map[iVar78 + 2] = (u8 *)puVar59;
                    video->vram_map_allocation_bitmap[iVar78 + 2] = uVar23 | 0x100;
                    video->vram_map_dirty_bit_numbers[iVar78 + 2] = uVar47 + '\x02';
                    if (uVar79 != 3) {
                      uVar23 = video->vram_map_allocation_bitmap[iVar78 + 3];
                      video->vram_map[iVar78 + 3] = (u8 *)puVar59;
                      video->vram_map_allocation_bitmap[iVar78 + 3] = uVar23 | 0x100;
                      video->vram_map_dirty_bit_numbers[iVar78 + 3] = uVar47 + '\x03';
                      if (uVar79 != 4) {
                        uVar23 = video->vram_map_allocation_bitmap[iVar78 + 4];
                        video->vram_map[iVar78 + 4] = (u8 *)puVar59;
                        video->vram_map_allocation_bitmap[iVar78 + 4] = uVar23 | 0x100;
                        video->vram_map_dirty_bit_numbers[iVar78 + 4] = uVar47 + '\x04';
                        if (uVar79 != 5) {
                          uVar23 = video->vram_map_allocation_bitmap[iVar78 + 5];
                          video->vram_map[iVar78 + 5] = (u8 *)puVar59;
                          video->vram_map_allocation_bitmap[iVar78 + 5] = uVar23 | 0x100;
                          video->vram_map_dirty_bit_numbers[iVar78 + 5] = uVar47 + '\x05';
                          if (uVar79 != 6) {
                            uVar23 = video->vram_map_allocation_bitmap[iVar78 + 6];
                            video->vram_map[iVar78 + 6] = (u8 *)puVar59;
                            video->vram_map_allocation_bitmap[iVar78 + 6] = uVar23 | 0x100;
                            video->vram_map_dirty_bit_numbers[iVar78 + 6] = uVar47 + '\x06';
                            if (uVar79 != 7) {
                              uVar23 = video->vram_map_allocation_bitmap[iVar78 + 7];
                              video->vram_map[iVar78 + 7] = (u8 *)puVar59;
                              video->vram_map_allocation_bitmap[iVar78 + 7] = uVar23 | 0x100;
                              video->vram_map_dirty_bit_numbers[iVar78 + 7] = uVar47 + '\a';
                              if (uVar79 != 8) {
                                uVar23 = video->vram_map_allocation_bitmap[iVar78 + 8];
                                video->vram_map[iVar78 + 8] = (u8 *)puVar59;
                                video->vram_map_allocation_bitmap[iVar78 + 8] = uVar23 | 0x100;
                                video->vram_map_dirty_bit_numbers[iVar78 + 8] = uVar47 + '\b';
                                if (uVar79 != 9) {
                                  uVar23 = video->vram_map_allocation_bitmap[iVar78 + 9];
                                  video->vram_map[iVar78 + 9] = (u8 *)puVar59;
                                  video->vram_map_allocation_bitmap[iVar78 + 9] = uVar23 | 0x100;
                                  video->vram_map_dirty_bit_numbers[iVar78 + 9] = uVar47 + '\t';
                                  if (uVar79 != 10) {
                                    uVar23 = video->vram_map_allocation_bitmap[iVar78 + 10];
                                    video->vram_map[iVar78 + 10] = (u8 *)puVar59;
                                    video->vram_map_allocation_bitmap[iVar78 + 10] = uVar23 | 0x100;
                                    video->vram_map_dirty_bit_numbers[iVar78 + 10] = uVar47 + '\n';
                                    if (uVar79 != 0xb) {
                                      uVar23 = video->vram_map_allocation_bitmap[iVar78 + 0xb];
                                      video->vram_map[iVar78 + 0xb] = (u8 *)puVar59;
                                      video->vram_map_allocation_bitmap[iVar78 + 0xb] =
                                           uVar23 | 0x100;
                                      video->vram_map_dirty_bit_numbers[iVar78 + 0xb] =
                                           uVar47 + '\v';
                                      if (uVar79 != 0xc) {
                                        uVar23 = video->vram_map_allocation_bitmap[iVar78 + 0xc];
                                        video->vram_map[iVar78 + 0xc] = (u8 *)puVar59;
                                        video->vram_map_allocation_bitmap[iVar78 + 0xc] =
                                             uVar23 | 0x100;
                                        video->vram_map_dirty_bit_numbers[iVar78 + 0xc] =
                                             uVar47 + '\f';
                                        if (uVar79 != 0xd) {
                                          video->vram_map[iVar78 + 0xd] = (u8 *)puVar59;
                                          video->vram_map_allocation_bitmap[iVar78 + 0xd] =
                                               video->vram_map_allocation_bitmap[iVar78 + 0xd] |
                                               0x100;
                                          video->vram_map_dirty_bit_numbers[iVar78 + 0xd] =
                                               uVar47 + '\r';
                                          if (uVar79 != 0xe) {
                                            video->vram_map[iVar78 + 0xe] = (u8 *)puVar59;
                                            video->vram_map_allocation_bitmap[iVar78 + 0xe] =
                                                 video->vram_map_allocation_bitmap[iVar78 + 0xe] |
                                                 0x100;
                                            video->vram_map_dirty_bit_numbers[iVar78 + 0xe] =
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
LAB_0803eb18:
              ppuVar54 = video->vram_map + 0x86;
              unmap_memory_page_region_direct(video->memory->memory_interface_arm9,0x6218000,uVar88)
              ;
              puVar84 = video->vram_map_dirty_bit_numbers + 0x86;
              puVar61 = video->vram_map_dirty_bit_numbers + uVar77 + 0x86;
              uVar55 = (uint)(puVar61 <= ppuVar54);
              uVar79 = video->vram_map_dirty_bitmap_fine[4];
              ppuVar64 = video->vram_map + uVar77 + 0x86;
              if (ppuVar64 <= puVar84) {
                uVar55 = 1;
              }
              puVar59 = video->vram_map_allocation_bitmap + uVar77 + 0x86;
              bVar100 = ppuVar54 <= puVar59;
              bVar98 = (u8 **)puVar59 == ppuVar54;
              if (bVar100 && !bVar98) {
                bVar100 = puVar66 <= ppuVar64;
                bVar98 = ppuVar64 == (u8 **)puVar66;
              }
              video->vram_map_dirty_bitmap_coarse = video->vram_map_dirty_bitmap_coarse | 0x10;
              bVar99 = puVar66 <= puVar61;
              bVar101 = (u16 *)puVar61 == puVar66;
              if (bVar99 && !bVar101) {
                bVar99 = puVar84 <= puVar59;
                bVar101 = puVar59 == (u16 *)puVar84;
              }
              video->vram_map_dirty_bitmap_fine[4] = uVar79 | uVar69 << 6;
              puVar59 = puVar90 + -0x10c000;
              if (((!bVar100 || bVar98) & uVar55 & uVar91 & (uint)(!bVar99 || bVar101)) == 0) {
                ppuVar64 = video->vram_map + 0x85;
                puVar61 = video->vram_map_dirty_bit_numbers + 0x85;
                iVar78 = 0x40;
                puVar60 = puVar66;
                do {
                  uVar23 = *puVar60;
                  ppuVar64 = ppuVar64 + 1;
                  *ppuVar64 = (u8 *)puVar59;
                  *puVar60 = uVar23 | 0x100;
                  puVar61 = puVar61 + 1;
                  *puVar61 = (u8)iVar78;
                  iVar78 = iVar78 + 1;
                  puVar60 = puVar60 + 1;
                } while (iVar78 != uVar77 + 0x40);
              }
              else {
                uVar55 = uVar77;
                if (uVar93 <= uVar77) {
                  uVar55 = uVar93;
                }
                if (uVar55 == 0) {
                  iVar72 = 0x40;
                  iVar78 = 0x86;
                  uVar79 = uVar77;
                }
                else {
                  uVar23 = video->vram_map_allocation_bitmap[0x86];
                  uVar79 = uVar77 - 1;
                  video->vram_map[0x86] = (u8 *)puVar59;
                  video->vram_map_allocation_bitmap[0x86] = uVar23 | 0x100;
                  video->vram_map_dirty_bit_numbers[0x86] = '@';
                  if (uVar55 == 1) {
                    iVar72 = 0x41;
                    iVar78 = 0x87;
                  }
                  else {
                    uVar23 = video->vram_map_allocation_bitmap[0x87];
                    video->vram_map[0x87] = (u8 *)puVar59;
                    uVar79 = uVar77 - 2;
                    video->vram_map_dirty_bit_numbers[0x87] = 'A';
                    video->vram_map_allocation_bitmap[0x87] = uVar23 | 0x100;
                    if (uVar55 == 2) {
                      iVar72 = 0x42;
                      iVar78 = 0x88;
                    }
                    else {
                      uVar23 = video->vram_map_allocation_bitmap[0x88];
                      video->vram_map[0x88] = (u8 *)puVar59;
                      uVar79 = uVar77 - 3;
                      video->vram_map_allocation_bitmap[0x88] = uVar23 | 0x100;
                      video->vram_map_dirty_bit_numbers[0x88] = 'B';
                      if (uVar55 == 3) {
                        iVar72 = 0x43;
                        iVar78 = 0x89;
                      }
                      else {
                        uVar23 = video->vram_map_allocation_bitmap[0x89];
                        video->vram_map[0x89] = (u8 *)puVar59;
                        uVar79 = uVar77 - 4;
                        video->vram_map_dirty_bit_numbers[0x89] = 'C';
                        video->vram_map_allocation_bitmap[0x89] = uVar23 | 0x100;
                        if (uVar55 == 4) {
                          iVar72 = 0x44;
                          iVar78 = 0x8a;
                        }
                        else {
                          uVar23 = video->vram_map_allocation_bitmap[0x8a];
                          video->vram_map[0x8a] = (u8 *)puVar59;
                          uVar79 = uVar77 - 5;
                          video->vram_map_allocation_bitmap[0x8a] = uVar23 | 0x100;
                          video->vram_map_dirty_bit_numbers[0x8a] = 'D';
                          if (uVar55 == 5) {
                            iVar72 = 0x45;
                            iVar78 = 0x8b;
                          }
                          else {
                            uVar23 = video->vram_map_allocation_bitmap[0x8b];
                            video->vram_map[0x8b] = (u8 *)puVar59;
                            uVar79 = uVar77 - 6;
                            video->vram_map_dirty_bit_numbers[0x8b] = 'E';
                            video->vram_map_allocation_bitmap[0x8b] = uVar23 | 0x100;
                            if (uVar55 == 7) {
                              uVar23 = video->vram_map_allocation_bitmap[0x8c];
                              uVar79 = uVar77 - 7;
                              iVar72 = 0x47;
                              iVar78 = 0x8d;
                              video->vram_map[0x8c] = (u8 *)puVar59;
                              video->vram_map_allocation_bitmap[0x8c] = uVar23 | 0x100;
                              video->vram_map_dirty_bit_numbers[0x8c] = 'F';
                            }
                            else {
                              iVar72 = 0x46;
                              iVar78 = 0x8c;
                            }
                          }
                        }
                      }
                    }
                  }
                  if (uVar77 == uVar55) goto LAB_0803f138;
                }
                uVar65 = ((uVar77 - uVar55) - 0x10 >> 4) + 1;
                iVar71 = uVar65 * 0x10;
                if (0xe < (uVar77 - 1) - uVar55) {
                  auVar7._4_4_ = iVar72;
                  auVar7._0_4_ = iVar72;
                  auVar7._8_8_ = 0;
                  auVar1 = SIMDExpandImmediate(0,0,0x10);
                  local_d0 = 0;
                  auVar2 = SIMDExpandImmediate(0,0,4);
                  auVar120 = SIMDExpandImmediate(0,0,8);
                  auVar121 = SIMDExpandImmediate(0,0,0xc);
                  puVar61 = video->vram_map_dirty_bit_numbers + uVar55 + 0x86;
                  auVar40._8_8_ = 0x300000002;
                  auVar40._0_8_ = 0x100000000;
                  auVar119 = VectorAdd(auVar7 & auVar7 << 0x40,auVar40,4);
                  ppuVar64 = video->vram_map + uVar55 + 0x86;
                  puVar60 = video->vram_map_allocation_bitmap + uVar55 + 0x96;
                  puVar87 = video->vram_map_allocation_bitmap + uVar55 + 0x96;
                  do {
                    auVar102 = *(undefined (*) [16])(puVar87 + -0x10);
                    auVar115 = VectorAdd(auVar119,auVar2,4);
                    auVar122 = VectorAdd(auVar119,auVar120,4);
                    auVar109 = *(undefined (*) [16])(puVar87 + -8);
                    *(undefined8 *)ppuVar64 = 0;
                    *(undefined8 *)(ppuVar64 + 2) = 0;
                    auVar107._0_8_ = VectorCopyNarrow(auVar119,4);
                    auVar107._8_8_ = VectorCopyNarrow(auVar115,4);
                    auVar115 = VectorAdd(auVar119,auVar121,4);
                    auVar119 = VectorAdd(auVar119,auVar1,4);
                    local_d0 = local_d0 + 1;
                    uVar110 = VectorCopyNarrow(auVar122,4);
                    uVar111 = VectorCopyNarrow(auVar115,4);
                    auVar122 = SIMDExpandImmediate(0,0xb,1);
                    uVar112 = VectorCopyNarrow(auVar107,2);
                    auVar30._8_8_ = uVar111;
                    auVar30._0_8_ = uVar110;
                    uVar110 = VectorCopyNarrow(auVar30,2);
                    auVar115 = SIMDExpandImmediate(0,0xb,1);
                    *(undefined8 *)(ppuVar64 + 4) = 0;
                    *(undefined8 *)(ppuVar64 + 6) = 0;
                    *(undefined8 *)(ppuVar64 + 8) = 0;
                    *(undefined8 *)(ppuVar64 + 10) = 0;
                    *(undefined8 *)(ppuVar64 + 0xc) = 0;
                    *(undefined8 *)(ppuVar64 + 0xe) = 0;
                    *(longlong *)(puVar60 + -0x10) = SUB168(auVar102 | auVar122,0);
                    *(longlong *)(puVar60 + -0xc) = SUB168(auVar102 | auVar122,8);
                    *(longlong *)(puVar60 + -8) = SUB168(auVar109 | auVar115,0);
                    *(longlong *)(puVar60 + -4) = SUB168(auVar109 | auVar115,8);
                    *(undefined8 *)puVar61 = uVar112;
                    *(undefined8 *)(puVar61 + 8) = uVar110;
                    puVar61 = puVar61 + 0x10;
                    ppuVar64 = ppuVar64 + 0x10;
                    puVar60 = puVar60 + 0x10;
                    puVar87 = puVar87 + 0x10;
                  } while (local_d0 < uVar65);
                  uVar79 = uVar79 + uVar65 * -0x10;
                  iVar72 = iVar72 + iVar71;
                  iVar78 = iVar78 + iVar71;
                  if (uVar77 - uVar55 == iVar71) goto LAB_0803f138;
                }
                uVar47 = (u8)iVar72;
                uVar23 = video->vram_map_allocation_bitmap[iVar78];
                video->vram_map[iVar78] = (u8 *)puVar59;
                video->vram_map_allocation_bitmap[iVar78] = uVar23 | 0x100;
                video->vram_map_dirty_bit_numbers[iVar78] = uVar47;
                if (uVar79 != 1) {
                  video->vram_map[iVar78 + 1] = (u8 *)puVar59;
                  video->vram_map_allocation_bitmap[iVar78 + 1] =
                       video->vram_map_allocation_bitmap[iVar78 + 1] | 0x100;
                  video->vram_map_dirty_bit_numbers[iVar78 + 1] = uVar47 + '\x01';
                  if (uVar79 != 2) {
                    uVar23 = video->vram_map_allocation_bitmap[iVar78 + 2];
                    video->vram_map[iVar78 + 2] = (u8 *)puVar59;
                    video->vram_map_allocation_bitmap[iVar78 + 2] = uVar23 | 0x100;
                    video->vram_map_dirty_bit_numbers[iVar78 + 2] = uVar47 + '\x02';
                    if (uVar79 != 3) {
                      uVar23 = video->vram_map_allocation_bitmap[iVar78 + 3];
                      video->vram_map[iVar78 + 3] = (u8 *)puVar59;
                      video->vram_map_allocation_bitmap[iVar78 + 3] = uVar23 | 0x100;
                      video->vram_map_dirty_bit_numbers[iVar78 + 3] = uVar47 + '\x03';
                      if (uVar79 != 4) {
                        uVar23 = video->vram_map_allocation_bitmap[iVar78 + 4];
                        video->vram_map[iVar78 + 4] = (u8 *)puVar59;
                        video->vram_map_allocation_bitmap[iVar78 + 4] = uVar23 | 0x100;
                        video->vram_map_dirty_bit_numbers[iVar78 + 4] = uVar47 + '\x04';
                        if (uVar79 != 5) {
                          uVar23 = video->vram_map_allocation_bitmap[iVar78 + 5];
                          video->vram_map[iVar78 + 5] = (u8 *)puVar59;
                          video->vram_map_allocation_bitmap[iVar78 + 5] = uVar23 | 0x100;
                          video->vram_map_dirty_bit_numbers[iVar78 + 5] = uVar47 + '\x05';
                          if (uVar79 != 6) {
                            uVar23 = video->vram_map_allocation_bitmap[iVar78 + 6];
                            video->vram_map[iVar78 + 6] = (u8 *)puVar59;
                            video->vram_map_allocation_bitmap[iVar78 + 6] = uVar23 | 0x100;
                            video->vram_map_dirty_bit_numbers[iVar78 + 6] = uVar47 + '\x06';
                            if (uVar79 != 7) {
                              uVar23 = video->vram_map_allocation_bitmap[iVar78 + 7];
                              video->vram_map[iVar78 + 7] = (u8 *)puVar59;
                              video->vram_map_allocation_bitmap[iVar78 + 7] = uVar23 | 0x100;
                              video->vram_map_dirty_bit_numbers[iVar78 + 7] = uVar47 + '\a';
                              if (uVar79 != 8) {
                                uVar23 = video->vram_map_allocation_bitmap[iVar78 + 8];
                                video->vram_map[iVar78 + 8] = (u8 *)puVar59;
                                video->vram_map_allocation_bitmap[iVar78 + 8] = uVar23 | 0x100;
                                video->vram_map_dirty_bit_numbers[iVar78 + 8] = uVar47 + '\b';
                                if (uVar79 != 9) {
                                  uVar23 = video->vram_map_allocation_bitmap[iVar78 + 9];
                                  video->vram_map[iVar78 + 9] = (u8 *)puVar59;
                                  video->vram_map_allocation_bitmap[iVar78 + 9] = uVar23 | 0x100;
                                  video->vram_map_dirty_bit_numbers[iVar78 + 9] = uVar47 + '\t';
                                  if (uVar79 != 10) {
                                    uVar23 = video->vram_map_allocation_bitmap[iVar78 + 10];
                                    video->vram_map[iVar78 + 10] = (u8 *)puVar59;
                                    video->vram_map_allocation_bitmap[iVar78 + 10] = uVar23 | 0x100;
                                    video->vram_map_dirty_bit_numbers[iVar78 + 10] = uVar47 + '\n';
                                    if (uVar79 != 0xb) {
                                      uVar23 = video->vram_map_allocation_bitmap[iVar78 + 0xb];
                                      video->vram_map[iVar78 + 0xb] = (u8 *)puVar59;
                                      video->vram_map_allocation_bitmap[iVar78 + 0xb] =
                                           uVar23 | 0x100;
                                      video->vram_map_dirty_bit_numbers[iVar78 + 0xb] =
                                           uVar47 + '\v';
                                      if (uVar79 != 0xc) {
                                        uVar23 = video->vram_map_allocation_bitmap[iVar78 + 0xc];
                                        video->vram_map[iVar78 + 0xc] = (u8 *)puVar59;
                                        video->vram_map_allocation_bitmap[iVar78 + 0xc] =
                                             uVar23 | 0x100;
                                        video->vram_map_dirty_bit_numbers[iVar78 + 0xc] =
                                             uVar47 + '\f';
                                        if (uVar79 != 0xd) {
                                          video->vram_map[iVar78 + 0xd] = (u8 *)puVar59;
                                          video->vram_map_allocation_bitmap[iVar78 + 0xd] =
                                               video->vram_map_allocation_bitmap[iVar78 + 0xd] |
                                               0x100;
                                          video->vram_map_dirty_bit_numbers[iVar78 + 0xd] =
                                               uVar47 + '\r';
                                          if (uVar79 != 0xe) {
                                            video->vram_map[iVar78 + 0xe] = (u8 *)puVar59;
                                            video->vram_map_allocation_bitmap[iVar78 + 0xe] =
                                                 video->vram_map_allocation_bitmap[iVar78 + 0xe] |
                                                 0x100;
                                            video->vram_map_dirty_bit_numbers[iVar78 + 0xe] =
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
LAB_0803f138:
              unmap_memory_page_region_direct(video->memory->memory_interface_arm9,0x621c000,uVar88)
              ;
              uVar55 = video->vram_map_dirty_bitmap_fine[4];
              puVar61 = video->vram_map_dirty_bit_numbers + uVar77 + 0x87;
              puVar96 = video->vram_map_dirty_bit_numbers + 0x87;
              puVar59 = video->vram_map_allocation_bitmap + uVar77 + 0x87;
              uVar79 = (uint)(video->vram_map + uVar77 + 0x87 <= puVar62);
              if (puVar59 <= video->vram_map + 0x87) {
                uVar79 = 1;
              }
              video->vram_map_dirty_bitmap_coarse = video->vram_map_dirty_bitmap_coarse | 0x10;
              bVar100 = puVar62 <= puVar61;
              bVar98 = (u16 *)puVar61 == puVar62;
              if (bVar100 && !bVar98) {
                bVar100 = puVar96 <= puVar59;
                bVar98 = puVar59 == (u16 *)puVar96;
              }
              puVar90 = puVar90 + -0x10e000;
              video->vram_map_dirty_bitmap_fine[4] = uVar55 | uVar69 << 7;
              if ((uVar91 & (video->vram_map + uVar77 + 0x87 <= puVar96 ||
                            puVar61 <= video->vram_map + 0x87) & uVar79 & (uint)(!bVar100 || bVar98)
                  ) == 0) {
                iVar78 = 0x40;
                puVar59 = puVar62;
                do {
                  uVar23 = *puVar59;
                  ppuVar54 = ppuVar54 + 1;
                  *ppuVar54 = (u8 *)puVar90;
                  *puVar59 = uVar23 | 0x100;
                  puVar84 = puVar84 + 1;
                  *puVar84 = (u8)iVar78;
                  iVar78 = iVar78 + 1;
                  puVar59 = puVar59 + 1;
                } while (iVar78 != uVar77 + 0x40);
                uVar91 = 0x82;
                uVar79 = 9;
                goto LAB_0803d138;
              }
              uVar91 = uVar77;
              if (uVar81 <= uVar77) {
                uVar91 = uVar81;
              }
              if (uVar91 == 0) {
                iVar72 = 0x40;
                iVar78 = 0x87;
                uVar55 = uVar77;
LAB_0803f330:
                uVar79 = ((uVar77 - uVar91) - 0x10 >> 4) + 1;
                iVar71 = uVar79 * 0x10;
                if (0xe < (uVar77 - 1) - uVar91) {
                  auVar8._4_4_ = iVar72;
                  auVar8._0_4_ = iVar72;
                  auVar8._8_8_ = 0;
                  auVar1 = SIMDExpandImmediate(0,0,0x10);
                  local_140 = 0;
                  auVar2 = SIMDExpandImmediate(0,0,4);
                  auVar120 = SIMDExpandImmediate(0,0,8);
                  auVar121 = SIMDExpandImmediate(0,0,0xc);
                  puVar61 = video->vram_map_dirty_bit_numbers + uVar91 + 0x87;
                  auVar41._8_8_ = 0x300000002;
                  auVar41._0_8_ = 0x100000000;
                  auVar119 = VectorAdd(auVar8 & auVar8 << 0x40,auVar41,4);
                  ppuVar54 = video->vram_map + uVar91 + 0x87;
                  puVar59 = video->vram_map_allocation_bitmap + uVar91 + 0x97;
                  puVar60 = video->vram_map_allocation_bitmap + uVar91 + 0x97;
                  do {
                    auVar102 = *(undefined (*) [16])(puVar60 + -0x10);
                    auVar115 = VectorAdd(auVar119,auVar2,4);
                    auVar122 = VectorAdd(auVar119,auVar120,4);
                    auVar109 = *(undefined (*) [16])(puVar60 + -8);
                    *(undefined8 *)ppuVar54 = 0;
                    *(undefined8 *)(ppuVar54 + 2) = 0;
                    auVar108._0_8_ = VectorCopyNarrow(auVar119,4);
                    auVar108._8_8_ = VectorCopyNarrow(auVar115,4);
                    auVar115 = VectorAdd(auVar119,auVar121,4);
                    auVar119 = VectorAdd(auVar119,auVar1,4);
                    local_140 = local_140 + 1;
                    uVar110 = VectorCopyNarrow(auVar122,4);
                    uVar111 = VectorCopyNarrow(auVar115,4);
                    auVar122 = SIMDExpandImmediate(0,0xb,1);
                    uVar112 = VectorCopyNarrow(auVar108,2);
                    auVar31._8_8_ = uVar111;
                    auVar31._0_8_ = uVar110;
                    uVar110 = VectorCopyNarrow(auVar31,2);
                    auVar115 = SIMDExpandImmediate(0,0xb,1);
                    *(undefined8 *)(ppuVar54 + 4) = 0;
                    *(undefined8 *)(ppuVar54 + 6) = 0;
                    *(undefined8 *)(ppuVar54 + 8) = 0;
                    *(undefined8 *)(ppuVar54 + 10) = 0;
                    *(undefined8 *)(ppuVar54 + 0xc) = 0;
                    *(undefined8 *)(ppuVar54 + 0xe) = 0;
                    *(longlong *)(puVar59 + -0x10) = SUB168(auVar102 | auVar122,0);
                    *(longlong *)(puVar59 + -0xc) = SUB168(auVar102 | auVar122,8);
                    *(longlong *)(puVar59 + -8) = SUB168(auVar109 | auVar115,0);
                    *(longlong *)(puVar59 + -4) = SUB168(auVar109 | auVar115,8);
                    *(undefined8 *)puVar61 = uVar112;
                    *(undefined8 *)(puVar61 + 8) = uVar110;
                    puVar61 = puVar61 + 0x10;
                    ppuVar54 = ppuVar54 + 0x10;
                    puVar59 = puVar59 + 0x10;
                    puVar60 = puVar60 + 0x10;
                  } while (local_140 < uVar79);
                  iVar78 = iVar78 + iVar71;
                  uVar55 = uVar55 + uVar79 * -0x10;
                  iVar72 = iVar72 + iVar71;
                  if (uVar77 - uVar91 == iVar71) goto LAB_0803f6b4;
                }
                uVar47 = (u8)iVar72;
                uVar23 = video->vram_map_allocation_bitmap[iVar78];
                video->vram_map[iVar78] = (u8 *)puVar90;
                video->vram_map_allocation_bitmap[iVar78] = uVar23 | 0x100;
                video->vram_map_dirty_bit_numbers[iVar78] = uVar47;
                if (uVar55 != 1) {
                  video->vram_map[iVar78 + 1] = (u8 *)puVar90;
                  video->vram_map_allocation_bitmap[iVar78 + 1] =
                       video->vram_map_allocation_bitmap[iVar78 + 1] | 0x100;
                  video->vram_map_dirty_bit_numbers[iVar78 + 1] = uVar47 + '\x01';
                  if (uVar55 != 2) {
                    video->vram_map[iVar78 + 2] = (u8 *)puVar90;
                    video->vram_map_allocation_bitmap[iVar78 + 2] =
                         video->vram_map_allocation_bitmap[iVar78 + 2] | 0x100;
                    video->vram_map_dirty_bit_numbers[iVar78 + 2] = uVar47 + '\x02';
                    if (uVar55 != 3) {
                      video->vram_map[iVar78 + 3] = (u8 *)puVar90;
                      video->vram_map_allocation_bitmap[iVar78 + 3] =
                           video->vram_map_allocation_bitmap[iVar78 + 3] | 0x100;
                      video->vram_map_dirty_bit_numbers[iVar78 + 3] = uVar47 + '\x03';
                      if (uVar55 != 4) {
                        video->vram_map[iVar78 + 4] = (u8 *)puVar90;
                        video->vram_map_allocation_bitmap[iVar78 + 4] =
                             video->vram_map_allocation_bitmap[iVar78 + 4] | 0x100;
                        video->vram_map_dirty_bit_numbers[iVar78 + 4] = uVar47 + '\x04';
                        if (uVar55 != 5) {
                          video->vram_map[iVar78 + 5] = (u8 *)puVar90;
                          video->vram_map_allocation_bitmap[iVar78 + 5] =
                               video->vram_map_allocation_bitmap[iVar78 + 5] | 0x100;
                          video->vram_map_dirty_bit_numbers[iVar78 + 5] = uVar47 + '\x05';
                          if (uVar55 != 6) {
                            video->vram_map[iVar78 + 6] = (u8 *)puVar90;
                            video->vram_map_allocation_bitmap[iVar78 + 6] =
                                 video->vram_map_allocation_bitmap[iVar78 + 6] | 0x100;
                            video->vram_map_dirty_bit_numbers[iVar78 + 6] = uVar47 + '\x06';
                            if (uVar55 != 7) {
                              video->vram_map[iVar78 + 7] = (u8 *)puVar90;
                              video->vram_map_allocation_bitmap[iVar78 + 7] =
                                   video->vram_map_allocation_bitmap[iVar78 + 7] | 0x100;
                              video->vram_map_dirty_bit_numbers[iVar78 + 7] = uVar47 + '\a';
                              if (uVar55 != 8) {
                                video->vram_map[iVar78 + 8] = (u8 *)puVar90;
                                video->vram_map_allocation_bitmap[iVar78 + 8] =
                                     video->vram_map_allocation_bitmap[iVar78 + 8] | 0x100;
                                video->vram_map_dirty_bit_numbers[iVar78 + 8] = uVar47 + '\b';
                                if (uVar55 != 9) {
                                  video->vram_map[iVar78 + 9] = (u8 *)puVar90;
                                  video->vram_map_allocation_bitmap[iVar78 + 9] =
                                       video->vram_map_allocation_bitmap[iVar78 + 9] | 0x100;
                                  video->vram_map_dirty_bit_numbers[iVar78 + 9] = uVar47 + '\t';
                                  if (uVar55 != 10) {
                                    video->vram_map[iVar78 + 10] = (u8 *)puVar90;
                                    video->vram_map_allocation_bitmap[iVar78 + 10] =
                                         video->vram_map_allocation_bitmap[iVar78 + 10] | 0x100;
                                    video->vram_map_dirty_bit_numbers[iVar78 + 10] = uVar47 + '\n';
                                    if (uVar55 != 0xb) {
                                      video->vram_map[iVar78 + 0xb] = (u8 *)puVar90;
                                      video->vram_map_allocation_bitmap[iVar78 + 0xb] =
                                           video->vram_map_allocation_bitmap[iVar78 + 0xb] | 0x100;
                                      video->vram_map_dirty_bit_numbers[iVar78 + 0xb] =
                                           uVar47 + '\v';
                                      if (uVar55 != 0xc) {
                                        video->vram_map[iVar78 + 0xc] = (u8 *)puVar90;
                                        video->vram_map_allocation_bitmap[iVar78 + 0xc] =
                                             video->vram_map_allocation_bitmap[iVar78 + 0xc] | 0x100
                                        ;
                                        video->vram_map_dirty_bit_numbers[iVar78 + 0xc] =
                                             uVar47 + '\f';
                                        if (uVar55 != 0xd) {
                                          video->vram_map[iVar78 + 0xd] = (u8 *)puVar90;
                                          video->vram_map_allocation_bitmap[iVar78 + 0xd] =
                                               video->vram_map_allocation_bitmap[iVar78 + 0xd] |
                                               0x100;
                                          video->vram_map_dirty_bit_numbers[iVar78 + 0xd] =
                                               uVar47 + '\r';
                                          if (uVar55 != 0xe) {
                                            video->vram_map[iVar78 + 0xe] = (u8 *)puVar90;
                                            video->vram_map_allocation_bitmap[iVar78 + 0xe] =
                                                 video->vram_map_allocation_bitmap[iVar78 + 0xe] |
                                                 0x100;
                                            video->vram_map_dirty_bit_numbers[iVar78 + 0xe] =
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
                uVar55 = uVar77 - 1;
                video->vram_map[0x87] = (u8 *)puVar90;
                video->vram_map_dirty_bit_numbers[0x87] = '@';
                video->vram_map_allocation_bitmap[0x87] = uVar23 | 0x100;
                if (uVar91 == 1) {
                  iVar72 = 0x41;
                  iVar78 = 0x88;
                }
                else {
                  uVar23 = video->vram_map_allocation_bitmap[0x88];
                  video->vram_map[0x88] = (u8 *)puVar90;
                  uVar55 = uVar77 - 2;
                  video->vram_map_allocation_bitmap[0x88] = uVar23 | 0x100;
                  video->vram_map_dirty_bit_numbers[0x88] = 'A';
                  if (uVar91 == 2) {
                    iVar72 = 0x42;
                    iVar78 = 0x89;
                  }
                  else {
                    uVar23 = video->vram_map_allocation_bitmap[0x89];
                    video->vram_map[0x89] = (u8 *)puVar90;
                    uVar55 = uVar77 - 3;
                    video->vram_map_dirty_bit_numbers[0x89] = 'B';
                    video->vram_map_allocation_bitmap[0x89] = uVar23 | 0x100;
                    if (uVar91 == 3) {
                      iVar72 = 0x43;
                      iVar78 = 0x8a;
                    }
                    else {
                      uVar23 = video->vram_map_allocation_bitmap[0x8a];
                      video->vram_map[0x8a] = (u8 *)puVar90;
                      uVar55 = uVar77 - 4;
                      video->vram_map_allocation_bitmap[0x8a] = uVar23 | 0x100;
                      video->vram_map_dirty_bit_numbers[0x8a] = 'C';
                      if (uVar91 == 4) {
                        iVar72 = 0x44;
                        iVar78 = 0x8b;
                      }
                      else {
                        uVar23 = video->vram_map_allocation_bitmap[0x8b];
                        video->vram_map[0x8b] = (u8 *)puVar90;
                        uVar55 = uVar77 - 5;
                        video->vram_map_dirty_bit_numbers[0x8b] = 'D';
                        video->vram_map_allocation_bitmap[0x8b] = uVar23 | 0x100;
                        if (uVar91 == 5) {
                          iVar72 = 0x45;
                          iVar78 = 0x8c;
                        }
                        else {
                          uVar23 = video->vram_map_allocation_bitmap[0x8c];
                          video->vram_map[0x8c] = (u8 *)puVar90;
                          uVar55 = uVar77 - 6;
                          video->vram_map_allocation_bitmap[0x8c] = uVar23 | 0x100;
                          video->vram_map_dirty_bit_numbers[0x8c] = 'E';
                          if (uVar91 == 7) {
                            uVar23 = video->vram_map_allocation_bitmap[0x8d];
                            uVar55 = uVar77 - 7;
                            video->vram_map[0x8d] = (u8 *)puVar90;
                            iVar72 = 0x47;
                            video->vram_map_dirty_bit_numbers[0x8d] = 'F';
                            iVar78 = 0x8e;
                            video->vram_map_allocation_bitmap[0x8d] = uVar23 | 0x100;
                          }
                          else {
                            iVar72 = 0x46;
                            iVar78 = 0x8d;
                          }
                        }
                      }
                    }
                  }
                }
                if (uVar77 != uVar91) goto LAB_0803f330;
              }
LAB_0803f6b4:
              uVar91 = 0x82;
              uVar79 = 9;
              goto LAB_0803d138;
            }
            break;
          case 2:
            switch(local_180) {
            case 0:
            case 1:
              uVar91 = ((uVar55 & 1) + 0x20) * 8;
              goto LAB_080406bc;
            case 2:
            case 3:
              uVar55 = uVar55 & 1;
              uVar91 = uVar55 * 8;
              unmap_memory_page_region
                        (pmVar53->memory_interface_arm7,(uVar91 + 0x1800) * 0x4000,uVar77 << 10);
              uVar77 = uVar77 >> 7;
              iVar78 = uVar55 * 0x10 + 0x1da4;
              iVar72 = uVar77 + 0x44c + uVar91;
              uVar23 = (ushort)(1 << (local_180 & 0xff));
              if (uVar77 < 0xc || iVar78 + iVar72 * -4 < 0 != SBORROW4(iVar78,iVar72 * 4)) {
                ppuVar54 = video->arm7_vram_slots + uVar55 * 8;
                puVar59 = video->arm7_vram_allocation_bitmap + uVar55 * 8;
                do {
                  uVar22 = *puVar59;
                  ppuVar64 = ppuVar54 + 1;
                  *ppuVar54 = (u8 *)puVar90;
                  puVar90 = puVar90 + 0x10000;
                  *puVar59 = uVar23 | uVar22;
                  ppuVar54 = ppuVar64;
                  puVar59 = puVar59 + 1;
                } while (ppuVar64 != video->arm7_vram_slots + uVar91 + uVar77);
              }
              else {
                uVar79 = -((uint)((int)video->arm7_vram_allocation_bitmap * 0x20000000) >> 0x1e) & 7
                ;
                if (uVar77 <= uVar79) {
                  uVar79 = uVar77;
                }
                uVar69 = uVar91;
                puVar59 = puVar90;
                uVar65 = uVar77;
                if (uVar79 != 0) {
                  uVar22 = video->arm7_vram_allocation_bitmap[uVar55 * 8];
                  uVar65 = uVar77 - 1;
                  video->arm7_vram_slots[uVar55 * 8] = (u8 *)puVar90;
                  puVar59 = puVar90 + 0x10000;
                  uVar69 = uVar91 + 1;
                  video->arm7_vram_allocation_bitmap[uVar55 * 8] = uVar23 | uVar22;
                  if (uVar79 != 1) {
                    video->arm7_vram_slots[uVar55 * 8 + 1] = (u8 *)puVar59;
                    uVar65 = uVar77 - 2;
                    puVar59 = puVar90 + 0x20000;
                    uVar69 = uVar91 + 2;
                    video->arm7_vram_allocation_bitmap[uVar55 * 8 + 1] =
                         uVar23 | video->arm7_vram_allocation_bitmap[uVar55 * 8 + 1];
                    if (uVar79 != 2) {
                      video->vram_map_dirty_bitmap_fine[uVar55 * 8] = (u32)puVar59;
                      uVar65 = uVar77 - 3;
                      puVar59 = puVar90 + 0x30000;
                      uVar69 = uVar91 + 3;
                      *(ushort *)(video->palette_ram + uVar55 * 4) =
                           uVar23 | *(ushort *)(video->palette_ram + uVar55 * 4);
                      if (uVar79 != 3) {
                        video->vram_map_dirty_bitmap_fine[uVar55 * 8 + 1] = (u32)puVar59;
                        uVar65 = uVar77 - 4;
                        puVar59 = puVar90 + 0x40000;
                        uVar69 = uVar91 + 4;
                        *(ushort *)((int)video->palette_ram + uVar55 * 0x10 + 2) =
                             uVar23 | *(ushort *)((int)video->palette_ram + uVar55 * 0x10 + 2);
                        if (uVar79 != 4) {
                          video->vram_map_dirty_bitmap_fine[uVar55 * 8 + 2] = (u32)puVar59;
                          uVar65 = uVar77 - 5;
                          puVar59 = puVar90 + 0x50000;
                          uVar69 = uVar91 + 5;
                          *(ushort *)(video->palette_ram + uVar55 * 4 + 1) =
                               uVar23 | *(ushort *)(video->palette_ram + uVar55 * 4 + 1);
                          if (uVar79 != 5) {
                            video->vram_map_dirty_bitmap_fine[uVar55 * 8 + 3] = (u32)puVar59;
                            uVar65 = uVar77 - 6;
                            puVar59 = puVar90 + 0x60000;
                            uVar69 = uVar91 + 6;
                            *(ushort *)((int)video->palette_ram + uVar55 * 0x10 + 6) =
                                 uVar23 | *(ushort *)((int)video->palette_ram + uVar55 * 0x10 + 6);
                            if (uVar79 == 7) {
                              video->vram_map_dirty_bitmap_fine[uVar55 * 8 + 4] = (u32)puVar59;
                              *(ushort *)(video->oam_ram + uVar55 * 4) =
                                   uVar23 | *(ushort *)(video->oam_ram + uVar55 * 4);
                              uVar69 = uVar91 + 7;
                              puVar59 = puVar90 + 0x70000;
                              uVar65 = uVar77 - 7;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                uVar56 = ((uVar77 - uVar79) - 8 >> 3) + 1;
                if (6 < (uVar77 - 1) - uVar79) {
                  auVar9._4_4_ = puVar59;
                  auVar9._0_4_ = puVar59;
                  auVar9._8_8_ = 0;
                  auVar10._4_4_ = CONCAT22(uVar23,uVar23);
                  auVar10._0_4_ = CONCAT22(uVar23,uVar23);
                  auVar10._8_8_ = 0;
                  ppuVar83 = (u16 **)(video->arm7_vram_allocation_bitmap + uVar79 + uVar55 * 8);
                  auVar1 = SIMDExpandImmediate(0,4,0x10);
                  auVar2 = SIMDExpandImmediate(0,4,8);
                  uVar57 = 0;
                  auVar45._8_8_ = 0x6000000040000;
                  auVar45._0_8_ = 0x2000000000000;
                  auVar120 = VectorAdd(auVar9 & auVar9 << 0x40,auVar45,4);
                  ppuVar54 = video->arm7_vram_slots + uVar79 + uVar55 * 8;
                  ppuVar58 = ppuVar83;
                  do {
                    auVar121 = *(undefined (*) [16])ppuVar83;
                    auVar119 = VectorAdd(auVar120,auVar2,4);
                    uVar57 = uVar57 + 1;
                    *(longlong *)ppuVar54 = auVar120._0_8_;
                    *(longlong *)(ppuVar54 + 2) = auVar120._8_8_;
                    ppuVar83 = ppuVar83 + 4;
                    auVar120 = VectorAdd(auVar120,auVar1,4);
                    *(longlong *)(ppuVar54 + 4) = auVar119._0_8_;
                    *(longlong *)(ppuVar54 + 6) = auVar119._8_8_;
                    auVar121 = auVar121 | auVar10 & auVar10 << 0x40;
                    *(longlong *)ppuVar58 = auVar121._0_8_;
                    *(longlong *)(ppuVar58 + 2) = auVar121._8_8_;
                    ppuVar54 = ppuVar54 + 8;
                    ppuVar58 = ppuVar58 + 4;
                  } while (uVar57 < uVar56);
                  puVar59 = puVar59 + uVar56 * 0x80000;
                  uVar69 = uVar69 + uVar56 * 8;
                  uVar65 = uVar65 + uVar56 * -8;
                  if (uVar77 - uVar79 == uVar56 * 8) goto LAB_0803fddc;
                }
                video->arm7_vram_slots[uVar69] = (u8 *)puVar59;
                video->arm7_vram_allocation_bitmap[uVar69] =
                     uVar23 | video->arm7_vram_allocation_bitmap[uVar69];
                if (uVar65 != 1) {
                  video->arm7_vram_slots[uVar69 + 1] = (u8 *)(puVar59 + 0x10000);
                  video->arm7_vram_allocation_bitmap[uVar69 + 1] =
                       uVar23 | video->arm7_vram_allocation_bitmap[uVar69 + 1];
                  if (uVar65 != 2) {
                    video->vram_map_dirty_bitmap_fine[uVar69] = (u32)(puVar59 + 0x20000);
                    *(ushort *)((int)video->palette_ram + uVar69 * 2) =
                         uVar23 | *(ushort *)((int)video->palette_ram + uVar69 * 2);
                    if (uVar65 != 3) {
                      video->vram_map_dirty_bitmap_fine[uVar69 + 1] = (u32)(puVar59 + 0x30000);
                      *(ushort *)((int)video->palette_ram + uVar69 * 2 + 2) =
                           uVar23 | *(ushort *)((int)video->palette_ram + uVar69 * 2 + 2);
                      if (uVar65 != 4) {
                        video->vram_map_dirty_bitmap_fine[uVar69 + 2] = (u32)(puVar59 + 0x40000);
                        *(ushort *)((int)video->palette_ram + uVar69 * 2 + 4) =
                             uVar23 | *(ushort *)((int)video->palette_ram + uVar69 * 2 + 4);
                        if (uVar65 != 5) {
                          video->vram_map_dirty_bitmap_fine[uVar69 + 3] = (u32)(puVar59 + 0x50000);
                          *(ushort *)((int)video->palette_ram + uVar69 * 2 + 6) =
                               uVar23 | *(ushort *)((int)video->palette_ram + uVar69 * 2 + 6);
                          if (uVar65 != 6) {
                            video->vram_map_dirty_bitmap_fine[uVar69 + 4] = (u32)(puVar59 + 0x60000)
                            ;
                            *(ushort *)((int)video->oam_ram + uVar69 * 2) =
                                 uVar23 | *(ushort *)((int)video->oam_ram + uVar69 * 2);
                          }
                        }
                      }
                    }
                  }
                }
              }
LAB_0803fddc:
              uVar79 = 7;
              goto LAB_0803d138;
            case 4:
              uVar79 = 0x100;
              uVar91 = 0x100;
              uVar55 = 8;
              local_140 = -0x400000;
              uVar88 = 0x6400000;
              local_114 = 0x80;
              break;
            case 5:
            case 6:
              uVar91 = (uVar55 & 1) + 0x100 + (uVar55 & 2) * 2;
              goto LAB_0804073c;
            case 7:
              uVar91 = 0;
              uVar79 = 1;
              goto LAB_080427d4;
            case 8:
switchD_0803d174_caseD_3:
              uVar55 = 0xc;
              uVar88 = 0x6600000;
              uVar91 = 0x180;
              local_140 = -0x600000;
              local_114 = 0x100;
              uVar79 = 0x1000;
              break;
            default:
              goto switchD_0803d0e8_caseD_7;
            }
            goto LAB_0803fea4;
          case 3:
            switch(local_180) {
            case 0:
            case 1:
            case 2:
            case 3:
              uVar77 = uVar77 >> 7;
              iVar72 = uVar77 + 0x442 + uVar91;
              uVar55 = video->vram_abcd_dirty;
              iVar78 = uVar91 * 2 + 0x1d90;
              uVar23 = (ushort)(1 << (local_180 & 0xff));
              if (uVar77 < 0xc || iVar78 + iVar72 * -4 < 0 != SBORROW4(iVar78,iVar72 * 4)) {
                ppuVar54 = video->texture_slots + uVar91;
                puVar59 = video->texture_allocation_bitmap + uVar91;
                do {
                  uVar22 = *puVar59;
                  ppuVar64 = ppuVar54 + 1;
                  *ppuVar54 = (u8 *)puVar90;
                  puVar90 = puVar90 + 0x10000;
                  *puVar59 = uVar23 | uVar22;
                  ppuVar54 = ppuVar64;
                  puVar59 = puVar59 + 1;
                } while (ppuVar64 != video->texture_slots + uVar91 + uVar77);
              }
              else {
                uVar79 = -((uint)((int)(video->texture_allocation_bitmap + uVar91) * 0x20000000) >>
                          0x1e) & 7;
                if (uVar77 <= uVar79) {
                  uVar79 = uVar77;
                }
                uVar69 = uVar91;
                uVar65 = uVar77;
                puVar59 = puVar90;
                if (uVar79 != 0) {
                  uVar65 = uVar77 - 1;
                  video->texture_slots[uVar91] = (u8 *)puVar90;
                  puVar59 = puVar90 + 0x10000;
                  uVar69 = uVar91 + 1;
                  video->texture_allocation_bitmap[uVar91] =
                       uVar23 | video->texture_allocation_bitmap[uVar91];
                  if (uVar79 != 1) {
                    video->texture_slots[uVar91 + 1] = (u8 *)puVar59;
                    uVar65 = uVar77 - 2;
                    puVar59 = puVar90 + 0x20000;
                    uVar69 = uVar91 + 2;
                    video->texture_allocation_bitmap[uVar91 + 1] =
                         uVar23 | video->texture_allocation_bitmap[uVar91 + 1];
                    if (uVar79 != 2) {
                      video->texture_slots[uVar91 + 2] = (u8 *)puVar59;
                      uVar65 = uVar77 - 3;
                      puVar59 = puVar90 + 0x30000;
                      uVar69 = uVar91 + 3;
                      video->texture_allocation_bitmap[uVar91 + 2] =
                           uVar23 | video->texture_allocation_bitmap[uVar91 + 2];
                      if (uVar79 != 3) {
                        video->texture_slots[uVar91 + 3] = (u8 *)puVar59;
                        uVar65 = uVar77 - 4;
                        puVar59 = puVar90 + 0x40000;
                        uVar69 = uVar91 + 4;
                        video->texture_allocation_bitmap[uVar91 + 3] =
                             uVar23 | video->texture_allocation_bitmap[uVar91 + 3];
                        if (uVar79 != 4) {
                          video->texture_palette_slots[uVar91] = puVar59;
                          uVar65 = uVar77 - 5;
                          puVar59 = puVar90 + 0x50000;
                          uVar69 = uVar91 + 5;
                          video->texture_palette_allocation_bitmap[uVar91] =
                               uVar23 | video->texture_palette_allocation_bitmap[uVar91];
                          if (uVar79 != 5) {
                            video->texture_palette_slots[uVar91 + 1] = puVar59;
                            uVar65 = uVar77 - 6;
                            puVar59 = puVar90 + 0x60000;
                            uVar69 = uVar91 + 6;
                            video->texture_palette_allocation_bitmap[uVar91 + 1] =
                                 uVar23 | video->texture_palette_allocation_bitmap[uVar91 + 1];
                            if (uVar79 == 7) {
                              video->texture_palette_slots[uVar91 + 2] = puVar59;
                              video->texture_palette_allocation_bitmap[uVar91 + 2] =
                                   uVar23 | video->texture_palette_allocation_bitmap[uVar91 + 2];
                              uVar69 = uVar91 + 7;
                              uVar65 = uVar77 - 7;
                              puVar59 = puVar90 + 0x70000;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                uVar56 = ((uVar77 - uVar79) - 8 >> 3) + 1;
                if (6 < (uVar77 - 1) - uVar79) {
                  auVar109._4_4_ = puVar59;
                  auVar109._0_4_ = puVar59;
                  auVar109._8_8_ = 0;
                  auVar113._4_4_ = CONCAT22(uVar23,uVar23);
                  auVar113._0_4_ = CONCAT22(uVar23,uVar23);
                  auVar113._8_8_ = 0;
                  puVar60 = video->texture_allocation_bitmap + uVar79 + uVar91;
                  auVar1 = SIMDExpandImmediate(0,4,0x10);
                  auVar2 = SIMDExpandImmediate(0,4,8);
                  uVar57 = 0;
                  auVar44._8_8_ = 0x6000000040000;
                  auVar44._0_8_ = 0x2000000000000;
                  auVar120 = VectorAdd(auVar109 & auVar109 << 0x40,auVar44,4);
                  ppuVar58 = (u16 **)(video->texture_slots + uVar79 + uVar91);
                  puVar90 = puVar60;
                  do {
                    auVar121 = *(undefined (*) [16])puVar60;
                    auVar119 = VectorAdd(auVar120,auVar2,4);
                    uVar57 = uVar57 + 1;
                    *(longlong *)ppuVar58 = auVar120._0_8_;
                    *(longlong *)(ppuVar58 + 2) = auVar120._8_8_;
                    puVar60 = puVar60 + 8;
                    auVar120 = VectorAdd(auVar120,auVar1,4);
                    *(longlong *)(ppuVar58 + 4) = auVar119._0_8_;
                    *(longlong *)(ppuVar58 + 6) = auVar119._8_8_;
                    auVar121 = auVar121 | auVar113 & auVar113 << 0x40;
                    *(longlong *)puVar90 = auVar121._0_8_;
                    *(longlong *)(puVar90 + 4) = auVar121._8_8_;
                    ppuVar58 = ppuVar58 + 8;
                    puVar90 = puVar90 + 8;
                  } while (uVar57 < uVar56);
                  puVar59 = puVar59 + uVar56 * 0x80000;
                  uVar69 = uVar69 + uVar56 * 8;
                  uVar65 = uVar65 + uVar56 * -8;
                  if (uVar77 - uVar79 == uVar56 * 8) goto LAB_0803fa30;
                }
                video->texture_slots[uVar69] = (u8 *)puVar59;
                video->texture_allocation_bitmap[uVar69] =
                     uVar23 | video->texture_allocation_bitmap[uVar69];
                if (uVar65 != 1) {
                  video->texture_slots[uVar69 + 1] = (u8 *)(puVar59 + 0x10000);
                  video->texture_allocation_bitmap[uVar69 + 1] =
                       uVar23 | video->texture_allocation_bitmap[uVar69 + 1];
                  if (uVar65 != 2) {
                    video->texture_slots[uVar69 + 2] = (u8 *)(puVar59 + 0x20000);
                    video->texture_allocation_bitmap[uVar69 + 2] =
                         uVar23 | video->texture_allocation_bitmap[uVar69 + 2];
                    if (uVar65 != 3) {
                      video->texture_slots[uVar69 + 3] = (u8 *)(puVar59 + 0x30000);
                      video->texture_allocation_bitmap[uVar69 + 3] =
                           uVar23 | video->texture_allocation_bitmap[uVar69 + 3];
                      if (uVar65 != 4) {
                        video->texture_palette_slots[uVar69] = puVar59 + 0x40000;
                        video->texture_palette_allocation_bitmap[uVar69] =
                             uVar23 | video->texture_palette_allocation_bitmap[uVar69];
                        if (uVar65 != 5) {
                          video->texture_palette_slots[uVar69 + 1] = puVar59 + 0x50000;
                          video->texture_palette_allocation_bitmap[uVar69 + 1] =
                               uVar23 | video->texture_palette_allocation_bitmap[uVar69 + 1];
                          if (uVar65 != 6) {
                            video->texture_palette_slots[uVar69 + 2] = puVar59 + 0x60000;
                            video->texture_palette_allocation_bitmap[uVar69 + 2] =
                                 uVar23 | video->texture_palette_allocation_bitmap[uVar69 + 2];
                          }
                        }
                      }
                    }
                  }
                }
              }
LAB_0803fa30:
              uVar77 = 0xff << (local_160 & 0xff);
              uVar79 = 4;
              (video->texture_cache).texture_slots_dirty =
                   (video->texture_cache).texture_slots_dirty |
                   (uVar55 >> (local_160 & 0xff) & 0xff) << (uVar91 << 3);
              (video->texture_cache).texture_slots_allocated =
                   (video->texture_cache).texture_slots_allocated | uVar77;
              video->vram_abcd_dirty = uVar55 & ~uVar77;
              break;
            case 4:
              uVar91 = 0;
              goto LAB_08041734;
            case 5:
            case 6:
              uVar91 = (uVar55 & 1) + (uVar55 & 2) * 2;
LAB_08041734:
              uVar77 = uVar77 >> 4;
              iVar78 = uVar91 * 2 + 0x1d98;
              iVar72 = uVar77 + 0x446 + uVar91;
              uVar55 = 1 << (local_180 & 0xff);
              uVar23 = (ushort)uVar55;
              if (uVar77 < 0xc || iVar78 + iVar72 * -4 < 0 != SBORROW4(iVar78,iVar72 * 4)) {
                ppuVar58 = video->texture_palette_slots + uVar91;
                puVar59 = video->texture_palette_allocation_bitmap + uVar91;
                do {
                  uVar22 = *puVar59;
                  ppuVar83 = ppuVar58 + 1;
                  *ppuVar58 = puVar90;
                  puVar90 = puVar90 + 0x2000;
                  *puVar59 = uVar23 | uVar22;
                  ppuVar58 = ppuVar83;
                  puVar59 = puVar59 + 1;
                } while (ppuVar83 != video->texture_palette_slots + uVar77 + uVar91);
              }
              else {
                uVar79 = -((uint)((int)(video->texture_palette_allocation_bitmap + uVar91) *
                                 0x20000000) >> 0x1e) & 7;
                if (uVar77 <= uVar79) {
                  uVar79 = uVar77;
                }
                uVar69 = uVar91;
                uVar65 = uVar77;
                puVar59 = puVar90;
                if (uVar79 != 0) {
                  uVar65 = uVar77 - 1;
                  video->texture_palette_slots[uVar91] = puVar90;
                  puVar59 = puVar90 + 0x2000;
                  uVar69 = uVar91 + 1;
                  video->texture_palette_allocation_bitmap[uVar91] =
                       uVar23 | video->texture_palette_allocation_bitmap[uVar91];
                  if (uVar79 != 1) {
                    video->texture_palette_slots[uVar91 + 1] = puVar59;
                    uVar65 = uVar77 - 2;
                    puVar59 = puVar90 + 0x4000;
                    uVar69 = uVar91 + 2;
                    video->texture_palette_allocation_bitmap[uVar91 + 1] =
                         uVar23 | video->texture_palette_allocation_bitmap[uVar91 + 1];
                    if (uVar79 != 2) {
                      video->texture_palette_slots[uVar91 + 2] = puVar59;
                      uVar65 = uVar77 - 3;
                      puVar59 = puVar90 + 0x6000;
                      uVar69 = uVar91 + 3;
                      video->texture_palette_allocation_bitmap[uVar91 + 2] =
                           uVar23 | video->texture_palette_allocation_bitmap[uVar91 + 2];
                      if (uVar79 != 3) {
                        video->texture_palette_slots[uVar91 + 3] = puVar59;
                        uVar65 = uVar77 - 4;
                        puVar59 = puVar90 + 0x8000;
                        uVar69 = uVar91 + 4;
                        video->texture_palette_allocation_bitmap[uVar91 + 3] =
                             uVar23 | video->texture_palette_allocation_bitmap[uVar91 + 3];
                        if (uVar79 != 4) {
                          video->texture_palette_slots[uVar91 + 4] = puVar59;
                          uVar65 = uVar77 - 5;
                          puVar59 = puVar90 + 0xa000;
                          uVar69 = uVar91 + 5;
                          video->texture_palette_allocation_bitmap[uVar91 + 4] =
                               uVar23 | video->texture_palette_allocation_bitmap[uVar91 + 4];
                          if (uVar79 != 5) {
                            video->texture_palette_slots[uVar91 + 5] = puVar59;
                            uVar65 = uVar77 - 6;
                            puVar59 = puVar90 + 0xc000;
                            uVar69 = uVar91 + 6;
                            video->texture_palette_allocation_bitmap[uVar91 + 5] =
                                 uVar23 | video->texture_palette_allocation_bitmap[uVar91 + 5];
                            if (uVar79 == 7) {
                              video->arm7_vram_slots[uVar91] = (u8 *)puVar59;
                              video->arm7_vram_allocation_bitmap[uVar91] =
                                   uVar23 | video->arm7_vram_allocation_bitmap[uVar91];
                              uVar69 = uVar91 + 7;
                              uVar65 = uVar77 - 7;
                              puVar59 = puVar90 + 0xe000;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                uVar56 = ((uVar77 - uVar79) - 8 >> 3) + 1;
                if (6 < (uVar77 - 1) - uVar79) {
                  auVar122._4_4_ = puVar59;
                  auVar122._0_4_ = puVar59;
                  auVar122._8_8_ = 0;
                  auVar115._4_4_ = CONCAT22(uVar23,uVar23);
                  auVar115._0_4_ = CONCAT22(uVar23,uVar23);
                  auVar115._8_8_ = 0;
                  ppuVar85 = (u16 **)(video->texture_palette_allocation_bitmap + uVar79 + uVar91);
                  auVar1 = SIMDExpandImmediate(0,4,2);
                  auVar2 = SIMDExpandImmediate(0,4,1);
                  uVar57 = 0;
                  auVar102._8_8_ = 0xc00000008000;
                  auVar102._0_8_ = 0x400000000000;
                  auVar120 = VectorAdd(auVar122 & auVar122 << 0x40,auVar102,4);
                  ppuVar58 = video->texture_palette_slots + uVar79 + uVar91;
                  ppuVar83 = ppuVar85;
                  do {
                    auVar121 = *(undefined (*) [16])ppuVar85;
                    auVar119 = VectorAdd(auVar120,auVar2,4);
                    uVar57 = uVar57 + 1;
                    *(longlong *)ppuVar58 = auVar120._0_8_;
                    *(longlong *)(ppuVar58 + 2) = auVar120._8_8_;
                    ppuVar85 = ppuVar85 + 4;
                    auVar120 = VectorAdd(auVar120,auVar1,4);
                    *(longlong *)(ppuVar58 + 4) = auVar119._0_8_;
                    *(longlong *)(ppuVar58 + 6) = auVar119._8_8_;
                    auVar121 = auVar121 | auVar115 & auVar115 << 0x40;
                    *(longlong *)ppuVar83 = auVar121._0_8_;
                    *(longlong *)(ppuVar83 + 2) = auVar121._8_8_;
                    ppuVar58 = ppuVar58 + 8;
                    ppuVar83 = ppuVar83 + 4;
                  } while (uVar57 < uVar56);
                  puVar59 = puVar59 + uVar56 * 0x10000;
                  uVar69 = uVar69 + uVar56 * 8;
                  uVar65 = uVar65 + uVar56 * -8;
                  if (uVar77 - uVar79 == uVar56 * 8) goto LAB_08041a8c;
                }
                video->texture_palette_slots[uVar69] = puVar59;
                video->texture_palette_allocation_bitmap[uVar69] =
                     uVar23 | video->texture_palette_allocation_bitmap[uVar69];
                if (uVar65 != 1) {
                  video->texture_palette_slots[uVar69 + 1] = puVar59 + 0x2000;
                  video->texture_palette_allocation_bitmap[uVar69 + 1] =
                       uVar23 | video->texture_palette_allocation_bitmap[uVar69 + 1];
                  if (uVar65 != 2) {
                    video->texture_palette_slots[uVar69 + 2] = puVar59 + 0x4000;
                    video->texture_palette_allocation_bitmap[uVar69 + 2] =
                         uVar23 | video->texture_palette_allocation_bitmap[uVar69 + 2];
                    if (uVar65 != 3) {
                      video->texture_palette_slots[uVar69 + 3] = puVar59 + 0x6000;
                      video->texture_palette_allocation_bitmap[uVar69 + 3] =
                           uVar23 | video->texture_palette_allocation_bitmap[uVar69 + 3];
                      if (uVar65 != 4) {
                        video->texture_palette_slots[uVar69 + 4] = puVar59 + 0x8000;
                        video->texture_palette_allocation_bitmap[uVar69 + 4] =
                             uVar23 | video->texture_palette_allocation_bitmap[uVar69 + 4];
                        if (uVar65 != 5) {
                          video->texture_palette_slots[uVar69 + 5] = puVar59 + 0xa000;
                          video->texture_palette_allocation_bitmap[uVar69 + 5] =
                               uVar23 | video->texture_palette_allocation_bitmap[uVar69 + 5];
                          if (uVar65 != 6) {
                            video->arm7_vram_slots[uVar69] = (u8 *)(puVar59 + 0xc000);
                            video->arm7_vram_allocation_bitmap[uVar69] =
                                 uVar23 | video->arm7_vram_allocation_bitmap[uVar69];
                          }
                        }
                      }
                    }
                  }
                }
              }
LAB_08041a8c:
              if (local_180 == 4) {
                uVar79 = 5;
                uVar77 = video->vram_efg_dirty;
                (video->texture_cache).texture_palette_slots_dirty =
                     (video->texture_cache).texture_palette_slots_dirty | uVar77 & 0xf;
                video->vram_efg_dirty = uVar77 & 0xffffff00;
                (video->texture_cache).texture_palette_slots_allocated = 0xf;
              }
              else {
                uVar69 = (video->texture_cache).texture_palette_slots_allocated;
                uVar77 = video->vram_efg_dirty;
                uVar79 = 5;
                (video->texture_cache).texture_palette_slots_dirty =
                     (video->texture_cache).texture_palette_slots_dirty |
                     (uVar77 >> (local_160 - 0x20 & 0xff) & 1) << (uVar91 << 3);
                video->vram_efg_dirty = uVar77 & ~(0xff << (local_160 - 0x20 & 0xff));
                (video->texture_cache).texture_palette_slots_allocated = uVar69 | uVar55;
              }
              break;
            case 7:
switchD_0803d174_caseD_0:
              uVar79 = 0xc;
              goto LAB_0803d134;
            case 8:
              local_170 = 1;
              uVar79 = 3;
LAB_0804243c:
              local_158 = uVar77 >> 1;
              uVar77 = uVar77 >> 4;
              iVar78 = (uVar77 + local_170 + 0x440) * 4;
              iVar72 = iVar78 + (local_170 + 0xec6) * -2;
              puVar59 = video->extended_palette_obj_allocation_bitmap + local_170;
              uVar23 = (ushort)(1 << (local_180 & 0xff));
              if ((iVar72 == 0 || iVar72 < 0 != SBORROW4(iVar78,local_170 * 2 + 0x1d8c)) &&
                  0xb < uVar77) {
                uVar91 = -((uint)((int)(video->extended_palette_obj_allocation_bitmap + local_170) *
                                 0x20000000) >> 0x1e) & 7;
                if (uVar77 <= uVar91) {
                  uVar91 = uVar77;
                }
                uVar55 = uVar77;
                uVar69 = uVar91;
                puVar60 = puVar90;
                if (uVar91 != 0) {
                  uVar22 = video->extended_palette_obj_allocation_bitmap[local_170];
                  video->extended_palette_obj_slots[local_170] = puVar90;
                  puVar60 = puVar90 + 0x1000;
                  uVar55 = uVar77 - 1;
                  video->extended_palette_obj_allocation_bitmap[local_170] = uVar23 | uVar22;
                  if (uVar91 != 1) {
                    uVar22 = video->extended_palette_obj_allocation_bitmap[local_170 + 1];
                    video->extended_palette_obj_slots[local_170 + 1] = puVar60;
                    uVar55 = uVar77 - 2;
                    puVar60 = puVar90 + 0x2000;
                    video->extended_palette_obj_allocation_bitmap[local_170 + 1] = uVar23 | uVar22;
                    if (uVar91 != 2) {
                      uVar22 = video->texture_allocation_bitmap[local_170];
                      video->texture_slots[local_170] = (u8 *)puVar60;
                      uVar55 = uVar77 - 3;
                      puVar60 = puVar90 + 0x3000;
                      video->texture_allocation_bitmap[local_170] = uVar23 | uVar22;
                      if (uVar91 != 3) {
                        uVar22 = video->texture_allocation_bitmap[local_170 + 1];
                        video->texture_slots[local_170 + 1] = (u8 *)puVar60;
                        uVar55 = uVar77 - 4;
                        puVar60 = puVar90 + 0x4000;
                        video->texture_allocation_bitmap[local_170 + 1] = uVar23 | uVar22;
                        if (uVar91 != 4) {
                          uVar22 = video->texture_allocation_bitmap[local_170 + 2];
                          video->texture_slots[local_170 + 2] = (u8 *)puVar60;
                          uVar55 = uVar77 - 5;
                          puVar60 = puVar90 + 0x5000;
                          video->texture_allocation_bitmap[local_170 + 2] = uVar23 | uVar22;
                          if (uVar91 != 5) {
                            uVar22 = video->texture_allocation_bitmap[local_170 + 3];
                            video->texture_slots[local_170 + 3] = (u8 *)puVar60;
                            video->texture_allocation_bitmap[local_170 + 3] = uVar23 | uVar22;
                            if (uVar91 == 7) {
                              uVar22 = video->texture_palette_allocation_bitmap[local_170];
                              video->texture_palette_slots[local_170] = puVar90 + 0x6000;
                              video->texture_palette_allocation_bitmap[local_170] = uVar23 | uVar22;
                              uVar55 = uVar77 - 7;
                              puVar60 = puVar90 + 0x7000;
                            }
                            else {
                              uVar55 = uVar77 - 6;
                              uVar69 = 6;
                              puVar60 = puVar90 + 0x6000;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                uVar65 = ((uVar77 - uVar91) - 8 >> 3) + 1;
                if (6 < (uVar77 - 1) - uVar91) {
                  auVar120._4_4_ = puVar60;
                  auVar120._0_4_ = puVar60;
                  auVar120._8_8_ = 0;
                  auVar121._4_4_ = CONCAT22(uVar23,uVar23);
                  auVar121._0_4_ = CONCAT22(uVar23,uVar23);
                  auVar121._8_8_ = 0;
                  puVar87 = video->extended_palette_obj_allocation_bitmap + uVar91 + local_170;
                  auVar1 = SIMDExpandImmediate(0,4,1);
                  auVar2 = SIMDExpandImmediate(0,2,0x80);
                  uVar91 = 0;
                  auVar119._8_8_ = 0x600000004000;
                  auVar119._0_8_ = 0x200000000000;
                  auVar120 = VectorAdd(auVar120 & auVar120 << 0x40,auVar119,4);
                  ppuVar58 = video->extended_palette_obj_slots + uVar91 + local_170;
                  puVar90 = puVar87;
                  do {
                    auVar119 = *(undefined (*) [16])puVar87;
                    auVar122 = VectorAdd(auVar120,auVar2,4);
                    uVar91 = uVar91 + 1;
                    *(longlong *)ppuVar58 = auVar120._0_8_;
                    *(longlong *)(ppuVar58 + 2) = auVar120._8_8_;
                    puVar87 = puVar87 + 8;
                    auVar120 = VectorAdd(auVar120,auVar1,4);
                    *(longlong *)(ppuVar58 + 4) = auVar122._0_8_;
                    *(longlong *)(ppuVar58 + 6) = auVar122._8_8_;
                    auVar119 = auVar119 | auVar121 & auVar121 << 0x40;
                    *(longlong *)puVar90 = auVar119._0_8_;
                    *(longlong *)(puVar90 + 4) = auVar119._8_8_;
                    ppuVar58 = ppuVar58 + 8;
                    puVar90 = puVar90 + 8;
                  } while (uVar91 < uVar65);
                  puVar60 = puVar60 + uVar65 * 0x8000;
                  uVar69 = uVar69 + uVar65 * 8;
                  uVar55 = uVar55 + uVar65 * -8;
                  if (uVar77 - uVar91 == uVar65 * 8) goto LAB_08042750;
                }
                video->extended_palette_obj_slots[local_170 + uVar69] = puVar60;
                puVar59[uVar69] = uVar23 | puVar59[uVar69];
                if (uVar55 != 1) {
                  video->extended_palette_obj_slots[local_170 + uVar69 + 1] = puVar60 + 0x1000;
                  puVar59[uVar69 + 1] = uVar23 | puVar59[uVar69 + 1];
                  if (uVar55 != 2) {
                    video->texture_slots[local_170 + uVar69] = (u8 *)(puVar60 + 0x2000);
                    puVar59[uVar69 + 2] = uVar23 | puVar59[uVar69 + 2];
                    if (uVar55 != 3) {
                      video->texture_slots[local_170 + uVar69 + 1] = (u8 *)(puVar60 + 0x3000);
                      puVar59[uVar69 + 3] = uVar23 | puVar59[uVar69 + 3];
                      if (uVar55 != 4) {
                        video->texture_slots[local_170 + uVar69 + 2] = (u8 *)(puVar60 + 0x4000);
                        puVar59[uVar69 + 4] = uVar23 | puVar59[uVar69 + 4];
                        if (uVar55 != 5) {
                          video->texture_slots[local_170 + uVar69 + 3] = (u8 *)(puVar60 + 0x5000);
                          puVar59[uVar69 + 5] = uVar23 | puVar59[uVar69 + 5];
                          if (uVar55 != 6) {
                            video->texture_palette_slots[local_170 + uVar69] = puVar60 + 0x6000;
                            puVar59[uVar69 + 6] = uVar23 | puVar59[uVar69 + 6];
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                ppuVar58 = video->extended_palette_bg_slots[1] + local_170 + 3;
                puVar60 = puVar59;
                do {
                  uVar22 = *puVar60;
                  ppuVar58 = ppuVar58 + 1;
                  *ppuVar58 = puVar90;
                  puVar90 = puVar90 + 0x1000;
                  puVar87 = puVar60 + 1;
                  *puVar60 = uVar23 | uVar22;
                  puVar60 = puVar87;
                } while (puVar59 + uVar77 != puVar87);
              }
LAB_08042750:
              uVar91 = 0;
              video->video_2d_engine[local_170].extended_obj_palette =
                   video->extended_palette_obj_slots[local_170];
              break;
            default:
              goto switchD_0803d0e8_caseD_7;
            }
            goto LAB_0803d138;
          case 4:
            switch(local_180) {
            case 0:
            case 1:
            case 7:
            case 8:
              goto switchD_0803d174_caseD_0;
            case 2:
              uVar55 = 4;
              uVar88 = 0x6200000;
              uVar91 = 0x80;
              local_140 = -0x200000;
              local_114 = 0;
              uVar79 = 0x10;
              goto LAB_0803fea4;
            case 3:
              goto switchD_0803d174_caseD_3;
            case 4:
              uVar79 = 0;
              uVar91 = uVar79;
              local_158 = uVar77 >> 1;
              break;
            case 5:
            case 6:
              uVar79 = 0;
              uVar91 = (uVar55 & 1) << 1;
              break;
            default:
              goto switchD_0803d0e8_caseD_7;
            }
LAB_080427d4:
            uVar77 = local_158 >> 3;
            ppuVar58 = (u16 **)(video->extended_palette_bg_allocation_bitmap[uVar79] +
                               uVar91 + uVar77);
            ppuVar85 = video->extended_palette_bg_slots[uVar79] + uVar91 + uVar77;
            ppuVar83 = video->extended_palette_bg_slots[uVar79] + uVar91;
            ppuVar97 = (u16 **)(video->extended_palette_bg_allocation_bitmap[uVar79] + uVar91);
            bVar100 = ppuVar83 <= ppuVar58;
            bVar98 = ppuVar58 == ppuVar83;
            if (bVar100 && !bVar98) {
              bVar100 = ppuVar97 <= ppuVar85;
              bVar98 = ppuVar85 == ppuVar97;
            }
            uVar23 = (ushort)(1 << (local_180 & 0xff));
            if (uVar77 < 0xc || bVar100 && !bVar98) {
              puVar59 = video->extended_palette_bg_allocation_bitmap[uVar79] + uVar91;
              ppuVar58 = video->extended_palette_bg_slots[uVar79] + uVar91;
              do {
                uVar22 = *puVar59;
                ppuVar83 = ppuVar58 + 1;
                *ppuVar58 = puVar90;
                puVar90 = puVar90 + 0x1000;
                *puVar59 = uVar23 | uVar22;
                puVar59 = puVar59 + 1;
                ppuVar58 = ppuVar83;
              } while (ppuVar83 != video->extended_palette_bg_slots[uVar79] + uVar91 + uVar77);
            }
            else {
              uVar55 = -((uint)((int)(video->extended_palette_bg_allocation_bitmap[uVar79] + uVar91)
                               * 0x20000000) >> 0x1e) & 7;
              if (uVar77 <= uVar55) {
                uVar55 = uVar77;
              }
              uVar69 = uVar91;
              uVar65 = uVar77;
              puVar59 = puVar90;
              if (uVar55 != 0) {
                uVar65 = uVar77 - 1;
                video->extended_palette_bg_slots[uVar79][uVar91] = puVar90;
                puVar59 = puVar90 + 0x1000;
                uVar69 = uVar91 + 1;
                video->extended_palette_bg_allocation_bitmap[uVar79][uVar91] =
                     uVar23 | video->extended_palette_bg_allocation_bitmap[uVar79][uVar91];
                if (uVar55 != 1) {
                  uVar22 = video->extended_palette_bg_allocation_bitmap[uVar79][uVar91 + 1];
                  video->extended_palette_bg_slots[uVar79][uVar91 + 1] = puVar90 + 0x1000;
                  puVar59 = puVar90 + 0x2000;
                  uVar65 = uVar77 - 2;
                  uVar69 = uVar91 + 2;
                  video->extended_palette_bg_allocation_bitmap[uVar79][uVar91 + 1] = uVar23 | uVar22
                  ;
                  if (uVar55 != 2) {
                    uVar22 = video->extended_palette_bg_allocation_bitmap[uVar79][uVar91 + 2];
                    video->extended_palette_bg_slots[uVar79][uVar91 + 2] = puVar90 + 0x2000;
                    puVar59 = puVar90 + 0x3000;
                    uVar65 = uVar77 - 3;
                    uVar69 = uVar91 + 3;
                    video->extended_palette_bg_allocation_bitmap[uVar79][uVar91 + 2] =
                         uVar23 | uVar22;
                    if (uVar55 != 3) {
                      uVar22 = video->extended_palette_bg_allocation_bitmap[uVar79][uVar91 + 3];
                      video->extended_palette_bg_slots[uVar79][uVar91 + 3] = puVar90 + 0x3000;
                      puVar59 = puVar90 + 0x4000;
                      uVar65 = uVar77 - 4;
                      uVar69 = uVar91 + 4;
                      video->extended_palette_bg_allocation_bitmap[uVar79][uVar91 + 3] =
                           uVar23 | uVar22;
                      if (uVar55 != 4) {
                        uVar22 = video->extended_palette_bg_allocation_bitmap[uVar79 + 1][uVar91];
                        video->extended_palette_bg_slots[uVar79 + 1][uVar91] = puVar90 + 0x4000;
                        puVar59 = puVar90 + 0x5000;
                        uVar65 = uVar77 - 5;
                        uVar69 = uVar91 + 5;
                        video->extended_palette_bg_allocation_bitmap[uVar79 + 1][uVar91] =
                             uVar23 | uVar22;
                        if (uVar55 != 5) {
                          uVar22 = video->extended_palette_bg_allocation_bitmap[uVar79 + 1]
                                   [uVar91 + 1];
                          video->extended_palette_bg_slots[uVar79 + 1][uVar91 + 1] =
                               puVar90 + 0x5000;
                          puVar59 = puVar90 + 0x6000;
                          uVar65 = uVar77 - 6;
                          uVar69 = uVar91 + 6;
                          video->extended_palette_bg_allocation_bitmap[uVar79 + 1][uVar91 + 1] =
                               uVar23 | uVar22;
                          if (uVar55 == 7) {
                            uVar22 = video->extended_palette_bg_allocation_bitmap[uVar79 + 1]
                                     [uVar91 + 2];
                            video->extended_palette_bg_slots[uVar79 + 1][uVar91 + 2] =
                                 puVar90 + 0x6000;
                            video->extended_palette_bg_allocation_bitmap[uVar79 + 1][uVar91 + 2] =
                                 uVar23 | uVar22;
                            uVar69 = uVar91 + 7;
                            uVar65 = uVar77 - 7;
                            puVar59 = puVar90 + 0x7000;
                          }
                        }
                      }
                    }
                  }
                }
              }
              uVar56 = ((uVar77 - uVar55) - 8 >> 3) + 1;
              if (6 < (uVar77 - 1) - uVar55) {
                auVar1 = SIMDExpandImmediate(0,4,1);
                auVar19._4_4_ = puVar59;
                auVar19._0_4_ = puVar59;
                auVar19._8_8_ = 0;
                auVar2 = SIMDExpandImmediate(0,2,0x80);
                auVar20._4_4_ = CONCAT22(uVar23,uVar23);
                auVar20._0_4_ = CONCAT22(uVar23,uVar23);
                auVar20._8_8_ = 0;
                puVar60 = video->extended_palette_bg_allocation_bitmap[uVar79] + uVar55 + uVar91;
                auVar46._8_8_ = 0x600000004000;
                auVar46._0_8_ = 0x200000000000;
                auVar120 = VectorAdd(auVar19 & auVar19 << 0x40,auVar46,4);
                uVar57 = 0;
                puVar90 = puVar60;
                ppuVar58 = video->extended_palette_bg_slots[uVar79] + uVar55 + uVar91;
                do {
                  auVar121 = *(undefined (*) [16])puVar60;
                  auVar119 = VectorAdd(auVar120,auVar2,4);
                  uVar57 = uVar57 + 1;
                  *(longlong *)ppuVar58 = auVar120._0_8_;
                  *(longlong *)(ppuVar58 + 2) = auVar120._8_8_;
                  puVar60 = puVar60 + 8;
                  auVar120 = VectorAdd(auVar120,auVar1,4);
                  *(longlong *)(ppuVar58 + 4) = auVar119._0_8_;
                  *(longlong *)(ppuVar58 + 6) = auVar119._8_8_;
                  auVar121 = auVar121 | auVar20 & auVar20 << 0x40;
                  *(longlong *)puVar90 = auVar121._0_8_;
                  *(longlong *)(puVar90 + 4) = auVar121._8_8_;
                  puVar90 = puVar90 + 8;
                  ppuVar58 = ppuVar58 + 8;
                } while (uVar57 < uVar56);
                puVar59 = puVar59 + uVar56 * 0x8000;
                uVar69 = uVar69 + uVar56 * 8;
                uVar65 = uVar65 + uVar56 * -8;
                if (uVar77 - uVar55 == uVar56 * 8) goto LAB_08042bc4;
              }
              video->extended_palette_bg_slots[uVar79][uVar69] = puVar59;
              video->extended_palette_bg_allocation_bitmap[uVar79][uVar69] =
                   uVar23 | video->extended_palette_bg_allocation_bitmap[uVar79][uVar69];
              if (uVar65 != 1) {
                video->extended_palette_bg_slots[uVar79][uVar69 + 1] = puVar59 + 0x1000;
                video->extended_palette_bg_allocation_bitmap[uVar79][uVar69 + 1] =
                     uVar23 | video->extended_palette_bg_allocation_bitmap[uVar79][uVar69 + 1];
                if (uVar65 != 2) {
                  video->extended_palette_bg_slots[uVar79][uVar69 + 2] = puVar59 + 0x2000;
                  video->extended_palette_bg_allocation_bitmap[uVar79][uVar69 + 2] =
                       uVar23 | video->extended_palette_bg_allocation_bitmap[uVar79][uVar69 + 2];
                  if (uVar65 != 3) {
                    video->extended_palette_bg_slots[uVar79][uVar69 + 3] = puVar59 + 0x3000;
                    video->extended_palette_bg_allocation_bitmap[uVar79][uVar69 + 3] =
                         uVar23 | video->extended_palette_bg_allocation_bitmap[uVar79][uVar69 + 3];
                    if (uVar65 != 4) {
                      video->extended_palette_bg_slots[uVar79 + 1][uVar69] = puVar59 + 0x4000;
                      video->extended_palette_bg_allocation_bitmap[uVar79 + 1][uVar69] =
                           uVar23 | video->extended_palette_bg_allocation_bitmap[uVar79 + 1][uVar69]
                      ;
                      if (uVar65 != 5) {
                        video->extended_palette_bg_slots[uVar79 + 1][uVar69 + 1] = puVar59 + 0x5000;
                        video->extended_palette_bg_allocation_bitmap[uVar79 + 1][uVar69 + 1] =
                             uVar23 | video->extended_palette_bg_allocation_bitmap[uVar79 + 1]
                                      [uVar69 + 1];
                        if (uVar65 != 6) {
                          video->extended_palette_bg_slots[uVar79 + 1][uVar69 + 2] =
                               puVar59 + 0x6000;
                          video->extended_palette_bg_allocation_bitmap[uVar79 + 1][uVar69 + 2] =
                               uVar23 | video->extended_palette_bg_allocation_bitmap[uVar79 + 1]
                                        [uVar69 + 2];
                        }
                      }
                    }
                  }
                }
              }
            }
LAB_08042bc4:
            ppuVar58 = video->video_2d_engine[uVar79].extended_bg_palettes;
            uVar23 = video->video_2d_engine[uVar79].bg_layers[1].bg_control;
            video->video_2d_engine[uVar79].bg_layers[0].extended_palette =
                 ppuVar58[((int)((uint)video->video_2d_engine[uVar79].bg_layers[0].bg_control <<
                                0x12) >> 0x1f) * -2];
            video->video_2d_engine[uVar79].bg_layers[1].extended_palette =
                 ppuVar58[((int)((uint)uVar23 << 0x12) >> 0x1f) * -2 + 1];
            video->video_2d_engine[uVar79].bg_layers[2].extended_palette = ppuVar58[2];
            video->video_2d_engine[uVar79].bg_layers[3].extended_palette = ppuVar58[3];
            goto LAB_0803d138;
          case 5:
            if (local_180 < 9) {
              uVar79 = 1;
              uVar91 = 1 << (local_180 & 0xff);
              if ((uVar91 & 0x19f) != 0) goto switchD_0803d174_caseD_0;
              if ((uVar91 & 0x60) != 0) {
                uVar79 = 2;
                local_170 = 0;
                goto LAB_0804243c;
              }
              uVar88 = 0x6000000;
              local_114 = 0xffffff80;
              uVar55 = 0;
              uVar91 = 0;
              local_140 = 0;
            }
            else {
              uVar91 = 0;
              uVar55 = 0;
              uVar88 = 0x6000000;
              uVar79 = 1;
              local_140 = 0;
              local_114 = 0xffffff80;
            }
LAB_0803fea4:
            local_11c = (u8 *)((uVar77 >> 4) << 0xe);
            unmap_memory_page_region_direct(pmVar53->memory_interface_arm9,uVar88,(u32)local_11c);
            vram_map_6 = (u8 **)0x0;
            goto LAB_0803fef0;
          case 6:
            goto switchD_0803d0e8_caseD_6;
          default:
switchD_0803d0e8_caseD_7:
            uVar91 = 0;
            uVar88 = 0x6000000;
            local_140 = 0;
            local_114 = 0xffffff80;
          }
          uVar55 = uVar91 >> 5;
          local_11c = (u8 *)((uVar77 >> 4) << 0xe);
          unmap_memory_page_region_direct(pmVar53->memory_interface_arm9,uVar88,(u32)local_11c);
          uVar79 = 1 << uVar55;
          vram_map_6 = (u8 **)(uVar91 & 0x1f);
LAB_0803fef0:
          local_170 = uVar77 >> 4;
          video->vram_map_dirty_bitmap_fine[uVar55] =
               video->vram_map_dirty_bitmap_fine[uVar55] |
               ~(-1 << (local_170 & 0xff)) << (int)vram_map_6;
          video->vram_map_dirty_bitmap_coarse = video->vram_map_dirty_bitmap_coarse | uVar79;
LAB_0803ff20:
          local_170 = uVar77 >> 4;
          puVar61 = video->vram_map_dirty_bit_numbers + uVar91;
          iVar78 = local_170 + uVar91;
          ppuVar54 = video->vram_map + uVar91;
          puVar59 = video->vram_map_allocation_bitmap + uVar91;
          puVar84 = (u8 *)((int)puVar90 + local_140);
          uVar23 = (ushort)(1 << (local_180 & 0xff));
          if ((local_170 < 0x14 ||
              (puVar59 < video->vram_map + iVar78 &&
               ppuVar54 < video->vram_map_allocation_bitmap + iVar78 ||
              ppuVar54 < video->vram_map_dirty_bit_numbers + iVar78 &&
              puVar61 < video->vram_map + iVar78)) ||
              puVar59 < video->vram_map_dirty_bit_numbers + iVar78 &&
              puVar61 < video->vram_map_allocation_bitmap + iVar78) {
            uVar77 = local_160;
            do {
              uVar22 = *puVar59;
              *ppuVar54 = puVar84;
              *puVar59 = uVar23 | uVar22;
              *puVar61 = (u8)uVar77;
              uVar77 = uVar77 + 1;
              ppuVar54 = ppuVar54 + 1;
              puVar59 = puVar59 + 1;
              puVar61 = puVar61 + 1;
            } while (uVar77 != local_170 + local_160);
          }
          else {
            local_140 = local_170;
            uVar77 = -((uint)((int)puVar59 * 0x20000000) >> 0x1e) & 7;
            if (local_170 <= uVar77) {
              uVar77 = local_170;
            }
            uVar55 = local_160;
            uVar79 = uVar91;
            if (uVar77 != 0) {
              uVar22 = *puVar59;
              *ppuVar54 = puVar84;
              uVar55 = local_160 + 1;
              *puVar59 = uVar23 | uVar22;
              uVar79 = uVar91 + 1;
              *puVar61 = uVar47;
              local_140 = local_170 - 1;
              if (uVar77 != 1) {
                uVar22 = video->vram_map_allocation_bitmap[uVar91 + 1];
                video->vram_map[uVar91 + 1] = puVar84;
                uVar55 = local_160 + 2;
                video->vram_map_allocation_bitmap[uVar91 + 1] = uVar23 | uVar22;
                local_140 = local_170 - 2;
                video->vram_map_dirty_bit_numbers[uVar91 + 1] = uVar47 + '\x01';
                uVar79 = uVar91 + 2;
                if (uVar77 != 2) {
                  uVar22 = video->vram_map_allocation_bitmap[uVar91 + 2];
                  video->vram_map[uVar91 + 2] = puVar84;
                  uVar55 = local_160 + 3;
                  video->vram_map_allocation_bitmap[uVar91 + 2] = uVar23 | uVar22;
                  local_140 = local_170 - 3;
                  video->vram_map_dirty_bit_numbers[uVar91 + 2] = uVar47 + '\x02';
                  uVar79 = uVar91 + 3;
                  if (uVar77 != 3) {
                    uVar22 = video->vram_map_allocation_bitmap[uVar91 + 3];
                    video->vram_map[uVar91 + 3] = puVar84;
                    uVar55 = local_160 + 4;
                    video->vram_map_allocation_bitmap[uVar91 + 3] = uVar23 | uVar22;
                    local_140 = local_170 - 4;
                    video->vram_map_dirty_bit_numbers[uVar91 + 3] = uVar47 + '\x03';
                    uVar79 = uVar91 + 4;
                    if (uVar77 != 4) {
                      uVar22 = video->vram_map_allocation_bitmap[uVar91 + 4];
                      video->vram_map[uVar91 + 4] = puVar84;
                      uVar55 = local_160 + 5;
                      video->vram_map_allocation_bitmap[uVar91 + 4] = uVar23 | uVar22;
                      local_140 = local_170 - 5;
                      video->vram_map_dirty_bit_numbers[uVar91 + 4] = uVar47 + '\x04';
                      uVar79 = uVar91 + 5;
                      if (uVar77 != 5) {
                        video->vram_map[uVar91 + 5] = puVar84;
                        uVar55 = local_160 + 6;
                        local_140 = local_170 - 6;
                        video->vram_map_allocation_bitmap[uVar91 + 5] =
                             uVar23 | video->vram_map_allocation_bitmap[uVar91 + 5];
                        video->vram_map_dirty_bit_numbers[uVar91 + 5] = uVar47 + '\x05';
                        uVar79 = uVar91 + 6;
                        if (uVar77 == 7) {
                          uVar22 = video->vram_map_allocation_bitmap[uVar91 + 6];
                          video->vram_map[uVar91 + 6] = puVar84;
                          uVar55 = local_160 + 7;
                          local_140 = local_170 - 7;
                          video->vram_map_allocation_bitmap[uVar91 + 6] = uVar23 | uVar22;
                          video->vram_map_dirty_bit_numbers[uVar91 + 6] = uVar47 + '\x06';
                          uVar79 = uVar91 + 7;
                        }
                      }
                    }
                  }
                }
              }
              if (local_170 == uVar77) goto LAB_08040680;
            }
            local_d4 = local_170 - 1;
            uVar69 = ((local_170 - uVar77) - 0x10 >> 4) + 1;
            iVar72 = uVar69 * 0x10;
            if (0xe < local_d4 - uVar77) {
              auVar11._4_4_ = uVar55;
              auVar11._0_4_ = uVar55;
              auVar11._8_8_ = 0;
              auVar1 = SIMDExpandImmediate(0,0,0x10);
              auVar2 = SIMDExpandImmediate(0,0,4);
              auVar120 = SIMDExpandImmediate(0,0,8);
              auVar121 = SIMDExpandImmediate(0,0,0xc);
              auVar34._8_8_ = 0x300000002;
              auVar34._0_8_ = 0x100000000;
              auVar119 = VectorAdd(auVar11 & auVar11 << 0x40,auVar34,4);
              puVar61 = video->vram_map_dirty_bit_numbers + uVar91 + uVar77;
              auVar12._4_4_ = CONCAT22(uVar23,uVar23);
              auVar12._0_4_ = CONCAT22(uVar23,uVar23);
              auVar12._8_8_ = 0;
              auVar12 = auVar12 & auVar12 << 0x40;
              local_128 = (u8 *)0x0;
              puVar59 = video->vram_map_allocation_bitmap + uVar77 + uVar91 + 0x10;
              ppuVar54 = video->vram_map + uVar77 + uVar91;
              puVar60 = video->vram_map_allocation_bitmap + uVar77 + uVar91 + 0x10;
              do {
                auVar113 = VectorAdd(auVar119,auVar2,4);
                auVar109 = VectorAdd(auVar119,auVar121,4);
                auVar115 = *(undefined (*) [16])(puVar59 + -8);
                auVar102 = VectorAdd(auVar119,auVar120,4);
                auVar122 = *(undefined (*) [16])(puVar59 + -0x10);
                local_128 = (u8 *)((int)local_128 + 1);
                *(undefined8 *)ppuVar54 = 0;
                *(undefined8 *)(ppuVar54 + 2) = 0;
                *(undefined8 *)(ppuVar54 + 4) = 0;
                *(undefined8 *)(ppuVar54 + 6) = 0;
                uVar110 = VectorCopyNarrow(auVar119,4);
                uVar111 = VectorCopyNarrow(auVar113,4);
                auVar114._0_8_ = VectorCopyNarrow(auVar102,4);
                auVar114._8_8_ = VectorCopyNarrow(auVar109,4);
                auVar119 = VectorAdd(auVar119,auVar1,4);
                auVar24._8_8_ = uVar111;
                auVar24._0_8_ = uVar110;
                uVar110 = VectorCopyNarrow(auVar24,2);
                uVar111 = VectorCopyNarrow(auVar114,2);
                auVar122 = auVar122 | auVar12;
                *(undefined8 *)(ppuVar54 + 8) = 0;
                *(undefined8 *)(ppuVar54 + 10) = 0;
                *(undefined8 *)(ppuVar54 + 0xc) = 0;
                *(undefined8 *)(ppuVar54 + 0xe) = 0;
                *(longlong *)(puVar60 + -0x10) = auVar122._0_8_;
                *(longlong *)(puVar60 + -0xc) = auVar122._8_8_;
                auVar115 = auVar12 | auVar115;
                *(longlong *)(puVar60 + -8) = auVar115._0_8_;
                *(longlong *)(puVar60 + -4) = auVar115._8_8_;
                *(undefined8 *)puVar61 = uVar110;
                *(undefined8 *)(puVar61 + 8) = uVar111;
                puVar61 = puVar61 + 0x10;
                puVar59 = puVar59 + 0x10;
                ppuVar54 = ppuVar54 + 0x10;
                puVar60 = puVar60 + 0x10;
              } while (local_128 < uVar69);
              uVar55 = uVar55 + iVar72;
              uVar79 = uVar79 + iVar72;
              local_140 = local_140 + uVar69 * -0x10;
              if (iVar72 - (local_170 - uVar77) == 0) goto LAB_08040680;
            }
            uVar22 = video->vram_map_allocation_bitmap[uVar79];
            uVar48 = (u8)uVar55;
            video->vram_map[uVar79] = puVar84;
            video->vram_map_allocation_bitmap[uVar79] = uVar23 | uVar22;
            video->vram_map_dirty_bit_numbers[uVar79] = uVar48;
            if (local_140 != 1) {
              video->vram_map[uVar79 + 1] = puVar84;
              video->vram_map_allocation_bitmap[uVar79 + 1] =
                   uVar23 | video->vram_map_allocation_bitmap[uVar79 + 1];
              video->vram_map_dirty_bit_numbers[uVar79 + 1] = uVar48 + '\x01';
              if (local_140 != 2) {
                video->vram_map[uVar79 + 2] = puVar84;
                video->vram_map_allocation_bitmap[uVar79 + 2] =
                     uVar23 | video->vram_map_allocation_bitmap[uVar79 + 2];
                video->vram_map_dirty_bit_numbers[uVar79 + 2] = uVar48 + '\x02';
                if (local_140 != 3) {
                  video->vram_map[uVar79 + 3] = puVar84;
                  video->vram_map_allocation_bitmap[uVar79 + 3] =
                       uVar23 | video->vram_map_allocation_bitmap[uVar79 + 3];
                  video->vram_map_dirty_bit_numbers[uVar79 + 3] = uVar48 + '\x03';
                  if (local_140 != 4) {
                    video->vram_map[uVar79 + 4] = puVar84;
                    video->vram_map_allocation_bitmap[uVar79 + 4] =
                         uVar23 | video->vram_map_allocation_bitmap[uVar79 + 4];
                    video->vram_map_dirty_bit_numbers[uVar79 + 4] = uVar48 + '\x04';
                    if (local_140 != 5) {
                      video->vram_map[uVar79 + 5] = puVar84;
                      video->vram_map_allocation_bitmap[uVar79 + 5] =
                           uVar23 | video->vram_map_allocation_bitmap[uVar79 + 5];
                      video->vram_map_dirty_bit_numbers[uVar79 + 5] = uVar48 + '\x05';
                      if (local_140 != 6) {
                        video->vram_map[uVar79 + 6] = puVar84;
                        video->vram_map_allocation_bitmap[uVar79 + 6] =
                             uVar23 | video->vram_map_allocation_bitmap[uVar79 + 6];
                        video->vram_map_dirty_bit_numbers[uVar79 + 6] = uVar48 + '\x06';
                        if (local_140 != 7) {
                          video->vram_map[uVar79 + 7] = puVar84;
                          video->vram_map_allocation_bitmap[uVar79 + 7] =
                               uVar23 | video->vram_map_allocation_bitmap[uVar79 + 7];
                          video->vram_map_dirty_bit_numbers[uVar79 + 7] = uVar48 + '\a';
                          if (local_140 != 8) {
                            video->vram_map[uVar79 + 8] = puVar84;
                            video->vram_map_allocation_bitmap[uVar79 + 8] =
                                 uVar23 | video->vram_map_allocation_bitmap[uVar79 + 8];
                            video->vram_map_dirty_bit_numbers[uVar79 + 8] = uVar48 + '\b';
                            if (local_140 != 9) {
                              video->vram_map[uVar79 + 9] = puVar84;
                              video->vram_map_allocation_bitmap[uVar79 + 9] =
                                   uVar23 | video->vram_map_allocation_bitmap[uVar79 + 9];
                              video->vram_map_dirty_bit_numbers[uVar79 + 9] = uVar48 + '\t';
                              if (local_140 != 10) {
                                video->vram_map[uVar79 + 10] = puVar84;
                                video->vram_map_allocation_bitmap[uVar79 + 10] =
                                     uVar23 | video->vram_map_allocation_bitmap[uVar79 + 10];
                                video->vram_map_dirty_bit_numbers[uVar79 + 10] = uVar48 + '\n';
                                if (local_140 != 0xb) {
                                  video->vram_map[uVar79 + 0xb] = puVar84;
                                  local_128._0_1_ = uVar48 + '\f';
                                  video->vram_map_allocation_bitmap[uVar79 + 0xb] =
                                       uVar23 | video->vram_map_allocation_bitmap[uVar79 + 0xb];
                                  video->vram_map_dirty_bit_numbers[uVar79 + 0xb] = uVar48 + '\v';
                                  if (local_140 != 0xc) {
                                    video->vram_map[uVar79 + 0xc] = puVar84;
                                    video->vram_map_allocation_bitmap[uVar79 + 0xc] =
                                         uVar23 | video->vram_map_allocation_bitmap[uVar79 + 0xc];
                                    video->vram_map_dirty_bit_numbers[uVar79 + 0xc] = (u8)local_128;
                                    if (local_140 != 0xd) {
                                      video->vram_map[uVar79 + 0xd] = puVar84;
                                      video->vram_map_allocation_bitmap[uVar79 + 0xd] =
                                           uVar23 | video->vram_map_allocation_bitmap[uVar79 + 0xd];
                                      video->vram_map_dirty_bit_numbers[uVar79 + 0xd] =
                                           uVar48 + '\r';
                                      if (local_140 != 0xe) {
                                        video->vram_map[uVar79 + 0xe] = puVar84;
                                        video->vram_map_allocation_bitmap[uVar79 + 0xe] =
                                             uVar23 | video->vram_map_allocation_bitmap
                                                      [uVar79 + 0xe];
                                        video->vram_map_dirty_bit_numbers[uVar79 + 0xe] =
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
LAB_08040680:
          if (local_114 < 0x80) {
            uVar55 = uVar91 + 8;
            uVar88 = (uVar91 + 0x1808) * 0x4000;
            unmap_memory_page_region_direct
                      (video->memory->memory_interface_arm9,uVar88,(u32)local_11c);
            uVar77 = uVar55 >> 5;
            puVar96 = (u8 *)((int)puVar90 - (uVar88 + 0xfa000000));
            puVar59 = video->vram_map_allocation_bitmap + iVar78 + 8;
            puVar90 = video->vram_map_allocation_bitmap + uVar91 + 8;
            puVar84 = video->vram_map_dirty_bit_numbers + iVar78 + 8;
            video->vram_map_dirty_bitmap_fine[uVar77] =
                 video->vram_map_dirty_bitmap_fine[uVar77] |
                 (1 << (local_170 & 0xff)) + -1 << (uVar55 & 0x1f);
            puVar61 = video->vram_map_dirty_bit_numbers + uVar91 + 8;
            bVar100 = puVar61 <= puVar59;
            bVar98 = puVar59 == (u16 *)puVar61;
            if (bVar100 && !bVar98) {
              bVar100 = puVar90 <= puVar84;
              bVar98 = (u16 *)puVar84 == puVar90;
            }
            video->vram_map_dirty_bitmap_coarse =
                 video->vram_map_dirty_bitmap_coarse | 1 << (uVar77 & 0xff);
            if ((local_170 < 0x14 ||
                (puVar61 < video->vram_map + iVar78 + 8 && video->vram_map + uVar91 + 8 < puVar84 ||
                puVar90 < video->vram_map + iVar78 + 8 && video->vram_map + uVar91 + 8 < puVar59))
                || bVar100 && !bVar98) {
              ppuVar54 = video->vram_map + uVar91 + 7;
              puVar61 = video->vram_map_dirty_bit_numbers + uVar91 + 7;
              uVar77 = local_160;
              do {
                uVar22 = *puVar90;
                ppuVar54 = ppuVar54 + 1;
                *ppuVar54 = puVar96;
                *puVar90 = uVar23 | uVar22;
                puVar61 = puVar61 + 1;
                *puVar61 = (u8)uVar77;
                uVar77 = uVar77 + 1;
                puVar90 = puVar90 + 1;
              } while (uVar77 != local_170 + local_160);
            }
            else {
              uVar77 = -((uint)((int)puVar90 * 0x20000000) >> 0x1e) & 7;
              if (local_170 <= uVar77) {
                uVar77 = local_170;
              }
              if (uVar77 == 0) {
                local_140 = local_160;
                local_12c = local_170;
                uVar79 = uVar55;
              }
              else {
                video->vram_map[uVar91 + 8] = puVar96;
                local_12c = local_170 - 1;
                local_140 = local_160 + 1;
                video->vram_map_allocation_bitmap[uVar91 + 8] =
                     uVar23 | video->vram_map_allocation_bitmap[uVar91 + 8];
                uVar79 = uVar91 + 9;
                *puVar61 = uVar47;
                if (uVar77 != 1) {
                  local_140 = local_160 + 2;
                  video->vram_map[uVar91 + 9] = puVar96;
                  local_12c = local_170 - 2;
                  video->vram_map_allocation_bitmap[uVar91 + 9] =
                       uVar23 | video->vram_map_allocation_bitmap[uVar91 + 9];
                  video->vram_map_dirty_bit_numbers[uVar91 + 9] = uVar47 + '\x01';
                  uVar79 = uVar91 + 10;
                  if (uVar77 != 2) {
                    local_140 = local_160 + 3;
                    video->vram_map[uVar91 + 10] = puVar96;
                    local_12c = local_170 - 3;
                    video->vram_map_allocation_bitmap[uVar91 + 10] =
                         uVar23 | video->vram_map_allocation_bitmap[uVar91 + 10];
                    video->vram_map_dirty_bit_numbers[uVar91 + 10] = uVar47 + '\x02';
                    uVar79 = uVar91 + 0xb;
                    if (uVar77 != 3) {
                      local_140 = local_160 + 4;
                      video->vram_map[uVar91 + 0xb] = puVar96;
                      local_12c = local_170 - 4;
                      video->vram_map_allocation_bitmap[uVar91 + 0xb] =
                           uVar23 | video->vram_map_allocation_bitmap[uVar91 + 0xb];
                      video->vram_map_dirty_bit_numbers[uVar91 + 0xb] = uVar47 + '\x03';
                      uVar79 = uVar91 + 0xc;
                      if (uVar77 != 4) {
                        local_140 = local_160 + 5;
                        video->vram_map[uVar91 + 0xc] = puVar96;
                        local_12c = local_170 - 5;
                        video->vram_map_allocation_bitmap[uVar91 + 0xc] =
                             uVar23 | video->vram_map_allocation_bitmap[uVar91 + 0xc];
                        video->vram_map_dirty_bit_numbers[uVar91 + 0xc] = uVar47 + '\x04';
                        uVar79 = uVar91 + 0xd;
                        if (uVar77 != 5) {
                          local_140 = local_160 + 6;
                          video->vram_map[uVar91 + 0xd] = puVar96;
                          local_12c = local_170 - 6;
                          video->vram_map_allocation_bitmap[uVar91 + 0xd] =
                               uVar23 | video->vram_map_allocation_bitmap[uVar91 + 0xd];
                          video->vram_map_dirty_bit_numbers[uVar91 + 0xd] = uVar47 + '\x05';
                          uVar79 = uVar91 + 0xe;
                          if (uVar77 == 7) {
                            video->vram_map[uVar91 + 0xe] = puVar96;
                            local_12c = local_170 - 7;
                            local_140 = local_160 + 7;
                            video->vram_map_allocation_bitmap[uVar91 + 0xe] =
                                 uVar23 | video->vram_map_allocation_bitmap[uVar91 + 0xe];
                            video->vram_map_dirty_bit_numbers[uVar91 + 0xe] = uVar47 + '\x06';
                            uVar79 = uVar91 + 0xf;
                          }
                        }
                      }
                    }
                  }
                }
                if (local_170 == uVar77) goto LAB_0804068c;
              }
              local_d4 = local_170 - 1;
              uVar69 = ((local_170 - uVar77) - 0x10 >> 4) + 1;
              iVar78 = uVar69 * 0x10;
              if (0xe < local_d4 - uVar77) {
                auVar1 = SIMDExpandImmediate(0,0,0x10);
                auVar2 = SIMDExpandImmediate(0,0,4);
                auVar120 = SIMDExpandImmediate(0,0,8);
                auVar121 = SIMDExpandImmediate(0,0,0xc);
                auVar17._4_4_ = local_140;
                auVar17._0_4_ = local_140;
                auVar17._8_8_ = 0;
                auVar18._4_4_ = CONCAT22(uVar23,uVar23);
                auVar18._0_4_ = CONCAT22(uVar23,uVar23);
                auVar18._8_8_ = 0;
                auVar18 = auVar18 & auVar18 << 0x40;
                auVar35._8_8_ = 0x300000002;
                auVar35._0_8_ = 0x100000000;
                auVar119 = VectorAdd(auVar17 & auVar17 << 0x40,auVar35,4);
                puVar59 = video->vram_map_allocation_bitmap + uVar77 + uVar91 + 0x18;
                uVar65 = 0;
                puVar90 = puVar59;
                ppuVar54 = video->vram_map + uVar77 + uVar91 + 8;
                local_128 = video->vram_map_dirty_bit_numbers + uVar55 + uVar77;
                do {
                  auVar113 = VectorAdd(auVar119,auVar2,4);
                  auVar109 = VectorAdd(auVar119,auVar121,4);
                  auVar115 = *(undefined (*) [16])(puVar59 + -8);
                  auVar102 = VectorAdd(auVar119,auVar120,4);
                  uVar65 = uVar65 + 1;
                  auVar122 = *(undefined (*) [16])(puVar59 + -0x10);
                  *(undefined8 *)ppuVar54 = 0;
                  *(undefined8 *)(ppuVar54 + 2) = 0;
                  *(undefined8 *)(ppuVar54 + 4) = 0;
                  *(undefined8 *)(ppuVar54 + 6) = 0;
                  puVar59 = puVar59 + 0x10;
                  *(undefined8 *)(ppuVar54 + 8) = 0;
                  *(undefined8 *)(ppuVar54 + 10) = 0;
                  *(undefined8 *)(ppuVar54 + 0xc) = 0;
                  *(undefined8 *)(ppuVar54 + 0xe) = 0;
                  uVar110 = VectorCopyNarrow(auVar119,4);
                  uVar111 = VectorCopyNarrow(auVar113,4);
                  auVar118._0_8_ = VectorCopyNarrow(auVar102,4);
                  auVar118._8_8_ = VectorCopyNarrow(auVar109,4);
                  auVar119 = VectorAdd(auVar119,auVar1,4);
                  auVar25._8_8_ = uVar111;
                  auVar25._0_8_ = uVar110;
                  uVar110 = VectorCopyNarrow(auVar25,2);
                  uVar111 = VectorCopyNarrow(auVar118,2);
                  auVar122 = auVar122 | auVar18;
                  *(longlong *)(puVar90 + -0x10) = auVar122._0_8_;
                  *(longlong *)(puVar90 + -0xc) = auVar122._8_8_;
                  auVar115 = auVar18 | auVar115;
                  *(longlong *)(puVar90 + -8) = auVar115._0_8_;
                  *(longlong *)(puVar90 + -4) = auVar115._8_8_;
                  *(undefined8 *)local_128 = uVar110;
                  *(undefined8 *)(local_128 + 8) = uVar111;
                  puVar90 = puVar90 + 0x10;
                  ppuVar54 = ppuVar54 + 0x10;
                  local_128 = local_128 + 0x10;
                } while (uVar65 < uVar69);
                local_12c = local_12c + uVar69 * -0x10;
                uVar79 = uVar79 + iVar78;
                local_140 = local_140 + iVar78;
                if (iVar78 - (local_170 - uVar77) == 0) goto LAB_0804068c;
              }
              uVar22 = video->vram_map_allocation_bitmap[uVar79];
              video->vram_map[uVar79] = puVar96;
              video->vram_map_allocation_bitmap[uVar79] = uVar23 | uVar22;
              video->vram_map_dirty_bit_numbers[uVar79] = (u8)local_140;
              if (local_12c != 1) {
                uVar22 = video->vram_map_allocation_bitmap[uVar79 + 1];
                video->vram_map[uVar79 + 1] = puVar96;
                video->vram_map_allocation_bitmap[uVar79 + 1] = uVar23 | uVar22;
                video->vram_map_dirty_bit_numbers[uVar79 + 1] = (u8)local_140 + '\x01';
                if (local_12c != 2) {
                  uVar22 = video->vram_map_allocation_bitmap[uVar79 + 2];
                  video->vram_map[uVar79 + 2] = puVar96;
                  video->vram_map_allocation_bitmap[uVar79 + 2] = uVar23 | uVar22;
                  video->vram_map_dirty_bit_numbers[uVar79 + 2] = (u8)local_140 + '\x02';
                  if (local_12c != 3) {
                    uVar22 = video->vram_map_allocation_bitmap[uVar79 + 3];
                    video->vram_map[uVar79 + 3] = puVar96;
                    video->vram_map_allocation_bitmap[uVar79 + 3] = uVar23 | uVar22;
                    video->vram_map_dirty_bit_numbers[uVar79 + 3] = (u8)local_140 + '\x03';
                    if (local_12c != 4) {
                      uVar22 = video->vram_map_allocation_bitmap[uVar79 + 4];
                      video->vram_map[uVar79 + 4] = puVar96;
                      video->vram_map_allocation_bitmap[uVar79 + 4] = uVar23 | uVar22;
                      video->vram_map_dirty_bit_numbers[uVar79 + 4] = (u8)local_140 + '\x04';
                      if (local_12c != 5) {
                        uVar22 = video->vram_map_allocation_bitmap[uVar79 + 5];
                        video->vram_map[uVar79 + 5] = puVar96;
                        video->vram_map_allocation_bitmap[uVar79 + 5] = uVar23 | uVar22;
                        video->vram_map_dirty_bit_numbers[uVar79 + 5] = (u8)local_140 + '\x05';
                        if (local_12c != 6) {
                          uVar22 = video->vram_map_allocation_bitmap[uVar79 + 6];
                          video->vram_map[uVar79 + 6] = puVar96;
                          video->vram_map_allocation_bitmap[uVar79 + 6] = uVar23 | uVar22;
                          video->vram_map_dirty_bit_numbers[uVar79 + 6] = (u8)local_140 + '\x06';
                          if (local_12c != 7) {
                            uVar22 = video->vram_map_allocation_bitmap[uVar79 + 7];
                            video->vram_map[uVar79 + 7] = puVar96;
                            video->vram_map_allocation_bitmap[uVar79 + 7] = uVar23 | uVar22;
                            video->vram_map_dirty_bit_numbers[uVar79 + 7] = (u8)local_140 + '\a';
                            if (local_12c != 8) {
                              uVar22 = video->vram_map_allocation_bitmap[uVar79 + 8];
                              video->vram_map[uVar79 + 8] = puVar96;
                              video->vram_map_allocation_bitmap[uVar79 + 8] = uVar23 | uVar22;
                              video->vram_map_dirty_bit_numbers[uVar79 + 8] = (u8)local_140 + '\b';
                              if (local_12c != 9) {
                                uVar22 = video->vram_map_allocation_bitmap[uVar79 + 9];
                                video->vram_map[uVar79 + 9] = puVar96;
                                video->vram_map_allocation_bitmap[uVar79 + 9] = uVar23 | uVar22;
                                video->vram_map_dirty_bit_numbers[uVar79 + 9] = (u8)local_140 + '\t'
                                ;
                                if (local_12c != 10) {
                                  uVar22 = video->vram_map_allocation_bitmap[uVar79 + 10];
                                  video->vram_map[uVar79 + 10] = puVar96;
                                  video->vram_map_allocation_bitmap[uVar79 + 10] = uVar23 | uVar22;
                                  video->vram_map_dirty_bit_numbers[uVar79 + 10] =
                                       (u8)local_140 + '\n';
                                  if (local_12c != 0xb) {
                                    uVar22 = video->vram_map_allocation_bitmap[uVar79 + 0xb];
                                    video->vram_map[uVar79 + 0xb] = puVar96;
                                    video->vram_map_allocation_bitmap[uVar79 + 0xb] =
                                         uVar23 | uVar22;
                                    video->vram_map_dirty_bit_numbers[uVar79 + 0xb] =
                                         (u8)local_140 + '\v';
                                    if (local_12c != 0xc) {
                                      uVar22 = video->vram_map_allocation_bitmap[uVar79 + 0xc];
                                      video->vram_map[uVar79 + 0xc] = puVar96;
                                      video->vram_map_allocation_bitmap[uVar79 + 0xc] =
                                           uVar23 | uVar22;
                                      video->vram_map_dirty_bit_numbers[uVar79 + 0xc] =
                                           (u8)local_140 + '\f';
                                      if (local_12c != 0xd) {
                                        video->vram_map[uVar79 + 0xd] = puVar96;
                                        video->vram_map_allocation_bitmap[uVar79 + 0xd] =
                                             uVar23 | video->vram_map_allocation_bitmap
                                                      [uVar79 + 0xd];
                                        video->vram_map_dirty_bit_numbers[uVar79 + 0xd] =
                                             (u8)local_140 + '\r';
                                        if (local_12c != 0xe) {
                                          video->vram_map[uVar79 + 0xe] = puVar96;
                                          video->vram_map_allocation_bitmap[uVar79 + 0xe] =
                                               uVar23 | video->vram_map_allocation_bitmap
                                                        [uVar79 + 0xe];
                                          video->vram_map_dirty_bit_numbers[uVar79 + 0xe] =
                                               (u8)local_140 + '\x0e';
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
LAB_0804068c:
          uVar79 = 6;
LAB_0803d138:
          uVar49 = CONCAT35(0,CONCAT14(bVar21,uVar79));
          auVar1._8_4_ = uVar91;
          auVar1._0_8_ = uVar49;
          auVar1._12_4_ = local_158;
          local_17c->vram_bank_maps[0].address_space_type = (int)uVar49;
          local_17c->vram_bank_maps[0].map_setting = (int)(uVar49 >> 0x20);
          local_17c->vram_bank_maps[0].region_offset = (int)auVar1._8_8_;
          local_17c->vram_bank_maps[0].region_size = (int)((ulonglong)auVar1._8_8_ >> 0x20);
LAB_0803d004:
          local_184 = local_184 >> 1;
          local_180 = local_180 + 1;
          local_17c = (video_struct *)&local_17c->vram_bank_maps[0].region_offset;
          local_174 = local_174 + 1;
          vram_map_allocation_bitmap_8 = vram_map_allocation_bitmap_8 + 2;
          local_160 = local_160 + 8;
        } while (local_184 != 0);
      }
    }
    local_15c = (video_struct *)&local_15c->vram_bank_maps[0].region_offset;
    vram_map_9 = (u8 **)((int)vram_map_9 + 1);
    local_150 = local_150 + 1;
    if (vram_map_9 == (u8 **)0x9) {
      (video->capture_settings).hires_valid[0] = '\0';
      iVar78 = __stack_chk_guard;
      (video->capture_settings).hires_valid[1] = '\0';
      (video->capture_settings).hires_valid[2] = '\0';
      (video->capture_settings).hires_valid[3] = '\0';
      video->vram_abcd_dirty = 0;
      video->vram_efg_dirty = 0;
      (video->texture_cache).texture_slots_dirty = 0;
      (video->texture_cache).texture_palette_slots_dirty = 0;
      if (iVar50 != iVar78) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      flush_texture_cache(&video->texture_cache);
      return;
    }
  } while( true );
}


