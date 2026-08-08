/*
 * Ghidra decompilation
 *
 * Function : remap_vram
 * Address  : 0802f694
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable bank_bits_offset_1:u32[r3:4] conflicts with parameter, skipped. */

void remap_vram(video_struct *video,u8 *vram_buffer,u32 vram_region,u32 vram_map_setting)

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
  uint uVar53;
  memory_struct *pmVar54;
  memory_struct *memory;
  u32 allocation_mask;
  u8 **ppuVar55;
  uint uVar56;
  u16 **ppuVar57;
  u16 **palette_ram;
  u16 *puVar58;
  u16 *puVar59;
  ushort *puVar60;
  u16 *puVar61;
  uint uVar62;
  u32 allocation_mask_1;
  u32 uVar63;
  uint uVar64;
  u16 *puVar65;
  uint uVar66;
  uint uVar67;
  int iVar68;
  int iVar69;
  video_2d_bg_layer_struct *bg_layers;
  u16 *puVar70;
  u16 *puVar71;
  uint uVar72;
  uint uVar73;
  u32 vram_region_size;
  u8 **vram_map;
  u8 **vram_map_2;
  u8 **vram_map_6;
  int iVar74;
  u8 **ppuVar75;
  int iVar76;
  u8 **vram_map_7;
  u32 remap_banks;
  u16 *vram_map_allocation_bitmap;
  u16 *vram_map_allocation_bitmap_1;
  u16 *vram_map_allocation_bitmap_2;
  u16 *vram_map_allocation_bitmap_3;
  u16 *vram_map_allocation_bitmap_4;
  u16 *vram_map_allocation_bitmap_5;
  u32 vram_bank_dirty_bits;
  u16 *vram_map_allocation_bitmap_6;
  u16 *vram_map_allocation_bitmap_9;
  u8 *vram_map_dirty_bit_numbers_6;
  u32 allocation_mask_2;
  undefined (*pauVar77) [16];
  u8 *vram_map_dirty_bit_numbers_9;
  u8 *puVar78;
  uint uVar79;
  u16 **ppuVar80;
  u8 *puVar81;
  undefined (*pauVar82) [16];
  u16 *puVar83;
  undefined8 *puVar84;
  int iVar85;
  u16 *puVar86;
  u8 **ppuVar87;
  uint uVar88;
  byte *pbVar89;
  uint uVar90;
  uint uVar91;
  u8 *puVar92;
  u8 **ppuVar93;
  u16 *puVar94;
  u8 **ppuVar95;
  bool bVar96;
  bool bVar97;
  bool bVar98;
  bool bVar99;
  undefined auVar100 [16];
  undefined auVar101 [16];
  undefined auVar102 [16];
  undefined auVar103 [16];
  undefined auVar104 [16];
  undefined auVar105 [16];
  undefined auVar106 [16];
  undefined auVar107 [16];
  undefined8 uVar108;
  undefined8 uVar109;
  undefined8 uVar110;
  undefined auVar111 [16];
  undefined auVar112 [16];
  undefined auVar113 [16];
  undefined auVar114 [16];
  undefined auVar115 [16];
  undefined auVar116 [16];
  undefined auVar117 [16];
  undefined auVar118 [16];
  undefined auVar119 [16];
  undefined auVar120 [16];
  uint local_17c;
  uint local_178;
  video_struct *local_174;
  u16 *vram_map_allocation_bitmap_8;
  u8 **local_16c;
  uint local_168;
  u32 dirty_bit_number_3;
  u8 **vram_map_9;
  uint local_154;
  u8 **vram_map_8;
  uint local_140;
  u8 *local_130;
  uint local_120;
  u8 *local_108;
  undefined8 *local_d8;
  u8 **local_d0;
  uint local_cc;
  int local_c8;
  uint local_c4;
  u32 vram_region_sizes [9];
  
  iVar50 = __stack_chk_guard;
  if (video->vram_bank_maps[vram_region].map_setting != vram_map_setting) {
    video->remap_banks = 0;
    remap_vram_body(video,vram_buffer,vram_region,vram_map_setting,1);
    local_17c = (uint)video->remap_banks;
    if (local_17c != 0) {
      puVar70 = video->vram_map_allocation_bitmap + 0x82;
      local_178 = 0;
      puVar71 = video->vram_map_allocation_bitmap + 0x83;
      puVar51 = video->vram_map_allocation_bitmap + 0x80;
      vram_map_9 = (u8 **)0x0;
      puVar61 = video->vram_map_allocation_bitmap + 0x87;
      puVar52 = video->vram_map_allocation_bitmap + 0x84;
      puVar65 = video->vram_map_allocation_bitmap + 0x86;
      uVar72 = -((uint)((int)video << 0x1d) >> 0x1e) & 7;
      local_16c = video->vram_bank_ptrs;
      uVar91 = -((uint)((int)puVar71 * 0x20000000) >> 0x1e) & 7;
      uVar88 = -((uint)((int)video << 0x1d) >> 0x1e) & 7;
      uVar53 = -((uint)((int)puVar61 * 0x20000000) >> 0x1e) & 7;
      uVar62 = -((uint)((int)video->vram_map_allocation_bitmap * 0x20000000) >> 0x1e) & 7;
      uVar66 = -((uint)((int)video->vram_map_allocation_bitmap * 0x20000000) >> 0x1e) & 7;
      vram_map_allocation_bitmap_8 = (u16 *)video->vram_control_ptrs;
      local_174 = video;
      do {
        if ((local_17c & 1) == 0) goto LAB_0802f81c;
        pbVar89 = *(byte **)vram_map_allocation_bitmap_8;
        local_174->vram_bank_maps[0].map_setting = 0xffffffff;
        vram_region_sizes[0] = 0x80;
        vram_region_sizes[1] = 0x80;
        bVar21 = *pbVar89;
        vram_region_sizes[2] = 0x80;
        vram_region_sizes[3] = 0x80;
        vram_region_sizes[4] = 0x40;
        vram_region_sizes[5] = 0x10;
        vram_region_sizes[6] = 0x10;
        vram_region_sizes[7] = 0x20;
        vram_region_sizes[8] = 0x10;
        pmVar54 = video->memory;
        puVar86 = (u16 *)*local_16c;
        uVar73 = vram_region_sizes[local_178];
        local_154 = uVar73;
        if (-1 < (char)bVar21) {
switchD_0802f8fc_caseD_6:
          iVar74 = 0xb;
LAB_0802f958:
          ppuVar87 = (u8 **)0x0;
          goto LAB_0802f95c;
        }
        uVar67 = (uint)(bVar21 >> 3);
        ppuVar87 = (u8 **)(uVar67 & 3);
        uVar47 = (u8)vram_map_9;
        switch(bVar21 & 7) {
        case 0:
          switch(local_178) {
          case 0:
          case 1:
          case 2:
          case 3:
            uVar63 = (local_178 + 0x340) * 0x20000;
            local_140 = local_178 * -0x20000 + -0x800000;
            ppuVar87 = vram_map_9 + 0x80;
            local_d8 = (undefined8 *)(vram_map_9 + 0x60);
            break;
          case 4:
            ppuVar87 = (u8 **)0x220;
            uVar63 = 0x6880000;
            local_140 = -0x880000;
            local_d8 = (undefined8 *)0x1a0;
            break;
          case 5:
          case 6:
            local_140 = local_178 * -0x4000 + -0x87c000;
            ppuVar87 = (u8 **)(local_178 + 0x21f);
            local_d8 = (undefined8 *)(local_178 + 0x19f);
            uVar63 = (local_178 + 0x1a1f) * 0x4000;
            break;
          case 7:
            local_140 = -0x898000;
            ppuVar87 = (u8 **)0x226;
            uVar63 = 0x6898000;
            local_d8 = (undefined8 *)0x1a6;
            break;
          case 8:
            ppuVar87 = (u8 **)0x228;
            uVar63 = 0x68a0000;
            local_140 = -0x8a0000;
            local_d8 = (undefined8 *)0x1a8;
            break;
          default:
            goto switchD_0802f8fc_caseD_7;
          }
          local_108 = (u8 *)((uVar73 >> 4) << 0xe);
          unmap_memory_page_region_direct(pmVar54->memory_interface_arm9,uVar63,(u32)local_108);
          goto LAB_08032a40;
        case 1:
          switch(local_178) {
          case 0:
          case 1:
          case 2:
          case 3:
            ppuVar87 = (u8 **)((int)ppuVar87 << 3);
LAB_0803410c:
            local_d8 = (undefined8 *)(ppuVar87 + -0x20);
            uVar63 = (int)(ppuVar87 + 0x600) * 0x4000;
            local_140 = (int)(ppuVar87 + 0x600) * -0x4000 + 0x6000000;
            goto LAB_08034124;
          default:
            goto switchD_0802f8fc_caseD_7;
          case 5:
          case 6:
            ppuVar87 = (u8 **)((uVar67 & 1) + (uVar67 & 2) * 2);
LAB_080331b8:
            uVar73 = uVar73 >> 4;
            uVar63 = (int)(ppuVar87 + 0x600) * 0x4000;
            unmap_memory_page_region_direct(pmVar54->memory_interface_arm9,uVar63,uVar73 << 0xe);
            uVar67 = (uint)ppuVar87 >> 5;
            iVar76 = (1 << (uVar73 & 0xff)) + -1;
            ppuVar95 = (u8 **)((int)ppuVar87 * 2 + 0x117c);
            iVar74 = (uVar73 + 0x26 + (int)ppuVar87) * 4;
            ppuVar75 = ppuVar87 + 0x65f;
            video->vram_map_dirty_bitmap_fine[uVar67] =
                 video->vram_map_dirty_bitmap_fine[uVar67] | iVar76 << ((uint)ppuVar87 & 0x1f);
            iVar68 = uVar73 + 0x8be + (int)ppuVar87;
            iVar69 = iVar74 + ((int)ppuVar87 + 0x8beU) * -2;
            bVar96 = iVar69 == 0;
            ppuVar55 = ppuVar95;
            if (bVar96 || iVar74 < (int)ppuVar95) {
              iVar69 = iVar74 - (int)ppuVar75;
              bVar96 = iVar69 == 0;
              ppuVar55 = ppuVar75;
            }
            video->vram_map_dirty_bitmap_coarse = video->vram_map_dirty_bitmap_coarse | 1 << uVar67;
            puVar92 = video->vram_map_dirty_bit_numbers;
            puVar78 = (u8 *)((int)puVar86 - (uVar63 + 0xfa000000));
            puVar59 = video->vram_map_allocation_bitmap;
            uVar23 = (ushort)(1 << (local_178 & 0xff));
            if ((int)ppuVar75 + iVar68 * -2 < 0 == SBORROW4((int)ppuVar75,iVar68 * 2) &&
                ((bVar96 || iVar69 < 0 != SBORROW4(iVar74,(int)ppuVar55)) && 0x13 < uVar73)) {
              uVar67 = -((uint)(((int)ppuVar95 + (int)(video->vram_map_allocation_bitmap + -0x8be))
                               * 0x20000000) >> 0x1e) & 7;
              if (uVar73 <= uVar67) {
                uVar67 = uVar73;
              }
              ppuVar95 = vram_map_9;
              ppuVar55 = ppuVar87;
              local_130 = (u8 *)uVar73;
              if (uVar67 != 0) {
                video->vram_map[(int)ppuVar87] = puVar78;
                ppuVar95 = (u8 **)((int)vram_map_9 + 1);
                local_130 = (u8 *)(uVar73 - 1);
                ppuVar55 = (u8 **)((int)ppuVar87 + 1);
                puVar59[(int)ppuVar87] = uVar23 | puVar59[(int)ppuVar87];
                puVar92[(int)ppuVar87] = uVar47;
                if (uVar67 != 1) {
                  local_130 = (u8 *)(uVar73 - 2);
                  video->vram_map[(int)ppuVar87 + 1] = puVar78;
                  ppuVar95 = (u8 **)((int)vram_map_9 + 2);
                  puVar59[(int)ppuVar55] = uVar23 | puVar59[(int)ppuVar55];
                  puVar92[(int)ppuVar55] = uVar47 + '\x01';
                  ppuVar55 = (u8 **)((int)ppuVar87 + 2);
                  if (uVar67 != 2) {
                    video->vram_map[(int)ppuVar87 + 2] = puVar78;
                    ppuVar95 = (u8 **)((int)vram_map_9 + 3);
                    local_130 = (u8 *)(uVar73 - 3);
                    puVar59[(int)ppuVar55] = uVar23 | puVar59[(int)ppuVar55];
                    puVar92[(int)ppuVar55] = uVar47 + '\x02';
                    ppuVar55 = (u8 **)((int)ppuVar87 + 3);
                    if (uVar67 != 3) {
                      uVar22 = puVar59[(int)ppuVar55];
                      video->vram_map[(int)ppuVar87 + 3] = puVar78;
                      ppuVar95 = vram_map_9 + 1;
                      local_130 = (u8 *)(uVar73 - 4);
                      puVar59[(int)ppuVar55] = uVar23 | uVar22;
                      puVar92[(int)ppuVar55] = uVar47 + '\x03';
                      ppuVar55 = ppuVar87 + 1;
                      if (uVar67 != 4) {
                        uVar22 = puVar59[(int)ppuVar55];
                        video->vram_map[(int)ppuVar55] = puVar78;
                        ppuVar95 = (u8 **)((int)vram_map_9 + 5);
                        local_130 = (u8 *)(uVar73 - 5);
                        puVar59[(int)ppuVar55] = uVar23 | uVar22;
                        puVar92[(int)ppuVar55] = uVar47 + '\x04';
                        ppuVar55 = (u8 **)((int)ppuVar87 + 5);
                        if (uVar67 != 5) {
                          uVar22 = puVar59[(int)ppuVar55];
                          video->vram_map[(int)ppuVar87 + 5] = puVar78;
                          ppuVar95 = (u8 **)((int)vram_map_9 + 6);
                          local_130 = (u8 *)(uVar73 - 6);
                          puVar59[(int)ppuVar55] = uVar23 | uVar22;
                          puVar92[(int)ppuVar55] = uVar47 + '\x05';
                          ppuVar55 = (u8 **)((int)ppuVar87 + 6);
                          if (uVar67 == 7) {
                            video->vram_map[(int)ppuVar87 + 6] = puVar78;
                            ppuVar95 = (u8 **)((int)vram_map_9 + 7);
                            local_130 = (u8 *)(uVar73 - 7);
                            puVar59[(int)ppuVar55] = uVar23 | puVar59[(int)ppuVar55];
                            puVar92[(int)ppuVar55] = uVar47 + '\x06';
                            ppuVar55 = (u8 **)((int)ppuVar87 + 7);
                          }
                        }
                      }
                    }
                  }
                }
                if (uVar73 == uVar67) goto LAB_080339d0;
              }
              local_d8 = (undefined8 *)(uVar73 - 1);
              uVar64 = ((uVar73 - uVar67) - 0x10 >> 4) + 1;
              if (0xe < (int)local_d8 - uVar67) {
                auVar13._4_4_ = ppuVar95;
                auVar13._0_4_ = ppuVar95;
                auVar13._8_8_ = 0;
                auVar1 = SIMDExpandImmediate(0,0,0x10);
                auVar2 = SIMDExpandImmediate(0,0,4);
                auVar117 = SIMDExpandImmediate(0,0,8);
                auVar119 = SIMDExpandImmediate(0,0,0xc);
                auVar14._4_4_ = CONCAT22(uVar23,uVar23);
                auVar14._0_4_ = CONCAT22(uVar23,uVar23);
                auVar14._8_8_ = 0;
                auVar14 = auVar14 & auVar14 << 0x40;
                auVar36._8_8_ = 0x300000002;
                auVar36._0_8_ = 0x100000000;
                auVar118 = VectorAdd(auVar13 & auVar13 << 0x40,auVar36,4);
                local_120 = 0;
                puVar58 = video->vram_map_allocation_bitmap + (int)ppuVar87 + uVar67 + 0x10;
                puVar83 = video->vram_map_allocation_bitmap + (int)ppuVar87 + uVar67 + 0x10;
                ppuVar93 = video->vram_map + uVar67 + (int)ppuVar87;
                local_d8 = (undefined8 *)((int)ppuVar75 + (int)video->vram_bank_maps + (uVar67 - 8))
                ;
                do {
                  auVar111 = VectorAdd(auVar118,auVar2,4);
                  auVar107 = VectorAdd(auVar118,auVar119,4);
                  auVar113 = *(undefined (*) [16])(puVar58 + -8);
                  auVar100 = VectorAdd(auVar118,auVar117,4);
                  auVar120 = *(undefined (*) [16])(puVar58 + -0x10);
                  local_120 = local_120 + 1;
                  *(undefined8 *)ppuVar93 = 0;
                  *(undefined8 *)(ppuVar93 + 2) = 0;
                  *(undefined8 *)(ppuVar93 + 4) = 0;
                  *(undefined8 *)(ppuVar93 + 6) = 0;
                  uVar108 = VectorCopyNarrow(auVar118,4);
                  uVar109 = VectorCopyNarrow(auVar111,4);
                  auVar114._0_8_ = VectorCopyNarrow(auVar100,4);
                  auVar114._8_8_ = VectorCopyNarrow(auVar107,4);
                  auVar118 = VectorAdd(auVar118,auVar1,4);
                  auVar26._8_8_ = uVar109;
                  auVar26._0_8_ = uVar108;
                  uVar108 = VectorCopyNarrow(auVar26,2);
                  uVar109 = VectorCopyNarrow(auVar114,2);
                  auVar120 = auVar120 | auVar14;
                  *(undefined8 *)(ppuVar93 + 8) = 0;
                  *(undefined8 *)(ppuVar93 + 10) = 0;
                  *(undefined8 *)(ppuVar93 + 0xc) = 0;
                  *(undefined8 *)(ppuVar93 + 0xe) = 0;
                  *(longlong *)(puVar83 + -0x10) = auVar120._0_8_;
                  *(longlong *)(puVar83 + -0xc) = auVar120._8_8_;
                  auVar113 = auVar14 | auVar113;
                  *(longlong *)(puVar83 + -8) = auVar113._0_8_;
                  *(longlong *)(puVar83 + -4) = auVar113._8_8_;
                  *local_d8 = uVar108;
                  local_d8[1] = uVar109;
                  puVar58 = puVar58 + 0x10;
                  puVar83 = puVar83 + 0x10;
                  ppuVar93 = ppuVar93 + 0x10;
                  local_d8 = local_d8 + 2;
                } while (local_120 < uVar64);
                local_130 = (u8 *)((int)local_130 + uVar64 * -0x10);
                ppuVar95 = ppuVar95 + uVar64 * 4;
                ppuVar55 = ppuVar55 + uVar64 * 4;
                if (uVar73 - uVar67 == uVar64 * 0x10) goto LAB_080339d0;
              }
              uVar48 = (u8)ppuVar95;
              video->vram_map[(int)ppuVar55] = puVar78;
              iVar74 = (int)ppuVar55 + 1;
              puVar59[(int)ppuVar55] = uVar23 | puVar59[(int)ppuVar55];
              puVar92[(int)ppuVar55] = uVar48;
              if (local_130 != (u8 *)0x1) {
                video->vram_map[(int)ppuVar55 + 1] = puVar78;
                local_d8._0_1_ = uVar48 + '\x02';
                iVar69 = (int)ppuVar55 + 2;
                puVar59[iVar74] = uVar23 | puVar59[iVar74];
                puVar92[iVar74] = uVar48 + '\x01';
                if (local_130 != (u8 *)0x2) {
                  video->vram_map[(int)ppuVar55 + 2] = puVar78;
                  iVar74 = (int)ppuVar55 + 3;
                  puVar59[iVar69] = uVar23 | puVar59[iVar69];
                  puVar92[iVar69] = (u8)local_d8;
                  if (local_130 != (u8 *)0x3) {
                    video->vram_map[(int)ppuVar55 + 3] = puVar78;
                    local_d8._0_1_ = uVar48 + '\x04';
                    ppuVar95 = ppuVar55 + 1;
                    puVar59[iVar74] = uVar23 | puVar59[iVar74];
                    puVar92[iVar74] = uVar48 + '\x03';
                    if (local_130 != (u8 *)0x4) {
                      video->vram_map[(int)ppuVar95] = puVar78;
                      iVar74 = (int)ppuVar55 + 5;
                      puVar59[(int)ppuVar95] = uVar23 | puVar59[(int)ppuVar95];
                      puVar92[(int)ppuVar95] = (u8)local_d8;
                      if (local_130 != (u8 *)0x5) {
                        video->vram_map[(int)ppuVar55 + 5] = puVar78;
                        local_d8._0_1_ = uVar48 + '\x06';
                        iVar69 = (int)ppuVar55 + 6;
                        puVar59[iVar74] = uVar23 | puVar59[iVar74];
                        puVar92[iVar74] = uVar48 + '\x05';
                        if (local_130 != (u8 *)0x6) {
                          video->vram_map[(int)ppuVar55 + 6] = puVar78;
                          iVar74 = (int)ppuVar55 + 7;
                          puVar59[iVar69] = uVar23 | puVar59[iVar69];
                          puVar92[iVar69] = (u8)local_d8;
                          if (local_130 != (u8 *)0x7) {
                            video->vram_map[(int)ppuVar55 + 7] = puVar78;
                            local_d8._0_1_ = uVar48 + '\b';
                            ppuVar95 = ppuVar55 + 2;
                            puVar59[iVar74] = uVar23 | puVar59[iVar74];
                            puVar92[iVar74] = uVar48 + '\a';
                            if (local_130 != (u8 *)0x8) {
                              video->vram_map[(int)ppuVar95] = puVar78;
                              iVar74 = (int)ppuVar55 + 9;
                              puVar59[(int)ppuVar95] = uVar23 | puVar59[(int)ppuVar95];
                              puVar92[(int)ppuVar95] = (u8)local_d8;
                              if (local_130 != (u8 *)0x9) {
                                video->vram_map[(int)ppuVar55 + 9] = puVar78;
                                local_d8._0_1_ = uVar48 + '\n';
                                iVar69 = (int)ppuVar55 + 10;
                                puVar59[iVar74] = uVar23 | puVar59[iVar74];
                                puVar92[iVar74] = uVar48 + '\t';
                                if (local_130 != (u8 *)0xa) {
                                  video->vram_map[(int)ppuVar55 + 10] = puVar78;
                                  iVar74 = (int)ppuVar55 + 0xb;
                                  puVar59[iVar69] = uVar23 | puVar59[iVar69];
                                  puVar92[iVar69] = (u8)local_d8;
                                  if (local_130 != (u8 *)0xb) {
                                    video->vram_map[(int)ppuVar55 + 0xb] = puVar78;
                                    local_d8._0_1_ = uVar48 + '\f';
                                    ppuVar95 = ppuVar55 + 3;
                                    puVar59[iVar74] = uVar23 | puVar59[iVar74];
                                    puVar92[iVar74] = uVar48 + '\v';
                                    if (local_130 != (u8 *)0xc) {
                                      video->vram_map[(int)ppuVar95] = puVar78;
                                      iVar74 = (int)ppuVar55 + 0xd;
                                      puVar59[(int)ppuVar95] = uVar23 | puVar59[(int)ppuVar95];
                                      puVar92[(int)ppuVar95] = (u8)local_d8;
                                      if (local_130 != (u8 *)0xd) {
                                        iVar69 = (int)ppuVar55 + 0xe;
                                        video->vram_map[(int)ppuVar55 + 0xd] = puVar78;
                                        puVar59[iVar74] = uVar23 | puVar59[iVar74];
                                        puVar92[iVar74] = uVar48 + '\r';
                                        if (local_130 != (u8 *)0xe) {
                                          video->vram_map[(int)ppuVar55 + 0xe] = puVar78;
                                          puVar59[iVar69] = uVar23 | puVar59[iVar69];
                                          puVar92[iVar69] = uVar48 + '\x0e';
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
              puVar60 = (ushort *)((int)puVar59 + (int)(ppuVar95 + -0x45f));
              ppuVar95 = vram_map_9;
              ppuVar55 = video->vram_map + (int)ppuVar87;
              puVar81 = puVar92 + (int)ppuVar87;
              do {
                uVar22 = *puVar60;
                *ppuVar55 = puVar78;
                *puVar60 = uVar23 | uVar22;
                *puVar81 = (u8)ppuVar95;
                ppuVar95 = (u8 **)((int)ppuVar95 + 1);
                puVar60 = puVar60 + 1;
                ppuVar55 = ppuVar55 + 1;
                puVar81 = puVar81 + 1;
              } while (ppuVar95 != (u8 **)(uVar73 + (int)vram_map_9));
            }
LAB_080339d0:
            local_d0 = (u8 **)((int)ppuVar87 + 3);
            iVar85 = (int)ppuVar87 + 0x197f;
            unmap_memory_page_region_direct
                      (video->memory->memory_interface_arm9,uVar63 + 0xc000,uVar73 << 0xe);
            uVar67 = (uint)local_d0 >> 5;
            iVar74 = (uVar73 + 0x29 + (int)ppuVar87) * 4;
            uVar64 = uVar73 + 0x8c1 + (int)ppuVar87;
            video->vram_map_dirty_bitmap_fine[uVar67] =
                 video->vram_map_dirty_bitmap_fine[uVar67] | iVar76 << ((uint)local_d0 & 0x1f);
            iVar68 = (int)ppuVar87 * 2 + 0x1182;
            iVar69 = iVar74 - iVar68;
            bVar96 = iVar69 == 0;
            if (bVar96 || iVar74 < iVar68) {
              iVar69 = iVar74 - iVar85;
              bVar96 = iVar69 == 0;
              iVar68 = iVar85;
            }
            bVar99 = SBORROW4(iVar85,uVar64 * 2);
            bVar98 = (int)(iVar85 + uVar64 * -2) < 0;
            if (bVar98 != bVar99) {
              uVar64 = 0;
            }
            video->vram_map_dirty_bitmap_coarse = video->vram_map_dirty_bitmap_coarse | 1 << uVar67;
            if (bVar98 == bVar99) {
              uVar64 = (uint)(0x13 < uVar73 && (bVar96 || iVar69 < 0 != SBORROW4(iVar74,iVar68)));
            }
            puVar78 = (u8 *)((int)puVar86 + (-0xc000 - (uVar63 + 0xfa000000)));
            if (uVar64 == 0) {
              puVar92 = puVar92 + (int)ppuVar87 + 2;
              ppuVar55 = video->vram_map + (int)ppuVar87 + 2;
              ppuVar95 = vram_map_9;
              puVar86 = puVar59 + (int)ppuVar87 + 3;
              do {
                uVar22 = *puVar86;
                ppuVar55 = ppuVar55 + 1;
                *ppuVar55 = puVar78;
                *puVar86 = uVar23 | uVar22;
                puVar92 = puVar92 + 1;
                *puVar92 = (u8)ppuVar95;
                ppuVar95 = (u8 **)((int)ppuVar95 + 1);
                puVar86 = puVar86 + 1;
              } while (ppuVar95 != (u8 **)(uVar73 + (int)vram_map_9));
            }
            else {
              uVar67 = -((uint)((int)(video->vram_map_allocation_bitmap + (int)ppuVar87 + 3) *
                               0x20000000) >> 0x1e) & 7;
              if (uVar73 <= uVar67) {
                uVar67 = uVar73;
              }
              ppuVar95 = vram_map_9;
              local_130 = (u8 *)uVar73;
              if (uVar67 != 0) {
                local_130 = (u8 *)(uVar73 - 1);
                video->vram_map[(int)ppuVar87 + 3] = puVar78;
                ppuVar95 = (u8 **)((int)vram_map_9 + 1);
                puVar59[(int)local_d0] = uVar23 | puVar59[(int)local_d0];
                puVar92[(int)local_d0] = uVar47;
                local_d0 = ppuVar87 + 1;
                if (uVar67 != 1) {
                  uVar22 = puVar59[(int)local_d0];
                  ppuVar95 = (u8 **)((int)vram_map_9 + 2);
                  video->vram_map[(int)local_d0] = puVar78;
                  local_130 = (u8 *)(uVar73 - 2);
                  puVar59[(int)local_d0] = uVar23 | uVar22;
                  puVar92[(int)local_d0] = uVar47 + '\x01';
                  local_d0 = (u8 **)((int)ppuVar87 + 5);
                  if (uVar67 != 2) {
                    uVar22 = puVar59[(int)local_d0];
                    ppuVar95 = (u8 **)((int)vram_map_9 + 3);
                    video->vram_map[(int)ppuVar87 + 5] = puVar78;
                    local_130 = (u8 *)(uVar73 - 3);
                    puVar59[(int)local_d0] = uVar23 | uVar22;
                    puVar92[(int)local_d0] = uVar47 + '\x02';
                    local_d0 = (u8 **)((int)ppuVar87 + 6);
                    if (uVar67 != 3) {
                      uVar22 = puVar59[(int)local_d0];
                      ppuVar95 = vram_map_9 + 1;
                      video->vram_map[(int)ppuVar87 + 6] = puVar78;
                      local_130 = (u8 *)(uVar73 - 4);
                      puVar59[(int)local_d0] = uVar23 | uVar22;
                      puVar92[(int)local_d0] = uVar47 + '\x03';
                      local_d0 = (u8 **)((int)ppuVar87 + 7);
                      if (uVar67 != 4) {
                        uVar22 = puVar59[(int)local_d0];
                        ppuVar95 = (u8 **)((int)vram_map_9 + 5);
                        video->vram_map[(int)ppuVar87 + 7] = puVar78;
                        local_130 = (u8 *)(uVar73 - 5);
                        puVar59[(int)local_d0] = uVar23 | uVar22;
                        puVar92[(int)local_d0] = uVar47 + '\x04';
                        local_d0 = ppuVar87 + 2;
                        if (uVar67 != 5) {
                          uVar22 = puVar59[(int)local_d0];
                          ppuVar95 = (u8 **)((int)vram_map_9 + 6);
                          video->vram_map[(int)local_d0] = puVar78;
                          local_130 = (u8 *)(uVar73 - 6);
                          puVar59[(int)local_d0] = uVar23 | uVar22;
                          puVar92[(int)local_d0] = uVar47 + '\x05';
                          local_d0 = (u8 **)((int)ppuVar87 + 9);
                          if (uVar67 == 7) {
                            ppuVar95 = (u8 **)((int)vram_map_9 + 7);
                            video->vram_map[(int)ppuVar87 + 9] = puVar78;
                            local_130 = (u8 *)(uVar73 - 7);
                            puVar59[(int)local_d0] = uVar23 | puVar59[(int)local_d0];
                            puVar92[(int)local_d0] = uVar47 + '\x06';
                            local_d0 = (u8 **)((int)ppuVar87 + 10);
                          }
                        }
                      }
                    }
                  }
                }
                if (uVar73 == uVar67) goto LAB_08034100;
              }
              local_d8 = (undefined8 *)(uVar73 - 1);
              uVar73 = ((uVar73 - uVar67) - 0x10 >> 4) + 1;
              if (0xe < (int)local_d8 - uVar67) {
                auVar15._4_4_ = ppuVar95;
                auVar15._0_4_ = ppuVar95;
                auVar15._8_8_ = 0;
                auVar1 = SIMDExpandImmediate(0,0,0x10);
                auVar2 = SIMDExpandImmediate(0,0,4);
                auVar117 = SIMDExpandImmediate(0,0,8);
                auVar119 = SIMDExpandImmediate(0,0,0xc);
                auVar16._4_4_ = CONCAT22(uVar23,uVar23);
                auVar16._0_4_ = CONCAT22(uVar23,uVar23);
                auVar16._8_8_ = 0;
                auVar16 = auVar16 & auVar16 << 0x40;
                auVar37._8_8_ = 0x300000002;
                auVar37._0_8_ = 0x100000000;
                auVar118 = VectorAdd(auVar15 & auVar15 << 0x40,auVar37,4);
                local_108 = video->vram_map_dirty_bit_numbers + iVar85 + uVar67 + -0x197c;
                local_120 = 0;
                puVar86 = video->vram_map_allocation_bitmap + (int)ppuVar87 + uVar67 + 0x13;
                puVar58 = video->vram_map_allocation_bitmap + (int)ppuVar87 + uVar67 + 0x13;
                ppuVar55 = video->vram_map + (int)ppuVar87 + uVar67 + 3;
                do {
                  auVar111 = VectorAdd(auVar118,auVar2,4);
                  auVar107 = VectorAdd(auVar118,auVar119,4);
                  auVar113 = *(undefined (*) [16])(puVar58 + -8);
                  auVar100 = VectorAdd(auVar118,auVar117,4);
                  auVar120 = *(undefined (*) [16])(puVar58 + -0x10);
                  local_120 = local_120 + 1;
                  *(undefined8 *)ppuVar55 = 0;
                  *(undefined8 *)(ppuVar55 + 2) = 0;
                  *(undefined8 *)(ppuVar55 + 4) = 0;
                  *(undefined8 *)(ppuVar55 + 6) = 0;
                  uVar108 = VectorCopyNarrow(auVar118,4);
                  uVar109 = VectorCopyNarrow(auVar111,4);
                  auVar115._0_8_ = VectorCopyNarrow(auVar100,4);
                  auVar115._8_8_ = VectorCopyNarrow(auVar107,4);
                  auVar118 = VectorAdd(auVar118,auVar1,4);
                  auVar27._8_8_ = uVar109;
                  auVar27._0_8_ = uVar108;
                  uVar108 = VectorCopyNarrow(auVar27,2);
                  uVar109 = VectorCopyNarrow(auVar115,2);
                  auVar120 = auVar120 | auVar16;
                  *(undefined8 *)(ppuVar55 + 8) = 0;
                  *(undefined8 *)(ppuVar55 + 10) = 0;
                  *(undefined8 *)(ppuVar55 + 0xc) = 0;
                  *(undefined8 *)(ppuVar55 + 0xe) = 0;
                  *(longlong *)(puVar86 + -0x10) = auVar120._0_8_;
                  *(longlong *)(puVar86 + -0xc) = auVar120._8_8_;
                  auVar113 = auVar16 | auVar113;
                  *(longlong *)(puVar86 + -8) = auVar113._0_8_;
                  *(longlong *)(puVar86 + -4) = auVar113._8_8_;
                  *(undefined8 *)local_108 = uVar108;
                  *(undefined8 *)(local_108 + 8) = uVar109;
                  local_108 = local_108 + 0x10;
                  puVar86 = puVar86 + 0x10;
                  puVar58 = puVar58 + 0x10;
                  ppuVar55 = ppuVar55 + 0x10;
                } while (local_120 < uVar73);
                local_130 = (u8 *)((int)local_130 + uVar73 * -0x10);
                local_d0 = local_d0 + uVar73 * 4;
                ppuVar95 = ppuVar95 + uVar73 * 4;
                if (uVar73 - uVar67 == uVar73 * 0x10) goto LAB_08034100;
              }
              uVar47 = (u8)ppuVar95;
              video->vram_map[(int)local_d0] = puVar78;
              iVar74 = (int)local_d0 + 1;
              puVar59[(int)local_d0] = uVar23 | puVar59[(int)local_d0];
              puVar92[(int)local_d0] = uVar47;
              if (local_130 != (u8 *)0x1) {
                video->vram_map[(int)local_d0 + 1] = puVar78;
                iVar69 = (int)local_d0 + 2;
                puVar59[iVar74] = uVar23 | puVar59[iVar74];
                puVar92[iVar74] = uVar47 + '\x01';
                if (local_130 != (u8 *)0x2) {
                  video->vram_map[(int)local_d0 + 2] = puVar78;
                  iVar74 = (int)local_d0 + 3;
                  puVar59[iVar69] = uVar23 | puVar59[iVar69];
                  puVar92[iVar69] = uVar47 + '\x02';
                  if (local_130 != (u8 *)0x3) {
                    video->vram_map[(int)local_d0 + 3] = puVar78;
                    ppuVar95 = local_d0 + 1;
                    puVar59[iVar74] = uVar23 | puVar59[iVar74];
                    puVar92[iVar74] = uVar47 + '\x03';
                    if (local_130 != (u8 *)0x4) {
                      video->vram_map[(int)ppuVar95] = puVar78;
                      iVar74 = (int)local_d0 + 5;
                      puVar59[(int)ppuVar95] = uVar23 | puVar59[(int)ppuVar95];
                      puVar92[(int)ppuVar95] = uVar47 + '\x04';
                      if (local_130 != (u8 *)0x5) {
                        video->vram_map[(int)local_d0 + 5] = puVar78;
                        iVar69 = (int)local_d0 + 6;
                        puVar59[iVar74] = uVar23 | puVar59[iVar74];
                        puVar92[iVar74] = uVar47 + '\x05';
                        if (local_130 != (u8 *)0x6) {
                          video->vram_map[(int)local_d0 + 6] = puVar78;
                          iVar74 = (int)local_d0 + 7;
                          puVar59[iVar69] = uVar23 | puVar59[iVar69];
                          puVar92[iVar69] = uVar47 + '\x06';
                          if (local_130 != (u8 *)0x7) {
                            video->vram_map[(int)local_d0 + 7] = puVar78;
                            ppuVar95 = local_d0 + 2;
                            puVar59[iVar74] = uVar23 | puVar59[iVar74];
                            puVar92[iVar74] = uVar47 + '\a';
                            if (local_130 != (u8 *)0x8) {
                              video->vram_map[(int)ppuVar95] = puVar78;
                              iVar74 = (int)local_d0 + 9;
                              puVar59[(int)ppuVar95] = uVar23 | puVar59[(int)ppuVar95];
                              puVar92[(int)ppuVar95] = uVar47 + '\b';
                              if (local_130 != (u8 *)0x9) {
                                video->vram_map[(int)local_d0 + 9] = puVar78;
                                iVar69 = (int)local_d0 + 10;
                                puVar59[iVar74] = uVar23 | puVar59[iVar74];
                                puVar92[iVar74] = uVar47 + '\t';
                                if (local_130 != (u8 *)0xa) {
                                  video->vram_map[(int)local_d0 + 10] = puVar78;
                                  iVar74 = (int)local_d0 + 0xb;
                                  puVar59[iVar69] = uVar23 | puVar59[iVar69];
                                  puVar92[iVar69] = uVar47 + '\n';
                                  if (local_130 != (u8 *)0xb) {
                                    video->vram_map[(int)local_d0 + 0xb] = puVar78;
                                    ppuVar95 = local_d0 + 3;
                                    puVar59[iVar74] = uVar23 | puVar59[iVar74];
                                    puVar92[iVar74] = uVar47 + '\v';
                                    if (local_130 != (u8 *)0xc) {
                                      video->vram_map[(int)ppuVar95] = puVar78;
                                      iVar74 = (int)local_d0 + 0xd;
                                      puVar59[(int)ppuVar95] = uVar23 | puVar59[(int)ppuVar95];
                                      puVar92[(int)ppuVar95] = uVar47 + '\f';
                                      if (local_130 != (u8 *)0xd) {
                                        video->vram_map[(int)local_d0 + 0xd] = puVar78;
                                        iVar69 = (int)local_d0 + 0xe;
                                        puVar59[iVar74] = uVar23 | puVar59[iVar74];
                                        puVar92[iVar74] = uVar47 + '\r';
                                        if (local_130 != (u8 *)0xe) {
                                          video->vram_map[(int)local_d0 + 0xe] = puVar78;
                                          puVar59[iVar69] = uVar23 | puVar59[iVar69];
                                          puVar92[iVar69] = uVar47 + '\x0e';
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
LAB_08034100:
            iVar74 = 8;
            break;
          case 7:
            uVar73 = uVar73 >> 4;
            unmap_memory_page_region_direct(pmVar54->memory_interface_arm9,0x6200000,uVar73 << 0xe);
            ppuVar87 = video->vram_map + 0x80;
            puVar78 = video->vram_map_dirty_bit_numbers + uVar73 + 0x80;
            puVar59 = video->vram_map_allocation_bitmap + uVar73 + 0x80;
            ppuVar95 = video->vram_map + uVar73 + 0x80;
            puVar92 = video->vram_map_dirty_bit_numbers + 0x80;
            uVar67 = (uint)(puVar78 <= ppuVar87);
            bVar98 = ppuVar87 <= puVar59;
            bVar96 = (u8 **)puVar59 == ppuVar87;
            if (bVar98 && !bVar96) {
              bVar98 = puVar51 <= ppuVar95;
              bVar96 = ppuVar95 == (u8 **)puVar51;
            }
            if (ppuVar95 <= puVar92) {
              uVar67 = 1;
            }
            bVar97 = puVar51 <= puVar78;
            bVar99 = (u16 *)puVar78 == puVar51;
            if (bVar97 && !bVar99) {
              bVar97 = puVar92 <= puVar59;
              bVar99 = puVar59 == (u16 *)puVar92;
            }
            uVar64 = ~(-1 << (uVar73 & 0xff));
            uVar79 = video->vram_map_dirty_bitmap_coarse;
            if (!bVar97 || bVar99) {
              puVar92 = (u8 *)0x1;
            }
            if (bVar97 && !bVar99) {
              puVar92 = (u8 *)0x0;
            }
            video->vram_map_dirty_bitmap_fine[4] = video->vram_map_dirty_bitmap_fine[4] | uVar64;
            video->vram_map_dirty_bitmap_coarse = uVar79 | 0x10;
            vram_map = (u8 **)(puVar86 + -0x100000);
            if (((!bVar98 || bVar96) & uVar67 & (uint)(0x13 < uVar73) & (uint)puVar92) == 0) {
              ppuVar87 = video->vram_map + 0x7f;
              puVar92 = video->vram_map_dirty_bit_numbers + 0x7f;
              iVar74 = 0x38;
              puVar59 = puVar51;
              do {
                uVar23 = *puVar59;
                ppuVar87 = ppuVar87 + 1;
                *ppuVar87 = (u8 *)vram_map;
                *puVar59 = uVar23 | 0x80;
                puVar92 = puVar92 + 1;
                *puVar92 = (u8)iVar74;
                iVar74 = iVar74 + 1;
                puVar59 = puVar59 + 1;
              } while (uVar73 + 0x38 != iVar74);
            }
            else {
              uVar67 = uVar73;
              if (uVar62 <= uVar73) {
                uVar67 = uVar62;
              }
              if (uVar67 == 0) {
                iVar69 = 0x38;
                iVar74 = 0x80;
                uVar79 = uVar73;
              }
              else {
                uVar79 = uVar73 - 1;
                uVar23 = video->vram_map_allocation_bitmap[0x80];
                video->vram_map[0x80] = (u8 *)vram_map;
                video->vram_map_allocation_bitmap[0x80] = uVar23 | 0x80;
                video->vram_map_dirty_bit_numbers[0x80] = '8';
                if (uVar67 == 1) {
                  iVar69 = 0x39;
                  iVar74 = 0x81;
                }
                else {
                  uVar23 = video->vram_map_allocation_bitmap[0x81];
                  video->vram_map[0x81] = (u8 *)vram_map;
                  uVar79 = uVar73 - 2;
                  video->vram_map_dirty_bit_numbers[0x81] = '9';
                  video->vram_map_allocation_bitmap[0x81] = uVar23 | 0x80;
                  if (uVar67 == 2) {
                    iVar69 = 0x3a;
                    iVar74 = 0x82;
                  }
                  else {
                    uVar79 = uVar73 - 3;
                    uVar23 = *puVar70;
                    video->vram_map[0x82] = (u8 *)vram_map;
                    *puVar70 = uVar23 | 0x80;
                    video->vram_map_dirty_bit_numbers[0x82] = ':';
                    if (uVar67 == 3) {
                      iVar69 = 0x3b;
                      iVar74 = 0x83;
                    }
                    else {
                      uVar23 = video->vram_map_allocation_bitmap[0x83];
                      video->vram_map[0x83] = (u8 *)vram_map;
                      uVar79 = uVar73 - 4;
                      video->vram_map_dirty_bit_numbers[0x83] = ';';
                      video->vram_map_allocation_bitmap[0x83] = uVar23 | 0x80;
                      if (uVar67 == 4) {
                        iVar69 = 0x3c;
                        iVar74 = 0x84;
                      }
                      else {
                        uVar23 = video->vram_map_allocation_bitmap[0x84];
                        video->vram_map[0x84] = (u8 *)vram_map;
                        uVar79 = uVar73 - 5;
                        video->vram_map_allocation_bitmap[0x84] = uVar23 | 0x80;
                        video->vram_map_dirty_bit_numbers[0x84] = '<';
                        if (uVar67 == 5) {
                          iVar69 = 0x3d;
                          iVar74 = 0x85;
                        }
                        else {
                          uVar23 = video->vram_map_allocation_bitmap[0x85];
                          video->vram_map[0x85] = (u8 *)vram_map;
                          uVar79 = uVar73 - 6;
                          video->vram_map_dirty_bit_numbers[0x85] = '=';
                          video->vram_map_allocation_bitmap[0x85] = uVar23 | 0x80;
                          if (uVar67 == 7) {
                            uVar23 = video->vram_map_allocation_bitmap[0x86];
                            uVar79 = uVar73 - 7;
                            iVar69 = 0x3f;
                            iVar74 = 0x87;
                            video->vram_map[0x86] = (u8 *)vram_map;
                            video->vram_map_allocation_bitmap[0x86] = uVar23 | 0x80;
                            video->vram_map_dirty_bit_numbers[0x86] = '>';
                          }
                          else {
                            iVar69 = 0x3e;
                            iVar74 = 0x86;
                          }
                        }
                      }
                    }
                  }
                }
                if (uVar73 == uVar67) goto LAB_080304a8;
              }
              uVar90 = ((uVar73 - uVar67) - 0x10 >> 4) + 1;
              iVar68 = uVar90 * 0x10;
              if (0xe < (uVar73 - 1) - uVar67) {
                auVar3._4_4_ = iVar69;
                auVar3._0_4_ = iVar69;
                auVar3._8_8_ = 0;
                auVar1 = SIMDExpandImmediate(0,0,0x10);
                auVar2 = SIMDExpandImmediate(0,0,4);
                auVar117 = SIMDExpandImmediate(0,0,8);
                auVar119 = SIMDExpandImmediate(0,0,0xc);
                puVar92 = video->vram_map_dirty_bit_numbers + uVar67 + 0x80;
                local_cc = 0;
                auVar42._8_8_ = 0x300000002;
                auVar42._0_8_ = 0x100000000;
                auVar118 = VectorAdd(auVar3 & auVar3 << 0x40,auVar42,4);
                ppuVar87 = video->vram_map + uVar67 + 0x80;
                puVar59 = video->vram_map_allocation_bitmap + uVar67 + 0x90;
                puVar58 = video->vram_map_allocation_bitmap + uVar67 + 0x90;
                do {
                  auVar100 = *(undefined (*) [16])(puVar59 + -0x10);
                  auVar113 = VectorAdd(auVar118,auVar2,4);
                  auVar120 = VectorAdd(auVar118,auVar117,4);
                  auVar107 = *(undefined (*) [16])(puVar59 + -8);
                  *(undefined8 *)ppuVar87 = 0;
                  *(undefined8 *)(ppuVar87 + 2) = 0;
                  auVar101._0_8_ = VectorCopyNarrow(auVar118,4);
                  auVar101._8_8_ = VectorCopyNarrow(auVar113,4);
                  auVar113 = VectorAdd(auVar118,auVar119,4);
                  auVar118 = VectorAdd(auVar118,auVar1,4);
                  local_cc = local_cc + 1;
                  uVar108 = VectorCopyNarrow(auVar120,4);
                  uVar109 = VectorCopyNarrow(auVar113,4);
                  auVar120 = SIMDExpandImmediate(0,9,0x80);
                  uVar110 = VectorCopyNarrow(auVar101,2);
                  auVar32._8_8_ = uVar109;
                  auVar32._0_8_ = uVar108;
                  uVar108 = VectorCopyNarrow(auVar32,2);
                  auVar113 = SIMDExpandImmediate(0,9,0x80);
                  *(undefined8 *)(ppuVar87 + 4) = 0;
                  *(undefined8 *)(ppuVar87 + 6) = 0;
                  *(undefined8 *)(ppuVar87 + 8) = 0;
                  *(undefined8 *)(ppuVar87 + 10) = 0;
                  *(undefined8 *)(ppuVar87 + 0xc) = 0;
                  *(undefined8 *)(ppuVar87 + 0xe) = 0;
                  *(longlong *)(puVar58 + -0x10) = SUB168(auVar100 | auVar120,0);
                  *(longlong *)(puVar58 + -0xc) = SUB168(auVar100 | auVar120,8);
                  *(longlong *)(puVar58 + -8) = SUB168(auVar107 | auVar113,0);
                  *(longlong *)(puVar58 + -4) = SUB168(auVar107 | auVar113,8);
                  *(undefined8 *)puVar92 = uVar110;
                  *(undefined8 *)(puVar92 + 8) = uVar108;
                  puVar92 = puVar92 + 0x10;
                  ppuVar87 = ppuVar87 + 0x10;
                  puVar59 = puVar59 + 0x10;
                  puVar58 = puVar58 + 0x10;
                } while (local_cc < uVar90);
                iVar74 = iVar74 + iVar68;
                uVar79 = uVar79 + uVar90 * -0x10;
                iVar69 = iVar69 + iVar68;
                if (uVar73 - uVar67 == iVar68) goto LAB_080304a8;
              }
              uVar47 = (u8)iVar69;
              uVar23 = video->vram_map_allocation_bitmap[iVar74];
              video->vram_map[iVar74] = (u8 *)vram_map;
              video->vram_map_allocation_bitmap[iVar74] = uVar23 | 0x80;
              video->vram_map_dirty_bit_numbers[iVar74] = uVar47;
              if (uVar79 != 1) {
                video->vram_map[iVar74 + 1] = (u8 *)vram_map;
                video->vram_map_allocation_bitmap[iVar74 + 1] =
                     video->vram_map_allocation_bitmap[iVar74 + 1] | 0x80;
                video->vram_map_dirty_bit_numbers[iVar74 + 1] = uVar47 + '\x01';
                if (uVar79 != 2) {
                  uVar23 = video->vram_map_allocation_bitmap[iVar74 + 2];
                  video->vram_map[iVar74 + 2] = (u8 *)vram_map;
                  video->vram_map_allocation_bitmap[iVar74 + 2] = uVar23 | 0x80;
                  video->vram_map_dirty_bit_numbers[iVar74 + 2] = uVar47 + '\x02';
                  if (uVar79 != 3) {
                    uVar23 = video->vram_map_allocation_bitmap[iVar74 + 3];
                    video->vram_map[iVar74 + 3] = (u8 *)vram_map;
                    video->vram_map_allocation_bitmap[iVar74 + 3] = uVar23 | 0x80;
                    video->vram_map_dirty_bit_numbers[iVar74 + 3] = uVar47 + '\x03';
                    if (uVar79 != 4) {
                      uVar23 = video->vram_map_allocation_bitmap[iVar74 + 4];
                      video->vram_map[iVar74 + 4] = (u8 *)vram_map;
                      video->vram_map_allocation_bitmap[iVar74 + 4] = uVar23 | 0x80;
                      video->vram_map_dirty_bit_numbers[iVar74 + 4] = uVar47 + '\x04';
                      if (uVar79 != 5) {
                        uVar23 = video->vram_map_allocation_bitmap[iVar74 + 5];
                        video->vram_map[iVar74 + 5] = (u8 *)vram_map;
                        video->vram_map_allocation_bitmap[iVar74 + 5] = uVar23 | 0x80;
                        video->vram_map_dirty_bit_numbers[iVar74 + 5] = uVar47 + '\x05';
                        if (uVar79 != 6) {
                          uVar23 = video->vram_map_allocation_bitmap[iVar74 + 6];
                          video->vram_map[iVar74 + 6] = (u8 *)vram_map;
                          video->vram_map_allocation_bitmap[iVar74 + 6] = uVar23 | 0x80;
                          video->vram_map_dirty_bit_numbers[iVar74 + 6] = uVar47 + '\x06';
                          if (uVar79 != 7) {
                            uVar23 = video->vram_map_allocation_bitmap[iVar74 + 7];
                            video->vram_map[iVar74 + 7] = (u8 *)vram_map;
                            video->vram_map_allocation_bitmap[iVar74 + 7] = uVar23 | 0x80;
                            video->vram_map_dirty_bit_numbers[iVar74 + 7] = uVar47 + '\a';
                            if (uVar79 != 8) {
                              uVar23 = video->vram_map_allocation_bitmap[iVar74 + 8];
                              video->vram_map[iVar74 + 8] = (u8 *)vram_map;
                              video->vram_map_allocation_bitmap[iVar74 + 8] = uVar23 | 0x80;
                              video->vram_map_dirty_bit_numbers[iVar74 + 8] = uVar47 + '\b';
                              if (uVar79 != 9) {
                                uVar23 = video->vram_map_allocation_bitmap[iVar74 + 9];
                                video->vram_map[iVar74 + 9] = (u8 *)vram_map;
                                video->vram_map_allocation_bitmap[iVar74 + 9] = uVar23 | 0x80;
                                video->vram_map_dirty_bit_numbers[iVar74 + 9] = uVar47 + '\t';
                                if (uVar79 != 10) {
                                  uVar23 = video->vram_map_allocation_bitmap[iVar74 + 10];
                                  video->vram_map[iVar74 + 10] = (u8 *)vram_map;
                                  video->vram_map_allocation_bitmap[iVar74 + 10] = uVar23 | 0x80;
                                  video->vram_map_dirty_bit_numbers[iVar74 + 10] = uVar47 + '\n';
                                  if (uVar79 != 0xb) {
                                    uVar23 = video->vram_map_allocation_bitmap[iVar74 + 0xb];
                                    video->vram_map[iVar74 + 0xb] = (u8 *)vram_map;
                                    video->vram_map_allocation_bitmap[iVar74 + 0xb] = uVar23 | 0x80;
                                    video->vram_map_dirty_bit_numbers[iVar74 + 0xb] = uVar47 + '\v';
                                    if (uVar79 != 0xc) {
                                      uVar23 = video->vram_map_allocation_bitmap[iVar74 + 0xc];
                                      video->vram_map[iVar74 + 0xc] = (u8 *)vram_map;
                                      video->vram_map_allocation_bitmap[iVar74 + 0xc] =
                                           uVar23 | 0x80;
                                      video->vram_map_dirty_bit_numbers[iVar74 + 0xc] =
                                           uVar47 + '\f';
                                      if (uVar79 != 0xd) {
                                        video->vram_map[iVar74 + 0xd] = (u8 *)vram_map;
                                        video->vram_map_allocation_bitmap[iVar74 + 0xd] =
                                             video->vram_map_allocation_bitmap[iVar74 + 0xd] | 0x80;
                                        video->vram_map_dirty_bit_numbers[iVar74 + 0xd] =
                                             uVar47 + '\r';
                                        if (uVar79 != 0xe) {
                                          video->vram_map[iVar74 + 0xe] = (u8 *)vram_map;
                                          video->vram_map_allocation_bitmap[iVar74 + 0xe] =
                                               video->vram_map_allocation_bitmap[iVar74 + 0xe] |
                                               0x80;
                                          video->vram_map_dirty_bit_numbers[iVar74 + 0xe] =
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
LAB_080304a8:
            unmap_memory_page_region_direct
                      (video->memory->memory_interface_arm9,0x6210000,uVar73 << 0xe);
            ppuVar87 = video->vram_map + 0x84;
            puVar92 = video->vram_map_dirty_bit_numbers + uVar73 + 0x84;
            uVar79 = video->vram_map_dirty_bitmap_fine[4];
            ppuVar95 = video->vram_map + uVar73 + 0x84;
            puVar59 = video->vram_map_allocation_bitmap + uVar73 + 0x84;
            puVar78 = video->vram_map_dirty_bit_numbers + 0x84;
            uVar67 = (uint)(puVar92 <= ppuVar87);
            bVar98 = ppuVar87 <= puVar59;
            bVar96 = (u8 **)puVar59 == ppuVar87;
            if (bVar98 && !bVar96) {
              bVar98 = puVar52 <= ppuVar95;
              bVar96 = ppuVar95 == (u8 **)puVar52;
            }
            if (ppuVar95 <= puVar78) {
              uVar67 = 1;
            }
            bVar97 = puVar52 <= puVar92;
            bVar99 = (u16 *)puVar92 == puVar52;
            if (bVar97 && !bVar99) {
              bVar97 = puVar78 <= puVar59;
              bVar99 = puVar59 == (u16 *)puVar78;
            }
            video->vram_map_dirty_bitmap_coarse = video->vram_map_dirty_bitmap_coarse | 0x10;
            video->vram_map_dirty_bitmap_fine[4] = uVar79 | uVar64 << 4;
            puVar86 = puVar86 + -0x108000;
            if (((uint)(0x13 < uVar73) & uVar67 & (!bVar98 || bVar96) & (uint)(!bVar97 || bVar99))
                == 0) {
              puVar92 = video->vram_map_dirty_bit_numbers + 0x83;
              ppuVar87 = video->vram_map + 0x83;
              iVar74 = 0x38;
              puVar59 = puVar52;
              do {
                uVar23 = *puVar59;
                ppuVar87 = ppuVar87 + 1;
                *ppuVar87 = (u8 *)puVar86;
                *puVar59 = uVar23 | 0x80;
                puVar92 = puVar92 + 1;
                *puVar92 = (u8)iVar74;
                iVar74 = iVar74 + 1;
                puVar59 = puVar59 + 1;
              } while (iVar74 != uVar73 + 0x38);
            }
            else {
              uVar67 = uVar73;
              if (uVar66 <= uVar73) {
                uVar67 = uVar66;
              }
              if (uVar67 == 0) {
                iVar74 = 0x38;
                iVar69 = 0x84;
                uVar64 = uVar73;
              }
              else {
                uVar23 = video->vram_map_allocation_bitmap[0x84];
                uVar64 = uVar73 - 1;
                video->vram_map[0x84] = (u8 *)puVar86;
                video->vram_map_allocation_bitmap[0x84] = uVar23 | 0x80;
                video->vram_map_dirty_bit_numbers[0x84] = '8';
                if (uVar67 == 1) {
                  iVar74 = 0x39;
                  iVar69 = 0x85;
                }
                else {
                  uVar23 = video->vram_map_allocation_bitmap[0x85];
                  video->vram_map[0x85] = (u8 *)puVar86;
                  uVar64 = uVar73 - 2;
                  video->vram_map_dirty_bit_numbers[0x85] = '9';
                  video->vram_map_allocation_bitmap[0x85] = uVar23 | 0x80;
                  if (uVar67 == 2) {
                    iVar74 = 0x3a;
                    iVar69 = 0x86;
                  }
                  else {
                    uVar23 = video->vram_map_allocation_bitmap[0x86];
                    video->vram_map[0x86] = (u8 *)puVar86;
                    uVar64 = uVar73 - 3;
                    video->vram_map_allocation_bitmap[0x86] = uVar23 | 0x80;
                    video->vram_map_dirty_bit_numbers[0x86] = ':';
                    if (uVar67 == 3) {
                      iVar74 = 0x3b;
                      iVar69 = 0x87;
                    }
                    else {
                      uVar23 = video->vram_map_allocation_bitmap[0x87];
                      video->vram_map[0x87] = (u8 *)puVar86;
                      uVar64 = uVar73 - 4;
                      video->vram_map_dirty_bit_numbers[0x87] = ';';
                      video->vram_map_allocation_bitmap[0x87] = uVar23 | 0x80;
                      if (uVar67 == 4) {
                        iVar74 = 0x3c;
                        iVar69 = 0x88;
                      }
                      else {
                        uVar23 = video->vram_map_allocation_bitmap[0x88];
                        video->vram_map[0x88] = (u8 *)puVar86;
                        uVar64 = uVar73 - 5;
                        video->vram_map_allocation_bitmap[0x88] = uVar23 | 0x80;
                        video->vram_map_dirty_bit_numbers[0x88] = '<';
                        if (uVar67 == 5) {
                          iVar74 = 0x3d;
                          iVar69 = 0x89;
                        }
                        else {
                          uVar23 = video->vram_map_allocation_bitmap[0x89];
                          video->vram_map[0x89] = (u8 *)puVar86;
                          uVar64 = uVar73 - 6;
                          video->vram_map_dirty_bit_numbers[0x89] = '=';
                          video->vram_map_allocation_bitmap[0x89] = uVar23 | 0x80;
                          if (uVar67 == 7) {
                            uVar23 = video->vram_map_allocation_bitmap[0x8a];
                            uVar64 = uVar73 - 7;
                            iVar74 = 0x3f;
                            iVar69 = 0x8b;
                            video->vram_map[0x8a] = (u8 *)puVar86;
                            video->vram_map_allocation_bitmap[0x8a] = uVar23 | 0x80;
                            video->vram_map_dirty_bit_numbers[0x8a] = '>';
                          }
                          else {
                            iVar74 = 0x3e;
                            iVar69 = 0x8a;
                          }
                        }
                      }
                    }
                  }
                }
                if (uVar73 == uVar67) goto LAB_08030a24;
              }
              uVar79 = ((uVar73 - uVar67) - 0x10 >> 4) + 1;
              iVar68 = uVar79 * 0x10;
              if (0xe < (uVar73 - 1) - uVar67) {
                auVar4._4_4_ = iVar74;
                auVar4._0_4_ = iVar74;
                auVar4._8_8_ = 0;
                auVar1 = SIMDExpandImmediate(0,0,0x10);
                auVar2 = SIMDExpandImmediate(0,0,4);
                auVar117 = SIMDExpandImmediate(0,0,8);
                auVar119 = SIMDExpandImmediate(0,0,0xc);
                puVar92 = video->vram_map_dirty_bit_numbers + uVar67 + 0x84;
                local_140 = 0;
                auVar43._8_8_ = 0x300000002;
                auVar43._0_8_ = 0x100000000;
                auVar118 = VectorAdd(auVar4 & auVar4 << 0x40,auVar43,4);
                puVar59 = video->vram_map_allocation_bitmap + uVar67 + 0x94;
                ppuVar87 = video->vram_map + uVar67 + 0x84;
                puVar58 = video->vram_map_allocation_bitmap + uVar67 + 0x94;
                do {
                  auVar100 = *(undefined (*) [16])(puVar58 + -0x10);
                  auVar113 = VectorAdd(auVar118,auVar2,4);
                  auVar120 = VectorAdd(auVar118,auVar117,4);
                  auVar107 = *(undefined (*) [16])(puVar58 + -8);
                  *(undefined8 *)ppuVar87 = 0;
                  *(undefined8 *)(ppuVar87 + 2) = 0;
                  auVar102._0_8_ = VectorCopyNarrow(auVar118,4);
                  auVar102._8_8_ = VectorCopyNarrow(auVar113,4);
                  auVar113 = VectorAdd(auVar118,auVar119,4);
                  auVar118 = VectorAdd(auVar118,auVar1,4);
                  local_140 = local_140 + 1;
                  uVar108 = VectorCopyNarrow(auVar120,4);
                  uVar109 = VectorCopyNarrow(auVar113,4);
                  auVar120 = SIMDExpandImmediate(0,9,0x80);
                  uVar110 = VectorCopyNarrow(auVar102,2);
                  auVar33._8_8_ = uVar109;
                  auVar33._0_8_ = uVar108;
                  uVar108 = VectorCopyNarrow(auVar33,2);
                  auVar113 = SIMDExpandImmediate(0,9,0x80);
                  *(undefined8 *)(ppuVar87 + 4) = 0;
                  *(undefined8 *)(ppuVar87 + 6) = 0;
                  *(undefined8 *)(ppuVar87 + 8) = 0;
                  *(undefined8 *)(ppuVar87 + 10) = 0;
                  *(undefined8 *)(ppuVar87 + 0xc) = 0;
                  *(undefined8 *)(ppuVar87 + 0xe) = 0;
                  *(longlong *)(puVar59 + -0x10) = SUB168(auVar100 | auVar120,0);
                  *(longlong *)(puVar59 + -0xc) = SUB168(auVar100 | auVar120,8);
                  *(longlong *)(puVar59 + -8) = SUB168(auVar107 | auVar113,0);
                  *(longlong *)(puVar59 + -4) = SUB168(auVar107 | auVar113,8);
                  *(undefined8 *)puVar92 = uVar110;
                  *(undefined8 *)(puVar92 + 8) = uVar108;
                  puVar92 = puVar92 + 0x10;
                  puVar59 = puVar59 + 0x10;
                  ppuVar87 = ppuVar87 + 0x10;
                  puVar58 = puVar58 + 0x10;
                } while (local_140 < uVar79);
                uVar64 = uVar64 + uVar79 * -0x10;
                iVar74 = iVar74 + iVar68;
                iVar69 = iVar69 + iVar68;
                if (uVar73 - uVar67 == iVar68) goto LAB_08030a24;
              }
              uVar47 = (u8)iVar74;
              uVar23 = video->vram_map_allocation_bitmap[iVar69];
              video->vram_map[iVar69] = (u8 *)puVar86;
              video->vram_map_allocation_bitmap[iVar69] = uVar23 | 0x80;
              video->vram_map_dirty_bit_numbers[iVar69] = uVar47;
              if (uVar64 != 1) {
                video->vram_map[iVar69 + 1] = (u8 *)puVar86;
                video->vram_map_allocation_bitmap[iVar69 + 1] =
                     video->vram_map_allocation_bitmap[iVar69 + 1] | 0x80;
                video->vram_map_dirty_bit_numbers[iVar69 + 1] = uVar47 + '\x01';
                if (uVar64 != 2) {
                  video->vram_map[iVar69 + 2] = (u8 *)puVar86;
                  video->vram_map_allocation_bitmap[iVar69 + 2] =
                       video->vram_map_allocation_bitmap[iVar69 + 2] | 0x80;
                  video->vram_map_dirty_bit_numbers[iVar69 + 2] = uVar47 + '\x02';
                  if (uVar64 != 3) {
                    video->vram_map[iVar69 + 3] = (u8 *)puVar86;
                    video->vram_map_allocation_bitmap[iVar69 + 3] =
                         video->vram_map_allocation_bitmap[iVar69 + 3] | 0x80;
                    video->vram_map_dirty_bit_numbers[iVar69 + 3] = uVar47 + '\x03';
                    if (uVar64 != 4) {
                      video->vram_map[iVar69 + 4] = (u8 *)puVar86;
                      video->vram_map_allocation_bitmap[iVar69 + 4] =
                           video->vram_map_allocation_bitmap[iVar69 + 4] | 0x80;
                      video->vram_map_dirty_bit_numbers[iVar69 + 4] = uVar47 + '\x04';
                      if (uVar64 != 5) {
                        video->vram_map[iVar69 + 5] = (u8 *)puVar86;
                        video->vram_map_allocation_bitmap[iVar69 + 5] =
                             video->vram_map_allocation_bitmap[iVar69 + 5] | 0x80;
                        video->vram_map_dirty_bit_numbers[iVar69 + 5] = uVar47 + '\x05';
                        if (uVar64 != 6) {
                          video->vram_map[iVar69 + 6] = (u8 *)puVar86;
                          video->vram_map_allocation_bitmap[iVar69 + 6] =
                               video->vram_map_allocation_bitmap[iVar69 + 6] | 0x80;
                          video->vram_map_dirty_bit_numbers[iVar69 + 6] = uVar47 + '\x06';
                          if (uVar64 != 7) {
                            video->vram_map[iVar69 + 7] = (u8 *)puVar86;
                            video->vram_map_allocation_bitmap[iVar69 + 7] =
                                 video->vram_map_allocation_bitmap[iVar69 + 7] | 0x80;
                            video->vram_map_dirty_bit_numbers[iVar69 + 7] = uVar47 + '\a';
                            if (uVar64 != 8) {
                              video->vram_map[iVar69 + 8] = (u8 *)puVar86;
                              video->vram_map_allocation_bitmap[iVar69 + 8] =
                                   video->vram_map_allocation_bitmap[iVar69 + 8] | 0x80;
                              video->vram_map_dirty_bit_numbers[iVar69 + 8] = uVar47 + '\b';
                              if (uVar64 != 9) {
                                video->vram_map[iVar69 + 9] = (u8 *)puVar86;
                                video->vram_map_allocation_bitmap[iVar69 + 9] =
                                     video->vram_map_allocation_bitmap[iVar69 + 9] | 0x80;
                                video->vram_map_dirty_bit_numbers[iVar69 + 9] = uVar47 + '\t';
                                if (uVar64 != 10) {
                                  video->vram_map[iVar69 + 10] = (u8 *)puVar86;
                                  video->vram_map_allocation_bitmap[iVar69 + 10] =
                                       video->vram_map_allocation_bitmap[iVar69 + 10] | 0x80;
                                  video->vram_map_dirty_bit_numbers[iVar69 + 10] = uVar47 + '\n';
                                  if (uVar64 != 0xb) {
                                    video->vram_map[iVar69 + 0xb] = (u8 *)puVar86;
                                    video->vram_map_allocation_bitmap[iVar69 + 0xb] =
                                         video->vram_map_allocation_bitmap[iVar69 + 0xb] | 0x80;
                                    video->vram_map_dirty_bit_numbers[iVar69 + 0xb] = uVar47 + '\v';
                                    if (uVar64 != 0xc) {
                                      video->vram_map[iVar69 + 0xc] = (u8 *)puVar86;
                                      video->vram_map_allocation_bitmap[iVar69 + 0xc] =
                                           video->vram_map_allocation_bitmap[iVar69 + 0xc] | 0x80;
                                      video->vram_map_dirty_bit_numbers[iVar69 + 0xc] =
                                           uVar47 + '\f';
                                      if (uVar64 != 0xd) {
                                        video->vram_map[iVar69 + 0xd] = (u8 *)puVar86;
                                        video->vram_map_allocation_bitmap[iVar69 + 0xd] =
                                             video->vram_map_allocation_bitmap[iVar69 + 0xd] | 0x80;
                                        video->vram_map_dirty_bit_numbers[iVar69 + 0xd] =
                                             uVar47 + '\r';
                                        if (uVar64 != 0xe) {
                                          video->vram_map[iVar69 + 0xe] = (u8 *)puVar86;
                                          video->vram_map_allocation_bitmap[iVar69 + 0xe] =
                                               video->vram_map_allocation_bitmap[iVar69 + 0xe] |
                                               0x80;
                                          video->vram_map_dirty_bit_numbers[iVar69 + 0xe] =
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
LAB_08030a24:
            ppuVar87 = (u8 **)0x80;
            iVar74 = 10;
            break;
          case 8:
            uVar73 = uVar73 >> 4;
            uVar63 = uVar73 << 0xe;
            ppuVar87 = video->vram_map + 0x82;
            uVar67 = (uint)(0x13 < uVar73);
            unmap_memory_page_region_direct(pmVar54->memory_interface_arm9,0x6208000,uVar63);
            ppuVar95 = video->vram_map + uVar73 + 0x82;
            uVar64 = video->vram_map_dirty_bitmap_fine[4];
            puVar78 = video->vram_map_dirty_bit_numbers + 0x82;
            puVar59 = video->vram_map_allocation_bitmap + uVar73 + 0x82;
            puVar92 = video->vram_map_dirty_bit_numbers + uVar73 + 0x82;
            bVar98 = ppuVar87 <= puVar59;
            bVar96 = (u8 **)puVar59 == ppuVar87;
            if (bVar98 && !bVar96) {
              bVar98 = puVar70 <= ppuVar95;
              bVar96 = ppuVar95 == (u8 **)puVar70;
            }
            uVar79 = (uint)(puVar92 <= ppuVar87);
            if (ppuVar95 <= puVar78) {
              uVar79 = 1;
            }
            video->vram_map_dirty_bitmap_coarse = video->vram_map_dirty_bitmap_coarse | 0x10;
            uVar90 = ~(-1 << (uVar73 & 0xff));
            bVar97 = puVar70 <= puVar92;
            bVar99 = (u16 *)puVar92 == puVar70;
            if (bVar97 && !bVar99) {
              bVar97 = puVar78 <= puVar59;
              bVar99 = puVar59 == (u16 *)puVar78;
            }
            video->vram_map_dirty_bitmap_fine[4] = uVar64 | uVar90 << 2;
            vram_map_2 = (u8 **)(puVar86 + -0x104000);
            if ((uVar79 & (!bVar98 || bVar96) & uVar67 & (uint)(!bVar97 || bVar99)) == 0) {
              ppuVar95 = video->vram_map + 0x81;
              puVar92 = video->vram_map_dirty_bit_numbers + 0x81;
              iVar74 = 0x40;
              puVar59 = puVar70;
              do {
                uVar23 = *puVar59;
                ppuVar95 = ppuVar95 + 1;
                *ppuVar95 = (u8 *)vram_map_2;
                *puVar59 = uVar23 | 0x100;
                puVar92 = puVar92 + 1;
                *puVar92 = (u8)iVar74;
                iVar74 = iVar74 + 1;
                puVar59 = puVar59 + 1;
              } while (iVar74 != uVar73 + 0x40);
            }
            else {
              uVar64 = uVar73;
              if (uVar72 <= uVar73) {
                uVar64 = uVar72;
              }
              if (uVar64 == 0) {
                iVar69 = 0x40;
                iVar74 = 0x82;
                uVar79 = uVar73;
              }
              else {
                uVar79 = uVar73 - 1;
                uVar23 = *puVar70;
                video->vram_map[0x82] = (u8 *)vram_map_2;
                *puVar70 = uVar23 | 0x100;
                video->vram_map_dirty_bit_numbers[0x82] = '@';
                if (uVar64 == 1) {
                  iVar69 = 0x41;
                  iVar74 = 0x83;
                }
                else {
                  uVar23 = video->vram_map_allocation_bitmap[0x83];
                  video->vram_map[0x83] = (u8 *)vram_map_2;
                  uVar79 = uVar73 - 2;
                  video->vram_map_dirty_bit_numbers[0x83] = 'A';
                  video->vram_map_allocation_bitmap[0x83] = uVar23 | 0x100;
                  if (uVar64 == 2) {
                    iVar69 = 0x42;
                    iVar74 = 0x84;
                  }
                  else {
                    uVar23 = video->vram_map_allocation_bitmap[0x84];
                    video->vram_map[0x84] = (u8 *)vram_map_2;
                    uVar79 = uVar73 - 3;
                    video->vram_map_allocation_bitmap[0x84] = uVar23 | 0x100;
                    video->vram_map_dirty_bit_numbers[0x84] = 'B';
                    if (uVar64 == 3) {
                      iVar69 = 0x43;
                      iVar74 = 0x85;
                    }
                    else {
                      uVar23 = video->vram_map_allocation_bitmap[0x85];
                      video->vram_map[0x85] = (u8 *)vram_map_2;
                      uVar79 = uVar73 - 4;
                      video->vram_map_dirty_bit_numbers[0x85] = 'C';
                      video->vram_map_allocation_bitmap[0x85] = uVar23 | 0x100;
                      if (uVar64 == 4) {
                        iVar69 = 0x44;
                        iVar74 = 0x86;
                      }
                      else {
                        uVar23 = video->vram_map_allocation_bitmap[0x86];
                        video->vram_map[0x86] = (u8 *)vram_map_2;
                        uVar79 = uVar73 - 5;
                        video->vram_map_allocation_bitmap[0x86] = uVar23 | 0x100;
                        video->vram_map_dirty_bit_numbers[0x86] = 'D';
                        if (uVar64 == 5) {
                          iVar69 = 0x45;
                          iVar74 = 0x87;
                        }
                        else {
                          uVar23 = video->vram_map_allocation_bitmap[0x87];
                          video->vram_map[0x87] = (u8 *)vram_map_2;
                          uVar79 = uVar73 - 6;
                          video->vram_map_dirty_bit_numbers[0x87] = 'E';
                          video->vram_map_allocation_bitmap[0x87] = uVar23 | 0x100;
                          if (uVar64 == 7) {
                            uVar79 = uVar73 - 7;
                            uVar23 = video->vram_map_allocation_bitmap[0x88];
                            iVar69 = 0x47;
                            iVar74 = 0x89;
                            video->vram_map[0x88] = (u8 *)vram_map_2;
                            video->vram_map_allocation_bitmap[0x88] = uVar23 | 0x100;
                            video->vram_map_dirty_bit_numbers[0x88] = 'F';
                          }
                          else {
                            iVar69 = 0x46;
                            iVar74 = 0x88;
                          }
                        }
                      }
                    }
                  }
                }
                if (uVar73 == uVar64) goto LAB_080310ac;
              }
              uVar56 = ((uVar73 - uVar64) - 0x10 >> 4) + 1;
              iVar68 = uVar56 * 0x10;
              if (0xe < (uVar73 - 1) - uVar64) {
                auVar5._4_4_ = iVar69;
                auVar5._0_4_ = iVar69;
                auVar5._8_8_ = 0;
                auVar1 = SIMDExpandImmediate(0,0,0x10);
                auVar2 = SIMDExpandImmediate(0,0,4);
                auVar117 = SIMDExpandImmediate(0,0,8);
                local_c4 = 0;
                auVar119 = SIMDExpandImmediate(0,0,0xc);
                puVar92 = video->vram_map_dirty_bit_numbers + uVar64 + 0x82;
                auVar38._8_8_ = 0x300000002;
                auVar38._0_8_ = 0x100000000;
                auVar118 = VectorAdd(auVar5 & auVar5 << 0x40,auVar38,4);
                ppuVar95 = video->vram_map + uVar64 + 0x82;
                puVar59 = video->vram_map_allocation_bitmap + uVar64 + 0x92;
                puVar58 = video->vram_map_allocation_bitmap + uVar64 + 0x92;
                do {
                  auVar100 = *(undefined (*) [16])(puVar58 + -0x10);
                  auVar113 = VectorAdd(auVar118,auVar2,4);
                  auVar120 = VectorAdd(auVar118,auVar117,4);
                  auVar107 = *(undefined (*) [16])(puVar58 + -8);
                  *(undefined8 *)ppuVar95 = 0;
                  *(undefined8 *)(ppuVar95 + 2) = 0;
                  auVar103._0_8_ = VectorCopyNarrow(auVar118,4);
                  auVar103._8_8_ = VectorCopyNarrow(auVar113,4);
                  auVar113 = VectorAdd(auVar118,auVar119,4);
                  auVar118 = VectorAdd(auVar118,auVar1,4);
                  local_c4 = local_c4 + 1;
                  uVar108 = VectorCopyNarrow(auVar120,4);
                  uVar109 = VectorCopyNarrow(auVar113,4);
                  auVar120 = SIMDExpandImmediate(0,0xb,1);
                  uVar110 = VectorCopyNarrow(auVar103,2);
                  auVar28._8_8_ = uVar109;
                  auVar28._0_8_ = uVar108;
                  uVar108 = VectorCopyNarrow(auVar28,2);
                  auVar113 = SIMDExpandImmediate(0,0xb,1);
                  *(undefined8 *)(ppuVar95 + 4) = 0;
                  *(undefined8 *)(ppuVar95 + 6) = 0;
                  *(undefined8 *)(ppuVar95 + 8) = 0;
                  *(undefined8 *)(ppuVar95 + 10) = 0;
                  *(undefined8 *)(ppuVar95 + 0xc) = 0;
                  *(undefined8 *)(ppuVar95 + 0xe) = 0;
                  *(longlong *)(puVar59 + -0x10) = SUB168(auVar100 | auVar120,0);
                  *(longlong *)(puVar59 + -0xc) = SUB168(auVar100 | auVar120,8);
                  *(longlong *)(puVar59 + -8) = SUB168(auVar107 | auVar113,0);
                  *(longlong *)(puVar59 + -4) = SUB168(auVar107 | auVar113,8);
                  *(undefined8 *)puVar92 = uVar110;
                  *(undefined8 *)(puVar92 + 8) = uVar108;
                  puVar92 = puVar92 + 0x10;
                  ppuVar95 = ppuVar95 + 0x10;
                  puVar59 = puVar59 + 0x10;
                  puVar58 = puVar58 + 0x10;
                } while (local_c4 < uVar56);
                iVar74 = iVar74 + iVar68;
                uVar79 = uVar79 + uVar56 * -0x10;
                iVar69 = iVar69 + iVar68;
                if (uVar73 - uVar64 == iVar68) goto LAB_080310ac;
              }
              uVar47 = (u8)iVar69;
              uVar23 = video->vram_map_allocation_bitmap[iVar74];
              video->vram_map[iVar74] = (u8 *)vram_map_2;
              video->vram_map_allocation_bitmap[iVar74] = uVar23 | 0x100;
              video->vram_map_dirty_bit_numbers[iVar74] = uVar47;
              if (uVar79 != 1) {
                video->vram_map[iVar74 + 1] = (u8 *)vram_map_2;
                video->vram_map_allocation_bitmap[iVar74 + 1] =
                     video->vram_map_allocation_bitmap[iVar74 + 1] | 0x100;
                video->vram_map_dirty_bit_numbers[iVar74 + 1] = uVar47 + '\x01';
                if (uVar79 != 2) {
                  uVar23 = video->vram_map_allocation_bitmap[iVar74 + 2];
                  video->vram_map[iVar74 + 2] = (u8 *)vram_map_2;
                  video->vram_map_allocation_bitmap[iVar74 + 2] = uVar23 | 0x100;
                  video->vram_map_dirty_bit_numbers[iVar74 + 2] = uVar47 + '\x02';
                  if (uVar79 != 3) {
                    uVar23 = video->vram_map_allocation_bitmap[iVar74 + 3];
                    video->vram_map[iVar74 + 3] = (u8 *)vram_map_2;
                    video->vram_map_allocation_bitmap[iVar74 + 3] = uVar23 | 0x100;
                    video->vram_map_dirty_bit_numbers[iVar74 + 3] = uVar47 + '\x03';
                    if (uVar79 != 4) {
                      uVar23 = video->vram_map_allocation_bitmap[iVar74 + 4];
                      video->vram_map[iVar74 + 4] = (u8 *)vram_map_2;
                      video->vram_map_allocation_bitmap[iVar74 + 4] = uVar23 | 0x100;
                      video->vram_map_dirty_bit_numbers[iVar74 + 4] = uVar47 + '\x04';
                      if (uVar79 != 5) {
                        uVar23 = video->vram_map_allocation_bitmap[iVar74 + 5];
                        video->vram_map[iVar74 + 5] = (u8 *)vram_map_2;
                        video->vram_map_allocation_bitmap[iVar74 + 5] = uVar23 | 0x100;
                        video->vram_map_dirty_bit_numbers[iVar74 + 5] = uVar47 + '\x05';
                        if (uVar79 != 6) {
                          uVar23 = video->vram_map_allocation_bitmap[iVar74 + 6];
                          video->vram_map[iVar74 + 6] = (u8 *)vram_map_2;
                          video->vram_map_allocation_bitmap[iVar74 + 6] = uVar23 | 0x100;
                          video->vram_map_dirty_bit_numbers[iVar74 + 6] = uVar47 + '\x06';
                          if (uVar79 != 7) {
                            uVar23 = video->vram_map_allocation_bitmap[iVar74 + 7];
                            video->vram_map[iVar74 + 7] = (u8 *)vram_map_2;
                            video->vram_map_allocation_bitmap[iVar74 + 7] = uVar23 | 0x100;
                            video->vram_map_dirty_bit_numbers[iVar74 + 7] = uVar47 + '\a';
                            if (uVar79 != 8) {
                              uVar23 = video->vram_map_allocation_bitmap[iVar74 + 8];
                              video->vram_map[iVar74 + 8] = (u8 *)vram_map_2;
                              video->vram_map_allocation_bitmap[iVar74 + 8] = uVar23 | 0x100;
                              video->vram_map_dirty_bit_numbers[iVar74 + 8] = uVar47 + '\b';
                              if (uVar79 != 9) {
                                uVar23 = video->vram_map_allocation_bitmap[iVar74 + 9];
                                video->vram_map[iVar74 + 9] = (u8 *)vram_map_2;
                                video->vram_map_allocation_bitmap[iVar74 + 9] = uVar23 | 0x100;
                                video->vram_map_dirty_bit_numbers[iVar74 + 9] = uVar47 + '\t';
                                if (uVar79 != 10) {
                                  uVar23 = video->vram_map_allocation_bitmap[iVar74 + 10];
                                  video->vram_map[iVar74 + 10] = (u8 *)vram_map_2;
                                  video->vram_map_allocation_bitmap[iVar74 + 10] = uVar23 | 0x100;
                                  video->vram_map_dirty_bit_numbers[iVar74 + 10] = uVar47 + '\n';
                                  if (uVar79 != 0xb) {
                                    uVar23 = video->vram_map_allocation_bitmap[iVar74 + 0xb];
                                    video->vram_map[iVar74 + 0xb] = (u8 *)vram_map_2;
                                    video->vram_map_allocation_bitmap[iVar74 + 0xb] = uVar23 | 0x100
                                    ;
                                    video->vram_map_dirty_bit_numbers[iVar74 + 0xb] = uVar47 + '\v';
                                    if (uVar79 != 0xc) {
                                      uVar23 = video->vram_map_allocation_bitmap[iVar74 + 0xc];
                                      video->vram_map[iVar74 + 0xc] = (u8 *)vram_map_2;
                                      video->vram_map_allocation_bitmap[iVar74 + 0xc] =
                                           uVar23 | 0x100;
                                      video->vram_map_dirty_bit_numbers[iVar74 + 0xc] =
                                           uVar47 + '\f';
                                      if (uVar79 != 0xd) {
                                        video->vram_map[iVar74 + 0xd] = (u8 *)vram_map_2;
                                        video->vram_map_allocation_bitmap[iVar74 + 0xd] =
                                             video->vram_map_allocation_bitmap[iVar74 + 0xd] | 0x100
                                        ;
                                        video->vram_map_dirty_bit_numbers[iVar74 + 0xd] =
                                             uVar47 + '\r';
                                        if (uVar79 != 0xe) {
                                          video->vram_map[iVar74 + 0xe] = (u8 *)vram_map_2;
                                          video->vram_map_allocation_bitmap[iVar74 + 0xe] =
                                               video->vram_map_allocation_bitmap[iVar74 + 0xe] |
                                               0x100;
                                          video->vram_map_dirty_bit_numbers[iVar74 + 0xe] =
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
LAB_080310ac:
            unmap_memory_page_region_direct(video->memory->memory_interface_arm9,0x620c000,uVar63);
            ppuVar55 = video->vram_map + 0x83;
            puVar92 = video->vram_map_dirty_bit_numbers + 0x83;
            puVar81 = video->vram_map_dirty_bit_numbers + uVar73 + 0x83;
            ppuVar95 = video->vram_map + 0x3da;
            if (ppuVar55 < puVar81) {
              ppuVar95 = (u8 **)0x0;
            }
            uVar64 = video->vram_map_dirty_bitmap_fine[4];
            if (ppuVar55 >= puVar81) {
              ppuVar95 = (u8 **)0x1;
            }
            ppuVar75 = video->vram_map + uVar73 + 0x83;
            if (ppuVar75 <= puVar92) {
              ppuVar95 = (u8 **)((uint)ppuVar95 | 1);
            }
            puVar59 = video->vram_map_allocation_bitmap + uVar73 + 0x83;
            bVar98 = ppuVar55 <= puVar59;
            bVar96 = (u8 **)puVar59 == ppuVar55;
            if (bVar98 && !bVar96) {
              bVar98 = puVar71 <= ppuVar75;
              bVar96 = ppuVar75 == (u8 **)puVar71;
            }
            video->vram_map_dirty_bitmap_coarse = video->vram_map_dirty_bitmap_coarse | 0x10;
            bVar97 = puVar71 <= puVar81;
            bVar99 = (u16 *)puVar81 == puVar71;
            if (bVar97 && !bVar99) {
              bVar97 = puVar92 <= puVar59;
              bVar99 = puVar59 == (u16 *)puVar92;
            }
            puVar59 = puVar86 + -0x106000;
            video->vram_map_dirty_bitmap_fine[4] = uVar64 | uVar90 << 3;
            if (((uint)(!bVar98 || bVar96) & (uint)ppuVar95 & uVar67 & (uint)(!bVar97 || bVar99)) ==
                0) {
              iVar74 = 0x40;
              puVar58 = puVar71;
              do {
                uVar23 = *puVar58;
                ppuVar87 = ppuVar87 + 1;
                *ppuVar87 = (u8 *)puVar59;
                *puVar58 = uVar23 | 0x100;
                puVar78 = puVar78 + 1;
                *puVar78 = (u8)iVar74;
                iVar74 = iVar74 + 1;
                puVar58 = puVar58 + 1;
              } while (iVar74 != uVar73 + 0x40);
            }
            else {
              uVar64 = uVar73;
              if (uVar91 <= uVar73) {
                uVar64 = uVar91;
              }
              if (uVar64 == 0) {
                iVar69 = 0x40;
                iVar74 = 0x83;
                uVar79 = uVar73;
              }
              else {
                uVar23 = video->vram_map_allocation_bitmap[0x83];
                uVar79 = uVar73 - 1;
                video->vram_map[0x83] = (u8 *)puVar59;
                video->vram_map_dirty_bit_numbers[0x83] = '@';
                video->vram_map_allocation_bitmap[0x83] = uVar23 | 0x100;
                if (uVar64 == 1) {
                  iVar69 = 0x41;
                  iVar74 = 0x84;
                }
                else {
                  uVar23 = video->vram_map_allocation_bitmap[0x84];
                  video->vram_map[0x84] = (u8 *)puVar59;
                  uVar79 = uVar73 - 2;
                  video->vram_map_allocation_bitmap[0x84] = uVar23 | 0x100;
                  video->vram_map_dirty_bit_numbers[0x84] = 'A';
                  if (uVar64 == 2) {
                    iVar69 = 0x42;
                    iVar74 = 0x85;
                  }
                  else {
                    uVar23 = video->vram_map_allocation_bitmap[0x85];
                    video->vram_map[0x85] = (u8 *)puVar59;
                    uVar79 = uVar73 - 3;
                    video->vram_map_dirty_bit_numbers[0x85] = 'B';
                    video->vram_map_allocation_bitmap[0x85] = uVar23 | 0x100;
                    if (uVar64 == 3) {
                      iVar69 = 0x43;
                      iVar74 = 0x86;
                    }
                    else {
                      uVar23 = video->vram_map_allocation_bitmap[0x86];
                      video->vram_map[0x86] = (u8 *)puVar59;
                      uVar79 = uVar73 - 4;
                      video->vram_map_allocation_bitmap[0x86] = uVar23 | 0x100;
                      video->vram_map_dirty_bit_numbers[0x86] = 'C';
                      if (uVar64 == 4) {
                        iVar69 = 0x44;
                        iVar74 = 0x87;
                      }
                      else {
                        uVar23 = video->vram_map_allocation_bitmap[0x87];
                        video->vram_map[0x87] = (u8 *)puVar59;
                        uVar79 = uVar73 - 5;
                        video->vram_map_dirty_bit_numbers[0x87] = 'D';
                        video->vram_map_allocation_bitmap[0x87] = uVar23 | 0x100;
                        if (uVar64 == 5) {
                          iVar69 = 0x45;
                          iVar74 = 0x88;
                        }
                        else {
                          uVar23 = video->vram_map_allocation_bitmap[0x88];
                          video->vram_map[0x88] = (u8 *)puVar59;
                          uVar79 = uVar73 - 6;
                          video->vram_map_allocation_bitmap[0x88] = uVar23 | 0x100;
                          video->vram_map_dirty_bit_numbers[0x88] = 'E';
                          if (uVar64 == 7) {
                            uVar23 = video->vram_map_allocation_bitmap[0x89];
                            uVar79 = uVar73 - 7;
                            video->vram_map[0x89] = (u8 *)puVar59;
                            iVar69 = 0x47;
                            video->vram_map_dirty_bit_numbers[0x89] = 'F';
                            iVar74 = 0x8a;
                            video->vram_map_allocation_bitmap[0x89] = uVar23 | 0x100;
                          }
                          else {
                            iVar69 = 0x46;
                            iVar74 = 0x89;
                          }
                        }
                      }
                    }
                  }
                }
                if (uVar73 == uVar64) goto LAB_080316bc;
              }
              uVar56 = ((uVar73 - uVar64) - 0x10 >> 4) + 1;
              iVar68 = uVar56 * 0x10;
              if (0xe < (uVar73 - 1) - uVar64) {
                auVar6._4_4_ = iVar69;
                auVar6._0_4_ = iVar69;
                auVar6._8_8_ = 0;
                auVar1 = SIMDExpandImmediate(0,0,0x10);
                local_cc = 0;
                auVar2 = SIMDExpandImmediate(0,0,4);
                auVar117 = SIMDExpandImmediate(0,0,8);
                auVar119 = SIMDExpandImmediate(0,0,0xc);
                puVar92 = video->vram_map_dirty_bit_numbers + uVar64 + 0x83;
                auVar39._8_8_ = 0x300000002;
                auVar39._0_8_ = 0x100000000;
                auVar118 = VectorAdd(auVar6 & auVar6 << 0x40,auVar39,4);
                ppuVar87 = video->vram_map + uVar64 + 0x83;
                puVar58 = video->vram_map_allocation_bitmap + uVar64 + 0x93;
                puVar83 = video->vram_map_allocation_bitmap + uVar64 + 0x93;
                do {
                  auVar100 = *(undefined (*) [16])(puVar83 + -0x10);
                  auVar113 = VectorAdd(auVar118,auVar2,4);
                  auVar120 = VectorAdd(auVar118,auVar117,4);
                  auVar107 = *(undefined (*) [16])(puVar83 + -8);
                  *(undefined8 *)ppuVar87 = 0;
                  *(undefined8 *)(ppuVar87 + 2) = 0;
                  auVar104._0_8_ = VectorCopyNarrow(auVar118,4);
                  auVar104._8_8_ = VectorCopyNarrow(auVar113,4);
                  auVar113 = VectorAdd(auVar118,auVar119,4);
                  auVar118 = VectorAdd(auVar118,auVar1,4);
                  local_cc = local_cc + 1;
                  uVar108 = VectorCopyNarrow(auVar120,4);
                  uVar109 = VectorCopyNarrow(auVar113,4);
                  auVar120 = SIMDExpandImmediate(0,0xb,1);
                  uVar110 = VectorCopyNarrow(auVar104,2);
                  auVar29._8_8_ = uVar109;
                  auVar29._0_8_ = uVar108;
                  uVar108 = VectorCopyNarrow(auVar29,2);
                  auVar113 = SIMDExpandImmediate(0,0xb,1);
                  *(undefined8 *)(ppuVar87 + 4) = 0;
                  *(undefined8 *)(ppuVar87 + 6) = 0;
                  *(undefined8 *)(ppuVar87 + 8) = 0;
                  *(undefined8 *)(ppuVar87 + 10) = 0;
                  *(undefined8 *)(ppuVar87 + 0xc) = 0;
                  *(undefined8 *)(ppuVar87 + 0xe) = 0;
                  *(longlong *)(puVar58 + -0x10) = SUB168(auVar100 | auVar120,0);
                  *(longlong *)(puVar58 + -0xc) = SUB168(auVar100 | auVar120,8);
                  *(longlong *)(puVar58 + -8) = SUB168(auVar107 | auVar113,0);
                  *(longlong *)(puVar58 + -4) = SUB168(auVar107 | auVar113,8);
                  *(undefined8 *)puVar92 = uVar110;
                  *(undefined8 *)(puVar92 + 8) = uVar108;
                  puVar92 = puVar92 + 0x10;
                  ppuVar87 = ppuVar87 + 0x10;
                  puVar58 = puVar58 + 0x10;
                  puVar83 = puVar83 + 0x10;
                } while (local_cc < uVar56);
                uVar79 = uVar79 + uVar56 * -0x10;
                iVar69 = iVar69 + iVar68;
                iVar74 = iVar74 + iVar68;
                if (uVar73 - uVar64 == iVar68) goto LAB_080316bc;
              }
              uVar47 = (u8)iVar69;
              uVar23 = video->vram_map_allocation_bitmap[iVar74];
              video->vram_map[iVar74] = (u8 *)puVar59;
              video->vram_map_allocation_bitmap[iVar74] = uVar23 | 0x100;
              video->vram_map_dirty_bit_numbers[iVar74] = uVar47;
              if (uVar79 != 1) {
                video->vram_map[iVar74 + 1] = (u8 *)puVar59;
                video->vram_map_allocation_bitmap[iVar74 + 1] =
                     video->vram_map_allocation_bitmap[iVar74 + 1] | 0x100;
                video->vram_map_dirty_bit_numbers[iVar74 + 1] = uVar47 + '\x01';
                if (uVar79 != 2) {
                  uVar23 = video->vram_map_allocation_bitmap[iVar74 + 2];
                  video->vram_map[iVar74 + 2] = (u8 *)puVar59;
                  video->vram_map_allocation_bitmap[iVar74 + 2] = uVar23 | 0x100;
                  video->vram_map_dirty_bit_numbers[iVar74 + 2] = uVar47 + '\x02';
                  if (uVar79 != 3) {
                    uVar23 = video->vram_map_allocation_bitmap[iVar74 + 3];
                    video->vram_map[iVar74 + 3] = (u8 *)puVar59;
                    video->vram_map_allocation_bitmap[iVar74 + 3] = uVar23 | 0x100;
                    video->vram_map_dirty_bit_numbers[iVar74 + 3] = uVar47 + '\x03';
                    if (uVar79 != 4) {
                      uVar23 = video->vram_map_allocation_bitmap[iVar74 + 4];
                      video->vram_map[iVar74 + 4] = (u8 *)puVar59;
                      video->vram_map_allocation_bitmap[iVar74 + 4] = uVar23 | 0x100;
                      video->vram_map_dirty_bit_numbers[iVar74 + 4] = uVar47 + '\x04';
                      if (uVar79 != 5) {
                        uVar23 = video->vram_map_allocation_bitmap[iVar74 + 5];
                        video->vram_map[iVar74 + 5] = (u8 *)puVar59;
                        video->vram_map_allocation_bitmap[iVar74 + 5] = uVar23 | 0x100;
                        video->vram_map_dirty_bit_numbers[iVar74 + 5] = uVar47 + '\x05';
                        if (uVar79 != 6) {
                          uVar23 = video->vram_map_allocation_bitmap[iVar74 + 6];
                          video->vram_map[iVar74 + 6] = (u8 *)puVar59;
                          video->vram_map_allocation_bitmap[iVar74 + 6] = uVar23 | 0x100;
                          video->vram_map_dirty_bit_numbers[iVar74 + 6] = uVar47 + '\x06';
                          if (uVar79 != 7) {
                            uVar23 = video->vram_map_allocation_bitmap[iVar74 + 7];
                            video->vram_map[iVar74 + 7] = (u8 *)puVar59;
                            video->vram_map_allocation_bitmap[iVar74 + 7] = uVar23 | 0x100;
                            video->vram_map_dirty_bit_numbers[iVar74 + 7] = uVar47 + '\a';
                            if (uVar79 != 8) {
                              uVar23 = video->vram_map_allocation_bitmap[iVar74 + 8];
                              video->vram_map[iVar74 + 8] = (u8 *)puVar59;
                              video->vram_map_allocation_bitmap[iVar74 + 8] = uVar23 | 0x100;
                              video->vram_map_dirty_bit_numbers[iVar74 + 8] = uVar47 + '\b';
                              if (uVar79 != 9) {
                                uVar23 = video->vram_map_allocation_bitmap[iVar74 + 9];
                                video->vram_map[iVar74 + 9] = (u8 *)puVar59;
                                video->vram_map_allocation_bitmap[iVar74 + 9] = uVar23 | 0x100;
                                video->vram_map_dirty_bit_numbers[iVar74 + 9] = uVar47 + '\t';
                                if (uVar79 != 10) {
                                  uVar23 = video->vram_map_allocation_bitmap[iVar74 + 10];
                                  video->vram_map[iVar74 + 10] = (u8 *)puVar59;
                                  video->vram_map_allocation_bitmap[iVar74 + 10] = uVar23 | 0x100;
                                  video->vram_map_dirty_bit_numbers[iVar74 + 10] = uVar47 + '\n';
                                  if (uVar79 != 0xb) {
                                    uVar23 = video->vram_map_allocation_bitmap[iVar74 + 0xb];
                                    video->vram_map[iVar74 + 0xb] = (u8 *)puVar59;
                                    video->vram_map_allocation_bitmap[iVar74 + 0xb] = uVar23 | 0x100
                                    ;
                                    video->vram_map_dirty_bit_numbers[iVar74 + 0xb] = uVar47 + '\v';
                                    if (uVar79 != 0xc) {
                                      uVar23 = video->vram_map_allocation_bitmap[iVar74 + 0xc];
                                      video->vram_map[iVar74 + 0xc] = (u8 *)puVar59;
                                      video->vram_map_allocation_bitmap[iVar74 + 0xc] =
                                           uVar23 | 0x100;
                                      video->vram_map_dirty_bit_numbers[iVar74 + 0xc] =
                                           uVar47 + '\f';
                                      if (uVar79 != 0xd) {
                                        video->vram_map[iVar74 + 0xd] = (u8 *)puVar59;
                                        video->vram_map_allocation_bitmap[iVar74 + 0xd] =
                                             video->vram_map_allocation_bitmap[iVar74 + 0xd] | 0x100
                                        ;
                                        video->vram_map_dirty_bit_numbers[iVar74 + 0xd] =
                                             uVar47 + '\r';
                                        if (uVar79 != 0xe) {
                                          video->vram_map[iVar74 + 0xe] = (u8 *)puVar59;
                                          video->vram_map_allocation_bitmap[iVar74 + 0xe] =
                                               video->vram_map_allocation_bitmap[iVar74 + 0xe] |
                                               0x100;
                                          video->vram_map_dirty_bit_numbers[iVar74 + 0xe] =
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
LAB_080316bc:
            ppuVar87 = video->vram_map + 0x86;
            unmap_memory_page_region_direct(video->memory->memory_interface_arm9,0x6218000,uVar63);
            puVar78 = video->vram_map_dirty_bit_numbers + 0x86;
            puVar92 = video->vram_map_dirty_bit_numbers + uVar73 + 0x86;
            uVar64 = (uint)(puVar92 <= ppuVar87);
            uVar79 = video->vram_map_dirty_bitmap_fine[4];
            ppuVar95 = video->vram_map + uVar73 + 0x86;
            if (ppuVar95 <= puVar78) {
              uVar64 = 1;
            }
            puVar59 = video->vram_map_allocation_bitmap + uVar73 + 0x86;
            bVar98 = ppuVar87 <= puVar59;
            bVar96 = (u8 **)puVar59 == ppuVar87;
            if (bVar98 && !bVar96) {
              bVar98 = puVar65 <= ppuVar95;
              bVar96 = ppuVar95 == (u8 **)puVar65;
            }
            video->vram_map_dirty_bitmap_coarse = video->vram_map_dirty_bitmap_coarse | 0x10;
            bVar97 = puVar65 <= puVar92;
            bVar99 = (u16 *)puVar92 == puVar65;
            if (bVar97 && !bVar99) {
              bVar97 = puVar78 <= puVar59;
              bVar99 = puVar59 == (u16 *)puVar78;
            }
            video->vram_map_dirty_bitmap_fine[4] = uVar79 | uVar90 << 6;
            puVar59 = puVar86 + -0x10c000;
            if (((!bVar98 || bVar96) & uVar64 & uVar67 & (uint)(!bVar97 || bVar99)) == 0) {
              ppuVar95 = video->vram_map + 0x85;
              puVar92 = video->vram_map_dirty_bit_numbers + 0x85;
              iVar74 = 0x40;
              puVar58 = puVar65;
              do {
                uVar23 = *puVar58;
                ppuVar95 = ppuVar95 + 1;
                *ppuVar95 = (u8 *)puVar59;
                *puVar58 = uVar23 | 0x100;
                puVar92 = puVar92 + 1;
                *puVar92 = (u8)iVar74;
                iVar74 = iVar74 + 1;
                puVar58 = puVar58 + 1;
              } while (iVar74 != uVar73 + 0x40);
            }
            else {
              uVar64 = uVar73;
              if (uVar88 <= uVar73) {
                uVar64 = uVar88;
              }
              if (uVar64 == 0) {
                iVar69 = 0x40;
                iVar74 = 0x86;
                uVar79 = uVar73;
              }
              else {
                uVar23 = video->vram_map_allocation_bitmap[0x86];
                uVar79 = uVar73 - 1;
                video->vram_map[0x86] = (u8 *)puVar59;
                video->vram_map_allocation_bitmap[0x86] = uVar23 | 0x100;
                video->vram_map_dirty_bit_numbers[0x86] = '@';
                if (uVar64 == 1) {
                  iVar69 = 0x41;
                  iVar74 = 0x87;
                }
                else {
                  uVar23 = video->vram_map_allocation_bitmap[0x87];
                  video->vram_map[0x87] = (u8 *)puVar59;
                  uVar79 = uVar73 - 2;
                  video->vram_map_dirty_bit_numbers[0x87] = 'A';
                  video->vram_map_allocation_bitmap[0x87] = uVar23 | 0x100;
                  if (uVar64 == 2) {
                    iVar69 = 0x42;
                    iVar74 = 0x88;
                  }
                  else {
                    uVar23 = video->vram_map_allocation_bitmap[0x88];
                    video->vram_map[0x88] = (u8 *)puVar59;
                    uVar79 = uVar73 - 3;
                    video->vram_map_allocation_bitmap[0x88] = uVar23 | 0x100;
                    video->vram_map_dirty_bit_numbers[0x88] = 'B';
                    if (uVar64 == 3) {
                      iVar69 = 0x43;
                      iVar74 = 0x89;
                    }
                    else {
                      uVar23 = video->vram_map_allocation_bitmap[0x89];
                      video->vram_map[0x89] = (u8 *)puVar59;
                      uVar79 = uVar73 - 4;
                      video->vram_map_dirty_bit_numbers[0x89] = 'C';
                      video->vram_map_allocation_bitmap[0x89] = uVar23 | 0x100;
                      if (uVar64 == 4) {
                        iVar69 = 0x44;
                        iVar74 = 0x8a;
                      }
                      else {
                        uVar23 = video->vram_map_allocation_bitmap[0x8a];
                        video->vram_map[0x8a] = (u8 *)puVar59;
                        uVar79 = uVar73 - 5;
                        video->vram_map_allocation_bitmap[0x8a] = uVar23 | 0x100;
                        video->vram_map_dirty_bit_numbers[0x8a] = 'D';
                        if (uVar64 == 5) {
                          iVar69 = 0x45;
                          iVar74 = 0x8b;
                        }
                        else {
                          uVar23 = video->vram_map_allocation_bitmap[0x8b];
                          video->vram_map[0x8b] = (u8 *)puVar59;
                          uVar79 = uVar73 - 6;
                          video->vram_map_dirty_bit_numbers[0x8b] = 'E';
                          video->vram_map_allocation_bitmap[0x8b] = uVar23 | 0x100;
                          if (uVar64 == 7) {
                            uVar23 = video->vram_map_allocation_bitmap[0x8c];
                            uVar79 = uVar73 - 7;
                            iVar69 = 0x47;
                            iVar74 = 0x8d;
                            video->vram_map[0x8c] = (u8 *)puVar59;
                            video->vram_map_allocation_bitmap[0x8c] = uVar23 | 0x100;
                            video->vram_map_dirty_bit_numbers[0x8c] = 'F';
                          }
                          else {
                            iVar69 = 0x46;
                            iVar74 = 0x8c;
                          }
                        }
                      }
                    }
                  }
                }
                if (uVar73 == uVar64) goto LAB_08031cdc;
              }
              uVar56 = ((uVar73 - uVar64) - 0x10 >> 4) + 1;
              iVar68 = uVar56 * 0x10;
              if (0xe < (uVar73 - 1) - uVar64) {
                auVar7._4_4_ = iVar69;
                auVar7._0_4_ = iVar69;
                auVar7._8_8_ = 0;
                auVar1 = SIMDExpandImmediate(0,0,0x10);
                local_c4 = 0;
                auVar2 = SIMDExpandImmediate(0,0,4);
                auVar117 = SIMDExpandImmediate(0,0,8);
                auVar119 = SIMDExpandImmediate(0,0,0xc);
                puVar92 = video->vram_map_dirty_bit_numbers + uVar64 + 0x86;
                auVar40._8_8_ = 0x300000002;
                auVar40._0_8_ = 0x100000000;
                auVar118 = VectorAdd(auVar7 & auVar7 << 0x40,auVar40,4);
                ppuVar95 = video->vram_map + uVar64 + 0x86;
                puVar58 = video->vram_map_allocation_bitmap + uVar64 + 0x96;
                puVar83 = video->vram_map_allocation_bitmap + uVar64 + 0x96;
                do {
                  auVar100 = *(undefined (*) [16])(puVar83 + -0x10);
                  auVar113 = VectorAdd(auVar118,auVar2,4);
                  auVar120 = VectorAdd(auVar118,auVar117,4);
                  auVar107 = *(undefined (*) [16])(puVar83 + -8);
                  *(undefined8 *)ppuVar95 = 0;
                  *(undefined8 *)(ppuVar95 + 2) = 0;
                  auVar105._0_8_ = VectorCopyNarrow(auVar118,4);
                  auVar105._8_8_ = VectorCopyNarrow(auVar113,4);
                  auVar113 = VectorAdd(auVar118,auVar119,4);
                  auVar118 = VectorAdd(auVar118,auVar1,4);
                  local_c4 = local_c4 + 1;
                  uVar108 = VectorCopyNarrow(auVar120,4);
                  uVar109 = VectorCopyNarrow(auVar113,4);
                  auVar120 = SIMDExpandImmediate(0,0xb,1);
                  uVar110 = VectorCopyNarrow(auVar105,2);
                  auVar30._8_8_ = uVar109;
                  auVar30._0_8_ = uVar108;
                  uVar108 = VectorCopyNarrow(auVar30,2);
                  auVar113 = SIMDExpandImmediate(0,0xb,1);
                  *(undefined8 *)(ppuVar95 + 4) = 0;
                  *(undefined8 *)(ppuVar95 + 6) = 0;
                  *(undefined8 *)(ppuVar95 + 8) = 0;
                  *(undefined8 *)(ppuVar95 + 10) = 0;
                  *(undefined8 *)(ppuVar95 + 0xc) = 0;
                  *(undefined8 *)(ppuVar95 + 0xe) = 0;
                  *(longlong *)(puVar58 + -0x10) = SUB168(auVar100 | auVar120,0);
                  *(longlong *)(puVar58 + -0xc) = SUB168(auVar100 | auVar120,8);
                  *(longlong *)(puVar58 + -8) = SUB168(auVar107 | auVar113,0);
                  *(longlong *)(puVar58 + -4) = SUB168(auVar107 | auVar113,8);
                  *(undefined8 *)puVar92 = uVar110;
                  *(undefined8 *)(puVar92 + 8) = uVar108;
                  puVar92 = puVar92 + 0x10;
                  ppuVar95 = ppuVar95 + 0x10;
                  puVar58 = puVar58 + 0x10;
                  puVar83 = puVar83 + 0x10;
                } while (local_c4 < uVar56);
                uVar79 = uVar79 + uVar56 * -0x10;
                iVar69 = iVar69 + iVar68;
                iVar74 = iVar74 + iVar68;
                if (uVar73 - uVar64 == iVar68) goto LAB_08031cdc;
              }
              uVar47 = (u8)iVar69;
              uVar23 = video->vram_map_allocation_bitmap[iVar74];
              video->vram_map[iVar74] = (u8 *)puVar59;
              video->vram_map_allocation_bitmap[iVar74] = uVar23 | 0x100;
              video->vram_map_dirty_bit_numbers[iVar74] = uVar47;
              if (uVar79 != 1) {
                video->vram_map[iVar74 + 1] = (u8 *)puVar59;
                video->vram_map_allocation_bitmap[iVar74 + 1] =
                     video->vram_map_allocation_bitmap[iVar74 + 1] | 0x100;
                video->vram_map_dirty_bit_numbers[iVar74 + 1] = uVar47 + '\x01';
                if (uVar79 != 2) {
                  uVar23 = video->vram_map_allocation_bitmap[iVar74 + 2];
                  video->vram_map[iVar74 + 2] = (u8 *)puVar59;
                  video->vram_map_allocation_bitmap[iVar74 + 2] = uVar23 | 0x100;
                  video->vram_map_dirty_bit_numbers[iVar74 + 2] = uVar47 + '\x02';
                  if (uVar79 != 3) {
                    uVar23 = video->vram_map_allocation_bitmap[iVar74 + 3];
                    video->vram_map[iVar74 + 3] = (u8 *)puVar59;
                    video->vram_map_allocation_bitmap[iVar74 + 3] = uVar23 | 0x100;
                    video->vram_map_dirty_bit_numbers[iVar74 + 3] = uVar47 + '\x03';
                    if (uVar79 != 4) {
                      uVar23 = video->vram_map_allocation_bitmap[iVar74 + 4];
                      video->vram_map[iVar74 + 4] = (u8 *)puVar59;
                      video->vram_map_allocation_bitmap[iVar74 + 4] = uVar23 | 0x100;
                      video->vram_map_dirty_bit_numbers[iVar74 + 4] = uVar47 + '\x04';
                      if (uVar79 != 5) {
                        uVar23 = video->vram_map_allocation_bitmap[iVar74 + 5];
                        video->vram_map[iVar74 + 5] = (u8 *)puVar59;
                        video->vram_map_allocation_bitmap[iVar74 + 5] = uVar23 | 0x100;
                        video->vram_map_dirty_bit_numbers[iVar74 + 5] = uVar47 + '\x05';
                        if (uVar79 != 6) {
                          uVar23 = video->vram_map_allocation_bitmap[iVar74 + 6];
                          video->vram_map[iVar74 + 6] = (u8 *)puVar59;
                          video->vram_map_allocation_bitmap[iVar74 + 6] = uVar23 | 0x100;
                          video->vram_map_dirty_bit_numbers[iVar74 + 6] = uVar47 + '\x06';
                          if (uVar79 != 7) {
                            uVar23 = video->vram_map_allocation_bitmap[iVar74 + 7];
                            video->vram_map[iVar74 + 7] = (u8 *)puVar59;
                            video->vram_map_allocation_bitmap[iVar74 + 7] = uVar23 | 0x100;
                            video->vram_map_dirty_bit_numbers[iVar74 + 7] = uVar47 + '\a';
                            if (uVar79 != 8) {
                              uVar23 = video->vram_map_allocation_bitmap[iVar74 + 8];
                              video->vram_map[iVar74 + 8] = (u8 *)puVar59;
                              video->vram_map_allocation_bitmap[iVar74 + 8] = uVar23 | 0x100;
                              video->vram_map_dirty_bit_numbers[iVar74 + 8] = uVar47 + '\b';
                              if (uVar79 != 9) {
                                uVar23 = video->vram_map_allocation_bitmap[iVar74 + 9];
                                video->vram_map[iVar74 + 9] = (u8 *)puVar59;
                                video->vram_map_allocation_bitmap[iVar74 + 9] = uVar23 | 0x100;
                                video->vram_map_dirty_bit_numbers[iVar74 + 9] = uVar47 + '\t';
                                if (uVar79 != 10) {
                                  uVar23 = video->vram_map_allocation_bitmap[iVar74 + 10];
                                  video->vram_map[iVar74 + 10] = (u8 *)puVar59;
                                  video->vram_map_allocation_bitmap[iVar74 + 10] = uVar23 | 0x100;
                                  video->vram_map_dirty_bit_numbers[iVar74 + 10] = uVar47 + '\n';
                                  if (uVar79 != 0xb) {
                                    uVar23 = video->vram_map_allocation_bitmap[iVar74 + 0xb];
                                    video->vram_map[iVar74 + 0xb] = (u8 *)puVar59;
                                    video->vram_map_allocation_bitmap[iVar74 + 0xb] = uVar23 | 0x100
                                    ;
                                    video->vram_map_dirty_bit_numbers[iVar74 + 0xb] = uVar47 + '\v';
                                    if (uVar79 != 0xc) {
                                      uVar23 = video->vram_map_allocation_bitmap[iVar74 + 0xc];
                                      video->vram_map[iVar74 + 0xc] = (u8 *)puVar59;
                                      video->vram_map_allocation_bitmap[iVar74 + 0xc] =
                                           uVar23 | 0x100;
                                      video->vram_map_dirty_bit_numbers[iVar74 + 0xc] =
                                           uVar47 + '\f';
                                      if (uVar79 != 0xd) {
                                        video->vram_map[iVar74 + 0xd] = (u8 *)puVar59;
                                        video->vram_map_allocation_bitmap[iVar74 + 0xd] =
                                             video->vram_map_allocation_bitmap[iVar74 + 0xd] | 0x100
                                        ;
                                        video->vram_map_dirty_bit_numbers[iVar74 + 0xd] =
                                             uVar47 + '\r';
                                        if (uVar79 != 0xe) {
                                          video->vram_map[iVar74 + 0xe] = (u8 *)puVar59;
                                          video->vram_map_allocation_bitmap[iVar74 + 0xe] =
                                               video->vram_map_allocation_bitmap[iVar74 + 0xe] |
                                               0x100;
                                          video->vram_map_dirty_bit_numbers[iVar74 + 0xe] =
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
LAB_08031cdc:
            unmap_memory_page_region_direct(video->memory->memory_interface_arm9,0x621c000,uVar63);
            ppuVar55 = video->vram_map + 0x87;
            puVar81 = video->vram_map_dirty_bit_numbers + 0x87;
            puVar92 = video->vram_map_dirty_bit_numbers + uVar73 + 0x87;
            ppuVar95 = video->vram_map + 0x3da;
            if (ppuVar55 < puVar92) {
              ppuVar95 = (u8 **)0x0;
            }
            uVar64 = video->vram_map_dirty_bitmap_fine[4];
            if (ppuVar55 >= puVar92) {
              ppuVar95 = (u8 **)0x1;
            }
            if (video->vram_map + uVar73 + 0x87 <= puVar81) {
              ppuVar95 = (u8 **)((uint)ppuVar95 | 1);
            }
            puVar59 = video->vram_map_allocation_bitmap + uVar73 + 0x87;
            uVar79 = (uint)(video->vram_map + uVar73 + 0x87 <= puVar61);
            if (puVar59 <= ppuVar55) {
              uVar79 = 1;
            }
            bVar98 = puVar61 <= puVar92;
            bVar96 = (u16 *)puVar92 == puVar61;
            if (bVar98 && !bVar96) {
              bVar98 = puVar81 <= puVar59;
              bVar96 = puVar59 == (u16 *)puVar81;
            }
            video->vram_map_dirty_bitmap_coarse = video->vram_map_dirty_bitmap_coarse | 0x10;
            video->vram_map_dirty_bitmap_fine[4] = uVar64 | uVar90 << 7;
            puVar86 = puVar86 + -0x10e000;
            if ((uVar67 & uVar79 & (uint)ppuVar95 & (uint)(!bVar98 || bVar96)) == 0) {
              iVar74 = 0x40;
              puVar59 = puVar61;
              do {
                uVar23 = *puVar59;
                ppuVar87 = ppuVar87 + 1;
                *ppuVar87 = (u8 *)puVar86;
                *puVar59 = uVar23 | 0x100;
                puVar78 = puVar78 + 1;
                *puVar78 = (u8)iVar74;
                iVar74 = iVar74 + 1;
                puVar59 = puVar59 + 1;
              } while (iVar74 != uVar73 + 0x40);
            }
            else {
              uVar67 = uVar73;
              if (uVar53 <= uVar73) {
                uVar67 = uVar53;
              }
              if (uVar67 == 0) {
                iVar69 = 0x40;
                iVar74 = 0x87;
                uVar64 = uVar73;
              }
              else {
                uVar23 = video->vram_map_allocation_bitmap[0x87];
                uVar64 = uVar73 - 1;
                video->vram_map[0x87] = (u8 *)puVar86;
                video->vram_map_dirty_bit_numbers[0x87] = '@';
                video->vram_map_allocation_bitmap[0x87] = uVar23 | 0x100;
                if (uVar67 == 1) {
                  iVar69 = 0x41;
                  iVar74 = 0x88;
                }
                else {
                  uVar23 = video->vram_map_allocation_bitmap[0x88];
                  video->vram_map[0x88] = (u8 *)puVar86;
                  uVar64 = uVar73 - 2;
                  video->vram_map_allocation_bitmap[0x88] = uVar23 | 0x100;
                  video->vram_map_dirty_bit_numbers[0x88] = 'A';
                  if (uVar67 == 2) {
                    iVar69 = 0x42;
                    iVar74 = 0x89;
                  }
                  else {
                    uVar23 = video->vram_map_allocation_bitmap[0x89];
                    video->vram_map[0x89] = (u8 *)puVar86;
                    uVar64 = uVar73 - 3;
                    video->vram_map_dirty_bit_numbers[0x89] = 'B';
                    video->vram_map_allocation_bitmap[0x89] = uVar23 | 0x100;
                    if (uVar67 == 3) {
                      iVar69 = 0x43;
                      iVar74 = 0x8a;
                    }
                    else {
                      uVar23 = video->vram_map_allocation_bitmap[0x8a];
                      video->vram_map[0x8a] = (u8 *)puVar86;
                      uVar64 = uVar73 - 4;
                      video->vram_map_allocation_bitmap[0x8a] = uVar23 | 0x100;
                      video->vram_map_dirty_bit_numbers[0x8a] = 'C';
                      if (uVar67 == 4) {
                        iVar69 = 0x44;
                        iVar74 = 0x8b;
                      }
                      else {
                        uVar23 = video->vram_map_allocation_bitmap[0x8b];
                        video->vram_map[0x8b] = (u8 *)puVar86;
                        uVar64 = uVar73 - 5;
                        video->vram_map_dirty_bit_numbers[0x8b] = 'D';
                        video->vram_map_allocation_bitmap[0x8b] = uVar23 | 0x100;
                        if (uVar67 == 5) {
                          iVar69 = 0x45;
                          iVar74 = 0x8c;
                        }
                        else {
                          uVar23 = video->vram_map_allocation_bitmap[0x8c];
                          video->vram_map[0x8c] = (u8 *)puVar86;
                          uVar64 = uVar73 - 6;
                          video->vram_map_allocation_bitmap[0x8c] = uVar23 | 0x100;
                          video->vram_map_dirty_bit_numbers[0x8c] = 'E';
                          if (uVar67 == 7) {
                            uVar23 = video->vram_map_allocation_bitmap[0x8d];
                            uVar64 = uVar73 - 7;
                            video->vram_map[0x8d] = (u8 *)puVar86;
                            iVar69 = 0x47;
                            video->vram_map_dirty_bit_numbers[0x8d] = 'F';
                            iVar74 = 0x8e;
                            video->vram_map_allocation_bitmap[0x8d] = uVar23 | 0x100;
                          }
                          else {
                            iVar69 = 0x46;
                            iVar74 = 0x8d;
                          }
                        }
                      }
                    }
                  }
                }
                if (uVar73 == uVar67) goto LAB_08032264;
              }
              uVar79 = ((uVar73 - uVar67) - 0x10 >> 4) + 1;
              iVar68 = uVar79 * 0x10;
              if (0xe < (uVar73 - 1) - uVar67) {
                auVar8._4_4_ = iVar69;
                auVar8._0_4_ = iVar69;
                auVar8._8_8_ = 0;
                auVar1 = SIMDExpandImmediate(0,0,0x10);
                local_140 = 0;
                auVar2 = SIMDExpandImmediate(0,0,4);
                auVar117 = SIMDExpandImmediate(0,0,8);
                auVar119 = SIMDExpandImmediate(0,0,0xc);
                puVar92 = video->vram_map_dirty_bit_numbers + uVar67 + 0x87;
                auVar41._8_8_ = 0x300000002;
                auVar41._0_8_ = 0x100000000;
                auVar118 = VectorAdd(auVar8 & auVar8 << 0x40,auVar41,4);
                ppuVar87 = video->vram_map + uVar67 + 0x87;
                puVar59 = video->vram_map_allocation_bitmap + uVar67 + 0x97;
                puVar58 = video->vram_map_allocation_bitmap + uVar67 + 0x97;
                do {
                  auVar100 = *(undefined (*) [16])(puVar58 + -0x10);
                  auVar113 = VectorAdd(auVar118,auVar2,4);
                  auVar120 = VectorAdd(auVar118,auVar117,4);
                  auVar107 = *(undefined (*) [16])(puVar58 + -8);
                  *(undefined8 *)ppuVar87 = 0;
                  *(undefined8 *)(ppuVar87 + 2) = 0;
                  auVar106._0_8_ = VectorCopyNarrow(auVar118,4);
                  auVar106._8_8_ = VectorCopyNarrow(auVar113,4);
                  auVar113 = VectorAdd(auVar118,auVar119,4);
                  auVar118 = VectorAdd(auVar118,auVar1,4);
                  local_140 = local_140 + 1;
                  uVar108 = VectorCopyNarrow(auVar120,4);
                  uVar109 = VectorCopyNarrow(auVar113,4);
                  auVar120 = SIMDExpandImmediate(0,0xb,1);
                  uVar110 = VectorCopyNarrow(auVar106,2);
                  auVar31._8_8_ = uVar109;
                  auVar31._0_8_ = uVar108;
                  uVar108 = VectorCopyNarrow(auVar31,2);
                  auVar113 = SIMDExpandImmediate(0,0xb,1);
                  *(undefined8 *)(ppuVar87 + 4) = 0;
                  *(undefined8 *)(ppuVar87 + 6) = 0;
                  *(undefined8 *)(ppuVar87 + 8) = 0;
                  *(undefined8 *)(ppuVar87 + 10) = 0;
                  *(undefined8 *)(ppuVar87 + 0xc) = 0;
                  *(undefined8 *)(ppuVar87 + 0xe) = 0;
                  *(longlong *)(puVar59 + -0x10) = SUB168(auVar100 | auVar120,0);
                  *(longlong *)(puVar59 + -0xc) = SUB168(auVar100 | auVar120,8);
                  *(longlong *)(puVar59 + -8) = SUB168(auVar107 | auVar113,0);
                  *(longlong *)(puVar59 + -4) = SUB168(auVar107 | auVar113,8);
                  *(undefined8 *)puVar92 = uVar110;
                  *(undefined8 *)(puVar92 + 8) = uVar108;
                  puVar92 = puVar92 + 0x10;
                  ppuVar87 = ppuVar87 + 0x10;
                  puVar59 = puVar59 + 0x10;
                  puVar58 = puVar58 + 0x10;
                } while (local_140 < uVar79);
                iVar74 = iVar74 + iVar68;
                uVar64 = uVar64 + uVar79 * -0x10;
                iVar69 = iVar69 + iVar68;
                if (uVar73 - uVar67 == iVar68) goto LAB_08032264;
              }
              uVar47 = (u8)iVar69;
              uVar23 = video->vram_map_allocation_bitmap[iVar74];
              video->vram_map[iVar74] = (u8 *)puVar86;
              video->vram_map_allocation_bitmap[iVar74] = uVar23 | 0x100;
              video->vram_map_dirty_bit_numbers[iVar74] = uVar47;
              if (uVar64 != 1) {
                video->vram_map[iVar74 + 1] = (u8 *)puVar86;
                video->vram_map_allocation_bitmap[iVar74 + 1] =
                     video->vram_map_allocation_bitmap[iVar74 + 1] | 0x100;
                video->vram_map_dirty_bit_numbers[iVar74 + 1] = uVar47 + '\x01';
                if (uVar64 != 2) {
                  video->vram_map[iVar74 + 2] = (u8 *)puVar86;
                  video->vram_map_allocation_bitmap[iVar74 + 2] =
                       video->vram_map_allocation_bitmap[iVar74 + 2] | 0x100;
                  video->vram_map_dirty_bit_numbers[iVar74 + 2] = uVar47 + '\x02';
                  if (uVar64 != 3) {
                    video->vram_map[iVar74 + 3] = (u8 *)puVar86;
                    video->vram_map_allocation_bitmap[iVar74 + 3] =
                         video->vram_map_allocation_bitmap[iVar74 + 3] | 0x100;
                    video->vram_map_dirty_bit_numbers[iVar74 + 3] = uVar47 + '\x03';
                    if (uVar64 != 4) {
                      video->vram_map[iVar74 + 4] = (u8 *)puVar86;
                      video->vram_map_allocation_bitmap[iVar74 + 4] =
                           video->vram_map_allocation_bitmap[iVar74 + 4] | 0x100;
                      video->vram_map_dirty_bit_numbers[iVar74 + 4] = uVar47 + '\x04';
                      if (uVar64 != 5) {
                        video->vram_map[iVar74 + 5] = (u8 *)puVar86;
                        video->vram_map_allocation_bitmap[iVar74 + 5] =
                             video->vram_map_allocation_bitmap[iVar74 + 5] | 0x100;
                        video->vram_map_dirty_bit_numbers[iVar74 + 5] = uVar47 + '\x05';
                        if (uVar64 != 6) {
                          video->vram_map[iVar74 + 6] = (u8 *)puVar86;
                          video->vram_map_allocation_bitmap[iVar74 + 6] =
                               video->vram_map_allocation_bitmap[iVar74 + 6] | 0x100;
                          video->vram_map_dirty_bit_numbers[iVar74 + 6] = uVar47 + '\x06';
                          if (uVar64 != 7) {
                            video->vram_map[iVar74 + 7] = (u8 *)puVar86;
                            video->vram_map_allocation_bitmap[iVar74 + 7] =
                                 video->vram_map_allocation_bitmap[iVar74 + 7] | 0x100;
                            video->vram_map_dirty_bit_numbers[iVar74 + 7] = uVar47 + '\a';
                            if (uVar64 != 8) {
                              video->vram_map[iVar74 + 8] = (u8 *)puVar86;
                              video->vram_map_allocation_bitmap[iVar74 + 8] =
                                   video->vram_map_allocation_bitmap[iVar74 + 8] | 0x100;
                              video->vram_map_dirty_bit_numbers[iVar74 + 8] = uVar47 + '\b';
                              if (uVar64 != 9) {
                                video->vram_map[iVar74 + 9] = (u8 *)puVar86;
                                video->vram_map_allocation_bitmap[iVar74 + 9] =
                                     video->vram_map_allocation_bitmap[iVar74 + 9] | 0x100;
                                video->vram_map_dirty_bit_numbers[iVar74 + 9] = uVar47 + '\t';
                                if (uVar64 != 10) {
                                  video->vram_map[iVar74 + 10] = (u8 *)puVar86;
                                  video->vram_map_allocation_bitmap[iVar74 + 10] =
                                       video->vram_map_allocation_bitmap[iVar74 + 10] | 0x100;
                                  video->vram_map_dirty_bit_numbers[iVar74 + 10] = uVar47 + '\n';
                                  if (uVar64 != 0xb) {
                                    video->vram_map[iVar74 + 0xb] = (u8 *)puVar86;
                                    video->vram_map_allocation_bitmap[iVar74 + 0xb] =
                                         video->vram_map_allocation_bitmap[iVar74 + 0xb] | 0x100;
                                    video->vram_map_dirty_bit_numbers[iVar74 + 0xb] = uVar47 + '\v';
                                    if (uVar64 != 0xc) {
                                      video->vram_map[iVar74 + 0xc] = (u8 *)puVar86;
                                      video->vram_map_allocation_bitmap[iVar74 + 0xc] =
                                           video->vram_map_allocation_bitmap[iVar74 + 0xc] | 0x100;
                                      video->vram_map_dirty_bit_numbers[iVar74 + 0xc] =
                                           uVar47 + '\f';
                                      if (uVar64 != 0xd) {
                                        video->vram_map[iVar74 + 0xd] = (u8 *)puVar86;
                                        video->vram_map_allocation_bitmap[iVar74 + 0xd] =
                                             video->vram_map_allocation_bitmap[iVar74 + 0xd] | 0x100
                                        ;
                                        video->vram_map_dirty_bit_numbers[iVar74 + 0xd] =
                                             uVar47 + '\r';
                                        if (uVar64 != 0xe) {
                                          video->vram_map[iVar74 + 0xe] = (u8 *)puVar86;
                                          video->vram_map_allocation_bitmap[iVar74 + 0xe] =
                                               video->vram_map_allocation_bitmap[iVar74 + 0xe] |
                                               0x100;
                                          video->vram_map_dirty_bit_numbers[iVar74 + 0xe] =
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
LAB_08032264:
            ppuVar87 = (u8 **)0x82;
            iVar74 = 9;
          }
          break;
        case 2:
          switch(local_178) {
          case 0:
          case 1:
            ppuVar87 = (u8 **)(((uVar67 & 1) + 0x20) * 8);
            goto LAB_0803410c;
          case 2:
          case 3:
            uVar67 = uVar67 & 1;
            ppuVar87 = (u8 **)(uVar67 * 8);
            unmap_memory_page_region
                      (pmVar54->memory_interface_arm7,(int)(ppuVar87 + 0x600) * 0x4000,uVar73 << 10)
            ;
            uVar73 = uVar73 >> 7;
            iVar74 = uVar67 * 0x10 + 0x1da4;
            iVar69 = uVar73 + 0x44c + (int)ppuVar87;
            uVar23 = (ushort)(1 << (local_178 & 0xff));
            if (uVar73 < 0xc || iVar74 + iVar69 * -4 < 0 != SBORROW4(iVar74,iVar69 * 4)) {
              ppuVar95 = video->arm7_vram_slots + uVar67 * 8;
              puVar59 = video->arm7_vram_allocation_bitmap + uVar67 * 8;
              do {
                uVar22 = *puVar59;
                ppuVar55 = ppuVar95 + 1;
                *ppuVar95 = (u8 *)puVar86;
                puVar86 = puVar86 + 0x10000;
                *puVar59 = uVar23 | uVar22;
                ppuVar95 = ppuVar55;
                puVar59 = puVar59 + 1;
              } while (ppuVar55 != video->arm7_vram_slots + (int)ppuVar87 + uVar73);
            }
            else {
              uVar64 = -((uint)((int)video->arm7_vram_allocation_bitmap * 0x20000000) >> 0x1e) & 7;
              if (uVar73 <= uVar64) {
                uVar64 = uVar73;
              }
              ppuVar95 = ppuVar87;
              puVar59 = puVar86;
              uVar79 = uVar73;
              if (uVar64 != 0) {
                uVar22 = video->arm7_vram_allocation_bitmap[uVar67 * 8];
                uVar79 = uVar73 - 1;
                video->arm7_vram_slots[uVar67 * 8] = (u8 *)puVar86;
                puVar59 = puVar86 + 0x10000;
                video->arm7_vram_allocation_bitmap[uVar67 * 8] = uVar23 | uVar22;
                ppuVar95 = (u8 **)((int)ppuVar87 + 1);
                if (uVar64 != 1) {
                  video->arm7_vram_slots[uVar67 * 8 + 1] = (u8 *)puVar59;
                  uVar79 = uVar73 - 2;
                  puVar59 = puVar86 + 0x20000;
                  video->arm7_vram_allocation_bitmap[uVar67 * 8 + 1] =
                       uVar23 | video->arm7_vram_allocation_bitmap[uVar67 * 8 + 1];
                  ppuVar95 = (u8 **)((int)ppuVar87 + 2);
                  if (uVar64 != 2) {
                    video->vram_map_dirty_bitmap_fine[uVar67 * 8] = (u32)puVar59;
                    uVar79 = uVar73 - 3;
                    puVar59 = puVar86 + 0x30000;
                    *(ushort *)(video->palette_ram + uVar67 * 4) =
                         uVar23 | *(ushort *)(video->palette_ram + uVar67 * 4);
                    ppuVar95 = (u8 **)((int)ppuVar87 + 3);
                    if (uVar64 != 3) {
                      video->vram_map_dirty_bitmap_fine[uVar67 * 8 + 1] = (u32)puVar59;
                      uVar79 = uVar73 - 4;
                      puVar59 = puVar86 + 0x40000;
                      ppuVar55 = ppuVar87 + 1;
                      *(ushort *)((int)video->palette_ram + uVar67 * 0x10 + 2) =
                           uVar23 | *(ushort *)((int)video->palette_ram + uVar67 * 0x10 + 2);
                      ppuVar95 = ppuVar55;
                      if (uVar64 != 4) {
                        video->arm7_vram_slots[(int)ppuVar55] = (u8 *)puVar59;
                        uVar79 = uVar73 - 5;
                        puVar59 = puVar86 + 0x50000;
                        ppuVar95 = (u8 **)((int)ppuVar87 + 5);
                        video->arm7_vram_allocation_bitmap[(int)ppuVar55] =
                             uVar23 | video->arm7_vram_allocation_bitmap[(int)ppuVar55];
                        if (uVar64 != 5) {
                          video->vram_map_dirty_bitmap_fine[uVar67 * 8 + 3] = (u32)puVar59;
                          uVar79 = uVar73 - 6;
                          puVar59 = puVar86 + 0x60000;
                          ppuVar95 = (u8 **)((int)ppuVar87 + 6);
                          *(ushort *)((int)video->palette_ram + uVar67 * 0x10 + 6) =
                               uVar23 | *(ushort *)((int)video->palette_ram + uVar67 * 0x10 + 6);
                          if (uVar64 == 7) {
                            video->vram_map_dirty_bitmap_fine[uVar67 * 8 + 4] = (u32)puVar59;
                            *(ushort *)(video->oam_ram + uVar67 * 4) =
                                 uVar23 | *(ushort *)(video->oam_ram + uVar67 * 4);
                            ppuVar95 = (u8 **)((int)ppuVar87 + 7);
                            puVar59 = puVar86 + 0x70000;
                            uVar79 = uVar73 - 7;
                          }
                        }
                      }
                    }
                  }
                }
              }
              uVar90 = ((uVar73 - uVar64) - 8 >> 3) + 1;
              if (6 < (uVar73 - 1) - uVar64) {
                auVar9._4_4_ = puVar59;
                auVar9._0_4_ = puVar59;
                auVar9._8_8_ = 0;
                auVar10._4_4_ = CONCAT22(uVar23,uVar23);
                auVar10._0_4_ = CONCAT22(uVar23,uVar23);
                auVar10._8_8_ = 0;
                ppuVar80 = (u16 **)(video->arm7_vram_allocation_bitmap + uVar64 + uVar67 * 8);
                auVar1 = SIMDExpandImmediate(0,4,0x10);
                auVar2 = SIMDExpandImmediate(0,4,8);
                uVar56 = 0;
                auVar45._8_8_ = 0x6000000040000;
                auVar45._0_8_ = 0x2000000000000;
                auVar117 = VectorAdd(auVar9 & auVar9 << 0x40,auVar45,4);
                ppuVar55 = video->arm7_vram_slots + uVar64 + uVar67 * 8;
                ppuVar57 = ppuVar80;
                do {
                  auVar119 = *(undefined (*) [16])ppuVar80;
                  auVar118 = VectorAdd(auVar117,auVar2,4);
                  uVar56 = uVar56 + 1;
                  *(longlong *)ppuVar55 = auVar117._0_8_;
                  *(longlong *)(ppuVar55 + 2) = auVar117._8_8_;
                  ppuVar80 = ppuVar80 + 4;
                  auVar117 = VectorAdd(auVar117,auVar1,4);
                  *(longlong *)(ppuVar55 + 4) = auVar118._0_8_;
                  *(longlong *)(ppuVar55 + 6) = auVar118._8_8_;
                  auVar119 = auVar119 | auVar10 & auVar10 << 0x40;
                  *(longlong *)ppuVar57 = auVar119._0_8_;
                  *(longlong *)(ppuVar57 + 2) = auVar119._8_8_;
                  ppuVar55 = ppuVar55 + 8;
                  ppuVar57 = ppuVar57 + 4;
                } while (uVar56 < uVar90);
                puVar59 = puVar59 + uVar90 * 0x80000;
                ppuVar95 = ppuVar95 + uVar90 * 2;
                uVar79 = uVar79 + uVar90 * -8;
                if (uVar73 - uVar64 == uVar90 * 8) goto LAB_08032998;
              }
              video->arm7_vram_slots[(int)ppuVar95] = (u8 *)puVar59;
              video->arm7_vram_allocation_bitmap[(int)ppuVar95] =
                   uVar23 | video->arm7_vram_allocation_bitmap[(int)ppuVar95];
              if (uVar79 != 1) {
                video->arm7_vram_slots[(int)ppuVar95 + 1] = (u8 *)(puVar59 + 0x10000);
                video->arm7_vram_allocation_bitmap[(int)ppuVar95 + 1] =
                     uVar23 | video->arm7_vram_allocation_bitmap[(int)ppuVar95 + 1];
                if (uVar79 != 2) {
                  video->vram_map_dirty_bitmap_fine[(int)ppuVar95] = (u32)(puVar59 + 0x20000);
                  *(ushort *)((int)video->palette_ram + (int)ppuVar95 * 2) =
                       uVar23 | *(ushort *)((int)video->palette_ram + (int)ppuVar95 * 2);
                  if (uVar79 != 3) {
                    video->vram_map_dirty_bitmap_fine[(int)ppuVar95 + 1] = (u32)(puVar59 + 0x30000);
                    ppuVar55 = ppuVar95 + 1;
                    *(ushort *)((int)video->palette_ram + (int)ppuVar95 * 2 + 2) =
                         uVar23 | *(ushort *)((int)video->palette_ram + (int)ppuVar95 * 2 + 2);
                    if (uVar79 != 4) {
                      video->arm7_vram_slots[(int)ppuVar55] = (u8 *)(puVar59 + 0x40000);
                      video->arm7_vram_allocation_bitmap[(int)ppuVar55] =
                           uVar23 | video->arm7_vram_allocation_bitmap[(int)ppuVar55];
                      if (uVar79 != 5) {
                        video->vram_map_dirty_bitmap_fine[(int)ppuVar95 + 3] =
                             (u32)(puVar59 + 0x50000);
                        *(ushort *)((int)video->palette_ram + (int)ppuVar95 * 2 + 6) =
                             uVar23 | *(ushort *)((int)video->palette_ram + (int)ppuVar95 * 2 + 6);
                        if (uVar79 != 6) {
                          video->vram_map_dirty_bitmap_fine[(int)(ppuVar95 + 1)] =
                               (u32)(puVar59 + 0x60000);
                          *(ushort *)((int)video->oam_ram + (int)ppuVar95 * 2) =
                               uVar23 | *(ushort *)((int)video->oam_ram + (int)ppuVar95 * 2);
                        }
                      }
                    }
                  }
                }
              }
            }
LAB_08032998:
            iVar74 = 7;
            goto LAB_0802f95c;
          case 4:
            uVar64 = 0x100;
            ppuVar87 = (u8 **)0x100;
            uVar67 = 8;
            local_140 = -0x400000;
            uVar63 = 0x6400000;
            local_d8 = (undefined8 *)0x80;
            break;
          case 5:
          case 6:
            ppuVar87 = (u8 **)((uVar67 & 1) + 0x100 + (uVar67 & 2) * 2);
            goto LAB_080331b8;
          case 7:
            ppuVar87 = (u8 **)0x0;
            iVar74 = 1;
            goto LAB_08034644;
          case 8:
switchD_0802fd4c_caseD_3:
            uVar67 = 0xc;
            uVar63 = 0x6600000;
            ppuVar87 = (u8 **)0x180;
            local_140 = -0x600000;
            local_d8 = (undefined8 *)0x100;
            uVar64 = 0x1000;
            break;
          default:
            goto switchD_0802f8fc_caseD_7;
          }
          goto LAB_080329c4;
        case 3:
          switch(local_178) {
          case 0:
          case 1:
          case 2:
          case 3:
            uVar73 = uVar73 >> 7;
            iVar74 = (int)(ppuVar87 + 0x3b2) * 2;
            iVar69 = uVar73 + 0x442 + (int)ppuVar87;
            uVar67 = video->vram_abcd_dirty;
            uVar23 = (ushort)(1 << (local_178 & 0xff));
            if (uVar73 < 0xc || iVar74 + iVar69 * -4 < 0 != SBORROW4(iVar74,iVar69 * 4)) {
              ppuVar95 = video->texture_slots + (int)ppuVar87;
              puVar60 = (ushort *)((int)video->vram_bank_maps + iVar74 + -8);
              do {
                uVar22 = *puVar60;
                ppuVar55 = ppuVar95 + 1;
                *ppuVar95 = (u8 *)puVar86;
                puVar86 = puVar86 + 0x10000;
                *puVar60 = uVar23 | uVar22;
                ppuVar95 = ppuVar55;
                puVar60 = puVar60 + 1;
              } while (ppuVar55 != video->texture_slots + (int)ppuVar87 + uVar73);
            }
            else {
              uVar64 = -((uint)(((int)video->vram_bank_maps + iVar74 + -8) * 0x20000000) >> 0x1e) &
                       7;
              if (uVar73 <= uVar64) {
                uVar64 = uVar73;
              }
              ppuVar95 = ppuVar87;
              uVar79 = uVar73;
              puVar59 = puVar86;
              if (uVar64 != 0) {
                uVar79 = uVar73 - 1;
                video->texture_slots[(int)ppuVar87] = (u8 *)puVar86;
                puVar59 = puVar86 + 0x10000;
                video->texture_allocation_bitmap[(int)ppuVar87] =
                     uVar23 | video->texture_allocation_bitmap[(int)ppuVar87];
                ppuVar95 = (u8 **)((int)ppuVar87 + 1);
                if (uVar64 != 1) {
                  video->texture_slots[(int)ppuVar87 + 1] = (u8 *)puVar59;
                  uVar79 = uVar73 - 2;
                  puVar59 = puVar86 + 0x20000;
                  video->texture_allocation_bitmap[(int)ppuVar87 + 1] =
                       uVar23 | video->texture_allocation_bitmap[(int)ppuVar87 + 1];
                  ppuVar95 = (u8 **)((int)ppuVar87 + 2);
                  if (uVar64 != 2) {
                    video->texture_slots[(int)ppuVar87 + 2] = (u8 *)puVar59;
                    uVar79 = uVar73 - 3;
                    puVar59 = puVar86 + 0x30000;
                    video->texture_allocation_bitmap[(int)ppuVar87 + 2] =
                         uVar23 | video->texture_allocation_bitmap[(int)ppuVar87 + 2];
                    ppuVar95 = (u8 **)((int)ppuVar87 + 3);
                    if (uVar64 != 3) {
                      video->texture_slots[(int)ppuVar87 + 3] = (u8 *)puVar59;
                      uVar79 = uVar73 - 4;
                      puVar59 = puVar86 + 0x40000;
                      ppuVar55 = ppuVar87 + 1;
                      video->texture_allocation_bitmap[(int)ppuVar87 + 3] =
                           uVar23 | video->texture_allocation_bitmap[(int)ppuVar87 + 3];
                      ppuVar95 = ppuVar55;
                      if (uVar64 != 4) {
                        video->texture_slots[(int)ppuVar55] = (u8 *)puVar59;
                        uVar79 = uVar73 - 5;
                        puVar59 = puVar86 + 0x50000;
                        ppuVar95 = (u8 **)((int)ppuVar87 + 5);
                        video->texture_allocation_bitmap[(int)ppuVar55] =
                             uVar23 | video->texture_allocation_bitmap[(int)ppuVar55];
                        if (uVar64 != 5) {
                          video->texture_palette_slots[(int)ppuVar87 + 1] = puVar59;
                          uVar79 = uVar73 - 6;
                          puVar59 = puVar86 + 0x60000;
                          ppuVar95 = (u8 **)((int)ppuVar87 + 6);
                          video->texture_palette_allocation_bitmap[(int)ppuVar87 + 1] =
                               uVar23 | video->texture_palette_allocation_bitmap[(int)ppuVar87 + 1];
                          if (uVar64 == 7) {
                            video->texture_palette_slots[(int)ppuVar87 + 2] = puVar59;
                            video->texture_palette_allocation_bitmap[(int)ppuVar87 + 2] =
                                 uVar23 | video->texture_palette_allocation_bitmap
                                          [(int)ppuVar87 + 2];
                            ppuVar95 = (u8 **)((int)ppuVar87 + 7);
                            uVar79 = uVar73 - 7;
                            puVar59 = puVar86 + 0x70000;
                          }
                        }
                      }
                    }
                  }
                }
              }
              uVar90 = ((uVar73 - uVar64) - 8 >> 3) + 1;
              if (6 < (uVar73 - 1) - uVar64) {
                auVar107._4_4_ = puVar59;
                auVar107._0_4_ = puVar59;
                auVar107._8_8_ = 0;
                auVar111._4_4_ = CONCAT22(uVar23,uVar23);
                auVar111._0_4_ = CONCAT22(uVar23,uVar23);
                auVar111._8_8_ = 0;
                pauVar82 = (undefined (*) [16])
                           ((int)video->vram_bank_maps + ((int)(ppuVar87 + 0x3b2) + uVar64) * 2 + -8
                           );
                auVar1 = SIMDExpandImmediate(0,4,0x10);
                auVar2 = SIMDExpandImmediate(0,4,8);
                uVar56 = 0;
                auVar44._8_8_ = 0x6000000040000;
                auVar44._0_8_ = 0x2000000000000;
                auVar117 = VectorAdd(auVar107 & auVar107 << 0x40,auVar44,4);
                ppuVar57 = (u16 **)(video->texture_slots + uVar64 + (int)ppuVar87);
                pauVar77 = pauVar82;
                do {
                  auVar119 = *pauVar82;
                  auVar118 = VectorAdd(auVar117,auVar2,4);
                  uVar56 = uVar56 + 1;
                  *(longlong *)ppuVar57 = auVar117._0_8_;
                  *(longlong *)(ppuVar57 + 2) = auVar117._8_8_;
                  pauVar82 = pauVar82 + 1;
                  auVar117 = VectorAdd(auVar117,auVar1,4);
                  *(longlong *)(ppuVar57 + 4) = auVar118._0_8_;
                  *(longlong *)(ppuVar57 + 6) = auVar118._8_8_;
                  auVar119 = auVar119 | auVar111 & auVar111 << 0x40;
                  *(longlong *)*pauVar77 = auVar119._0_8_;
                  *(longlong *)(*pauVar77 + 8) = auVar119._8_8_;
                  ppuVar57 = ppuVar57 + 8;
                  pauVar77 = pauVar77 + 1;
                } while (uVar56 < uVar90);
                puVar59 = puVar59 + uVar90 * 0x80000;
                ppuVar95 = ppuVar95 + uVar90 * 2;
                uVar79 = uVar79 + uVar90 * -8;
                if (uVar73 - uVar64 == uVar90 * 8) goto LAB_080325ec;
              }
              video->texture_slots[(int)ppuVar95] = (u8 *)puVar59;
              video->texture_allocation_bitmap[(int)ppuVar95] =
                   uVar23 | video->texture_allocation_bitmap[(int)ppuVar95];
              if (uVar79 != 1) {
                video->texture_slots[(int)ppuVar95 + 1] = (u8 *)(puVar59 + 0x10000);
                video->texture_allocation_bitmap[(int)ppuVar95 + 1] =
                     uVar23 | video->texture_allocation_bitmap[(int)ppuVar95 + 1];
                if (uVar79 != 2) {
                  video->texture_slots[(int)ppuVar95 + 2] = (u8 *)(puVar59 + 0x20000);
                  video->texture_allocation_bitmap[(int)ppuVar95 + 2] =
                       uVar23 | video->texture_allocation_bitmap[(int)ppuVar95 + 2];
                  if (uVar79 != 3) {
                    video->texture_slots[(int)ppuVar95 + 3] = (u8 *)(puVar59 + 0x30000);
                    ppuVar55 = ppuVar95 + 1;
                    video->texture_allocation_bitmap[(int)ppuVar95 + 3] =
                         uVar23 | video->texture_allocation_bitmap[(int)ppuVar95 + 3];
                    if (uVar79 != 4) {
                      video->texture_slots[(int)ppuVar55] = (u8 *)(puVar59 + 0x40000);
                      video->texture_allocation_bitmap[(int)ppuVar55] =
                           uVar23 | video->texture_allocation_bitmap[(int)ppuVar55];
                      if (uVar79 != 5) {
                        video->texture_palette_slots[(int)ppuVar95 + 1] = puVar59 + 0x50000;
                        video->texture_palette_allocation_bitmap[(int)ppuVar95 + 1] =
                             uVar23 | video->texture_palette_allocation_bitmap[(int)ppuVar95 + 1];
                        if (uVar79 != 6) {
                          video->texture_palette_slots[(int)ppuVar95 + 2] = puVar59 + 0x60000;
                          video->texture_palette_allocation_bitmap[(int)ppuVar95 + 2] =
                               uVar23 | video->texture_palette_allocation_bitmap[(int)ppuVar95 + 2];
                        }
                      }
                    }
                  }
                }
              }
            }
LAB_080325ec:
            uVar73 = 0xff << ((uint)vram_map_9 & 0xff);
            iVar74 = 4;
            (video->texture_cache).texture_slots_dirty =
                 (video->texture_cache).texture_slots_dirty |
                 (uVar67 >> ((uint)vram_map_9 & 0xff) & 0xff) << ((int)ppuVar87 << 3);
            (video->texture_cache).texture_slots_allocated =
                 (video->texture_cache).texture_slots_allocated | uVar73;
            video->vram_abcd_dirty = uVar67 & ~uVar73;
            break;
          case 4:
            ppuVar87 = (u8 **)0x0;
            goto LAB_080341b0;
          case 5:
          case 6:
            ppuVar87 = (u8 **)((uVar67 & 1) + (uVar67 & 2) * 2);
LAB_080341b0:
            uVar73 = uVar73 >> 4;
            iVar74 = (int)(ppuVar87 + 0x3b3) * 2;
            iVar69 = uVar73 + 0x446 + (int)ppuVar87;
            uVar67 = 1 << (local_178 & 0xff);
            uVar23 = (ushort)uVar67;
            if (uVar73 < 0xc || iVar74 + iVar69 * -4 < 0 != SBORROW4(iVar74,iVar69 * 4)) {
              ppuVar57 = video->texture_palette_slots + (int)ppuVar87;
              puVar60 = (ushort *)((int)video->vram_bank_maps + iVar74 + -8);
              do {
                uVar22 = *puVar60;
                ppuVar80 = ppuVar57 + 1;
                *ppuVar57 = puVar86;
                puVar86 = puVar86 + 0x2000;
                *puVar60 = uVar23 | uVar22;
                ppuVar57 = ppuVar80;
                puVar60 = puVar60 + 1;
              } while (ppuVar80 != video->texture_palette_slots + uVar73 + (int)ppuVar87);
            }
            else {
              uVar64 = -((uint)(((int)video->vram_bank_maps + iVar74 + -8) * 0x20000000) >> 0x1e) &
                       7;
              if (uVar73 <= uVar64) {
                uVar64 = uVar73;
              }
              ppuVar95 = ppuVar87;
              uVar79 = uVar73;
              puVar59 = puVar86;
              if (uVar64 != 0) {
                uVar79 = uVar73 - 1;
                video->texture_palette_slots[(int)ppuVar87] = puVar86;
                puVar59 = puVar86 + 0x2000;
                video->texture_palette_allocation_bitmap[(int)ppuVar87] =
                     uVar23 | video->texture_palette_allocation_bitmap[(int)ppuVar87];
                ppuVar95 = (u8 **)((int)ppuVar87 + 1);
                if (uVar64 != 1) {
                  video->texture_palette_slots[(int)ppuVar87 + 1] = puVar59;
                  uVar79 = uVar73 - 2;
                  puVar59 = puVar86 + 0x4000;
                  video->texture_palette_allocation_bitmap[(int)ppuVar87 + 1] =
                       uVar23 | video->texture_palette_allocation_bitmap[(int)ppuVar87 + 1];
                  ppuVar95 = (u8 **)((int)ppuVar87 + 2);
                  if (uVar64 != 2) {
                    video->texture_palette_slots[(int)ppuVar87 + 2] = puVar59;
                    uVar79 = uVar73 - 3;
                    puVar59 = puVar86 + 0x6000;
                    video->texture_palette_allocation_bitmap[(int)ppuVar87 + 2] =
                         uVar23 | video->texture_palette_allocation_bitmap[(int)ppuVar87 + 2];
                    ppuVar95 = (u8 **)((int)ppuVar87 + 3);
                    if (uVar64 != 3) {
                      video->texture_palette_slots[(int)ppuVar87 + 3] = puVar59;
                      uVar79 = uVar73 - 4;
                      puVar59 = puVar86 + 0x8000;
                      ppuVar55 = ppuVar87 + 1;
                      video->texture_palette_allocation_bitmap[(int)ppuVar87 + 3] =
                           uVar23 | video->texture_palette_allocation_bitmap[(int)ppuVar87 + 3];
                      ppuVar95 = ppuVar55;
                      if (uVar64 != 4) {
                        video->texture_palette_slots[(int)ppuVar55] = puVar59;
                        uVar79 = uVar73 - 5;
                        puVar59 = puVar86 + 0xa000;
                        ppuVar95 = (u8 **)((int)ppuVar87 + 5);
                        video->texture_palette_allocation_bitmap[(int)ppuVar55] =
                             uVar23 | video->texture_palette_allocation_bitmap[(int)ppuVar55];
                        if (uVar64 != 5) {
                          video->texture_palette_slots[(int)ppuVar87 + 5] = puVar59;
                          uVar79 = uVar73 - 6;
                          puVar59 = puVar86 + 0xc000;
                          ppuVar95 = (u8 **)((int)ppuVar87 + 6);
                          video->texture_palette_allocation_bitmap[(int)ppuVar87 + 5] =
                               uVar23 | video->texture_palette_allocation_bitmap[(int)ppuVar87 + 5];
                          if (uVar64 == 7) {
                            video->arm7_vram_slots[(int)ppuVar87] = (u8 *)puVar59;
                            video->arm7_vram_allocation_bitmap[(int)ppuVar87] =
                                 uVar23 | video->arm7_vram_allocation_bitmap[(int)ppuVar87];
                            ppuVar95 = (u8 **)((int)ppuVar87 + 7);
                            uVar79 = uVar73 - 7;
                            puVar59 = puVar86 + 0xe000;
                          }
                        }
                      }
                    }
                  }
                }
              }
              uVar90 = ((uVar73 - uVar64) - 8 >> 3) + 1;
              if (6 < (uVar73 - 1) - uVar64) {
                auVar120._4_4_ = puVar59;
                auVar120._0_4_ = puVar59;
                auVar120._8_8_ = 0;
                auVar113._4_4_ = CONCAT22(uVar23,uVar23);
                auVar113._0_4_ = CONCAT22(uVar23,uVar23);
                auVar113._8_8_ = 0;
                pauVar82 = (undefined (*) [16])
                           ((int)video->vram_bank_maps + ((int)(ppuVar87 + 0x3b3) + uVar64) * 2 + -8
                           );
                auVar1 = SIMDExpandImmediate(0,4,2);
                auVar2 = SIMDExpandImmediate(0,4,1);
                uVar56 = 0;
                auVar100._8_8_ = 0xc00000008000;
                auVar100._0_8_ = 0x400000000000;
                auVar117 = VectorAdd(auVar120 & auVar120 << 0x40,auVar100,4);
                ppuVar57 = video->texture_palette_slots + uVar64 + (int)ppuVar87;
                pauVar77 = pauVar82;
                do {
                  auVar119 = *pauVar82;
                  auVar118 = VectorAdd(auVar117,auVar2,4);
                  uVar56 = uVar56 + 1;
                  *(longlong *)ppuVar57 = auVar117._0_8_;
                  *(longlong *)(ppuVar57 + 2) = auVar117._8_8_;
                  pauVar82 = pauVar82 + 1;
                  auVar117 = VectorAdd(auVar117,auVar1,4);
                  *(longlong *)(ppuVar57 + 4) = auVar118._0_8_;
                  *(longlong *)(ppuVar57 + 6) = auVar118._8_8_;
                  auVar119 = auVar119 | auVar113 & auVar113 << 0x40;
                  *(longlong *)*pauVar77 = auVar119._0_8_;
                  *(longlong *)(*pauVar77 + 8) = auVar119._8_8_;
                  ppuVar57 = ppuVar57 + 8;
                  pauVar77 = pauVar77 + 1;
                } while (uVar56 < uVar90);
                puVar59 = puVar59 + uVar90 * 0x10000;
                ppuVar95 = ppuVar95 + uVar90 * 2;
                uVar79 = uVar79 + uVar90 * -8;
                if (uVar73 - uVar64 == uVar90 * 8) goto LAB_08034508;
              }
              video->texture_palette_slots[(int)ppuVar95] = puVar59;
              video->texture_palette_allocation_bitmap[(int)ppuVar95] =
                   uVar23 | video->texture_palette_allocation_bitmap[(int)ppuVar95];
              if (uVar79 != 1) {
                video->texture_palette_slots[(int)ppuVar95 + 1] = puVar59 + 0x2000;
                video->texture_palette_allocation_bitmap[(int)ppuVar95 + 1] =
                     uVar23 | video->texture_palette_allocation_bitmap[(int)ppuVar95 + 1];
                if (uVar79 != 2) {
                  video->texture_palette_slots[(int)ppuVar95 + 2] = puVar59 + 0x4000;
                  video->texture_palette_allocation_bitmap[(int)ppuVar95 + 2] =
                       uVar23 | video->texture_palette_allocation_bitmap[(int)ppuVar95 + 2];
                  if (uVar79 != 3) {
                    video->texture_palette_slots[(int)ppuVar95 + 3] = puVar59 + 0x6000;
                    ppuVar55 = ppuVar95 + 1;
                    video->texture_palette_allocation_bitmap[(int)ppuVar95 + 3] =
                         uVar23 | video->texture_palette_allocation_bitmap[(int)ppuVar95 + 3];
                    if (uVar79 != 4) {
                      video->texture_palette_slots[(int)ppuVar55] = puVar59 + 0x8000;
                      video->texture_palette_allocation_bitmap[(int)ppuVar55] =
                           uVar23 | video->texture_palette_allocation_bitmap[(int)ppuVar55];
                      if (uVar79 != 5) {
                        video->texture_palette_slots[(int)ppuVar95 + 5] = puVar59 + 0xa000;
                        video->texture_palette_allocation_bitmap[(int)ppuVar95 + 5] =
                             uVar23 | video->texture_palette_allocation_bitmap[(int)ppuVar95 + 5];
                        if (uVar79 != 6) {
                          video->arm7_vram_slots[(int)ppuVar95] = (u8 *)(puVar59 + 0xc000);
                          video->arm7_vram_allocation_bitmap[(int)ppuVar95] =
                               uVar23 | video->arm7_vram_allocation_bitmap[(int)ppuVar95];
                        }
                      }
                    }
                  }
                }
              }
            }
LAB_08034508:
            if (local_178 == 4) {
              uVar73 = video->vram_efg_dirty;
              iVar74 = 5;
              (video->texture_cache).texture_palette_slots_dirty =
                   (video->texture_cache).texture_palette_slots_dirty | uVar73 & 0xf;
              video->vram_efg_dirty = uVar73 & 0xffffff00;
              (video->texture_cache).texture_palette_slots_allocated = 0xf;
            }
            else {
              uVar64 = video->vram_efg_dirty;
              uVar73 = (video->texture_cache).texture_palette_slots_allocated;
              iVar74 = 5;
              (video->texture_cache).texture_palette_slots_dirty =
                   (video->texture_cache).texture_palette_slots_dirty |
                   (uVar64 >> ((uint)(vram_map_9 + -8) & 0xff) & 1) << ((int)ppuVar87 << 3);
              video->vram_efg_dirty = uVar64 & ~(0xff << ((uint)(vram_map_9 + -8) & 0xff));
              (video->texture_cache).texture_palette_slots_allocated = uVar73 | uVar67;
            }
            break;
          case 7:
switchD_0802fd4c_caseD_0:
            iVar74 = 0xc;
            goto LAB_0802f958;
          case 8:
            local_168 = 1;
            iVar74 = 3;
LAB_0802fa0c:
            local_154 = uVar73 >> 1;
            uVar73 = uVar73 >> 4;
            iVar69 = (uVar73 + local_168 + 0x440) * 4;
            iVar68 = iVar69 + (local_168 + 0xec6) * -2;
            puVar59 = video->extended_palette_obj_allocation_bitmap + local_168;
            uVar23 = (ushort)(1 << (local_178 & 0xff));
            if ((iVar68 == 0 || iVar68 < 0 != SBORROW4(iVar69,local_168 * 2 + 0x1d8c)) &&
                0xb < uVar73) {
              uVar67 = -((uint)((int)(video->extended_palette_obj_allocation_bitmap + local_168) *
                               0x20000000) >> 0x1e) & 7;
              if (uVar73 <= uVar67) {
                uVar67 = uVar73;
              }
              uVar64 = uVar73;
              uVar79 = uVar67;
              puVar58 = puVar86;
              if (uVar67 != 0) {
                uVar22 = video->extended_palette_obj_allocation_bitmap[local_168];
                video->extended_palette_obj_slots[local_168] = puVar86;
                puVar58 = puVar86 + 0x1000;
                uVar64 = uVar73 - 1;
                video->extended_palette_obj_allocation_bitmap[local_168] = uVar23 | uVar22;
                if (uVar67 != 1) {
                  uVar22 = video->extended_palette_obj_allocation_bitmap[local_168 + 1];
                  video->extended_palette_obj_slots[local_168 + 1] = puVar58;
                  uVar64 = uVar73 - 2;
                  puVar58 = puVar86 + 0x2000;
                  video->extended_palette_obj_allocation_bitmap[local_168 + 1] = uVar23 | uVar22;
                  if (uVar67 != 2) {
                    uVar22 = video->texture_allocation_bitmap[local_168];
                    video->texture_slots[local_168] = (u8 *)puVar58;
                    uVar64 = uVar73 - 3;
                    puVar58 = puVar86 + 0x3000;
                    video->texture_allocation_bitmap[local_168] = uVar23 | uVar22;
                    if (uVar67 != 3) {
                      uVar22 = video->texture_allocation_bitmap[local_168 + 1];
                      video->texture_slots[local_168 + 1] = (u8 *)puVar58;
                      uVar64 = uVar73 - 4;
                      puVar58 = puVar86 + 0x4000;
                      video->texture_allocation_bitmap[local_168 + 1] = uVar23 | uVar22;
                      if (uVar67 != 4) {
                        uVar22 = video->texture_allocation_bitmap[local_168 + 2];
                        video->texture_slots[local_168 + 2] = (u8 *)puVar58;
                        uVar64 = uVar73 - 5;
                        puVar58 = puVar86 + 0x5000;
                        video->texture_allocation_bitmap[local_168 + 2] = uVar23 | uVar22;
                        if (uVar67 != 5) {
                          uVar22 = video->texture_allocation_bitmap[local_168 + 3];
                          video->texture_slots[local_168 + 3] = (u8 *)puVar58;
                          video->texture_allocation_bitmap[local_168 + 3] = uVar23 | uVar22;
                          if (uVar67 == 7) {
                            uVar22 = video->texture_palette_allocation_bitmap[local_168];
                            video->texture_palette_slots[local_168] = puVar86 + 0x6000;
                            video->texture_palette_allocation_bitmap[local_168] = uVar23 | uVar22;
                            uVar64 = uVar73 - 7;
                            puVar58 = puVar86 + 0x7000;
                          }
                          else {
                            uVar64 = uVar73 - 6;
                            uVar79 = 6;
                            puVar58 = puVar86 + 0x6000;
                          }
                        }
                      }
                    }
                  }
                }
              }
              uVar90 = ((uVar73 - uVar67) - 8 >> 3) + 1;
              if (6 < (uVar73 - 1) - uVar67) {
                auVar117._4_4_ = puVar58;
                auVar117._0_4_ = puVar58;
                auVar117._8_8_ = 0;
                auVar119._4_4_ = CONCAT22(uVar23,uVar23);
                auVar119._0_4_ = CONCAT22(uVar23,uVar23);
                auVar119._8_8_ = 0;
                puVar83 = video->extended_palette_obj_allocation_bitmap + uVar67 + local_168;
                auVar1 = SIMDExpandImmediate(0,4,1);
                auVar2 = SIMDExpandImmediate(0,2,0x80);
                uVar67 = 0;
                auVar118._8_8_ = 0x600000004000;
                auVar118._0_8_ = 0x200000000000;
                auVar117 = VectorAdd(auVar117 & auVar117 << 0x40,auVar118,4);
                ppuVar57 = video->extended_palette_obj_slots + uVar67 + local_168;
                puVar86 = puVar83;
                do {
                  auVar118 = *(undefined (*) [16])puVar83;
                  auVar120 = VectorAdd(auVar117,auVar2,4);
                  uVar67 = uVar67 + 1;
                  *(longlong *)ppuVar57 = auVar117._0_8_;
                  *(longlong *)(ppuVar57 + 2) = auVar117._8_8_;
                  puVar83 = puVar83 + 8;
                  auVar117 = VectorAdd(auVar117,auVar1,4);
                  *(longlong *)(ppuVar57 + 4) = auVar120._0_8_;
                  *(longlong *)(ppuVar57 + 6) = auVar120._8_8_;
                  auVar118 = auVar118 | auVar119 & auVar119 << 0x40;
                  *(longlong *)puVar86 = auVar118._0_8_;
                  *(longlong *)(puVar86 + 4) = auVar118._8_8_;
                  ppuVar57 = ppuVar57 + 8;
                  puVar86 = puVar86 + 8;
                } while (uVar67 < uVar90);
                puVar58 = puVar58 + uVar90 * 0x8000;
                uVar79 = uVar79 + uVar90 * 8;
                uVar64 = uVar64 + uVar90 * -8;
                if (uVar73 - uVar67 == uVar90 * 8) goto LAB_0802fd20;
              }
              video->extended_palette_obj_slots[local_168 + uVar79] = puVar58;
              puVar59[uVar79] = uVar23 | puVar59[uVar79];
              if (uVar64 != 1) {
                video->extended_palette_obj_slots[local_168 + uVar79 + 1] = puVar58 + 0x1000;
                puVar59[uVar79 + 1] = uVar23 | puVar59[uVar79 + 1];
                if (uVar64 != 2) {
                  video->texture_slots[local_168 + uVar79] = (u8 *)(puVar58 + 0x2000);
                  puVar59[uVar79 + 2] = uVar23 | puVar59[uVar79 + 2];
                  if (uVar64 != 3) {
                    video->texture_slots[local_168 + uVar79 + 1] = (u8 *)(puVar58 + 0x3000);
                    puVar59[uVar79 + 3] = uVar23 | puVar59[uVar79 + 3];
                    if (uVar64 != 4) {
                      video->texture_slots[local_168 + uVar79 + 2] = (u8 *)(puVar58 + 0x4000);
                      puVar59[uVar79 + 4] = uVar23 | puVar59[uVar79 + 4];
                      if (uVar64 != 5) {
                        video->texture_slots[local_168 + uVar79 + 3] = (u8 *)(puVar58 + 0x5000);
                        puVar59[uVar79 + 5] = uVar23 | puVar59[uVar79 + 5];
                        if (uVar64 != 6) {
                          video->texture_palette_slots[local_168 + uVar79] = puVar58 + 0x6000;
                          puVar59[uVar79 + 6] = uVar23 | puVar59[uVar79 + 6];
                        }
                      }
                    }
                  }
                }
              }
            }
            else {
              ppuVar57 = video->extended_palette_bg_slots[1] + local_168 + 3;
              puVar58 = puVar59;
              do {
                uVar22 = *puVar58;
                ppuVar57 = ppuVar57 + 1;
                *ppuVar57 = puVar86;
                puVar86 = puVar86 + 0x1000;
                puVar83 = puVar58 + 1;
                *puVar58 = uVar23 | uVar22;
                puVar58 = puVar83;
              } while (puVar59 + uVar73 != puVar83);
            }
LAB_0802fd20:
            ppuVar87 = (u8 **)0x0;
            video->video_2d_engine[local_168].extended_obj_palette =
                 video->extended_palette_obj_slots[local_168];
            break;
          default:
            goto switchD_0802f8fc_caseD_7;
          }
          break;
        case 4:
          switch(local_178) {
          case 0:
          case 1:
          case 7:
          case 8:
            goto switchD_0802fd4c_caseD_0;
          case 2:
            uVar67 = 4;
            uVar63 = 0x6200000;
            ppuVar87 = (u8 **)0x80;
            local_140 = -0x200000;
            local_d8 = (undefined8 *)0x0;
            uVar64 = 0x10;
            goto LAB_080329c4;
          case 3:
            goto switchD_0802fd4c_caseD_3;
          case 4:
            ppuVar87 = (u8 **)0x0;
            iVar74 = 0;
            local_154 = uVar73 >> 1;
            break;
          case 5:
          case 6:
            iVar74 = 0;
            ppuVar87 = (u8 **)((uVar67 & 1) << 1);
            break;
          default:
            goto switchD_0802f8fc_caseD_7;
          }
LAB_08034644:
          uVar73 = local_154 >> 3;
          ppuVar95 = ppuVar87 + 0x10e;
          puVar83 = (u16 *)((int)video->vram_bank_maps +
                           (uVar73 + (int)ppuVar95) * 4 + iVar74 * 0x10 + -8);
          puVar59 = video->extended_palette_bg_allocation_bitmap[iVar74] + uVar73 + (int)ppuVar87;
          puVar94 = video->extended_palette_bg_allocation_bitmap[iVar74] + (int)ppuVar87;
          puVar58 = (u16 *)((int)video->vram_bank_maps + (int)ppuVar95 * 4 + iVar74 * 0x10 + -8);
          bVar98 = puVar58 <= puVar59;
          bVar96 = puVar59 == puVar58;
          if (bVar98 && !bVar96) {
            bVar98 = puVar94 <= puVar83;
            bVar96 = puVar83 == puVar94;
          }
          uVar23 = (ushort)(1 << (local_178 & 0xff));
          if (uVar73 < 0xc || bVar98 && !bVar96) {
            puVar59 = video->extended_palette_bg_allocation_bitmap[iVar74] + (int)ppuVar87;
            ppuVar57 = (u16 **)((int)video->vram_bank_maps + (int)ppuVar95 * 4 + iVar74 * 0x10 + -8)
            ;
            do {
              uVar22 = *puVar59;
              ppuVar80 = ppuVar57 + 1;
              *ppuVar57 = puVar86;
              puVar86 = puVar86 + 0x1000;
              *puVar59 = uVar23 | uVar22;
              puVar59 = puVar59 + 1;
              ppuVar57 = ppuVar80;
            } while (ppuVar80 != video->extended_palette_bg_slots[iVar74] + uVar73 + (int)ppuVar87);
          }
          else {
            uVar67 = -((uint)((int)(video->extended_palette_bg_allocation_bitmap[iVar74] +
                                   (int)ppuVar87) * 0x20000000) >> 0x1e) & 7;
            if (uVar73 <= uVar67) {
              uVar67 = uVar73;
            }
            ppuVar55 = ppuVar87;
            uVar64 = uVar73;
            puVar59 = puVar86;
            if (uVar67 != 0) {
              uVar64 = uVar73 - 1;
              video->extended_palette_bg_slots[iVar74][(int)ppuVar87] = puVar86;
              puVar59 = puVar86 + 0x1000;
              video->extended_palette_bg_allocation_bitmap[iVar74][(int)ppuVar87] =
                   uVar23 | video->extended_palette_bg_allocation_bitmap[iVar74][(int)ppuVar87];
              ppuVar55 = (u8 **)((int)ppuVar87 + 1);
              if (uVar67 != 1) {
                uVar22 = video->extended_palette_bg_allocation_bitmap[iVar74][(int)ppuVar87 + 1];
                video->extended_palette_bg_slots[iVar74][(int)ppuVar87 + 1] = puVar86 + 0x1000;
                puVar59 = puVar86 + 0x2000;
                uVar64 = uVar73 - 2;
                video->extended_palette_bg_allocation_bitmap[iVar74][(int)ppuVar87 + 1] =
                     uVar23 | uVar22;
                ppuVar55 = (u8 **)((int)ppuVar87 + 2);
                if (uVar67 != 2) {
                  uVar22 = video->extended_palette_bg_allocation_bitmap[iVar74][(int)ppuVar87 + 2];
                  video->extended_palette_bg_slots[iVar74][(int)ppuVar87 + 2] = puVar86 + 0x2000;
                  puVar59 = puVar86 + 0x3000;
                  uVar64 = uVar73 - 3;
                  video->extended_palette_bg_allocation_bitmap[iVar74][(int)ppuVar87 + 2] =
                       uVar23 | uVar22;
                  ppuVar55 = (u8 **)((int)ppuVar87 + 3);
                  if (uVar67 != 3) {
                    uVar22 = video->extended_palette_bg_allocation_bitmap[iVar74][(int)ppuVar87 + 3]
                    ;
                    video->extended_palette_bg_slots[iVar74][(int)ppuVar87 + 3] = puVar86 + 0x3000;
                    puVar59 = puVar86 + 0x4000;
                    uVar64 = uVar73 - 4;
                    ppuVar75 = ppuVar87 + 1;
                    video->extended_palette_bg_allocation_bitmap[iVar74][(int)ppuVar87 + 3] =
                         uVar23 | uVar22;
                    ppuVar55 = ppuVar75;
                    if (uVar67 != 4) {
                      uVar22 = video->extended_palette_bg_allocation_bitmap[iVar74][(int)ppuVar75];
                      video->extended_palette_bg_slots[iVar74][(int)ppuVar75] = puVar86 + 0x4000;
                      puVar59 = puVar86 + 0x5000;
                      uVar64 = uVar73 - 5;
                      ppuVar55 = (u8 **)((int)ppuVar87 + 5);
                      video->extended_palette_bg_allocation_bitmap[iVar74][(int)ppuVar75] =
                           uVar23 | uVar22;
                      if (uVar67 != 5) {
                        uVar22 = video->extended_palette_bg_allocation_bitmap[iVar74 + 1]
                                 [(int)ppuVar87 + 1];
                        video->extended_palette_bg_slots[iVar74 + 1][(int)ppuVar87 + 1] =
                             puVar86 + 0x5000;
                        puVar59 = puVar86 + 0x6000;
                        uVar64 = uVar73 - 6;
                        ppuVar55 = (u8 **)((int)ppuVar87 + 6);
                        video->extended_palette_bg_allocation_bitmap[iVar74 + 1][(int)ppuVar87 + 1]
                             = uVar23 | uVar22;
                        if (uVar67 == 7) {
                          uVar22 = video->extended_palette_bg_allocation_bitmap[iVar74 + 1]
                                   [(int)ppuVar87 + 2];
                          video->extended_palette_bg_slots[iVar74 + 1][(int)ppuVar87 + 2] =
                               puVar86 + 0x6000;
                          video->extended_palette_bg_allocation_bitmap[iVar74 + 1]
                          [(int)ppuVar87 + 2] = uVar23 | uVar22;
                          ppuVar55 = (u8 **)((int)ppuVar87 + 7);
                          uVar64 = uVar73 - 7;
                          puVar59 = puVar86 + 0x7000;
                        }
                      }
                    }
                  }
                }
              }
            }
            uVar79 = ((uVar73 - uVar67) - 8 >> 3) + 1;
            if (6 < (uVar73 - 1) - uVar67) {
              auVar1 = SIMDExpandImmediate(0,4,1);
              auVar17._4_4_ = puVar59;
              auVar17._0_4_ = puVar59;
              auVar17._8_8_ = 0;
              auVar2 = SIMDExpandImmediate(0,2,0x80);
              auVar18._4_4_ = CONCAT22(uVar23,uVar23);
              auVar18._0_4_ = CONCAT22(uVar23,uVar23);
              auVar18._8_8_ = 0;
              puVar58 = video->extended_palette_bg_allocation_bitmap[iVar74] +
                        uVar67 + (int)ppuVar87;
              auVar46._8_8_ = 0x600000004000;
              auVar46._0_8_ = 0x200000000000;
              auVar117 = VectorAdd(auVar17 & auVar17 << 0x40,auVar46,4);
              uVar90 = 0;
              puVar86 = puVar58;
              puVar84 = (undefined8 *)
                        ((int)video->vram_bank_maps +
                        ((int)ppuVar95 + uVar67) * 4 + iVar74 * 0x10 + -8);
              do {
                auVar119 = *(undefined (*) [16])puVar58;
                auVar118 = VectorAdd(auVar117,auVar2,4);
                uVar90 = uVar90 + 1;
                *puVar84 = auVar117._0_8_;
                puVar84[1] = auVar117._8_8_;
                puVar58 = puVar58 + 8;
                auVar117 = VectorAdd(auVar117,auVar1,4);
                puVar84[2] = auVar118._0_8_;
                puVar84[3] = auVar118._8_8_;
                auVar119 = auVar119 | auVar18 & auVar18 << 0x40;
                *(longlong *)puVar86 = auVar119._0_8_;
                *(longlong *)(puVar86 + 4) = auVar119._8_8_;
                puVar86 = puVar86 + 8;
                puVar84 = puVar84 + 4;
              } while (uVar90 < uVar79);
              puVar59 = puVar59 + uVar79 * 0x8000;
              ppuVar55 = ppuVar55 + uVar79 * 2;
              uVar64 = uVar64 + uVar79 * -8;
              if (uVar73 - uVar67 == uVar79 * 8) goto LAB_08034a34;
            }
            video->extended_palette_bg_slots[iVar74][(int)ppuVar55] = puVar59;
            video->extended_palette_bg_allocation_bitmap[iVar74][(int)ppuVar55] =
                 uVar23 | video->extended_palette_bg_allocation_bitmap[iVar74][(int)ppuVar55];
            if (uVar64 != 1) {
              video->extended_palette_bg_slots[iVar74][(int)ppuVar55 + 1] = puVar59 + 0x1000;
              video->extended_palette_bg_allocation_bitmap[iVar74][(int)ppuVar55 + 1] =
                   uVar23 | video->extended_palette_bg_allocation_bitmap[iVar74][(int)ppuVar55 + 1];
              if (uVar64 != 2) {
                video->extended_palette_bg_slots[iVar74][(int)ppuVar55 + 2] = puVar59 + 0x2000;
                video->extended_palette_bg_allocation_bitmap[iVar74][(int)ppuVar55 + 2] =
                     uVar23 | video->extended_palette_bg_allocation_bitmap[iVar74]
                              [(int)ppuVar55 + 2];
                if (uVar64 != 3) {
                  video->extended_palette_bg_slots[iVar74][(int)ppuVar55 + 3] = puVar59 + 0x3000;
                  ppuVar95 = ppuVar55 + 1;
                  video->extended_palette_bg_allocation_bitmap[iVar74][(int)ppuVar55 + 3] =
                       uVar23 | video->extended_palette_bg_allocation_bitmap[iVar74]
                                [(int)ppuVar55 + 3];
                  if (uVar64 != 4) {
                    video->extended_palette_bg_slots[iVar74][(int)ppuVar95] = puVar59 + 0x4000;
                    video->extended_palette_bg_allocation_bitmap[iVar74][(int)ppuVar95] =
                         uVar23 | video->extended_palette_bg_allocation_bitmap[iVar74]
                                  [(int)ppuVar95];
                    if (uVar64 != 5) {
                      video->extended_palette_bg_slots[iVar74 + 1][(int)ppuVar55 + 1] =
                           puVar59 + 0x5000;
                      video->extended_palette_bg_allocation_bitmap[iVar74 + 1][(int)ppuVar55 + 1] =
                           uVar23 | video->extended_palette_bg_allocation_bitmap[iVar74 + 1]
                                    [(int)ppuVar55 + 1];
                      if (uVar64 != 6) {
                        video->extended_palette_bg_slots[iVar74 + 1][(int)ppuVar55 + 2] =
                             puVar59 + 0x6000;
                        video->extended_palette_bg_allocation_bitmap[iVar74 + 1][(int)ppuVar55 + 2]
                             = uVar23 | video->extended_palette_bg_allocation_bitmap[iVar74 + 1]
                                        [(int)ppuVar55 + 2];
                      }
                    }
                  }
                }
              }
            }
          }
LAB_08034a34:
          ppuVar57 = video->video_2d_engine[iVar74].extended_bg_palettes;
          uVar23 = video->video_2d_engine[iVar74].bg_layers[1].bg_control;
          video->video_2d_engine[iVar74].bg_layers[0].extended_palette =
               ppuVar57[((int)((uint)video->video_2d_engine[iVar74].bg_layers[0].bg_control << 0x12)
                        >> 0x1f) * -2];
          video->video_2d_engine[iVar74].bg_layers[1].extended_palette =
               ppuVar57[((int)((uint)uVar23 << 0x12) >> 0x1f) * -2 + 1];
          video->video_2d_engine[iVar74].bg_layers[2].extended_palette = ppuVar57[2];
          video->video_2d_engine[iVar74].bg_layers[3].extended_palette = ppuVar57[3];
          break;
        case 5:
          if (local_178 < 9) {
            uVar64 = 1;
            uVar67 = 1 << (local_178 & 0xff);
            if ((uVar67 & 0x19f) != 0) goto switchD_0802fd4c_caseD_0;
            if ((uVar67 & 0x60) != 0) {
              iVar74 = 2;
              local_168 = 0;
              goto LAB_0802fa0c;
            }
            uVar63 = 0x6000000;
            local_d8 = (undefined8 *)0xffffff80;
            uVar67 = 0;
            ppuVar87 = (u8 **)0x0;
            local_140 = 0;
          }
          else {
            ppuVar87 = (u8 **)0x0;
            uVar67 = 0;
            uVar63 = 0x6000000;
            uVar64 = 1;
            local_140 = 0;
            local_d8 = (undefined8 *)0xffffff80;
          }
LAB_080329c4:
          local_108 = (u8 *)((uVar73 >> 4) << 0xe);
          unmap_memory_page_region_direct(pmVar54->memory_interface_arm9,uVar63,(u32)local_108);
          vram_map_6 = (u8 **)0x0;
LAB_08032a10:
          local_168 = uVar73 >> 4;
          video->vram_map_dirty_bitmap_fine[uVar67] =
               video->vram_map_dirty_bitmap_fine[uVar67] |
               ~(-1 << (local_168 & 0xff)) << (int)vram_map_6;
          video->vram_map_dirty_bitmap_coarse = video->vram_map_dirty_bitmap_coarse | uVar64;
LAB_08032a40:
          local_168 = uVar73 >> 4;
          puVar78 = video->vram_map_dirty_bit_numbers;
          puVar92 = puVar78 + (int)ppuVar87;
          iVar74 = local_168 + (int)ppuVar87;
          ppuVar95 = video->vram_map + (int)ppuVar87;
          puVar59 = video->vram_map_allocation_bitmap + (int)ppuVar87;
          puVar81 = (u8 *)((int)puVar86 + local_140);
          uVar23 = (ushort)(1 << (local_178 & 0xff));
          if ((local_168 < 0x14 ||
              (puVar59 < video->vram_map + iVar74 &&
               ppuVar95 < video->vram_map_allocation_bitmap + iVar74 ||
              ppuVar95 < puVar78 + iVar74 && puVar92 < video->vram_map + iVar74)) ||
              puVar59 < puVar78 + iVar74 && puVar92 < video->vram_map_allocation_bitmap + iVar74) {
            ppuVar55 = vram_map_9;
            do {
              uVar22 = *puVar59;
              *ppuVar95 = puVar81;
              *puVar59 = uVar23 | uVar22;
              *puVar92 = (u8)ppuVar55;
              ppuVar55 = (u8 **)((int)ppuVar55 + 1);
              ppuVar95 = ppuVar95 + 1;
              puVar59 = puVar59 + 1;
              puVar92 = puVar92 + 1;
            } while (ppuVar55 != (u8 **)(local_168 + (int)vram_map_9));
          }
          else {
            local_140 = local_168;
            uVar73 = -((uint)((int)puVar59 * 0x20000000) >> 0x1e) & 7;
            if (local_168 <= uVar73) {
              uVar73 = local_168;
            }
            ppuVar55 = vram_map_9;
            ppuVar75 = ppuVar87;
            if (uVar73 != 0) {
              uVar22 = *puVar59;
              *ppuVar95 = puVar81;
              ppuVar55 = (u8 **)((int)vram_map_9 + 1);
              *puVar59 = uVar23 | uVar22;
              ppuVar75 = (u8 **)((int)ppuVar87 + 1);
              *puVar92 = uVar47;
              local_140 = local_168 - 1;
              if (uVar73 != 1) {
                uVar22 = video->vram_map_allocation_bitmap[(int)ppuVar87 + 1];
                video->vram_map[(int)ppuVar87 + 1] = puVar81;
                ppuVar55 = (u8 **)((int)vram_map_9 + 2);
                video->vram_map_allocation_bitmap[(int)ppuVar87 + 1] = uVar23 | uVar22;
                local_140 = local_168 - 2;
                puVar78[(int)ppuVar75] = uVar47 + '\x01';
                ppuVar75 = (u8 **)((int)ppuVar87 + 2);
                if (uVar73 != 2) {
                  uVar22 = video->vram_map_allocation_bitmap[(int)ppuVar87 + 2];
                  video->vram_map[(int)ppuVar87 + 2] = puVar81;
                  ppuVar55 = (u8 **)((int)vram_map_9 + 3);
                  video->vram_map_allocation_bitmap[(int)ppuVar87 + 2] = uVar23 | uVar22;
                  local_140 = local_168 - 3;
                  puVar78[(int)ppuVar75] = uVar47 + '\x02';
                  ppuVar75 = (u8 **)((int)ppuVar87 + 3);
                  if (uVar73 != 3) {
                    uVar22 = video->vram_map_allocation_bitmap[(int)ppuVar87 + 3];
                    video->vram_map[(int)ppuVar87 + 3] = puVar81;
                    ppuVar55 = vram_map_9 + 1;
                    video->vram_map_allocation_bitmap[(int)ppuVar87 + 3] = uVar23 | uVar22;
                    local_140 = local_168 - 4;
                    puVar78[(int)ppuVar75] = uVar47 + '\x03';
                    ppuVar75 = ppuVar87 + 1;
                    if (uVar73 != 4) {
                      uVar22 = video->vram_map_allocation_bitmap[(int)ppuVar75];
                      video->vram_map[(int)ppuVar75] = puVar81;
                      ppuVar55 = (u8 **)((int)vram_map_9 + 5);
                      video->vram_map_allocation_bitmap[(int)ppuVar75] = uVar23 | uVar22;
                      local_140 = local_168 - 5;
                      puVar78[(int)ppuVar75] = uVar47 + '\x04';
                      ppuVar75 = (u8 **)((int)ppuVar87 + 5);
                      if (uVar73 != 5) {
                        video->vram_map[(int)ppuVar87 + 5] = puVar81;
                        ppuVar55 = (u8 **)((int)vram_map_9 + 6);
                        local_140 = local_168 - 6;
                        video->vram_map_allocation_bitmap[(int)ppuVar87 + 5] =
                             uVar23 | video->vram_map_allocation_bitmap[(int)ppuVar87 + 5];
                        puVar78[(int)ppuVar75] = uVar47 + '\x05';
                        ppuVar75 = (u8 **)((int)ppuVar87 + 6);
                        if (uVar73 == 7) {
                          uVar22 = video->vram_map_allocation_bitmap[(int)ppuVar87 + 6];
                          video->vram_map[(int)ppuVar87 + 6] = puVar81;
                          ppuVar55 = (u8 **)((int)vram_map_9 + 7);
                          local_140 = local_168 - 7;
                          video->vram_map_allocation_bitmap[(int)ppuVar87 + 6] = uVar23 | uVar22;
                          puVar78[(int)ppuVar75] = uVar47 + '\x06';
                          ppuVar75 = (u8 **)((int)ppuVar87 + 7);
                        }
                      }
                    }
                  }
                }
              }
              if (local_168 == uVar73) goto LAB_08033198;
            }
            local_c8 = local_168 - 1;
            uVar67 = ((local_168 - uVar73) - 0x10 >> 4) + 1;
            if (0xe < local_c8 - uVar73) {
              auVar1 = SIMDExpandImmediate(0,0,0x10);
              auVar2 = SIMDExpandImmediate(0,0,4);
              auVar117 = SIMDExpandImmediate(0,0,8);
              auVar119 = SIMDExpandImmediate(0,0,0xc);
              auVar11._4_4_ = ppuVar55;
              auVar11._0_4_ = ppuVar55;
              auVar11._8_8_ = 0;
              puVar92 = puVar78 + uVar73 + (int)ppuVar87;
              auVar12._4_4_ = CONCAT22(uVar23,uVar23);
              auVar12._0_4_ = CONCAT22(uVar23,uVar23);
              auVar12._8_8_ = 0;
              auVar12 = auVar12 & auVar12 << 0x40;
              auVar34._8_8_ = 0x300000002;
              auVar34._0_8_ = 0x100000000;
              auVar118 = VectorAdd(auVar11 & auVar11 << 0x40,auVar34,4);
              local_130 = (u8 *)0x0;
              puVar59 = video->vram_map_allocation_bitmap + (int)ppuVar87 + uVar73 + 0x10;
              ppuVar95 = video->vram_map + uVar73 + (int)ppuVar87;
              puVar58 = video->vram_map_allocation_bitmap + (int)ppuVar87 + uVar73 + 0x10;
              do {
                auVar111 = VectorAdd(auVar118,auVar2,4);
                auVar107 = VectorAdd(auVar118,auVar119,4);
                auVar113 = *(undefined (*) [16])(puVar59 + -8);
                auVar100 = VectorAdd(auVar118,auVar117,4);
                auVar120 = *(undefined (*) [16])(puVar59 + -0x10);
                local_130 = (u8 *)((int)local_130 + 1);
                *(undefined8 *)ppuVar95 = 0;
                *(undefined8 *)(ppuVar95 + 2) = 0;
                *(undefined8 *)(ppuVar95 + 4) = 0;
                *(undefined8 *)(ppuVar95 + 6) = 0;
                uVar108 = VectorCopyNarrow(auVar118,4);
                uVar109 = VectorCopyNarrow(auVar111,4);
                auVar112._0_8_ = VectorCopyNarrow(auVar100,4);
                auVar112._8_8_ = VectorCopyNarrow(auVar107,4);
                auVar118 = VectorAdd(auVar118,auVar1,4);
                auVar24._8_8_ = uVar109;
                auVar24._0_8_ = uVar108;
                uVar108 = VectorCopyNarrow(auVar24,2);
                uVar109 = VectorCopyNarrow(auVar112,2);
                auVar120 = auVar120 | auVar12;
                *(undefined8 *)(ppuVar95 + 8) = 0;
                *(undefined8 *)(ppuVar95 + 10) = 0;
                *(undefined8 *)(ppuVar95 + 0xc) = 0;
                *(undefined8 *)(ppuVar95 + 0xe) = 0;
                *(longlong *)(puVar58 + -0x10) = auVar120._0_8_;
                *(longlong *)(puVar58 + -0xc) = auVar120._8_8_;
                auVar113 = auVar12 | auVar113;
                *(longlong *)(puVar58 + -8) = auVar113._0_8_;
                *(longlong *)(puVar58 + -4) = auVar113._8_8_;
                *(undefined8 *)puVar92 = uVar108;
                *(undefined8 *)(puVar92 + 8) = uVar109;
                puVar92 = puVar92 + 0x10;
                puVar59 = puVar59 + 0x10;
                ppuVar95 = ppuVar95 + 0x10;
                puVar58 = puVar58 + 0x10;
              } while (local_130 < uVar67);
              ppuVar55 = ppuVar55 + uVar67 * 4;
              ppuVar75 = ppuVar75 + uVar67 * 4;
              local_140 = local_140 + uVar67 * -0x10;
              if (uVar67 * 0x10 - (local_168 - uVar73) == 0) goto LAB_08033198;
            }
            uVar22 = video->vram_map_allocation_bitmap[(int)ppuVar75];
            uVar48 = (u8)ppuVar55;
            video->vram_map[(int)ppuVar75] = puVar81;
            video->vram_map_allocation_bitmap[(int)ppuVar75] = uVar23 | uVar22;
            puVar78[(int)ppuVar75] = uVar48;
            if (local_140 != 1) {
              video->vram_map[(int)ppuVar75 + 1] = puVar81;
              video->vram_map_allocation_bitmap[(int)ppuVar75 + 1] =
                   uVar23 | video->vram_map_allocation_bitmap[(int)ppuVar75 + 1];
              puVar78[(int)ppuVar75 + 1] = uVar48 + '\x01';
              if (local_140 != 2) {
                video->vram_map[(int)ppuVar75 + 2] = puVar81;
                video->vram_map_allocation_bitmap[(int)ppuVar75 + 2] =
                     uVar23 | video->vram_map_allocation_bitmap[(int)ppuVar75 + 2];
                puVar78[(int)ppuVar75 + 2] = uVar48 + '\x02';
                if (local_140 != 3) {
                  video->vram_map[(int)ppuVar75 + 3] = puVar81;
                  ppuVar95 = ppuVar75 + 1;
                  video->vram_map_allocation_bitmap[(int)ppuVar75 + 3] =
                       uVar23 | video->vram_map_allocation_bitmap[(int)ppuVar75 + 3];
                  puVar78[(int)ppuVar75 + 3] = uVar48 + '\x03';
                  if (local_140 != 4) {
                    video->vram_map[(int)ppuVar95] = puVar81;
                    video->vram_map_allocation_bitmap[(int)ppuVar95] =
                         uVar23 | video->vram_map_allocation_bitmap[(int)ppuVar95];
                    puVar78[(int)ppuVar95] = uVar48 + '\x04';
                    if (local_140 != 5) {
                      video->vram_map[(int)ppuVar75 + 5] = puVar81;
                      video->vram_map_allocation_bitmap[(int)ppuVar75 + 5] =
                           uVar23 | video->vram_map_allocation_bitmap[(int)ppuVar75 + 5];
                      puVar78[(int)ppuVar75 + 5] = uVar48 + '\x05';
                      if (local_140 != 6) {
                        video->vram_map[(int)ppuVar75 + 6] = puVar81;
                        video->vram_map_allocation_bitmap[(int)ppuVar75 + 6] =
                             uVar23 | video->vram_map_allocation_bitmap[(int)ppuVar75 + 6];
                        puVar78[(int)ppuVar75 + 6] = uVar48 + '\x06';
                        if (local_140 != 7) {
                          video->vram_map[(int)ppuVar75 + 7] = puVar81;
                          ppuVar95 = ppuVar75 + 2;
                          video->vram_map_allocation_bitmap[(int)ppuVar75 + 7] =
                               uVar23 | video->vram_map_allocation_bitmap[(int)ppuVar75 + 7];
                          puVar78[(int)ppuVar75 + 7] = uVar48 + '\a';
                          if (local_140 != 8) {
                            video->vram_map[(int)ppuVar95] = puVar81;
                            video->vram_map_allocation_bitmap[(int)ppuVar95] =
                                 uVar23 | video->vram_map_allocation_bitmap[(int)ppuVar95];
                            puVar78[(int)ppuVar95] = uVar48 + '\b';
                            if (local_140 != 9) {
                              video->vram_map[(int)ppuVar75 + 9] = puVar81;
                              video->vram_map_allocation_bitmap[(int)ppuVar75 + 9] =
                                   uVar23 | video->vram_map_allocation_bitmap[(int)ppuVar75 + 9];
                              puVar78[(int)ppuVar75 + 9] = uVar48 + '\t';
                              if (local_140 != 10) {
                                video->vram_map[(int)ppuVar75 + 10] = puVar81;
                                video->vram_map_allocation_bitmap[(int)ppuVar75 + 10] =
                                     uVar23 | video->vram_map_allocation_bitmap[(int)ppuVar75 + 10];
                                puVar78[(int)ppuVar75 + 10] = uVar48 + '\n';
                                if (local_140 != 0xb) {
                                  video->vram_map[(int)ppuVar75 + 0xb] = puVar81;
                                  local_120._0_1_ = uVar48 + '\f';
                                  ppuVar95 = ppuVar75 + 3;
                                  video->vram_map_allocation_bitmap[(int)ppuVar75 + 0xb] =
                                       uVar23 | video->vram_map_allocation_bitmap
                                                [(int)ppuVar75 + 0xb];
                                  puVar78[(int)ppuVar75 + 0xb] = uVar48 + '\v';
                                  if (local_140 != 0xc) {
                                    video->vram_map[(int)ppuVar95] = puVar81;
                                    video->vram_map_allocation_bitmap[(int)ppuVar95] =
                                         uVar23 | video->vram_map_allocation_bitmap[(int)ppuVar95];
                                    puVar78[(int)ppuVar95] = (u8)local_120;
                                    if (local_140 != 0xd) {
                                      video->vram_map[(int)ppuVar75 + 0xd] = puVar81;
                                      video->vram_map_allocation_bitmap[(int)ppuVar75 + 0xd] =
                                           uVar23 | video->vram_map_allocation_bitmap
                                                    [(int)ppuVar75 + 0xd];
                                      puVar78[(int)ppuVar75 + 0xd] = uVar48 + '\r';
                                      if (local_140 != 0xe) {
                                        video->vram_map[(int)ppuVar75 + 0xe] = puVar81;
                                        video->vram_map_allocation_bitmap[(int)ppuVar75 + 0xe] =
                                             uVar23 | video->vram_map_allocation_bitmap
                                                      [(int)ppuVar75 + 0xe];
                                        puVar78[(int)ppuVar75 + 0xe] = uVar48 + '\x0e';
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
LAB_08033198:
          if (local_d8 < (u8 **)0x80) {
            unmap_memory_page_region_direct
                      (video->memory->memory_interface_arm9,(int)(ppuVar87 + 0x602) * 0x4000,
                       (u32)local_108);
            uVar73 = (uint)(ppuVar87 + 2) >> 5;
            puVar81 = (u8 *)((int)puVar86 - ((int)(ppuVar87 + 0x602) * 0x4000 + 0xfa000000U));
            puVar86 = video->vram_map_allocation_bitmap + (int)(ppuVar87 + 2);
            video->vram_map_dirty_bitmap_fine[uVar73] =
                 video->vram_map_dirty_bitmap_fine[uVar73] |
                 (1 << (local_168 & 0xff)) + -1 << ((uint)(ppuVar87 + 2) & 0x1f);
            puVar92 = puVar78 + (int)(ppuVar87 + 2);
            video->vram_map_dirty_bitmap_coarse =
                 video->vram_map_dirty_bitmap_coarse | 1 << (uVar73 & 0xff);
            if ((local_168 < 0x14 ||
                (puVar86 < video->vram_map + iVar74 + 8 &&
                 video->vram_map + (int)(ppuVar87 + 2) <
                 video->vram_map_allocation_bitmap + iVar74 + 8 ||
                video->vram_map + (int)(ppuVar87 + 2) < puVar78 + iVar74 + 8 &&
                puVar92 < video->vram_map + iVar74 + 8)) ||
                puVar86 < puVar78 + iVar74 + 8 &&
                puVar92 < video->vram_map_allocation_bitmap + iVar74 + 8) {
              ppuVar55 = video->vram_map + (int)ppuVar87 + 7;
              puVar78 = puVar78 + (int)ppuVar87 + 7;
              ppuVar95 = vram_map_9;
              do {
                uVar22 = *puVar86;
                ppuVar55 = ppuVar55 + 1;
                *ppuVar55 = puVar81;
                *puVar86 = uVar23 | uVar22;
                puVar78 = puVar78 + 1;
                *puVar78 = (u8)ppuVar95;
                ppuVar95 = (u8 **)((int)ppuVar95 + 1);
                puVar86 = puVar86 + 1;
              } while (ppuVar95 != (u8 **)(local_168 + (int)vram_map_9));
            }
            else {
              local_140 = local_168;
              uVar73 = -((uint)((int)puVar86 * 0x20000000) >> 0x1e) & 7;
              if (local_168 <= uVar73) {
                uVar73 = local_168;
              }
              if (uVar73 == 0) {
                ppuVar55 = ppuVar87 + 2;
                ppuVar95 = vram_map_9;
              }
              else {
                ppuVar95 = (u8 **)((int)vram_map_9 + 1);
                video->vram_map[(int)(ppuVar87 + 2)] = puVar81;
                local_140 = local_168 - 1;
                video->vram_map_allocation_bitmap[(int)(ppuVar87 + 2)] =
                     uVar23 | video->vram_map_allocation_bitmap[(int)(ppuVar87 + 2)];
                ppuVar55 = (u8 **)((int)ppuVar87 + 9);
                *puVar92 = uVar47;
                if (uVar73 != 1) {
                  video->vram_map[(int)ppuVar87 + 9] = puVar81;
                  ppuVar95 = (u8 **)((int)vram_map_9 + 2);
                  local_140 = local_168 - 2;
                  video->vram_map_allocation_bitmap[(int)ppuVar87 + 9] =
                       uVar23 | video->vram_map_allocation_bitmap[(int)ppuVar87 + 9];
                  puVar78[(int)ppuVar55] = uVar47 + '\x01';
                  ppuVar55 = (u8 **)((int)ppuVar87 + 10);
                  if (uVar73 != 2) {
                    uVar22 = video->vram_map_allocation_bitmap[(int)ppuVar87 + 10];
                    local_140 = local_168 - 3;
                    video->vram_map[(int)ppuVar87 + 10] = puVar81;
                    ppuVar95 = (u8 **)((int)vram_map_9 + 3);
                    video->vram_map_allocation_bitmap[(int)ppuVar87 + 10] = uVar23 | uVar22;
                    puVar78[(int)ppuVar55] = uVar47 + '\x02';
                    ppuVar55 = (u8 **)((int)ppuVar87 + 0xb);
                    if (uVar73 != 3) {
                      uVar22 = video->vram_map_allocation_bitmap[(int)ppuVar87 + 0xb];
                      local_140 = local_168 - 4;
                      video->vram_map[(int)ppuVar87 + 0xb] = puVar81;
                      ppuVar95 = vram_map_9 + 1;
                      video->vram_map_allocation_bitmap[(int)ppuVar87 + 0xb] = uVar23 | uVar22;
                      puVar78[(int)ppuVar55] = uVar47 + '\x03';
                      ppuVar55 = ppuVar87 + 3;
                      if (uVar73 != 4) {
                        uVar22 = video->vram_map_allocation_bitmap[(int)ppuVar55];
                        local_140 = local_168 - 5;
                        video->vram_map[(int)ppuVar55] = puVar81;
                        ppuVar95 = (u8 **)((int)vram_map_9 + 5);
                        video->vram_map_allocation_bitmap[(int)ppuVar55] = uVar23 | uVar22;
                        puVar78[(int)ppuVar55] = uVar47 + '\x04';
                        ppuVar55 = (u8 **)((int)ppuVar87 + 0xd);
                        if (uVar73 != 5) {
                          uVar22 = video->vram_map_allocation_bitmap[(int)ppuVar87 + 0xd];
                          local_140 = local_168 - 6;
                          video->vram_map[(int)ppuVar87 + 0xd] = puVar81;
                          ppuVar95 = (u8 **)((int)vram_map_9 + 6);
                          video->vram_map_allocation_bitmap[(int)ppuVar87 + 0xd] = uVar23 | uVar22;
                          puVar78[(int)ppuVar55] = uVar47 + '\x05';
                          ppuVar55 = (u8 **)((int)ppuVar87 + 0xe);
                          if (uVar73 == 7) {
                            video->vram_map[(int)ppuVar87 + 0xe] = puVar81;
                            ppuVar95 = (u8 **)((int)vram_map_9 + 7);
                            local_140 = local_168 - 7;
                            video->vram_map_allocation_bitmap[(int)ppuVar87 + 0xe] =
                                 uVar23 | video->vram_map_allocation_bitmap[(int)ppuVar87 + 0xe];
                            puVar78[(int)ppuVar55] = uVar47 + '\x06';
                            ppuVar55 = (u8 **)((int)ppuVar87 + 0xf);
                          }
                        }
                      }
                    }
                  }
                }
                if (local_168 == uVar73) goto LAB_080331a4;
              }
              local_c8 = local_168 - 1;
              uVar67 = ((local_168 - uVar73) - 0x10 >> 4) + 1;
              if (0xe < local_c8 - uVar73) {
                auVar19._4_4_ = ppuVar95;
                auVar19._0_4_ = ppuVar95;
                auVar19._8_8_ = 0;
                auVar1 = SIMDExpandImmediate(0,0,0x10);
                auVar2 = SIMDExpandImmediate(0,0,4);
                auVar117 = SIMDExpandImmediate(0,0,8);
                auVar119 = SIMDExpandImmediate(0,0,0xc);
                puVar59 = video->vram_map_allocation_bitmap + (int)ppuVar87 + uVar73 + 0x18;
                uVar64 = 0;
                auVar20._4_4_ = CONCAT22(uVar23,uVar23);
                auVar20._0_4_ = CONCAT22(uVar23,uVar23);
                auVar20._8_8_ = 0;
                auVar20 = auVar20 & auVar20 << 0x40;
                auVar35._8_8_ = 0x300000002;
                auVar35._0_8_ = 0x100000000;
                auVar118 = VectorAdd(auVar19 & auVar19 << 0x40,auVar35,4);
                puVar86 = puVar59;
                ppuVar75 = video->vram_map + (int)ppuVar87 + uVar73 + 8;
                local_130 = puVar78 + (int)ppuVar87 + uVar73 + 8;
                do {
                  auVar111 = VectorAdd(auVar118,auVar2,4);
                  auVar107 = VectorAdd(auVar118,auVar119,4);
                  auVar113 = *(undefined (*) [16])(puVar59 + -8);
                  auVar100 = VectorAdd(auVar118,auVar117,4);
                  uVar64 = uVar64 + 1;
                  auVar120 = *(undefined (*) [16])(puVar59 + -0x10);
                  *(undefined8 *)ppuVar75 = 0;
                  *(undefined8 *)(ppuVar75 + 2) = 0;
                  *(undefined8 *)(ppuVar75 + 4) = 0;
                  *(undefined8 *)(ppuVar75 + 6) = 0;
                  puVar59 = puVar59 + 0x10;
                  *(undefined8 *)(ppuVar75 + 8) = 0;
                  *(undefined8 *)(ppuVar75 + 10) = 0;
                  *(undefined8 *)(ppuVar75 + 0xc) = 0;
                  *(undefined8 *)(ppuVar75 + 0xe) = 0;
                  uVar108 = VectorCopyNarrow(auVar118,4);
                  uVar109 = VectorCopyNarrow(auVar111,4);
                  auVar116._0_8_ = VectorCopyNarrow(auVar100,4);
                  auVar116._8_8_ = VectorCopyNarrow(auVar107,4);
                  auVar118 = VectorAdd(auVar118,auVar1,4);
                  auVar25._8_8_ = uVar109;
                  auVar25._0_8_ = uVar108;
                  uVar108 = VectorCopyNarrow(auVar25,2);
                  uVar109 = VectorCopyNarrow(auVar116,2);
                  auVar120 = auVar120 | auVar20;
                  *(longlong *)(puVar86 + -0x10) = auVar120._0_8_;
                  *(longlong *)(puVar86 + -0xc) = auVar120._8_8_;
                  auVar113 = auVar20 | auVar113;
                  *(longlong *)(puVar86 + -8) = auVar113._0_8_;
                  *(longlong *)(puVar86 + -4) = auVar113._8_8_;
                  *(undefined8 *)local_130 = uVar108;
                  *(undefined8 *)(local_130 + 8) = uVar109;
                  puVar86 = puVar86 + 0x10;
                  ppuVar75 = ppuVar75 + 0x10;
                  local_130 = local_130 + 0x10;
                } while (uVar64 < uVar67);
                ppuVar95 = ppuVar95 + uVar67 * 4;
                local_140 = local_140 + uVar67 * -0x10;
                ppuVar55 = ppuVar55 + uVar67 * 4;
                if (uVar67 * 0x10 - (local_168 - uVar73) == 0) goto LAB_080331a4;
              }
              uVar47 = (u8)ppuVar95;
              video->vram_map[(int)ppuVar55] = puVar81;
              video->vram_map_allocation_bitmap[(int)ppuVar55] =
                   uVar23 | video->vram_map_allocation_bitmap[(int)ppuVar55];
              puVar78[(int)ppuVar55] = uVar47;
              if (local_140 != 1) {
                video->vram_map[(int)ppuVar55 + 1] = puVar81;
                video->vram_map_allocation_bitmap[(int)ppuVar55 + 1] =
                     uVar23 | video->vram_map_allocation_bitmap[(int)ppuVar55 + 1];
                puVar78[(int)ppuVar55 + 1] = uVar47 + '\x01';
                if (local_140 != 2) {
                  video->vram_map[(int)ppuVar55 + 2] = puVar81;
                  video->vram_map_allocation_bitmap[(int)ppuVar55 + 2] =
                       uVar23 | video->vram_map_allocation_bitmap[(int)ppuVar55 + 2];
                  puVar78[(int)ppuVar55 + 2] = uVar47 + '\x02';
                  if (local_140 != 3) {
                    ppuVar95 = ppuVar55 + 1;
                    video->vram_map[(int)ppuVar55 + 3] = puVar81;
                    video->vram_map_allocation_bitmap[(int)ppuVar55 + 3] =
                         uVar23 | video->vram_map_allocation_bitmap[(int)ppuVar55 + 3];
                    puVar78[(int)ppuVar55 + 3] = uVar47 + '\x03';
                    if (local_140 != 4) {
                      video->vram_map[(int)ppuVar95] = puVar81;
                      video->vram_map_allocation_bitmap[(int)ppuVar95] =
                           uVar23 | video->vram_map_allocation_bitmap[(int)ppuVar95];
                      puVar78[(int)ppuVar95] = uVar47 + '\x04';
                      if (local_140 != 5) {
                        video->vram_map[(int)ppuVar55 + 5] = puVar81;
                        video->vram_map_allocation_bitmap[(int)ppuVar55 + 5] =
                             uVar23 | video->vram_map_allocation_bitmap[(int)ppuVar55 + 5];
                        puVar78[(int)ppuVar55 + 5] = uVar47 + '\x05';
                        if (local_140 != 6) {
                          video->vram_map[(int)ppuVar55 + 6] = puVar81;
                          video->vram_map_allocation_bitmap[(int)ppuVar55 + 6] =
                               uVar23 | video->vram_map_allocation_bitmap[(int)ppuVar55 + 6];
                          puVar78[(int)ppuVar55 + 6] = uVar47 + '\x06';
                          if (local_140 != 7) {
                            ppuVar95 = ppuVar55 + 2;
                            video->vram_map[(int)ppuVar55 + 7] = puVar81;
                            video->vram_map_allocation_bitmap[(int)ppuVar55 + 7] =
                                 uVar23 | video->vram_map_allocation_bitmap[(int)ppuVar55 + 7];
                            puVar78[(int)ppuVar55 + 7] = uVar47 + '\a';
                            if (local_140 != 8) {
                              video->vram_map[(int)ppuVar95] = puVar81;
                              video->vram_map_allocation_bitmap[(int)ppuVar95] =
                                   uVar23 | video->vram_map_allocation_bitmap[(int)ppuVar95];
                              puVar78[(int)ppuVar95] = uVar47 + '\b';
                              if (local_140 != 9) {
                                video->vram_map[(int)ppuVar55 + 9] = puVar81;
                                video->vram_map_allocation_bitmap[(int)ppuVar55 + 9] =
                                     uVar23 | video->vram_map_allocation_bitmap[(int)ppuVar55 + 9];
                                puVar78[(int)ppuVar55 + 9] = uVar47 + '\t';
                                if (local_140 != 10) {
                                  video->vram_map[(int)ppuVar55 + 10] = puVar81;
                                  video->vram_map_allocation_bitmap[(int)ppuVar55 + 10] =
                                       uVar23 | video->vram_map_allocation_bitmap
                                                [(int)ppuVar55 + 10];
                                  puVar78[(int)ppuVar55 + 10] = uVar47 + '\n';
                                  if (local_140 != 0xb) {
                                    ppuVar95 = ppuVar55 + 3;
                                    video->vram_map[(int)ppuVar55 + 0xb] = puVar81;
                                    video->vram_map_allocation_bitmap[(int)ppuVar55 + 0xb] =
                                         uVar23 | video->vram_map_allocation_bitmap
                                                  [(int)ppuVar55 + 0xb];
                                    puVar78[(int)ppuVar55 + 0xb] = uVar47 + '\v';
                                    if (local_140 != 0xc) {
                                      video->vram_map[(int)ppuVar95] = puVar81;
                                      video->vram_map_allocation_bitmap[(int)ppuVar95] =
                                           uVar23 | video->vram_map_allocation_bitmap[(int)ppuVar95]
                                      ;
                                      puVar78[(int)ppuVar95] = uVar47 + '\f';
                                      if (local_140 != 0xd) {
                                        uVar22 = video->vram_map_allocation_bitmap
                                                 [(int)ppuVar55 + 0xd];
                                        video->vram_map[(int)ppuVar55 + 0xd] = puVar81;
                                        video->vram_map_allocation_bitmap[(int)ppuVar55 + 0xd] =
                                             uVar23 | uVar22;
                                        puVar78[(int)ppuVar55 + 0xd] = uVar47 + '\r';
                                        if (local_140 != 0xe) {
                                          uVar22 = video->vram_map_allocation_bitmap
                                                   [(int)ppuVar55 + 0xe];
                                          video->vram_map[(int)ppuVar55 + 0xe] = puVar81;
                                          video->vram_map_allocation_bitmap[(int)ppuVar55 + 0xe] =
                                               uVar23 | uVar22;
                                          puVar78[(int)ppuVar55 + 0xe] = uVar47 + '\x0e';
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
LAB_080331a4:
          iVar74 = 6;
          break;
        case 6:
          goto switchD_0802f8fc_caseD_6;
        default:
switchD_0802f8fc_caseD_7:
          ppuVar87 = (u8 **)0x0;
          uVar63 = 0x6000000;
          local_140 = 0;
          local_d8 = (undefined8 *)0xffffff80;
LAB_08034124:
          uVar67 = (uint)ppuVar87 >> 5;
          local_108 = (u8 *)((uVar73 >> 4) << 0xe);
          unmap_memory_page_region_direct(pmVar54->memory_interface_arm9,uVar63,(u32)local_108);
          uVar64 = 1 << uVar67;
          vram_map_6 = (u8 **)((uint)ppuVar87 & 0x1f);
          goto LAB_08032a10;
        }
LAB_0802f95c:
        uVar49 = CONCAT35(0,CONCAT14(bVar21,iVar74));
        auVar1._8_4_ = ppuVar87;
        auVar1._0_8_ = uVar49;
        auVar1._12_4_ = local_154;
        local_174->vram_bank_maps[0].address_space_type = (int)uVar49;
        local_174->vram_bank_maps[0].map_setting = (int)(uVar49 >> 0x20);
        local_174->vram_bank_maps[0].region_offset = (int)auVar1._8_8_;
        local_174->vram_bank_maps[0].region_size = (int)((ulonglong)auVar1._8_8_ >> 0x20);
LAB_0802f81c:
        local_17c = local_17c >> 1;
        local_178 = local_178 + 1;
        local_174 = (video_struct *)&local_174->vram_bank_maps[0].region_offset;
        local_16c = local_16c + 1;
        vram_map_allocation_bitmap_8 = vram_map_allocation_bitmap_8 + 2;
        vram_map_9 = vram_map_9 + 2;
      } while (local_17c != 0);
    }
  }
  if (iVar50 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


