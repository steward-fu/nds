/*
 * Ghidra decompilation
 *
 * Function : remap_vram_body
 * Address  : 080288ac
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void remap_vram_body(video_struct *video,u8 *vram_buffer,u32 vram_region,u32 vram_map_setting,
                    u32 unmap)

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
  ushort uVar21;
  undefined auVar22 [16];
  undefined auVar23 [16];
  undefined auVar24 [16];
  undefined auVar25 [16];
  undefined auVar26 [16];
  undefined auVar27 [16];
  undefined auVar28 [16];
  undefined auVar29 [16];
  undefined auVar30 [16];
  undefined auVar31 [16];
  u8 uVar32;
  int iVar33;
  u16 *puVar34;
  uint uVar35;
  int iVar36;
  uint uVar37;
  u16 **palette_ram_1;
  u32 vram_offset;
  vram_address_space_type_enum vVar38;
  u32 engine_number;
  u8 **ppuVar39;
  u8 *puVar40;
  u32 engine_number_1;
  u16 **ppuVar41;
  u16 **palette_ram;
  u32 uVar42;
  uint uVar43;
  u32 vram_region_size;
  u32 allocation_mask_6;
  u8 **vram_map_9;
  u8 **vram_map_15;
  uint uVar44;
  u32 uVar45;
  video_2d_bg_layer_struct *bg_layers_1;
  memory_struct *pmVar46;
  memory_struct *memory;
  u8 **vram_map;
  u8 **vram_map_4;
  video_2d_bg_layer_struct *bg_layers;
  u8 **vram_map_6;
  u8 **vram_map_7;
  u8 **vram_map_11;
  int iVar47;
  u8 *puVar48;
  uint uVar49;
  int iVar50;
  u8 **vram_map_16;
  u16 *vram_map_allocation_bitmap_9;
  u16 *vram_map_allocation_bitmap_10;
  u16 *vram_map_allocation_bitmap_11;
  u16 *vram_map_allocation_bitmap_12;
  u16 *vram_map_allocation_bitmap_13;
  u16 *vram_map_allocation_bitmap_14;
  u32 bank_bits_offset_1;
  u8 **ppuVar51;
  u16 *puVar52;
  u32 vram_bank_dirty_bits;
  u16 *vram_map_allocation_bitmap_15;
  u16 **ppuVar53;
  u16 *vram_map_allocation_bitmap_18;
  u16 *puVar54;
  u32 allocation_mask;
  u32 allocation_mask_1;
  u32 allocation_mask_2;
  u32 allocation_mask_3;
  u8 *null_buffer_4;
  u8 *null_buffer_7;
  u8 **ppuVar55;
  u8 *vram_map_dirty_bit_numbers_6;
  u16 *vram_map_allocation_bitmap_16;
  u16 *vram_map_allocation_bitmap_17;
  u8 *vram_map_dirty_bit_numbers_9;
  u8 *puVar56;
  u8 *null_buffer;
  u8 *null_buffer_1;
  u8 *null_buffer_2;
  u32 allocation_mask_4;
  u32 allocation_mask_5;
  u8 *null_buffer_6;
  u32 allocation_mask_7;
  u32 allocation_mask_8;
  u32 bank_bits_offset;
  int iVar57;
  u8 *null_buffer_3;
  int iVar58;
  u16 **ppuVar59;
  ushort uVar60;
  u8 *null_buffer_5;
  u8 *null_buffer_8;
  uint uVar61;
  u8 *vram_map_dirty_bit_numbers;
  u8 *vram_map_dirty_bit_numbers_1;
  u16 **ppuVar62;
  u32 uVar63;
  uint uVar64;
  bool bVar65;
  bool bVar66;
  bool bVar67;
  undefined auVar68 [16];
  undefined auVar69 [16];
  undefined auVar70 [16];
  undefined auVar71 [16];
  undefined8 uVar72;
  undefined8 uVar73;
  undefined8 uVar74;
  undefined auVar75 [16];
  undefined auVar76 [16];
  undefined auVar77 [16];
  undefined auVar78 [16];
  undefined auVar79 [16];
  undefined auVar80 [16];
  undefined auVar81 [16];
  undefined auVar82 [16];
  undefined auVar83 [16];
  undefined auVar84 [16];
  undefined auVar85 [16];
  undefined auVar86 [16];
  undefined auVar87 [16];
  undefined auVar88 [16];
  undefined auVar89 [16];
  undefined auVar90 [16];
  undefined auVar91 [16];
  undefined auVar92 [16];
  undefined auVar93 [16];
  undefined auVar94 [16];
  undefined auVar95 [16];
  undefined auVar96 [16];
  undefined auVar97 [16];
  undefined auVar98 [16];
  undefined auVar99 [16];
  undefined auVar100 [16];
  undefined auVar101 [16];
  u8 *vram_map_dirty_bit_numbers_5;
  uint local_cc;
  u16 *local_c8;
  uint local_c4;
  u8 **vram_map_18;
  u32 dirty_bit_number_3;
  u8 **vram_map_17;
  int local_b0;
  u8 **vram_map_3;
  u8 **vram_map_8;
  uint local_a4;
  uint local_a0;
  u8 *local_9c;
  uint local_98;
  u8 local_94;
  uint local_90;
  u8 *local_8c;
  u8 *local_88;
  u32 vram_region_sizes [9];
  
  iVar33 = __stack_chk_guard;
  ppuVar51 = (u8 **)0x10;
  vram_region_sizes[0] = 0x80;
  vram_region_sizes[1] = 0x80;
  uVar35 = vram_map_setting >> 3;
  vram_region_sizes[2] = 0x80;
  vram_region_sizes[3] = 0x80;
  vram_region_sizes[4] = 0x40;
  vram_region_sizes[5] = 0x10;
  vram_region_sizes[6] = 0x10;
  vram_region_sizes[7] = 0x20;
  local_cc = uVar35 & 3;
  vram_region_sizes[8] = 0x10;
  uVar43 = vram_region_sizes[vram_region];
  pmVar46 = video->memory;
  if ((vram_map_setting & 0x80) == 0) {
    memory = (memory_struct *)0x6;
  }
  else {
    memory = (memory_struct *)(vram_map_setting & 7);
  }
  local_c8 = (u16 *)vram_buffer;
  local_c4 = uVar43;
  if (unmap == 0) goto LAB_08028a3c;
  vVar38 = video->vram_bank_maps[vram_region].address_space_type;
  switch(vVar38) {
  case VRAM_ADDRESS_SPACE_EXTENDED_PALETTE_BG_A:
  case VRAM_ADDRESS_SPACE_EXTENDED_PALETTE_BG_B:
    uVar42 = video->vram_bank_maps[vram_region].region_offset;
    uVar49 = video->vram_bank_maps[vram_region].region_size;
    puVar52 = (u16 *)pmVar46->null_buffer_video_load;
    ppuVar41 = video->extended_palette_bg_slots[vVar38] + uVar42;
    puVar34 = video->extended_palette_bg_allocation_bitmap[vVar38] + uVar42;
    do {
      uVar44 = (uint)*puVar34 & ~(1 << (vram_region & 0xff)) & 0xffffU;
      puVar54 = puVar34 + 1;
      *puVar34 = (ushort)uVar44;
      if (uVar44 == 0) {
        *ppuVar41 = puVar52;
      }
      ppuVar41 = ppuVar41 + 1;
      puVar34 = puVar54;
    } while (puVar54 !=
             video->extended_palette_bg_allocation_bitmap[vVar38] + (uVar49 >> 3) + uVar42);
    ppuVar41 = video->video_2d_engine[vVar38].extended_bg_palettes;
    uVar60 = video->video_2d_engine[vVar38].bg_layers[1].bg_control;
    video->video_2d_engine[vVar38].bg_layers[0].extended_palette =
         ppuVar41[((int)((uint)video->video_2d_engine[vVar38].bg_layers[0].bg_control << 0x12) >>
                  0x1f) * -2];
    video->video_2d_engine[vVar38].bg_layers[1].extended_palette =
         ppuVar41[((int)((uint)uVar60 << 0x12) >> 0x1f) * -2 + 1];
    video->video_2d_engine[vVar38].bg_layers[2].extended_palette = ppuVar41[2];
    video->video_2d_engine[vVar38].bg_layers[3].extended_palette = ppuVar41[3];
    break;
  case VRAM_ADDRESS_SPACE_EXTENDED_PALETTE_OBJ_A:
  case VRAM_ADDRESS_SPACE_EXTENDED_PALETTE_OBJ_B:
    uVar42 = video->vram_bank_maps[vram_region].region_offset;
    uVar49 = video->vram_bank_maps[vram_region].region_size;
    puVar52 = (u16 *)pmVar46->null_buffer_video_load;
    ppuVar41 = video->extended_palette_bg_slots[1] + vVar38 + uVar42 + 2;
    puVar34 = video->extended_palette_bg_allocation_bitmap[1] + vVar38 + uVar42 + 2;
    do {
      uVar44 = (uint)*puVar34 & ~(1 << (vram_region & 0xff)) & 0xffffU;
      puVar54 = puVar34 + 1;
      *puVar34 = (ushort)uVar44;
      if (uVar44 == 0) {
        *ppuVar41 = puVar52;
      }
      ppuVar41 = ppuVar41 + 1;
      puVar34 = puVar54;
    } while (puVar54 !=
             video->extended_palette_bg_allocation_bitmap[1] + vVar38 + (uVar49 >> 3) + uVar42 + 2);
    *(undefined4 *)
     ((int)video + (vVar38 + ~VRAM_ADDRESS_SPACE_EXTENDED_PALETTE_BG_B) * 0x80f70 + 0x1dd4) = 0;
    break;
  case VRAM_ADDRESS_SPACE_TEXTURE:
    uVar42 = video->vram_bank_maps[vram_region].region_offset;
    uVar49 = video->vram_bank_maps[vram_region].region_size;
    ppuVar51 = video->texture_slots + uVar42;
    puVar34 = video->texture_allocation_bitmap + uVar42;
    do {
      uVar44 = (uint)*puVar34 & ~(1 << (vram_region & 0xff)) & 0xffffU;
      puVar52 = puVar34 + 1;
      *puVar34 = (ushort)uVar44;
      if (uVar44 == 0) {
        *ppuVar51 = (u8 *)0x0;
      }
      ppuVar51 = ppuVar51 + 1;
      puVar34 = puVar52;
    } while (puVar52 != video->texture_allocation_bitmap + uVar42 + (uVar49 >> 7));
    (video->texture_cache).texture_slots_allocated =
         (video->texture_cache).texture_slots_allocated & ~(0xff << ((vram_region & 0x1f) << 3));
    break;
  case VRAM_ADDRESS_SPACE_TEXTURE_PALETTE:
    uVar44 = ~(1 << (vram_region & 0xff));
    uVar42 = video->vram_bank_maps[vram_region].region_offset;
    uVar49 = video->vram_bank_maps[vram_region].region_size;
    ppuVar41 = video->texture_palette_slots + uVar42;
    puVar34 = video->texture_palette_allocation_bitmap + uVar42;
    do {
      uVar64 = (uint)*puVar34 & uVar44 & 0xffff;
      puVar52 = puVar34 + 1;
      *puVar34 = (ushort)uVar64;
      if (uVar64 == 0) {
        *ppuVar41 = (u16 *)0x0;
      }
      ppuVar41 = ppuVar41 + 1;
      puVar34 = puVar52;
    } while (puVar52 != video->texture_palette_allocation_bitmap + uVar42 + (uVar49 >> 4));
    if (vram_region != 4) {
      (video->texture_cache).texture_palette_slots_allocated =
           uVar44 & (video->texture_cache).texture_palette_slots_allocated;
      break;
    }
    (video->texture_cache).texture_palette_slots_allocated = 0;
    switch(memory) {
    case (memory_struct *)0x0:
      goto switchD_08028a44_caseD_0;
    case (memory_struct *)0x1:
      goto switchD_08028a44_caseD_1;
    case (memory_struct *)0x2:
      goto switchD_0802e794_caseD_2;
    case (memory_struct *)0x3:
      goto switchD_0802cc80_caseD_3;
    case (memory_struct *)0x4:
      goto switchD_0802cc80_caseD_4;
    case (memory_struct *)0x5:
      goto switchD_0802e794_caseD_5;
    case (memory_struct *)0x6:
      goto switchD_0802cc80_caseD_6;
    default:
      goto switchD_08028a44_caseD_7;
    }
  case VRAM_ADDRESS_SPACE_ARM9:
    uVar44 = video->vram_bank_maps[vram_region].region_offset;
    uVar49 = video->vram_bank_maps[vram_region].region_size >> 4;
    puVar56 = pmVar46->null_buffer_video_load + uVar44 * -0x4000;
    unmap_memory_page_region_direct
              (pmVar46->memory_interface_arm9,uVar44 * 0x4000 + 0x6000000,uVar49 << 0xe);
    if (uVar44 >= 0x200) {
      ppuVar51 = video->vram_map + 0x3da;
    }
    if (uVar44 < 0x200) {
      uVar64 = uVar44 >> 5;
      ppuVar51 = video->vram_map + 0x3da;
      video->vram_map_dirty_bitmap_fine[uVar64] =
           video->vram_map_dirty_bitmap_fine[uVar64] |
           (1 << (uVar49 & 0xff)) + -1 << (uVar44 & 0x1f);
      video->vram_map_dirty_bitmap_coarse =
           video->vram_map_dirty_bitmap_coarse | 1 << (uVar64 & 0xff);
    }
    ppuVar39 = video->vram_map + uVar44;
    puVar48 = video->vram_map_dirty_bit_numbers + uVar44;
    puVar34 = video->vram_map_allocation_bitmap + uVar44;
    do {
      uVar60 = *puVar34 & ~(ushort)(1 << (vram_region & 0xff));
      *puVar34 = uVar60;
      *ppuVar39 = puVar56;
      puVar56 = puVar56 + -0x4000;
      puVar40 = puVar48 + 1;
      *puVar48 = '\0';
      *(ushort *)(ppuVar51 + 0x36e) = uVar60 | *(ushort *)(ppuVar51 + 0x36e);
      ppuVar39 = ppuVar39 + 1;
      puVar48 = puVar40;
      puVar34 = puVar34 + 1;
    } while (puVar40 != video->vram_map_dirty_bit_numbers + uVar44 + uVar49);
    break;
  case VRAM_ADDRESS_SPACE_ARM7:
    unmap_memory_page_region
              (pmVar46->memory_interface_arm7,
               (video->vram_bank_maps[vram_region].region_offset + 0x1800) * 0x4000,
               video->vram_bank_maps[vram_region].region_size << 10);
    uVar42 = video->vram_bank_maps[vram_region].region_offset;
    uVar49 = video->vram_bank_maps[vram_region].region_size;
    puVar56 = pmVar46->null_buffer_video_load;
    ppuVar51 = video->arm7_vram_slots + uVar42;
    puVar34 = video->arm7_vram_allocation_bitmap + uVar42;
    do {
      uVar44 = (uint)*puVar34 & ~(1 << (vram_region & 0xff)) & 0xffffU;
      puVar52 = puVar34 + 1;
      *puVar34 = (ushort)uVar44;
      if (uVar44 == 0) {
        *ppuVar51 = puVar56;
      }
      ppuVar51 = ppuVar51 + 1;
      puVar34 = puVar52;
    } while (puVar52 != video->arm7_vram_allocation_bitmap + uVar42 + (uVar49 >> 7));
    break;
  case VRAM_ADDRESS_SPACE_ARM9_MIRRORED_16K_A:
    uVar44 = video->vram_bank_maps[vram_region].region_offset;
    uVar49 = video->vram_bank_maps[vram_region].region_size >> 4;
    puVar56 = pmVar46->null_buffer_video_load + uVar44 * -0x4000;
    unmap_memory_page_region_direct
              (pmVar46->memory_interface_arm9,uVar44 * 0x4000 + 0x6000000,uVar49 << 0xe);
    if (uVar44 >= 0x200) {
      ppuVar51 = video->vram_map + 0x3da;
    }
    uVar60 = ~(ushort)(1 << (vram_region & 0xff));
    if (uVar44 < 0x200) {
      uVar64 = uVar44 >> 5;
      ppuVar51 = video->vram_map + 0x3da;
      video->vram_map_dirty_bitmap_fine[uVar64] =
           video->vram_map_dirty_bitmap_fine[uVar64] |
           (1 << (uVar49 & 0xff)) + -1 << (uVar44 & 0x1f);
      video->vram_map_dirty_bitmap_coarse =
           video->vram_map_dirty_bitmap_coarse | 1 << (uVar64 & 0xff);
    }
    puVar34 = video->vram_map_allocation_bitmap + uVar44;
    puVar48 = video->vram_map_dirty_bit_numbers + uVar44;
    ppuVar39 = video->vram_map + uVar44;
    do {
      uVar21 = *puVar34 & uVar60;
      *puVar34 = uVar21;
      *ppuVar39 = puVar56;
      puVar56 = puVar56 + -0x4000;
      puVar40 = puVar48 + 1;
      *puVar48 = '\0';
      *(ushort *)(ppuVar51 + 0x36e) = uVar21 | *(ushort *)(ppuVar51 + 0x36e);
      puVar34 = puVar34 + 1;
      puVar48 = puVar40;
      ppuVar39 = ppuVar39 + 1;
    } while (puVar40 != video->vram_map_dirty_bit_numbers + uVar44 + uVar49);
    uVar42 = video->vram_bank_maps[vram_region].region_offset;
    uVar44 = uVar42 + 3;
    uVar49 = video->vram_bank_maps[vram_region].region_size >> 4;
    puVar56 = video->memory->null_buffer_video_load + uVar44 * -0x4000;
    unmap_memory_page_region_direct
              (video->memory->memory_interface_arm9,uVar44 * 0x4000 + 0x6000000,uVar49 << 0xe);
    if (uVar44 < 0x200) {
      uVar64 = uVar44 >> 5;
      video->vram_map_dirty_bitmap_fine[uVar64] =
           video->vram_map_dirty_bitmap_fine[uVar64] |
           (1 << (uVar49 & 0xff)) + -1 << (uVar44 & 0x1f);
      ppuVar51[0x5e] = (u8 *)((uint)ppuVar51[0x5e] | 1 << (uVar64 & 0xff));
    }
    ppuVar39 = video->vram_map + uVar42 + 2;
    puVar48 = video->vram_map_dirty_bit_numbers + uVar42 + 2;
    puVar34 = video->vram_map_allocation_bitmap + uVar42 + 3;
    do {
      uVar21 = *puVar34 & uVar60;
      *puVar34 = uVar21;
      ppuVar39 = ppuVar39 + 1;
      *ppuVar39 = puVar56;
      puVar56 = puVar56 + -0x4000;
      puVar48 = puVar48 + 1;
      *puVar48 = '\0';
      *(ushort *)(ppuVar51 + 0x36e) = uVar21 | *(ushort *)(ppuVar51 + 0x36e);
      puVar34 = puVar34 + 1;
    } while (puVar48 != video->vram_map_dirty_bit_numbers + uVar49 + uVar42 + 2);
    break;
  case VRAM_ADDRESS_SPACE_ARM9_MIRRORED_16K_B:
    uVar44 = video->vram_bank_maps[vram_region].region_offset;
    uVar49 = video->vram_bank_maps[vram_region].region_size >> 4;
    puVar56 = pmVar46->null_buffer_video_load + uVar44 * -0x4000;
    unmap_memory_page_region_direct
              (pmVar46->memory_interface_arm9,uVar44 * 0x4000 + 0x6000000,uVar49 << 0xe);
    if (uVar44 >= 0x200) {
      ppuVar51 = video->vram_map + 0x3da;
    }
    uVar60 = ~(ushort)(1 << (vram_region & 0xff));
    if (uVar44 < 0x200) {
      uVar64 = uVar44 >> 5;
      ppuVar51 = video->vram_map + 0x3da;
      video->vram_map_dirty_bitmap_fine[uVar64] =
           video->vram_map_dirty_bitmap_fine[uVar64] |
           (1 << (uVar49 & 0xff)) + -1 << (uVar44 & 0x1f);
      video->vram_map_dirty_bitmap_coarse =
           video->vram_map_dirty_bitmap_coarse | 1 << (uVar64 & 0xff);
    }
    puVar34 = video->vram_map_allocation_bitmap + uVar44;
    puVar48 = video->vram_map_dirty_bit_numbers + uVar44;
    ppuVar39 = video->vram_map + uVar44;
    do {
      uVar21 = *puVar34;
      *puVar34 = uVar21 & uVar60;
      *ppuVar39 = puVar56;
      puVar56 = puVar56 + -0x4000;
      puVar40 = puVar48 + 1;
      *puVar48 = '\0';
      *(ushort *)(ppuVar51 + 0x36e) = uVar21 & uVar60 | *(ushort *)(ppuVar51 + 0x36e);
      puVar34 = puVar34 + 1;
      puVar48 = puVar40;
      ppuVar39 = ppuVar39 + 1;
    } while (puVar40 != video->vram_map_dirty_bit_numbers + uVar44 + uVar49);
    uVar42 = video->vram_bank_maps[vram_region].region_offset;
    uVar44 = uVar42 + 1;
    uVar49 = video->vram_bank_maps[vram_region].region_size >> 4;
    puVar56 = video->memory->null_buffer_video_load + uVar44 * -0x4000;
    unmap_memory_page_region_direct
              (video->memory->memory_interface_arm9,uVar44 * 0x4000 + 0x6000000,uVar49 << 0xe);
    if (uVar44 < 0x200) {
      uVar64 = uVar44 >> 5;
      video->vram_map_dirty_bitmap_fine[uVar64] =
           video->vram_map_dirty_bitmap_fine[uVar64] |
           (1 << (uVar49 & 0xff)) + -1 << (uVar44 & 0x1f);
      ppuVar51[0x5e] = (u8 *)((uint)ppuVar51[0x5e] | 1 << (uVar64 & 0xff));
    }
    ppuVar39 = video->vram_map + uVar42;
    puVar48 = video->vram_map_dirty_bit_numbers + uVar42;
    puVar34 = video->vram_map_allocation_bitmap + uVar42 + 1;
    do {
      uVar21 = *puVar34;
      *puVar34 = uVar21 & uVar60;
      ppuVar39 = ppuVar39 + 1;
      *ppuVar39 = puVar56;
      puVar56 = puVar56 + -0x4000;
      puVar48 = puVar48 + 1;
      *puVar48 = '\0';
      *(ushort *)(ppuVar51 + 0x36e) = uVar21 & uVar60 | *(ushort *)(ppuVar51 + 0x36e);
      puVar34 = puVar34 + 1;
    } while (puVar48 != video->vram_map_dirty_bit_numbers + uVar42 + uVar49);
    uVar42 = video->vram_bank_maps[vram_region].region_offset;
    uVar44 = uVar42 + 4;
    uVar49 = video->vram_bank_maps[vram_region].region_size >> 4;
    puVar56 = video->memory->null_buffer_video_load + uVar44 * -0x4000;
    unmap_memory_page_region_direct
              (video->memory->memory_interface_arm9,uVar44 * 0x4000 + 0x6000000,uVar49 << 0xe);
    if (uVar44 < 0x200) {
      uVar64 = uVar44 >> 5;
      video->vram_map_dirty_bitmap_fine[uVar64] =
           video->vram_map_dirty_bitmap_fine[uVar64] |
           (1 << (uVar49 & 0xff)) + -1 << (uVar44 & 0x1f);
      ppuVar51[0x5e] = (u8 *)((uint)ppuVar51[0x5e] | 1 << (uVar64 & 0xff));
    }
    ppuVar39 = video->vram_map + uVar42 + 3;
    puVar48 = video->vram_map_dirty_bit_numbers + uVar42 + 3;
    puVar34 = video->vram_map_allocation_bitmap + uVar42 + 4;
    do {
      uVar21 = *puVar34;
      *puVar34 = uVar21 & uVar60;
      ppuVar39 = ppuVar39 + 1;
      *ppuVar39 = puVar56;
      puVar56 = puVar56 + -0x4000;
      puVar48 = puVar48 + 1;
      *puVar48 = '\0';
      *(ushort *)(ppuVar51 + 0x36e) = uVar21 & uVar60 | *(ushort *)(ppuVar51 + 0x36e);
      puVar34 = puVar34 + 1;
    } while (puVar48 != video->vram_map_dirty_bit_numbers + uVar49 + uVar42 + 3);
    uVar42 = video->vram_bank_maps[vram_region].region_offset;
    uVar44 = uVar42 + 5;
    uVar49 = video->vram_bank_maps[vram_region].region_size >> 4;
    puVar56 = video->memory->null_buffer_video_load + uVar44 * -0x4000;
    unmap_memory_page_region_direct
              (video->memory->memory_interface_arm9,uVar44 * 0x4000 + 0x6000000,uVar49 << 0xe);
    if (uVar44 < 0x200) {
      uVar64 = uVar44 >> 5;
      video->vram_map_dirty_bitmap_fine[uVar64] =
           video->vram_map_dirty_bitmap_fine[uVar64] |
           (1 << (uVar49 & 0xff)) + -1 << (uVar44 & 0x1f);
      ppuVar51[0x5e] = (u8 *)((uint)ppuVar51[0x5e] | 1 << (uVar64 & 0xff));
    }
    ppuVar39 = video->vram_map + uVar42 + 4;
    puVar48 = video->vram_map_dirty_bit_numbers + uVar42 + 4;
    puVar34 = video->vram_map_allocation_bitmap + uVar42 + 5;
    do {
      uVar21 = *puVar34;
      *puVar34 = uVar21 & uVar60;
      ppuVar39 = ppuVar39 + 1;
      *ppuVar39 = puVar56;
      puVar56 = puVar56 + -0x4000;
      puVar48 = puVar48 + 1;
      *puVar48 = '\0';
      *(ushort *)(ppuVar51 + 0x36e) = uVar21 & uVar60 | *(ushort *)(ppuVar51 + 0x36e);
      puVar34 = puVar34 + 1;
    } while (puVar48 != video->vram_map_dirty_bit_numbers + uVar49 + uVar42 + 4);
    break;
  case VRAM_ADDRESS_SPACE_ARM9_MIRRORED_32K:
    uVar44 = video->vram_bank_maps[vram_region].region_offset;
    uVar49 = video->vram_bank_maps[vram_region].region_size >> 4;
    puVar56 = pmVar46->null_buffer_video_load + uVar44 * -0x4000;
    unmap_memory_page_region_direct
              (pmVar46->memory_interface_arm9,uVar44 * 0x4000 + 0x6000000,uVar49 << 0xe);
    if (uVar44 >= 0x200) {
      ppuVar51 = video->vram_map + 0x3da;
    }
    uVar60 = ~(ushort)(1 << (vram_region & 0xff));
    if (uVar44 < 0x200) {
      uVar64 = uVar44 >> 5;
      ppuVar51 = video->vram_map + 0x3da;
      video->vram_map_dirty_bitmap_fine[uVar64] =
           video->vram_map_dirty_bitmap_fine[uVar64] |
           (1 << (uVar49 & 0xff)) + -1 << (uVar44 & 0x1f);
      video->vram_map_dirty_bitmap_coarse =
           video->vram_map_dirty_bitmap_coarse | 1 << (uVar64 & 0xff);
    }
    puVar34 = video->vram_map_allocation_bitmap + uVar44;
    puVar48 = video->vram_map_dirty_bit_numbers + uVar44;
    ppuVar39 = video->vram_map + uVar44;
    do {
      uVar21 = *puVar34 & uVar60;
      *puVar34 = uVar21;
      *ppuVar39 = puVar56;
      puVar56 = puVar56 + -0x4000;
      puVar40 = puVar48 + 1;
      *puVar48 = '\0';
      *(ushort *)(ppuVar51 + 0x36e) = uVar21 | *(ushort *)(ppuVar51 + 0x36e);
      puVar34 = puVar34 + 1;
      puVar48 = puVar40;
      ppuVar39 = ppuVar39 + 1;
    } while (puVar40 != video->vram_map_dirty_bit_numbers + uVar44 + uVar49);
    uVar42 = video->vram_bank_maps[vram_region].region_offset;
    uVar44 = uVar42 + 4;
    uVar49 = video->vram_bank_maps[vram_region].region_size >> 4;
    puVar56 = video->memory->null_buffer_video_load + uVar44 * -0x4000;
    unmap_memory_page_region_direct
              (video->memory->memory_interface_arm9,uVar44 * 0x4000 + 0x6000000,uVar49 << 0xe);
    if (uVar44 < 0x200) {
      uVar64 = uVar44 >> 5;
      video->vram_map_dirty_bitmap_fine[uVar64] =
           video->vram_map_dirty_bitmap_fine[uVar64] |
           (1 << (uVar49 & 0xff)) + -1 << (uVar44 & 0x1f);
      ppuVar51[0x5e] = (u8 *)((uint)ppuVar51[0x5e] | 1 << (uVar64 & 0xff));
    }
    ppuVar39 = video->vram_map + uVar42 + 3;
    puVar48 = video->vram_map_dirty_bit_numbers + uVar42 + 3;
    puVar34 = video->vram_map_allocation_bitmap + uVar42 + 4;
    do {
      uVar21 = *puVar34 & uVar60;
      *puVar34 = uVar21;
      ppuVar39 = ppuVar39 + 1;
      *ppuVar39 = puVar56;
      puVar56 = puVar56 + -0x4000;
      puVar48 = puVar48 + 1;
      *puVar48 = '\0';
      *(ushort *)(ppuVar51 + 0x36e) = uVar21 | *(ushort *)(ppuVar51 + 0x36e);
      puVar34 = puVar34 + 1;
    } while (puVar48 != video->vram_map_dirty_bit_numbers + uVar49 + uVar42 + 3);
    break;
  default:
    switch(memory) {
    case (memory_struct *)0x0:
      goto LAB_08028ef8;
    case (memory_struct *)0x1:
      goto LAB_08028f2c;
    case (memory_struct *)0x2:
      goto switchD_0802cc80_caseD_2;
    case (memory_struct *)0x3:
      goto switchD_0802cc80_caseD_3;
    case (memory_struct *)0x4:
      goto switchD_0802cc80_caseD_4;
    case (memory_struct *)0x5:
      goto switchD_0802cc80_caseD_5;
    case (memory_struct *)0x6:
      goto switchD_0802cc80_caseD_6;
    default:
      iVar57 = 0;
      uVar42 = 0x6000000;
      local_cc = 0;
      vram_map_3 = (u8 **)0xffffff80;
    }
    goto LAB_0802dac8;
  }
LAB_08028a3c:
  switch(memory) {
  case (memory_struct *)0x0:
switchD_08028a44_caseD_0:
    pmVar46 = video->memory;
LAB_08028ef8:
    switch(vram_region) {
    case 0:
    case 1:
    case 2:
    case 3:
      local_cc = (vram_region + 0x40) * 8;
      uVar42 = (local_cc + 0x1800) * 0x4000;
      vram_map_3 = (u8 **)(local_cc - 0x80);
      iVar57 = (local_cc + 0x1800) * -0x4000 + 0x6000000;
      break;
    case 4:
      iVar57 = -0x880000;
      vram_map_3 = (u8 **)0x1a0;
      uVar42 = 0x6880000;
      local_cc = 0x220;
      break;
    case 5:
    case 6:
      local_cc = vram_region + 0x21f;
      uVar42 = (vram_region + 0x1a1f) * 0x4000;
      vram_map_3 = (u8 **)(vram_region + 0x19f);
      iVar57 = (vram_region + 0x1a1f) * -0x4000 + 0x6000000;
      break;
    case 7:
      iVar57 = -0x898000;
      vram_map_3 = (u8 **)0x1a6;
      uVar42 = 0x6898000;
      local_cc = 0x226;
      break;
    case 8:
      iVar57 = -0x8a0000;
      vram_map_3 = (u8 **)0x1a8;
      uVar42 = 0x68a0000;
      local_cc = 0x228;
      break;
    default:
switchD_08028f30_caseD_4:
      iVar57 = 0;
      uVar42 = 0x6000000;
      local_cc = 0;
      vram_map_3 = (u8 **)0xffffff80;
      goto LAB_0802dac8;
    }
    uVar60 = (ushort)(1 << (vram_region & 0xff));
    vram_map_8 = (u8 **)((uVar43 >> 4) << 0xe);
    unmap_memory_page_region_direct(pmVar46->memory_interface_arm9,uVar42,(u32)vram_map_8);
    goto LAB_0802c4ec;
  case (memory_struct *)0x1:
switchD_08028a44_caseD_1:
    pmVar46 = video->memory;
LAB_08028f2c:
    switch(vram_region) {
    case 0:
    case 1:
    case 2:
    case 3:
      local_cc = local_cc << 3;
LAB_0802dab0:
      uVar42 = (local_cc + 0x1800) * 0x4000;
      vram_map_3 = (u8 **)(local_cc - 0x80);
      iVar57 = (local_cc + 0x1800) * -0x4000 + 0x6000000;
      break;
    default:
      goto switchD_08028f30_caseD_4;
    case 5:
    case 6:
      local_cc = (uVar35 & 1) + (uVar35 & 2) * 2;
LAB_0802ccb8:
      uVar43 = uVar43 >> 4;
      uVar42 = (local_cc + 0x1800) * 0x4000;
      unmap_memory_page_region_direct(pmVar46->memory_interface_arm9,uVar42,uVar43 << 0xe);
      uVar35 = local_cc >> 5;
      iVar50 = (1 << (uVar43 & 0xff)) + -1;
      iVar57 = (uVar43 + 0x26 + local_cc) * 4;
      iVar36 = uVar43 + 0x8be + local_cc;
      uVar63 = vram_region * 8;
      video->vram_map_dirty_bitmap_fine[uVar35] =
           video->vram_map_dirty_bitmap_fine[uVar35] | iVar50 << (local_cc & 0x1f);
      iVar58 = local_cc + 0x197c;
      bVar67 = SBORROW4(iVar57,local_cc * 2 + 0x117c);
      iVar47 = iVar57 + (local_cc + 0x8be) * -2;
      bVar65 = iVar47 < 0;
      bVar66 = iVar47 == 0;
      if (bVar66 || bVar65 != bVar67) {
        bVar67 = SBORROW4(iVar57,iVar58);
        bVar65 = iVar57 - iVar58 < 0;
        bVar66 = iVar57 - iVar58 == 0;
      }
      video->vram_map_dirty_bitmap_coarse = video->vram_map_dirty_bitmap_coarse | 1 << uVar35;
      uVar60 = (ushort)(1 << (vram_region & 0xff));
      puVar56 = vram_buffer + -(uVar42 + 0xfa000000);
      dirty_bit_number_3._0_1_ = (u8)uVar63;
      if (iVar58 + iVar36 * -2 < 0 != SBORROW4(iVar58,iVar36 * 2) ||
          (!bVar66 && bVar65 == bVar67 || uVar43 < 0x14)) {
        puVar34 = video->vram_map_allocation_bitmap + local_cc;
        uVar45 = uVar63;
        ppuVar51 = video->vram_map + local_cc;
        puVar48 = video->vram_map_dirty_bit_numbers + local_cc;
        do {
          uVar21 = *puVar34;
          *ppuVar51 = puVar56;
          *puVar34 = uVar60 | uVar21;
          *puVar48 = (u8)uVar45;
          uVar45 = uVar45 + 1;
          puVar34 = puVar34 + 1;
          ppuVar51 = ppuVar51 + 1;
          puVar48 = puVar48 + 1;
        } while (uVar45 != uVar43 + uVar63);
      }
      else {
        uVar35 = -((uint)((int)(video->vram_map_allocation_bitmap + local_cc) * 0x20000000) >> 0x1e)
                 & 7;
        if (uVar43 <= uVar35) {
          uVar35 = uVar43;
        }
        uVar49 = uVar43;
        uVar45 = uVar63;
        uVar44 = local_cc;
        if (uVar35 != 0) {
          video->vram_map[local_cc] = puVar56;
          uVar49 = uVar43 - 1;
          uVar45 = uVar63 + 1;
          uVar44 = local_cc + 1;
          video->vram_map_allocation_bitmap[local_cc] =
               uVar60 | video->vram_map_allocation_bitmap[local_cc];
          video->vram_map_dirty_bit_numbers[local_cc] = (u8)dirty_bit_number_3;
          if (uVar35 != 1) {
            uVar21 = video->vram_map_allocation_bitmap[local_cc + 1];
            video->vram_map[local_cc + 1] = puVar56;
            uVar49 = uVar43 - 2;
            video->vram_map_allocation_bitmap[local_cc + 1] = uVar60 | uVar21;
            video->vram_map_dirty_bit_numbers[local_cc + 1] = (u8)uVar45;
            uVar45 = uVar63 + 2;
            uVar44 = local_cc + 2;
            if (uVar35 != 2) {
              uVar21 = video->vram_map_allocation_bitmap[local_cc + 2];
              video->vram_map[local_cc + 2] = puVar56;
              uVar49 = uVar43 - 3;
              video->vram_map_allocation_bitmap[local_cc + 2] = uVar60 | uVar21;
              video->vram_map_dirty_bit_numbers[local_cc + 2] = (u8)uVar45;
              uVar44 = local_cc + 3;
              uVar45 = uVar63 + 3;
              if (uVar35 != 3) {
                video->vram_map[local_cc + 3] = puVar56;
                uVar49 = uVar43 - 4;
                video->vram_map_allocation_bitmap[local_cc + 3] =
                     uVar60 | video->vram_map_allocation_bitmap[local_cc + 3];
                video->vram_map_dirty_bit_numbers[local_cc + 3] = (u8)uVar45;
                uVar45 = uVar63 + 4;
                uVar44 = local_cc + 4;
                if (uVar35 != 4) {
                  video->vram_map[local_cc + 4] = puVar56;
                  uVar49 = uVar43 - 5;
                  video->vram_map_allocation_bitmap[local_cc + 4] =
                       uVar60 | video->vram_map_allocation_bitmap[local_cc + 4];
                  video->vram_map_dirty_bit_numbers[local_cc + 4] = (u8)uVar45;
                  uVar45 = uVar63 + 5;
                  uVar44 = local_cc + 5;
                  if (uVar35 != 5) {
                    video->vram_map[local_cc + 5] = puVar56;
                    uVar49 = uVar43 - 6;
                    video->vram_map_allocation_bitmap[local_cc + 5] =
                         uVar60 | video->vram_map_allocation_bitmap[local_cc + 5];
                    video->vram_map_dirty_bit_numbers[local_cc + 5] = (u8)uVar45;
                    uVar45 = uVar63 + 6;
                    uVar44 = local_cc + 6;
                    if (uVar35 == 7) {
                      video->vram_map[local_cc + 6] = puVar56;
                      uVar49 = uVar43 - 7;
                      video->vram_map_allocation_bitmap[local_cc + 6] =
                           uVar60 | video->vram_map_allocation_bitmap[local_cc + 6];
                      video->vram_map_dirty_bit_numbers[local_cc + 6] = (u8)uVar45;
                      uVar45 = uVar63 + 7;
                      uVar44 = local_cc + 7;
                    }
                  }
                }
              }
            }
          }
          if (uVar43 == uVar35) goto LAB_0802d410;
        }
        local_a4 = uVar43 - 1;
        uVar64 = ((uVar43 - uVar35) - 0x10 >> 4) + 1;
        iVar57 = uVar64 * 0x10;
        if (0xe < local_a4 - uVar35) {
          auVar13._4_4_ = uVar45;
          auVar13._0_4_ = uVar45;
          auVar13._8_8_ = 0;
          auVar1 = SIMDExpandImmediate(0,0,0x10);
          auVar2 = SIMDExpandImmediate(0,0,4);
          auVar87._8_8_ = 0x300000002;
          auVar87._0_8_ = 0x100000000;
          auVar89 = SIMDExpandImmediate(0,0,8);
          auVar14._4_4_ = CONCAT22(uVar60,uVar60);
          auVar14._0_4_ = CONCAT22(uVar60,uVar60);
          auVar14._8_8_ = 0;
          auVar14 = auVar14 & auVar14 << 0x40;
          auVar84 = SIMDExpandImmediate(0,0,0xc);
          puVar52 = video->vram_map_allocation_bitmap + uVar35 + local_cc + 0x10;
          local_88 = video->vram_map_dirty_bit_numbers + iVar58 + uVar35 + -0x197c;
          auVar86 = VectorAdd(auVar13 & auVar13 << 0x40,auVar87,4);
          uVar61 = 0;
          ppuVar51 = video->vram_map + uVar35 + local_cc;
          puVar34 = puVar52;
          do {
            auVar101 = *(undefined (*) [16])(puVar52 + -0x10);
            auVar81 = VectorAdd(auVar86,auVar2,4);
            auVar83 = VectorAdd(auVar86,auVar89,4);
            uVar61 = uVar61 + 1;
            auVar99 = *(undefined (*) [16])(puVar52 + -8);
            *(undefined8 *)ppuVar51 = 0;
            *(undefined8 *)(ppuVar51 + 2) = 0;
            puVar52 = puVar52 + 0x10;
            auVar69._0_8_ = VectorCopyNarrow(auVar86,4);
            auVar69._8_8_ = VectorCopyNarrow(auVar81,4);
            auVar81 = VectorAdd(auVar86,auVar84,4);
            *(undefined8 *)(ppuVar51 + 4) = 0;
            *(undefined8 *)(ppuVar51 + 6) = 0;
            auVar86 = VectorAdd(auVar86,auVar1,4);
            auVar101 = auVar101 | auVar14;
            uVar72 = VectorCopyNarrow(auVar83,4);
            uVar73 = VectorCopyNarrow(auVar81,4);
            *(undefined8 *)(ppuVar51 + 8) = 0;
            *(undefined8 *)(ppuVar51 + 10) = 0;
            uVar74 = VectorCopyNarrow(auVar69,2);
            auVar24._8_8_ = uVar73;
            auVar24._0_8_ = uVar72;
            uVar72 = VectorCopyNarrow(auVar24,2);
            *(undefined8 *)(ppuVar51 + 0xc) = 0;
            *(undefined8 *)(ppuVar51 + 0xe) = 0;
            auVar99 = auVar14 | auVar99;
            *(longlong *)(puVar34 + -0x10) = auVar101._0_8_;
            *(longlong *)(puVar34 + -0xc) = auVar101._8_8_;
            *(longlong *)(puVar34 + -8) = auVar99._0_8_;
            *(longlong *)(puVar34 + -4) = auVar99._8_8_;
            *(undefined8 *)local_88 = uVar74;
            *(undefined8 *)(local_88 + 8) = uVar72;
            local_88 = local_88 + 0x10;
            ppuVar51 = ppuVar51 + 0x10;
            puVar34 = puVar34 + 0x10;
          } while (uVar61 < uVar64);
          uVar44 = uVar44 + iVar57;
          uVar49 = uVar49 + uVar64 * -0x10;
          uVar45 = uVar45 + iVar57;
          if (uVar43 - uVar35 == iVar57) goto LAB_0802d410;
        }
        uVar32 = (u8)uVar45;
        uVar21 = video->vram_map_allocation_bitmap[uVar44];
        video->vram_map[uVar44] = puVar56;
        video->vram_map_allocation_bitmap[uVar44] = uVar60 | uVar21;
        video->vram_map_dirty_bit_numbers[uVar44] = uVar32;
        if (uVar49 != 1) {
          uVar21 = video->vram_map_allocation_bitmap[uVar44 + 1];
          video->vram_map[uVar44 + 1] = puVar56;
          local_a4._0_1_ = uVar32 + '\x02';
          video->vram_map_allocation_bitmap[uVar44 + 1] = uVar60 | uVar21;
          video->vram_map_dirty_bit_numbers[uVar44 + 1] = uVar32 + '\x01';
          if (uVar49 != 2) {
            uVar21 = video->vram_map_allocation_bitmap[uVar44 + 2];
            video->vram_map[uVar44 + 2] = puVar56;
            video->vram_map_allocation_bitmap[uVar44 + 2] = uVar60 | uVar21;
            video->vram_map_dirty_bit_numbers[uVar44 + 2] = (u8)local_a4;
            if (uVar49 != 3) {
              uVar21 = video->vram_map_allocation_bitmap[uVar44 + 3];
              video->vram_map[uVar44 + 3] = puVar56;
              local_a4._0_1_ = uVar32 + '\x04';
              video->vram_map_allocation_bitmap[uVar44 + 3] = uVar60 | uVar21;
              video->vram_map_dirty_bit_numbers[uVar44 + 3] = uVar32 + '\x03';
              if (uVar49 != 4) {
                uVar21 = video->vram_map_allocation_bitmap[uVar44 + 4];
                video->vram_map[uVar44 + 4] = puVar56;
                video->vram_map_allocation_bitmap[uVar44 + 4] = uVar60 | uVar21;
                video->vram_map_dirty_bit_numbers[uVar44 + 4] = (u8)local_a4;
                if (uVar49 != 5) {
                  uVar21 = video->vram_map_allocation_bitmap[uVar44 + 5];
                  video->vram_map[uVar44 + 5] = puVar56;
                  local_a4._0_1_ = uVar32 + '\x06';
                  video->vram_map_allocation_bitmap[uVar44 + 5] = uVar60 | uVar21;
                  video->vram_map_dirty_bit_numbers[uVar44 + 5] = uVar32 + '\x05';
                  if (uVar49 != 6) {
                    uVar21 = video->vram_map_allocation_bitmap[uVar44 + 6];
                    video->vram_map[uVar44 + 6] = puVar56;
                    video->vram_map_allocation_bitmap[uVar44 + 6] = uVar60 | uVar21;
                    video->vram_map_dirty_bit_numbers[uVar44 + 6] = (u8)local_a4;
                    if (uVar49 != 7) {
                      uVar21 = video->vram_map_allocation_bitmap[uVar44 + 7];
                      video->vram_map[uVar44 + 7] = puVar56;
                      local_a4._0_1_ = uVar32 + '\b';
                      video->vram_map_allocation_bitmap[uVar44 + 7] = uVar60 | uVar21;
                      video->vram_map_dirty_bit_numbers[uVar44 + 7] = uVar32 + '\a';
                      if (uVar49 != 8) {
                        uVar21 = video->vram_map_allocation_bitmap[uVar44 + 8];
                        video->vram_map[uVar44 + 8] = puVar56;
                        video->vram_map_allocation_bitmap[uVar44 + 8] = uVar60 | uVar21;
                        video->vram_map_dirty_bit_numbers[uVar44 + 8] = (u8)local_a4;
                        if (uVar49 != 9) {
                          uVar21 = video->vram_map_allocation_bitmap[uVar44 + 9];
                          video->vram_map[uVar44 + 9] = puVar56;
                          local_a4._0_1_ = uVar32 + '\n';
                          video->vram_map_allocation_bitmap[uVar44 + 9] = uVar60 | uVar21;
                          video->vram_map_dirty_bit_numbers[uVar44 + 9] = uVar32 + '\t';
                          if (uVar49 != 10) {
                            uVar21 = video->vram_map_allocation_bitmap[uVar44 + 10];
                            video->vram_map[uVar44 + 10] = puVar56;
                            video->vram_map_allocation_bitmap[uVar44 + 10] = uVar60 | uVar21;
                            video->vram_map_dirty_bit_numbers[uVar44 + 10] = (u8)local_a4;
                            if (uVar49 != 0xb) {
                              uVar21 = video->vram_map_allocation_bitmap[uVar44 + 0xb];
                              video->vram_map[uVar44 + 0xb] = puVar56;
                              local_a4._0_1_ = uVar32 + '\f';
                              video->vram_map_allocation_bitmap[uVar44 + 0xb] = uVar60 | uVar21;
                              video->vram_map_dirty_bit_numbers[uVar44 + 0xb] = uVar32 + '\v';
                              if (uVar49 != 0xc) {
                                uVar21 = video->vram_map_allocation_bitmap[uVar44 + 0xc];
                                video->vram_map[uVar44 + 0xc] = puVar56;
                                video->vram_map_allocation_bitmap[uVar44 + 0xc] = uVar60 | uVar21;
                                video->vram_map_dirty_bit_numbers[uVar44 + 0xc] = (u8)local_a4;
                                if (uVar49 != 0xd) {
                                  video->vram_map[uVar44 + 0xd] = puVar56;
                                  video->vram_map_allocation_bitmap[uVar44 + 0xd] =
                                       uVar60 | video->vram_map_allocation_bitmap[uVar44 + 0xd];
                                  video->vram_map_dirty_bit_numbers[uVar44 + 0xd] = uVar32 + '\r';
                                  if (uVar49 != 0xe) {
                                    video->vram_map[uVar44 + 0xe] = puVar56;
                                    video->vram_map_allocation_bitmap[uVar44 + 0xe] =
                                         uVar60 | video->vram_map_allocation_bitmap[uVar44 + 0xe];
                                    video->vram_map_dirty_bit_numbers[uVar44 + 0xe] =
                                         uVar32 + '\x0e';
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
LAB_0802d410:
      local_a0 = local_cc + 3;
      unmap_memory_page_region_direct
                (video->memory->memory_interface_arm9,uVar42 + 0xc000,uVar43 << 0xe);
      uVar35 = local_a0 >> 5;
      iVar57 = (uVar43 + 0x29 + local_cc) * 4;
      iVar58 = local_cc + 0x197f;
      iVar36 = uVar43 + 0x8c1 + local_cc;
      video->vram_map_dirty_bitmap_fine[uVar35] =
           video->vram_map_dirty_bitmap_fine[uVar35] | iVar50 << (local_a0 & 0x1f);
      iVar47 = local_cc * 2 + 0x1182;
      if (iVar57 <= iVar47) {
        iVar47 = iVar58;
      }
      video->vram_map_dirty_bitmap_coarse = video->vram_map_dirty_bitmap_coarse | 1 << uVar35;
      puVar56 = vram_buffer + (-0xc000 - (uVar42 + 0xfa000000));
      if (iVar58 + iVar36 * -2 < 0 != SBORROW4(iVar58,iVar36 * 2) ||
          (uVar43 < 0x14 || iVar47 < iVar57)) {
        uVar42 = uVar43 + uVar63;
        ppuVar51 = video->vram_map + local_cc + 2;
        puVar48 = video->vram_map_dirty_bit_numbers + local_cc + 2;
        puVar34 = video->vram_map_allocation_bitmap + local_cc + 3;
        do {
          uVar21 = *puVar34;
          ppuVar51 = ppuVar51 + 1;
          *ppuVar51 = puVar56;
          *puVar34 = uVar60 | uVar21;
          puVar48 = puVar48 + 1;
          *puVar48 = (u8)uVar63;
          uVar63 = uVar63 + 1;
          puVar34 = puVar34 + 1;
        } while (uVar63 != uVar42);
      }
      else {
        uVar35 = -((uint)((int)(video->vram_map_allocation_bitmap + local_cc + 3) * 0x20000000) >>
                  0x1e) & 7;
        if (uVar43 <= uVar35) {
          uVar35 = uVar43;
        }
        uVar49 = uVar43;
        if (uVar35 != 0) {
          uVar49 = uVar43 - 1;
          uVar21 = video->vram_map_allocation_bitmap[local_cc + 3];
          video->vram_map[local_cc + 3] = puVar56;
          video->vram_map_allocation_bitmap[local_cc + 3] = uVar60 | uVar21;
          video->vram_map_dirty_bit_numbers[local_cc + 3] = (u8)dirty_bit_number_3;
          local_a0 = local_cc + 4;
          dirty_bit_number_3 = uVar63 + 1;
          if (uVar35 != 1) {
            uVar21 = video->vram_map_allocation_bitmap[local_cc + 4];
            video->vram_map[local_cc + 4] = puVar56;
            video->vram_map_allocation_bitmap[local_cc + 4] = uVar60 | uVar21;
            dirty_bit_number_3 = uVar63 + 2;
            video->vram_map_dirty_bit_numbers[local_cc + 4] = (u8)(uVar63 + 1);
            uVar49 = uVar43 - 2;
            local_a0 = local_cc + 5;
            if (uVar35 != 2) {
              uVar21 = video->vram_map_allocation_bitmap[local_cc + 5];
              video->vram_map[local_cc + 5] = puVar56;
              video->vram_map_allocation_bitmap[local_cc + 5] = uVar60 | uVar21;
              video->vram_map_dirty_bit_numbers[local_cc + 5] = (u8)dirty_bit_number_3;
              uVar49 = uVar43 - 3;
              local_a0 = local_cc + 6;
              dirty_bit_number_3 = uVar63 + 3;
              if (uVar35 != 3) {
                uVar21 = video->vram_map_allocation_bitmap[local_cc + 6];
                video->vram_map[local_cc + 6] = puVar56;
                video->vram_map_allocation_bitmap[local_cc + 6] = uVar60 | uVar21;
                dirty_bit_number_3 = uVar63 + 4;
                video->vram_map_dirty_bit_numbers[local_cc + 6] = (u8)(uVar63 + 3);
                uVar49 = uVar43 - 4;
                local_a0 = local_cc + 7;
                if (uVar35 != 4) {
                  uVar21 = video->vram_map_allocation_bitmap[local_cc + 7];
                  video->vram_map[local_cc + 7] = puVar56;
                  video->vram_map_allocation_bitmap[local_cc + 7] = uVar60 | uVar21;
                  video->vram_map_dirty_bit_numbers[local_cc + 7] = (u8)dirty_bit_number_3;
                  uVar49 = uVar43 - 5;
                  local_a0 = local_cc + 8;
                  dirty_bit_number_3 = uVar63 + 5;
                  if (uVar35 != 5) {
                    uVar21 = video->vram_map_allocation_bitmap[local_cc + 8];
                    video->vram_map[local_cc + 8] = puVar56;
                    video->vram_map_allocation_bitmap[local_cc + 8] = uVar60 | uVar21;
                    dirty_bit_number_3 = uVar63 + 6;
                    uVar49 = uVar43 - 6;
                    video->vram_map_dirty_bit_numbers[local_cc + 8] = (u8)(uVar63 + 5);
                    local_a0 = local_cc + 9;
                    if (uVar35 == 7) {
                      uVar21 = video->vram_map_allocation_bitmap[local_cc + 9];
                      video->vram_map[local_cc + 9] = puVar56;
                      video->vram_map_allocation_bitmap[local_cc + 9] = uVar60 | uVar21;
                      video->vram_map_dirty_bit_numbers[local_cc + 9] = (u8)dirty_bit_number_3;
                      local_a0 = local_cc + 10;
                      uVar49 = uVar43 - 7;
                      dirty_bit_number_3 = uVar63 + 7;
                    }
                  }
                }
              }
            }
          }
          uVar63 = dirty_bit_number_3;
          if (uVar43 == uVar35) goto LAB_0802da80;
        }
        dirty_bit_number_3 = uVar63;
        local_a4 = uVar43 - 1;
        uVar44 = ((uVar43 - uVar35) - 0x10 >> 4) + 1;
        iVar57 = uVar44 * 0x10;
        if (0xe < local_a4 - uVar35) {
          auVar1 = SIMDExpandImmediate(0,0,0x10);
          auVar88._8_8_ = 0x300000002;
          auVar88._0_8_ = 0x100000000;
          auVar2 = SIMDExpandImmediate(0,0,4);
          auVar89 = SIMDExpandImmediate(0,0,8);
          auVar15._4_4_ = dirty_bit_number_3;
          auVar15._0_4_ = dirty_bit_number_3;
          auVar15._8_8_ = 0;
          auVar16._4_4_ = CONCAT22(uVar60,uVar60);
          auVar16._0_4_ = CONCAT22(uVar60,uVar60);
          auVar16._8_8_ = 0;
          auVar16 = auVar16 & auVar16 << 0x40;
          auVar84 = SIMDExpandImmediate(0,0,0xc);
          local_c8 = (u16 *)0x0;
          puVar48 = video->vram_map_dirty_bit_numbers + iVar58 + uVar35 + -0x197c;
          auVar86 = VectorAdd(auVar15 & auVar15 << 0x40,auVar88,4);
          ppuVar51 = video->vram_map + uVar35 + local_cc + 3;
          puVar34 = video->vram_map_allocation_bitmap + uVar35 + local_cc + 0x13;
          puVar52 = video->vram_map_allocation_bitmap + uVar35 + local_cc + 0x13;
          do {
            auVar101 = *(undefined (*) [16])(puVar34 + -0x10);
            auVar81 = VectorAdd(auVar86,auVar2,4);
            auVar83 = VectorAdd(auVar86,auVar89,4);
            auVar99 = *(undefined (*) [16])(puVar34 + -8);
            *(undefined8 *)ppuVar51 = 0;
            *(undefined8 *)(ppuVar51 + 2) = 0;
            auVar70._0_8_ = VectorCopyNarrow(auVar86,4);
            auVar70._8_8_ = VectorCopyNarrow(auVar81,4);
            auVar81 = VectorAdd(auVar86,auVar84,4);
            auVar86 = VectorAdd(auVar86,auVar1,4);
            local_c8 = (u16 *)((int)local_c8 + 1);
            uVar72 = VectorCopyNarrow(auVar83,4);
            uVar73 = VectorCopyNarrow(auVar81,4);
            auVar101 = auVar101 | auVar16;
            uVar74 = VectorCopyNarrow(auVar70,2);
            auVar25._8_8_ = uVar73;
            auVar25._0_8_ = uVar72;
            uVar72 = VectorCopyNarrow(auVar25,2);
            auVar99 = auVar16 | auVar99;
            *(undefined8 *)(ppuVar51 + 4) = 0;
            *(undefined8 *)(ppuVar51 + 6) = 0;
            *(undefined8 *)(ppuVar51 + 8) = 0;
            *(undefined8 *)(ppuVar51 + 10) = 0;
            *(undefined8 *)(ppuVar51 + 0xc) = 0;
            *(undefined8 *)(ppuVar51 + 0xe) = 0;
            *(longlong *)(puVar52 + -0x10) = auVar101._0_8_;
            *(longlong *)(puVar52 + -0xc) = auVar101._8_8_;
            *(longlong *)(puVar52 + -8) = auVar99._0_8_;
            *(longlong *)(puVar52 + -4) = auVar99._8_8_;
            *(undefined8 *)puVar48 = uVar74;
            *(undefined8 *)(puVar48 + 8) = uVar72;
            puVar48 = puVar48 + 0x10;
            ppuVar51 = ppuVar51 + 0x10;
            puVar34 = puVar34 + 0x10;
            puVar52 = puVar52 + 0x10;
          } while (local_c8 < uVar44);
          dirty_bit_number_3 = dirty_bit_number_3 + iVar57;
          local_a0 = local_a0 + iVar57;
          uVar49 = uVar49 + uVar44 * -0x10;
          if (uVar43 - uVar35 == iVar57) goto LAB_0802da80;
        }
        uVar21 = video->vram_map_allocation_bitmap[local_a0];
        uVar32 = (u8)dirty_bit_number_3;
        video->vram_map[local_a0] = puVar56;
        video->vram_map_allocation_bitmap[local_a0] = uVar60 | uVar21;
        video->vram_map_dirty_bit_numbers[local_a0] = uVar32;
        if (uVar49 != 1) {
          video->vram_map[local_a0 + 1] = puVar56;
          video->vram_map_allocation_bitmap[local_a0 + 1] =
               uVar60 | video->vram_map_allocation_bitmap[local_a0 + 1];
          video->vram_map_dirty_bit_numbers[local_a0 + 1] = uVar32 + '\x01';
          if (uVar49 != 2) {
            video->vram_map[local_a0 + 2] = puVar56;
            video->vram_map_allocation_bitmap[local_a0 + 2] =
                 uVar60 | video->vram_map_allocation_bitmap[local_a0 + 2];
            video->vram_map_dirty_bit_numbers[local_a0 + 2] = uVar32 + '\x02';
            if (uVar49 != 3) {
              video->vram_map[local_a0 + 3] = puVar56;
              video->vram_map_allocation_bitmap[local_a0 + 3] =
                   uVar60 | video->vram_map_allocation_bitmap[local_a0 + 3];
              video->vram_map_dirty_bit_numbers[local_a0 + 3] = uVar32 + '\x03';
              if (uVar49 != 4) {
                video->vram_map[local_a0 + 4] = puVar56;
                video->vram_map_allocation_bitmap[local_a0 + 4] =
                     uVar60 | video->vram_map_allocation_bitmap[local_a0 + 4];
                video->vram_map_dirty_bit_numbers[local_a0 + 4] = uVar32 + '\x04';
                if (uVar49 != 5) {
                  video->vram_map[local_a0 + 5] = puVar56;
                  video->vram_map_allocation_bitmap[local_a0 + 5] =
                       uVar60 | video->vram_map_allocation_bitmap[local_a0 + 5];
                  video->vram_map_dirty_bit_numbers[local_a0 + 5] = uVar32 + '\x05';
                  if (uVar49 != 6) {
                    video->vram_map[local_a0 + 6] = puVar56;
                    video->vram_map_allocation_bitmap[local_a0 + 6] =
                         uVar60 | video->vram_map_allocation_bitmap[local_a0 + 6];
                    video->vram_map_dirty_bit_numbers[local_a0 + 6] = uVar32 + '\x06';
                    if (uVar49 != 7) {
                      video->vram_map[local_a0 + 7] = puVar56;
                      video->vram_map_allocation_bitmap[local_a0 + 7] =
                           uVar60 | video->vram_map_allocation_bitmap[local_a0 + 7];
                      video->vram_map_dirty_bit_numbers[local_a0 + 7] = uVar32 + '\a';
                      if (uVar49 != 8) {
                        video->vram_map[local_a0 + 8] = puVar56;
                        video->vram_map_allocation_bitmap[local_a0 + 8] =
                             uVar60 | video->vram_map_allocation_bitmap[local_a0 + 8];
                        video->vram_map_dirty_bit_numbers[local_a0 + 8] = uVar32 + '\b';
                        if (uVar49 != 9) {
                          video->vram_map[local_a0 + 9] = puVar56;
                          video->vram_map_allocation_bitmap[local_a0 + 9] =
                               uVar60 | video->vram_map_allocation_bitmap[local_a0 + 9];
                          video->vram_map_dirty_bit_numbers[local_a0 + 9] = uVar32 + '\t';
                          if (uVar49 != 10) {
                            video->vram_map[local_a0 + 10] = puVar56;
                            video->vram_map_allocation_bitmap[local_a0 + 10] =
                                 uVar60 | video->vram_map_allocation_bitmap[local_a0 + 10];
                            video->vram_map_dirty_bit_numbers[local_a0 + 10] = uVar32 + '\n';
                            if (uVar49 != 0xb) {
                              video->vram_map[local_a0 + 0xb] = puVar56;
                              video->vram_map_allocation_bitmap[local_a0 + 0xb] =
                                   uVar60 | video->vram_map_allocation_bitmap[local_a0 + 0xb];
                              video->vram_map_dirty_bit_numbers[local_a0 + 0xb] = uVar32 + '\v';
                              if (uVar49 != 0xc) {
                                video->vram_map[local_a0 + 0xc] = puVar56;
                                video->vram_map_allocation_bitmap[local_a0 + 0xc] =
                                     uVar60 | video->vram_map_allocation_bitmap[local_a0 + 0xc];
                                video->vram_map_dirty_bit_numbers[local_a0 + 0xc] = uVar32 + '\f';
                                if (uVar49 != 0xd) {
                                  video->vram_map[local_a0 + 0xd] = puVar56;
                                  video->vram_map_allocation_bitmap[local_a0 + 0xd] =
                                       uVar60 | video->vram_map_allocation_bitmap[local_a0 + 0xd];
                                  video->vram_map_dirty_bit_numbers[local_a0 + 0xd] = uVar32 + '\r';
                                  if (uVar49 != 0xe) {
                                    video->vram_map[local_a0 + 0xe] = puVar56;
                                    video->vram_map_allocation_bitmap[local_a0 + 0xe] =
                                         uVar60 | video->vram_map_allocation_bitmap[local_a0 + 0xe];
                                    video->vram_map_dirty_bit_numbers[local_a0 + 0xe] =
                                         uVar32 + '\x0e';
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
LAB_0802da80:
      iVar57 = 8;
      goto LAB_08028a74;
    case 7:
      uVar43 = uVar43 >> 4;
      unmap_memory_page_region_direct(pmVar46->memory_interface_arm9,0x6200000,uVar43 << 0xe);
      ppuVar51 = video->vram_map + 0x80;
      uVar35 = video->vram_map_dirty_bitmap_fine[4];
      puVar52 = video->vram_map_allocation_bitmap + uVar43 + 0x80;
      puVar34 = video->vram_map_allocation_bitmap + 0x80;
      ppuVar39 = video->vram_map + uVar43 + 0x80;
      bVar66 = ppuVar51 <= puVar52;
      bVar65 = (u8 **)puVar52 == ppuVar51;
      if (bVar66 && !bVar65) {
        bVar66 = puVar34 <= ppuVar39;
        bVar65 = ppuVar39 == (u8 **)puVar34;
      }
      uVar49 = ~(-1 << (uVar43 & 0xff));
      video->vram_map_dirty_bitmap_coarse = video->vram_map_dirty_bitmap_coarse | 0x10;
      video->vram_map_dirty_bitmap_fine[4] = uVar35 | uVar49;
      puVar56 = vram_buffer + -0x200000;
      if (((bVar66 && !bVar65 ||
           video->vram_map_dirty_bit_numbers + 0x80 < ppuVar39 &&
           ppuVar51 < video->vram_map_dirty_bit_numbers + uVar43 + 0x80) || uVar43 < 0x14) ||
          video->vram_map_dirty_bit_numbers + 0x80 < puVar52 &&
          puVar34 < video->vram_map_dirty_bit_numbers + uVar43 + 0x80) {
        ppuVar51 = video->vram_map + 0x7f;
        puVar48 = video->vram_map_dirty_bit_numbers + 0x7f;
        iVar57 = 0x38;
        do {
          uVar60 = *puVar34;
          ppuVar51 = ppuVar51 + 1;
          *ppuVar51 = puVar56;
          *puVar34 = uVar60 | 0x80;
          puVar48 = puVar48 + 1;
          *puVar48 = (u8)iVar57;
          iVar57 = iVar57 + 1;
          puVar34 = puVar34 + 1;
        } while (iVar57 != uVar43 + 0x38);
      }
      else {
        uVar35 = -((uint)((int)video->vram_map_allocation_bitmap * 0x20000000) >> 0x1e) & 7;
        if (uVar43 <= uVar35) {
          uVar35 = uVar43;
        }
        if (uVar35 == 0) {
          iVar47 = 0x38;
          iVar57 = 0x80;
          uVar44 = uVar43;
        }
        else {
          uVar60 = video->vram_map_allocation_bitmap[0x80];
          uVar44 = uVar43 - 1;
          video->vram_map[0x80] = puVar56;
          video->vram_map_allocation_bitmap[0x80] = uVar60 | 0x80;
          video->vram_map_dirty_bit_numbers[0x80] = '8';
          if (uVar35 == 1) {
            iVar47 = 0x39;
            iVar57 = 0x81;
          }
          else {
            uVar60 = video->vram_map_allocation_bitmap[0x81];
            video->vram_map[0x81] = puVar56;
            uVar44 = uVar43 - 2;
            video->vram_map_dirty_bit_numbers[0x81] = '9';
            video->vram_map_allocation_bitmap[0x81] = uVar60 | 0x80;
            if (uVar35 == 2) {
              iVar47 = 0x3a;
              iVar57 = 0x82;
            }
            else {
              uVar60 = video->vram_map_allocation_bitmap[0x82];
              video->vram_map[0x82] = puVar56;
              uVar44 = uVar43 - 3;
              video->vram_map_allocation_bitmap[0x82] = uVar60 | 0x80;
              video->vram_map_dirty_bit_numbers[0x82] = ':';
              if (uVar35 == 3) {
                iVar47 = 0x3b;
                iVar57 = 0x83;
              }
              else {
                uVar60 = video->vram_map_allocation_bitmap[0x83];
                video->vram_map[0x83] = puVar56;
                uVar44 = uVar43 - 4;
                video->vram_map_dirty_bit_numbers[0x83] = ';';
                video->vram_map_allocation_bitmap[0x83] = uVar60 | 0x80;
                if (uVar35 == 4) {
                  iVar47 = 0x3c;
                  iVar57 = 0x84;
                }
                else {
                  uVar60 = video->vram_map_allocation_bitmap[0x84];
                  video->vram_map[0x84] = puVar56;
                  uVar44 = uVar43 - 5;
                  video->vram_map_allocation_bitmap[0x84] = uVar60 | 0x80;
                  video->vram_map_dirty_bit_numbers[0x84] = '<';
                  if (uVar35 == 5) {
                    iVar47 = 0x3d;
                    iVar57 = 0x85;
                  }
                  else {
                    uVar60 = video->vram_map_allocation_bitmap[0x85];
                    video->vram_map[0x85] = puVar56;
                    uVar44 = uVar43 - 6;
                    video->vram_map_dirty_bit_numbers[0x85] = '=';
                    video->vram_map_allocation_bitmap[0x85] = uVar60 | 0x80;
                    if (uVar35 == 7) {
                      uVar60 = video->vram_map_allocation_bitmap[0x86];
                      uVar44 = uVar43 - 7;
                      iVar47 = 0x3f;
                      iVar57 = 0x87;
                      video->vram_map[0x86] = puVar56;
                      video->vram_map_allocation_bitmap[0x86] = uVar60 | 0x80;
                      video->vram_map_dirty_bit_numbers[0x86] = '>';
                    }
                    else {
                      iVar47 = 0x3e;
                      iVar57 = 0x86;
                    }
                  }
                }
              }
            }
          }
          if (uVar43 == uVar35) goto LAB_08029ec4;
        }
        uVar64 = ((uVar43 - uVar35) - 0x10 >> 4) + 1;
        iVar36 = uVar64 * 0x10;
        if (0xe < (uVar43 - 1) - uVar35) {
          auVar3._4_4_ = iVar47;
          auVar3._0_4_ = iVar47;
          auVar3._8_8_ = 0;
          auVar91._8_8_ = 0x300000002;
          auVar91._0_8_ = 0x100000000;
          auVar1 = SIMDExpandImmediate(0,0,0x10);
          auVar2 = SIMDExpandImmediate(0,0,4);
          auVar89 = SIMDExpandImmediate(0,0,8);
          auVar84 = SIMDExpandImmediate(0,0,0xc);
          local_a0 = 0;
          auVar86 = VectorAdd(auVar3 & auVar3 << 0x40,auVar91,4);
          puVar34 = video->vram_map_allocation_bitmap + uVar35 + 0x90;
          ppuVar51 = video->vram_map + uVar35 + 0x80;
          puVar52 = video->vram_map_allocation_bitmap + uVar35 + 0x90;
          local_9c = video->vram_map_dirty_bit_numbers + uVar35 + 0x80;
          do {
            auVar101 = VectorAdd(auVar86,auVar2,4);
            auVar99 = VectorAdd(auVar86,auVar89,4);
            auVar81 = *(undefined (*) [16])(puVar52 + -0x10);
            auVar83 = *(undefined (*) [16])(puVar52 + -8);
            local_a0 = local_a0 + 1;
            *(undefined8 *)ppuVar51 = 0;
            *(undefined8 *)(ppuVar51 + 2) = 0;
            uVar72 = VectorCopyNarrow(auVar86,4);
            uVar73 = VectorCopyNarrow(auVar101,4);
            auVar82 = VectorAdd(auVar86,auVar84,4);
            auVar86 = VectorAdd(auVar86,auVar1,4);
            *(undefined8 *)(ppuVar51 + 4) = 0;
            *(undefined8 *)(ppuVar51 + 6) = 0;
            auVar101 = SIMDExpandImmediate(0,9,0x80);
            auVar75._0_8_ = VectorCopyNarrow(auVar99,4);
            auVar75._8_8_ = VectorCopyNarrow(auVar82,4);
            *(undefined8 *)(ppuVar51 + 8) = 0;
            *(undefined8 *)(ppuVar51 + 10) = 0;
            auVar30._8_8_ = uVar73;
            auVar30._0_8_ = uVar72;
            uVar72 = VectorCopyNarrow(auVar30,2);
            uVar73 = VectorCopyNarrow(auVar75,2);
            *(undefined8 *)(ppuVar51 + 0xc) = 0;
            *(undefined8 *)(ppuVar51 + 0xe) = 0;
            auVar99 = SIMDExpandImmediate(0,9,0x80);
            *(longlong *)(puVar34 + -0x10) = SUB168(auVar81 | auVar101,0);
            *(longlong *)(puVar34 + -0xc) = SUB168(auVar81 | auVar101,8);
            *(longlong *)(puVar34 + -8) = SUB168(auVar83 | auVar99,0);
            *(longlong *)(puVar34 + -4) = SUB168(auVar83 | auVar99,8);
            *(undefined8 *)local_9c = uVar72;
            *(undefined8 *)(local_9c + 8) = uVar73;
            puVar34 = puVar34 + 0x10;
            ppuVar51 = ppuVar51 + 0x10;
            puVar52 = puVar52 + 0x10;
            local_9c = local_9c + 0x10;
          } while (local_a0 < uVar64);
          uVar44 = uVar44 + uVar64 * -0x10;
          iVar47 = iVar47 + iVar36;
          iVar57 = iVar57 + iVar36;
          if (uVar43 - uVar35 == iVar36) goto LAB_08029ec4;
        }
        uVar32 = (u8)iVar47;
        uVar60 = video->vram_map_allocation_bitmap[iVar57];
        video->vram_map[iVar57] = puVar56;
        video->vram_map_allocation_bitmap[iVar57] = uVar60 | 0x80;
        video->vram_map_dirty_bit_numbers[iVar57] = uVar32;
        if (uVar44 != 1) {
          local_a0._0_1_ = uVar32 + '\x02';
          uVar60 = video->vram_map_allocation_bitmap[iVar57 + 1];
          video->vram_map[iVar57 + 1] = puVar56;
          video->vram_map_allocation_bitmap[iVar57 + 1] = uVar60 | 0x80;
          video->vram_map_dirty_bit_numbers[iVar57 + 1] = uVar32 + '\x01';
          if (uVar44 != 2) {
            uVar60 = video->vram_map_allocation_bitmap[iVar57 + 2];
            video->vram_map[iVar57 + 2] = puVar56;
            video->vram_map_allocation_bitmap[iVar57 + 2] = uVar60 | 0x80;
            video->vram_map_dirty_bit_numbers[iVar57 + 2] = (u8)local_a0;
            if (uVar44 != 3) {
              local_a0._0_1_ = uVar32 + '\x04';
              uVar60 = video->vram_map_allocation_bitmap[iVar57 + 3];
              video->vram_map[iVar57 + 3] = puVar56;
              video->vram_map_allocation_bitmap[iVar57 + 3] = uVar60 | 0x80;
              video->vram_map_dirty_bit_numbers[iVar57 + 3] = uVar32 + '\x03';
              if (uVar44 != 4) {
                uVar60 = video->vram_map_allocation_bitmap[iVar57 + 4];
                video->vram_map[iVar57 + 4] = puVar56;
                video->vram_map_allocation_bitmap[iVar57 + 4] = uVar60 | 0x80;
                video->vram_map_dirty_bit_numbers[iVar57 + 4] = (u8)local_a0;
                if (uVar44 != 5) {
                  local_a0._0_1_ = uVar32 + '\x06';
                  uVar60 = video->vram_map_allocation_bitmap[iVar57 + 5];
                  video->vram_map[iVar57 + 5] = puVar56;
                  video->vram_map_allocation_bitmap[iVar57 + 5] = uVar60 | 0x80;
                  video->vram_map_dirty_bit_numbers[iVar57 + 5] = uVar32 + '\x05';
                  if (uVar44 != 6) {
                    uVar60 = video->vram_map_allocation_bitmap[iVar57 + 6];
                    video->vram_map[iVar57 + 6] = puVar56;
                    video->vram_map_allocation_bitmap[iVar57 + 6] = uVar60 | 0x80;
                    video->vram_map_dirty_bit_numbers[iVar57 + 6] = (u8)local_a0;
                    if (uVar44 != 7) {
                      local_a0._0_1_ = uVar32 + '\b';
                      uVar60 = video->vram_map_allocation_bitmap[iVar57 + 7];
                      video->vram_map[iVar57 + 7] = puVar56;
                      video->vram_map_allocation_bitmap[iVar57 + 7] = uVar60 | 0x80;
                      video->vram_map_dirty_bit_numbers[iVar57 + 7] = uVar32 + '\a';
                      if (uVar44 != 8) {
                        uVar60 = video->vram_map_allocation_bitmap[iVar57 + 8];
                        video->vram_map[iVar57 + 8] = puVar56;
                        video->vram_map_allocation_bitmap[iVar57 + 8] = uVar60 | 0x80;
                        video->vram_map_dirty_bit_numbers[iVar57 + 8] = (u8)local_a0;
                        if (uVar44 != 9) {
                          local_a0._0_1_ = uVar32 + '\n';
                          uVar60 = video->vram_map_allocation_bitmap[iVar57 + 9];
                          video->vram_map[iVar57 + 9] = puVar56;
                          video->vram_map_allocation_bitmap[iVar57 + 9] = uVar60 | 0x80;
                          video->vram_map_dirty_bit_numbers[iVar57 + 9] = uVar32 + '\t';
                          if (uVar44 != 10) {
                            uVar60 = video->vram_map_allocation_bitmap[iVar57 + 10];
                            video->vram_map[iVar57 + 10] = puVar56;
                            video->vram_map_allocation_bitmap[iVar57 + 10] = uVar60 | 0x80;
                            video->vram_map_dirty_bit_numbers[iVar57 + 10] = (u8)local_a0;
                            if (uVar44 != 0xb) {
                              local_a0._0_1_ = uVar32 + '\f';
                              uVar60 = video->vram_map_allocation_bitmap[iVar57 + 0xb];
                              video->vram_map[iVar57 + 0xb] = puVar56;
                              video->vram_map_allocation_bitmap[iVar57 + 0xb] = uVar60 | 0x80;
                              video->vram_map_dirty_bit_numbers[iVar57 + 0xb] = uVar32 + '\v';
                              if (uVar44 != 0xc) {
                                uVar60 = video->vram_map_allocation_bitmap[iVar57 + 0xc];
                                video->vram_map[iVar57 + 0xc] = puVar56;
                                video->vram_map_allocation_bitmap[iVar57 + 0xc] = uVar60 | 0x80;
                                video->vram_map_dirty_bit_numbers[iVar57 + 0xc] = (u8)local_a0;
                                if (uVar44 != 0xd) {
                                  video->vram_map[iVar57 + 0xd] = puVar56;
                                  video->vram_map_allocation_bitmap[iVar57 + 0xd] =
                                       video->vram_map_allocation_bitmap[iVar57 + 0xd] | 0x80;
                                  video->vram_map_dirty_bit_numbers[iVar57 + 0xd] = uVar32 + '\r';
                                  if (uVar44 != 0xe) {
                                    video->vram_map[iVar57 + 0xe] = puVar56;
                                    video->vram_map_allocation_bitmap[iVar57 + 0xe] =
                                         video->vram_map_allocation_bitmap[iVar57 + 0xe] | 0x80;
                                    video->vram_map_dirty_bit_numbers[iVar57 + 0xe] =
                                         uVar32 + '\x0e';
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
LAB_08029ec4:
      unmap_memory_page_region_direct(video->memory->memory_interface_arm9,0x6210000,uVar43 << 0xe);
      ppuVar51 = video->vram_map + 0x84;
      uVar35 = video->vram_map_dirty_bitmap_fine[4];
      ppuVar39 = video->vram_map + uVar43 + 0x84;
      video->vram_map_dirty_bitmap_coarse = video->vram_map_dirty_bitmap_coarse | 0x10;
      puVar52 = video->vram_map_allocation_bitmap + uVar43 + 0x84;
      puVar34 = video->vram_map_allocation_bitmap + 0x84;
      bVar66 = ppuVar51 <= puVar52;
      bVar65 = (u8 **)puVar52 == ppuVar51;
      if (bVar66 && !bVar65) {
        bVar66 = puVar34 <= ppuVar39;
        bVar65 = ppuVar39 == (u8 **)puVar34;
      }
      puVar56 = vram_buffer + -0x210000;
      video->vram_map_dirty_bitmap_fine[4] = uVar35 | uVar49 << 4;
      if ((uVar43 < 0x14 ||
          (bVar66 && !bVar65 ||
          video->vram_map_dirty_bit_numbers + 0x84 < ppuVar39 &&
          ppuVar51 < video->vram_map_dirty_bit_numbers + uVar43 + 0x84)) ||
          video->vram_map_dirty_bit_numbers + 0x84 < puVar52 &&
          puVar34 < video->vram_map_dirty_bit_numbers + uVar43 + 0x84) {
        puVar48 = video->vram_map_dirty_bit_numbers + 0x83;
        ppuVar51 = video->vram_map + 0x83;
        iVar57 = 0x38;
        do {
          uVar60 = *puVar34;
          ppuVar51 = ppuVar51 + 1;
          *ppuVar51 = puVar56;
          *puVar34 = uVar60 | 0x80;
          puVar48 = puVar48 + 1;
          *puVar48 = (u8)iVar57;
          iVar57 = iVar57 + 1;
          puVar34 = puVar34 + 1;
        } while (iVar57 != uVar43 + 0x38);
      }
      else {
        uVar35 = -((uint)((int)video->vram_map_allocation_bitmap * 0x20000000) >> 0x1e) & 7;
        if (uVar43 <= uVar35) {
          uVar35 = uVar43;
        }
        if (uVar35 == 0) {
          iVar47 = 0x38;
          iVar57 = 0x84;
          uVar49 = uVar43;
        }
        else {
          uVar60 = video->vram_map_allocation_bitmap[0x84];
          uVar49 = uVar43 - 1;
          video->vram_map[0x84] = puVar56;
          video->vram_map_allocation_bitmap[0x84] = uVar60 | 0x80;
          video->vram_map_dirty_bit_numbers[0x84] = '8';
          if (uVar35 == 1) {
            iVar47 = 0x39;
            iVar57 = 0x85;
          }
          else {
            uVar60 = video->vram_map_allocation_bitmap[0x85];
            video->vram_map[0x85] = puVar56;
            uVar49 = uVar43 - 2;
            video->vram_map_dirty_bit_numbers[0x85] = '9';
            video->vram_map_allocation_bitmap[0x85] = uVar60 | 0x80;
            if (uVar35 == 2) {
              iVar47 = 0x3a;
              iVar57 = 0x86;
            }
            else {
              uVar60 = video->vram_map_allocation_bitmap[0x86];
              video->vram_map[0x86] = puVar56;
              uVar49 = uVar43 - 3;
              video->vram_map_allocation_bitmap[0x86] = uVar60 | 0x80;
              video->vram_map_dirty_bit_numbers[0x86] = ':';
              if (uVar35 == 3) {
                iVar47 = 0x3b;
                iVar57 = 0x87;
              }
              else {
                uVar60 = video->vram_map_allocation_bitmap[0x87];
                video->vram_map[0x87] = puVar56;
                uVar49 = uVar43 - 4;
                video->vram_map_dirty_bit_numbers[0x87] = ';';
                video->vram_map_allocation_bitmap[0x87] = uVar60 | 0x80;
                if (uVar35 == 4) {
                  iVar47 = 0x3c;
                  iVar57 = 0x88;
                }
                else {
                  uVar60 = video->vram_map_allocation_bitmap[0x88];
                  video->vram_map[0x88] = puVar56;
                  uVar49 = uVar43 - 5;
                  video->vram_map_allocation_bitmap[0x88] = uVar60 | 0x80;
                  video->vram_map_dirty_bit_numbers[0x88] = '<';
                  if (uVar35 == 5) {
                    iVar47 = 0x3d;
                    iVar57 = 0x89;
                  }
                  else {
                    uVar60 = video->vram_map_allocation_bitmap[0x89];
                    video->vram_map[0x89] = puVar56;
                    uVar49 = uVar43 - 6;
                    video->vram_map_dirty_bit_numbers[0x89] = '=';
                    video->vram_map_allocation_bitmap[0x89] = uVar60 | 0x80;
                    if (uVar35 == 7) {
                      uVar60 = video->vram_map_allocation_bitmap[0x8a];
                      uVar49 = uVar43 - 7;
                      video->vram_map[0x8a] = puVar56;
                      iVar47 = 0x3f;
                      video->vram_map_allocation_bitmap[0x8a] = uVar60 | 0x80;
                      iVar57 = 0x8b;
                      video->vram_map_dirty_bit_numbers[0x8a] = '>';
                    }
                    else {
                      iVar47 = 0x3e;
                      iVar57 = 0x8a;
                    }
                  }
                }
              }
            }
          }
          if (uVar43 == uVar35) goto LAB_0802a440;
        }
        uVar44 = ((uVar43 - uVar35) - 0x10 >> 4) + 1;
        iVar36 = uVar44 * 0x10;
        if (0xe < (uVar43 - 1) - uVar35) {
          auVar4._4_4_ = iVar47;
          auVar4._0_4_ = iVar47;
          auVar4._8_8_ = 0;
          auVar92._8_8_ = 0x300000002;
          auVar92._0_8_ = 0x100000000;
          auVar1 = SIMDExpandImmediate(0,0,0x10);
          auVar2 = SIMDExpandImmediate(0,0,4);
          auVar89 = SIMDExpandImmediate(0,0,8);
          auVar84 = SIMDExpandImmediate(0,0,0xc);
          puVar48 = video->vram_map_dirty_bit_numbers + uVar35 + 0x84;
          local_c8 = (u16 *)0x0;
          auVar86 = VectorAdd(auVar4 & auVar4 << 0x40,auVar92,4);
          puVar34 = video->vram_map_allocation_bitmap + uVar35 + 0x94;
          ppuVar51 = video->vram_map + uVar35 + 0x84;
          puVar52 = video->vram_map_allocation_bitmap + uVar35 + 0x94;
          do {
            auVar81 = *(undefined (*) [16])(puVar52 + -0x10);
            auVar99 = VectorAdd(auVar86,auVar2,4);
            auVar101 = VectorAdd(auVar86,auVar89,4);
            auVar83 = *(undefined (*) [16])(puVar52 + -8);
            *(undefined8 *)ppuVar51 = 0;
            *(undefined8 *)(ppuVar51 + 2) = 0;
            uVar72 = VectorCopyNarrow(auVar86,4);
            uVar73 = VectorCopyNarrow(auVar99,4);
            auVar99 = VectorAdd(auVar86,auVar84,4);
            auVar86 = VectorAdd(auVar86,auVar1,4);
            local_c8 = (u16 *)((int)local_c8 + 1);
            auVar76._0_8_ = VectorCopyNarrow(auVar101,4);
            auVar76._8_8_ = VectorCopyNarrow(auVar99,4);
            auVar101 = SIMDExpandImmediate(0,9,0x80);
            auVar31._8_8_ = uVar73;
            auVar31._0_8_ = uVar72;
            uVar72 = VectorCopyNarrow(auVar31,2);
            uVar73 = VectorCopyNarrow(auVar76,2);
            auVar99 = SIMDExpandImmediate(0,9,0x80);
            *(undefined8 *)(ppuVar51 + 4) = 0;
            *(undefined8 *)(ppuVar51 + 6) = 0;
            *(undefined8 *)(ppuVar51 + 8) = 0;
            *(undefined8 *)(ppuVar51 + 10) = 0;
            *(undefined8 *)(ppuVar51 + 0xc) = 0;
            *(undefined8 *)(ppuVar51 + 0xe) = 0;
            *(longlong *)(puVar34 + -0x10) = SUB168(auVar81 | auVar101,0);
            *(longlong *)(puVar34 + -0xc) = SUB168(auVar81 | auVar101,8);
            *(longlong *)(puVar34 + -8) = SUB168(auVar83 | auVar99,0);
            *(longlong *)(puVar34 + -4) = SUB168(auVar83 | auVar99,8);
            *(undefined8 *)puVar48 = uVar72;
            *(undefined8 *)(puVar48 + 8) = uVar73;
            puVar48 = puVar48 + 0x10;
            puVar34 = puVar34 + 0x10;
            ppuVar51 = ppuVar51 + 0x10;
            puVar52 = puVar52 + 0x10;
          } while (local_c8 < uVar44);
          uVar49 = uVar49 + uVar44 * -0x10;
          iVar47 = iVar47 + iVar36;
          iVar57 = iVar57 + iVar36;
          if (uVar43 - uVar35 == iVar36) goto LAB_0802a440;
        }
        uVar32 = (u8)iVar47;
        uVar60 = video->vram_map_allocation_bitmap[iVar57];
        video->vram_map[iVar57] = puVar56;
        video->vram_map_allocation_bitmap[iVar57] = uVar60 | 0x80;
        video->vram_map_dirty_bit_numbers[iVar57] = uVar32;
        if (uVar49 != 1) {
          video->vram_map[iVar57 + 1] = puVar56;
          video->vram_map_allocation_bitmap[iVar57 + 1] =
               video->vram_map_allocation_bitmap[iVar57 + 1] | 0x80;
          video->vram_map_dirty_bit_numbers[iVar57 + 1] = uVar32 + '\x01';
          if (uVar49 != 2) {
            video->vram_map[iVar57 + 2] = puVar56;
            video->vram_map_allocation_bitmap[iVar57 + 2] =
                 video->vram_map_allocation_bitmap[iVar57 + 2] | 0x80;
            video->vram_map_dirty_bit_numbers[iVar57 + 2] = uVar32 + '\x02';
            if (uVar49 != 3) {
              video->vram_map[iVar57 + 3] = puVar56;
              video->vram_map_allocation_bitmap[iVar57 + 3] =
                   video->vram_map_allocation_bitmap[iVar57 + 3] | 0x80;
              video->vram_map_dirty_bit_numbers[iVar57 + 3] = uVar32 + '\x03';
              if (uVar49 != 4) {
                video->vram_map[iVar57 + 4] = puVar56;
                video->vram_map_allocation_bitmap[iVar57 + 4] =
                     video->vram_map_allocation_bitmap[iVar57 + 4] | 0x80;
                video->vram_map_dirty_bit_numbers[iVar57 + 4] = uVar32 + '\x04';
                if (uVar49 != 5) {
                  video->vram_map[iVar57 + 5] = puVar56;
                  video->vram_map_allocation_bitmap[iVar57 + 5] =
                       video->vram_map_allocation_bitmap[iVar57 + 5] | 0x80;
                  video->vram_map_dirty_bit_numbers[iVar57 + 5] = uVar32 + '\x05';
                  if (uVar49 != 6) {
                    video->vram_map[iVar57 + 6] = puVar56;
                    video->vram_map_allocation_bitmap[iVar57 + 6] =
                         video->vram_map_allocation_bitmap[iVar57 + 6] | 0x80;
                    video->vram_map_dirty_bit_numbers[iVar57 + 6] = uVar32 + '\x06';
                    if (uVar49 != 7) {
                      video->vram_map[iVar57 + 7] = puVar56;
                      video->vram_map_allocation_bitmap[iVar57 + 7] =
                           video->vram_map_allocation_bitmap[iVar57 + 7] | 0x80;
                      video->vram_map_dirty_bit_numbers[iVar57 + 7] = uVar32 + '\a';
                      if (uVar49 != 8) {
                        video->vram_map[iVar57 + 8] = puVar56;
                        video->vram_map_allocation_bitmap[iVar57 + 8] =
                             video->vram_map_allocation_bitmap[iVar57 + 8] | 0x80;
                        video->vram_map_dirty_bit_numbers[iVar57 + 8] = uVar32 + '\b';
                        if (uVar49 != 9) {
                          video->vram_map[iVar57 + 9] = puVar56;
                          video->vram_map_allocation_bitmap[iVar57 + 9] =
                               video->vram_map_allocation_bitmap[iVar57 + 9] | 0x80;
                          video->vram_map_dirty_bit_numbers[iVar57 + 9] = uVar32 + '\t';
                          if (uVar49 != 10) {
                            video->vram_map[iVar57 + 10] = puVar56;
                            video->vram_map_allocation_bitmap[iVar57 + 10] =
                                 video->vram_map_allocation_bitmap[iVar57 + 10] | 0x80;
                            video->vram_map_dirty_bit_numbers[iVar57 + 10] = uVar32 + '\n';
                            if (uVar49 != 0xb) {
                              video->vram_map[iVar57 + 0xb] = puVar56;
                              video->vram_map_allocation_bitmap[iVar57 + 0xb] =
                                   video->vram_map_allocation_bitmap[iVar57 + 0xb] | 0x80;
                              video->vram_map_dirty_bit_numbers[iVar57 + 0xb] = uVar32 + '\v';
                              if (uVar49 != 0xc) {
                                video->vram_map[iVar57 + 0xc] = puVar56;
                                video->vram_map_allocation_bitmap[iVar57 + 0xc] =
                                     video->vram_map_allocation_bitmap[iVar57 + 0xc] | 0x80;
                                video->vram_map_dirty_bit_numbers[iVar57 + 0xc] = uVar32 + '\f';
                                if (uVar49 != 0xd) {
                                  video->vram_map[iVar57 + 0xd] = puVar56;
                                  video->vram_map_allocation_bitmap[iVar57 + 0xd] =
                                       video->vram_map_allocation_bitmap[iVar57 + 0xd] | 0x80;
                                  video->vram_map_dirty_bit_numbers[iVar57 + 0xd] = uVar32 + '\r';
                                  if (uVar49 != 0xe) {
                                    video->vram_map[iVar57 + 0xe] = puVar56;
                                    video->vram_map_allocation_bitmap[iVar57 + 0xe] =
                                         video->vram_map_allocation_bitmap[iVar57 + 0xe] | 0x80;
                                    video->vram_map_dirty_bit_numbers[iVar57 + 0xe] =
                                         uVar32 + '\x0e';
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
LAB_0802a440:
      local_cc = 0x80;
      iVar57 = 10;
      goto LAB_08028a74;
    case 8:
      uVar43 = uVar43 >> 4;
      uVar42 = uVar43 << 0xe;
      ppuVar51 = video->vram_map + 0x82;
      unmap_memory_page_region_direct(pmVar46->memory_interface_arm9,0x6208000,uVar42);
      uVar35 = video->vram_map_dirty_bitmap_fine[4];
      ppuVar39 = video->vram_map + uVar43 + 0x82;
      puVar52 = video->vram_map_allocation_bitmap + uVar43 + 0x82;
      puVar56 = video->vram_map_dirty_bit_numbers + 0x82;
      puVar34 = video->vram_map_allocation_bitmap + 0x82;
      bVar66 = ppuVar51 <= puVar52;
      bVar65 = (u8 **)puVar52 == ppuVar51;
      if (bVar66 && !bVar65) {
        bVar66 = puVar34 <= ppuVar39;
        bVar65 = ppuVar39 == (u8 **)puVar34;
      }
      uVar49 = ~(-1 << (uVar43 & 0xff));
      bVar67 = uVar43 < 0x14;
      video->vram_map_dirty_bitmap_coarse = video->vram_map_dirty_bitmap_coarse | 0x10;
      video->vram_map_dirty_bitmap_fine[4] = uVar35 | uVar49 << 2;
      puVar48 = vram_buffer + -0x208000;
      if (((puVar56 < ppuVar39 && ppuVar51 < video->vram_map_dirty_bit_numbers + uVar43 + 0x82 ||
           bVar66 && !bVar65) || bVar67) ||
          puVar56 < puVar52 && puVar34 < video->vram_map_dirty_bit_numbers + uVar43 + 0x82) {
        puVar40 = video->vram_map_dirty_bit_numbers + 0x81;
        ppuVar39 = video->vram_map + 0x81;
        iVar57 = 0x40;
        do {
          uVar60 = *puVar34;
          ppuVar39 = ppuVar39 + 1;
          *ppuVar39 = puVar48;
          *puVar34 = uVar60 | 0x100;
          puVar40 = puVar40 + 1;
          *puVar40 = (u8)iVar57;
          iVar57 = iVar57 + 1;
          puVar34 = puVar34 + 1;
        } while (iVar57 != uVar43 + 0x40);
      }
      else {
        uVar35 = -((uint)((int)video << 0x1d) >> 0x1e) & 7;
        if (uVar43 <= uVar35) {
          uVar35 = uVar43;
        }
        if (uVar35 == 0) {
          iVar47 = 0x40;
          iVar57 = 0x82;
          uVar44 = uVar43;
        }
        else {
          uVar60 = *puVar34;
          uVar44 = uVar43 - 1;
          video->vram_map[0x82] = puVar48;
          *puVar34 = uVar60 | 0x100;
          video->vram_map_dirty_bit_numbers[0x82] = '@';
          if (uVar35 == 1) {
            iVar47 = 0x41;
            iVar57 = 0x83;
          }
          else {
            uVar60 = video->vram_map_allocation_bitmap[0x83];
            video->vram_map[0x83] = puVar48;
            uVar44 = uVar43 - 2;
            video->vram_map_dirty_bit_numbers[0x83] = 'A';
            video->vram_map_allocation_bitmap[0x83] = uVar60 | 0x100;
            if (uVar35 == 2) {
              iVar47 = 0x42;
              iVar57 = 0x84;
            }
            else {
              uVar60 = video->vram_map_allocation_bitmap[0x84];
              video->vram_map[0x84] = puVar48;
              uVar44 = uVar43 - 3;
              video->vram_map_allocation_bitmap[0x84] = uVar60 | 0x100;
              video->vram_map_dirty_bit_numbers[0x84] = 'B';
              if (uVar35 == 3) {
                iVar47 = 0x43;
                iVar57 = 0x85;
              }
              else {
                uVar60 = video->vram_map_allocation_bitmap[0x85];
                video->vram_map[0x85] = puVar48;
                uVar44 = uVar43 - 4;
                video->vram_map_dirty_bit_numbers[0x85] = 'C';
                video->vram_map_allocation_bitmap[0x85] = uVar60 | 0x100;
                if (uVar35 == 4) {
                  iVar47 = 0x44;
                  iVar57 = 0x86;
                }
                else {
                  uVar60 = video->vram_map_allocation_bitmap[0x86];
                  video->vram_map[0x86] = puVar48;
                  uVar44 = uVar43 - 5;
                  video->vram_map_allocation_bitmap[0x86] = uVar60 | 0x100;
                  video->vram_map_dirty_bit_numbers[0x86] = 'D';
                  if (uVar35 == 5) {
                    iVar47 = 0x45;
                    iVar57 = 0x87;
                  }
                  else {
                    uVar60 = video->vram_map_allocation_bitmap[0x87];
                    video->vram_map[0x87] = puVar48;
                    uVar44 = uVar43 - 6;
                    video->vram_map_dirty_bit_numbers[0x87] = 'E';
                    video->vram_map_allocation_bitmap[0x87] = uVar60 | 0x100;
                    if (uVar35 == 7) {
                      uVar60 = video->vram_map_allocation_bitmap[0x88];
                      uVar44 = uVar43 - 7;
                      iVar47 = 0x47;
                      iVar57 = 0x89;
                      video->vram_map[0x88] = puVar48;
                      video->vram_map_allocation_bitmap[0x88] = uVar60 | 0x100;
                      video->vram_map_dirty_bit_numbers[0x88] = 'F';
                    }
                    else {
                      iVar47 = 0x46;
                      iVar57 = 0x88;
                    }
                  }
                }
              }
            }
          }
          if (uVar43 == uVar35) goto LAB_0802aac4;
        }
        uVar64 = ((uVar43 - uVar35) - 0x10 >> 4) + 1;
        iVar36 = uVar64 * 0x10;
        if (0xe < (uVar43 - 1) - uVar35) {
          auVar5._4_4_ = iVar47;
          auVar5._0_4_ = iVar47;
          auVar5._8_8_ = 0;
          auVar93._8_8_ = 0x300000002;
          auVar93._0_8_ = 0x100000000;
          auVar1 = SIMDExpandImmediate(0,0,0x10);
          local_90 = 0;
          auVar2 = SIMDExpandImmediate(0,0,4);
          auVar89 = SIMDExpandImmediate(0,0,8);
          auVar84 = SIMDExpandImmediate(0,0,0xc);
          puVar40 = video->vram_map_dirty_bit_numbers + uVar35 + 0x82;
          auVar86 = VectorAdd(auVar5 & auVar5 << 0x40,auVar93,4);
          ppuVar39 = video->vram_map + uVar35 + 0x82;
          puVar34 = video->vram_map_allocation_bitmap + uVar35 + 0x92;
          puVar52 = video->vram_map_allocation_bitmap + uVar35 + 0x92;
          do {
            auVar81 = *(undefined (*) [16])(puVar52 + -0x10);
            auVar99 = VectorAdd(auVar86,auVar2,4);
            auVar101 = VectorAdd(auVar86,auVar89,4);
            auVar83 = *(undefined (*) [16])(puVar52 + -8);
            *(undefined8 *)ppuVar39 = 0;
            *(undefined8 *)(ppuVar39 + 2) = 0;
            uVar72 = VectorCopyNarrow(auVar86,4);
            uVar73 = VectorCopyNarrow(auVar99,4);
            auVar99 = VectorAdd(auVar86,auVar84,4);
            auVar86 = VectorAdd(auVar86,auVar1,4);
            local_90 = local_90 + 1;
            auVar77._0_8_ = VectorCopyNarrow(auVar101,4);
            auVar77._8_8_ = VectorCopyNarrow(auVar99,4);
            auVar101 = SIMDExpandImmediate(0,0xb,1);
            auVar26._8_8_ = uVar73;
            auVar26._0_8_ = uVar72;
            uVar72 = VectorCopyNarrow(auVar26,2);
            uVar73 = VectorCopyNarrow(auVar77,2);
            auVar99 = SIMDExpandImmediate(0,0xb,1);
            *(undefined8 *)(ppuVar39 + 4) = 0;
            *(undefined8 *)(ppuVar39 + 6) = 0;
            *(undefined8 *)(ppuVar39 + 8) = 0;
            *(undefined8 *)(ppuVar39 + 10) = 0;
            *(undefined8 *)(ppuVar39 + 0xc) = 0;
            *(undefined8 *)(ppuVar39 + 0xe) = 0;
            *(longlong *)(puVar34 + -0x10) = SUB168(auVar81 | auVar101,0);
            *(longlong *)(puVar34 + -0xc) = SUB168(auVar81 | auVar101,8);
            *(longlong *)(puVar34 + -8) = SUB168(auVar83 | auVar99,0);
            *(longlong *)(puVar34 + -4) = SUB168(auVar83 | auVar99,8);
            *(undefined8 *)puVar40 = uVar72;
            *(undefined8 *)(puVar40 + 8) = uVar73;
            puVar40 = puVar40 + 0x10;
            ppuVar39 = ppuVar39 + 0x10;
            puVar34 = puVar34 + 0x10;
            puVar52 = puVar52 + 0x10;
          } while (local_90 < uVar64);
          iVar57 = iVar57 + iVar36;
          uVar44 = uVar44 + uVar64 * -0x10;
          iVar47 = iVar47 + iVar36;
          if (uVar43 - uVar35 == iVar36) goto LAB_0802aac4;
        }
        uVar32 = (u8)iVar47;
        uVar60 = video->vram_map_allocation_bitmap[iVar57];
        video->vram_map[iVar57] = puVar48;
        video->vram_map_allocation_bitmap[iVar57] = uVar60 | 0x100;
        video->vram_map_dirty_bit_numbers[iVar57] = uVar32;
        if (uVar44 != 1) {
          local_94 = uVar32 + '\x02';
          video->vram_map[iVar57 + 1] = puVar48;
          video->vram_map_allocation_bitmap[iVar57 + 1] =
               video->vram_map_allocation_bitmap[iVar57 + 1] | 0x100;
          video->vram_map_dirty_bit_numbers[iVar57 + 1] = uVar32 + '\x01';
          if (uVar44 != 2) {
            video->vram_map[iVar57 + 2] = puVar48;
            video->vram_map_allocation_bitmap[iVar57 + 2] =
                 video->vram_map_allocation_bitmap[iVar57 + 2] | 0x100;
            video->vram_map_dirty_bit_numbers[iVar57 + 2] = local_94;
            if (uVar44 != 3) {
              local_94 = uVar32 + '\x04';
              video->vram_map[iVar57 + 3] = puVar48;
              video->vram_map_allocation_bitmap[iVar57 + 3] =
                   video->vram_map_allocation_bitmap[iVar57 + 3] | 0x100;
              video->vram_map_dirty_bit_numbers[iVar57 + 3] = uVar32 + '\x03';
              if (uVar44 != 4) {
                video->vram_map[iVar57 + 4] = puVar48;
                video->vram_map_allocation_bitmap[iVar57 + 4] =
                     video->vram_map_allocation_bitmap[iVar57 + 4] | 0x100;
                video->vram_map_dirty_bit_numbers[iVar57 + 4] = local_94;
                if (uVar44 != 5) {
                  local_94 = uVar32 + '\x06';
                  video->vram_map[iVar57 + 5] = puVar48;
                  video->vram_map_allocation_bitmap[iVar57 + 5] =
                       video->vram_map_allocation_bitmap[iVar57 + 5] | 0x100;
                  video->vram_map_dirty_bit_numbers[iVar57 + 5] = uVar32 + '\x05';
                  if (uVar44 != 6) {
                    video->vram_map[iVar57 + 6] = puVar48;
                    video->vram_map_allocation_bitmap[iVar57 + 6] =
                         video->vram_map_allocation_bitmap[iVar57 + 6] | 0x100;
                    video->vram_map_dirty_bit_numbers[iVar57 + 6] = local_94;
                    if (uVar44 != 7) {
                      local_94 = uVar32 + '\b';
                      video->vram_map[iVar57 + 7] = puVar48;
                      video->vram_map_allocation_bitmap[iVar57 + 7] =
                           video->vram_map_allocation_bitmap[iVar57 + 7] | 0x100;
                      video->vram_map_dirty_bit_numbers[iVar57 + 7] = uVar32 + '\a';
                      if (uVar44 != 8) {
                        video->vram_map[iVar57 + 8] = puVar48;
                        video->vram_map_allocation_bitmap[iVar57 + 8] =
                             video->vram_map_allocation_bitmap[iVar57 + 8] | 0x100;
                        video->vram_map_dirty_bit_numbers[iVar57 + 8] = local_94;
                        if (uVar44 != 9) {
                          local_94 = uVar32 + '\n';
                          video->vram_map[iVar57 + 9] = puVar48;
                          video->vram_map_allocation_bitmap[iVar57 + 9] =
                               video->vram_map_allocation_bitmap[iVar57 + 9] | 0x100;
                          video->vram_map_dirty_bit_numbers[iVar57 + 9] = uVar32 + '\t';
                          if (uVar44 != 10) {
                            video->vram_map[iVar57 + 10] = puVar48;
                            video->vram_map_allocation_bitmap[iVar57 + 10] =
                                 video->vram_map_allocation_bitmap[iVar57 + 10] | 0x100;
                            video->vram_map_dirty_bit_numbers[iVar57 + 10] = local_94;
                            if (uVar44 != 0xb) {
                              local_94 = uVar32 + '\f';
                              video->vram_map[iVar57 + 0xb] = puVar48;
                              video->vram_map_allocation_bitmap[iVar57 + 0xb] =
                                   video->vram_map_allocation_bitmap[iVar57 + 0xb] | 0x100;
                              video->vram_map_dirty_bit_numbers[iVar57 + 0xb] = uVar32 + '\v';
                              if (uVar44 != 0xc) {
                                video->vram_map[iVar57 + 0xc] = puVar48;
                                video->vram_map_allocation_bitmap[iVar57 + 0xc] =
                                     video->vram_map_allocation_bitmap[iVar57 + 0xc] | 0x100;
                                video->vram_map_dirty_bit_numbers[iVar57 + 0xc] = local_94;
                                if (uVar44 != 0xd) {
                                  video->vram_map[iVar57 + 0xd] = puVar48;
                                  video->vram_map_allocation_bitmap[iVar57 + 0xd] =
                                       video->vram_map_allocation_bitmap[iVar57 + 0xd] | 0x100;
                                  video->vram_map_dirty_bit_numbers[iVar57 + 0xd] = uVar32 + '\r';
                                  if (uVar44 != 0xe) {
                                    video->vram_map[iVar57 + 0xe] = puVar48;
                                    video->vram_map_allocation_bitmap[iVar57 + 0xe] =
                                         video->vram_map_allocation_bitmap[iVar57 + 0xe] | 0x100;
                                    video->vram_map_dirty_bit_numbers[iVar57 + 0xe] =
                                         uVar32 + '\x0e';
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
LAB_0802aac4:
      ppuVar55 = video->vram_map + 0x83;
      unmap_memory_page_region_direct(video->memory->memory_interface_arm9,0x620c000,uVar42);
      uVar35 = video->vram_map_dirty_bitmap_fine[4];
      ppuVar39 = video->vram_map + uVar43 + 0x83;
      puVar34 = video->vram_map_allocation_bitmap + 0x83;
      puVar52 = video->vram_map_allocation_bitmap + uVar43 + 0x83;
      bVar66 = ppuVar55 <= puVar52;
      bVar65 = (u8 **)puVar52 == ppuVar55;
      if (bVar66 && !bVar65) {
        bVar66 = puVar34 <= ppuVar39;
        bVar65 = ppuVar39 == (u8 **)puVar34;
      }
      video->vram_map_dirty_bitmap_coarse = video->vram_map_dirty_bitmap_coarse | 0x10;
      puVar48 = vram_buffer + -0x20c000;
      video->vram_map_dirty_bitmap_fine[4] = uVar35 | uVar49 << 3;
      if (((bVar66 && !bVar65 ||
           video->vram_map_dirty_bit_numbers + 0x83 < ppuVar39 &&
           ppuVar55 < video->vram_map_dirty_bit_numbers + uVar43 + 0x83) || bVar67) ||
          video->vram_map_dirty_bit_numbers + 0x83 < puVar52 &&
          puVar34 < video->vram_map_dirty_bit_numbers + uVar43 + 0x83) {
        iVar57 = 0x40;
        do {
          uVar60 = *puVar34;
          ppuVar51 = ppuVar51 + 1;
          *ppuVar51 = puVar48;
          *puVar34 = uVar60 | 0x100;
          puVar56 = puVar56 + 1;
          *puVar56 = (u8)iVar57;
          iVar57 = iVar57 + 1;
          puVar34 = puVar34 + 1;
        } while (iVar57 != uVar43 + 0x40);
      }
      else {
        uVar35 = -((uint)((int)puVar34 * 0x20000000) >> 0x1e) & 7;
        if (uVar43 <= uVar35) {
          uVar35 = uVar43;
        }
        if (uVar35 == 0) {
          iVar47 = 0x40;
          iVar57 = 0x83;
          uVar44 = uVar43;
        }
        else {
          uVar60 = video->vram_map_allocation_bitmap[0x83];
          uVar44 = uVar43 - 1;
          video->vram_map[0x83] = puVar48;
          video->vram_map_dirty_bit_numbers[0x83] = '@';
          video->vram_map_allocation_bitmap[0x83] = uVar60 | 0x100;
          if (uVar35 == 1) {
            iVar47 = 0x41;
            iVar57 = 0x84;
          }
          else {
            uVar60 = video->vram_map_allocation_bitmap[0x84];
            video->vram_map[0x84] = puVar48;
            uVar44 = uVar43 - 2;
            video->vram_map_allocation_bitmap[0x84] = uVar60 | 0x100;
            video->vram_map_dirty_bit_numbers[0x84] = 'A';
            if (uVar35 == 2) {
              iVar47 = 0x42;
              iVar57 = 0x85;
            }
            else {
              uVar60 = video->vram_map_allocation_bitmap[0x85];
              video->vram_map[0x85] = puVar48;
              uVar44 = uVar43 - 3;
              video->vram_map_dirty_bit_numbers[0x85] = 'B';
              video->vram_map_allocation_bitmap[0x85] = uVar60 | 0x100;
              if (uVar35 == 3) {
                iVar47 = 0x43;
                iVar57 = 0x86;
              }
              else {
                uVar60 = video->vram_map_allocation_bitmap[0x86];
                video->vram_map[0x86] = puVar48;
                uVar44 = uVar43 - 4;
                video->vram_map_allocation_bitmap[0x86] = uVar60 | 0x100;
                video->vram_map_dirty_bit_numbers[0x86] = 'C';
                if (uVar35 == 4) {
                  iVar47 = 0x44;
                  iVar57 = 0x87;
                }
                else {
                  uVar60 = video->vram_map_allocation_bitmap[0x87];
                  video->vram_map[0x87] = puVar48;
                  uVar44 = uVar43 - 5;
                  video->vram_map_dirty_bit_numbers[0x87] = 'D';
                  video->vram_map_allocation_bitmap[0x87] = uVar60 | 0x100;
                  if (uVar35 == 5) {
                    iVar47 = 0x45;
                    iVar57 = 0x88;
                  }
                  else {
                    uVar60 = video->vram_map_allocation_bitmap[0x88];
                    video->vram_map[0x88] = puVar48;
                    uVar44 = uVar43 - 6;
                    video->vram_map_allocation_bitmap[0x88] = uVar60 | 0x100;
                    video->vram_map_dirty_bit_numbers[0x88] = 'E';
                    if (uVar35 == 7) {
                      uVar60 = video->vram_map_allocation_bitmap[0x89];
                      uVar44 = uVar43 - 7;
                      video->vram_map[0x89] = puVar48;
                      iVar47 = 0x47;
                      video->vram_map_dirty_bit_numbers[0x89] = 'F';
                      iVar57 = 0x8a;
                      video->vram_map_allocation_bitmap[0x89] = uVar60 | 0x100;
                    }
                    else {
                      iVar47 = 0x46;
                      iVar57 = 0x89;
                    }
                  }
                }
              }
            }
          }
          if (uVar43 == uVar35) goto LAB_0802b0dc;
        }
        uVar64 = ((uVar43 - uVar35) - 0x10 >> 4) + 1;
        iVar36 = uVar64 * 0x10;
        if (0xe < (uVar43 - 1) - uVar35) {
          auVar6._4_4_ = iVar47;
          auVar6._0_4_ = iVar47;
          auVar6._8_8_ = 0;
          auVar94._8_8_ = 0x300000002;
          auVar94._0_8_ = 0x100000000;
          local_98 = 0;
          auVar1 = SIMDExpandImmediate(0,0,0x10);
          auVar2 = SIMDExpandImmediate(0,0,4);
          auVar89 = SIMDExpandImmediate(0,0,8);
          auVar84 = SIMDExpandImmediate(0,0,0xc);
          puVar56 = video->vram_map_dirty_bit_numbers + uVar35 + 0x83;
          auVar86 = VectorAdd(auVar6 & auVar6 << 0x40,auVar94,4);
          ppuVar51 = video->vram_map + uVar35 + 0x83;
          puVar34 = video->vram_map_allocation_bitmap + uVar35 + 0x93;
          puVar52 = video->vram_map_allocation_bitmap + uVar35 + 0x93;
          do {
            auVar81 = *(undefined (*) [16])(puVar52 + -0x10);
            auVar99 = VectorAdd(auVar86,auVar2,4);
            auVar101 = VectorAdd(auVar86,auVar89,4);
            auVar83 = *(undefined (*) [16])(puVar52 + -8);
            *(undefined8 *)ppuVar51 = 0;
            *(undefined8 *)(ppuVar51 + 2) = 0;
            uVar72 = VectorCopyNarrow(auVar86,4);
            uVar73 = VectorCopyNarrow(auVar99,4);
            auVar99 = VectorAdd(auVar86,auVar84,4);
            auVar86 = VectorAdd(auVar86,auVar1,4);
            local_98 = local_98 + 1;
            auVar78._0_8_ = VectorCopyNarrow(auVar101,4);
            auVar78._8_8_ = VectorCopyNarrow(auVar99,4);
            auVar101 = SIMDExpandImmediate(0,0xb,1);
            auVar27._8_8_ = uVar73;
            auVar27._0_8_ = uVar72;
            uVar72 = VectorCopyNarrow(auVar27,2);
            uVar73 = VectorCopyNarrow(auVar78,2);
            auVar99 = SIMDExpandImmediate(0,0xb,1);
            *(undefined8 *)(ppuVar51 + 4) = 0;
            *(undefined8 *)(ppuVar51 + 6) = 0;
            *(undefined8 *)(ppuVar51 + 8) = 0;
            *(undefined8 *)(ppuVar51 + 10) = 0;
            *(undefined8 *)(ppuVar51 + 0xc) = 0;
            *(undefined8 *)(ppuVar51 + 0xe) = 0;
            *(longlong *)(puVar34 + -0x10) = SUB168(auVar81 | auVar101,0);
            *(longlong *)(puVar34 + -0xc) = SUB168(auVar81 | auVar101,8);
            *(longlong *)(puVar34 + -8) = SUB168(auVar83 | auVar99,0);
            *(longlong *)(puVar34 + -4) = SUB168(auVar83 | auVar99,8);
            *(undefined8 *)puVar56 = uVar72;
            *(undefined8 *)(puVar56 + 8) = uVar73;
            puVar56 = puVar56 + 0x10;
            ppuVar51 = ppuVar51 + 0x10;
            puVar34 = puVar34 + 0x10;
            puVar52 = puVar52 + 0x10;
          } while (local_98 < uVar64);
          uVar44 = uVar44 + uVar64 * -0x10;
          iVar47 = iVar47 + iVar36;
          iVar57 = iVar57 + iVar36;
          if (uVar43 - uVar35 == iVar36) goto LAB_0802b0dc;
        }
        uVar32 = (u8)iVar47;
        uVar60 = video->vram_map_allocation_bitmap[iVar57];
        video->vram_map[iVar57] = puVar48;
        video->vram_map_allocation_bitmap[iVar57] = uVar60 | 0x100;
        video->vram_map_dirty_bit_numbers[iVar57] = uVar32;
        if (uVar44 != 1) {
          local_9c._0_1_ = uVar32 + '\x02';
          video->vram_map[iVar57 + 1] = puVar48;
          video->vram_map_allocation_bitmap[iVar57 + 1] =
               video->vram_map_allocation_bitmap[iVar57 + 1] | 0x100;
          video->vram_map_dirty_bit_numbers[iVar57 + 1] = uVar32 + '\x01';
          if (uVar44 != 2) {
            video->vram_map[iVar57 + 2] = puVar48;
            video->vram_map_allocation_bitmap[iVar57 + 2] =
                 video->vram_map_allocation_bitmap[iVar57 + 2] | 0x100;
            video->vram_map_dirty_bit_numbers[iVar57 + 2] = (u8)local_9c;
            if (uVar44 != 3) {
              local_9c._0_1_ = uVar32 + '\x04';
              video->vram_map[iVar57 + 3] = puVar48;
              video->vram_map_allocation_bitmap[iVar57 + 3] =
                   video->vram_map_allocation_bitmap[iVar57 + 3] | 0x100;
              video->vram_map_dirty_bit_numbers[iVar57 + 3] = uVar32 + '\x03';
              if (uVar44 != 4) {
                video->vram_map[iVar57 + 4] = puVar48;
                video->vram_map_allocation_bitmap[iVar57 + 4] =
                     video->vram_map_allocation_bitmap[iVar57 + 4] | 0x100;
                video->vram_map_dirty_bit_numbers[iVar57 + 4] = (u8)local_9c;
                if (uVar44 != 5) {
                  local_9c._0_1_ = uVar32 + '\x06';
                  video->vram_map[iVar57 + 5] = puVar48;
                  video->vram_map_allocation_bitmap[iVar57 + 5] =
                       video->vram_map_allocation_bitmap[iVar57 + 5] | 0x100;
                  video->vram_map_dirty_bit_numbers[iVar57 + 5] = uVar32 + '\x05';
                  if (uVar44 != 6) {
                    video->vram_map[iVar57 + 6] = puVar48;
                    video->vram_map_allocation_bitmap[iVar57 + 6] =
                         video->vram_map_allocation_bitmap[iVar57 + 6] | 0x100;
                    video->vram_map_dirty_bit_numbers[iVar57 + 6] = (u8)local_9c;
                    if (uVar44 != 7) {
                      local_9c._0_1_ = uVar32 + '\b';
                      video->vram_map[iVar57 + 7] = puVar48;
                      video->vram_map_allocation_bitmap[iVar57 + 7] =
                           video->vram_map_allocation_bitmap[iVar57 + 7] | 0x100;
                      video->vram_map_dirty_bit_numbers[iVar57 + 7] = uVar32 + '\a';
                      if (uVar44 != 8) {
                        video->vram_map[iVar57 + 8] = puVar48;
                        video->vram_map_allocation_bitmap[iVar57 + 8] =
                             video->vram_map_allocation_bitmap[iVar57 + 8] | 0x100;
                        video->vram_map_dirty_bit_numbers[iVar57 + 8] = (u8)local_9c;
                        if (uVar44 != 9) {
                          local_9c._0_1_ = uVar32 + '\n';
                          video->vram_map[iVar57 + 9] = puVar48;
                          video->vram_map_allocation_bitmap[iVar57 + 9] =
                               video->vram_map_allocation_bitmap[iVar57 + 9] | 0x100;
                          video->vram_map_dirty_bit_numbers[iVar57 + 9] = uVar32 + '\t';
                          if (uVar44 != 10) {
                            video->vram_map[iVar57 + 10] = puVar48;
                            video->vram_map_allocation_bitmap[iVar57 + 10] =
                                 video->vram_map_allocation_bitmap[iVar57 + 10] | 0x100;
                            video->vram_map_dirty_bit_numbers[iVar57 + 10] = (u8)local_9c;
                            if (uVar44 != 0xb) {
                              local_9c._0_1_ = uVar32 + '\f';
                              video->vram_map[iVar57 + 0xb] = puVar48;
                              video->vram_map_allocation_bitmap[iVar57 + 0xb] =
                                   video->vram_map_allocation_bitmap[iVar57 + 0xb] | 0x100;
                              video->vram_map_dirty_bit_numbers[iVar57 + 0xb] = uVar32 + '\v';
                              if (uVar44 != 0xc) {
                                video->vram_map[iVar57 + 0xc] = puVar48;
                                video->vram_map_allocation_bitmap[iVar57 + 0xc] =
                                     video->vram_map_allocation_bitmap[iVar57 + 0xc] | 0x100;
                                video->vram_map_dirty_bit_numbers[iVar57 + 0xc] = (u8)local_9c;
                                if (uVar44 != 0xd) {
                                  video->vram_map[iVar57 + 0xd] = puVar48;
                                  video->vram_map_allocation_bitmap[iVar57 + 0xd] =
                                       video->vram_map_allocation_bitmap[iVar57 + 0xd] | 0x100;
                                  video->vram_map_dirty_bit_numbers[iVar57 + 0xd] = uVar32 + '\r';
                                  if (uVar44 != 0xe) {
                                    video->vram_map[iVar57 + 0xe] = puVar48;
                                    video->vram_map_allocation_bitmap[iVar57 + 0xe] =
                                         video->vram_map_allocation_bitmap[iVar57 + 0xe] | 0x100;
                                    video->vram_map_dirty_bit_numbers[iVar57 + 0xe] =
                                         uVar32 + '\x0e';
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
LAB_0802b0dc:
      ppuVar51 = video->vram_map + 0x86;
      unmap_memory_page_region_direct(video->memory->memory_interface_arm9,0x6218000,uVar42);
      puVar56 = video->vram_map_dirty_bit_numbers + 0x86;
      uVar35 = video->vram_map_dirty_bitmap_fine[4];
      ppuVar39 = video->vram_map + uVar43 + 0x86;
      puVar52 = video->vram_map_allocation_bitmap + uVar43 + 0x86;
      puVar34 = video->vram_map_allocation_bitmap + 0x86;
      bVar66 = ppuVar51 <= puVar52;
      bVar65 = (u8 **)puVar52 == ppuVar51;
      if (bVar66 && !bVar65) {
        bVar66 = puVar34 <= ppuVar39;
        bVar65 = ppuVar39 == (u8 **)puVar34;
      }
      video->vram_map_dirty_bitmap_coarse = video->vram_map_dirty_bitmap_coarse | 0x10;
      puVar48 = vram_buffer + -0x218000;
      video->vram_map_dirty_bitmap_fine[4] = uVar35 | uVar49 << 6;
      if (((bVar66 && !bVar65 ||
           puVar56 < ppuVar39 && ppuVar51 < video->vram_map_dirty_bit_numbers + uVar43 + 0x86) ||
          bVar67) ||
          puVar56 < puVar52 && puVar34 < video->vram_map_dirty_bit_numbers + uVar43 + 0x86) {
        ppuVar39 = video->vram_map + 0x85;
        puVar40 = video->vram_map_dirty_bit_numbers + 0x85;
        iVar57 = 0x40;
        do {
          uVar60 = *puVar34;
          ppuVar39 = ppuVar39 + 1;
          *ppuVar39 = puVar48;
          *puVar34 = uVar60 | 0x100;
          puVar40 = puVar40 + 1;
          *puVar40 = (u8)iVar57;
          iVar57 = iVar57 + 1;
          puVar34 = puVar34 + 1;
        } while (iVar57 != uVar43 + 0x40);
      }
      else {
        uVar35 = -((uint)((int)video << 0x1d) >> 0x1e) & 7;
        if (uVar43 <= uVar35) {
          uVar35 = uVar43;
        }
        if (uVar35 == 0) {
          iVar47 = 0x40;
          iVar57 = 0x86;
          uVar44 = uVar43;
        }
        else {
          uVar60 = video->vram_map_allocation_bitmap[0x86];
          uVar44 = uVar43 - 1;
          video->vram_map[0x86] = puVar48;
          video->vram_map_allocation_bitmap[0x86] = uVar60 | 0x100;
          video->vram_map_dirty_bit_numbers[0x86] = '@';
          if (uVar35 == 1) {
            iVar47 = 0x41;
            iVar57 = 0x87;
          }
          else {
            uVar60 = video->vram_map_allocation_bitmap[0x87];
            video->vram_map[0x87] = puVar48;
            uVar44 = uVar43 - 2;
            video->vram_map_dirty_bit_numbers[0x87] = 'A';
            video->vram_map_allocation_bitmap[0x87] = uVar60 | 0x100;
            if (uVar35 == 2) {
              iVar47 = 0x42;
              iVar57 = 0x88;
            }
            else {
              uVar60 = video->vram_map_allocation_bitmap[0x88];
              video->vram_map[0x88] = puVar48;
              uVar44 = uVar43 - 3;
              video->vram_map_allocation_bitmap[0x88] = uVar60 | 0x100;
              video->vram_map_dirty_bit_numbers[0x88] = 'B';
              if (uVar35 == 3) {
                iVar47 = 0x43;
                iVar57 = 0x89;
              }
              else {
                uVar60 = video->vram_map_allocation_bitmap[0x89];
                video->vram_map[0x89] = puVar48;
                uVar44 = uVar43 - 4;
                video->vram_map_dirty_bit_numbers[0x89] = 'C';
                video->vram_map_allocation_bitmap[0x89] = uVar60 | 0x100;
                if (uVar35 == 4) {
                  iVar47 = 0x44;
                  iVar57 = 0x8a;
                }
                else {
                  uVar60 = video->vram_map_allocation_bitmap[0x8a];
                  video->vram_map[0x8a] = puVar48;
                  uVar44 = uVar43 - 5;
                  video->vram_map_allocation_bitmap[0x8a] = uVar60 | 0x100;
                  video->vram_map_dirty_bit_numbers[0x8a] = 'D';
                  if (uVar35 == 5) {
                    iVar47 = 0x45;
                    iVar57 = 0x8b;
                  }
                  else {
                    uVar60 = video->vram_map_allocation_bitmap[0x8b];
                    video->vram_map[0x8b] = puVar48;
                    uVar44 = uVar43 - 6;
                    video->vram_map_dirty_bit_numbers[0x8b] = 'E';
                    video->vram_map_allocation_bitmap[0x8b] = uVar60 | 0x100;
                    if (uVar35 == 7) {
                      uVar60 = video->vram_map_allocation_bitmap[0x8c];
                      uVar44 = uVar43 - 7;
                      iVar47 = 0x47;
                      iVar57 = 0x8d;
                      video->vram_map[0x8c] = puVar48;
                      video->vram_map_allocation_bitmap[0x8c] = uVar60 | 0x100;
                      video->vram_map_dirty_bit_numbers[0x8c] = 'F';
                    }
                    else {
                      iVar47 = 0x46;
                      iVar57 = 0x8c;
                    }
                  }
                }
              }
            }
          }
          if (uVar43 == uVar35) goto LAB_0802b70c;
        }
        uVar64 = ((uVar43 - uVar35) - 0x10 >> 4) + 1;
        iVar36 = uVar64 * 0x10;
        if (0xe < (uVar43 - 1) - uVar35) {
          auVar7._4_4_ = iVar47;
          auVar7._0_4_ = iVar47;
          auVar7._8_8_ = 0;
          auVar95._8_8_ = 0x300000002;
          auVar95._0_8_ = 0x100000000;
          local_90 = 0;
          auVar1 = SIMDExpandImmediate(0,0,0x10);
          auVar2 = SIMDExpandImmediate(0,0,4);
          auVar89 = SIMDExpandImmediate(0,0,8);
          auVar84 = SIMDExpandImmediate(0,0,0xc);
          puVar40 = video->vram_map_dirty_bit_numbers + uVar35 + 0x86;
          auVar86 = VectorAdd(auVar7 & auVar7 << 0x40,auVar95,4);
          ppuVar39 = video->vram_map + uVar35 + 0x86;
          puVar34 = video->vram_map_allocation_bitmap + uVar35 + 0x96;
          puVar52 = video->vram_map_allocation_bitmap + uVar35 + 0x96;
          do {
            auVar81 = *(undefined (*) [16])(puVar52 + -0x10);
            auVar99 = VectorAdd(auVar86,auVar2,4);
            auVar101 = VectorAdd(auVar86,auVar89,4);
            auVar83 = *(undefined (*) [16])(puVar52 + -8);
            *(undefined8 *)ppuVar39 = 0;
            *(undefined8 *)(ppuVar39 + 2) = 0;
            uVar72 = VectorCopyNarrow(auVar86,4);
            uVar73 = VectorCopyNarrow(auVar99,4);
            auVar99 = VectorAdd(auVar86,auVar84,4);
            auVar86 = VectorAdd(auVar86,auVar1,4);
            local_90 = local_90 + 1;
            auVar79._0_8_ = VectorCopyNarrow(auVar101,4);
            auVar79._8_8_ = VectorCopyNarrow(auVar99,4);
            auVar101 = SIMDExpandImmediate(0,0xb,1);
            auVar28._8_8_ = uVar73;
            auVar28._0_8_ = uVar72;
            uVar72 = VectorCopyNarrow(auVar28,2);
            uVar73 = VectorCopyNarrow(auVar79,2);
            auVar99 = SIMDExpandImmediate(0,0xb,1);
            *(undefined8 *)(ppuVar39 + 4) = 0;
            *(undefined8 *)(ppuVar39 + 6) = 0;
            *(undefined8 *)(ppuVar39 + 8) = 0;
            *(undefined8 *)(ppuVar39 + 10) = 0;
            *(undefined8 *)(ppuVar39 + 0xc) = 0;
            *(undefined8 *)(ppuVar39 + 0xe) = 0;
            *(longlong *)(puVar34 + -0x10) = SUB168(auVar81 | auVar101,0);
            *(longlong *)(puVar34 + -0xc) = SUB168(auVar81 | auVar101,8);
            *(longlong *)(puVar34 + -8) = SUB168(auVar83 | auVar99,0);
            *(longlong *)(puVar34 + -4) = SUB168(auVar83 | auVar99,8);
            *(undefined8 *)puVar40 = uVar72;
            *(undefined8 *)(puVar40 + 8) = uVar73;
            puVar40 = puVar40 + 0x10;
            ppuVar39 = ppuVar39 + 0x10;
            puVar34 = puVar34 + 0x10;
            puVar52 = puVar52 + 0x10;
          } while (local_90 < uVar64);
          uVar44 = uVar44 + uVar64 * -0x10;
          iVar47 = iVar47 + iVar36;
          iVar57 = iVar57 + iVar36;
          if (uVar43 - uVar35 == iVar36) goto LAB_0802b70c;
        }
        uVar32 = (u8)iVar47;
        uVar60 = video->vram_map_allocation_bitmap[iVar57];
        video->vram_map[iVar57] = puVar48;
        video->vram_map_allocation_bitmap[iVar57] = uVar60 | 0x100;
        video->vram_map_dirty_bit_numbers[iVar57] = uVar32;
        if (uVar44 != 1) {
          local_94 = uVar32 + '\x02';
          video->vram_map[iVar57 + 1] = puVar48;
          video->vram_map_allocation_bitmap[iVar57 + 1] =
               video->vram_map_allocation_bitmap[iVar57 + 1] | 0x100;
          video->vram_map_dirty_bit_numbers[iVar57 + 1] = uVar32 + '\x01';
          if (uVar44 != 2) {
            video->vram_map[iVar57 + 2] = puVar48;
            video->vram_map_allocation_bitmap[iVar57 + 2] =
                 video->vram_map_allocation_bitmap[iVar57 + 2] | 0x100;
            video->vram_map_dirty_bit_numbers[iVar57 + 2] = local_94;
            if (uVar44 != 3) {
              local_94 = uVar32 + '\x04';
              video->vram_map[iVar57 + 3] = puVar48;
              video->vram_map_allocation_bitmap[iVar57 + 3] =
                   video->vram_map_allocation_bitmap[iVar57 + 3] | 0x100;
              video->vram_map_dirty_bit_numbers[iVar57 + 3] = uVar32 + '\x03';
              if (uVar44 != 4) {
                video->vram_map[iVar57 + 4] = puVar48;
                video->vram_map_allocation_bitmap[iVar57 + 4] =
                     video->vram_map_allocation_bitmap[iVar57 + 4] | 0x100;
                video->vram_map_dirty_bit_numbers[iVar57 + 4] = local_94;
                if (uVar44 != 5) {
                  local_94 = uVar32 + '\x06';
                  video->vram_map[iVar57 + 5] = puVar48;
                  video->vram_map_allocation_bitmap[iVar57 + 5] =
                       video->vram_map_allocation_bitmap[iVar57 + 5] | 0x100;
                  video->vram_map_dirty_bit_numbers[iVar57 + 5] = uVar32 + '\x05';
                  if (uVar44 != 6) {
                    video->vram_map[iVar57 + 6] = puVar48;
                    video->vram_map_allocation_bitmap[iVar57 + 6] =
                         video->vram_map_allocation_bitmap[iVar57 + 6] | 0x100;
                    video->vram_map_dirty_bit_numbers[iVar57 + 6] = local_94;
                    if (uVar44 != 7) {
                      local_94 = uVar32 + '\b';
                      video->vram_map[iVar57 + 7] = puVar48;
                      video->vram_map_allocation_bitmap[iVar57 + 7] =
                           video->vram_map_allocation_bitmap[iVar57 + 7] | 0x100;
                      video->vram_map_dirty_bit_numbers[iVar57 + 7] = uVar32 + '\a';
                      if (uVar44 != 8) {
                        video->vram_map[iVar57 + 8] = puVar48;
                        video->vram_map_allocation_bitmap[iVar57 + 8] =
                             video->vram_map_allocation_bitmap[iVar57 + 8] | 0x100;
                        video->vram_map_dirty_bit_numbers[iVar57 + 8] = local_94;
                        if (uVar44 != 9) {
                          local_94 = uVar32 + '\n';
                          video->vram_map[iVar57 + 9] = puVar48;
                          video->vram_map_allocation_bitmap[iVar57 + 9] =
                               video->vram_map_allocation_bitmap[iVar57 + 9] | 0x100;
                          video->vram_map_dirty_bit_numbers[iVar57 + 9] = uVar32 + '\t';
                          if (uVar44 != 10) {
                            video->vram_map[iVar57 + 10] = puVar48;
                            video->vram_map_allocation_bitmap[iVar57 + 10] =
                                 video->vram_map_allocation_bitmap[iVar57 + 10] | 0x100;
                            video->vram_map_dirty_bit_numbers[iVar57 + 10] = local_94;
                            if (uVar44 != 0xb) {
                              local_94 = uVar32 + '\f';
                              video->vram_map[iVar57 + 0xb] = puVar48;
                              video->vram_map_allocation_bitmap[iVar57 + 0xb] =
                                   video->vram_map_allocation_bitmap[iVar57 + 0xb] | 0x100;
                              video->vram_map_dirty_bit_numbers[iVar57 + 0xb] = uVar32 + '\v';
                              if (uVar44 != 0xc) {
                                video->vram_map[iVar57 + 0xc] = puVar48;
                                video->vram_map_allocation_bitmap[iVar57 + 0xc] =
                                     video->vram_map_allocation_bitmap[iVar57 + 0xc] | 0x100;
                                video->vram_map_dirty_bit_numbers[iVar57 + 0xc] = local_94;
                                if (uVar44 != 0xd) {
                                  video->vram_map[iVar57 + 0xd] = puVar48;
                                  video->vram_map_allocation_bitmap[iVar57 + 0xd] =
                                       video->vram_map_allocation_bitmap[iVar57 + 0xd] | 0x100;
                                  video->vram_map_dirty_bit_numbers[iVar57 + 0xd] = uVar32 + '\r';
                                  if (uVar44 != 0xe) {
                                    video->vram_map[iVar57 + 0xe] = puVar48;
                                    video->vram_map_allocation_bitmap[iVar57 + 0xe] =
                                         video->vram_map_allocation_bitmap[iVar57 + 0xe] | 0x100;
                                    video->vram_map_dirty_bit_numbers[iVar57 + 0xe] =
                                         uVar32 + '\x0e';
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
LAB_0802b70c:
      unmap_memory_page_region_direct(video->memory->memory_interface_arm9,0x621c000,uVar42);
      puVar34 = video->vram_map_allocation_bitmap + 0x87;
      uVar35 = video->vram_map_dirty_bitmap_fine[4];
      video->vram_map_dirty_bitmap_coarse = video->vram_map_dirty_bitmap_coarse | 0x10;
      video->vram_map_dirty_bitmap_fine[4] = uVar35 | uVar49 << 7;
      puVar48 = vram_buffer + -0x21c000;
      if ((bVar67 ||
          (puVar34 < video->vram_map + uVar43 + 0x87 &&
           video->vram_map + 0x87 < video->vram_map_allocation_bitmap + uVar43 + 0x87 ||
          video->vram_map + 0x87 < video->vram_map_dirty_bit_numbers + uVar43 + 0x87 &&
          video->vram_map_dirty_bit_numbers + 0x87 < video->vram_map + uVar43 + 0x87)) ||
          puVar34 < video->vram_map_dirty_bit_numbers + uVar43 + 0x87 &&
          video->vram_map_dirty_bit_numbers + 0x87 <
          video->vram_map_allocation_bitmap + uVar43 + 0x87) {
        iVar57 = 0x40;
        do {
          uVar60 = *puVar34;
          ppuVar51 = ppuVar51 + 1;
          *ppuVar51 = puVar48;
          *puVar34 = uVar60 | 0x100;
          puVar56 = puVar56 + 1;
          *puVar56 = (u8)iVar57;
          iVar57 = iVar57 + 1;
          puVar34 = puVar34 + 1;
        } while (iVar57 != uVar43 + 0x40);
      }
      else {
        uVar35 = -((uint)((int)puVar34 * 0x20000000) >> 0x1e) & 7;
        if (uVar43 <= uVar35) {
          uVar35 = uVar43;
        }
        if (uVar35 == 0) {
          iVar47 = 0x40;
          iVar57 = 0x87;
          uVar49 = uVar43;
        }
        else {
          uVar60 = video->vram_map_allocation_bitmap[0x87];
          uVar49 = uVar43 - 1;
          video->vram_map[0x87] = puVar48;
          video->vram_map_dirty_bit_numbers[0x87] = '@';
          video->vram_map_allocation_bitmap[0x87] = uVar60 | 0x100;
          if (uVar35 == 1) {
            iVar47 = 0x41;
            iVar57 = 0x88;
          }
          else {
            uVar60 = video->vram_map_allocation_bitmap[0x88];
            video->vram_map[0x88] = puVar48;
            uVar49 = uVar43 - 2;
            video->vram_map_allocation_bitmap[0x88] = uVar60 | 0x100;
            video->vram_map_dirty_bit_numbers[0x88] = 'A';
            if (uVar35 == 2) {
              iVar47 = 0x42;
              iVar57 = 0x89;
            }
            else {
              uVar60 = video->vram_map_allocation_bitmap[0x89];
              video->vram_map[0x89] = puVar48;
              uVar49 = uVar43 - 3;
              video->vram_map_dirty_bit_numbers[0x89] = 'B';
              video->vram_map_allocation_bitmap[0x89] = uVar60 | 0x100;
              if (uVar35 == 3) {
                iVar47 = 0x43;
                iVar57 = 0x8a;
              }
              else {
                uVar60 = video->vram_map_allocation_bitmap[0x8a];
                video->vram_map[0x8a] = puVar48;
                uVar49 = uVar43 - 4;
                video->vram_map_allocation_bitmap[0x8a] = uVar60 | 0x100;
                video->vram_map_dirty_bit_numbers[0x8a] = 'C';
                if (uVar35 == 4) {
                  iVar47 = 0x44;
                  iVar57 = 0x8b;
                }
                else {
                  uVar60 = video->vram_map_allocation_bitmap[0x8b];
                  video->vram_map[0x8b] = puVar48;
                  uVar49 = uVar43 - 5;
                  video->vram_map_dirty_bit_numbers[0x8b] = 'D';
                  video->vram_map_allocation_bitmap[0x8b] = uVar60 | 0x100;
                  if (uVar35 == 5) {
                    iVar47 = 0x45;
                    iVar57 = 0x8c;
                  }
                  else {
                    uVar60 = video->vram_map_allocation_bitmap[0x8c];
                    video->vram_map[0x8c] = puVar48;
                    uVar49 = uVar43 - 6;
                    video->vram_map_allocation_bitmap[0x8c] = uVar60 | 0x100;
                    video->vram_map_dirty_bit_numbers[0x8c] = 'E';
                    if (uVar35 == 7) {
                      uVar60 = video->vram_map_allocation_bitmap[0x8d];
                      iVar47 = 0x47;
                      video->vram_map[0x8d] = puVar48;
                      video->vram_map_dirty_bit_numbers[0x8d] = 'F';
                      uVar49 = uVar43 - 7;
                      video->vram_map_allocation_bitmap[0x8d] = uVar60 | 0x100;
                      iVar57 = 0x8e;
                    }
                    else {
                      iVar47 = 0x46;
                      iVar57 = 0x8d;
                    }
                  }
                }
              }
            }
          }
          if (uVar43 == uVar35) goto LAB_0802bca0;
        }
        uVar44 = ((uVar43 - uVar35) - 0x10 >> 4) + 1;
        iVar36 = uVar44 * 0x10;
        if (0xe < (uVar43 - 1) - uVar35) {
          auVar8._4_4_ = iVar47;
          auVar8._0_4_ = iVar47;
          auVar8._8_8_ = 0;
          auVar96._8_8_ = 0x300000002;
          auVar96._0_8_ = 0x100000000;
          auVar1 = SIMDExpandImmediate(0,0,0x10);
          auVar2 = SIMDExpandImmediate(0,0,4);
          auVar89 = SIMDExpandImmediate(0,0,8);
          auVar84 = SIMDExpandImmediate(0,0,0xc);
          puVar56 = video->vram_map_dirty_bit_numbers + uVar35 + 0x87;
          local_c8 = (u16 *)0x0;
          auVar86 = VectorAdd(auVar8 & auVar8 << 0x40,auVar96,4);
          ppuVar51 = video->vram_map + uVar35 + 0x87;
          puVar34 = video->vram_map_allocation_bitmap + uVar35 + 0x97;
          puVar52 = video->vram_map_allocation_bitmap + uVar35 + 0x97;
          do {
            auVar81 = *(undefined (*) [16])(puVar34 + -0x10);
            auVar99 = VectorAdd(auVar86,auVar2,4);
            auVar101 = VectorAdd(auVar86,auVar89,4);
            auVar83 = *(undefined (*) [16])(puVar34 + -8);
            *(undefined8 *)ppuVar51 = 0;
            *(undefined8 *)(ppuVar51 + 2) = 0;
            uVar72 = VectorCopyNarrow(auVar86,4);
            uVar73 = VectorCopyNarrow(auVar99,4);
            auVar99 = VectorAdd(auVar86,auVar84,4);
            auVar86 = VectorAdd(auVar86,auVar1,4);
            local_c8 = (u16 *)((int)local_c8 + 1);
            auVar80._0_8_ = VectorCopyNarrow(auVar101,4);
            auVar80._8_8_ = VectorCopyNarrow(auVar99,4);
            auVar101 = SIMDExpandImmediate(0,0xb,1);
            auVar29._8_8_ = uVar73;
            auVar29._0_8_ = uVar72;
            uVar72 = VectorCopyNarrow(auVar29,2);
            uVar73 = VectorCopyNarrow(auVar80,2);
            auVar99 = SIMDExpandImmediate(0,0xb,1);
            *(undefined8 *)(ppuVar51 + 4) = 0;
            *(undefined8 *)(ppuVar51 + 6) = 0;
            *(undefined8 *)(ppuVar51 + 8) = 0;
            *(undefined8 *)(ppuVar51 + 10) = 0;
            *(undefined8 *)(ppuVar51 + 0xc) = 0;
            *(undefined8 *)(ppuVar51 + 0xe) = 0;
            *(longlong *)(puVar52 + -0x10) = SUB168(auVar81 | auVar101,0);
            *(longlong *)(puVar52 + -0xc) = SUB168(auVar81 | auVar101,8);
            *(longlong *)(puVar52 + -8) = SUB168(auVar83 | auVar99,0);
            *(longlong *)(puVar52 + -4) = SUB168(auVar83 | auVar99,8);
            *(undefined8 *)puVar56 = uVar72;
            *(undefined8 *)(puVar56 + 8) = uVar73;
            puVar56 = puVar56 + 0x10;
            ppuVar51 = ppuVar51 + 0x10;
            puVar34 = puVar34 + 0x10;
            puVar52 = puVar52 + 0x10;
          } while (local_c8 < uVar44);
          uVar49 = uVar49 + uVar44 * -0x10;
          iVar47 = iVar47 + iVar36;
          iVar57 = iVar57 + iVar36;
          if (iVar36 - (uVar43 - uVar35) == 0) goto LAB_0802bca0;
        }
        uVar32 = (u8)iVar47;
        uVar60 = video->vram_map_allocation_bitmap[iVar57];
        video->vram_map[iVar57] = puVar48;
        video->vram_map_allocation_bitmap[iVar57] = uVar60 | 0x100;
        video->vram_map_dirty_bit_numbers[iVar57] = uVar32;
        if (uVar49 != 1) {
          video->vram_map[iVar57 + 1] = puVar48;
          video->vram_map_allocation_bitmap[iVar57 + 1] =
               video->vram_map_allocation_bitmap[iVar57 + 1] | 0x100;
          video->vram_map_dirty_bit_numbers[iVar57 + 1] = uVar32 + '\x01';
          if (uVar49 != 2) {
            video->vram_map[iVar57 + 2] = puVar48;
            video->vram_map_allocation_bitmap[iVar57 + 2] =
                 video->vram_map_allocation_bitmap[iVar57 + 2] | 0x100;
            video->vram_map_dirty_bit_numbers[iVar57 + 2] = uVar32 + '\x02';
            if (uVar49 != 3) {
              video->vram_map[iVar57 + 3] = puVar48;
              video->vram_map_allocation_bitmap[iVar57 + 3] =
                   video->vram_map_allocation_bitmap[iVar57 + 3] | 0x100;
              video->vram_map_dirty_bit_numbers[iVar57 + 3] = uVar32 + '\x03';
              if (uVar49 != 4) {
                video->vram_map[iVar57 + 4] = puVar48;
                video->vram_map_allocation_bitmap[iVar57 + 4] =
                     video->vram_map_allocation_bitmap[iVar57 + 4] | 0x100;
                video->vram_map_dirty_bit_numbers[iVar57 + 4] = uVar32 + '\x04';
                if (uVar49 != 5) {
                  video->vram_map[iVar57 + 5] = puVar48;
                  video->vram_map_allocation_bitmap[iVar57 + 5] =
                       video->vram_map_allocation_bitmap[iVar57 + 5] | 0x100;
                  video->vram_map_dirty_bit_numbers[iVar57 + 5] = uVar32 + '\x05';
                  if (uVar49 != 6) {
                    video->vram_map[iVar57 + 6] = puVar48;
                    video->vram_map_allocation_bitmap[iVar57 + 6] =
                         video->vram_map_allocation_bitmap[iVar57 + 6] | 0x100;
                    video->vram_map_dirty_bit_numbers[iVar57 + 6] = uVar32 + '\x06';
                    if (uVar49 != 7) {
                      video->vram_map[iVar57 + 7] = puVar48;
                      video->vram_map_allocation_bitmap[iVar57 + 7] =
                           video->vram_map_allocation_bitmap[iVar57 + 7] | 0x100;
                      video->vram_map_dirty_bit_numbers[iVar57 + 7] = uVar32 + '\a';
                      if (uVar49 != 8) {
                        video->vram_map[iVar57 + 8] = puVar48;
                        video->vram_map_allocation_bitmap[iVar57 + 8] =
                             video->vram_map_allocation_bitmap[iVar57 + 8] | 0x100;
                        video->vram_map_dirty_bit_numbers[iVar57 + 8] = uVar32 + '\b';
                        if (uVar49 != 9) {
                          video->vram_map[iVar57 + 9] = puVar48;
                          video->vram_map_allocation_bitmap[iVar57 + 9] =
                               video->vram_map_allocation_bitmap[iVar57 + 9] | 0x100;
                          video->vram_map_dirty_bit_numbers[iVar57 + 9] = uVar32 + '\t';
                          if (uVar49 != 10) {
                            video->vram_map[iVar57 + 10] = puVar48;
                            video->vram_map_allocation_bitmap[iVar57 + 10] =
                                 video->vram_map_allocation_bitmap[iVar57 + 10] | 0x100;
                            video->vram_map_dirty_bit_numbers[iVar57 + 10] = uVar32 + '\n';
                            if (uVar49 != 0xb) {
                              video->vram_map[iVar57 + 0xb] = puVar48;
                              video->vram_map_allocation_bitmap[iVar57 + 0xb] =
                                   video->vram_map_allocation_bitmap[iVar57 + 0xb] | 0x100;
                              video->vram_map_dirty_bit_numbers[iVar57 + 0xb] = uVar32 + '\v';
                              if (uVar49 != 0xc) {
                                video->vram_map[iVar57 + 0xc] = puVar48;
                                video->vram_map_allocation_bitmap[iVar57 + 0xc] =
                                     video->vram_map_allocation_bitmap[iVar57 + 0xc] | 0x100;
                                video->vram_map_dirty_bit_numbers[iVar57 + 0xc] = uVar32 + '\f';
                                if (uVar49 != 0xd) {
                                  video->vram_map[iVar57 + 0xd] = puVar48;
                                  video->vram_map_allocation_bitmap[iVar57 + 0xd] =
                                       video->vram_map_allocation_bitmap[iVar57 + 0xd] | 0x100;
                                  video->vram_map_dirty_bit_numbers[iVar57 + 0xd] = uVar32 + '\r';
                                  if (uVar49 != 0xe) {
                                    video->vram_map[iVar57 + 0xe] = puVar48;
                                    video->vram_map_allocation_bitmap[iVar57 + 0xe] =
                                         video->vram_map_allocation_bitmap[iVar57 + 0xe] | 0x100;
                                    video->vram_map_dirty_bit_numbers[iVar57 + 0xe] =
                                         uVar32 + '\x0e';
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
LAB_0802bca0:
      local_cc = 0x82;
      iVar57 = 9;
      goto LAB_08028a74;
    }
LAB_0802dac8:
    vram_map_8 = (u8 **)((uVar43 >> 4) << 0xe);
    unmap_memory_page_region_direct(pmVar46->memory_interface_arm9,uVar42,(u32)vram_map_8);
LAB_0802cc50:
    uVar60 = (ushort)(1 << (vram_region & 0xff));
    local_a4 = local_cc >> 5;
    uVar49 = local_cc & 0x1f;
    uVar35 = 1 << local_a4;
    break;
  case (memory_struct *)0x2:
switchD_0802cc80_caseD_2:
    switch(vram_region) {
    case 0:
    case 1:
      pmVar46 = video->memory;
      local_cc = ((uVar35 & 1) + 0x20) * 8;
      goto LAB_0802dab0;
    case 2:
    case 3:
      uVar35 = uVar35 & 1;
      local_cc = uVar35 * 8;
      unmap_memory_page_region
                (pmVar46->memory_interface_arm7,(local_cc + 0x1800) * 0x4000,uVar43 << 10);
      uVar43 = uVar43 >> 7;
      iVar47 = uVar35 * 0x10 + 0x1da4;
      iVar57 = uVar43 + 0x44c + local_cc;
      uVar60 = (ushort)(1 << (vram_region & 0xff));
      if (uVar43 < 0xc || iVar47 + iVar57 * -4 < 0 != SBORROW4(iVar47,iVar57 * 4)) {
        puVar34 = video->arm7_vram_allocation_bitmap + uVar35 * 8;
        ppuVar51 = video->arm7_vram_slots + uVar35 * 8;
        do {
          uVar21 = *puVar34;
          ppuVar39 = ppuVar51 + 1;
          *ppuVar51 = vram_buffer;
          vram_buffer = vram_buffer + 0x20000;
          *puVar34 = uVar60 | uVar21;
          puVar34 = puVar34 + 1;
          ppuVar51 = ppuVar39;
        } while (ppuVar39 != video->arm7_vram_slots + local_cc + uVar43);
      }
      else {
        uVar49 = -((uint)((int)video->arm7_vram_allocation_bitmap * 0x20000000) >> 0x1e) & 7;
        if (uVar43 <= uVar49) {
          uVar49 = uVar43;
        }
        uVar44 = local_cc;
        uVar64 = uVar43;
        if (uVar49 != 0) {
          uVar64 = uVar43 - 1;
          uVar21 = video->arm7_vram_allocation_bitmap[uVar35 * 8];
          local_c8 = (u16 *)(vram_buffer + 0x20000);
          video->arm7_vram_slots[uVar35 * 8] = vram_buffer;
          uVar44 = local_cc + 1;
          video->arm7_vram_allocation_bitmap[uVar35 * 8] = uVar60 | uVar21;
          if (uVar49 != 1) {
            video->arm7_vram_slots[uVar35 * 8 + 1] = (u8 *)local_c8;
            uVar64 = uVar43 - 2;
            local_c8 = (u16 *)(vram_buffer + 0x40000);
            uVar44 = local_cc + 2;
            video->arm7_vram_allocation_bitmap[uVar35 * 8 + 1] =
                 uVar60 | video->arm7_vram_allocation_bitmap[uVar35 * 8 + 1];
            if (uVar49 != 2) {
              video->vram_map_dirty_bitmap_fine[uVar35 * 8] = (u32)local_c8;
              uVar64 = uVar43 - 3;
              local_c8 = (u16 *)(vram_buffer + 0x60000);
              uVar44 = local_cc + 3;
              *(ushort *)(video->palette_ram + uVar35 * 4) =
                   uVar60 | *(ushort *)(video->palette_ram + uVar35 * 4);
              if (uVar49 != 3) {
                video->vram_map_dirty_bitmap_fine[uVar35 * 8 + 1] = (u32)local_c8;
                uVar64 = uVar43 - 4;
                local_c8 = (u16 *)(vram_buffer + 0x80000);
                uVar44 = local_cc + 4;
                *(ushort *)((int)video->palette_ram + uVar35 * 0x10 + 2) =
                     uVar60 | *(ushort *)((int)video->palette_ram + uVar35 * 0x10 + 2);
                if (uVar49 != 4) {
                  video->vram_map_dirty_bitmap_fine[uVar35 * 8 + 2] = (u32)local_c8;
                  uVar64 = uVar43 - 5;
                  local_c8 = (u16 *)(vram_buffer + 0xa0000);
                  uVar44 = local_cc + 5;
                  *(ushort *)(video->palette_ram + uVar35 * 4 + 1) =
                       uVar60 | *(ushort *)(video->palette_ram + uVar35 * 4 + 1);
                  if (uVar49 != 5) {
                    video->vram_map_dirty_bitmap_fine[uVar35 * 8 + 3] = (u32)local_c8;
                    uVar64 = uVar43 - 6;
                    local_c8 = (u16 *)(vram_buffer + 0xc0000);
                    uVar44 = local_cc + 6;
                    *(ushort *)((int)video->palette_ram + uVar35 * 0x10 + 6) =
                         uVar60 | *(ushort *)((int)video->palette_ram + uVar35 * 0x10 + 6);
                    if (uVar49 == 7) {
                      video->vram_map_dirty_bitmap_fine[uVar35 * 8 + 4] = (u32)local_c8;
                      local_c8 = (u16 *)(vram_buffer + 0xe0000);
                      *(ushort *)(video->oam_ram + uVar35 * 4) =
                           uVar60 | *(ushort *)(video->oam_ram + uVar35 * 4);
                      uVar44 = local_cc + 7;
                      uVar64 = uVar43 - 7;
                    }
                  }
                }
              }
            }
          }
        }
        uVar61 = ((uVar43 - uVar49) - 8 >> 3) + 1;
        if (6 < (uVar43 - 1) - uVar49) {
          auVar98._8_8_ = 0x6000000040000;
          auVar98._0_8_ = 0x2000000000000;
          auVar1 = SIMDExpandImmediate(0,4,0x10);
          auVar9._4_4_ = CONCAT22(uVar60,uVar60);
          auVar9._0_4_ = CONCAT22(uVar60,uVar60);
          auVar9._8_8_ = 0;
          uVar37 = 0;
          auVar2 = SIMDExpandImmediate(0,4,8);
          auVar10._4_4_ = local_c8;
          auVar10._0_4_ = local_c8;
          auVar10._8_8_ = 0;
          ppuVar53 = (u16 **)(video->arm7_vram_allocation_bitmap + uVar49 + uVar35 * 8);
          auVar89 = VectorAdd(auVar10 & auVar10 << 0x40,auVar98,4);
          ppuVar41 = ppuVar53;
          ppuVar51 = video->arm7_vram_slots + uVar49 + uVar35 * 8;
          do {
            auVar84 = *(undefined (*) [16])ppuVar53;
            auVar86 = VectorAdd(auVar89,auVar2,4);
            uVar37 = uVar37 + 1;
            *(longlong *)ppuVar51 = auVar89._0_8_;
            *(longlong *)(ppuVar51 + 2) = auVar89._8_8_;
            ppuVar53 = ppuVar53 + 4;
            auVar89 = VectorAdd(auVar89,auVar1,4);
            *(longlong *)(ppuVar51 + 4) = auVar86._0_8_;
            *(longlong *)(ppuVar51 + 6) = auVar86._8_8_;
            auVar84 = auVar84 | auVar9 & auVar9 << 0x40;
            *(longlong *)ppuVar41 = auVar84._0_8_;
            *(longlong *)(ppuVar41 + 2) = auVar84._8_8_;
            ppuVar41 = ppuVar41 + 4;
            ppuVar51 = ppuVar51 + 8;
          } while (uVar37 < uVar61);
          uVar44 = uVar44 + uVar61 * 8;
          uVar64 = uVar64 + uVar61 * -8;
          local_c8 = (u16 *)((int)local_c8 + uVar61 * 0x100000);
          if (uVar43 - uVar49 == uVar61 * 8) goto LAB_0802c430;
        }
        uVar21 = video->arm7_vram_allocation_bitmap[uVar44];
        video->arm7_vram_slots[uVar44] = (u8 *)local_c8;
        video->arm7_vram_allocation_bitmap[uVar44] = uVar60 | uVar21;
        if (uVar64 != 1) {
          video->arm7_vram_slots[uVar44 + 1] = (u8 *)((int)local_c8 + 0x20000);
          video->arm7_vram_allocation_bitmap[uVar44 + 1] =
               uVar60 | video->arm7_vram_allocation_bitmap[uVar44 + 1];
          if (uVar64 != 2) {
            video->vram_map_dirty_bitmap_fine[uVar44] = (u32)((int)local_c8 + 0x40000);
            *(ushort *)((int)video->palette_ram + uVar44 * 2) =
                 uVar60 | *(ushort *)((int)video->palette_ram + uVar44 * 2);
            if (uVar64 != 3) {
              video->vram_map_dirty_bitmap_fine[uVar44 + 1] = (u32)((int)local_c8 + 0x60000);
              *(ushort *)((int)video->palette_ram + uVar44 * 2 + 2) =
                   uVar60 | *(ushort *)((int)video->palette_ram + uVar44 * 2 + 2);
              if (uVar64 != 4) {
                video->vram_map_dirty_bitmap_fine[uVar44 + 2] = (u32)((int)local_c8 + 0x80000);
                *(ushort *)((int)video->palette_ram + uVar44 * 2 + 4) =
                     uVar60 | *(ushort *)((int)video->palette_ram + uVar44 * 2 + 4);
                if (uVar64 != 5) {
                  video->vram_map_dirty_bitmap_fine[uVar44 + 3] = (u32)((int)local_c8 + 0xa0000);
                  *(ushort *)((int)video->palette_ram + uVar44 * 2 + 6) =
                       uVar60 | *(ushort *)((int)video->palette_ram + uVar44 * 2 + 6);
                  if (uVar64 != 6) {
                    video->vram_map_dirty_bitmap_fine[uVar44 + 4] = (u32)((int)local_c8 + 0xc0000);
                    *(ushort *)((int)video->oam_ram + uVar44 * 2) =
                         uVar60 | *(ushort *)((int)video->oam_ram + uVar44 * 2);
                  }
                }
              }
            }
          }
        }
      }
LAB_0802c430:
      iVar57 = 7;
      goto LAB_08028a74;
    case 4:
switchD_0802e794_caseD_2:
      uVar35 = 0x100;
      iVar57 = -0x400000;
      local_cc = 0x100;
      uVar42 = 0x6400000;
      vram_map_3 = (u8 **)0x80;
      local_a4 = 8;
      break;
    case 5:
    case 6:
      pmVar46 = video->memory;
      local_cc = (uVar35 & 1) + 0x100 + (uVar35 & 2) * 2;
      goto LAB_0802ccb8;
    case 7:
      local_cc = 0;
      iVar57 = 1;
      goto LAB_0802e228;
    case 8:
switchD_08028b10_caseD_3:
      iVar57 = -0x600000;
      uVar42 = 0x6600000;
      vram_map_3 = (u8 **)0x100;
      uVar35 = 0x1000;
      local_a4 = 0xc;
      local_cc = 0x180;
      break;
    default:
switchD_08028b10_caseD_9:
      iVar57 = 0;
      vram_map_8 = (u8 **)((uVar43 >> 4) << 0xe);
      unmap_memory_page_region_direct
                (video->memory->memory_interface_arm9,0x6000000,(u32)vram_map_8);
      local_cc = 0;
      vram_map_3 = (u8 **)0xffffff80;
      goto LAB_0802cc50;
    }
    goto LAB_0802cb9c;
  case (memory_struct *)0x3:
switchD_0802cc80_caseD_3:
    switch(vram_region) {
    case 0:
    case 1:
    case 2:
    case 3:
      uVar43 = uVar43 >> 7;
      iVar57 = local_cc * 2 + 0x1d90;
      iVar47 = uVar43 + 0x442 + local_cc;
      uVar35 = video->vram_abcd_dirty;
      uVar60 = (ushort)(1 << (vram_region & 0xff));
      if (uVar43 < 0xc || iVar57 + iVar47 * -4 < 0 != SBORROW4(iVar57,iVar47 * 4)) {
        puVar34 = video->texture_allocation_bitmap + local_cc;
        ppuVar51 = video->texture_slots + local_cc;
        do {
          uVar21 = *puVar34;
          ppuVar39 = ppuVar51 + 1;
          *ppuVar51 = vram_buffer;
          vram_buffer = vram_buffer + 0x20000;
          *puVar34 = uVar60 | uVar21;
          puVar34 = puVar34 + 1;
          ppuVar51 = ppuVar39;
        } while (ppuVar39 != video->texture_slots + local_cc + uVar43);
      }
      else {
        uVar49 = -((uint)((int)(video->texture_allocation_bitmap + local_cc) * 0x20000000) >> 0x1e)
                 & 7;
        if (uVar43 <= uVar49) {
          uVar49 = uVar43;
        }
        uVar44 = local_cc;
        uVar64 = uVar43;
        if (uVar49 != 0) {
          uVar64 = uVar43 - 1;
          uVar21 = video->texture_allocation_bitmap[local_cc];
          video->texture_slots[local_cc] = vram_buffer;
          local_c8 = (u16 *)(vram_buffer + 0x20000);
          uVar44 = local_cc + 1;
          video->texture_allocation_bitmap[local_cc] = uVar60 | uVar21;
          if (uVar49 != 1) {
            video->texture_slots[local_cc + 1] = (u8 *)local_c8;
            uVar64 = uVar43 - 2;
            local_c8 = (u16 *)(vram_buffer + 0x40000);
            uVar44 = local_cc + 2;
            video->texture_allocation_bitmap[local_cc + 1] =
                 uVar60 | video->texture_allocation_bitmap[local_cc + 1];
            if (uVar49 != 2) {
              video->texture_slots[local_cc + 2] = (u8 *)local_c8;
              uVar64 = uVar43 - 3;
              local_c8 = (u16 *)(vram_buffer + 0x60000);
              uVar44 = local_cc + 3;
              video->texture_allocation_bitmap[local_cc + 2] =
                   uVar60 | video->texture_allocation_bitmap[local_cc + 2];
              if (uVar49 != 3) {
                video->texture_slots[local_cc + 3] = (u8 *)local_c8;
                uVar64 = uVar43 - 4;
                local_c8 = (u16 *)(vram_buffer + 0x80000);
                uVar44 = local_cc + 4;
                video->texture_allocation_bitmap[local_cc + 3] =
                     uVar60 | video->texture_allocation_bitmap[local_cc + 3];
                if (uVar49 != 4) {
                  video->texture_palette_slots[local_cc] = local_c8;
                  uVar64 = uVar43 - 5;
                  local_c8 = (u16 *)(vram_buffer + 0xa0000);
                  uVar44 = local_cc + 5;
                  video->texture_palette_allocation_bitmap[local_cc] =
                       uVar60 | video->texture_palette_allocation_bitmap[local_cc];
                  if (uVar49 != 5) {
                    video->texture_palette_slots[local_cc + 1] = local_c8;
                    uVar64 = uVar43 - 6;
                    local_c8 = (u16 *)(vram_buffer + 0xc0000);
                    uVar44 = local_cc + 6;
                    video->texture_palette_allocation_bitmap[local_cc + 1] =
                         uVar60 | video->texture_palette_allocation_bitmap[local_cc + 1];
                    if (uVar49 == 7) {
                      video->texture_palette_slots[local_cc + 2] = local_c8;
                      local_c8 = (u16 *)(vram_buffer + 0xe0000);
                      video->texture_palette_allocation_bitmap[local_cc + 2] =
                           uVar60 | video->texture_palette_allocation_bitmap[local_cc + 2];
                      uVar44 = local_cc + 7;
                      uVar64 = uVar43 - 7;
                    }
                  }
                }
              }
            }
          }
        }
        uVar61 = ((uVar43 - uVar49) - 8 >> 3) + 1;
        if (6 < (uVar43 - 1) - uVar49) {
          auVar1 = SIMDExpandImmediate(0,4,0x10);
          auVar97._8_8_ = 0x6000000040000;
          auVar97._0_8_ = 0x2000000000000;
          puVar52 = video->texture_allocation_bitmap + uVar49 + local_cc;
          auVar83._4_4_ = CONCAT22(uVar60,uVar60);
          auVar83._0_4_ = CONCAT22(uVar60,uVar60);
          auVar83._8_8_ = 0;
          uVar37 = 0;
          auVar2 = SIMDExpandImmediate(0,4,8);
          auVar82._4_4_ = local_c8;
          auVar82._0_4_ = local_c8;
          auVar82._8_8_ = 0;
          auVar89 = VectorAdd(auVar82 & auVar82 << 0x40,auVar97,4);
          ppuVar41 = (u16 **)(video->texture_slots + uVar49 + local_cc);
          puVar34 = puVar52;
          do {
            auVar84 = *(undefined (*) [16])puVar52;
            auVar86 = VectorAdd(auVar89,auVar2,4);
            uVar37 = uVar37 + 1;
            *(longlong *)ppuVar41 = auVar89._0_8_;
            *(longlong *)(ppuVar41 + 2) = auVar89._8_8_;
            puVar52 = puVar52 + 8;
            auVar89 = VectorAdd(auVar89,auVar1,4);
            *(longlong *)(ppuVar41 + 4) = auVar86._0_8_;
            *(longlong *)(ppuVar41 + 6) = auVar86._8_8_;
            auVar84 = auVar84 | auVar83 & auVar83 << 0x40;
            *(longlong *)puVar34 = auVar84._0_8_;
            *(longlong *)(puVar34 + 4) = auVar84._8_8_;
            ppuVar41 = ppuVar41 + 8;
            puVar34 = puVar34 + 8;
          } while (uVar37 < uVar61);
          uVar44 = uVar44 + uVar61 * 8;
          uVar64 = uVar64 + uVar61 * -8;
          local_c8 = local_c8 + uVar61 * 0x80000;
          if (uVar43 - uVar49 == uVar61 * 8) goto LAB_0802c06c;
        }
        uVar21 = video->texture_allocation_bitmap[uVar44];
        video->texture_slots[uVar44] = (u8 *)local_c8;
        video->texture_allocation_bitmap[uVar44] = uVar60 | uVar21;
        if (uVar64 != 1) {
          video->texture_slots[uVar44 + 1] = (u8 *)(local_c8 + 0x10000);
          video->texture_allocation_bitmap[uVar44 + 1] =
               uVar60 | video->texture_allocation_bitmap[uVar44 + 1];
          if (uVar64 != 2) {
            video->texture_slots[uVar44 + 2] = (u8 *)(local_c8 + 0x20000);
            video->texture_allocation_bitmap[uVar44 + 2] =
                 uVar60 | video->texture_allocation_bitmap[uVar44 + 2];
            if (uVar64 != 3) {
              video->texture_slots[uVar44 + 3] = (u8 *)(local_c8 + 0x30000);
              video->texture_allocation_bitmap[uVar44 + 3] =
                   uVar60 | video->texture_allocation_bitmap[uVar44 + 3];
              if (uVar64 != 4) {
                video->texture_palette_slots[uVar44] = local_c8 + 0x40000;
                video->texture_palette_allocation_bitmap[uVar44] =
                     uVar60 | video->texture_palette_allocation_bitmap[uVar44];
                if (uVar64 != 5) {
                  video->texture_palette_slots[uVar44 + 1] = local_c8 + 0x50000;
                  video->texture_palette_allocation_bitmap[uVar44 + 1] =
                       uVar60 | video->texture_palette_allocation_bitmap[uVar44 + 1];
                  if (uVar64 != 6) {
                    video->texture_palette_slots[uVar44 + 2] = local_c8 + 0x60000;
                    video->texture_palette_allocation_bitmap[uVar44 + 2] =
                         uVar60 | video->texture_palette_allocation_bitmap[uVar44 + 2];
                  }
                }
              }
            }
          }
        }
      }
LAB_0802c06c:
      uVar43 = 0xff << (vram_region << 3 & 0xff);
      iVar57 = 4;
      (video->texture_cache).texture_slots_dirty =
           (video->texture_cache).texture_slots_dirty |
           (uVar35 >> (vram_region << 3 & 0xff) & 0xff) << (local_cc << 3);
      (video->texture_cache).texture_slots_allocated =
           (video->texture_cache).texture_slots_allocated | uVar43;
      video->vram_abcd_dirty = uVar35 & ~uVar43;
      goto LAB_08028a74;
    case 4:
      local_cc = 0;
      break;
    case 5:
    case 6:
      local_cc = (uVar35 & 1) + (uVar35 & 2) * 2;
      break;
    case 7:
switchD_08028b10_caseD_0:
      iVar57 = 0xc;
      goto LAB_08028a6c;
    case 8:
      iVar47 = 1;
      iVar57 = 3;
LAB_08028ba4:
      local_c4 = uVar43 >> 1;
      uVar43 = uVar43 >> 4;
      iVar36 = (uVar43 + iVar47 + 0x440) * 4;
      iVar50 = iVar36 + (iVar47 + 0xec6) * -2;
      puVar34 = video->extended_palette_obj_allocation_bitmap + iVar47;
      uVar60 = (ushort)(1 << (vram_region & 0xff));
      if ((iVar50 == 0 || iVar50 < 0 != SBORROW4(iVar36,iVar47 * 2 + 0x1d8c)) && 0xb < uVar43) {
        uVar35 = -((uint)((int)(video->extended_palette_obj_allocation_bitmap + iVar47) * 0x20000000
                         ) >> 0x1e) & 7;
        if (uVar43 <= uVar35) {
          uVar35 = uVar43;
        }
        uVar49 = uVar35;
        uVar44 = uVar43;
        if (uVar35 != 0) {
          uVar21 = video->extended_palette_obj_allocation_bitmap[iVar47];
          uVar44 = uVar43 - 1;
          video->extended_palette_obj_slots[iVar47] = (u16 *)vram_buffer;
          local_c8 = (u16 *)(vram_buffer + 0x2000);
          video->extended_palette_obj_allocation_bitmap[iVar47] = uVar60 | uVar21;
          if (uVar35 != 1) {
            uVar21 = video->extended_palette_obj_allocation_bitmap[iVar47 + 1];
            video->extended_palette_obj_slots[iVar47 + 1] = local_c8;
            uVar44 = uVar43 - 2;
            local_c8 = (u16 *)(vram_buffer + 0x4000);
            video->extended_palette_obj_allocation_bitmap[iVar47 + 1] = uVar60 | uVar21;
            if (uVar35 != 2) {
              uVar21 = video->texture_allocation_bitmap[iVar47];
              video->texture_slots[iVar47] = (u8 *)local_c8;
              uVar44 = uVar43 - 3;
              local_c8 = (u16 *)(vram_buffer + 0x6000);
              video->texture_allocation_bitmap[iVar47] = uVar60 | uVar21;
              if (uVar35 != 3) {
                uVar21 = video->texture_allocation_bitmap[iVar47 + 1];
                video->texture_slots[iVar47 + 1] = (u8 *)local_c8;
                uVar44 = uVar43 - 4;
                local_c8 = (u16 *)(vram_buffer + 0x8000);
                video->texture_allocation_bitmap[iVar47 + 1] = uVar60 | uVar21;
                if (uVar35 != 4) {
                  uVar21 = video->texture_allocation_bitmap[iVar47 + 2];
                  video->texture_slots[iVar47 + 2] = (u8 *)local_c8;
                  uVar44 = uVar43 - 5;
                  local_c8 = (u16 *)(vram_buffer + 0xa000);
                  video->texture_allocation_bitmap[iVar47 + 2] = uVar60 | uVar21;
                  if (uVar35 != 5) {
                    uVar21 = video->texture_allocation_bitmap[iVar47 + 3];
                    video->texture_slots[iVar47 + 3] = (u8 *)local_c8;
                    local_c8 = (u16 *)(vram_buffer + 0xc000);
                    video->texture_allocation_bitmap[iVar47 + 3] = uVar60 | uVar21;
                    if (uVar35 == 7) {
                      uVar21 = video->texture_palette_allocation_bitmap[iVar47];
                      video->texture_palette_slots[iVar47] = local_c8;
                      local_c8 = (u16 *)(vram_buffer + 0xe000);
                      video->texture_palette_allocation_bitmap[iVar47] = uVar60 | uVar21;
                      uVar44 = uVar43 - 7;
                    }
                    else {
                      uVar49 = 6;
                      uVar44 = uVar43 - 6;
                    }
                  }
                }
              }
            }
          }
        }
        uVar64 = ((uVar43 - uVar35) - 8 >> 3) + 1;
        if (6 < (uVar43 - 1) - uVar35) {
          auVar1 = SIMDExpandImmediate(0,4,1);
          auVar86._8_8_ = 0x600000004000;
          auVar86._0_8_ = 0x200000000000;
          puVar54 = video->extended_palette_obj_allocation_bitmap + uVar35 + iVar47;
          auVar89._4_4_ = CONCAT22(uVar60,uVar60);
          auVar89._0_4_ = CONCAT22(uVar60,uVar60);
          auVar89._8_8_ = 0;
          auVar2 = SIMDExpandImmediate(0,2,0x80);
          auVar84._4_4_ = local_c8;
          auVar84._0_4_ = local_c8;
          auVar84._8_8_ = 0;
          uVar35 = 0;
          auVar84 = VectorAdd(auVar84 & auVar84 << 0x40,auVar86,4);
          ppuVar41 = video->extended_palette_obj_slots + uVar35 + iVar47;
          puVar52 = puVar54;
          do {
            auVar86 = *(undefined (*) [16])puVar54;
            auVar101 = VectorAdd(auVar84,auVar2,4);
            uVar35 = uVar35 + 1;
            *(longlong *)ppuVar41 = auVar84._0_8_;
            *(longlong *)(ppuVar41 + 2) = auVar84._8_8_;
            puVar54 = puVar54 + 8;
            auVar84 = VectorAdd(auVar84,auVar1,4);
            *(longlong *)(ppuVar41 + 4) = auVar101._0_8_;
            *(longlong *)(ppuVar41 + 6) = auVar101._8_8_;
            auVar86 = auVar86 | auVar89 & auVar89 << 0x40;
            *(longlong *)puVar52 = auVar86._0_8_;
            *(longlong *)(puVar52 + 4) = auVar86._8_8_;
            ppuVar41 = ppuVar41 + 8;
            puVar52 = puVar52 + 8;
          } while (uVar35 < uVar64);
          uVar49 = uVar49 + uVar64 * 8;
          uVar44 = uVar44 + uVar64 * -8;
          local_c8 = local_c8 + uVar64 * 0x8000;
          if (uVar43 - uVar35 == uVar64 * 8) goto LAB_08028ed0;
        }
        uVar21 = puVar34[uVar49];
        video->extended_palette_obj_slots[iVar47 + uVar49] = local_c8;
        puVar34[uVar49] = uVar60 | uVar21;
        if (uVar44 != 1) {
          video->extended_palette_obj_slots[iVar47 + uVar49 + 1] = local_c8 + 0x1000;
          puVar34[uVar49 + 1] = uVar60 | puVar34[uVar49 + 1];
          if (uVar44 != 2) {
            video->texture_slots[iVar47 + uVar49] = (u8 *)(local_c8 + 0x2000);
            puVar34[uVar49 + 2] = uVar60 | puVar34[uVar49 + 2];
            if (uVar44 != 3) {
              video->texture_slots[iVar47 + uVar49 + 1] = (u8 *)(local_c8 + 0x3000);
              puVar34[uVar49 + 3] = uVar60 | puVar34[uVar49 + 3];
              if (uVar44 != 4) {
                video->texture_slots[iVar47 + uVar49 + 2] = (u8 *)(local_c8 + 0x4000);
                puVar34[uVar49 + 4] = uVar60 | puVar34[uVar49 + 4];
                if (uVar44 != 5) {
                  video->texture_slots[iVar47 + uVar49 + 3] = (u8 *)(local_c8 + 0x5000);
                  puVar34[uVar49 + 5] = uVar60 | puVar34[uVar49 + 5];
                  if (uVar44 != 6) {
                    video->texture_palette_slots[iVar47 + uVar49] = local_c8 + 0x6000;
                    puVar34[uVar49 + 6] = uVar60 | puVar34[uVar49 + 6];
                  }
                }
              }
            }
          }
        }
      }
      else {
        ppuVar41 = video->extended_palette_bg_slots[1] + iVar47 + 3;
        puVar52 = puVar34;
        do {
          uVar21 = *puVar52;
          ppuVar41 = ppuVar41 + 1;
          *ppuVar41 = (u16 *)vram_buffer;
          vram_buffer = (u8 *)((int)vram_buffer + 0x2000);
          puVar54 = puVar52 + 1;
          *puVar52 = uVar60 | uVar21;
          puVar52 = puVar54;
        } while (puVar54 != puVar34 + uVar43);
      }
LAB_08028ed0:
      local_cc = 0;
      video->video_2d_engine[iVar47].extended_obj_palette =
           video->extended_palette_obj_slots[iVar47];
      goto LAB_08028a74;
    default:
      goto switchD_08028b10_caseD_9;
    }
    uVar43 = uVar43 >> 4;
    iVar47 = uVar43 + 0x446 + local_cc;
    iVar57 = local_cc * 2 + 0x1d98;
    uVar35 = 1 << (vram_region & 0xff);
    uVar60 = (ushort)uVar35;
    if (uVar43 < 0xc || iVar57 + iVar47 * -4 < 0 != SBORROW4(iVar57,iVar47 * 4)) {
      puVar34 = video->texture_palette_allocation_bitmap + local_cc;
      ppuVar41 = video->texture_palette_slots + local_cc;
      do {
        uVar21 = *puVar34;
        ppuVar53 = ppuVar41 + 1;
        *ppuVar41 = (u16 *)vram_buffer;
        vram_buffer = (u8 *)((int)vram_buffer + 0x4000);
        *puVar34 = uVar60 | uVar21;
        puVar34 = puVar34 + 1;
        ppuVar41 = ppuVar53;
      } while (ppuVar53 != video->texture_palette_slots + uVar43 + local_cc);
    }
    else {
      uVar49 = -((uint)((int)(video->texture_palette_allocation_bitmap + local_cc) * 0x20000000) >>
                0x1e) & 7;
      if (uVar43 <= uVar49) {
        uVar49 = uVar43;
      }
      uVar44 = local_cc;
      uVar64 = uVar43;
      if (uVar49 != 0) {
        uVar64 = uVar43 - 1;
        video->texture_palette_slots[local_cc] = (u16 *)vram_buffer;
        local_c8 = (u16 *)(vram_buffer + 0x4000);
        uVar44 = local_cc + 1;
        video->texture_palette_allocation_bitmap[local_cc] =
             uVar60 | video->texture_palette_allocation_bitmap[local_cc];
        if (uVar49 != 1) {
          video->texture_palette_slots[local_cc + 1] = local_c8;
          uVar64 = uVar43 - 2;
          local_c8 = (u16 *)(vram_buffer + 0x8000);
          uVar44 = local_cc + 2;
          video->texture_palette_allocation_bitmap[local_cc + 1] =
               uVar60 | video->texture_palette_allocation_bitmap[local_cc + 1];
          if (uVar49 != 2) {
            video->texture_palette_slots[local_cc + 2] = local_c8;
            uVar64 = uVar43 - 3;
            local_c8 = (u16 *)(vram_buffer + 0xc000);
            uVar44 = local_cc + 3;
            video->texture_palette_allocation_bitmap[local_cc + 2] =
                 uVar60 | video->texture_palette_allocation_bitmap[local_cc + 2];
            if (uVar49 != 3) {
              video->texture_palette_slots[local_cc + 3] = local_c8;
              uVar64 = uVar43 - 4;
              local_c8 = (u16 *)(vram_buffer + 0x10000);
              uVar44 = local_cc + 4;
              video->texture_palette_allocation_bitmap[local_cc + 3] =
                   uVar60 | video->texture_palette_allocation_bitmap[local_cc + 3];
              if (uVar49 != 4) {
                video->texture_palette_slots[local_cc + 4] = local_c8;
                uVar64 = uVar43 - 5;
                local_c8 = (u16 *)(vram_buffer + 0x14000);
                uVar44 = local_cc + 5;
                video->texture_palette_allocation_bitmap[local_cc + 4] =
                     uVar60 | video->texture_palette_allocation_bitmap[local_cc + 4];
                if (uVar49 != 5) {
                  video->texture_palette_slots[local_cc + 5] = local_c8;
                  uVar64 = uVar43 - 6;
                  local_c8 = (u16 *)(vram_buffer + 0x18000);
                  uVar44 = local_cc + 6;
                  video->texture_palette_allocation_bitmap[local_cc + 5] =
                       uVar60 | video->texture_palette_allocation_bitmap[local_cc + 5];
                  if (uVar49 == 7) {
                    video->arm7_vram_slots[local_cc] = (u8 *)local_c8;
                    local_c8 = (u16 *)(vram_buffer + 0x1c000);
                    video->arm7_vram_allocation_bitmap[local_cc] =
                         uVar60 | video->arm7_vram_allocation_bitmap[local_cc];
                    uVar44 = local_cc + 7;
                    uVar64 = uVar43 - 7;
                  }
                }
              }
            }
          }
        }
      }
      local_b0 = uVar43 - 1;
      uVar61 = ((uVar43 - uVar49) - 8 >> 3) + 1;
      if (6 < local_b0 - uVar49) {
        auVar1 = SIMDExpandImmediate(0,4,2);
        auVar81._8_8_ = 0xc00000008000;
        auVar81._0_8_ = 0x400000000000;
        auVar101._4_4_ = CONCAT22(uVar60,uVar60);
        auVar101._0_4_ = CONCAT22(uVar60,uVar60);
        auVar101._8_8_ = 0;
        ppuVar62 = (u16 **)(video->texture_palette_allocation_bitmap + uVar49 + local_cc);
        auVar2 = SIMDExpandImmediate(0,4,1);
        auVar99._4_4_ = local_c8;
        auVar99._0_4_ = local_c8;
        auVar99._8_8_ = 0;
        uVar37 = 0;
        auVar89 = VectorAdd(auVar99 & auVar99 << 0x40,auVar81,4);
        ppuVar41 = video->texture_palette_slots + uVar49 + local_cc;
        ppuVar53 = ppuVar62;
        do {
          auVar84 = *(undefined (*) [16])ppuVar62;
          auVar86 = VectorAdd(auVar89,auVar2,4);
          uVar37 = uVar37 + 1;
          *(longlong *)ppuVar41 = auVar89._0_8_;
          *(longlong *)(ppuVar41 + 2) = auVar89._8_8_;
          ppuVar62 = ppuVar62 + 4;
          auVar89 = VectorAdd(auVar89,auVar1,4);
          *(longlong *)(ppuVar41 + 4) = auVar86._0_8_;
          *(longlong *)(ppuVar41 + 6) = auVar86._8_8_;
          auVar84 = auVar84 | auVar101 & auVar101 << 0x40;
          *(longlong *)ppuVar53 = auVar84._0_8_;
          *(longlong *)(ppuVar53 + 2) = auVar84._8_8_;
          ppuVar41 = ppuVar41 + 8;
          ppuVar53 = ppuVar53 + 4;
        } while (uVar37 < uVar61);
        uVar44 = uVar44 + uVar61 * 8;
        uVar64 = uVar64 + uVar61 * -8;
        local_c8 = local_c8 + uVar61 * 0x10000;
        if (uVar43 - uVar49 == uVar61 * 8) goto LAB_0802dff8;
      }
      uVar21 = video->texture_palette_allocation_bitmap[uVar44];
      video->texture_palette_slots[uVar44] = local_c8;
      video->texture_palette_allocation_bitmap[uVar44] = uVar60 | uVar21;
      if (uVar64 != 1) {
        video->texture_palette_slots[uVar44 + 1] = local_c8 + 0x2000;
        video->texture_palette_allocation_bitmap[uVar44 + 1] =
             uVar60 | video->texture_palette_allocation_bitmap[uVar44 + 1];
        if (uVar64 != 2) {
          video->texture_palette_slots[uVar44 + 2] = local_c8 + 0x4000;
          video->texture_palette_allocation_bitmap[uVar44 + 2] =
               uVar60 | video->texture_palette_allocation_bitmap[uVar44 + 2];
          if (uVar64 != 3) {
            video->texture_palette_slots[uVar44 + 3] = local_c8 + 0x6000;
            video->texture_palette_allocation_bitmap[uVar44 + 3] =
                 uVar60 | video->texture_palette_allocation_bitmap[uVar44 + 3];
            if (uVar64 != 4) {
              video->texture_palette_slots[uVar44 + 4] = local_c8 + 0x8000;
              video->texture_palette_allocation_bitmap[uVar44 + 4] =
                   uVar60 | video->texture_palette_allocation_bitmap[uVar44 + 4];
              if (uVar64 != 5) {
                video->texture_palette_slots[uVar44 + 5] = local_c8 + 0xa000;
                video->texture_palette_allocation_bitmap[uVar44 + 5] =
                     uVar60 | video->texture_palette_allocation_bitmap[uVar44 + 5];
                if (uVar64 != 6) {
                  video->arm7_vram_slots[uVar44] = (u8 *)(local_c8 + 0xc000);
                  video->arm7_vram_allocation_bitmap[uVar44] =
                       uVar60 | video->arm7_vram_allocation_bitmap[uVar44];
                }
              }
            }
          }
        }
      }
    }
LAB_0802dff8:
    if (vram_region == 4) {
      uVar35 = video->vram_efg_dirty;
      iVar57 = 5;
      (video->texture_cache).texture_palette_slots_dirty =
           (video->texture_cache).texture_palette_slots_dirty | uVar35 & 0xf;
      video->vram_efg_dirty = uVar35 & 0xffffff00;
      (video->texture_cache).texture_palette_slots_allocated = 0xf;
    }
    else {
      uVar49 = video->vram_efg_dirty;
      uVar43 = (vram_region + 0x1ffffffc) * 8;
      uVar44 = (video->texture_cache).texture_palette_slots_allocated;
      iVar57 = 5;
      (video->texture_cache).texture_palette_slots_dirty =
           (video->texture_cache).texture_palette_slots_dirty |
           (uVar49 >> (uVar43 & 0xff) & 1) << (local_cc << 3);
      video->vram_efg_dirty = uVar49 & ~(0xff << (uVar43 & 0xff));
      (video->texture_cache).texture_palette_slots_allocated = uVar44 | uVar35;
    }
    goto LAB_08028a74;
  case (memory_struct *)0x4:
switchD_0802cc80_caseD_4:
    switch(vram_region) {
    case 0:
    case 1:
    case 7:
    case 8:
      goto switchD_08028b10_caseD_0;
    case 2:
      uVar42 = 0x6200000;
      iVar57 = -0x200000;
      vram_map_3 = (u8 **)0x0;
      uVar35 = 0x10;
      local_a4 = 4;
      local_cc = 0x80;
      goto LAB_0802cb9c;
    case 3:
      goto switchD_08028b10_caseD_3;
    case 4:
      iVar57 = 0;
      local_cc = 0;
      local_c4 = uVar43 >> 1;
      break;
    case 5:
    case 6:
      iVar57 = 0;
      local_cc = (uVar35 & 1) << 1;
      break;
    default:
      goto switchD_08028b10_caseD_9;
    }
LAB_0802e228:
    uVar35 = local_c4 >> 3;
    ppuVar41 = video->extended_palette_bg_slots[iVar57] + local_cc + uVar35;
    ppuVar62 = (u16 **)(video->extended_palette_bg_allocation_bitmap[iVar57] + local_cc + uVar35);
    ppuVar59 = video->extended_palette_bg_slots[iVar57] + local_cc;
    ppuVar53 = (u16 **)(video->extended_palette_bg_allocation_bitmap[iVar57] + local_cc);
    bVar66 = ppuVar59 <= ppuVar62;
    bVar65 = ppuVar62 == ppuVar59;
    if (bVar66 && !bVar65) {
      bVar66 = ppuVar53 <= ppuVar41;
      bVar65 = ppuVar41 == ppuVar53;
    }
    uVar60 = (ushort)(1 << (vram_region & 0xff));
    if (uVar35 < 0xc || bVar66 && !bVar65) {
      puVar34 = video->extended_palette_bg_allocation_bitmap[iVar57] + local_cc;
      ppuVar41 = video->extended_palette_bg_slots[iVar57] + local_cc;
      do {
        uVar21 = *puVar34;
        ppuVar53 = ppuVar41 + 1;
        *ppuVar41 = (u16 *)vram_buffer;
        vram_buffer = (u8 *)((int)vram_buffer + 0x2000);
        *puVar34 = uVar60 | uVar21;
        puVar34 = puVar34 + 1;
        ppuVar41 = ppuVar53;
      } while (ppuVar53 != video->extended_palette_bg_slots[iVar57] + local_cc + uVar35);
    }
    else {
      uVar43 = -((uint)((int)(video->extended_palette_bg_allocation_bitmap[iVar57] + local_cc) *
                       0x20000000) >> 0x1e) & 7;
      if (uVar35 <= uVar43) {
        uVar43 = uVar35;
      }
      uVar49 = local_cc;
      uVar44 = uVar35;
      if (uVar43 != 0) {
        uVar44 = uVar35 - 1;
        video->extended_palette_bg_slots[iVar57][local_cc] = (u16 *)vram_buffer;
        local_c8 = (u16 *)(vram_buffer + 0x2000);
        uVar49 = local_cc + 1;
        video->extended_palette_bg_allocation_bitmap[iVar57][local_cc] =
             uVar60 | video->extended_palette_bg_allocation_bitmap[iVar57][local_cc];
        if (uVar43 != 1) {
          video->extended_palette_bg_slots[iVar57][local_cc + 1] = local_c8;
          uVar44 = uVar35 - 2;
          local_c8 = (u16 *)(vram_buffer + 0x4000);
          uVar49 = local_cc + 2;
          video->extended_palette_bg_allocation_bitmap[iVar57][local_cc + 1] =
               uVar60 | video->extended_palette_bg_allocation_bitmap[iVar57][local_cc + 1];
          if (uVar43 != 2) {
            video->extended_palette_bg_slots[iVar57][local_cc + 2] = local_c8;
            uVar44 = uVar35 - 3;
            local_c8 = (u16 *)(vram_buffer + 0x6000);
            uVar49 = local_cc + 3;
            video->extended_palette_bg_allocation_bitmap[iVar57][local_cc + 2] =
                 uVar60 | video->extended_palette_bg_allocation_bitmap[iVar57][local_cc + 2];
            if (uVar43 != 3) {
              video->extended_palette_bg_slots[iVar57][local_cc + 3] = local_c8;
              uVar44 = uVar35 - 4;
              local_c8 = (u16 *)(vram_buffer + 0x8000);
              uVar49 = local_cc + 4;
              video->extended_palette_bg_allocation_bitmap[iVar57][local_cc + 3] =
                   uVar60 | video->extended_palette_bg_allocation_bitmap[iVar57][local_cc + 3];
              if (uVar43 != 4) {
                video->extended_palette_bg_slots[iVar57 + 1][local_cc] = local_c8;
                uVar44 = uVar35 - 5;
                local_c8 = (u16 *)(vram_buffer + 0xa000);
                uVar49 = local_cc + 5;
                video->extended_palette_bg_allocation_bitmap[iVar57 + 1][local_cc] =
                     uVar60 | video->extended_palette_bg_allocation_bitmap[iVar57 + 1][local_cc];
                if (uVar43 != 5) {
                  video->extended_palette_bg_slots[iVar57 + 1][local_cc + 1] = local_c8;
                  uVar44 = uVar35 - 6;
                  local_c8 = (u16 *)(vram_buffer + 0xc000);
                  uVar49 = local_cc + 6;
                  video->extended_palette_bg_allocation_bitmap[iVar57 + 1][local_cc + 1] =
                       uVar60 | video->extended_palette_bg_allocation_bitmap[iVar57 + 1]
                                [local_cc + 1];
                  if (uVar43 == 7) {
                    video->extended_palette_bg_slots[iVar57 + 1][local_cc + 2] = local_c8;
                    local_c8 = (u16 *)(vram_buffer + 0xe000);
                    video->extended_palette_bg_allocation_bitmap[iVar57 + 1][local_cc + 2] =
                         uVar60 | video->extended_palette_bg_allocation_bitmap[iVar57 + 1]
                                  [local_cc + 2];
                    uVar49 = local_cc + 7;
                    uVar44 = uVar35 - 7;
                  }
                }
              }
            }
          }
        }
      }
      uVar64 = ((uVar35 - uVar43) - 8 >> 3) + 1;
      if (6 < (uVar35 - 1) - uVar43) {
        auVar1 = SIMDExpandImmediate(0,4,1);
        auVar100._8_8_ = 0x600000004000;
        auVar100._0_8_ = 0x200000000000;
        auVar17._4_4_ = CONCAT22(uVar60,uVar60);
        auVar17._0_4_ = CONCAT22(uVar60,uVar60);
        auVar17._8_8_ = 0;
        uVar61 = 0;
        auVar2 = SIMDExpandImmediate(0,2,0x80);
        auVar18._4_4_ = local_c8;
        auVar18._0_4_ = local_c8;
        auVar18._8_8_ = 0;
        auVar89 = VectorAdd(auVar18 & auVar18 << 0x40,auVar100,4);
        puVar52 = video->extended_palette_bg_allocation_bitmap[iVar57] + uVar43 + local_cc;
        ppuVar41 = video->extended_palette_bg_slots[iVar57] + uVar43 + local_cc;
        puVar34 = puVar52;
        do {
          auVar84 = *(undefined (*) [16])puVar52;
          auVar86 = VectorAdd(auVar89,auVar2,4);
          uVar61 = uVar61 + 1;
          *(longlong *)ppuVar41 = auVar89._0_8_;
          *(longlong *)(ppuVar41 + 2) = auVar89._8_8_;
          puVar52 = puVar52 + 8;
          auVar89 = VectorAdd(auVar89,auVar1,4);
          *(longlong *)(ppuVar41 + 4) = auVar86._0_8_;
          *(longlong *)(ppuVar41 + 6) = auVar86._8_8_;
          auVar84 = auVar84 | auVar17 & auVar17 << 0x40;
          *(longlong *)puVar34 = auVar84._0_8_;
          *(longlong *)(puVar34 + 4) = auVar84._8_8_;
          ppuVar41 = ppuVar41 + 8;
          puVar34 = puVar34 + 8;
        } while (uVar61 < uVar64);
        uVar49 = uVar49 + uVar64 * 8;
        uVar44 = uVar44 + uVar64 * -8;
        local_c8 = local_c8 + uVar64 * 0x8000;
        if (uVar35 - uVar43 == uVar64 * 8) goto LAB_0802e5e8;
      }
      uVar21 = video->extended_palette_bg_allocation_bitmap[iVar57][uVar49];
      video->extended_palette_bg_slots[iVar57][uVar49] = local_c8;
      video->extended_palette_bg_allocation_bitmap[iVar57][uVar49] = uVar60 | uVar21;
      if (uVar44 != 1) {
        video->extended_palette_bg_slots[iVar57][uVar49 + 1] = local_c8 + 0x1000;
        video->extended_palette_bg_allocation_bitmap[iVar57][uVar49 + 1] =
             uVar60 | video->extended_palette_bg_allocation_bitmap[iVar57][uVar49 + 1];
        if (uVar44 != 2) {
          video->extended_palette_bg_slots[iVar57][uVar49 + 2] = local_c8 + 0x2000;
          video->extended_palette_bg_allocation_bitmap[iVar57][uVar49 + 2] =
               uVar60 | video->extended_palette_bg_allocation_bitmap[iVar57][uVar49 + 2];
          if (uVar44 != 3) {
            video->extended_palette_bg_slots[iVar57][uVar49 + 3] = local_c8 + 0x3000;
            video->extended_palette_bg_allocation_bitmap[iVar57][uVar49 + 3] =
                 uVar60 | video->extended_palette_bg_allocation_bitmap[iVar57][uVar49 + 3];
            if (uVar44 != 4) {
              video->extended_palette_bg_slots[iVar57 + 1][uVar49] = local_c8 + 0x4000;
              video->extended_palette_bg_allocation_bitmap[iVar57 + 1][uVar49] =
                   uVar60 | video->extended_palette_bg_allocation_bitmap[iVar57 + 1][uVar49];
              if (uVar44 != 5) {
                video->extended_palette_bg_slots[iVar57 + 1][uVar49 + 1] = local_c8 + 0x5000;
                video->extended_palette_bg_allocation_bitmap[iVar57 + 1][uVar49 + 1] =
                     uVar60 | video->extended_palette_bg_allocation_bitmap[iVar57 + 1][uVar49 + 1];
                if (uVar44 != 6) {
                  video->extended_palette_bg_slots[iVar57 + 1][uVar49 + 2] = local_c8 + 0x6000;
                  video->extended_palette_bg_allocation_bitmap[iVar57 + 1][uVar49 + 2] =
                       uVar60 | video->extended_palette_bg_allocation_bitmap[iVar57 + 1][uVar49 + 2]
                  ;
                }
              }
            }
          }
        }
      }
    }
LAB_0802e5e8:
    ppuVar41 = video->video_2d_engine[iVar57].extended_bg_palettes;
    uVar60 = video->video_2d_engine[iVar57].bg_layers[1].bg_control;
    video->video_2d_engine[iVar57].bg_layers[0].extended_palette =
         ppuVar41[((int)((uint)video->video_2d_engine[iVar57].bg_layers[0].bg_control << 0x12) >>
                  0x1f) * -2];
    video->video_2d_engine[iVar57].bg_layers[1].extended_palette =
         ppuVar41[((int)((uint)uVar60 << 0x12) >> 0x1f) * -2 + 1];
    video->video_2d_engine[iVar57].bg_layers[2].extended_palette = ppuVar41[2];
    video->video_2d_engine[iVar57].bg_layers[3].extended_palette = ppuVar41[3];
    goto LAB_08028a74;
  case (memory_struct *)0x5:
switchD_0802cc80_caseD_5:
    if (vram_region < 9) {
switchD_0802e794_caseD_5:
      uVar35 = 1;
      uVar49 = 1 << (vram_region & 0xff);
      if ((uVar49 & 0x19f) != 0) goto switchD_08028b10_caseD_0;
      if ((uVar49 & 0x60) != 0) {
        iVar57 = 2;
        iVar47 = 0;
        goto LAB_08028ba4;
      }
      uVar42 = 0x6000000;
      vram_map_3 = (u8 **)0xffffff80;
      iVar57 = 0;
      local_cc = 0;
      local_a4 = 0;
    }
    else {
      iVar57 = 0;
      uVar42 = 0x6000000;
      local_cc = 0;
      vram_map_3 = (u8 **)0xffffff80;
      uVar35 = 1;
      local_a4 = 0;
    }
LAB_0802cb9c:
    uVar60 = (ushort)(1 << (vram_region & 0xff));
    vram_map_8 = (u8 **)((uVar43 >> 4) << 0xe);
    unmap_memory_page_region_direct(video->memory->memory_interface_arm9,uVar42,(u32)vram_map_8);
    uVar49 = 0;
    break;
  case (memory_struct *)0x6:
switchD_0802cc80_caseD_6:
    iVar57 = 0xb;
LAB_08028a6c:
    local_cc = 0;
    goto LAB_08028a74;
  default:
switchD_08028a44_caseD_7:
    uVar35 = 1;
    iVar57 = 0;
    uVar60 = (ushort)(1 << (vram_region & 0xff));
    vram_map_8 = (u8 **)((uVar43 >> 4) << 0xe);
    unmap_memory_page_region_direct(video->memory->memory_interface_arm9,0x6000000,(u32)vram_map_8);
    local_cc = 0;
    uVar49 = 0;
    vram_map_3 = (u8 **)0xffffff80;
    local_a4 = 0;
  }
  video->vram_map_dirty_bitmap_fine[local_a4] =
       video->vram_map_dirty_bitmap_fine[local_a4] | ~(-1 << (uVar43 >> 4 & 0xff)) << uVar49;
  video->vram_map_dirty_bitmap_coarse = video->vram_map_dirty_bitmap_coarse | uVar35;
LAB_0802c4ec:
  uVar43 = uVar43 >> 4;
  local_b0 = vram_region * 8;
  iVar47 = uVar43 + local_cc;
  puVar56 = video->vram_map_dirty_bit_numbers + local_cc;
  ppuVar51 = video->vram_map + local_cc;
  puVar34 = video->vram_map_allocation_bitmap + local_cc;
  puVar48 = vram_buffer + iVar57;
  if ((uVar43 < 0x14 ||
      (puVar34 < video->vram_map + iVar47 && ppuVar51 < video->vram_map_allocation_bitmap + iVar47
      || ppuVar51 < video->vram_map_dirty_bit_numbers + iVar47 && puVar56 < video->vram_map + iVar47
      )) || puVar34 < video->vram_map_dirty_bit_numbers + iVar47 &&
            puVar56 < video->vram_map_allocation_bitmap + iVar47) {
    iVar57 = local_b0;
    do {
      uVar21 = *puVar34;
      *ppuVar51 = puVar48;
      *puVar34 = uVar60 | uVar21;
      *puVar56 = (u8)iVar57;
      iVar57 = iVar57 + 1;
      ppuVar51 = ppuVar51 + 1;
      puVar34 = puVar34 + 1;
      puVar56 = puVar56 + 1;
    } while (iVar57 != uVar43 + local_b0);
  }
  else {
    uVar35 = -((uint)((int)puVar34 * 0x20000000) >> 0x1e) & 7;
    if (uVar43 <= uVar35) {
      uVar35 = uVar43;
    }
    uVar49 = uVar43;
    iVar57 = local_b0;
    uVar44 = local_cc;
    if (uVar35 != 0) {
      uVar21 = *puVar34;
      *ppuVar51 = puVar48;
      uVar49 = uVar43 - 1;
      iVar57 = local_b0 + 1;
      *puVar34 = uVar60 | uVar21;
      *puVar56 = (u8)local_b0;
      uVar44 = local_cc + 1;
      if (uVar35 != 1) {
        uVar21 = video->vram_map_allocation_bitmap[local_cc + 1];
        video->vram_map[local_cc + 1] = puVar48;
        uVar49 = uVar43 - 2;
        video->vram_map_allocation_bitmap[local_cc + 1] = uVar60 | uVar21;
        video->vram_map_dirty_bit_numbers[local_cc + 1] = (u8)iVar57;
        iVar57 = local_b0 + 2;
        uVar44 = local_cc + 2;
        if (uVar35 != 2) {
          uVar21 = video->vram_map_allocation_bitmap[local_cc + 2];
          video->vram_map[local_cc + 2] = puVar48;
          uVar49 = uVar43 - 3;
          video->vram_map_allocation_bitmap[local_cc + 2] = uVar60 | uVar21;
          video->vram_map_dirty_bit_numbers[local_cc + 2] = (u8)iVar57;
          uVar44 = local_cc + 3;
          iVar57 = local_b0 + 3;
          if (uVar35 != 3) {
            uVar21 = video->vram_map_allocation_bitmap[local_cc + 3];
            video->vram_map[local_cc + 3] = puVar48;
            uVar49 = uVar43 - 4;
            video->vram_map_allocation_bitmap[local_cc + 3] = uVar60 | uVar21;
            video->vram_map_dirty_bit_numbers[local_cc + 3] = (u8)iVar57;
            uVar44 = local_cc + 4;
            iVar57 = local_b0 + 4;
            if (uVar35 != 4) {
              uVar21 = video->vram_map_allocation_bitmap[local_cc + 4];
              video->vram_map[local_cc + 4] = puVar48;
              uVar49 = uVar43 - 5;
              video->vram_map_allocation_bitmap[local_cc + 4] = uVar60 | uVar21;
              video->vram_map_dirty_bit_numbers[local_cc + 4] = (u8)iVar57;
              uVar44 = local_cc + 5;
              iVar57 = local_b0 + 5;
              if (uVar35 != 5) {
                uVar21 = video->vram_map_allocation_bitmap[local_cc + 5];
                video->vram_map[local_cc + 5] = puVar48;
                uVar49 = uVar43 - 6;
                video->vram_map_allocation_bitmap[local_cc + 5] = uVar60 | uVar21;
                video->vram_map_dirty_bit_numbers[local_cc + 5] = (u8)iVar57;
                uVar44 = local_cc + 6;
                iVar57 = local_b0 + 6;
                if (uVar35 == 7) {
                  uVar21 = video->vram_map_allocation_bitmap[local_cc + 6];
                  video->vram_map[local_cc + 6] = puVar48;
                  uVar49 = uVar43 - 7;
                  video->vram_map_allocation_bitmap[local_cc + 6] = uVar60 | uVar21;
                  video->vram_map_dirty_bit_numbers[local_cc + 6] = (u8)iVar57;
                  uVar44 = local_cc + 7;
                  iVar57 = local_b0 + 7;
                }
              }
            }
          }
        }
      }
      if (uVar43 == uVar35) goto LAB_0802cb68;
    }
    uVar64 = ((uVar43 - uVar35) - 0x10 >> 4) + 1;
    iVar36 = uVar64 * 0x10;
    if (0xe < (uVar43 - 1) - uVar35) {
      auVar1 = SIMDExpandImmediate(0,0,0x10);
      auVar2 = SIMDExpandImmediate(0,0,4);
      auVar11._4_4_ = iVar57;
      auVar11._0_4_ = iVar57;
      auVar11._8_8_ = 0;
      auVar85._8_8_ = 0x300000002;
      auVar85._0_8_ = 0x100000000;
      auVar89 = SIMDExpandImmediate(0,0,8);
      auVar84 = SIMDExpandImmediate(0,0,0xc);
      auVar12._4_4_ = CONCAT22(uVar60,uVar60);
      auVar12._0_4_ = CONCAT22(uVar60,uVar60);
      auVar12._8_8_ = 0;
      auVar12 = auVar12 & auVar12 << 0x40;
      auVar86 = VectorAdd(auVar11 & auVar11 << 0x40,auVar85,4);
      local_8c = video->vram_map_dirty_bit_numbers + local_cc + uVar35;
      local_88 = (u8 *)0x0;
      puVar34 = video->vram_map_allocation_bitmap + uVar35 + local_cc + 0x10;
      puVar52 = video->vram_map_allocation_bitmap + uVar35 + local_cc + 0x10;
      ppuVar51 = video->vram_map + uVar35 + local_cc;
      do {
        auVar101 = *(undefined (*) [16])(puVar34 + -0x10);
        auVar81 = VectorAdd(auVar86,auVar2,4);
        auVar83 = VectorAdd(auVar86,auVar89,4);
        auVar99 = *(undefined (*) [16])(puVar34 + -8);
        *(undefined8 *)ppuVar51 = 0;
        *(undefined8 *)(ppuVar51 + 2) = 0;
        auVar68._0_8_ = VectorCopyNarrow(auVar86,4);
        auVar68._8_8_ = VectorCopyNarrow(auVar81,4);
        auVar81 = VectorAdd(auVar86,auVar84,4);
        auVar86 = VectorAdd(auVar86,auVar1,4);
        local_88 = (u8 *)((int)local_88 + 1);
        uVar72 = VectorCopyNarrow(auVar83,4);
        uVar73 = VectorCopyNarrow(auVar81,4);
        auVar101 = auVar101 | auVar12;
        uVar74 = VectorCopyNarrow(auVar68,2);
        auVar22._8_8_ = uVar73;
        auVar22._0_8_ = uVar72;
        uVar72 = VectorCopyNarrow(auVar22,2);
        *(undefined8 *)(ppuVar51 + 4) = 0;
        *(undefined8 *)(ppuVar51 + 6) = 0;
        auVar99 = auVar12 | auVar99;
        *(undefined8 *)(ppuVar51 + 8) = 0;
        *(undefined8 *)(ppuVar51 + 10) = 0;
        *(undefined8 *)(ppuVar51 + 0xc) = 0;
        *(undefined8 *)(ppuVar51 + 0xe) = 0;
        *(longlong *)(puVar52 + -0x10) = auVar101._0_8_;
        *(longlong *)(puVar52 + -0xc) = auVar101._8_8_;
        *(longlong *)(puVar52 + -8) = auVar99._0_8_;
        *(longlong *)(puVar52 + -4) = auVar99._8_8_;
        *(undefined8 *)local_8c = uVar74;
        *(undefined8 *)(local_8c + 8) = uVar72;
        local_8c = local_8c + 0x10;
        puVar34 = puVar34 + 0x10;
        puVar52 = puVar52 + 0x10;
        ppuVar51 = ppuVar51 + 0x10;
      } while (local_88 < uVar64);
      uVar44 = uVar44 + iVar36;
      uVar49 = uVar49 + uVar64 * -0x10;
      iVar57 = iVar57 + iVar36;
      if (iVar36 - (uVar43 - uVar35) == 0) goto LAB_0802cb68;
    }
    uVar21 = video->vram_map_allocation_bitmap[uVar44];
    video->vram_map[uVar44] = puVar48;
    uVar32 = (u8)iVar57;
    video->vram_map_allocation_bitmap[uVar44] = uVar60 | uVar21;
    video->vram_map_dirty_bit_numbers[uVar44] = uVar32;
    if (uVar49 != 1) {
      uVar21 = video->vram_map_allocation_bitmap[uVar44 + 1];
      video->vram_map[uVar44 + 1] = puVar48;
      local_90._0_1_ = uVar32 + '\x02';
      video->vram_map_allocation_bitmap[uVar44 + 1] = uVar60 | uVar21;
      video->vram_map_dirty_bit_numbers[uVar44 + 1] = uVar32 + '\x01';
      if (uVar49 != 2) {
        uVar21 = video->vram_map_allocation_bitmap[uVar44 + 2];
        video->vram_map[uVar44 + 2] = puVar48;
        video->vram_map_allocation_bitmap[uVar44 + 2] = uVar60 | uVar21;
        video->vram_map_dirty_bit_numbers[uVar44 + 2] = (u8)local_90;
        if (uVar49 != 3) {
          uVar21 = video->vram_map_allocation_bitmap[uVar44 + 3];
          video->vram_map[uVar44 + 3] = puVar48;
          local_90._0_1_ = uVar32 + '\x04';
          video->vram_map_allocation_bitmap[uVar44 + 3] = uVar60 | uVar21;
          video->vram_map_dirty_bit_numbers[uVar44 + 3] = uVar32 + '\x03';
          if (uVar49 != 4) {
            uVar21 = video->vram_map_allocation_bitmap[uVar44 + 4];
            video->vram_map[uVar44 + 4] = puVar48;
            video->vram_map_allocation_bitmap[uVar44 + 4] = uVar60 | uVar21;
            video->vram_map_dirty_bit_numbers[uVar44 + 4] = (u8)local_90;
            if (uVar49 != 5) {
              uVar21 = video->vram_map_allocation_bitmap[uVar44 + 5];
              video->vram_map[uVar44 + 5] = puVar48;
              local_90._0_1_ = uVar32 + '\x06';
              video->vram_map_allocation_bitmap[uVar44 + 5] = uVar60 | uVar21;
              video->vram_map_dirty_bit_numbers[uVar44 + 5] = uVar32 + '\x05';
              if (uVar49 != 6) {
                uVar21 = video->vram_map_allocation_bitmap[uVar44 + 6];
                video->vram_map[uVar44 + 6] = puVar48;
                video->vram_map_allocation_bitmap[uVar44 + 6] = uVar60 | uVar21;
                video->vram_map_dirty_bit_numbers[uVar44 + 6] = (u8)local_90;
                if (uVar49 != 7) {
                  uVar21 = video->vram_map_allocation_bitmap[uVar44 + 7];
                  video->vram_map[uVar44 + 7] = puVar48;
                  local_90._0_1_ = uVar32 + '\b';
                  video->vram_map_allocation_bitmap[uVar44 + 7] = uVar60 | uVar21;
                  video->vram_map_dirty_bit_numbers[uVar44 + 7] = uVar32 + '\a';
                  if (uVar49 != 8) {
                    uVar21 = video->vram_map_allocation_bitmap[uVar44 + 8];
                    video->vram_map[uVar44 + 8] = puVar48;
                    video->vram_map_allocation_bitmap[uVar44 + 8] = uVar60 | uVar21;
                    video->vram_map_dirty_bit_numbers[uVar44 + 8] = (u8)local_90;
                    if (uVar49 != 9) {
                      uVar21 = video->vram_map_allocation_bitmap[uVar44 + 9];
                      video->vram_map[uVar44 + 9] = puVar48;
                      local_90._0_1_ = uVar32 + '\n';
                      video->vram_map_allocation_bitmap[uVar44 + 9] = uVar60 | uVar21;
                      video->vram_map_dirty_bit_numbers[uVar44 + 9] = uVar32 + '\t';
                      if (uVar49 != 10) {
                        uVar21 = video->vram_map_allocation_bitmap[uVar44 + 10];
                        video->vram_map[uVar44 + 10] = puVar48;
                        video->vram_map_allocation_bitmap[uVar44 + 10] = uVar60 | uVar21;
                        video->vram_map_dirty_bit_numbers[uVar44 + 10] = (u8)local_90;
                        if (uVar49 != 0xb) {
                          uVar21 = video->vram_map_allocation_bitmap[uVar44 + 0xb];
                          video->vram_map[uVar44 + 0xb] = puVar48;
                          local_90._0_1_ = uVar32 + '\f';
                          video->vram_map_allocation_bitmap[uVar44 + 0xb] = uVar60 | uVar21;
                          video->vram_map_dirty_bit_numbers[uVar44 + 0xb] = uVar32 + '\v';
                          if (uVar49 != 0xc) {
                            uVar21 = video->vram_map_allocation_bitmap[uVar44 + 0xc];
                            video->vram_map[uVar44 + 0xc] = puVar48;
                            video->vram_map_allocation_bitmap[uVar44 + 0xc] = uVar60 | uVar21;
                            video->vram_map_dirty_bit_numbers[uVar44 + 0xc] = (u8)local_90;
                            if (uVar49 != 0xd) {
                              video->vram_map[uVar44 + 0xd] = puVar48;
                              video->vram_map_allocation_bitmap[uVar44 + 0xd] =
                                   uVar60 | video->vram_map_allocation_bitmap[uVar44 + 0xd];
                              video->vram_map_dirty_bit_numbers[uVar44 + 0xd] = uVar32 + '\r';
                              if (uVar49 != 0xe) {
                                video->vram_map[uVar44 + 0xe] = puVar48;
                                video->vram_map_allocation_bitmap[uVar44 + 0xe] =
                                     uVar60 | video->vram_map_allocation_bitmap[uVar44 + 0xe];
                                video->vram_map_dirty_bit_numbers[uVar44 + 0xe] = uVar32 + '\x0e';
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
LAB_0802cb68:
  if (vram_map_3 < (u8 **)0x80) {
    uVar49 = local_cc + 8;
    uVar42 = (local_cc + 0x1808) * 0x4000;
    unmap_memory_page_region_direct(video->memory->memory_interface_arm9,uVar42,(u32)vram_map_8);
    uVar35 = uVar49 >> 5;
    video->vram_map_dirty_bitmap_fine[uVar35] =
         video->vram_map_dirty_bitmap_fine[uVar35] | (1 << (uVar43 & 0xff)) + -1 << (uVar49 & 0x1f);
    puVar34 = video->vram_map_allocation_bitmap + local_cc + 8;
    puVar56 = video->vram_map_dirty_bit_numbers + local_cc + 8;
    puVar48 = vram_buffer + -(uVar42 + 0xfa000000);
    video->vram_map_dirty_bitmap_coarse = video->vram_map_dirty_bitmap_coarse | 1 << (uVar35 & 0xff)
    ;
    if ((uVar43 < 0x14 ||
        (puVar34 < video->vram_map + iVar47 + 8 &&
         video->vram_map + local_cc + 8 < video->vram_map_allocation_bitmap + iVar47 + 8 ||
        video->vram_map + local_cc + 8 < video->vram_map_dirty_bit_numbers + iVar47 + 8 &&
        puVar56 < video->vram_map + iVar47 + 8)) ||
        puVar34 < video->vram_map_dirty_bit_numbers + iVar47 + 8 &&
        puVar56 < video->vram_map_allocation_bitmap + iVar47 + 8) {
      puVar56 = video->vram_map_dirty_bit_numbers + local_cc + 7;
      ppuVar51 = video->vram_map + local_cc + 7;
      iVar57 = uVar43 + local_b0;
      do {
        uVar21 = *puVar34;
        ppuVar51 = ppuVar51 + 1;
        *ppuVar51 = puVar48;
        *puVar34 = uVar60 | uVar21;
        puVar56 = puVar56 + 1;
        *puVar56 = (u8)local_b0;
        local_b0 = local_b0 + 1;
        puVar34 = puVar34 + 1;
      } while (local_b0 != iVar57);
    }
    else {
      uVar35 = -((uint)((int)puVar34 * 0x20000000) >> 0x1e) & 7;
      if (uVar43 <= uVar35) {
        uVar35 = uVar43;
      }
      uVar44 = uVar49;
      local_c8 = (u16 *)uVar43;
      if (uVar35 != 0) {
        local_c8 = (u16 *)(uVar43 - 1);
        video->vram_map[local_cc + 8] = puVar48;
        uVar44 = local_cc + 9;
        video->vram_map_allocation_bitmap[local_cc + 8] =
             uVar60 | video->vram_map_allocation_bitmap[local_cc + 8];
        *puVar56 = (u8)local_b0;
        iVar57 = local_b0 + 1;
        if (uVar35 != 1) {
          local_c8 = (u16 *)(uVar43 - 2);
          video->vram_map[local_cc + 9] = puVar48;
          video->vram_map_allocation_bitmap[local_cc + 9] =
               uVar60 | video->vram_map_allocation_bitmap[local_cc + 9];
          video->vram_map_dirty_bit_numbers[local_cc + 9] = (u8)(local_b0 + 1);
          uVar44 = local_cc + 10;
          iVar57 = local_b0 + 2;
          if (uVar35 != 2) {
            local_c8 = (u16 *)(uVar43 - 3);
            video->vram_map[local_cc + 10] = puVar48;
            video->vram_map_allocation_bitmap[local_cc + 10] =
                 uVar60 | video->vram_map_allocation_bitmap[local_cc + 10];
            video->vram_map_dirty_bit_numbers[local_cc + 10] = (u8)(local_b0 + 2);
            uVar44 = local_cc + 0xb;
            iVar57 = local_b0 + 3;
            if (uVar35 != 3) {
              local_c8 = (u16 *)(uVar43 - 4);
              video->vram_map[local_cc + 0xb] = puVar48;
              video->vram_map_allocation_bitmap[local_cc + 0xb] =
                   uVar60 | video->vram_map_allocation_bitmap[local_cc + 0xb];
              video->vram_map_dirty_bit_numbers[local_cc + 0xb] = (u8)(local_b0 + 3);
              uVar44 = local_cc + 0xc;
              iVar57 = local_b0 + 4;
              if (uVar35 != 4) {
                local_c8 = (u16 *)(uVar43 - 5);
                video->vram_map[local_cc + 0xc] = puVar48;
                video->vram_map_allocation_bitmap[local_cc + 0xc] =
                     uVar60 | video->vram_map_allocation_bitmap[local_cc + 0xc];
                video->vram_map_dirty_bit_numbers[local_cc + 0xc] = (u8)(local_b0 + 4);
                uVar44 = local_cc + 0xd;
                iVar57 = local_b0 + 5;
                if (uVar35 != 5) {
                  local_c8 = (u16 *)(uVar43 - 6);
                  video->vram_map[local_cc + 0xd] = puVar48;
                  video->vram_map_allocation_bitmap[local_cc + 0xd] =
                       uVar60 | video->vram_map_allocation_bitmap[local_cc + 0xd];
                  video->vram_map_dirty_bit_numbers[local_cc + 0xd] = (u8)(local_b0 + 5);
                  uVar44 = local_cc + 0xe;
                  iVar57 = local_b0 + 6;
                  if (uVar35 == 7) {
                    video->vram_map[local_cc + 0xe] = puVar48;
                    local_c8 = (u16 *)(uVar43 - 7);
                    video->vram_map_allocation_bitmap[local_cc + 0xe] =
                         uVar60 | video->vram_map_allocation_bitmap[local_cc + 0xe];
                    video->vram_map_dirty_bit_numbers[local_cc + 0xe] = (u8)(local_b0 + 6);
                    uVar44 = local_cc + 0xf;
                    iVar57 = local_b0 + 7;
                  }
                }
              }
            }
          }
        }
        local_b0 = iVar57;
        if (uVar43 == uVar35) goto LAB_0802cb74;
      }
      ppuVar51 = (u8 **)(((uVar43 - uVar35) - 0x10 >> 4) + 1);
      iVar57 = (int)ppuVar51 * 0x10;
      if (0xe < (uVar43 - 1) - uVar35) {
        auVar90._8_8_ = 0x300000002;
        auVar90._0_8_ = 0x100000000;
        auVar1 = SIMDExpandImmediate(0,0,0x10);
        auVar2 = SIMDExpandImmediate(0,0,4);
        auVar89 = SIMDExpandImmediate(0,0,8);
        auVar84 = SIMDExpandImmediate(0,0,0xc);
        auVar19._4_4_ = local_b0;
        auVar19._0_4_ = local_b0;
        auVar19._8_8_ = 0;
        auVar20._4_4_ = CONCAT22(uVar60,uVar60);
        auVar20._0_4_ = CONCAT22(uVar60,uVar60);
        auVar20._8_8_ = 0;
        auVar20 = auVar20 & auVar20 << 0x40;
        vram_map_3 = (u8 **)(video->vram_map_dirty_bit_numbers + uVar49 + uVar35);
        auVar86 = VectorAdd(auVar19 & auVar19 << 0x40,auVar90,4);
        vram_map_8 = (u8 **)0x0;
        puVar34 = video->vram_map_allocation_bitmap + uVar35 + local_cc + 0x18;
        puVar52 = video->vram_map_allocation_bitmap + uVar35 + local_cc + 0x18;
        ppuVar39 = video->vram_map + uVar35 + local_cc + 8;
        do {
          auVar101 = *(undefined (*) [16])(puVar52 + -0x10);
          auVar81 = VectorAdd(auVar86,auVar2,4);
          auVar83 = VectorAdd(auVar86,auVar89,4);
          auVar99 = *(undefined (*) [16])(puVar52 + -8);
          *(undefined8 *)ppuVar39 = 0;
          *(undefined8 *)(ppuVar39 + 2) = 0;
          auVar71._0_8_ = VectorCopyNarrow(auVar86,4);
          auVar71._8_8_ = VectorCopyNarrow(auVar81,4);
          auVar81 = VectorAdd(auVar86,auVar84,4);
          auVar86 = VectorAdd(auVar86,auVar1,4);
          vram_map_8 = (u8 **)((int)vram_map_8 + 1);
          uVar72 = VectorCopyNarrow(auVar83,4);
          uVar73 = VectorCopyNarrow(auVar81,4);
          auVar101 = auVar101 | auVar20;
          uVar74 = VectorCopyNarrow(auVar71,2);
          auVar23._8_8_ = uVar73;
          auVar23._0_8_ = uVar72;
          uVar72 = VectorCopyNarrow(auVar23,2);
          *(undefined8 *)(ppuVar39 + 4) = 0;
          *(undefined8 *)(ppuVar39 + 6) = 0;
          auVar99 = auVar20 | auVar99;
          *(undefined8 *)(ppuVar39 + 8) = 0;
          *(undefined8 *)(ppuVar39 + 10) = 0;
          *(undefined8 *)(ppuVar39 + 0xc) = 0;
          *(undefined8 *)(ppuVar39 + 0xe) = 0;
          *(longlong *)(puVar34 + -0x10) = auVar101._0_8_;
          *(longlong *)(puVar34 + -0xc) = auVar101._8_8_;
          *(longlong *)(puVar34 + -8) = auVar99._0_8_;
          *(longlong *)(puVar34 + -4) = auVar99._8_8_;
          *(undefined8 *)vram_map_3 = uVar74;
          *(undefined8 *)(vram_map_3 + 2) = uVar72;
          vram_map_3 = vram_map_3 + 4;
          puVar34 = puVar34 + 0x10;
          puVar52 = puVar52 + 0x10;
          ppuVar39 = ppuVar39 + 0x10;
        } while (vram_map_8 < ppuVar51);
        uVar44 = uVar44 + iVar57;
        local_c8 = (u16 *)((int)local_c8 + (int)ppuVar51 * -0x10);
        local_b0 = local_b0 + iVar57;
        if (iVar57 - (uVar43 - uVar35) == 0) goto LAB_0802cb74;
      }
      uVar21 = video->vram_map_allocation_bitmap[uVar44];
      video->vram_map[uVar44] = puVar48;
      uVar32 = (u8)local_b0;
      video->vram_map_allocation_bitmap[uVar44] = uVar60 | uVar21;
      video->vram_map_dirty_bit_numbers[uVar44] = uVar32;
      if (local_c8 != (u16 *)0x1) {
        uVar21 = video->vram_map_allocation_bitmap[uVar44 + 1];
        video->vram_map[uVar44 + 1] = puVar48;
        video->vram_map_allocation_bitmap[uVar44 + 1] = uVar60 | uVar21;
        video->vram_map_dirty_bit_numbers[uVar44 + 1] = uVar32 + '\x01';
        if (local_c8 != (u16 *)0x2) {
          uVar21 = video->vram_map_allocation_bitmap[uVar44 + 2];
          video->vram_map[uVar44 + 2] = puVar48;
          video->vram_map_allocation_bitmap[uVar44 + 2] = uVar60 | uVar21;
          video->vram_map_dirty_bit_numbers[uVar44 + 2] = uVar32 + '\x02';
          if (local_c8 != (u16 *)0x3) {
            uVar21 = video->vram_map_allocation_bitmap[uVar44 + 3];
            video->vram_map[uVar44 + 3] = puVar48;
            video->vram_map_allocation_bitmap[uVar44 + 3] = uVar60 | uVar21;
            video->vram_map_dirty_bit_numbers[uVar44 + 3] = uVar32 + '\x03';
            if (local_c8 != (u16 *)0x4) {
              uVar21 = video->vram_map_allocation_bitmap[uVar44 + 4];
              video->vram_map[uVar44 + 4] = puVar48;
              video->vram_map_allocation_bitmap[uVar44 + 4] = uVar60 | uVar21;
              video->vram_map_dirty_bit_numbers[uVar44 + 4] = uVar32 + '\x04';
              if (local_c8 != (u16 *)0x5) {
                uVar21 = video->vram_map_allocation_bitmap[uVar44 + 5];
                video->vram_map[uVar44 + 5] = puVar48;
                video->vram_map_allocation_bitmap[uVar44 + 5] = uVar60 | uVar21;
                video->vram_map_dirty_bit_numbers[uVar44 + 5] = uVar32 + '\x05';
                if (local_c8 != (u16 *)0x6) {
                  uVar21 = video->vram_map_allocation_bitmap[uVar44 + 6];
                  video->vram_map[uVar44 + 6] = puVar48;
                  video->vram_map_allocation_bitmap[uVar44 + 6] = uVar60 | uVar21;
                  video->vram_map_dirty_bit_numbers[uVar44 + 6] = uVar32 + '\x06';
                  if (local_c8 != (u16 *)0x7) {
                    uVar21 = video->vram_map_allocation_bitmap[uVar44 + 7];
                    video->vram_map[uVar44 + 7] = puVar48;
                    video->vram_map_allocation_bitmap[uVar44 + 7] = uVar60 | uVar21;
                    video->vram_map_dirty_bit_numbers[uVar44 + 7] = uVar32 + '\a';
                    if (local_c8 != (u16 *)0x8) {
                      uVar21 = video->vram_map_allocation_bitmap[uVar44 + 8];
                      video->vram_map[uVar44 + 8] = puVar48;
                      video->vram_map_allocation_bitmap[uVar44 + 8] = uVar60 | uVar21;
                      video->vram_map_dirty_bit_numbers[uVar44 + 8] = uVar32 + '\b';
                      if (local_c8 != (u16 *)0x9) {
                        uVar21 = video->vram_map_allocation_bitmap[uVar44 + 9];
                        video->vram_map[uVar44 + 9] = puVar48;
                        video->vram_map_allocation_bitmap[uVar44 + 9] = uVar60 | uVar21;
                        video->vram_map_dirty_bit_numbers[uVar44 + 9] = uVar32 + '\t';
                        if (local_c8 != (u16 *)0xa) {
                          uVar21 = video->vram_map_allocation_bitmap[uVar44 + 10];
                          video->vram_map[uVar44 + 10] = puVar48;
                          video->vram_map_allocation_bitmap[uVar44 + 10] = uVar60 | uVar21;
                          video->vram_map_dirty_bit_numbers[uVar44 + 10] = uVar32 + '\n';
                          if (local_c8 != (u16 *)0xb) {
                            uVar21 = video->vram_map_allocation_bitmap[uVar44 + 0xb];
                            video->vram_map[uVar44 + 0xb] = puVar48;
                            video->vram_map_allocation_bitmap[uVar44 + 0xb] = uVar60 | uVar21;
                            video->vram_map_dirty_bit_numbers[uVar44 + 0xb] = uVar32 + '\v';
                            if (local_c8 != (u16 *)0xc) {
                              uVar21 = video->vram_map_allocation_bitmap[uVar44 + 0xc];
                              video->vram_map[uVar44 + 0xc] = puVar48;
                              video->vram_map_allocation_bitmap[uVar44 + 0xc] = uVar60 | uVar21;
                              video->vram_map_dirty_bit_numbers[uVar44 + 0xc] = uVar32 + '\f';
                              if (local_c8 != (u16 *)0xd) {
                                video->vram_map[uVar44 + 0xd] = puVar48;
                                video->vram_map_allocation_bitmap[uVar44 + 0xd] =
                                     uVar60 | video->vram_map_allocation_bitmap[uVar44 + 0xd];
                                video->vram_map_dirty_bit_numbers[uVar44 + 0xd] = uVar32 + '\r';
                                if (local_c8 != (u16 *)0xe) {
                                  video->vram_map[uVar44 + 0xe] = puVar48;
                                  video->vram_map_allocation_bitmap[uVar44 + 0xe] =
                                       uVar60 | video->vram_map_allocation_bitmap[uVar44 + 0xe];
                                  video->vram_map_dirty_bit_numbers[uVar44 + 0xe] = uVar32 + '\x0e';
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
LAB_0802cb74:
  iVar57 = 6;
LAB_08028a74:
  bVar65 = iVar33 == __stack_chk_guard;
  uVar72 = CONCAT44(vram_map_setting,iVar57);
  auVar1._8_4_ = local_cc;
  auVar1._0_8_ = uVar72;
  auVar1._12_4_ = local_c4;
  video->vram_bank_maps[vram_region].address_space_type = (int)uVar72;
  video->vram_bank_maps[vram_region].map_setting = (int)((ulonglong)uVar72 >> 0x20);
  video->vram_bank_maps[vram_region].region_offset = (int)auVar1._8_8_;
  video->vram_bank_maps[vram_region].region_size = (int)((ulonglong)auVar1._8_8_ >> 0x20);
  if (bVar65) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


