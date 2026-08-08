/*
 * Ghidra decompilation
 *
 * Function : cpu_block_flush
 * Address  : 08027344
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u32 cpu_block_flush(cpu_struct *cpu,u32 target_pc)

{
  cpu_struct *cpu_00;
  int **ppiVar1;
  uint uVar2;
  u32 current_coarse;
  u32 current_coarse_1;
  void *pvVar3;
  u8 *block_resume_ptr;
  u8 *puVar4;
  u8 *block_ptr;
  u8 *block_ptr_1;
  u32 current_coarse_3;
  u32 current_coarse_4;
  u8 *block_resume_ptr_1;
  u32 current_coarse_2;
  u32 current_coarse_5;
  uint uVar5;
  u32 page_table_entry;
  u32 page_table_entry_1;
  u32 uVar6;
  u32 alternate_pc;
  u32 page_table_entry_3;
  u32 page_table_entry_4;
  u32 alternate_pc_1;
  u32 page_table_entry_2;
  u32 page_table_entry_5;
  cpu_struct *cpu_01;
  memory_struct *pmVar7;
  uint *puVar8;
  int *piVar9;
  u8 *next_block_metadata_ptr;
  u8 *next_block_metadata_ptr_1;
  u8 uVar10;
  u32 *puVar11;
  u32 *puVar12;
  cpu_struct *cpu_02;
  cpu_struct *alternate_cpu;
  uint uVar13;
  u32 current_fine;
  u32 current_fine_1;
  translation_cache_struct *translation_cache_1;
  translation_cache_struct *translation_cache_2;
  int iVar14;
  int iVar15;
  u32 current_fine_3;
  u32 current_fine_4;
  u32 current_fine_2;
  u32 current_fine_5;
  u8 *puVar16;
  u8 *block_metadata_ptr;
  int **ppiVar17;
  u8 *block_metadata_ptr_1;
  translation_cache_struct *ptVar18;
  translation_cache_struct *translation_cache;
  u32 bitmap_coarse_current;
  u32 bitmap_coarse_current_1;
  u32 bitmap_coarse_current_2;
  u32 bitmap_coarse_current_3;
  u8 **ppuVar19;
  u32 bitmap_coarse_current_4;
  u32 bitmap_coarse_current_5;
  u32 *page_allocation_bitmap_fine;
  u32 *page_allocation_bitmap_fine_ptr;
  u32 *page_allocation_bitmap_fine_1;
  u32 *page_allocation_bitmap_fine_ptr_1;
  uint *puVar20;
  uint *puVar21;
  u32 *page_table;
  u32 *page_table_ptr_a;
  u32 *page_table_1;
  u32 *page_table_ptr_a_1;
  u32 *bitmap_fine_ptr;
  u32 *puVar22;
  u32 *bitmap_fine_ptr_1;
  u32 *page_allocation_bitmap_fine_3;
  u32 *page_allocation_bitmap_fine_ptr_3;
  u32 *page_allocation_bitmap_fine_4;
  u32 *page_allocation_bitmap_fine_ptr_4;
  u32 *page_allocation_bitmap_fine_2;
  u32 *page_allocation_bitmap_fine_ptr_2;
  u32 *page_allocation_bitmap_fine_5;
  u32 *page_allocation_bitmap_fine_ptr_5;
  u32 *page_table_4;
  u32 *page_table_ptr_a_4;
  u32 *bitmap_fine_ptr_2;
  memory_struct *pmVar23;
  memory_struct *memory_1;
  u32 *page_table_3;
  u32 *page_table_ptr_a_3;
  u32 *page_table_2;
  u32 *page_table_ptr_a_2;
  u32 *page_table_5;
  u32 *page_table_ptr_a_5;
  u8 *puVar24;
  u8 *base_translation_ptr_alternate;
  cpu_struct *cpu_03;
  u32 *page_table_ptr_b;
  u32 *page_table_ptr_b_1;
  u8 *base_translation_ptr_main;
  u8 *base_translation_ptr_main_b;
  u8 *base_translation_ptr_alternate_b;
  u8 *base_translation_ptr_main_1;
  u8 *base_translation_ptr_main_b_1;
  u8 *base_translation_ptr_alternate_1;
  u8 *base_translation_ptr_alternate_b_1;
  u32 *page_table_ptr_b_3;
  u32 *page_table_ptr_b_4;
  u32 *page_table_ptr_b_2;
  u32 *page_table_ptr_b_5;
  bool bVar25;
  memory_struct *memory;
  u8 *local_7c;
  cpu_struct *cpu_arm7;
  u8 *base_translation_ptr_itcm_b;
  u8 *base_translation_ptr_itcm;
  u8 *local_6c;
  u8 *local_68;
  u8 *base_translation_ptr_itcm_1;
  u8 *base_translation_ptr_itcm_b_1;
  u8 *local_5c;
  u8 *local_58;
  u8 *local_54;
  u64 ticks_start;
  u64 ticks_start_1;
  u64 ticks_end;
  int local_2c;
  
  cpu_01 = cpu->alternate_cpu;
  pmVar7 = cpu->memory;
  local_2c = __stack_chk_guard;
  get_ticks_us(&ticks_start);
  puVar22 = cpu->block_lookup_mini_hash;
  if (puVar22 < cpu_01->block_lookup_mini_hash + 4 &&
      cpu_01->block_lookup_mini_hash < cpu->block_lookup_mini_hash + 4) {
    puVar16 = &cpu->timers[3].prescale;
    puVar4 = &cpu_01->timers[3].prescale;
    do {
      puVar16 = puVar16 + 4;
      *(undefined4 *)puVar16 = 0;
      puVar4 = puVar4 + 4;
      *(undefined4 *)puVar4 = 0;
    } while (cpu->block_lookup_mini_hash + 0x7ff != (u32 *)puVar16);
  }
  else {
    puVar11 = cpu_01->block_lookup_mini_hash;
    do {
      *(undefined8 *)puVar22 = 0;
      *(undefined8 *)(puVar22 + 2) = 0;
      puVar12 = puVar11 + 4;
      puVar22 = puVar22 + 4;
      *(undefined8 *)puVar11 = 0;
      *(undefined8 *)(puVar11 + 2) = 0;
      puVar11 = puVar12;
    } while ((u8 **)puVar12 != &cpu_01->io_region);
  }
  uVar10 = cpu->type;
  if (target_pc >> 0x18 == 2) {
LAB_08027be0:
    if (uVar10 == '\x01') {
LAB_08027af4:
      memset(cpu->memory->itcm_code_bitmap_fine,0,0x800);
      iVar15 = 0;
      do {
        cpu->block_lookup_itcm_arm[iVar15] = (u8 *)0x0;
        iVar14 = iVar15 + 1;
        cpu->translation_cache->itcm_hot_modifications[iVar15] =
             cpu->translation_cache->itcm_hot_modifications[iVar15] & 0x7f;
        iVar15 = iVar14;
      } while (iVar14 != 0x2000);
      iVar15 = 0;
      do {
        *(undefined4 *)((int)cpu->block_lookup_itcm_thumb + iVar15) = 0;
        iVar15 = iVar15 + 4;
      } while (iVar15 != 0x10000);
      ptVar18 = cpu->translation_cache;
      ptVar18->itcm_hot_block_count = 0;
      translation_cache_flush_itcm(ptVar18);
      if (target_pc < 0x2000000) {
        uVar6 = (u32)(cpu->pc < 0x2000000);
        goto LAB_08027ac4;
      }
    }
    else {
      memset(cpu_01->memory->itcm_code_bitmap_fine,0,0x800);
      iVar15 = 0;
      do {
        cpu_01->block_lookup_itcm_arm[iVar15] = (u8 *)0x0;
        iVar14 = iVar15 + 1;
        cpu_01->translation_cache->itcm_hot_modifications[iVar15] =
             cpu_01->translation_cache->itcm_hot_modifications[iVar15] & 0x7f;
        iVar15 = iVar14;
      } while (iVar14 != 0x2000);
      iVar15 = 0;
      do {
        *(undefined4 *)((int)cpu_01->block_lookup_itcm_thumb + iVar15) = 0;
        iVar15 = iVar15 + 4;
      } while (iVar15 != 0x10000);
      ptVar18 = cpu_01->translation_cache;
      ptVar18->itcm_hot_block_count = 0;
      translation_cache_flush_itcm(ptVar18);
    }
    memset(cpu->translation_cache->block_lookup_hash_main,0,0x80000);
    if (cpu->type == '\x01') {
      page_allocation_bitmap_fine_2 = (cpu->memory_interface).page_allocation_bitmap_fine;
      puVar22 = (cpu->memory_interface).page_allocation_bitmap_fine + 0xfff;
      page_table_2 = (cpu->memory_interface).page_table;
      do {
        puVar22 = puVar22 + 1;
        puVar21 = page_allocation_bitmap_fine_2;
        puVar20 = page_table_2;
        for (uVar2 = *puVar22; uVar2 != 0; uVar2 = uVar2 >> 1) {
          if ((uVar2 & 1) != 0) {
            puVar8 = puVar20;
            for (uVar13 = *puVar21; uVar13 != 0; uVar13 = uVar13 >> 1) {
              if ((uVar13 & 1) != 0) {
                uVar5 = *puVar8;
                if ((int)uVar5 < 0) {
                  uVar5 = uVar5 & 0x3fffffff;
                }
                *puVar8 = uVar5;
              }
              puVar8 = puVar8 + 1;
            }
          }
          puVar20 = puVar20 + 0x20;
          puVar21 = puVar21 + 1;
        }
        page_table_2 = page_table_2 + 0x400;
        page_allocation_bitmap_fine_2 = page_allocation_bitmap_fine_2 + 0x20;
      } while (puVar22 != (cpu->memory_interface).page_allocation_bitmap_coarse + 0x17);
      page_allocation_bitmap_fine_5 = (cpu_01->memory_interface).page_allocation_bitmap_fine;
      puVar22 = (cpu_01->memory_interface).page_allocation_bitmap_coarse + 0xf;
      page_table_5 = (cpu_01->memory_interface).page_table;
      do {
        puVar22 = puVar22 + 1;
        puVar21 = page_allocation_bitmap_fine_5;
        puVar20 = page_table_5;
        for (uVar2 = *puVar22; uVar2 != 0; uVar2 = uVar2 >> 1) {
          if ((uVar2 & 1) != 0) {
            puVar8 = puVar20;
            for (uVar13 = *puVar21; uVar13 != 0; uVar13 = uVar13 >> 1) {
              if ((uVar13 & 1) != 0) {
                uVar5 = *puVar8;
                if ((int)uVar5 < 0) {
                  uVar5 = uVar5 & 0x3fffffff;
                }
                *puVar8 = uVar5;
              }
              puVar8 = puVar8 + 1;
            }
          }
          puVar20 = puVar20 + 0x20;
          puVar21 = puVar21 + 1;
        }
        page_table_5 = page_table_5 + 0x400;
        page_allocation_bitmap_fine_5 = page_allocation_bitmap_fine_5 + 0x20;
      } while ((cpu_01->memory_interface).page_allocation_bitmap_coarse + 0x17 != puVar22);
    }
    else {
      page_allocation_bitmap_fine_3 = (cpu->memory_interface).page_allocation_bitmap_fine;
      puVar22 = (cpu->memory_interface).page_allocation_bitmap_coarse + 0xf;
      page_table_3 = (cpu->memory_interface).page_table;
      do {
        puVar22 = puVar22 + 1;
        puVar21 = page_allocation_bitmap_fine_3;
        puVar20 = page_table_3;
        for (uVar2 = *puVar22; uVar2 != 0; uVar2 = uVar2 >> 1) {
          if ((uVar2 & 1) != 0) {
            puVar8 = puVar20;
            for (uVar13 = *puVar21; uVar13 != 0; uVar13 = uVar13 >> 1) {
              if ((uVar13 & 1) != 0) {
                uVar5 = *puVar8;
                if ((int)uVar5 < 0) {
                  uVar5 = uVar5 & 0x3fffffff;
                }
                *puVar8 = uVar5;
              }
              puVar8 = puVar8 + 1;
            }
          }
          puVar20 = puVar20 + 0x20;
          puVar21 = puVar21 + 1;
        }
        page_table_3 = page_table_3 + 0x400;
        page_allocation_bitmap_fine_3 = page_allocation_bitmap_fine_3 + 0x20;
      } while (puVar22 != (cpu->memory_interface).page_allocation_bitmap_coarse + 0x17);
      page_allocation_bitmap_fine_4 = (cpu_01->memory_interface).page_allocation_bitmap_fine;
      puVar22 = (cpu_01->memory_interface).page_allocation_bitmap_fine + 0xfff;
      page_table_4 = (cpu_01->memory_interface).page_table;
      do {
        puVar22 = puVar22 + 1;
        puVar21 = page_allocation_bitmap_fine_4;
        puVar20 = page_table_4;
        for (uVar2 = *puVar22; uVar2 != 0; uVar2 = uVar2 >> 1) {
          if ((uVar2 & 1) != 0) {
            puVar8 = puVar20;
            for (uVar13 = *puVar21; uVar13 != 0; uVar13 = uVar13 >> 1) {
              if ((uVar13 & 1) != 0) {
                uVar5 = *puVar8;
                if ((int)uVar5 < 0) {
                  uVar5 = uVar5 & 0x3fffffff;
                }
                *puVar8 = uVar5;
              }
              puVar8 = puVar8 + 1;
            }
          }
          puVar20 = puVar20 + 0x20;
          puVar21 = puVar21 + 1;
        }
        page_table_4 = page_table_4 + 0x400;
        page_allocation_bitmap_fine_4 = page_allocation_bitmap_fine_4 + 0x20;
      } while (puVar22 != (cpu_01->memory_interface).page_allocation_bitmap_coarse + 0x17);
    }
    puVar11 = pmVar7->main_ram_code_bitmap_fine;
    puVar22 = pmVar7->main_ram_code_bitmap_coarse;
    do {
      uVar2 = *puVar22;
      puVar12 = puVar22 + 1;
      *puVar22 = 0;
      puVar22 = puVar11;
      for (; uVar2 != 0; uVar2 = uVar2 >> 1) {
        if ((uVar2 & 1) != 0) {
          memset(puVar22,0,0x80);
        }
        puVar22 = puVar22 + 0x20;
      }
      puVar11 = puVar11 + 0x400;
      puVar22 = puVar12;
    } while (&pmVar7->slot2_ram_code_bitmap_coarse != (u32 **)puVar12);
    uVar2 = pmVar7->itcm_code_bitmap_coarse[0];
    pmVar7->itcm_code_bitmap_coarse[0] = 0;
    puVar22 = pmVar7->itcm_code_bitmap_fine;
    for (; uVar2 != 0; uVar2 = uVar2 >> 1) {
      if ((uVar2 & 1) != 0) {
        memset(puVar22,0,0x80);
      }
      puVar22 = puVar22 + 0x20;
    }
    get_ticks_us(&ticks_end);
    translation_cache_flush_main(cpu->translation_cache);
    if ((cpu_01->block_resume_ptr != (void *)0x0) &&
       ((cpu_01->pc >> 0x18 == 2 || (cpu_01->pc < 0x2000000 && cpu_01->type == '\x01')))) {
      uVar6 = *(u32 *)(*(int *)((int)cpu_01->block_resume_ptr + -0xc) + 4);
      cpu_01->pc = uVar6;
      pvVar3 = cpu_block_lookup_base(cpu_01,uVar6);
      uVar6 = 1;
      cpu_01->block_resume_ptr = (void *)((int)pvVar3 + 8);
      goto LAB_08027ac4;
    }
  }
  else {
    bVar25 = target_pc == 0x2000000;
    if (target_pc < 0x2000001) {
      bVar25 = uVar10 == '\x01';
    }
    if (bVar25) goto LAB_08027af4;
    ptVar18 = cpu->translation_cache;
    cpu_02 = cpu->alternate_cpu;
    pmVar23 = cpu->memory;
    get_ticks_us(&ticks_start_1);
    cpu_03 = cpu_02;
    cpu_00 = cpu;
    if (cpu->type != '\x01') {
      cpu_03 = cpu;
      cpu_00 = cpu_02;
    }
    memset(ptVar18->block_lookup_hash_alternate,0,0x20000);
    page_allocation_bitmap_fine = (cpu->memory_interface).page_allocation_bitmap_fine;
    puVar22 = (cpu->memory_interface).page_allocation_bitmap_coarse + 0x17;
    page_table = (cpu->memory_interface).page_table;
    do {
      puVar22 = puVar22 + 1;
      puVar21 = page_allocation_bitmap_fine;
      puVar20 = page_table;
      for (uVar2 = *puVar22; uVar2 != 0; uVar2 = uVar2 >> 1) {
        if ((uVar2 & 1) != 0) {
          puVar8 = puVar20;
          for (uVar13 = *puVar21; uVar13 != 0; uVar13 = uVar13 >> 1) {
            if ((uVar13 & 1) != 0) {
              uVar5 = *puVar8;
              if ((int)uVar5 < 0) {
                uVar5 = uVar5 & 0x3fffffff;
              }
              *puVar8 = uVar5;
            }
            puVar8 = puVar8 + 1;
          }
        }
        puVar20 = puVar20 + 0x20;
        puVar21 = puVar21 + 1;
      }
      page_table = page_table + 0x400;
      page_allocation_bitmap_fine = page_allocation_bitmap_fine + 0x20;
    } while (puVar22 != (cpu->memory_interface).page_allocation_bitmap_coarse + 0x7f);
    page_allocation_bitmap_fine_1 = (cpu_02->memory_interface).page_allocation_bitmap_fine;
    puVar22 = (cpu_02->memory_interface).page_allocation_bitmap_coarse + 0x17;
    page_table_1 = (cpu_02->memory_interface).page_table;
    do {
      puVar22 = puVar22 + 1;
      puVar21 = page_allocation_bitmap_fine_1;
      puVar20 = page_table_1;
      for (uVar2 = *puVar22; uVar2 != 0; uVar2 = uVar2 >> 1) {
        if ((uVar2 & 1) != 0) {
          puVar8 = puVar20;
          for (uVar13 = *puVar21; uVar13 != 0; uVar13 = uVar13 >> 1) {
            if ((uVar13 & 1) != 0) {
              uVar5 = *puVar8;
              if ((int)uVar5 < 0) {
                uVar5 = uVar5 & 0x3fffffff;
              }
              *puVar8 = uVar5;
            }
            puVar8 = puVar8 + 1;
          }
        }
        puVar20 = puVar20 + 0x20;
        puVar21 = puVar21 + 1;
      }
      page_table_1 = page_table_1 + 0x400;
      page_allocation_bitmap_fine_1 = page_allocation_bitmap_fine_1 + 0x20;
    } while (puVar22 != (cpu_02->memory_interface).page_allocation_bitmap_coarse + 0x7f);
    uVar2 = pmVar23->wram_code_bitmap_coarse[0];
    puVar22 = pmVar23->wram_code_bitmap_fine;
    pmVar23->wram_code_bitmap_coarse[0] = 0;
    for (; uVar2 != 0; uVar2 = uVar2 >> 1) {
      if ((uVar2 & 1) != 0) {
        memset(puVar22,0,0x80);
      }
      puVar22 = puVar22 + 0x20;
    }
    uVar2 = pmVar23->arm7_wram_code_bitmap_coarse[0];
    puVar22 = pmVar23->arm7_wram_code_bitmap_fine;
    pmVar23->arm7_wram_code_bitmap_coarse[0] = 0;
    for (; uVar2 != 0; uVar2 = uVar2 >> 1) {
      if ((uVar2 & 1) != 0) {
        memset(puVar22,0,0x80);
      }
      puVar22 = puVar22 + 0x20;
    }
    puVar11 = pmVar23->vram_code_bitmap_fine;
    puVar22 = pmVar23->vram_code_bitmap_coarse;
    do {
      uVar2 = *puVar22;
      puVar12 = puVar22 + 1;
      *puVar22 = 0;
      puVar22 = puVar11;
      for (; uVar2 != 0; uVar2 = uVar2 >> 1) {
        if ((uVar2 & 1) != 0) {
          memset(puVar22,0,0x80);
        }
        puVar22 = puVar22 + 0x20;
      }
      puVar11 = puVar11 + 0x400;
      puVar22 = puVar12;
    } while (pmVar23->main_ram_code_bitmap_fine != puVar12);
    if (pmVar23->slot2_ram != (u8 *)0x0) {
      puVar20 = pmVar23->slot2_ram_code_bitmap_coarse;
      puVar22 = pmVar23->slot2_ram_code_bitmap_fine;
      puVar21 = puVar20;
      do {
        uVar2 = *puVar21;
        puVar8 = puVar21 + 1;
        *puVar21 = 0;
        puVar11 = puVar22;
        for (; uVar2 != 0; uVar2 = uVar2 >> 1) {
          if ((uVar2 & 1) != 0) {
            memset(puVar11,0,0x80);
          }
          puVar11 = puVar11 + 0x20;
        }
        puVar22 = puVar22 + 0x400;
        puVar21 = puVar8;
      } while (puVar8 != puVar20 + 0x200);
    }
    get_ticks_us(&ticks_end);
    translation_cache_flush_alternate(cpu->translation_cache);
    if ((cpu_02->block_resume_ptr != (void *)0x0) && (uVar2 = cpu_02->pc, uVar2 >> 0x18 != 2)) {
      bVar25 = uVar2 == 0x2000000;
      if (uVar2 < 0x2000001) {
        bVar25 = cpu_02->type == '\x01';
      }
      if (!bVar25) {
        uVar6 = *(u32 *)(*(int *)((int)cpu_02->block_resume_ptr + -0xc) + 4);
        cpu_02->pc = uVar6;
        pvVar3 = cpu_block_lookup_base(cpu_02,uVar6);
        block_resume_ptr = (u8 *)((int)pvVar3 + 8);
        cpu_02->block_resume_ptr = block_resume_ptr;
      }
    }
    if (cpu_03->type == '\x01') {
      puVar4 = cpu_03->block_lookup_itcm_arm[2];
      if (puVar4 == (u8 *)0x0) {
        ptVar18 = cpu_03->translation_cache;
        puVar16 = ptVar18->translation_stack + 0x60000;
        ppuVar19 = &ptVar18->translation_ptr_main;
        local_7c = *ppuVar19;
        local_5c = ptVar18->translation_ptr_main_b;
        local_58 = ptVar18->translation_ptr_alternate_b;
        local_68 = ptVar18->translation_ptr_itcm;
        local_6c = ptVar18->translation_ptr_itcm_b;
        puVar24 = ptVar18->translation_ptr_alternate;
        ptVar18->translation_stack_pointer = ptVar18->translation_stack;
        (ptVar18->delayed_targets).position = 0;
        (ptVar18->delayed_targets).delayed_block_position = 0;
        puVar4 = (u8 *)cpu_block_create(cpu_03,8,0);
        if (puVar4 != (u8 *)0x0) {
          cpu_03->block_lookup_itcm_arm[2] = puVar4;
          uVar2 = (uint)cpu_03->translation_cache->itcm_hot_modifications[2];
          if (8 < uVar2) {
            cpu_03->translation_cache->itcm_hot_modifications[2] =
                 ~((byte)~(byte)((uVar2 << 0x19) >> 0x18) >> 1);
          }
        }
LAB_08027824:
        cpu_translate_link_delayed_targets(cpu_03);
        if (*ppuVar19 != local_7c) {
          __clear_cache(local_7c);
        }
        if (local_5c != ppuVar19[1]) {
          __clear_cache(ppuVar19[1],local_5c);
        }
        if (ppuVar19[4] != puVar24) {
          __clear_cache(puVar24);
        }
        if (ppuVar19[5] != local_58) {
          __clear_cache(ppuVar19[5],local_58);
        }
        if (local_68 != ppuVar19[2]) {
          __clear_cache(local_68);
        }
        if (local_6c != *(u8 **)(puVar16 + 0x2000c)) {
          __clear_cache(*(u8 **)(puVar16 + 0x2000c),local_6c);
        }
        cpu_03->block_lookup_mini_hash[2] = 8;
        cpu_03->block_lookup_mini_hash[0x402] = (u32)puVar4;
        cpu_03->swi_block_ptr = puVar4;
        if (cpu_03->type != '\x01') goto LAB_080278dc;
      }
      else {
        cpu_03->block_lookup_mini_hash[2] = 8;
        cpu_03->block_lookup_mini_hash[0x402] = (u32)puVar4;
        cpu_03->swi_block_ptr = puVar4;
      }
      puVar4 = cpu_03->block_lookup_itcm_arm[6];
      if (puVar4 == (u8 *)0x0) {
        ptVar18 = cpu_03->translation_cache;
        puVar16 = ptVar18->translation_stack + 0x60000;
        ppuVar19 = &ptVar18->translation_ptr_main;
        local_54 = *ppuVar19;
        local_68 = ptVar18->translation_ptr_main_b;
        local_5c = ptVar18->translation_ptr_itcm;
        local_58 = ptVar18->translation_ptr_itcm_b;
        local_7c = ptVar18->translation_ptr_alternate;
        local_6c = ptVar18->translation_ptr_alternate_b;
        ptVar18->translation_stack_pointer = ptVar18->translation_stack;
        (ptVar18->delayed_targets).position = 0;
        (ptVar18->delayed_targets).delayed_block_position = 0;
        puVar4 = (u8 *)cpu_block_create(cpu_03,0x18,0);
        if (puVar4 != (u8 *)0x0) {
          cpu_03->block_lookup_itcm_arm[6] = puVar4;
          uVar2 = (uint)cpu_03->translation_cache->itcm_hot_modifications[6];
          if (8 < uVar2) {
            cpu_03->translation_cache->itcm_hot_modifications[6] =
                 ~((byte)~(byte)((uVar2 << 0x19) >> 0x18) >> 1);
          }
        }
LAB_080279c8:
        cpu_translate_link_delayed_targets(cpu_03);
        if (*ppuVar19 != local_54) {
          __clear_cache(local_54);
        }
        if (local_68 != ppuVar19[1]) {
          __clear_cache(ppuVar19[1],local_68);
        }
        if (local_7c != ppuVar19[4]) {
          __clear_cache(local_7c);
        }
        if (local_6c != ppuVar19[5]) {
          __clear_cache(ppuVar19[5],local_6c);
        }
        if (local_5c != ppuVar19[2]) {
          __clear_cache(local_5c);
        }
        if (local_58 != *(u8 **)(puVar16 + 0x2000c)) {
          __clear_cache(*(u8 **)(puVar16 + 0x2000c),local_58);
        }
        cpu_03->block_lookup_mini_hash[6] = 0x18;
        cpu_03->block_lookup_mini_hash[0x406] = (u32)puVar4;
      }
      else {
        cpu_03->block_lookup_mini_hash[6] = 0x18;
        cpu_03->block_lookup_mini_hash[0x406] = (u32)puVar4;
      }
    }
    else {
      ptVar18 = cpu_03->translation_cache;
      if (ptVar18->block_lookup_hash_alternate[8] == 8) {
        puVar4 = (u8 *)ptVar18->block_lookup_hash_alternate[9];
        cpu_03->block_lookup_mini_hash[2] = 8;
        cpu_03->block_lookup_mini_hash[0x402] = (u32)puVar4;
      }
      else {
        if (ptVar18->block_lookup_hash_alternate[10] != 8) {
          if (ptVar18->block_lookup_hash_alternate[0xb] != 0) {
            for (piVar9 = (int *)**(int **)(ptVar18->block_lookup_hash_alternate[0xb] - 4);
                piVar9 != (int *)0x0; piVar9 = (int *)*piVar9) {
              if (piVar9[1] == 8) {
                puVar4 = (u8 *)piVar9[2];
                cpu_03->block_lookup_mini_hash[2] = 8;
                cpu_03->block_lookup_mini_hash[0x402] = (u32)puVar4;
                goto LAB_0802806c;
              }
            }
          }
          puVar16 = ptVar18->translation_stack + 0x60000;
          ppuVar19 = &ptVar18->translation_ptr_main;
          local_7c = *ppuVar19;
          puVar24 = ptVar18->translation_ptr_alternate;
          base_translation_ptr_main = ptVar18->translation_ptr_main_b;
          base_translation_ptr_main_b = ptVar18->translation_ptr_itcm;
          local_6c = ptVar18->translation_ptr_itcm_b;
          local_58 = ptVar18->translation_ptr_alternate_b;
          ptVar18->translation_stack_pointer = ptVar18->translation_stack;
          (ptVar18->delayed_targets).position = 0;
          (ptVar18->delayed_targets).delayed_block_position = 0;
          puVar4 = (u8 *)cpu_block_create(cpu_03,8,0);
          local_68 = base_translation_ptr_main_b;
          local_5c = base_translation_ptr_main;
          if (puVar4 != (u8 *)0x0) {
            if (ptVar18->block_lookup_hash_alternate[9] == 0) {
              ptVar18->block_lookup_hash_alternate[8] = 8;
              ptVar18->block_lookup_hash_alternate[9] = (u32)puVar4;
            }
            else if (ptVar18->block_lookup_hash_alternate[0xb] == 0) {
              ptVar18->block_lookup_hash_alternate[10] = 8;
              ptVar18->block_lookup_hash_alternate[0xb] = (u32)puVar4;
            }
            else {
              ppiVar17 = *(int ***)(ptVar18->block_lookup_hash_alternate[0xb] - 4);
              for (ppiVar1 = (int **)*ppiVar17; ppiVar1 != (int **)0x0; ppiVar1 = (int **)*ppiVar1)
              {
                ppiVar17 = ppiVar1;
              }
              *ppiVar17 = (int *)*(int *)(puVar4 + -4);
            }
          }
          goto LAB_08027824;
        }
        puVar4 = (u8 *)ptVar18->block_lookup_hash_alternate[0xb];
        cpu_03->block_lookup_mini_hash[2] = 8;
        cpu_03->block_lookup_mini_hash[0x402] = (u32)puVar4;
      }
LAB_0802806c:
      cpu_03->swi_block_ptr = puVar4;
LAB_080278dc:
      ptVar18 = cpu_03->translation_cache;
      if (ptVar18->block_lookup_hash_alternate[0x18] == 0x18) {
        puVar4 = (u8 *)ptVar18->block_lookup_hash_alternate[0x19];
        cpu_03->block_lookup_mini_hash[6] = 0x18;
        cpu_03->block_lookup_mini_hash[0x406] = (u32)puVar4;
      }
      else {
        puVar4 = (u8 *)ptVar18->block_lookup_hash_alternate[0x1b];
        if (ptVar18->block_lookup_hash_alternate[0x1a] != 0x18) {
          if (puVar4 != (u8 *)0x0) {
            for (piVar9 = (int *)**(int **)(puVar4 + -4); piVar9 != (int *)0x0;
                piVar9 = (int *)*piVar9) {
              if (piVar9[1] == 0x18) {
                puVar4 = (u8 *)piVar9[2];
                cpu_03->block_lookup_mini_hash[6] = 0x18;
                cpu_03->block_lookup_mini_hash[0x406] = (u32)puVar4;
                goto LAB_08027a74;
              }
            }
          }
          puVar16 = ptVar18->translation_stack + 0x60000;
          ppuVar19 = &ptVar18->translation_ptr_main;
          local_54 = *ppuVar19;
          local_68 = ptVar18->translation_ptr_main_b;
          local_5c = ptVar18->translation_ptr_itcm;
          local_58 = ptVar18->translation_ptr_itcm_b;
          local_7c = ptVar18->translation_ptr_alternate;
          local_6c = ptVar18->translation_ptr_alternate_b;
          ptVar18->translation_stack_pointer = ptVar18->translation_stack;
          (ptVar18->delayed_targets).position = 0;
          (ptVar18->delayed_targets).delayed_block_position = 0;
          puVar4 = (u8 *)cpu_block_create(cpu_03,0x18,0);
          if (puVar4 != (u8 *)0x0) {
            if (ptVar18->block_lookup_hash_alternate[0x19] == 0) {
              ptVar18->block_lookup_hash_alternate[0x18] = 0x18;
              ptVar18->block_lookup_hash_alternate[0x19] = (u32)puVar4;
            }
            else if (ptVar18->block_lookup_hash_alternate[0x1b] == 0) {
              ptVar18->block_lookup_hash_alternate[0x1a] = 0x18;
              ptVar18->block_lookup_hash_alternate[0x1b] = (u32)puVar4;
            }
            else {
              ppiVar17 = *(int ***)(ptVar18->block_lookup_hash_alternate[0x1b] - 4);
              for (ppiVar1 = (int **)*ppiVar17; ppiVar1 != (int **)0x0; ppiVar1 = (int **)*ppiVar1)
              {
                ppiVar17 = ppiVar1;
              }
              *ppiVar17 = (int *)*(int *)(puVar4 + -4);
            }
          }
          goto LAB_080279c8;
        }
        cpu_03->block_lookup_mini_hash[6] = 0x18;
        cpu_03->block_lookup_mini_hash[0x406] = (u32)puVar4;
      }
    }
LAB_08027a74:
    cpu_03->irq_block_ptr = puVar4;
    puVar4 = (u8 *)cpu_block_lookup_base(cpu_00,cpu_00->coprocessor->exception_vector_offset + 8);
    uVar6 = cpu_00->coprocessor->exception_vector_offset;
    cpu_00->swi_block_ptr = puVar4;
    puVar4 = (u8 *)cpu_block_lookup_base(cpu_00,uVar6 + 0x18);
    cpu_00->irq_block_ptr = puVar4;
    if (target_pc == 0xffffffff) {
      uVar10 = cpu->type;
      goto LAB_08027be0;
    }
  }
  uVar6 = 1;
LAB_08027ac4:
  if (local_2c == __stack_chk_guard) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


