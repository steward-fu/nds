/*
 * Ghidra decompilation
 *
 * Function : dma_transfer
 * Address  : 08019ad0
 * Program  : drastic
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention */

u32 dma_transfer(dma_struct *dma,dma_channel_struct *dma_channel)

{
  u8 *puVar1;
  byte bVar2;
  u16 uVar3;
  undefined2 uVar4;
  uint uVar5;
  u32 dma_value;
  u32 dma_value_8;
  u32 dma_value_17;
  u32 dma_value_20;
  u32 dma_value_24;
  u32 dma_value_28;
  u32 dma_value_14;
  u32 *puVar6;
  u32 *puVar7;
  u32 dma_value_5;
  u32 uVar8;
  u32 dma_value_30;
  u32 dma_value_19;
  u32 dma_value_26;
  undefined4 uVar9;
  u32 dma_value_6;
  u32 dma_value_2;
  u32 dma_value_23;
  u32 dma_value_15;
  u32 dma_value_10;
  u32 dma_value_33;
  u32 dma_value_34;
  uint uVar10;
  u32 source_address;
  uint uVar11;
  u32 address_offset;
  u32 address_offset_2;
  u32 address_offset_5;
  u32 address_offset_7;
  u8 *puVar12;
  u8 *io_region;
  u32 address_offset_17;
  u32 address_offset_19;
  u32 address_offset_22;
  u32 address_offset_15;
  u8 *puVar13;
  u8 uVar14;
  uint uVar15;
  int iVar16;
  u32 region_mask;
  u32 region_mask_1;
  u32 region_mask_2;
  u32 region_mask_3;
  u32 region_mask_5;
  u32 region_mask_6;
  u32 region_mask_7;
  u32 region_mask_8;
  u32 address_offset_9;
  memory_region_type_enum region_mode_9;
  u32 region_mask_17;
  u32 region_mask_18;
  u32 region_mask_19;
  u32 region_mask_20;
  u32 address_offset_21;
  u32 region_mask_22;
  u32 region_mask_23;
  u32 region_mask_15;
  u32 region_mask_16;
  memory_region_type_enum region_mode_19;
  u32 dma_value_32;
  u32 dma_value_16;
  u32 dma_value_22;
  u32 dma_value_31;
  cpu_struct *pcVar17;
  cpu_struct *cpu;
  int iVar18;
  u32 length_remaining;
  u32 transfer_32bit;
  int iVar19;
  memory_region_type_enum region_mode;
  memory_region_type_enum region_mode_1;
  u32 address_offset_4;
  memory_region_type_enum region_mode_2;
  memory_region_type_enum region_mode_3;
  memory_region_type_enum region_mode_5;
  memory_region_type_enum region_mode_4;
  u32 region_mask_9;
  memory_region_type_enum region_mode_6;
  memory_region_type_enum region_mode_7;
  u32 region_mask_11;
  memory_region_type_enum region_mode_8;
  u32 uVar20;
  u32 region_mask_12;
  memory_region_type_enum region_mode_10;
  u32 address_offset_14;
  memory_region_type_enum region_mode_12;
  memory_region_type_enum region_mode_14;
  memory_region_type_enum region_mode_16;
  memory_region_type_enum region_mode_15;
  u32 region_mask_21;
  memory_region_type_enum region_mode_17;
  memory_region_type_enum region_mode_18;
  memory_region_type_enum region_mode_13;
  memory_region_type_enum region_mode_11;
  u32 dma_value_4;
  uint uVar21;
  u32 dma_value_25;
  u32 dma_value_9;
  u32 dma_value_1;
  uint uVar22;
  _func_u32_ptr_memory_struct_ptr_memory_region_struct_ptr_u32 *p_Var23;
  uint uVar24;
  uint uVar25;
  u8 *source_pointer;
  s32 offset_cycles;
  memory_region_struct *source_memory_region_1;
  u32 region_mask_4;
  memory_region_struct *source_memory_region_3;
  u32 region_mask_10;
  memory_region_struct *dest_memory_region_8;
  u32 region_mask_14;
  memory_region_struct *source_memory_region_13;
  u8 *source_pointer_16;
  memory_region_struct *source_memory_region_12;
  memory_region_struct *dest_memory_region_17;
  uint uVar26;
  u32 region_mask_13;
  u32 *dma_value_29;
  memory_region_struct *pmVar27;
  memory_region_struct *source_memory_region;
  memory_region_struct *dest_memory_region_1;
  u8 *source_pointer_2;
  memory_region_struct *dest_memory_region_3;
  memory_region_struct *source_memory_region_4;
  u8 *source_pointer_5;
  memory_region_struct *dest_memory_region_6;
  memory_region_struct *dest_memory_region_7;
  u8 *dest_pointer_8;
  memory_region_struct *dest_memory_region_9;
  u8 *source_pointer_11;
  memory_region_struct *dest_memory_region_13;
  memory_region_struct *source_memory_region_14;
  u8 *source_pointer_15;
  memory_region_struct *source_memory_region_16;
  memory_region_struct *dest_memory_region_12;
  u8 *source_pointer_17;
  memory_region_struct *dest_memory_region_10;
  u32 *dma_value_27;
  u32 *dma_value_21;
  u32 *dma_value_11;
  u32 *dma_value_35;
  memory_region_struct *pmVar28;
  memory_region_struct *dest_memory_region;
  u8 *source_pointer_1;
  memory_region_struct *source_memory_region_2;
  u8 *source_pointer_3;
  memory_region_struct *dest_memory_region_4;
  memory_region_struct *source_memory_region_5;
  u8 *source_pointer_6;
  u8 *source_pointer_7;
  memory_region_struct *source_memory_region_8;
  u8 *source_pointer_9;
  memory_region_struct *source_memory_region_11;
  u8 *source_pointer_13;
  memory_region_struct *dest_memory_region_14;
  memory_region_struct *source_memory_region_15;
  memory_region_struct *dest_memory_region_16;
  u8 *source_pointer_12;
  u8 *dest_pointer_17;
  u8 *source_pointer_10;
  u32 *dma_value_3;
  u32 *dma_value_12;
  u32 *dma_value_7;
  u32 *dma_value_18;
  memory_region_struct *dest_memory_region_2;
  memory_region_struct *dest_memory_region_5;
  memory_region_struct *source_memory_region_6;
  memory_region_struct *source_memory_region_7;
  u8 *source_pointer_8;
  memory_region_struct *source_memory_region_9;
  memory_region_struct *dest_memory_region_11;
  memory_region_struct *dest_memory_region_15;
  memory_region_struct *source_memory_region_17;
  memory_region_struct *source_memory_region_10;
  u32 address_offset_8;
  _func_void_memory_struct_ptr_u32_u16 *p_Var29;
  u8 *dest_pointer_6;
  u8 *dest_pointer_5;
  u8 *dest_pointer_7;
  u8 *dest_pointer_2;
  u8 *dest_pointer_4;
  undefined8 *puVar30;
  u16 *puVar31;
  u8 *dest_pointer_9;
  u8 *dest_pointer_11;
  u32 address_offset_20;
  u8 *dest_pointer_14;
  u8 *dest_pointer_15;
  memory_region_struct *pmVar32;
  _func_void_memory_struct_ptr_u32_u32 *p_Var33;
  u8 *dest_pointer_10;
  u8 *puVar34;
  u8 *puVar35;
  u8 *dest_pointer;
  u8 *dest_pointer_1;
  u8 *dest_pointer_3;
  u8 *source_pointer_4;
  u8 *dest_pointer_13;
  u8 *source_pointer_14;
  u8 *dest_pointer_16;
  u8 *dest_pointer_12;
  memory_struct *pmVar36;
  memory_struct *memory;
  system_struct *psVar37;
  system_struct *system;
  u32 address_offset_1;
  u32 address_offset_3;
  u32 address_offset_6;
  u32 address_offset_10;
  u32 address_offset_11;
  u32 address_offset_12;
  u32 address_offset_18;
  u32 address_offset_23;
  u32 address_offset_16;
  u32 address_offset_13;
  int iVar38;
  u32 dma_value_13;
  u32 dest_address;
  uint uVar39;
  u32 transfer_cycles;
  int iVar40;
  bool bVar41;
  bool bVar42;
  undefined8 in_d16;
  undefined8 in_d17;
  undefined8 uVar43;
  undefined8 uVar44;
  uint local_7c;
  u32 local_78;
  uint local_74;
  u32 *local_70;
  uint local_5c;
  u32 local_44;
  uint local_40;
  
  pcVar17 = dma_channel->cpu;
  uVar24 = dma_channel->control;
  pmVar36 = dma->memory;
  local_74 = dma_channel->dest_address;
  psVar37 = pmVar36->system;
  uVar5 = pcVar17->cycles_remaining;
  local_7c = uVar24 & 0x1fffff;
  uVar15 = *(uint *)&psVar37->global_cycles;
  iVar18 = *(int *)((int)&psVar37->global_cycles + 4);
  system = (system_struct *)psVar37->cycles_to_next_event;
  uVar10 = dma_channel->source_address;
  uVar26 = (int)&system->frame_number + uVar15;
  uVar25 = uVar26 - uVar5;
  if (local_74 < 0x10000000) {
    uVar39 = local_74 >> 0x18;
  }
  else {
    local_74 = 0;
    uVar39 = local_74;
  }
  if (uVar10 < 0x10000000) {
    uVar11 = uVar10 >> 0x18;
  }
  else {
    uVar11 = 0;
    uVar10 = uVar11;
  }
  if (local_7c == 0) {
    local_7c = 0x200000;
    bVar2 = pcVar17->type;
  }
  else {
    bVar2 = pcVar17->type;
  }
  transfer_32bit = uVar24 << 5;
  iVar19 = (uint)bVar2 * 2 - ((int)transfer_32bit >> 0x1f);
  if (uVar39 == uVar11) {
    iVar16 = *(int *)((int)dma_calculate_cycles::cycles_non_sequential +
                     (uVar39 + iVar19 * 0x10) * 4);
  }
  else {
    iVar19 = iVar19 * 0x10;
    iVar16 = *(int *)((int)dma_calculate_cycles::cycles_sequential + (iVar19 + uVar39) * 4);
    if (uVar39 != 6) {
      iVar16 = iVar16 + *(int *)((int)dma_calculate_cycles::cycles_sequential +
                                (iVar19 + uVar11) * 4);
    }
  }
  uVar39 = iVar16 * psVar37->dma_cycle_multiplier * local_7c;
  *(uint *)&dma_channel->completion_timestamp = uVar25 + uVar39;
  *(uint *)((int)&dma_channel->completion_timestamp + 4) =
       ((iVar18 + (uint)CARRY4(uVar15,(uint)system)) -
       (((int)uVar5 >> 0x1f) + (uint)(uVar26 < uVar5))) + (uint)CARRY4(uVar25,uVar39);
  if (psVar37->dma_consumes_cpu_cycles != '\0') {
    pcVar17->cycles_remaining = uVar5 - uVar39;
  }
  if ((uVar24 & 0x4000000) == 0) {
    local_78 = uVar10 & 0xfffffffe;
    uVar15 = uVar24 >> 0x15 & 0xf;
    uVar5 = local_74 & 0xfffffffe;
    switch(uVar15) {
    case 0:
    case 3:
      local_70 = (u32 *)0x0;
      do {
        uVar15 = uVar5 >> 0x17;
        pmVar32 = dma->memory_regions;
        uVar11 = pmVar32[local_78 >> 0x17].mask;
        pmVar28 = pmVar32 + uVar15;
        pmVar27 = pmVar32 + (local_78 >> 0x17);
        uVar10 = local_7c * 2;
        uVar26 = local_78 & uVar11;
        if (uVar11 < uVar26 + uVar10) {
          uVar10 = (uVar11 + 1) - uVar26;
          local_74 = uVar10 >> 1;
          uVar10 = uVar10 & 0xfffffffe;
        }
        else {
          local_74 = local_7c;
        }
        uVar11 = pmVar32[uVar15].mask;
        uVar21 = uVar5 & uVar11;
        if (uVar11 < uVar21 + uVar10) {
          local_74 = (uVar11 + 1) - uVar21 >> 1;
        }
        uVar14 = pmVar27->load_access;
        if (uVar14 == '\x01') {
          puVar12 = (*(pmVar27->load_handler).get_pointer)(pmVar36,local_78);
          uVar14 = pmVar28->store_access;
          if (uVar14 == '\x01') {
LAB_0801c00c:
            puVar35 = (*(pmVar28->store_handler).get_pointer)(pmVar36,uVar5);
            puVar7 = (*pmVar28->get_code_bitmap_coarse)(pmVar36,pmVar28,uVar5);
            local_7c = local_7c - local_74;
            puVar6 = (*pmVar28->get_code_bitmap_fine)(pmVar36,pmVar28,uVar5);
          }
          else {
            if (uVar14 == '\0') {
              p_Var23 = pmVar28->get_code_bitmap_coarse;
              puVar35 = (pmVar28->store_handler).direct_memory + (uVar5 & pmVar32[uVar15].mask);
              goto LAB_0801bb48;
            }
LAB_0801b8b8:
            if (uVar14 == '\x02') goto LAB_08019e4c;
            local_7c = local_7c - local_74;
            puVar7 = (*pmVar28->get_code_bitmap_coarse)(pmVar36,pmVar28,uVar5);
            puVar6 = (*pmVar28->get_code_bitmap_fine)(pmVar36,pmVar28,uVar5);
            puVar35 = pmVar36->null_buffer_store;
          }
LAB_0801b904:
          uVar20 = local_74 * 2;
          if (puVar7 != (u32 *)0x0) {
            uVar8 = memory_check_code_region(puVar7,puVar6,uVar5,uVar20);
            local_70 = (u32 *)((uint)local_70 | uVar8);
          }
          uVar5 = uVar5 + uVar20;
          local_78 = local_78 + uVar20;
          if (local_74 < 0xf || puVar35 < puVar12 + 0x10 && puVar12 < puVar35 + 0x10) {
            do {
              local_74 = local_74 - 1;
              *(u16 *)puVar35 = *(u16 *)puVar12;
              puVar12 = puVar12 + 2;
              puVar35 = puVar35 + 2;
            } while (local_74 != 0);
          }
          else {
            uVar10 = -((uint)((int)puVar12 << 0x1d) >> 0x1e) & 7;
            if (local_74 <= uVar10) {
              uVar10 = local_74;
            }
            uVar15 = local_74;
            puVar34 = puVar12;
            puVar13 = puVar35;
            if (uVar10 != 0) {
              *(u16 *)puVar35 = *(u16 *)puVar12;
              uVar15 = local_74 - 1;
              puVar34 = puVar12 + 2;
              puVar13 = puVar35 + 2;
              if (uVar10 != 1) {
                *(u16 *)(puVar35 + 2) = *(u16 *)(puVar12 + 2);
                uVar15 = local_74 - 2;
                puVar34 = puVar12 + 4;
                puVar13 = puVar35 + 4;
                if (uVar10 != 2) {
                  *(u16 *)(puVar35 + 4) = *(u16 *)(puVar12 + 4);
                  uVar15 = local_74 - 3;
                  puVar34 = puVar12 + 6;
                  puVar13 = puVar35 + 6;
                  if (uVar10 != 3) {
                    *(u16 *)(puVar35 + 6) = *(u16 *)(puVar12 + 6);
                    uVar15 = local_74 - 4;
                    puVar34 = puVar12 + 8;
                    puVar13 = puVar35 + 8;
                    if (uVar10 != 4) {
                      *(u16 *)(puVar35 + 8) = *(u16 *)(puVar12 + 8);
                      uVar15 = local_74 - 5;
                      puVar34 = puVar12 + 10;
                      puVar13 = puVar35 + 10;
                      if (uVar10 != 5) {
                        *(u16 *)(puVar35 + 10) = *(u16 *)(puVar12 + 10);
                        uVar15 = local_74 - 6;
                        puVar34 = puVar12 + 0xc;
                        puVar13 = puVar35 + 0xc;
                        if (uVar10 == 7) {
                          *(u16 *)(puVar35 + 0xc) = *(u16 *)(puVar12 + 0xc);
                          uVar15 = local_74 - 7;
                          puVar34 = puVar12 + 0xe;
                          puVar13 = puVar35 + 0xe;
                        }
                      }
                    }
                  }
                }
              }
            }
            uVar26 = 0;
            puVar12 = puVar12 + uVar10 * 2;
            puVar35 = puVar35 + uVar10 * 2;
            uVar11 = ((local_74 - uVar10) - 8 >> 3) + 1;
            do {
              uVar43 = *(undefined8 *)puVar12;
              uVar44 = *(undefined8 *)(puVar12 + 8);
              uVar26 = uVar26 + 1;
              puVar12 = puVar12 + 0x10;
              *(undefined8 *)puVar35 = uVar43;
              *(undefined8 *)(puVar35 + 8) = uVar44;
              puVar35 = puVar35 + 0x10;
            } while (uVar26 < uVar11);
            iVar18 = uVar11 * 0x10;
            iVar19 = uVar15 + uVar11 * -8;
            if (((((uVar11 * 8 - (local_74 - uVar10) != 0) &&
                  (*(undefined2 *)(puVar13 + iVar18) = *(undefined2 *)(puVar34 + iVar18),
                  iVar19 != 1)) &&
                 ((*(undefined2 *)(puVar13 + iVar18 + 2) = *(undefined2 *)(puVar34 + iVar18 + 2),
                  iVar19 != 2 &&
                  ((*(undefined2 *)(puVar13 + iVar18 + 4) = *(undefined2 *)(puVar34 + iVar18 + 4),
                   iVar19 != 3 &&
                   (*(undefined2 *)(puVar13 + iVar18 + 6) = *(undefined2 *)(puVar34 + iVar18 + 6),
                   iVar19 != 4)))))) &&
                (*(undefined2 *)(puVar13 + iVar18 + 8) = *(undefined2 *)(puVar34 + iVar18 + 8),
                iVar19 != 5)) &&
               (*(undefined2 *)(puVar13 + iVar18 + 10) = *(undefined2 *)(puVar34 + iVar18 + 10),
               iVar19 != 6)) {
              *(undefined2 *)(puVar13 + iVar18 + 0xc) = *(undefined2 *)(puVar34 + iVar18 + 0xc);
            }
          }
        }
        else {
          if (uVar14 == '\0') {
            uVar14 = pmVar28->store_access;
            puVar12 = (pmVar27->load_handler).direct_memory + uVar26;
joined_r0x0801bfc4:
            if (uVar14 == '\x01') goto LAB_0801c00c;
            if (uVar14 != '\0') goto LAB_0801b8b8;
            p_Var23 = pmVar28->get_code_bitmap_coarse;
            puVar35 = (pmVar28->store_handler).direct_memory + uVar21;
LAB_0801bb48:
            local_7c = local_7c - local_74;
            puVar7 = (*p_Var23)(pmVar36,pmVar28,uVar5);
            puVar6 = (*pmVar28->get_code_bitmap_fine)(pmVar36,pmVar28,uVar5);
            goto LAB_0801b904;
          }
          if (uVar14 != '\x02') {
            uVar14 = pmVar28->store_access;
            puVar12 = pmVar36->null_buffer_load;
            goto joined_r0x0801bfc4;
          }
          uVar14 = pmVar28->store_access;
          puVar12 = (u8 *)(pmVar27->load_handler).extended_function.load16;
          if (uVar14 == '\x01') {
            puVar35 = (*(pmVar28->store_handler).get_pointer)(pmVar36,uVar5);
            puVar7 = (*pmVar28->get_code_bitmap_coarse)(pmVar36,pmVar28,uVar5);
            local_7c = local_7c - local_74;
            puVar6 = (*pmVar28->get_code_bitmap_fine)(pmVar36,pmVar28,uVar5);
LAB_0801c56c:
            if (puVar7 != (u32 *)0x0) {
              uVar20 = memory_check_code_region(puVar7,puVar6,uVar5,local_74 * 2);
              local_70 = (u32 *)((uint)local_70 | uVar20);
            }
            uVar5 = uVar5 + local_74 * 2;
            puVar34 = puVar35;
            uVar10 = local_74;
            do {
              uVar4 = (*(code *)puVar12)(pmVar36,(uint)(puVar34 + (local_78 - (int)puVar35)) &
                                                 pmVar27->mask);
              uVar10 = uVar10 - 1;
              *(undefined2 *)puVar34 = uVar4;
              puVar34 = puVar34 + 2;
            } while (uVar10 != 0);
            local_78 = local_78 + local_74 * 2;
          }
          else {
            if (uVar14 == '\0') {
              local_7c = local_7c - local_74;
              puVar35 = (pmVar28->store_handler).direct_memory + uVar21;
              puVar7 = (*pmVar28->get_code_bitmap_coarse)(pmVar36,pmVar28,uVar5);
              puVar6 = (*pmVar28->get_code_bitmap_fine)(pmVar36,pmVar28,uVar5);
              goto LAB_0801c56c;
            }
            if (uVar14 != '\x02') {
              local_7c = local_7c - local_74;
              puVar7 = (*pmVar28->get_code_bitmap_coarse)(pmVar36,pmVar28,uVar5);
              puVar6 = (*pmVar28->get_code_bitmap_fine)(pmVar36,pmVar28,uVar5);
              puVar35 = pmVar36->null_buffer_store;
              goto LAB_0801c56c;
            }
            uVar14 = '\x03';
LAB_08019e4c:
            p_Var29 = (pmVar28->store_handler).extended_function.store16;
            local_7c = local_7c - local_74;
            puVar6 = (*pmVar28->get_code_bitmap_coarse)(pmVar36,pmVar28,uVar5);
            puVar7 = (*pmVar28->get_code_bitmap_fine)(pmVar36,pmVar28,uVar5);
            if (uVar14 == '\x03') {
              if (puVar6 != (u32 *)0x0) {
                uVar20 = memory_check_code_region(puVar6,puVar7,uVar5,local_74 << 1);
                local_70 = (u32 *)((uint)local_70 | uVar20);
              }
              uVar10 = local_78;
              uVar15 = local_74;
              do {
                uVar26 = pmVar27->mask & uVar10;
                uVar11 = (uVar5 - local_78) + uVar10;
                uVar10 = uVar10 + 2;
                uVar3 = (*(code *)puVar12)(pmVar36,uVar26);
                (*p_Var29)(pmVar36,pmVar28->mask & uVar11,uVar3);
                uVar15 = uVar15 - 1;
              } while (uVar15 != 0);
              iVar18 = (local_74 + 0x7fffffff) * 2;
              local_78 = local_78 + 2 + iVar18;
              uVar5 = uVar5 + 2 + iVar18;
            }
            else {
              if (puVar6 != (u32 *)0x0) {
                uVar20 = memory_check_code_region(puVar6,puVar7,uVar5,local_74 * 2);
                local_70 = (u32 *)((uint)local_70 | uVar20);
              }
              local_78 = local_78 + local_74 * 2;
              puVar35 = puVar12;
              uVar10 = local_74;
              do {
                (*p_Var29)(pmVar36,(uint)(puVar35 + (uVar5 - (int)puVar12)) & pmVar28->mask,
                           *(u16 *)puVar35);
                uVar10 = uVar10 - 1;
                puVar35 = puVar35 + 2;
              } while (uVar10 != 0);
              uVar5 = uVar5 + local_74 * 2;
            }
          }
        }
        local_74 = uVar5;
      } while (local_7c != 0);
      break;
    case 1:
      local_70 = (u32 *)0x0;
      do {
        uVar15 = uVar5 >> 0x17;
        pmVar32 = dma->memory_regions;
        uVar11 = pmVar32[local_78 >> 0x17].mask;
        pmVar28 = pmVar32 + uVar15;
        pmVar27 = pmVar32 + (local_78 >> 0x17);
        uVar10 = local_7c * 2;
        uVar26 = local_78 & uVar11;
        if (uVar11 < uVar26 + uVar10) {
          uVar10 = (uVar11 + 1) - uVar26;
          local_74 = uVar10 >> 1;
          uVar10 = uVar10 & 0xfffffffe;
        }
        else {
          local_74 = local_7c;
        }
        uVar11 = uVar5 & pmVar32[uVar15].mask;
        if (pmVar32[uVar15].mask < uVar11 - uVar10) {
          local_74 = (uVar11 >> 1) + 1;
        }
        uVar14 = pmVar27->load_access;
        if (uVar14 == '\x01') {
          puVar12 = (*(pmVar27->load_handler).get_pointer)(pmVar36,local_78);
          uVar14 = pmVar28->store_access;
          if (uVar14 == '\x01') {
LAB_0801c200:
            puVar35 = (*(pmVar28->store_handler).get_pointer)(pmVar36,uVar5);
            puVar7 = (*pmVar28->get_code_bitmap_coarse)(pmVar36,pmVar28,uVar5);
            local_7c = local_7c - local_74;
            puVar6 = (*pmVar28->get_code_bitmap_fine)(pmVar36,pmVar28,uVar5);
          }
          else {
            if (uVar14 == '\0') {
              p_Var23 = pmVar28->get_code_bitmap_coarse;
              puVar35 = (pmVar28->store_handler).direct_memory + (uVar5 & pmVar32[uVar15].mask);
              goto LAB_0801b874;
            }
LAB_0801b5c4:
            if (uVar14 == '\x02') goto LAB_0801a0ec;
            local_7c = local_7c - local_74;
            puVar7 = (*pmVar28->get_code_bitmap_coarse)(pmVar36,pmVar28,uVar5);
            puVar6 = (*pmVar28->get_code_bitmap_fine)(pmVar36,pmVar28,uVar5);
            puVar35 = pmVar36->null_buffer_store;
          }
LAB_0801b610:
          uVar20 = local_74 * 2;
          if (puVar7 != (u32 *)0x0) {
            uVar8 = memory_check_code_region(puVar7,puVar6,uVar5,uVar20);
            local_70 = (u32 *)((uint)local_70 | uVar8);
          }
          uVar5 = uVar5 + local_74 * -2;
          local_78 = local_78 + uVar20;
          if (local_74 < 0xf ||
              puVar12 < puVar35 + 2 && puVar35 + local_74 * -2 + 2 < puVar12 + uVar20) {
            do {
              local_74 = local_74 - 1;
              *(u16 *)puVar35 = *(u16 *)puVar12;
              puVar35 = puVar35 + -2;
              puVar12 = puVar12 + 2;
            } while (local_74 != 0);
          }
          else {
            uVar10 = -((uint)((int)puVar12 << 0x1d) >> 0x1e) & 7;
            if (local_74 <= uVar10) {
              uVar10 = local_74;
            }
            puVar34 = puVar35;
            if (uVar10 != 0) {
              *(u16 *)puVar35 = *(u16 *)puVar12;
              puVar34 = puVar35 + -2;
              if (uVar10 != 1) {
                *(u16 *)(puVar35 + -2) = *(u16 *)(puVar12 + 2);
                puVar34 = puVar35 + -4;
                if (uVar10 != 2) {
                  *(u16 *)(puVar35 + -4) = *(u16 *)(puVar12 + 4);
                  puVar34 = puVar35 + -6;
                  if (uVar10 != 3) {
                    *(u16 *)(puVar35 + -6) = *(u16 *)(puVar12 + 6);
                    puVar34 = puVar35 + -8;
                    if (uVar10 != 4) {
                      *(u16 *)(puVar35 + -8) = *(u16 *)(puVar12 + 8);
                      puVar34 = puVar35 + -10;
                      if (uVar10 != 5) {
                        *(u16 *)(puVar35 + -10) = *(u16 *)(puVar12 + 10);
                        puVar34 = puVar35 + -0xc;
                        if (uVar10 == 7) {
                          *(u16 *)(puVar35 + -0xc) = *(u16 *)(puVar12 + 0xc);
                          puVar34 = puVar35 + -0xe;
                        }
                      }
                    }
                  }
                }
              }
            }
            uVar26 = 0;
            uVar11 = ((local_74 - uVar10) - 8 >> 3) + 1;
            puVar35 = puVar35 + uVar10 * -2 + -0xe;
            do {
              uVar26 = uVar26 + 1;
              iVar18 = VectorTableLookup(uVar15 * 3,puVar34,2);
              iVar19 = VectorTableLookup(pmVar32,puVar34,2);
              *(undefined8 *)puVar35 = in_d16;
              *(undefined8 *)(puVar35 + 8) = in_d17;
              puVar35 = puVar35 + -0x10;
            } while (uVar26 < uVar11);
            iVar18 = iVar18 + uVar11 * -8;
            iVar16 = uVar11 * -0x10;
            iVar38 = iVar19 + uVar11 * 0x10;
            if (((uVar11 * 8 - (local_74 - uVar10) != 0) &&
                (*(undefined2 *)(puVar34 + iVar16) = *(undefined2 *)(iVar19 + uVar11 * 0x10),
                iVar18 != 1)) &&
               ((*(undefined2 *)(puVar34 + iVar16 + -2) = *(undefined2 *)(iVar38 + 2), iVar18 != 2
                && ((((*(undefined2 *)(puVar34 + iVar16 + -4) = *(undefined2 *)(iVar38 + 4),
                      iVar18 != 3 &&
                      (*(undefined2 *)(puVar34 + iVar16 + -6) = *(undefined2 *)(iVar38 + 6),
                      iVar18 != 4)) &&
                     (*(undefined2 *)(puVar34 + iVar16 + -8) = *(undefined2 *)(iVar38 + 8),
                     iVar18 != 5)) &&
                    (*(undefined2 *)(puVar34 + iVar16 + -10) = *(undefined2 *)(iVar38 + 10),
                    iVar18 != 6)))))) {
              *(undefined2 *)(puVar34 + iVar16 + -0xc) = *(undefined2 *)(iVar38 + 0xc);
            }
          }
        }
        else {
          if (uVar14 == '\0') {
            uVar14 = pmVar28->store_access;
            puVar12 = (pmVar27->load_handler).direct_memory + uVar26;
joined_r0x0801c1b8:
            if (uVar14 == '\x01') goto LAB_0801c200;
            if (uVar14 != '\0') goto LAB_0801b5c4;
            p_Var23 = pmVar28->get_code_bitmap_coarse;
            puVar35 = (pmVar28->store_handler).direct_memory + uVar11;
LAB_0801b874:
            local_7c = local_7c - local_74;
            puVar7 = (*p_Var23)(pmVar36,pmVar28,uVar5);
            puVar6 = (*pmVar28->get_code_bitmap_fine)(pmVar36,pmVar28,uVar5);
            goto LAB_0801b610;
          }
          if (uVar14 != '\x02') {
            uVar14 = pmVar28->store_access;
            puVar12 = pmVar36->null_buffer_load;
            goto joined_r0x0801c1b8;
          }
          uVar14 = pmVar28->store_access;
          puVar12 = (u8 *)(pmVar27->load_handler).extended_function.load16;
          if (uVar14 == '\x01') {
            puVar35 = (*(pmVar28->store_handler).get_pointer)(pmVar36,uVar5);
            puVar7 = (*pmVar28->get_code_bitmap_coarse)(pmVar36,pmVar28,uVar5);
            local_7c = local_7c - local_74;
            puVar6 = (*pmVar28->get_code_bitmap_fine)(pmVar36,pmVar28,uVar5);
LAB_0801c354:
            if (puVar7 != (u32 *)0x0) {
              uVar20 = memory_check_code_region(puVar7,puVar6,uVar5,local_74 * 2);
              local_70 = (u32 *)((uint)local_70 | uVar20);
            }
            uVar5 = uVar5 + local_74 * -2;
            uVar10 = local_78;
            uVar15 = local_74;
            do {
              uVar26 = pmVar27->mask & uVar10;
              uVar10 = uVar10 + 2;
              uVar4 = (*(code *)puVar12)(pmVar36,uVar26);
              uVar15 = uVar15 - 1;
              *(undefined2 *)puVar35 = uVar4;
              puVar35 = puVar35 + -2;
            } while (uVar15 != 0);
            local_78 = local_78 + local_74 * 2;
          }
          else {
            if (uVar14 == '\0') {
              local_7c = local_7c - local_74;
              puVar35 = (pmVar28->store_handler).direct_memory + uVar11;
              puVar7 = (*pmVar28->get_code_bitmap_coarse)(pmVar36,pmVar28,uVar5);
              puVar6 = (*pmVar28->get_code_bitmap_fine)(pmVar36,pmVar28,uVar5);
              goto LAB_0801c354;
            }
            if (uVar14 != '\x02') {
              local_7c = local_7c - local_74;
              puVar7 = (*pmVar28->get_code_bitmap_coarse)(pmVar36,pmVar28,uVar5);
              puVar6 = (*pmVar28->get_code_bitmap_fine)(pmVar36,pmVar28,uVar5);
              puVar35 = pmVar36->null_buffer_store;
              goto LAB_0801c354;
            }
            uVar14 = '\x03';
LAB_0801a0ec:
            p_Var29 = (pmVar28->store_handler).extended_function.store16;
            local_7c = local_7c - local_74;
            puVar6 = (*pmVar28->get_code_bitmap_coarse)(pmVar36,pmVar28,uVar5);
            puVar7 = (*pmVar28->get_code_bitmap_fine)(pmVar36,pmVar28,uVar5);
            if (uVar14 == '\x03') {
              uVar10 = local_74;
              uVar15 = local_78;
              uVar26 = uVar5;
              if (puVar6 != (u32 *)0x0) {
                uVar20 = memory_check_code_region(puVar6,puVar7,uVar5,local_74 << 1);
                local_70 = (u32 *)((uint)local_70 | uVar20);
              }
              do {
                uVar3 = (*(code *)puVar12)(pmVar36,pmVar27->mask & uVar15);
                (*p_Var29)(pmVar36,pmVar28->mask & uVar26,uVar3);
                uVar10 = uVar10 - 1;
                uVar15 = uVar15 + 2;
                uVar26 = uVar26 - 2;
              } while (uVar10 != 0);
              uVar20 = local_74 * 2;
            }
            else {
              uVar20 = local_74 << 1;
              uVar10 = uVar5;
              uVar15 = local_74;
              if (puVar6 != (u32 *)0x0) {
                uVar8 = memory_check_code_region(puVar6,puVar7,uVar5,uVar20);
                local_70 = (u32 *)((uint)local_70 | uVar8);
              }
              do {
                (*p_Var29)(pmVar36,pmVar28->mask & uVar10,*(u16 *)puVar12);
                uVar15 = uVar15 - 1;
                uVar10 = uVar10 - 2;
                puVar12 = puVar12 + 2;
              } while (uVar15 != 0);
            }
            local_78 = local_78 + uVar20;
            uVar5 = uVar5 + local_74 * -2;
          }
        }
        local_74 = uVar5;
      } while (local_7c != 0);
      break;
    case 2:
      uVar10 = local_74 >> 0x17;
      local_70 = (u32 *)0x0;
      do {
        uVar26 = local_7c;
        pmVar32 = dma->memory_regions;
        uVar21 = pmVar32[local_78 >> 0x17].mask;
        pmVar27 = pmVar32 + (local_78 >> 0x17);
        pmVar28 = pmVar32 + uVar10;
        uVar11 = local_78 & uVar21;
        if (uVar21 < uVar11 + local_7c * 2) {
          uVar26 = (uVar21 + 1) - uVar11 >> 1;
          local_7c = local_7c - uVar26;
          uVar14 = pmVar27->load_access;
          if (uVar14 != '\x01') goto LAB_0801a258;
LAB_0801ada0:
          puVar12 = (*(pmVar27->load_handler).get_pointer)(pmVar36,local_78);
          uVar14 = pmVar28->store_access;
joined_r0x0801c2e8:
          if (uVar14 == '\x01') {
            puVar35 = (*(pmVar28->store_handler).get_pointer)(pmVar36,uVar5);
            p_Var23 = pmVar28->get_code_bitmap_coarse;
          }
          else if (uVar14 == '\0') {
            p_Var23 = pmVar28->get_code_bitmap_coarse;
            puVar35 = (pmVar28->store_handler).direct_memory + (uVar5 & pmVar32[uVar10].mask);
          }
          else {
            local_40 = uVar15;
            if (uVar14 == '\x02') goto LAB_0801add4;
            p_Var23 = pmVar28->get_code_bitmap_coarse;
            puVar35 = pmVar36->null_buffer_store;
          }
          puVar6 = (*p_Var23)(pmVar36,pmVar28,uVar5);
          puVar7 = (*pmVar28->get_code_bitmap_fine)(pmVar36,pmVar28,uVar5);
          if (puVar6 != (u32 *)0x0) {
            uVar20 = memory_check_code_region(puVar6,puVar7,uVar5,uVar26 * 2);
            local_70 = (u32 *)((uint)local_70 | uVar20);
          }
          local_78 = local_78 + uVar26 * 2;
          do {
            uVar26 = uVar26 - 1;
            *(u16 *)puVar35 = *(u16 *)puVar12;
            puVar12 = puVar12 + 2;
          } while (uVar26 != 0);
        }
        else {
          local_7c = 0;
          uVar14 = pmVar27->load_access;
          if (uVar14 == '\x01') goto LAB_0801ada0;
LAB_0801a258:
          if (uVar14 == '\0') {
            uVar14 = pmVar28->store_access;
            puVar12 = (pmVar27->load_handler).direct_memory + uVar11;
            goto joined_r0x0801c2e8;
          }
          if (uVar14 != '\x02') {
            uVar14 = pmVar28->store_access;
            puVar12 = pmVar36->null_buffer_load;
            goto joined_r0x0801c2e8;
          }
          uVar14 = pmVar28->store_access;
          puVar12 = (u8 *)(pmVar27->load_handler).extended_function.load16;
          if (uVar14 == '\x01') {
            puVar35 = (*(pmVar28->store_handler).get_pointer)(pmVar36,uVar5);
            p_Var23 = pmVar28->get_code_bitmap_coarse;
LAB_0801c3ec:
            puVar6 = (*p_Var23)(pmVar36,pmVar28,uVar5);
            puVar7 = (*pmVar28->get_code_bitmap_fine)(pmVar36,pmVar28,uVar5);
            uVar11 = local_78;
            uVar21 = uVar26;
            if (puVar6 != (u32 *)0x0) {
              uVar20 = memory_check_code_region(puVar6,puVar7,uVar5,uVar26 << 1);
              local_70 = (u32 *)((uint)local_70 | uVar20);
            }
            do {
              uVar4 = (*(code *)puVar12)(pmVar36,pmVar27->mask & uVar11);
              uVar21 = uVar21 - 1;
              *(undefined2 *)puVar35 = uVar4;
              uVar11 = uVar11 + 2;
            } while (uVar21 != 0);
          }
          else {
            if (uVar14 == '\0') {
              p_Var23 = pmVar28->get_code_bitmap_coarse;
              puVar35 = (pmVar28->store_handler).direct_memory + (uVar5 & pmVar32[uVar10].mask);
              goto LAB_0801c3ec;
            }
            if (uVar14 != '\x02') {
              p_Var23 = pmVar28->get_code_bitmap_coarse;
              puVar35 = pmVar36->null_buffer_store;
              goto LAB_0801c3ec;
            }
            local_40 = 3;
LAB_0801add4:
            p_Var29 = (pmVar28->store_handler).extended_function.store16;
            puVar6 = (*pmVar28->get_code_bitmap_coarse)(pmVar36,pmVar28,uVar5);
            puVar7 = (*pmVar28->get_code_bitmap_fine)(pmVar36,pmVar28,uVar5);
            if (local_40 != 3) {
              if (puVar6 != (u32 *)0x0) {
                uVar20 = memory_check_code_region(puVar6,puVar7,uVar5,uVar26 * 2);
                local_70 = (u32 *)((uint)local_70 | uVar20);
              }
              local_78 = local_78 + uVar26 * 2;
              do {
                (*p_Var29)(pmVar36,pmVar28->mask & uVar5,*(u16 *)puVar12);
                uVar26 = uVar26 - 1;
                puVar12 = puVar12 + 2;
              } while (uVar26 != 0);
              goto LAB_0801ae90;
            }
            uVar11 = uVar26;
            uVar21 = local_78;
            if (puVar6 != (u32 *)0x0) {
              uVar20 = memory_check_code_region(puVar6,puVar7,uVar5,uVar26 << 1);
              local_70 = (u32 *)((uint)local_70 | uVar20);
            }
            do {
              uVar3 = (*(code *)puVar12)(pmVar36,pmVar27->mask & uVar21);
              (*p_Var29)(pmVar36,pmVar28->mask & uVar5,uVar3);
              uVar11 = uVar11 - 1;
              uVar21 = uVar21 + 2;
            } while (uVar11 != 0);
          }
          local_78 = local_78 + uVar26 * 2;
        }
LAB_0801ae90:
        local_74 = uVar5;
      } while (local_7c != 0);
      break;
    case 4:
    case 7:
      local_70 = (u32 *)0x0;
      do {
        uVar10 = uVar5 >> 0x17;
        pmVar32 = dma->memory_regions;
        pmVar28 = pmVar32 + uVar10;
        pmVar27 = pmVar32 + (local_78 >> 0x17);
        uVar15 = local_78 & pmVar32[local_78 >> 0x17].mask;
        if (pmVar32[local_78 >> 0x17].mask < uVar15 + local_7c * -2) {
          local_74 = (uVar15 >> 1) + 1;
        }
        else {
          local_74 = local_7c;
        }
        uVar26 = pmVar32[uVar10].mask;
        uVar11 = uVar5 & uVar26;
        if (uVar26 < uVar11 + local_74 * 2) {
          local_74 = (uVar26 + 1) - uVar11 >> 1;
        }
        uVar14 = pmVar27->load_access;
        if (uVar14 == '\x01') {
          puVar12 = (*(pmVar27->load_handler).get_pointer)(pmVar36,local_78);
          uVar14 = pmVar28->store_access;
          if (uVar14 == '\x01') {
LAB_0801c0b8:
            puVar35 = (*(pmVar28->store_handler).get_pointer)(pmVar36,uVar5);
            puVar7 = (*pmVar28->get_code_bitmap_coarse)(pmVar36,pmVar28,uVar5);
            local_7c = local_7c - local_74;
            puVar6 = (*pmVar28->get_code_bitmap_fine)(pmVar36,pmVar28,uVar5);
          }
          else {
            if (uVar14 == '\0') {
              p_Var23 = pmVar28->get_code_bitmap_coarse;
              puVar35 = (pmVar28->store_handler).direct_memory + (uVar5 & pmVar32[uVar10].mask);
              goto LAB_0801b468;
            }
LAB_0801b224:
            if (uVar14 == '\x02') goto LAB_0801a368;
            local_7c = local_7c - local_74;
            puVar7 = (*pmVar28->get_code_bitmap_coarse)(pmVar36,pmVar28,uVar5);
            puVar6 = (*pmVar28->get_code_bitmap_fine)(pmVar36,pmVar28,uVar5);
            puVar35 = pmVar36->null_buffer_store;
          }
LAB_0801b270:
          uVar20 = local_74 * 2;
          if (puVar7 != (u32 *)0x0) {
            uVar8 = memory_check_code_region(puVar7,puVar6,uVar5,uVar20);
            local_70 = (u32 *)((uint)local_70 | uVar8);
          }
          uVar5 = uVar5 + uVar20;
          local_78 = local_78 + local_74 * -2;
          if (local_74 < 0xf ||
              puVar35 < puVar12 + 2 && puVar12 + local_74 * -2 + 2 < puVar35 + uVar20) {
            do {
              local_74 = local_74 - 1;
              *(u16 *)puVar35 = *(u16 *)puVar12;
              puVar12 = puVar12 + -2;
              puVar35 = puVar35 + 2;
            } while (local_74 != 0);
          }
          else {
            uVar15 = (uint)((int)(puVar12 + -0xe) * 0x20000000) >> 0x1e;
            if (local_74 < uVar15) {
              uVar15 = local_74;
            }
            uVar26 = local_74;
            if (uVar15 != 0) {
              *(u16 *)puVar35 = *(u16 *)puVar12;
              uVar26 = local_74 - 1;
              if (uVar15 != 1) {
                *(u16 *)(puVar35 + 2) = *(u16 *)(puVar12 + -2);
                uVar26 = local_74 - 2;
                if (uVar15 == 3) {
                  *(u16 *)(puVar35 + 4) = *(u16 *)(puVar12 + -4);
                  uVar26 = local_74 - 3;
                }
              }
            }
            uVar21 = 0;
            puVar35 = puVar35 + uVar15 * 2;
            uVar11 = ((local_74 - uVar15) - 8 >> 3) + 1;
            do {
              uVar21 = uVar21 + 1;
              iVar18 = VectorTableLookup(uVar10 * 3,uVar11,2);
              iVar19 = VectorTableLookup(pmVar32,uVar11,2);
              *(undefined8 *)puVar35 = in_d16;
              *(undefined8 *)(puVar35 + 8) = in_d17;
              puVar35 = puVar35 + 0x10;
            } while (uVar21 < uVar11);
            iVar40 = uVar26 + uVar11 * -8;
            iVar16 = iVar19 + uVar11 * 0x10;
            iVar38 = iVar18 + uVar11 * -0x10;
            if ((((uVar11 * 8 - (local_74 - uVar15) != 0) &&
                 (*(undefined2 *)(iVar19 + uVar11 * 0x10) = *(undefined2 *)(iVar18 + uVar11 * -0x10)
                 , iVar40 != 1)) &&
                (*(undefined2 *)(iVar16 + 2) = *(undefined2 *)(iVar38 + -2), iVar40 != 2)) &&
               (((*(undefined2 *)(iVar16 + 4) = *(undefined2 *)(iVar38 + -4), iVar40 != 3 &&
                 (*(undefined2 *)(iVar16 + 6) = *(undefined2 *)(iVar38 + -6), iVar40 != 4)) &&
                ((*(undefined2 *)(iVar16 + 8) = *(undefined2 *)(iVar38 + -8), iVar40 != 5 &&
                 (*(undefined2 *)(iVar16 + 10) = *(undefined2 *)(iVar38 + -10), iVar40 != 6)))))) {
              *(undefined2 *)(iVar16 + 0xc) = *(undefined2 *)(iVar38 + -0xc);
            }
          }
        }
        else {
          if (uVar14 == '\0') {
            uVar14 = pmVar28->store_access;
            puVar12 = (pmVar27->load_handler).direct_memory + uVar15;
joined_r0x0801c070:
            if (uVar14 == '\x01') goto LAB_0801c0b8;
            if (uVar14 != '\0') goto LAB_0801b224;
            p_Var23 = pmVar28->get_code_bitmap_coarse;
            puVar35 = (pmVar28->store_handler).direct_memory + uVar11;
LAB_0801b468:
            local_7c = local_7c - local_74;
            puVar7 = (*p_Var23)(pmVar36,pmVar28,uVar5);
            puVar6 = (*pmVar28->get_code_bitmap_fine)(pmVar36,pmVar28,uVar5);
            goto LAB_0801b270;
          }
          if (uVar14 != '\x02') {
            uVar14 = pmVar28->store_access;
            puVar12 = pmVar36->null_buffer_load;
            goto joined_r0x0801c070;
          }
          uVar14 = pmVar28->store_access;
          puVar12 = (u8 *)(pmVar27->load_handler).extended_function.load16;
          if (uVar14 == '\x01') {
            puVar35 = (*(pmVar28->store_handler).get_pointer)(pmVar36,uVar5);
            puVar7 = (*pmVar28->get_code_bitmap_coarse)(pmVar36,pmVar28,uVar5);
            local_7c = local_7c - local_74;
            puVar6 = (*pmVar28->get_code_bitmap_fine)(pmVar36,pmVar28,uVar5);
LAB_0801c628:
            uVar20 = local_74 << 1;
            uVar10 = local_78;
            uVar15 = local_74;
            if (puVar7 != (u32 *)0x0) {
              uVar8 = memory_check_code_region(puVar7,puVar6,uVar5,uVar20);
              local_70 = (u32 *)((uint)local_70 | uVar8);
            }
            do {
              uVar4 = (*(code *)puVar12)(pmVar36,pmVar27->mask & uVar10);
              uVar15 = uVar15 - 1;
              *(undefined2 *)puVar35 = uVar4;
              uVar10 = uVar10 - 2;
              puVar35 = puVar35 + 2;
            } while (uVar15 != 0);
LAB_0801a438:
            uVar5 = uVar5 + uVar20;
            local_78 = local_78 + local_74 * -2;
          }
          else {
            if (uVar14 == '\0') {
              local_7c = local_7c - local_74;
              puVar35 = (pmVar28->store_handler).direct_memory + uVar11;
              puVar7 = (*pmVar28->get_code_bitmap_coarse)(pmVar36,pmVar28,uVar5);
              puVar6 = (*pmVar28->get_code_bitmap_fine)(pmVar36,pmVar28,uVar5);
              goto LAB_0801c628;
            }
            if (uVar14 != '\x02') {
              local_7c = local_7c - local_74;
              puVar7 = (*pmVar28->get_code_bitmap_coarse)(pmVar36,pmVar28,uVar5);
              puVar6 = (*pmVar28->get_code_bitmap_fine)(pmVar36,pmVar28,uVar5);
              puVar35 = pmVar36->null_buffer_store;
              goto LAB_0801c628;
            }
            uVar14 = '\x03';
LAB_0801a368:
            p_Var29 = (pmVar28->store_handler).extended_function.store16;
            local_7c = local_7c - local_74;
            puVar6 = (*pmVar28->get_code_bitmap_coarse)(pmVar36,pmVar28,uVar5);
            puVar7 = (*pmVar28->get_code_bitmap_fine)(pmVar36,pmVar28,uVar5);
            if (uVar14 == '\x03') {
              uVar10 = local_74;
              uVar15 = local_78;
              uVar26 = uVar5;
              if (puVar6 != (u32 *)0x0) {
                uVar20 = memory_check_code_region(puVar6,puVar7,uVar5,local_74 << 1);
                local_70 = (u32 *)((uint)local_70 | uVar20);
              }
              do {
                uVar3 = (*(code *)puVar12)(pmVar36,pmVar27->mask & uVar15);
                (*p_Var29)(pmVar36,pmVar28->mask & uVar26,uVar3);
                uVar10 = uVar10 - 1;
                uVar15 = uVar15 - 2;
                uVar26 = uVar26 + 2;
              } while (uVar10 != 0);
              uVar20 = local_74 * 2;
              goto LAB_0801a438;
            }
            if (puVar6 != (u32 *)0x0) {
              uVar20 = memory_check_code_region(puVar6,puVar7,uVar5,local_74 * 2);
              local_70 = (u32 *)((uint)local_70 | uVar20);
            }
            local_78 = local_78 + local_74 * -2;
            uVar10 = uVar5;
            uVar15 = local_74;
            do {
              uVar26 = pmVar28->mask & uVar10;
              uVar10 = uVar10 + 2;
              (*p_Var29)(pmVar36,uVar26,*(u16 *)puVar12);
              uVar15 = uVar15 - 1;
              puVar12 = puVar12 + -2;
            } while (uVar15 != 0);
            uVar5 = uVar5 + local_74 * 2;
          }
        }
        local_74 = uVar5;
      } while (local_7c != 0);
      break;
    case 5:
      local_70 = (u32 *)0x0;
      local_74 = uVar5;
      do {
        while( true ) {
          uVar10 = local_74 >> 0x17;
          pmVar32 = dma->memory_regions;
          pmVar27 = pmVar32 + (local_78 >> 0x17);
          pmVar28 = pmVar32 + uVar10;
          uVar15 = local_78 & pmVar32[local_78 >> 0x17].mask;
          uVar5 = local_7c;
          if (pmVar32[local_78 >> 0x17].mask < uVar15 + local_7c * -2) {
            uVar5 = (uVar15 >> 1) + 1;
          }
          uVar26 = local_74 & pmVar32[uVar10].mask;
          uVar14 = pmVar27->load_access;
          if (pmVar32[uVar10].mask < uVar26 + uVar5 * -2) {
            uVar5 = (uVar26 >> 1) + 1;
          }
          if (uVar14 != '\x01') break;
          puVar12 = (*(pmVar27->load_handler).get_pointer)(pmVar36,local_78);
          uVar14 = pmVar28->store_access;
          if (uVar14 == '\x01') {
LAB_0801bf34:
            dest_pointer_4 = (*(pmVar28->store_handler).get_pointer)(pmVar36,local_74);
            puVar7 = (*pmVar28->get_code_bitmap_coarse)(pmVar36,pmVar28,local_74);
            local_7c = local_7c - uVar5;
            puVar6 = (*pmVar28->get_code_bitmap_fine)(pmVar36,pmVar28,local_74);
          }
          else if (uVar14 == '\0') {
            p_Var23 = pmVar28->get_code_bitmap_coarse;
            dest_pointer_4 =
                 (pmVar28->store_handler).direct_memory + (local_74 & pmVar32[uVar10].mask);
LAB_0801bdf4:
            local_7c = local_7c - uVar5;
            puVar7 = (*p_Var23)(pmVar36,pmVar28,local_74);
            puVar6 = (*pmVar28->get_code_bitmap_fine)(pmVar36,pmVar28,local_74);
          }
          else {
            if (uVar14 == '\x02') {
              uVar14 = '\x02';
LAB_0801be34:
              p_Var29 = (pmVar28->store_handler).extended_function.store16;
              local_7c = local_7c - uVar5;
              puVar6 = (*pmVar28->get_code_bitmap_coarse)(pmVar36,pmVar28,local_74);
              puVar7 = (*pmVar28->get_code_bitmap_fine)(pmVar36,pmVar28,local_74);
              if (uVar14 == '\x03') {
                if (puVar6 != (u32 *)0x0) {
                  uVar20 = memory_check_code_region(puVar6,puVar7,local_74,uVar5 * 2);
                  local_70 = (u32 *)((uint)local_70 | uVar20);
                }
                uVar10 = uVar5;
                uVar15 = local_78;
                do {
                  uVar26 = pmVar27->mask & uVar15;
                  uVar11 = (local_74 - local_78) + uVar15;
                  uVar15 = uVar15 - 2;
                  uVar3 = (*(code *)puVar12)(pmVar36,uVar26);
                  (*p_Var29)(pmVar36,pmVar28->mask & uVar11,uVar3);
                  uVar10 = uVar10 - 1;
                } while (uVar10 != 0);
              }
              else {
                if (puVar6 != (u32 *)0x0) {
                  uVar20 = memory_check_code_region(puVar6,puVar7,local_74,uVar5 * 2);
                  local_70 = (u32 *)((uint)local_70 | uVar20);
                }
                uVar10 = uVar5;
                puVar35 = puVar12;
                do {
                  (*p_Var29)(pmVar36,(uint)(puVar35 + (local_74 - (int)puVar12)) & pmVar28->mask,
                             *(u16 *)puVar35);
                  uVar10 = uVar10 - 1;
                  puVar35 = puVar35 + -2;
                } while (uVar10 != 0);
              }
              goto joined_r0x0801cab8;
            }
LAB_0801bb94:
            local_7c = local_7c - uVar5;
            puVar7 = (*pmVar28->get_code_bitmap_coarse)(pmVar36,pmVar28,local_74);
            puVar6 = (*pmVar28->get_code_bitmap_fine)(pmVar36,pmVar28,local_74);
            dest_pointer_4 = pmVar36->null_buffer_store;
          }
          if (puVar7 != (u32 *)0x0) {
            uVar20 = memory_check_code_region(puVar7,puVar6,local_74,uVar5 * 2);
            local_70 = (u32 *)((uint)local_70 | uVar20);
          }
          local_78 = local_78 + uVar5 * -2;
          local_74 = local_74 + uVar5 * -2;
          if (uVar5 < 0xf ||
              puVar12 + -0xe < dest_pointer_4 + 2 && dest_pointer_4 + -0xe < puVar12 + 2) {
            do {
              puVar35 = puVar12 + -2;
              puVar31 = (u16 *)((int)dest_pointer_4 + -2);
              *(u16 *)dest_pointer_4 = *(u16 *)puVar12;
              if (uVar5 == 1) break;
              puVar12 = puVar12 + -4;
              uVar5 = uVar5 - 2;
              dest_pointer_4 = (u8 *)((int)dest_pointer_4 + -4);
              *puVar31 = *(u16 *)puVar35;
            } while (uVar5 != 0);
          }
          else {
            uVar10 = (uint)((int)(puVar12 + -0xe) * 0x20000000) >> 0x1e;
            if (uVar5 < uVar10) {
              uVar10 = uVar5;
            }
            puVar35 = dest_pointer_4;
            uVar15 = uVar5;
            puVar34 = puVar12;
            if (uVar10 != 0) {
              *(u16 *)dest_pointer_4 = *(u16 *)puVar12;
              puVar35 = dest_pointer_4 + -2;
              uVar15 = uVar5 - 1;
              puVar34 = puVar12 + -2;
              if (uVar10 != 1) {
                *(u16 *)(dest_pointer_4 + -2) = *(u16 *)(puVar12 + -2);
                puVar35 = dest_pointer_4 + -4;
                uVar15 = uVar5 - 2;
                puVar34 = puVar12 + -4;
                if (uVar10 == 3) {
                  *(u16 *)(dest_pointer_4 + -4) = *(u16 *)(puVar12 + -4);
                  puVar35 = dest_pointer_4 + -6;
                  uVar15 = uVar5 - 3;
                  puVar34 = puVar12 + -6;
                }
              }
            }
            uVar26 = ((uVar5 - uVar10) - 8 >> 3) + 1;
            puVar30 = (undefined8 *)(dest_pointer_4 + uVar10 * -2 + -0xe);
            puVar12 = puVar12 + uVar10 * -2 + -0x1e;
            uVar11 = 0;
            do {
              puVar13 = puVar12 + 0x10;
              uVar43 = *(undefined8 *)(puVar12 + 0x18);
              uVar11 = uVar11 + 1;
              puVar12 = puVar12 + -0x10;
              *puVar30 = *(undefined8 *)puVar13;
              puVar30[1] = uVar43;
              puVar30 = puVar30 + -2;
            } while (uVar11 < uVar26);
            iVar19 = uVar15 + uVar26 * -8;
            iVar18 = uVar26 * -0x10;
            if ((((uVar26 * 8 - (uVar5 - uVar10) != 0) &&
                 (*(undefined2 *)(puVar35 + iVar18) = *(undefined2 *)(puVar34 + iVar18), iVar19 != 1
                 )) && ((*(undefined2 *)(puVar35 + iVar18 + -2) =
                              *(undefined2 *)(puVar34 + iVar18 + -2), iVar19 != 2 &&
                        ((*(undefined2 *)(puVar35 + iVar18 + -4) =
                               *(undefined2 *)(puVar34 + iVar18 + -4), iVar19 != 3 &&
                         (*(undefined2 *)(puVar35 + iVar18 + -6) =
                               *(undefined2 *)(puVar34 + iVar18 + -6), iVar19 != 4)))))) &&
               ((*(undefined2 *)(puVar35 + iVar18 + -8) = *(undefined2 *)(puVar34 + iVar18 + -8),
                iVar19 != 5 &&
                (*(undefined2 *)(puVar35 + iVar18 + -10) = *(undefined2 *)(puVar34 + iVar18 + -10),
                iVar19 != 6)))) {
              *(undefined2 *)(puVar35 + iVar18 + -0xc) = *(undefined2 *)(puVar34 + iVar18 + -0xc);
            }
          }
          if (local_7c == 0) goto LAB_08019f44;
        }
        if (uVar14 == '\0') {
          uVar14 = pmVar28->store_access;
          puVar12 = (pmVar27->load_handler).direct_memory + uVar15;
joined_r0x0801be24:
          if (uVar14 != '\x01') {
            if (uVar14 != '\0') {
              if (uVar14 == '\x02') goto LAB_0801be34;
              goto LAB_0801bb94;
            }
            p_Var23 = pmVar28->get_code_bitmap_coarse;
            dest_pointer_4 = (pmVar28->store_handler).direct_memory + uVar26;
            goto LAB_0801bdf4;
          }
          goto LAB_0801bf34;
        }
        if (uVar14 != '\x02') {
          uVar14 = pmVar28->store_access;
          puVar12 = pmVar36->null_buffer_load;
          goto joined_r0x0801be24;
        }
        uVar14 = pmVar28->store_access;
        puVar12 = (u8 *)(pmVar27->load_handler).extended_function.load16;
        if (uVar14 == '\x01') {
          puVar35 = (*(pmVar28->store_handler).get_pointer)(pmVar36,local_74);
          puVar7 = (*pmVar28->get_code_bitmap_coarse)(pmVar36,pmVar28,local_74);
          local_7c = local_7c - uVar5;
          puVar6 = (*pmVar28->get_code_bitmap_fine)(pmVar36,pmVar28,local_74);
        }
        else if (uVar14 == '\0') {
          local_7c = local_7c - uVar5;
          puVar35 = (pmVar28->store_handler).direct_memory + uVar26;
          puVar7 = (*pmVar28->get_code_bitmap_coarse)(pmVar36,pmVar28,local_74);
          puVar6 = (*pmVar28->get_code_bitmap_fine)(pmVar36,pmVar28,local_74);
        }
        else {
          if (uVar14 == '\x02') {
            uVar14 = '\x03';
            goto LAB_0801be34;
          }
          local_7c = local_7c - uVar5;
          puVar7 = (*pmVar28->get_code_bitmap_coarse)(pmVar36,pmVar28,local_74);
          puVar6 = (*pmVar28->get_code_bitmap_fine)(pmVar36,pmVar28,local_74);
          puVar35 = pmVar36->null_buffer_store;
        }
        if (puVar7 != (u32 *)0x0) {
          uVar20 = memory_check_code_region(puVar7,puVar6,local_74,uVar5 * 2);
          local_70 = (u32 *)((uint)local_70 | uVar20);
        }
        uVar10 = uVar5;
        puVar34 = puVar35;
        do {
          uVar4 = (*(code *)puVar12)(pmVar36,(uint)(puVar34 + (local_78 - (int)puVar35)) &
                                             pmVar27->mask);
          uVar10 = uVar10 - 1;
          *(undefined2 *)puVar34 = uVar4;
          puVar34 = puVar34 + -2;
        } while (uVar10 != 0);
joined_r0x0801cab8:
        local_74 = local_74 + uVar5 * -2;
        local_78 = local_78 + uVar5 * -2;
      } while (local_7c != 0);
      break;
    case 6:
      uVar10 = local_74 >> 0x17;
      local_70 = (u32 *)0x0;
      do {
        uVar15 = local_7c;
        pmVar32 = dma->memory_regions;
        pmVar28 = pmVar32 + uVar10;
        pmVar27 = pmVar32 + (local_78 >> 0x17);
        uVar26 = local_78 & pmVar32[local_78 >> 0x17].mask;
        if (pmVar32[local_78 >> 0x17].mask < uVar26 + local_7c * -2) {
          uVar15 = (uVar26 >> 1) + 1;
          local_7c = local_7c - uVar15;
          uVar14 = pmVar27->load_access;
          if (uVar14 != '\x01') goto LAB_0801a590;
LAB_0801a90c:
          puVar12 = (*(pmVar27->load_handler).get_pointer)(pmVar36,local_78);
          uVar14 = pmVar28->store_access;
joined_r0x0801c11c:
          if (uVar14 == '\x01') {
            puVar35 = (*(pmVar28->store_handler).get_pointer)(pmVar36,uVar5);
            p_Var23 = pmVar28->get_code_bitmap_coarse;
          }
          else if (uVar14 == '\0') {
            p_Var23 = pmVar28->get_code_bitmap_coarse;
            puVar35 = (pmVar28->store_handler).direct_memory + (uVar5 & pmVar32[uVar10].mask);
          }
          else {
            if (uVar14 == '\x02') {
              local_44 = 2;
              goto LAB_0801a93c;
            }
            p_Var23 = pmVar28->get_code_bitmap_coarse;
            puVar35 = pmVar36->null_buffer_store;
          }
          puVar6 = (*p_Var23)(pmVar36,pmVar28,uVar5);
          puVar7 = (*pmVar28->get_code_bitmap_fine)(pmVar36,pmVar28,uVar5);
          if (puVar6 != (u32 *)0x0) {
            uVar20 = memory_check_code_region(puVar6,puVar7,uVar5,uVar15 * 2);
            local_70 = (u32 *)((uint)local_70 | uVar20);
          }
          local_78 = local_78 + uVar15 * -2;
          do {
            uVar15 = uVar15 - 1;
            *(u16 *)puVar35 = *(u16 *)puVar12;
            puVar12 = puVar12 + -2;
          } while (uVar15 != 0);
        }
        else {
          local_7c = 0;
          uVar14 = pmVar27->load_access;
          if (uVar14 == '\x01') goto LAB_0801a90c;
LAB_0801a590:
          if (uVar14 == '\0') {
            uVar14 = pmVar28->store_access;
            puVar12 = (pmVar27->load_handler).direct_memory + uVar26;
            goto joined_r0x0801c11c;
          }
          if (uVar14 != '\x02') {
            uVar14 = pmVar28->store_access;
            puVar12 = pmVar36->null_buffer_load;
            goto joined_r0x0801c11c;
          }
          uVar14 = pmVar28->store_access;
          puVar12 = (u8 *)(pmVar27->load_handler).extended_function.load16;
          if (uVar14 == '\x01') {
            puVar35 = (*(pmVar28->store_handler).get_pointer)(pmVar36,uVar5);
            p_Var23 = pmVar28->get_code_bitmap_coarse;
LAB_0801c7d8:
            puVar6 = (*p_Var23)(pmVar36,pmVar28,uVar5);
            puVar7 = (*pmVar28->get_code_bitmap_fine)(pmVar36,pmVar28,uVar5);
            local_44 = uVar15 << 1;
            uVar26 = local_78;
            if (puVar6 != (u32 *)0x0) {
              uVar20 = memory_check_code_region(puVar6,puVar7,uVar5,local_44);
              local_70 = (u32 *)((uint)local_70 | uVar20);
            }
            do {
              uVar4 = (*(code *)puVar12)(pmVar36,pmVar27->mask & uVar26);
              uVar15 = uVar15 - 1;
              *(undefined2 *)puVar35 = uVar4;
              uVar26 = uVar26 - 2;
            } while (uVar15 != 0);
          }
          else {
            if (uVar14 == '\0') {
              p_Var23 = pmVar28->get_code_bitmap_coarse;
              puVar35 = (pmVar28->store_handler).direct_memory + (uVar5 & pmVar32[uVar10].mask);
              goto LAB_0801c7d8;
            }
            if (uVar14 != '\x02') {
              p_Var23 = pmVar28->get_code_bitmap_coarse;
              puVar35 = pmVar36->null_buffer_store;
              goto LAB_0801c7d8;
            }
            local_44 = 3;
LAB_0801a93c:
            p_Var29 = (pmVar28->store_handler).extended_function.store16;
            puVar6 = (*pmVar28->get_code_bitmap_coarse)(pmVar36,pmVar28,uVar5);
            puVar7 = (*pmVar28->get_code_bitmap_fine)(pmVar36,pmVar28,uVar5);
            if (local_44 != 3) {
              if (puVar6 != (u32 *)0x0) {
                uVar20 = memory_check_code_region(puVar6,puVar7,uVar5,uVar15 * 2);
                local_70 = (u32 *)((uint)local_70 | uVar20);
              }
              local_78 = local_78 + uVar15 * -2;
              do {
                (*p_Var29)(pmVar36,pmVar28->mask & uVar5,*(u16 *)puVar12);
                uVar15 = uVar15 - 1;
                puVar12 = puVar12 + -2;
              } while (uVar15 != 0);
              goto LAB_0801a9e8;
            }
            local_44 = uVar15 << 1;
            uVar26 = local_78;
            if (puVar6 != (u32 *)0x0) {
              uVar20 = memory_check_code_region(puVar6,puVar7,uVar5,local_44);
              local_70 = (u32 *)((uint)local_70 | uVar20);
            }
            do {
              uVar3 = (*(code *)puVar12)(pmVar36,pmVar27->mask & uVar26);
              (*p_Var29)(pmVar36,pmVar28->mask & uVar5,uVar3);
              uVar15 = uVar15 - 1;
              uVar26 = uVar26 - 2;
            } while (uVar15 != 0);
          }
          local_78 = local_78 - local_44;
        }
LAB_0801a9e8:
        local_74 = uVar5;
      } while (local_7c != 0);
      break;
    case 8:
    case 0xb:
      local_70 = (u32 *)0x0;
      local_74 = uVar5;
      do {
        while( true ) {
          uVar15 = local_7c;
          uVar5 = local_74 >> 0x17;
          pmVar32 = dma->memory_regions;
          uVar26 = pmVar32[uVar5].mask;
          pmVar27 = pmVar32 + uVar5;
          pmVar28 = pmVar32 + (uVar10 >> 0x17);
          uVar11 = local_74 & uVar26;
          if (uVar11 + local_7c * 2 <= uVar26) break;
          uVar15 = (uVar26 + 1) - uVar11 >> 1;
          local_7c = local_7c - uVar15;
          uVar14 = pmVar28->load_access;
          if (uVar14 != '\x01') goto LAB_0801a64c;
LAB_0801aa10:
          puVar12 = (*(pmVar28->load_handler).get_pointer)(pmVar36,local_78);
          uVar14 = pmVar27->store_access;
          if (uVar14 == '\x01') {
LAB_0801c2ac:
            puVar35 = (*(pmVar27->store_handler).get_pointer)(pmVar36,local_74);
            p_Var23 = pmVar27->get_code_bitmap_coarse;
LAB_0801aa58:
            puVar6 = (*p_Var23)(pmVar36,pmVar27,local_74);
            puVar7 = (*pmVar27->get_code_bitmap_fine)(pmVar36,pmVar27,local_74);
            uVar20 = uVar15 * 2;
            if (puVar6 != (u32 *)0x0) {
              uVar8 = memory_check_code_region(puVar6,puVar7,local_74,uVar20);
              local_70 = (u32 *)((uint)local_70 | uVar8);
            }
            local_74 = local_74 + uVar20;
            if (uVar15 < 0xf || puVar35 < puVar12 + 2 && puVar12 < puVar35 + uVar20) {
              do {
                puVar34 = puVar35 + 2;
                *(u16 *)puVar35 = *(u16 *)puVar12;
                if (uVar15 == 1) break;
                uVar15 = uVar15 - 2;
                puVar35 = puVar35 + 4;
                *(u16 *)puVar34 = *(u16 *)puVar12;
              } while (uVar15 != 0);
            }
            else {
              uVar5 = -((uint)((int)puVar35 << 0x1d) >> 0x1e) & 7;
              if (uVar15 <= uVar5) {
                uVar5 = uVar15;
              }
              uVar26 = uVar15;
              puVar34 = puVar35;
              if (uVar5 != 0) {
                *(u16 *)puVar35 = *(u16 *)puVar12;
                uVar26 = uVar15 - 1;
                puVar34 = puVar35 + 2;
                if (uVar5 != 1) {
                  *(u16 *)(puVar35 + 2) = *(u16 *)puVar12;
                  uVar26 = uVar15 - 2;
                  puVar34 = puVar35 + 4;
                  if (uVar5 != 2) {
                    *(u16 *)(puVar35 + 4) = *(u16 *)puVar12;
                    uVar26 = uVar15 - 3;
                    puVar34 = puVar35 + 6;
                    if (uVar5 != 3) {
                      *(u16 *)(puVar35 + 6) = *(u16 *)puVar12;
                      uVar26 = uVar15 - 4;
                      puVar34 = puVar35 + 8;
                      if (uVar5 != 4) {
                        *(u16 *)(puVar35 + 8) = *(u16 *)puVar12;
                        uVar26 = uVar15 - 5;
                        puVar34 = puVar35 + 10;
                        if (uVar5 != 5) {
                          *(u16 *)(puVar35 + 10) = *(u16 *)puVar12;
                          uVar26 = uVar15 - 6;
                          puVar34 = puVar35 + 0xc;
                          if (uVar5 == 7) {
                            *(u16 *)(puVar35 + 0xc) = *(u16 *)puVar12;
                            uVar26 = uVar15 - 7;
                            puVar34 = puVar35 + 0xe;
                          }
                        }
                      }
                    }
                  }
                }
              }
              uVar9 = CONCAT22(*(u16 *)puVar12,*(u16 *)puVar12);
              uVar43 = CONCAT44(uVar9,uVar9);
              uVar21 = 0;
              uVar11 = ((uVar15 - uVar5) - 8 >> 3) + 1;
              puVar35 = puVar35 + uVar5 * 2;
              do {
                uVar21 = uVar21 + 1;
                *(undefined8 *)puVar35 = uVar43;
                *(undefined8 *)(puVar35 + 8) = uVar43;
                puVar35 = puVar35 + 0x10;
              } while (uVar21 < uVar11);
              iVar18 = uVar11 * 0x10;
              iVar19 = uVar26 + uVar11 * -8;
              if (((uVar11 * 8 - (uVar15 - uVar5) != 0) &&
                  (*(u16 *)(puVar34 + iVar18) = *(u16 *)puVar12, iVar19 != 1)) &&
                 (((*(u16 *)(puVar34 + iVar18 + 2) = *(u16 *)puVar12, iVar19 != 2 &&
                   (((*(u16 *)(puVar34 + iVar18 + 4) = *(u16 *)puVar12, iVar19 != 3 &&
                     (*(u16 *)(puVar34 + iVar18 + 6) = *(u16 *)puVar12, iVar19 != 4)) &&
                    (*(u16 *)(puVar34 + iVar18 + 8) = *(u16 *)puVar12, iVar19 != 5)))) &&
                  (*(u16 *)(puVar34 + iVar18 + 10) = *(u16 *)puVar12, iVar19 != 6)))) {
                *(u16 *)(puVar34 + iVar18 + 0xc) = *(u16 *)puVar12;
              }
            }
          }
          else {
            if (uVar14 == '\0') {
              p_Var23 = pmVar27->get_code_bitmap_coarse;
              puVar35 = (pmVar27->store_handler).direct_memory + (local_74 & pmVar32[uVar5].mask);
              goto LAB_0801aa58;
            }
LAB_0801aa34:
            if (uVar14 != '\x02') {
              p_Var23 = pmVar27->get_code_bitmap_coarse;
              puVar35 = pmVar36->null_buffer_store;
              goto LAB_0801aa58;
            }
LAB_0801a678:
            p_Var29 = (pmVar27->store_handler).extended_function.store16;
            puVar6 = (*pmVar27->get_code_bitmap_coarse)(pmVar36,pmVar27,local_74);
            puVar7 = (*pmVar27->get_code_bitmap_fine)(pmVar36,pmVar27,local_74);
            if (uVar14 == '\x03') {
              uVar5 = local_74;
              uVar26 = uVar15;
              if (puVar6 != (u32 *)0x0) {
                uVar20 = memory_check_code_region(puVar6,puVar7,local_74,uVar15 << 1);
                local_70 = (u32 *)((uint)local_70 | uVar20);
              }
              do {
                uVar3 = (*(code *)puVar12)(pmVar36,pmVar28->mask & local_78);
                (*p_Var29)(pmVar36,pmVar27->mask & uVar5,uVar3);
                uVar26 = uVar26 - 1;
                uVar5 = uVar5 + 2;
              } while (uVar26 != 0);
            }
            else {
              uVar5 = local_74;
              uVar26 = uVar15;
              if (puVar6 != (u32 *)0x0) {
                uVar20 = memory_check_code_region(puVar6,puVar7,local_74,uVar15 << 1);
                local_70 = (u32 *)((uint)local_70 | uVar20);
              }
              do {
                (*p_Var29)(pmVar36,pmVar27->mask & uVar5,*(u16 *)puVar12);
                uVar26 = uVar26 - 1;
                uVar5 = uVar5 + 2;
              } while (uVar26 != 0);
            }
            local_74 = local_74 + uVar15 * 2;
          }
          if (local_7c == 0) goto LAB_08019f44;
        }
        local_7c = 0;
        uVar14 = pmVar28->load_access;
        if (uVar14 == '\x01') goto LAB_0801aa10;
LAB_0801a64c:
        if (uVar14 == '\0') {
          uVar14 = pmVar27->store_access;
          puVar12 = (pmVar28->load_handler).direct_memory +
                    (pmVar32[uVar10 >> 0x17].mask & local_78);
          if (uVar14 == '\x01') goto LAB_0801c2ac;
LAB_0801c264:
          if (uVar14 != '\0') goto LAB_0801aa34;
          p_Var23 = pmVar27->get_code_bitmap_coarse;
          puVar35 = (pmVar27->store_handler).direct_memory + uVar11;
          goto LAB_0801aa58;
        }
        if (uVar14 != '\x02') {
          uVar14 = pmVar27->store_access;
          puVar12 = pmVar36->null_buffer_load;
          if (uVar14 != '\x01') goto LAB_0801c264;
          goto LAB_0801c2ac;
        }
        uVar14 = pmVar27->store_access;
        puVar12 = (u8 *)(pmVar28->load_handler).extended_function.load16;
        if (uVar14 != '\x01') {
          if (uVar14 == '\0') {
            p_Var23 = pmVar27->get_code_bitmap_coarse;
            puVar35 = (pmVar27->store_handler).direct_memory + uVar11;
            goto LAB_0801c6a8;
          }
          if (uVar14 != '\x02') {
            p_Var23 = pmVar27->get_code_bitmap_coarse;
            puVar35 = pmVar36->null_buffer_store;
            goto LAB_0801c6a8;
          }
          uVar14 = '\x03';
          goto LAB_0801a678;
        }
        puVar35 = (*(pmVar27->store_handler).get_pointer)(pmVar36,local_74);
        p_Var23 = pmVar27->get_code_bitmap_coarse;
LAB_0801c6a8:
        puVar6 = (*p_Var23)(pmVar36,pmVar27,local_74);
        puVar7 = (*pmVar27->get_code_bitmap_fine)(pmVar36,pmVar27,local_74);
        if (puVar6 != (u32 *)0x0) {
          uVar20 = memory_check_code_region(puVar6,puVar7,local_74,uVar15 * 2);
          local_70 = (u32 *)((uint)local_70 | uVar20);
        }
        local_74 = local_74 + uVar15 * 2;
        do {
          uVar4 = (*(code *)puVar12)(pmVar36,pmVar28->mask & local_78);
          uVar15 = uVar15 - 1;
          *(undefined2 *)puVar35 = uVar4;
          puVar35 = puVar35 + 2;
        } while (uVar15 != 0);
      } while (local_7c != 0);
      break;
    case 9:
      puVar12 = pmVar36->null_buffer_load;
      local_70 = (u32 *)0x0;
      do {
        uVar26 = local_7c;
        uVar15 = uVar5 >> 0x17;
        pmVar32 = dma->memory_regions;
        pmVar28 = pmVar32 + (uVar10 >> 0x17);
        pmVar27 = pmVar32 + uVar15;
        uVar11 = uVar5 & pmVar32[uVar15].mask;
        if (pmVar32[uVar15].mask < uVar11 + local_7c * -2) {
          uVar26 = (uVar11 >> 1) + 1;
          local_7c = local_7c - uVar26;
          uVar14 = pmVar28->load_access;
          if (uVar14 != '\x01') goto LAB_0801a7c8;
LAB_0801ac64:
          puVar35 = (*(pmVar28->load_handler).get_pointer)(pmVar36,local_78);
          uVar14 = pmVar27->store_access;
          if (uVar14 == '\x01') goto LAB_0801cb7c;
          if (uVar14 == '\0') {
            p_Var23 = pmVar27->get_code_bitmap_coarse;
            puVar34 = (pmVar27->store_handler).direct_memory + (uVar5 & pmVar32[uVar15].mask);
          }
          else {
LAB_0801ac88:
            if (uVar14 == '\x02') {
              local_74 = 2;
              goto LAB_0801ac94;
            }
LAB_0801c18c:
            p_Var23 = pmVar27->get_code_bitmap_coarse;
            puVar34 = pmVar36->null_buffer_store;
          }
LAB_0801b03c:
          puVar6 = (*p_Var23)(pmVar36,pmVar27,uVar5);
          puVar7 = (*pmVar27->get_code_bitmap_fine)(pmVar36,pmVar27,uVar5);
          if (puVar6 != (u32 *)0x0) {
            uVar20 = memory_check_code_region(puVar6,puVar7,uVar5,uVar26 * 2);
            local_70 = (u32 *)((uint)local_70 | uVar20);
          }
          bVar42 = puVar35 <= puVar34 + 2;
          bVar41 = puVar34 + 2 == puVar35;
          if (bVar42 && !bVar41) {
            bVar42 = puVar34 + uVar26 * -2 + 2 <= puVar35 + 2;
            bVar41 = puVar35 + 2 == puVar34 + uVar26 * -2 + 2;
          }
          uVar5 = uVar5 + uVar26 * -2;
          if (uVar26 < 0xf || bVar42 && !bVar41) {
            do {
              puVar13 = puVar34 + -2;
              *(u16 *)puVar34 = *(u16 *)puVar35;
              if (uVar26 == 1) break;
              uVar26 = uVar26 - 2;
              puVar34 = puVar34 + -4;
              *(u16 *)puVar13 = *(u16 *)puVar35;
            } while (uVar26 != 0);
          }
          else {
            uVar15 = (uint)((int)(puVar34 + -0xe) * 0x20000000) >> 0x1e;
            if (uVar26 < uVar15) {
              uVar15 = uVar26;
            }
            uVar11 = uVar26;
            puVar13 = puVar34;
            if (uVar15 != 0) {
              *(u16 *)puVar34 = *(u16 *)puVar35;
              uVar11 = uVar26 - 1;
              puVar13 = puVar34 + -2;
              if (uVar15 != 1) {
                *(u16 *)(puVar34 + -2) = *(u16 *)puVar35;
                uVar11 = uVar26 - 2;
                puVar13 = puVar34 + -4;
                if (uVar15 == 3) {
                  *(u16 *)(puVar34 + -4) = *(u16 *)puVar35;
                  uVar11 = uVar26 - 3;
                  puVar13 = puVar34 + -6;
                }
              }
            }
            uVar9 = CONCAT22(*(u16 *)puVar35,*(u16 *)puVar35);
            uVar43 = CONCAT44(uVar9,uVar9);
            uVar21 = ((uVar26 - uVar15) - 8 >> 3) + 1;
            uVar22 = 0;
            puVar34 = puVar34 + uVar15 * -2 + -0x1e;
            do {
              uVar22 = uVar22 + 1;
              *(undefined8 *)(puVar34 + 0x10) = uVar43;
              *(undefined8 *)(puVar34 + 0x18) = uVar43;
              puVar34 = puVar34 + -0x10;
            } while (uVar22 < uVar21);
            iVar19 = uVar11 + uVar21 * -8;
            iVar18 = uVar21 * -0x10;
            if (((((uVar26 - uVar15 != uVar21 * 8) &&
                  (*(u16 *)(puVar13 + iVar18) = *(u16 *)puVar35, iVar19 != 1)) &&
                 (*(u16 *)(puVar13 + iVar18 + -2) = *(u16 *)puVar35, iVar19 != 2)) &&
                ((*(u16 *)(puVar13 + iVar18 + -4) = *(u16 *)puVar35, iVar19 != 3 &&
                 (*(u16 *)(puVar13 + iVar18 + -6) = *(u16 *)puVar35, iVar19 != 4)))) &&
               ((*(u16 *)(puVar13 + iVar18 + -8) = *(u16 *)puVar35, iVar19 != 5 &&
                (*(u16 *)(puVar13 + iVar18 + -10) = *(u16 *)puVar35, iVar19 != 6)))) {
              *(u16 *)(puVar13 + iVar18 + -0xc) = *(u16 *)puVar35;
            }
          }
        }
        else {
          local_7c = 0;
          uVar14 = pmVar28->load_access;
          if (uVar14 == '\x01') goto LAB_0801ac64;
LAB_0801a7c8:
          if (uVar14 == '\0') {
            uVar14 = pmVar27->store_access;
            puVar35 = (pmVar28->load_handler).direct_memory +
                      (pmVar32[uVar10 >> 0x17].mask & local_78);
            if (uVar14 == '\x01') goto LAB_0801cb7c;
            if (uVar14 == '\0') goto LAB_0801c138;
            if (uVar14 != '\x02') goto LAB_0801c18c;
            local_74 = 2;
LAB_0801ac94:
            p_Var29 = (pmVar27->store_handler).extended_function.store16;
            puVar6 = (*pmVar27->get_code_bitmap_coarse)(pmVar36,pmVar27,uVar5);
            puVar7 = (*pmVar27->get_code_bitmap_fine)(pmVar36,pmVar27,uVar5);
            if (local_74 == 3) {
              uVar15 = uVar26;
              uVar11 = uVar5;
              if (puVar6 != (u32 *)0x0) {
                uVar20 = memory_check_code_region(puVar6,puVar7,uVar5,uVar26 << 1);
                local_70 = (u32 *)((uint)local_70 | uVar20);
              }
              do {
                uVar3 = (*(code *)puVar35)(pmVar36,pmVar28->mask & local_78);
                (*p_Var29)(pmVar36,pmVar27->mask & uVar11,uVar3);
                uVar15 = uVar15 - 1;
                uVar11 = uVar11 - 2;
              } while (uVar15 != 0);
            }
            else {
              uVar15 = uVar26;
              uVar11 = uVar5;
              if (puVar6 != (u32 *)0x0) {
                uVar20 = memory_check_code_region(puVar6,puVar7,uVar5,uVar26 << 1);
                local_70 = (u32 *)((uint)local_70 | uVar20);
              }
              do {
                (*p_Var29)(pmVar36,pmVar27->mask & uVar11,*(u16 *)puVar35);
                uVar15 = uVar15 - 1;
                uVar11 = uVar11 - 2;
              } while (uVar15 != 0);
            }
            uVar5 = uVar5 + uVar26 * -2;
          }
          else {
            if (uVar14 != '\x02') {
              uVar14 = pmVar27->store_access;
              puVar35 = puVar12;
              if (uVar14 != '\x01') {
                if (uVar14 != '\0') goto LAB_0801ac88;
LAB_0801c138:
                p_Var23 = pmVar27->get_code_bitmap_coarse;
                puVar34 = (pmVar27->store_handler).direct_memory + uVar11;
                goto LAB_0801b03c;
              }
LAB_0801cb7c:
              puVar34 = (*(pmVar27->store_handler).get_pointer)(pmVar36,uVar5);
              p_Var23 = pmVar27->get_code_bitmap_coarse;
              goto LAB_0801b03c;
            }
            uVar14 = pmVar27->store_access;
            puVar35 = (u8 *)(pmVar28->load_handler).extended_function.load16;
            if (uVar14 == '\x01') {
              puVar34 = (*(pmVar27->store_handler).get_pointer)(pmVar36,uVar5);
              p_Var23 = pmVar27->get_code_bitmap_coarse;
            }
            else if (uVar14 == '\0') {
              p_Var23 = pmVar27->get_code_bitmap_coarse;
              puVar34 = (pmVar27->store_handler).direct_memory + uVar11;
            }
            else {
              if (uVar14 == '\x02') {
                local_74 = 3;
                goto LAB_0801ac94;
              }
              p_Var23 = pmVar27->get_code_bitmap_coarse;
              puVar34 = pmVar36->null_buffer_store;
            }
            puVar6 = (*p_Var23)(pmVar36,pmVar27,uVar5);
            puVar7 = (*pmVar27->get_code_bitmap_fine)(pmVar36,pmVar27,uVar5);
            if (puVar6 != (u32 *)0x0) {
              uVar20 = memory_check_code_region(puVar6,puVar7,uVar5,uVar26 * 2);
              local_70 = (u32 *)((uint)local_70 | uVar20);
            }
            uVar5 = uVar5 + uVar26 * -2;
            do {
              uVar4 = (*(code *)puVar35)(pmVar36,pmVar28->mask & local_78);
              uVar26 = uVar26 - 1;
              *(undefined2 *)puVar34 = uVar4;
              puVar34 = puVar34 + -2;
            } while (uVar26 != 0);
          }
        }
        local_74 = uVar5;
      } while (local_7c != 0);
      break;
    case 10:
      pmVar32 = dma->memory_regions;
      pmVar28 = pmVar32 + (uVar10 >> 0x17);
      uVar14 = pmVar28->load_access;
      pmVar27 = pmVar32 + (local_74 >> 0x17);
      if (uVar14 == '\x01') {
        iVar18 = 0;
        puVar12 = (*(pmVar28->load_handler).get_pointer)(pmVar36,local_78);
        iVar19 = 2;
      }
      else if (uVar14 == '\0') {
        iVar19 = 2;
        iVar18 = 0;
        puVar12 = (pmVar28->load_handler).direct_memory + (pmVar32[uVar10 >> 0x17].mask & local_78);
      }
      else if (uVar14 == '\x02') {
        puVar12 = (u8 *)(pmVar28->load_handler).extended_function.load16;
        iVar19 = 3;
        iVar18 = 1;
      }
      else {
        iVar19 = 2;
        puVar12 = pmVar36->null_buffer_load;
        iVar18 = 0;
      }
      uVar14 = pmVar27->store_access;
      if (uVar14 == '\x01') {
        puVar35 = (*(pmVar27->store_handler).get_pointer)(pmVar36,uVar5);
      }
      else if (uVar14 == '\0') {
        puVar35 = (pmVar27->store_handler).direct_memory + (pmVar32[local_74 >> 0x17].mask & uVar5);
      }
      else if (uVar14 == '\x02') {
        puVar35 = (u8 *)(pmVar27->store_handler).extended_function.store16;
        iVar18 = iVar19;
      }
      else {
        puVar35 = pmVar36->null_buffer_store;
      }
      local_70 = (*pmVar27->get_code_bitmap_coarse)(pmVar36,pmVar27,uVar5);
      puVar6 = (*pmVar27->get_code_bitmap_fine)(pmVar36,pmVar27,uVar5);
      if (iVar18 == 2) {
        if (local_70 != (u32 *)0x0) {
          local_70 = (u32 *)memory_check_code_region(local_70,puVar6,uVar5,local_7c << 1);
        }
        do {
          (*(code *)puVar35)(pmVar36,pmVar27->mask & uVar5,*(undefined2 *)puVar12);
          local_7c = local_7c - 1;
          local_74 = uVar5;
        } while (local_7c != 0);
      }
      else if (iVar18 == 3) {
        if (local_70 != (u32 *)0x0) {
          local_70 = (u32 *)memory_check_code_region(local_70,puVar6,uVar5,local_7c << 1);
        }
        do {
          uVar9 = (*(code *)puVar12)(pmVar36,pmVar28->mask & local_78);
          (*(code *)puVar35)(pmVar36,pmVar27->mask & uVar5,uVar9);
          local_7c = local_7c - 1;
          local_74 = uVar5;
        } while (local_7c != 0);
      }
      else if (iVar18 == 1) {
        if (local_70 != (u32 *)0x0) {
          local_70 = (u32 *)memory_check_code_region(local_70,puVar6,uVar5,local_7c << 1);
        }
        do {
          uVar4 = (*(code *)puVar12)(pmVar36,pmVar28->mask & local_78);
          local_7c = local_7c - 1;
          *(undefined2 *)puVar35 = uVar4;
          local_74 = uVar5;
        } while (local_7c != 0);
      }
      else {
        if (local_70 != (u32 *)0x0) {
          local_70 = (u32 *)memory_check_code_region(local_70,puVar6,uVar5,local_7c << 1);
        }
        do {
          local_7c = local_7c - 1;
          *(undefined2 *)puVar35 = *(undefined2 *)puVar12;
          local_74 = uVar5;
        } while (local_7c != 0);
      }
      break;
    default:
switchD_08019c64_caseD_c:
      local_74 = uVar5;
      local_70 = (u32 *)0x0;
    }
    goto LAB_08019f44;
  }
  if (local_74 != 0x4000400) {
    local_78 = uVar10 & 0xfffffffc;
    local_74 = local_74 & 0xfffffffc;
    uVar5 = local_74;
    switch(uVar24 >> 0x15 & 0xf) {
    case 0:
    case 3:
      goto switchD_08019c64_caseD_0;
    case 1:
      goto switchD_08019c64_caseD_1;
    case 2:
      goto switchD_08019c64_caseD_2;
    case 4:
    case 7:
      goto switchD_08019c64_caseD_4;
    case 5:
      goto switchD_08019c64_caseD_5;
    case 6:
      goto switchD_08019c64_caseD_6;
    case 8:
    case 0xb:
      goto switchD_08019c64_caseD_8;
    case 9:
      goto switchD_08019c64_caseD_9;
    case 10:
      goto switchD_08019c64_caseD_a;
    default:
      goto switchD_08019c64_caseD_c;
    }
  }
  if (pcVar17->type == '\x01') {
    dma_transfer_gxfifo(dma,dma_channel);
    return 0;
  }
  local_78 = uVar10 & 0xfffffffc;
  switch(uVar24 >> 0x15 & 0xf) {
  case 0:
  case 3:
    goto switchD_08019c64_caseD_0;
  case 1:
switchD_08019c64_caseD_1:
    local_78 = uVar10 & 0xfffffffc;
    local_70 = (u32 *)0x0;
    uVar10 = local_74;
    do {
      uVar15 = uVar10 >> 0x17;
      pmVar32 = dma->memory_regions;
      uVar11 = pmVar32[local_78 >> 0x17].mask;
      pmVar28 = pmVar32 + uVar15;
      pmVar27 = pmVar32 + (local_78 >> 0x17);
      uVar5 = local_7c * 4;
      uVar26 = local_78 & uVar11;
      if (uVar11 < uVar26 + uVar5) {
        uVar5 = (uVar11 + 1) - uVar26;
        local_74 = uVar5 >> 2;
        uVar5 = uVar5 & 0xfffffffc;
      }
      else {
        local_74 = local_7c;
      }
      uVar11 = uVar10 & pmVar32[uVar15].mask;
      if (pmVar32[uVar15].mask < uVar11 - uVar5) {
        local_74 = (uVar11 >> 2) + 1;
      }
      uVar14 = pmVar27->load_access;
      if (uVar14 == '\x01') {
        dma_value_12 = (u32 *)(*(pmVar27->load_handler).get_pointer)(pmVar36,local_78);
        uVar14 = pmVar28->store_access;
        if (uVar14 == '\x01') {
LAB_0801ed70:
          puVar12 = (*(pmVar28->store_handler).get_pointer)(pmVar36,uVar10);
          puVar7 = (*pmVar28->get_code_bitmap_coarse)(pmVar36,pmVar28,uVar10);
          local_7c = local_7c - local_74;
          puVar6 = (*pmVar28->get_code_bitmap_fine)(pmVar36,pmVar28,uVar10);
        }
        else {
          if (uVar14 == '\0') {
            p_Var23 = pmVar28->get_code_bitmap_coarse;
            puVar12 = (pmVar28->store_handler).direct_memory + (uVar10 & pmVar32[uVar15].mask);
            goto LAB_0801e678;
          }
LAB_0801e47c:
          if (uVar14 == '\x02') goto LAB_0801d600;
          local_7c = local_7c - local_74;
          puVar7 = (*pmVar28->get_code_bitmap_coarse)(pmVar36,pmVar28,uVar10);
          puVar6 = (*pmVar28->get_code_bitmap_fine)(pmVar36,pmVar28,uVar10);
          puVar12 = pmVar36->null_buffer_store;
        }
LAB_0801e4c8:
        uVar20 = local_74 * 4;
        if (puVar7 != (u32 *)0x0) {
          uVar8 = memory_check_code_region(puVar7,puVar6,uVar10,uVar20);
          local_70 = (u32 *)((uint)local_70 | uVar8);
        }
        uVar10 = uVar10 + local_74 * -4;
        local_78 = local_78 + uVar20;
        if (local_74 < 0xc ||
            dma_value_12 < puVar12 + 4 &&
            puVar12 + local_74 * -4 + 4 < (u8 *)((int)dma_value_12 + uVar20)) {
          do {
            local_74 = local_74 - 1;
            *(u32 *)puVar12 = *dma_value_12;
            puVar12 = puVar12 + -4;
            dma_value_12 = (u32 *)((int)dma_value_12 + 4);
          } while (local_74 != 0);
        }
        else {
          uVar5 = ((int)dma_value_12 << 0x1d) >> 0x1f & 3;
          if (local_74 <= uVar5) {
            uVar5 = local_74;
          }
          puVar35 = puVar12;
          if (uVar5 != 0) {
            *(u32 *)puVar12 = *dma_value_12;
            puVar35 = puVar12 + -4;
            if (uVar5 != 1) {
              *(u32 *)(puVar12 + -4) = *(u32 *)((int)dma_value_12 + 4);
              puVar35 = puVar12 + -8;
              if (uVar5 == 3) {
                *(u32 *)(puVar12 + -8) = *(u32 *)((int)dma_value_12 + 8);
                puVar35 = puVar12 + -0xc;
              }
            }
          }
          uVar11 = ((local_74 - uVar5) - 4 >> 2) + 1;
          puVar12 = puVar12 + uVar5 * -4 + -0xc;
          uVar26 = 0;
          do {
            uVar26 = uVar26 + 1;
            iVar18 = VectorTableLookup(uVar15 * 3,puVar35,2);
            iVar19 = VectorTableLookup(pmVar32,puVar35,2);
            *(undefined8 *)puVar12 = in_d16;
            *(undefined8 *)(puVar12 + 8) = in_d17;
            puVar12 = puVar12 + -0x10;
          } while (uVar26 < uVar11);
          iVar18 = iVar18 + uVar11 * -4;
          iVar16 = uVar11 * -0x10;
          iVar38 = iVar19 + uVar11 * 0x10;
          if (((uVar11 * 4 - (local_74 - uVar5) != 0) &&
              (*(undefined4 *)(puVar35 + iVar16) = *(undefined4 *)(iVar19 + uVar11 * 0x10),
              iVar18 != 1)) &&
             (*(undefined4 *)(puVar35 + iVar16 + -4) = *(undefined4 *)(iVar38 + 4), iVar18 != 2)) {
            *(undefined4 *)(puVar35 + iVar16 + -8) = *(undefined4 *)(iVar38 + 8);
          }
        }
      }
      else {
        if (uVar14 == '\0') {
          uVar14 = pmVar28->store_access;
          dma_value_12 = (u32 *)((pmVar27->load_handler).direct_memory + uVar26);
joined_r0x0801ed6c:
          if (uVar14 == '\x01') goto LAB_0801ed70;
          if (uVar14 != '\0') goto LAB_0801e47c;
          p_Var23 = pmVar28->get_code_bitmap_coarse;
          puVar12 = (pmVar28->store_handler).direct_memory + uVar11;
LAB_0801e678:
          local_7c = local_7c - local_74;
          puVar7 = (*p_Var23)(pmVar36,pmVar28,uVar10);
          puVar6 = (*pmVar28->get_code_bitmap_fine)(pmVar36,pmVar28,uVar10);
          goto LAB_0801e4c8;
        }
        if (uVar14 != '\x02') {
          uVar14 = pmVar28->store_access;
          dma_value_12 = (u32 *)pmVar36->null_buffer_load;
          goto joined_r0x0801ed6c;
        }
        uVar14 = pmVar28->store_access;
        dma_value_12 = (u32 *)(pmVar27->load_handler).extended_function.load32;
        if (uVar14 == '\x01') {
          puVar12 = (*(pmVar28->store_handler).get_pointer)(pmVar36,uVar10);
          puVar7 = (*pmVar28->get_code_bitmap_coarse)(pmVar36,pmVar28,uVar10);
          local_7c = local_7c - local_74;
          puVar6 = (*pmVar28->get_code_bitmap_fine)(pmVar36,pmVar28,uVar10);
LAB_0801f1a4:
          if (puVar7 != (u32 *)0x0) {
            uVar20 = memory_check_code_region(puVar7,puVar6,uVar10,local_74 * 4);
            local_70 = (u32 *)((uint)local_70 | uVar20);
          }
          uVar10 = uVar10 + local_74 * -4;
          uVar5 = local_78;
          uVar15 = local_74;
          do {
            uVar26 = pmVar27->mask & uVar5;
            uVar5 = uVar5 + 4;
            uVar9 = (*(code *)dma_value_12)(pmVar36,uVar26);
            uVar15 = uVar15 - 1;
            *(undefined4 *)puVar12 = uVar9;
            puVar12 = puVar12 + -4;
          } while (uVar15 != 0);
          local_78 = local_78 + local_74 * 4;
        }
        else {
          if (uVar14 == '\0') {
            local_7c = local_7c - local_74;
            puVar12 = (pmVar28->store_handler).direct_memory + uVar11;
            puVar7 = (*pmVar28->get_code_bitmap_coarse)(pmVar36,pmVar28,uVar10);
            puVar6 = (*pmVar28->get_code_bitmap_fine)(pmVar36,pmVar28,uVar10);
            goto LAB_0801f1a4;
          }
          if (uVar14 != '\x02') {
            local_7c = local_7c - local_74;
            puVar7 = (*pmVar28->get_code_bitmap_coarse)(pmVar36,pmVar28,uVar10);
            puVar6 = (*pmVar28->get_code_bitmap_fine)(pmVar36,pmVar28,uVar10);
            puVar12 = pmVar36->null_buffer_store;
            goto LAB_0801f1a4;
          }
          uVar14 = '\x03';
LAB_0801d600:
          p_Var33 = (pmVar28->store_handler).extended_function.store32;
          local_7c = local_7c - local_74;
          puVar6 = (*pmVar28->get_code_bitmap_coarse)(pmVar36,pmVar28,uVar10);
          puVar7 = (*pmVar28->get_code_bitmap_fine)(pmVar36,pmVar28,uVar10);
          if (uVar14 == '\x03') {
            uVar5 = local_74;
            uVar15 = local_78;
            uVar26 = uVar10;
            if (puVar6 != (u32 *)0x0) {
              uVar20 = memory_check_code_region(puVar6,puVar7,uVar10,local_74 << 2);
              local_70 = (u32 *)((uint)local_70 | uVar20);
            }
            do {
              uVar20 = (*(code *)dma_value_12)(pmVar36,pmVar27->mask & uVar15);
              (*p_Var33)(pmVar36,pmVar28->mask & uVar26,uVar20);
              uVar5 = uVar5 - 1;
              uVar15 = uVar15 + 4;
              uVar26 = uVar26 - 4;
            } while (uVar5 != 0);
            uVar20 = local_74 * 4;
          }
          else {
            uVar20 = local_74 << 2;
            uVar5 = uVar10;
            uVar15 = local_74;
            if (puVar6 != (u32 *)0x0) {
              uVar8 = memory_check_code_region(puVar6,puVar7,uVar10,uVar20);
              local_70 = (u32 *)((uint)local_70 | uVar8);
            }
            do {
              (*p_Var33)(pmVar36,pmVar28->mask & uVar5,*dma_value_12);
              uVar15 = uVar15 - 1;
              uVar5 = uVar5 - 4;
              dma_value_12 = dma_value_12 + 1;
            } while (uVar15 != 0);
          }
          local_78 = local_78 + uVar20;
          uVar10 = uVar10 + local_74 * -4;
        }
      }
      local_74 = uVar10;
    } while (local_7c != 0);
    break;
  case 2:
switchD_08019c64_caseD_2:
    local_78 = uVar10 & 0xfffffffc;
    uVar10 = local_74 >> 0x17;
    local_70 = (u32 *)0x0;
    do {
      uVar5 = local_7c;
      pmVar32 = dma->memory_regions;
      uVar26 = pmVar32[local_78 >> 0x17].mask;
      pmVar27 = pmVar32 + (local_78 >> 0x17);
      pmVar28 = pmVar32 + uVar10;
      uVar15 = local_78 & uVar26;
      if (uVar26 < uVar15 + local_7c * 4) {
        uVar5 = (uVar26 + 1) - uVar15 >> 2;
        local_7c = local_7c - uVar5;
        uVar14 = pmVar27->load_access;
        if (uVar14 != '\x01') goto LAB_0801cda0;
LAB_0801dd94:
        dma_value_11 = (u32 *)(*(pmVar27->load_handler).get_pointer)(pmVar36,local_78);
        uVar14 = pmVar28->store_access;
joined_r0x0801eca8:
        if (uVar14 == '\x01') {
          puVar12 = (*(pmVar28->store_handler).get_pointer)(pmVar36,local_74);
          p_Var23 = pmVar28->get_code_bitmap_coarse;
        }
        else if (uVar14 == '\0') {
          p_Var23 = pmVar28->get_code_bitmap_coarse;
          puVar12 = (pmVar28->store_handler).direct_memory + (local_74 & pmVar32[uVar10].mask);
        }
        else {
          if (uVar14 == '\x02') {
            local_44 = 2;
            goto LAB_0801cdd0;
          }
          p_Var23 = pmVar28->get_code_bitmap_coarse;
          puVar12 = pmVar36->null_buffer_store;
        }
        puVar6 = (*p_Var23)(pmVar36,pmVar28,local_74);
        puVar7 = (*pmVar28->get_code_bitmap_fine)(pmVar36,pmVar28,local_74);
        if (puVar6 != (u32 *)0x0) {
          uVar20 = memory_check_code_region(puVar6,puVar7,local_74,uVar5 * 4);
          local_70 = (u32 *)((uint)local_70 | uVar20);
        }
        local_78 = local_78 + uVar5 * 4;
        do {
          uVar5 = uVar5 - 1;
          *(u32 *)puVar12 = *dma_value_11;
          dma_value_11 = (u32 *)((int)dma_value_11 + 4);
        } while (uVar5 != 0);
      }
      else {
        local_7c = 0;
        uVar14 = pmVar27->load_access;
        if (uVar14 == '\x01') goto LAB_0801dd94;
LAB_0801cda0:
        if (uVar14 == '\0') {
          uVar14 = pmVar28->store_access;
          dma_value_11 = (u32 *)((pmVar27->load_handler).direct_memory + uVar15);
          goto joined_r0x0801eca8;
        }
        if (uVar14 != '\x02') {
          uVar14 = pmVar28->store_access;
          dma_value_11 = (u32 *)pmVar36->null_buffer_load;
          goto joined_r0x0801eca8;
        }
        uVar14 = pmVar28->store_access;
        dma_value_11 = (u32 *)(pmVar27->load_handler).extended_function.load32;
        if (uVar14 == '\x01') {
          puVar12 = (*(pmVar28->store_handler).get_pointer)(pmVar36,local_74);
          p_Var23 = pmVar28->get_code_bitmap_coarse;
LAB_0801f23c:
          puVar6 = (*p_Var23)(pmVar36,pmVar28,local_74);
          puVar7 = (*pmVar28->get_code_bitmap_fine)(pmVar36,pmVar28,local_74);
          uVar15 = local_78;
          uVar26 = uVar5;
          if (puVar6 != (u32 *)0x0) {
            uVar20 = memory_check_code_region(puVar6,puVar7,local_74,uVar5 << 2);
            local_70 = (u32 *)((uint)local_70 | uVar20);
          }
          do {
            uVar9 = (*(code *)dma_value_11)(pmVar36,pmVar27->mask & uVar15);
            uVar26 = uVar26 - 1;
            *(undefined4 *)puVar12 = uVar9;
            uVar15 = uVar15 + 4;
          } while (uVar26 != 0);
        }
        else {
          if (uVar14 == '\0') {
            p_Var23 = pmVar28->get_code_bitmap_coarse;
            puVar12 = (pmVar28->store_handler).direct_memory + (local_74 & pmVar32[uVar10].mask);
            goto LAB_0801f23c;
          }
          if (uVar14 != '\x02') {
            p_Var23 = pmVar28->get_code_bitmap_coarse;
            puVar12 = pmVar36->null_buffer_store;
            goto LAB_0801f23c;
          }
          local_44 = 3;
LAB_0801cdd0:
          p_Var33 = (pmVar28->store_handler).extended_function.store32;
          puVar6 = (*pmVar28->get_code_bitmap_coarse)(pmVar36,pmVar28,local_74);
          puVar7 = (*pmVar28->get_code_bitmap_fine)(pmVar36,pmVar28,local_74);
          if (local_44 != 3) {
            if (puVar6 != (u32 *)0x0) {
              uVar20 = memory_check_code_region(puVar6,puVar7,local_74,uVar5 * 4);
              local_70 = (u32 *)((uint)local_70 | uVar20);
            }
            local_78 = local_78 + uVar5 * 4;
            do {
              (*p_Var33)(pmVar36,pmVar28->mask & local_74,*dma_value_11);
              uVar5 = uVar5 - 1;
              dma_value_11 = dma_value_11 + 1;
            } while (uVar5 != 0);
            goto LAB_0801ce8c;
          }
          uVar15 = uVar5;
          uVar26 = local_78;
          if (puVar6 != (u32 *)0x0) {
            uVar20 = memory_check_code_region(puVar6,puVar7,local_74,uVar5 << 2);
            local_70 = (u32 *)((uint)local_70 | uVar20);
          }
          do {
            uVar20 = (*(code *)dma_value_11)(pmVar36,pmVar27->mask & uVar26);
            (*p_Var33)(pmVar36,pmVar28->mask & local_74,uVar20);
            uVar15 = uVar15 - 1;
            uVar26 = uVar26 + 4;
          } while (uVar15 != 0);
        }
        local_78 = local_78 + uVar5 * 4;
      }
LAB_0801ce8c:
    } while (local_7c != 0);
    break;
  case 4:
  case 7:
switchD_08019c64_caseD_4:
    local_78 = uVar10 & 0xfffffffc;
    local_70 = (u32 *)0x0;
    uVar10 = local_74;
    do {
      uVar5 = uVar10 >> 0x17;
      pmVar32 = dma->memory_regions;
      pmVar28 = pmVar32 + uVar5;
      pmVar27 = pmVar32 + (local_78 >> 0x17);
      uVar15 = local_78 & pmVar32[local_78 >> 0x17].mask;
      if (pmVar32[local_78 >> 0x17].mask < uVar15 + local_7c * -4) {
        local_74 = (uVar15 >> 2) + 1;
      }
      else {
        local_74 = local_7c;
      }
      uVar26 = pmVar32[uVar5].mask;
      uVar11 = uVar10 & uVar26;
      if (uVar26 < uVar11 + local_74 * 4) {
        local_74 = (uVar26 + 1) - uVar11 >> 2;
      }
      uVar14 = pmVar27->load_access;
      if (uVar14 == '\x01') {
        dma_value_18 = (u32 *)(*(pmVar27->load_handler).get_pointer)(pmVar36,local_78);
        uVar14 = pmVar28->store_access;
        if (uVar14 == '\x01') {
LAB_0801ec44:
          puVar12 = (*(pmVar28->store_handler).get_pointer)(pmVar36,uVar10);
          puVar7 = (*pmVar28->get_code_bitmap_coarse)(pmVar36,pmVar28,uVar10);
          local_7c = local_7c - local_74;
          puVar6 = (*pmVar28->get_code_bitmap_fine)(pmVar36,pmVar28,uVar10);
        }
        else {
          if (uVar14 == '\0') {
            p_Var23 = pmVar28->get_code_bitmap_coarse;
            puVar12 = (pmVar28->store_handler).direct_memory + (uVar10 & pmVar32[uVar5].mask);
            goto LAB_0801e07c;
          }
LAB_0801deb4:
          if (uVar14 == '\x02') goto LAB_0801cf64;
          local_7c = local_7c - local_74;
          puVar7 = (*pmVar28->get_code_bitmap_coarse)(pmVar36,pmVar28,uVar10);
          puVar6 = (*pmVar28->get_code_bitmap_fine)(pmVar36,pmVar28,uVar10);
          puVar12 = pmVar36->null_buffer_store;
        }
LAB_0801df00:
        uVar20 = local_74 * 4;
        if (puVar7 != (u32 *)0x0) {
          uVar8 = memory_check_code_region(puVar7,puVar6,uVar10,uVar20);
          local_70 = (u32 *)((uint)local_70 | uVar8);
        }
        uVar10 = uVar10 + uVar20;
        local_78 = local_78 + local_74 * -4;
        if (local_74 < 0xc ||
            puVar12 < (u8 *)((int)dma_value_18 + 4) &&
            (u8 *)((int)dma_value_18 + local_74 * -4 + 4) < puVar12 + uVar20) {
          do {
            local_74 = local_74 - 1;
            *(u32 *)puVar12 = *dma_value_18;
            dma_value_18 = (u32 *)((int)dma_value_18 + -4);
            puVar12 = puVar12 + 4;
          } while (local_74 != 0);
        }
        else {
          uVar15 = (uint)((int)((int)dma_value_18 + -0xc) * 0x20000000) >> 0x1f;
          if (local_74 < uVar15) {
            uVar15 = local_74;
          }
          uVar26 = local_74;
          if (uVar15 != 0) {
            *(u32 *)puVar12 = *dma_value_18;
            uVar26 = local_74 - 1;
          }
          puVar12 = puVar12 + uVar15 * 4;
          uVar11 = ((local_74 - uVar15) - 4 >> 2) + 1;
          uVar21 = 0;
          do {
            uVar21 = uVar21 + 1;
            iVar18 = VectorTableLookup(uVar5 * 3,uVar11,2);
            iVar19 = VectorTableLookup(pmVar32,uVar11,2);
            *(undefined8 *)puVar12 = in_d16;
            *(undefined8 *)(puVar12 + 8) = in_d17;
            puVar12 = puVar12 + 0x10;
          } while (uVar21 < uVar11);
          iVar38 = uVar26 + uVar11 * -4;
          iVar16 = iVar19 + uVar11 * 0x10;
          iVar40 = iVar18 + uVar11 * -0x10;
          if (((uVar11 * 4 - (local_74 - uVar15) != 0) &&
              (*(undefined4 *)(iVar19 + uVar11 * 0x10) = *(undefined4 *)(iVar18 + uVar11 * -0x10),
              iVar38 != 1)) &&
             (*(undefined4 *)(iVar16 + 4) = *(undefined4 *)(iVar40 + -4), iVar38 != 2)) {
            *(undefined4 *)(iVar16 + 8) = *(undefined4 *)(iVar40 + -8);
          }
        }
      }
      else {
        if (uVar14 == '\0') {
          uVar14 = pmVar28->store_access;
          dma_value_18 = (u32 *)((pmVar27->load_handler).direct_memory + uVar15);
joined_r0x0801ec40:
          if (uVar14 == '\x01') goto LAB_0801ec44;
          if (uVar14 != '\0') goto LAB_0801deb4;
          p_Var23 = pmVar28->get_code_bitmap_coarse;
          puVar12 = (pmVar28->store_handler).direct_memory + uVar11;
LAB_0801e07c:
          local_7c = local_7c - local_74;
          puVar7 = (*p_Var23)(pmVar36,pmVar28,uVar10);
          puVar6 = (*pmVar28->get_code_bitmap_fine)(pmVar36,pmVar28,uVar10);
          goto LAB_0801df00;
        }
        if (uVar14 != '\x02') {
          uVar14 = pmVar28->store_access;
          dma_value_18 = (u32 *)pmVar36->null_buffer_load;
          goto joined_r0x0801ec40;
        }
        uVar14 = pmVar28->store_access;
        dma_value_18 = (u32 *)(pmVar27->load_handler).extended_function.load32;
        if (uVar14 == '\x01') {
          puVar12 = (*(pmVar28->store_handler).get_pointer)(pmVar36,uVar10);
          puVar7 = (*pmVar28->get_code_bitmap_coarse)(pmVar36,pmVar28,uVar10);
          local_7c = local_7c - local_74;
          puVar6 = (*pmVar28->get_code_bitmap_fine)(pmVar36,pmVar28,uVar10);
LAB_0801ee8c:
          uVar20 = local_74 << 2;
          uVar5 = local_78;
          uVar15 = local_74;
          if (puVar7 != (u32 *)0x0) {
            uVar8 = memory_check_code_region(puVar7,puVar6,uVar10,uVar20);
            local_70 = (u32 *)((uint)local_70 | uVar8);
          }
          do {
            uVar9 = (*(code *)dma_value_18)(pmVar36,pmVar27->mask & uVar5);
            uVar15 = uVar15 - 1;
            *(undefined4 *)puVar12 = uVar9;
            uVar5 = uVar5 - 4;
            puVar12 = puVar12 + 4;
          } while (uVar15 != 0);
LAB_0801d034:
          uVar10 = uVar10 + uVar20;
          local_78 = local_78 + local_74 * -4;
        }
        else {
          if (uVar14 == '\0') {
            local_7c = local_7c - local_74;
            puVar12 = (pmVar28->store_handler).direct_memory + uVar11;
            puVar7 = (*pmVar28->get_code_bitmap_coarse)(pmVar36,pmVar28,uVar10);
            puVar6 = (*pmVar28->get_code_bitmap_fine)(pmVar36,pmVar28,uVar10);
            goto LAB_0801ee8c;
          }
          if (uVar14 != '\x02') {
            local_7c = local_7c - local_74;
            puVar7 = (*pmVar28->get_code_bitmap_coarse)(pmVar36,pmVar28,uVar10);
            puVar6 = (*pmVar28->get_code_bitmap_fine)(pmVar36,pmVar28,uVar10);
            puVar12 = pmVar36->null_buffer_store;
            goto LAB_0801ee8c;
          }
          uVar14 = '\x03';
LAB_0801cf64:
          p_Var33 = (pmVar28->store_handler).extended_function.store32;
          local_7c = local_7c - local_74;
          puVar6 = (*pmVar28->get_code_bitmap_coarse)(pmVar36,pmVar28,uVar10);
          puVar7 = (*pmVar28->get_code_bitmap_fine)(pmVar36,pmVar28,uVar10);
          if (uVar14 == '\x03') {
            uVar5 = local_74;
            uVar15 = local_78;
            uVar26 = uVar10;
            if (puVar6 != (u32 *)0x0) {
              uVar20 = memory_check_code_region(puVar6,puVar7,uVar10,local_74 << 2);
              local_70 = (u32 *)((uint)local_70 | uVar20);
            }
            do {
              uVar20 = (*(code *)dma_value_18)(pmVar36,pmVar27->mask & uVar15);
              (*p_Var33)(pmVar36,pmVar28->mask & uVar26,uVar20);
              uVar5 = uVar5 - 1;
              uVar15 = uVar15 - 4;
              uVar26 = uVar26 + 4;
            } while (uVar5 != 0);
            uVar20 = local_74 * 4;
            goto LAB_0801d034;
          }
          if (puVar6 != (u32 *)0x0) {
            uVar20 = memory_check_code_region(puVar6,puVar7,uVar10,local_74 * 4);
            local_70 = (u32 *)((uint)local_70 | uVar20);
          }
          local_78 = local_78 + local_74 * -4;
          uVar5 = uVar10;
          uVar15 = local_74;
          do {
            uVar26 = pmVar28->mask & uVar5;
            uVar5 = uVar5 + 4;
            (*p_Var33)(pmVar36,uVar26,*dma_value_18);
            uVar15 = uVar15 - 1;
            dma_value_18 = dma_value_18 + -1;
          } while (uVar15 != 0);
          uVar10 = uVar10 + local_74 * 4;
        }
      }
      local_74 = uVar10;
    } while (local_7c != 0);
    break;
  case 5:
switchD_08019c64_caseD_5:
    local_78 = uVar10 & 0xfffffffc;
    local_70 = (u32 *)0x0;
    do {
      uVar10 = local_74 >> 0x17;
      pmVar32 = dma->memory_regions;
      pmVar27 = pmVar32 + (local_78 >> 0x17);
      pmVar28 = pmVar32 + uVar10;
      uVar15 = local_78 & pmVar32[local_78 >> 0x17].mask;
      uVar5 = local_7c;
      if (pmVar32[local_78 >> 0x17].mask < uVar15 + local_7c * -4) {
        uVar5 = (uVar15 >> 2) + 1;
      }
      uVar26 = local_74 & pmVar32[uVar10].mask;
      uVar14 = pmVar27->load_access;
      if (pmVar32[uVar10].mask < uVar26 + uVar5 * -4) {
        uVar5 = (uVar26 >> 2) + 1;
      }
      if (uVar14 == '\x01') {
        puVar12 = (*(pmVar27->load_handler).get_pointer)(pmVar36,local_78);
        uVar14 = pmVar28->store_access;
        if (uVar14 == '\x01') goto LAB_0801e888;
        if (uVar14 == '\0') {
          p_Var23 = pmVar28->get_code_bitmap_coarse;
          puVar35 = (pmVar28->store_handler).direct_memory + (local_74 & pmVar32[uVar10].mask);
LAB_0801e1c0:
          local_7c = local_7c - uVar5;
          puVar7 = (*p_Var23)(pmVar36,pmVar28,local_74);
          puVar6 = (*pmVar28->get_code_bitmap_fine)(pmVar36,pmVar28,local_74);
        }
        else {
          if (uVar14 == '\x02') {
            uVar14 = '\x02';
            goto LAB_0801d110;
          }
LAB_0801e82c:
          local_7c = local_7c - uVar5;
          puVar7 = (*pmVar28->get_code_bitmap_coarse)(pmVar36,pmVar28,local_74);
          puVar6 = (*pmVar28->get_code_bitmap_fine)(pmVar36,pmVar28,local_74);
          puVar35 = pmVar36->null_buffer_store;
        }
LAB_0801e1dc:
        if (puVar7 != (u32 *)0x0) {
          uVar20 = memory_check_code_region(puVar7,puVar6,local_74,uVar5 * 4);
          local_70 = (u32 *)((uint)local_70 | uVar20);
        }
        local_78 = local_78 + uVar5 * -4;
        local_74 = local_74 + uVar5 * -4;
        if (uVar5 < 0xc || puVar12 + -0xc < puVar35 + 4 && puVar35 + -0xc < puVar12 + 4) {
          do {
            puVar13 = puVar12 + -4;
            puVar34 = puVar35 + -4;
            *(u32 *)puVar35 = *(u32 *)puVar12;
            if (uVar5 == 1) break;
            puVar12 = puVar12 + -8;
            uVar5 = uVar5 - 2;
            puVar35 = puVar35 + -8;
            *(u32 *)puVar34 = *(u32 *)puVar13;
          } while (uVar5 != 0);
        }
        else {
          uVar10 = (uint)((int)(puVar12 + -0xc) * 0x20000000) >> 0x1f;
          if (uVar5 < uVar10) {
            uVar10 = uVar5;
          }
          uVar15 = uVar5;
          puVar34 = puVar35;
          puVar13 = puVar12;
          if (uVar10 != 0) {
            *(u32 *)puVar35 = *(u32 *)puVar12;
            uVar15 = uVar5 - 1;
            puVar34 = puVar35 + -4;
            puVar13 = puVar12 + -4;
          }
          uVar11 = ((uVar5 - uVar10) - 4 >> 2) + 1;
          puVar35 = puVar35 + uVar10 * -4 + -0xc;
          puVar12 = puVar12 + uVar10 * -4 + -0x1c;
          uVar26 = 0;
          do {
            puVar1 = puVar12 + 0x10;
            uVar43 = *(undefined8 *)(puVar12 + 0x18);
            uVar26 = uVar26 + 1;
            puVar12 = puVar12 + -0x10;
            *(undefined8 *)puVar35 = *(undefined8 *)puVar1;
            *(undefined8 *)(puVar35 + 8) = uVar43;
            puVar35 = puVar35 + -0x10;
          } while (uVar26 < uVar11);
          iVar19 = uVar15 + uVar11 * -4;
          iVar18 = uVar11 * -0x10;
          if (((uVar11 * 4 - (uVar5 - uVar10) != 0) &&
              (*(undefined4 *)(puVar34 + iVar18) = *(undefined4 *)(puVar13 + iVar18), iVar19 != 1))
             && (*(undefined4 *)(puVar34 + iVar18 + -4) = *(undefined4 *)(puVar13 + iVar18 + -4),
                iVar19 != 2)) {
            *(undefined4 *)(puVar34 + iVar18 + -8) = *(undefined4 *)(puVar13 + iVar18 + -8);
          }
        }
      }
      else if (uVar14 == '\0') {
        uVar14 = pmVar28->store_access;
        puVar12 = (pmVar27->load_handler).direct_memory + uVar15;
        if (uVar14 == '\x01') goto LAB_0801e888;
LAB_0801e820:
        if (uVar14 == '\0') {
          p_Var23 = pmVar28->get_code_bitmap_coarse;
          puVar35 = (pmVar28->store_handler).direct_memory + uVar26;
          goto LAB_0801e1c0;
        }
        if (uVar14 != '\x02') goto LAB_0801e82c;
LAB_0801d110:
        p_Var33 = (pmVar28->store_handler).extended_function.store32;
        local_7c = local_7c - uVar5;
        puVar6 = (*pmVar28->get_code_bitmap_coarse)(pmVar36,pmVar28,local_74);
        puVar7 = (*pmVar28->get_code_bitmap_fine)(pmVar36,pmVar28,local_74);
        if (uVar14 == '\x03') {
          if (puVar6 != (u32 *)0x0) {
            uVar20 = memory_check_code_region(puVar6,puVar7,local_74,uVar5 * 4);
            local_70 = (u32 *)((uint)local_70 | uVar20);
          }
          uVar10 = uVar5;
          uVar15 = local_78;
          do {
            uVar26 = pmVar27->mask & uVar15;
            uVar11 = (local_74 - local_78) + uVar15;
            uVar15 = uVar15 - 4;
            uVar20 = (*(code *)puVar12)(pmVar36,uVar26);
            (*p_Var33)(pmVar36,pmVar28->mask & uVar11,uVar20);
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
          local_78 = local_78 + uVar5 * -4;
          local_74 = local_74 + uVar5 * -4;
        }
        else {
          if (puVar6 != (u32 *)0x0) {
            uVar20 = memory_check_code_region(puVar6,puVar7,local_74,uVar5 * 4);
            local_70 = (u32 *)((uint)local_70 | uVar20);
          }
          local_78 = local_78 + uVar5 * -4;
          uVar10 = uVar5;
          puVar35 = puVar12;
          do {
            (*p_Var33)(pmVar36,(uint)(puVar35 + (local_74 - (int)puVar12)) & pmVar28->mask,
                       *(u32 *)puVar35);
            uVar10 = uVar10 - 1;
            puVar35 = puVar35 + -4;
          } while (uVar10 != 0);
          local_74 = local_74 + uVar5 * -4;
        }
      }
      else {
        if (uVar14 != '\x02') {
          uVar14 = pmVar28->store_access;
          puVar12 = pmVar36->null_buffer_load;
          if (uVar14 != '\x01') goto LAB_0801e820;
LAB_0801e888:
          puVar35 = (*(pmVar28->store_handler).get_pointer)(pmVar36,local_74);
          puVar7 = (*pmVar28->get_code_bitmap_coarse)(pmVar36,pmVar28,local_74);
          local_7c = local_7c - uVar5;
          puVar6 = (*pmVar28->get_code_bitmap_fine)(pmVar36,pmVar28,local_74);
          goto LAB_0801e1dc;
        }
        uVar14 = pmVar28->store_access;
        puVar12 = (u8 *)(pmVar27->load_handler).extended_function.load32;
        if (uVar14 == '\x01') {
          puVar35 = (*(pmVar28->store_handler).get_pointer)(pmVar36,local_74);
          puVar7 = (*pmVar28->get_code_bitmap_coarse)(pmVar36,pmVar28,local_74);
          local_7c = local_7c - uVar5;
          puVar6 = (*pmVar28->get_code_bitmap_fine)(pmVar36,pmVar28,local_74);
        }
        else if (uVar14 == '\0') {
          local_7c = local_7c - uVar5;
          puVar35 = (pmVar28->store_handler).direct_memory + uVar26;
          puVar7 = (*pmVar28->get_code_bitmap_coarse)(pmVar36,pmVar28,local_74);
          puVar6 = (*pmVar28->get_code_bitmap_fine)(pmVar36,pmVar28,local_74);
        }
        else {
          if (uVar14 == '\x02') {
            uVar14 = '\x03';
            goto LAB_0801d110;
          }
          local_7c = local_7c - uVar5;
          puVar7 = (*pmVar28->get_code_bitmap_coarse)(pmVar36,pmVar28,local_74);
          puVar6 = (*pmVar28->get_code_bitmap_fine)(pmVar36,pmVar28,local_74);
          puVar35 = pmVar36->null_buffer_store;
        }
        if (puVar7 != (u32 *)0x0) {
          uVar20 = memory_check_code_region(puVar7,puVar6,local_74,uVar5 * 4);
          local_70 = (u32 *)((uint)local_70 | uVar20);
        }
        local_74 = local_74 + uVar5 * -4;
        uVar10 = uVar5;
        puVar34 = puVar35;
        do {
          uVar9 = (*(code *)puVar12)(pmVar36,(uint)(puVar34 + (local_78 - (int)puVar35)) &
                                             pmVar27->mask);
          uVar10 = uVar10 - 1;
          *(undefined4 *)puVar34 = uVar9;
          puVar34 = puVar34 + -4;
        } while (uVar10 != 0);
        local_78 = local_78 + uVar5 * -4;
      }
    } while (local_7c != 0);
    break;
  case 6:
switchD_08019c64_caseD_6:
    local_78 = uVar10 & 0xfffffffc;
    uVar10 = local_74 >> 0x17;
    local_70 = (u32 *)0x0;
    do {
      uVar5 = local_7c;
      pmVar32 = dma->memory_regions;
      pmVar28 = pmVar32 + uVar10;
      pmVar27 = pmVar32 + (local_78 >> 0x17);
      uVar15 = local_78 & pmVar32[local_78 >> 0x17].mask;
      if (pmVar32[local_78 >> 0x17].mask < uVar15 + local_7c * -4) {
        uVar5 = (uVar15 >> 2) + 1;
        local_7c = local_7c - uVar5;
        uVar14 = pmVar27->load_access;
        if (uVar14 != '\x01') goto LAB_0801d288;
LAB_0801db38:
        dma_value_27 = (u32 *)(*(pmVar27->load_handler).get_pointer)(pmVar36,local_78);
        uVar14 = pmVar28->store_access;
joined_r0x0801ebe4:
        if (uVar14 == '\x01') {
          puVar12 = (*(pmVar28->store_handler).get_pointer)(pmVar36,local_74);
          p_Var23 = pmVar28->get_code_bitmap_coarse;
        }
        else if (uVar14 == '\0') {
          p_Var23 = pmVar28->get_code_bitmap_coarse;
          puVar12 = (pmVar28->store_handler).direct_memory + (local_74 & pmVar32[uVar10].mask);
        }
        else {
          if (uVar14 == '\x02') {
            local_44 = 2;
            goto LAB_0801d2b8;
          }
          p_Var23 = pmVar28->get_code_bitmap_coarse;
          puVar12 = pmVar36->null_buffer_store;
        }
        puVar6 = (*p_Var23)(pmVar36,pmVar28,local_74);
        puVar7 = (*pmVar28->get_code_bitmap_fine)(pmVar36,pmVar28,local_74);
        if (puVar6 != (u32 *)0x0) {
          uVar20 = memory_check_code_region(puVar6,puVar7,local_74,uVar5 * 4);
          local_70 = (u32 *)((uint)local_70 | uVar20);
        }
        local_78 = local_78 + uVar5 * -4;
        do {
          uVar5 = uVar5 - 1;
          *(u32 *)puVar12 = *dma_value_27;
          dma_value_27 = (u32 *)((int)dma_value_27 + -4);
        } while (uVar5 != 0);
      }
      else {
        local_7c = 0;
        uVar14 = pmVar27->load_access;
        if (uVar14 == '\x01') goto LAB_0801db38;
LAB_0801d288:
        if (uVar14 == '\0') {
          uVar14 = pmVar28->store_access;
          dma_value_27 = (u32 *)((pmVar27->load_handler).direct_memory + uVar15);
          goto joined_r0x0801ebe4;
        }
        if (uVar14 != '\x02') {
          uVar14 = pmVar28->store_access;
          dma_value_27 = (u32 *)pmVar36->null_buffer_load;
          goto joined_r0x0801ebe4;
        }
        uVar14 = pmVar28->store_access;
        dma_value_27 = (u32 *)(pmVar27->load_handler).extended_function.load32;
        if (uVar14 == '\x01') {
          puVar12 = (*(pmVar28->store_handler).get_pointer)(pmVar36,local_74);
          p_Var23 = pmVar28->get_code_bitmap_coarse;
LAB_0801ef14:
          puVar6 = (*p_Var23)(pmVar36,pmVar28,local_74);
          puVar7 = (*pmVar28->get_code_bitmap_fine)(pmVar36,pmVar28,local_74);
          local_44 = uVar5 << 2;
          uVar15 = local_78;
          if (puVar6 != (u32 *)0x0) {
            uVar20 = memory_check_code_region(puVar6,puVar7,local_74,local_44);
            local_70 = (u32 *)((uint)local_70 | uVar20);
          }
          do {
            uVar9 = (*(code *)dma_value_27)(pmVar36,pmVar27->mask & uVar15);
            uVar5 = uVar5 - 1;
            *(undefined4 *)puVar12 = uVar9;
            uVar15 = uVar15 - 4;
          } while (uVar5 != 0);
        }
        else {
          if (uVar14 == '\0') {
            p_Var23 = pmVar28->get_code_bitmap_coarse;
            puVar12 = (pmVar28->store_handler).direct_memory + (local_74 & pmVar32[uVar10].mask);
            goto LAB_0801ef14;
          }
          if (uVar14 != '\x02') {
            p_Var23 = pmVar28->get_code_bitmap_coarse;
            puVar12 = pmVar36->null_buffer_store;
            goto LAB_0801ef14;
          }
          local_44 = 3;
LAB_0801d2b8:
          p_Var33 = (pmVar28->store_handler).extended_function.store32;
          puVar6 = (*pmVar28->get_code_bitmap_coarse)(pmVar36,pmVar28,local_74);
          puVar7 = (*pmVar28->get_code_bitmap_fine)(pmVar36,pmVar28,local_74);
          if (local_44 != 3) {
            if (puVar6 != (u32 *)0x0) {
              uVar20 = memory_check_code_region(puVar6,puVar7,local_74,uVar5 * 4);
              local_70 = (u32 *)((uint)local_70 | uVar20);
            }
            local_78 = local_78 + uVar5 * -4;
            do {
              (*p_Var33)(pmVar36,pmVar28->mask & local_74,*dma_value_27);
              uVar5 = uVar5 - 1;
              dma_value_27 = dma_value_27 + -1;
            } while (uVar5 != 0);
            goto LAB_0801d364;
          }
          local_44 = uVar5 << 2;
          uVar15 = local_78;
          if (puVar6 != (u32 *)0x0) {
            uVar20 = memory_check_code_region(puVar6,puVar7,local_74,local_44);
            local_70 = (u32 *)((uint)local_70 | uVar20);
          }
          do {
            uVar20 = (*(code *)dma_value_27)(pmVar36,pmVar27->mask & uVar15);
            (*p_Var33)(pmVar36,pmVar28->mask & local_74,uVar20);
            uVar5 = uVar5 - 1;
            uVar15 = uVar15 - 4;
          } while (uVar5 != 0);
        }
        local_78 = local_78 - local_44;
      }
LAB_0801d364:
    } while (local_7c != 0);
    break;
  case 8:
  case 0xb:
switchD_08019c64_caseD_8:
    local_78 = uVar10 & 0xfffffffc;
    local_70 = (u32 *)0x0;
    do {
      uVar15 = local_7c;
      uVar5 = local_74 >> 0x17;
      pmVar32 = dma->memory_regions;
      uVar26 = pmVar32[uVar5].mask;
      pmVar27 = pmVar32 + uVar5;
      pmVar28 = pmVar32 + (uVar10 >> 0x17);
      uVar11 = local_74 & uVar26;
      if (uVar26 < uVar11 + local_7c * 4) {
        uVar15 = (uVar26 + 1) - uVar11 >> 2;
        local_7c = local_7c - uVar15;
        uVar14 = pmVar28->load_access;
        if (uVar14 != '\x01') goto LAB_0801d870;
LAB_0801dbe8:
        puVar12 = (*(pmVar28->load_handler).get_pointer)(pmVar36,local_78);
        uVar14 = pmVar27->store_access;
        if (uVar14 == '\x01') goto LAB_0801ee1c;
        if (uVar14 != '\0') goto LAB_0801dc0c;
        p_Var23 = pmVar27->get_code_bitmap_coarse;
        puVar35 = (pmVar27->store_handler).direct_memory + (local_74 & pmVar32[uVar5].mask);
LAB_0801dc30:
        puVar6 = (*p_Var23)(pmVar36,pmVar27,local_74);
        puVar7 = (*pmVar27->get_code_bitmap_fine)(pmVar36,pmVar27,local_74);
        uVar20 = uVar15 * 4;
        if (puVar6 != (u32 *)0x0) {
          uVar8 = memory_check_code_region(puVar6,puVar7,local_74,uVar20);
          local_70 = (u32 *)((uint)local_70 | uVar8);
        }
        local_74 = local_74 + uVar20;
        if (uVar15 < 0xc || puVar35 < puVar12 + 4 && puVar12 < puVar35 + uVar20) {
          do {
            puVar34 = puVar35 + 4;
            *(u32 *)puVar35 = *(u32 *)puVar12;
            if (uVar15 == 1) break;
            uVar15 = uVar15 - 2;
            puVar35 = puVar35 + 8;
            *(u32 *)puVar34 = *(u32 *)puVar12;
          } while (uVar15 != 0);
        }
        else {
          uVar5 = ((int)puVar35 << 0x1d) >> 0x1f & 3;
          if (uVar15 <= uVar5) {
            uVar5 = uVar15;
          }
          uVar26 = uVar15;
          puVar34 = puVar35;
          if (uVar5 != 0) {
            *(u32 *)puVar35 = *(u32 *)puVar12;
            uVar26 = uVar15 - 1;
            puVar34 = puVar35 + 4;
            if (uVar5 != 1) {
              *(u32 *)(puVar35 + 4) = *(u32 *)puVar12;
              uVar26 = uVar15 - 2;
              puVar34 = puVar35 + 8;
              if (uVar5 == 3) {
                *(u32 *)(puVar35 + 8) = *(u32 *)puVar12;
                uVar26 = uVar15 - 3;
                puVar34 = puVar35 + 0xc;
              }
            }
          }
          uVar43 = CONCAT44(*(u32 *)puVar12,*(u32 *)puVar12);
          uVar11 = 0;
          uVar21 = ((uVar15 - uVar5) - 4 >> 2) + 1;
          puVar35 = puVar35 + uVar5 * 4;
          do {
            uVar11 = uVar11 + 1;
            *(undefined8 *)puVar35 = uVar43;
            *(undefined8 *)(puVar35 + 8) = uVar43;
            puVar35 = puVar35 + 0x10;
          } while (uVar11 < uVar21);
          iVar18 = uVar26 + uVar21 * -4;
          if (((uVar21 * 4 - (uVar15 - uVar5) != 0) &&
              (*(u32 *)(puVar34 + uVar21 * 0x10) = *(u32 *)puVar12, iVar18 != 1)) &&
             (*(u32 *)(puVar34 + uVar21 * 0x10 + 4) = *(u32 *)puVar12, iVar18 != 2)) {
            *(u32 *)(puVar34 + uVar21 * 0x10 + 8) = *(u32 *)puVar12;
          }
        }
      }
      else {
        local_7c = 0;
        uVar14 = pmVar28->load_access;
        if (uVar14 == '\x01') goto LAB_0801dbe8;
LAB_0801d870:
        if (uVar14 == '\0') {
          uVar14 = pmVar27->store_access;
          puVar12 = (pmVar28->load_handler).direct_memory +
                    (pmVar32[uVar10 >> 0x17].mask & local_78);
          if (uVar14 == '\x01') goto LAB_0801ee1c;
LAB_0801edd4:
          if (uVar14 == '\0') {
            p_Var23 = pmVar27->get_code_bitmap_coarse;
            puVar35 = (pmVar27->store_handler).direct_memory + uVar11;
          }
          else {
LAB_0801dc0c:
            if (uVar14 == '\x02') {
LAB_0801d89c:
              p_Var33 = (pmVar27->store_handler).extended_function.store32;
              puVar6 = (*pmVar27->get_code_bitmap_coarse)(pmVar36,pmVar27,local_74);
              puVar7 = (*pmVar27->get_code_bitmap_fine)(pmVar36,pmVar27,local_74);
              if (uVar14 == '\x03') {
                uVar5 = local_74;
                uVar26 = uVar15;
                if (puVar6 != (u32 *)0x0) {
                  uVar20 = memory_check_code_region(puVar6,puVar7,local_74,uVar15 << 2);
                  local_70 = (u32 *)((uint)local_70 | uVar20);
                }
                do {
                  uVar20 = (*(code *)puVar12)(pmVar36,pmVar28->mask & local_78);
                  (*p_Var33)(pmVar36,pmVar27->mask & uVar5,uVar20);
                  uVar26 = uVar26 - 1;
                  uVar5 = uVar5 + 4;
                } while (uVar26 != 0);
              }
              else {
                uVar5 = local_74;
                uVar26 = uVar15;
                if (puVar6 != (u32 *)0x0) {
                  uVar20 = memory_check_code_region(puVar6,puVar7,local_74,uVar15 << 2);
                  local_70 = (u32 *)((uint)local_70 | uVar20);
                }
                do {
                  (*p_Var33)(pmVar36,pmVar27->mask & uVar5,*(u32 *)puVar12);
                  uVar26 = uVar26 - 1;
                  uVar5 = uVar5 + 4;
                } while (uVar26 != 0);
              }
              local_74 = local_74 + uVar15 * 4;
              goto LAB_0801d958;
            }
            p_Var23 = pmVar27->get_code_bitmap_coarse;
            puVar35 = pmVar36->null_buffer_store;
          }
          goto LAB_0801dc30;
        }
        if (uVar14 != '\x02') {
          uVar14 = pmVar27->store_access;
          puVar12 = pmVar36->null_buffer_load;
          if (uVar14 != '\x01') goto LAB_0801edd4;
LAB_0801ee1c:
          puVar35 = (*(pmVar27->store_handler).get_pointer)(pmVar36,local_74);
          p_Var23 = pmVar27->get_code_bitmap_coarse;
          goto LAB_0801dc30;
        }
        uVar14 = pmVar27->store_access;
        puVar12 = (u8 *)(pmVar28->load_handler).extended_function.load32;
        if (uVar14 == '\x01') {
          puVar35 = (*(pmVar27->store_handler).get_pointer)(pmVar36,local_74);
          p_Var23 = pmVar27->get_code_bitmap_coarse;
        }
        else if (uVar14 == '\0') {
          p_Var23 = pmVar27->get_code_bitmap_coarse;
          puVar35 = (pmVar27->store_handler).direct_memory + uVar11;
        }
        else {
          if (uVar14 == '\x02') {
            uVar14 = '\x03';
            goto LAB_0801d89c;
          }
          p_Var23 = pmVar27->get_code_bitmap_coarse;
          puVar35 = pmVar36->null_buffer_store;
        }
        puVar6 = (*p_Var23)(pmVar36,pmVar27,local_74);
        puVar7 = (*pmVar27->get_code_bitmap_fine)(pmVar36,pmVar27,local_74);
        if (puVar6 != (u32 *)0x0) {
          uVar20 = memory_check_code_region(puVar6,puVar7,local_74,uVar15 * 4);
          local_70 = (u32 *)((uint)local_70 | uVar20);
        }
        local_74 = local_74 + uVar15 * 4;
        do {
          uVar9 = (*(code *)puVar12)(pmVar36,pmVar28->mask & local_78);
          uVar15 = uVar15 - 1;
          *(undefined4 *)puVar35 = uVar9;
          puVar35 = puVar35 + 4;
        } while (uVar15 != 0);
      }
LAB_0801d958:
    } while (local_7c != 0);
    break;
  case 9:
switchD_08019c64_caseD_9:
    local_78 = uVar10 & 0xfffffffc;
    puVar12 = pmVar36->null_buffer_load;
    local_70 = (u32 *)0x0;
    uVar5 = local_74;
    do {
      uVar26 = local_7c;
      uVar15 = uVar5 >> 0x17;
      pmVar32 = dma->memory_regions;
      pmVar28 = pmVar32 + (uVar10 >> 0x17);
      pmVar27 = pmVar32 + uVar15;
      uVar11 = uVar5 & pmVar32[uVar15].mask;
      if (pmVar32[uVar15].mask < uVar11 + local_7c * -4) {
        uVar26 = (uVar11 >> 2) + 1;
        local_7c = local_7c - uVar26;
        uVar14 = pmVar28->load_access;
        if (uVar14 != '\x01') goto LAB_0801cc28;
LAB_0801db90:
        puVar35 = (*(pmVar28->load_handler).get_pointer)(pmVar36,local_78);
        uVar14 = pmVar27->store_access;
        if (uVar14 == '\x01') goto LAB_0801f608;
        if (uVar14 == '\0') {
          p_Var23 = pmVar27->get_code_bitmap_coarse;
          puVar34 = (pmVar27->store_handler).direct_memory + (uVar5 & pmVar32[uVar15].mask);
        }
        else {
LAB_0801dbb4:
          if (uVar14 == '\x02') {
            local_74 = 2;
            goto LAB_0801cc58;
          }
LAB_0801f5ec:
          p_Var23 = pmVar27->get_code_bitmap_coarse;
          puVar34 = pmVar36->null_buffer_store;
        }
LAB_0801e6b8:
        puVar6 = (*p_Var23)(pmVar36,pmVar27,uVar5);
        puVar7 = (*pmVar27->get_code_bitmap_fine)(pmVar36,pmVar27,uVar5);
        if (puVar6 != (u32 *)0x0) {
          uVar20 = memory_check_code_region(puVar6,puVar7,uVar5,uVar26 * 4);
          local_70 = (u32 *)((uint)local_70 | uVar20);
        }
        bVar42 = puVar35 <= puVar34 + 4;
        bVar41 = puVar34 + 4 == puVar35;
        if (bVar42 && !bVar41) {
          bVar42 = puVar34 + uVar26 * -4 + 4 <= puVar35 + 4;
          bVar41 = puVar35 + 4 == puVar34 + uVar26 * -4 + 4;
        }
        uVar5 = uVar5 + uVar26 * -4;
        uVar20 = (u32)(!bVar42 || bVar41);
        if (uVar26 < 0xc) {
          uVar20 = 0;
        }
        if (uVar20 == 0) {
          do {
            puVar13 = puVar34 + -4;
            *(u32 *)puVar34 = *(u32 *)puVar35;
            if (uVar26 == 1) break;
            uVar26 = uVar26 - 2;
            puVar34 = puVar34 + -8;
            *(u32 *)puVar13 = *(u32 *)puVar35;
          } while (uVar26 != 0);
        }
        else {
          uVar15 = (uint)((int)(puVar34 + -0xc) * 0x20000000) >> 0x1f;
          uVar11 = 0;
          if (uVar26 < uVar15) {
            uVar15 = uVar26;
          }
          uVar21 = uVar26;
          if (uVar15 != 0) {
            uVar20 = *(u32 *)puVar35;
            uVar21 = uVar26 - 1;
          }
          puVar13 = puVar34;
          if (uVar15 != 0) {
            puVar13 = puVar34 + -4;
            *(u32 *)puVar34 = uVar20;
          }
          uVar43 = CONCAT44(*(u32 *)puVar35,*(u32 *)puVar35);
          uVar22 = ((uVar26 - uVar15) - 4 >> 2) + 1;
          puVar34 = puVar34 + uVar15 * -4 + -0x1c;
          do {
            uVar11 = uVar11 + 1;
            *(undefined8 *)(puVar34 + 0x10) = uVar43;
            *(undefined8 *)(puVar34 + 0x18) = uVar43;
            puVar34 = puVar34 + -0x10;
          } while (uVar11 < uVar22);
          iVar19 = uVar21 + uVar22 * -4;
          iVar18 = uVar22 * -0x10;
          if (((uVar22 * 4 - (uVar26 - uVar15) != 0) &&
              (*(u32 *)(puVar13 + iVar18) = *(u32 *)puVar35, iVar19 != 1)) &&
             (*(u32 *)(puVar13 + iVar18 + -4) = *(u32 *)puVar35, iVar19 != 2)) {
            *(u32 *)(puVar13 + iVar18 + -8) = *(u32 *)puVar35;
          }
        }
      }
      else {
        local_7c = 0;
        uVar14 = pmVar28->load_access;
        if (uVar14 == '\x01') goto LAB_0801db90;
LAB_0801cc28:
        if (uVar14 == '\0') {
          uVar14 = pmVar27->store_access;
          puVar35 = (pmVar28->load_handler).direct_memory +
                    (pmVar32[uVar10 >> 0x17].mask & local_78);
          if (uVar14 == '\x01') goto LAB_0801f608;
          if (uVar14 == '\0') goto LAB_0801ecfc;
          if (uVar14 != '\x02') goto LAB_0801f5ec;
          local_74 = 2;
LAB_0801cc58:
          p_Var33 = (pmVar27->store_handler).extended_function.store32;
          puVar6 = (*pmVar27->get_code_bitmap_coarse)(pmVar36,pmVar27,uVar5);
          puVar7 = (*pmVar27->get_code_bitmap_fine)(pmVar36,pmVar27,uVar5);
          if (local_74 == 3) {
            uVar15 = uVar26;
            uVar11 = uVar5;
            if (puVar6 != (u32 *)0x0) {
              uVar20 = memory_check_code_region(puVar6,puVar7,uVar5,uVar26 << 2);
              local_70 = (u32 *)((uint)local_70 | uVar20);
            }
            do {
              uVar20 = (*(code *)puVar35)(pmVar36,pmVar28->mask & local_78);
              (*p_Var33)(pmVar36,pmVar27->mask & uVar11,uVar20);
              uVar15 = uVar15 - 1;
              uVar11 = uVar11 - 4;
            } while (uVar15 != 0);
          }
          else {
            uVar15 = uVar26;
            uVar11 = uVar5;
            if (puVar6 != (u32 *)0x0) {
              uVar20 = memory_check_code_region(puVar6,puVar7,uVar5,uVar26 << 2);
              local_70 = (u32 *)((uint)local_70 | uVar20);
            }
            do {
              (*p_Var33)(pmVar36,pmVar27->mask & uVar11,*(u32 *)puVar35);
              uVar15 = uVar15 - 1;
              uVar11 = uVar11 - 4;
            } while (uVar15 != 0);
          }
          uVar5 = uVar5 + uVar26 * -4;
        }
        else {
          if (uVar14 != '\x02') {
            uVar14 = pmVar27->store_access;
            puVar35 = puVar12;
            if (uVar14 != '\x01') {
              if (uVar14 != '\0') goto LAB_0801dbb4;
LAB_0801ecfc:
              p_Var23 = pmVar27->get_code_bitmap_coarse;
              puVar34 = (pmVar27->store_handler).direct_memory + uVar11;
              goto LAB_0801e6b8;
            }
LAB_0801f608:
            puVar34 = (*(pmVar27->store_handler).get_pointer)(pmVar36,uVar5);
            p_Var23 = pmVar27->get_code_bitmap_coarse;
            goto LAB_0801e6b8;
          }
          uVar14 = pmVar27->store_access;
          puVar35 = (u8 *)(pmVar28->load_handler).extended_function.load32;
          if (uVar14 == '\x01') {
            puVar34 = (*(pmVar27->store_handler).get_pointer)(pmVar36,uVar5);
            p_Var23 = pmVar27->get_code_bitmap_coarse;
          }
          else if (uVar14 == '\0') {
            p_Var23 = pmVar27->get_code_bitmap_coarse;
            puVar34 = (pmVar27->store_handler).direct_memory + uVar11;
          }
          else {
            if (uVar14 == '\x02') {
              local_74 = 3;
              goto LAB_0801cc58;
            }
            p_Var23 = pmVar27->get_code_bitmap_coarse;
            puVar34 = pmVar36->null_buffer_store;
          }
          puVar6 = (*p_Var23)(pmVar36,pmVar27,uVar5);
          puVar7 = (*pmVar27->get_code_bitmap_fine)(pmVar36,pmVar27,uVar5);
          if (puVar6 != (u32 *)0x0) {
            uVar20 = memory_check_code_region(puVar6,puVar7,uVar5,uVar26 * 4);
            local_70 = (u32 *)((uint)local_70 | uVar20);
          }
          uVar5 = uVar5 + uVar26 * -4;
          do {
            uVar9 = (*(code *)puVar35)(pmVar36,pmVar28->mask & local_78);
            uVar26 = uVar26 - 1;
            *(undefined4 *)puVar34 = uVar9;
            puVar34 = puVar34 + -4;
          } while (uVar26 != 0);
        }
      }
      local_74 = uVar5;
    } while (local_7c != 0);
    break;
  case 10:
switchD_08019c64_caseD_a:
    local_78 = uVar10 & 0xfffffffc;
    pmVar32 = dma->memory_regions;
    pmVar28 = pmVar32 + (uVar10 >> 0x17);
    uVar14 = pmVar28->load_access;
    pmVar27 = pmVar32 + (local_74 >> 0x17);
    if (uVar14 == '\x01') {
      iVar18 = 0;
      puVar12 = (*(pmVar28->load_handler).get_pointer)(pmVar36,local_78);
      iVar19 = 2;
    }
    else if (uVar14 == '\0') {
      iVar19 = 2;
      iVar18 = 0;
      puVar12 = (pmVar28->load_handler).direct_memory + (pmVar32[uVar10 >> 0x17].mask & local_78);
    }
    else if (uVar14 == '\x02') {
      puVar12 = (u8 *)(pmVar28->load_handler).extended_function.load32;
      iVar19 = 3;
      iVar18 = 1;
    }
    else {
      iVar19 = 2;
      puVar12 = pmVar36->null_buffer_load;
      iVar18 = 0;
    }
    uVar14 = pmVar27->store_access;
    if (uVar14 == '\x01') {
      puVar35 = (*(pmVar27->store_handler).get_pointer)(pmVar36,local_74);
    }
    else if (uVar14 == '\0') {
      puVar35 = (pmVar27->store_handler).direct_memory + (pmVar32[local_74 >> 0x17].mask & local_74)
      ;
    }
    else if (uVar14 == '\x02') {
      puVar35 = (u8 *)(pmVar27->store_handler).extended_function.store32;
      iVar18 = iVar19;
    }
    else {
      puVar35 = pmVar36->null_buffer_store;
    }
    local_70 = (*pmVar27->get_code_bitmap_coarse)(pmVar36,pmVar27,local_74);
    puVar6 = (*pmVar27->get_code_bitmap_fine)(pmVar36,pmVar27,local_74);
    if (iVar18 == 2) {
      if (local_70 != (u32 *)0x0) {
        local_70 = (u32 *)memory_check_code_region(local_70,puVar6,local_74,local_7c << 2);
      }
      do {
        (*(code *)puVar35)(pmVar36,pmVar27->mask & local_74,*(undefined4 *)puVar12);
        local_7c = local_7c - 1;
      } while (local_7c != 0);
    }
    else if (iVar18 == 3) {
      if (local_70 != (u32 *)0x0) {
        local_70 = (u32 *)memory_check_code_region(local_70,puVar6,local_74,local_7c << 2);
      }
      do {
        uVar9 = (*(code *)puVar12)(pmVar36,pmVar28->mask & local_78);
        (*(code *)puVar35)(pmVar36,pmVar27->mask & local_74,uVar9);
        local_7c = local_7c - 1;
      } while (local_7c != 0);
    }
    else if (iVar18 == 1) {
      if (local_70 != (u32 *)0x0) {
        local_70 = (u32 *)memory_check_code_region(local_70,puVar6,local_74,local_7c << 2);
      }
      do {
        uVar9 = (*(code *)puVar12)(pmVar36,pmVar28->mask & local_78);
        local_7c = local_7c - 1;
        *(undefined4 *)puVar35 = uVar9;
      } while (local_7c != 0);
    }
    else {
      if (local_70 != (u32 *)0x0) {
        local_70 = (u32 *)memory_check_code_region(local_70,puVar6,local_74,local_7c << 2);
      }
      do {
        local_7c = local_7c - 1;
        *(undefined4 *)puVar35 = *(undefined4 *)puVar12;
      } while (local_7c != 0);
    }
    break;
  default:
    local_70 = (u32 *)0x0;
    goto LAB_0801af48;
  }
LAB_08019f44:
  local_5c = uVar24 >> 0x15;
  if (uVar39 == 0 || pcVar17->type != '\x01') {
LAB_0801af48:
    if ((uVar24 & 0x2000000) == 0) {
      uVar24 = uVar24 & 0x7fffffff;
      dma_channel->control = uVar24;
      dma_channel->io_region[2] = uVar24;
    }
    local_5c = uVar24 >> 0x15;
    if ((uVar24 & 0x40000000) != 0) {
      puVar12 = dma_channel->cpu->io_region;
      uVar10 = *(uint *)(puVar12 + 0x214) | 0x100 << dma_channel->channel_number;
      *(uint *)(puVar12 + 0x214) = uVar10;
      pcVar17 = dma_channel->cpu;
      if ((pcVar17->state & 6) == 0) {
        uVar20 = uVar10 & *(uint *)(puVar12 + 0x210) & -*(int *)(puVar12 + 0x208);
        pcVar17->active_interrupts = uVar20;
      }
      else {
        uVar20 = pcVar17->active_interrupts;
      }
      if (uVar20 != 0) {
        pcVar17->alert_flags = pcVar17->alert_flags | 2;
      }
    }
  }
  else {
    if (dma_channel->event_scheduled != '\0') {
      remove_event(&psVar37->event_list,dma_channel->channel_number + 0xc);
    }
    dma_channel->event_scheduled = '\x01';
    uVar39 = (uVar25 - *(int *)&psVar37->global_cycles) + uVar39;
    schedule_event(&psVar37->event_list,uVar39,dma_channel->channel_number + 0xc);
    if (uVar39 < psVar37->cycles_to_next_event) {
      pcVar17->alert_flags = pcVar17->alert_flags | 4;
    }
  }
  if ((local_5c & 3) != 3) {
    dma_channel->dest_address = local_74;
  }
  dma_channel->source_address = local_78;
  return (u32)local_70;
switchD_08019c64_caseD_0:
  local_78 = uVar10 & 0xfffffffc;
  local_70 = (u32 *)0x0;
  uVar10 = local_74;
  do {
    uVar15 = uVar10 >> 0x17;
    pmVar32 = dma->memory_regions;
    uVar11 = pmVar32[local_78 >> 0x17].mask;
    pmVar28 = pmVar32 + uVar15;
    pmVar27 = pmVar32 + (local_78 >> 0x17);
    uVar5 = local_7c * 4;
    uVar26 = local_78 & uVar11;
    if (uVar11 < uVar26 + uVar5) {
      uVar5 = (uVar11 + 1) - uVar26;
      local_74 = uVar5 >> 2;
      uVar5 = uVar5 & 0xfffffffc;
    }
    else {
      local_74 = local_7c;
    }
    uVar11 = pmVar32[uVar15].mask;
    uVar21 = uVar10 & uVar11;
    if (uVar11 < uVar21 + uVar5) {
      local_74 = (uVar11 + 1) - uVar21 >> 2;
    }
    uVar14 = pmVar27->load_access;
    if (uVar14 == '\x01') {
      puVar12 = (*(pmVar27->load_handler).get_pointer)(pmVar36,local_78);
      uVar14 = pmVar28->store_access;
      if (uVar14 == '\x01') goto LAB_0801eae0;
      if (uVar14 != '\0') goto LAB_0801e920;
      puVar35 = (pmVar28->store_handler).direct_memory + (uVar10 & pmVar32[uVar15].mask);
      p_Var23 = pmVar28->get_code_bitmap_coarse;
LAB_0801eb5c:
      local_7c = local_7c - local_74;
      puVar7 = (*p_Var23)(pmVar36,pmVar28,uVar10);
      puVar6 = (*pmVar28->get_code_bitmap_fine)(pmVar36,pmVar28,uVar10);
LAB_0801e96c:
      uVar20 = local_74 * 4;
      if (puVar7 != (u32 *)0x0) {
        uVar8 = memory_check_code_region(puVar7,puVar6,uVar10,uVar20);
        local_70 = (u32 *)((uint)local_70 | uVar8);
      }
      uVar10 = uVar10 + uVar20;
      local_78 = local_78 + uVar20;
      if (local_74 < 0xc || puVar12 < puVar35 + 0x10 && puVar35 < puVar12 + 0x10) {
        do {
          local_74 = local_74 - 1;
          *(u32 *)puVar35 = *(u32 *)puVar12;
          puVar12 = puVar12 + 4;
          puVar35 = puVar35 + 4;
        } while (local_74 != 0);
      }
      else {
        uVar5 = ((int)puVar12 << 0x1d) >> 0x1f & 3;
        if (local_74 <= uVar5) {
          uVar5 = local_74;
        }
        puVar34 = puVar12;
        puVar13 = puVar35;
        uVar15 = local_74;
        if (uVar5 != 0) {
          *(u32 *)puVar35 = *(u32 *)puVar12;
          puVar34 = puVar12 + 4;
          puVar13 = puVar35 + 4;
          uVar15 = local_74 - 1;
          if (uVar5 != 1) {
            *(u32 *)(puVar35 + 4) = *(u32 *)(puVar12 + 4);
            puVar34 = puVar12 + 8;
            puVar13 = puVar35 + 8;
            uVar15 = local_74 - 2;
            if (uVar5 == 3) {
              *(u32 *)(puVar35 + 8) = *(u32 *)(puVar12 + 8);
              puVar34 = puVar12 + 0xc;
              puVar13 = puVar35 + 0xc;
              uVar15 = local_74 - 3;
            }
          }
        }
        puVar12 = puVar12 + uVar5 * 4;
        puVar35 = puVar35 + uVar5 * 4;
        uVar26 = ((local_74 - uVar5) - 4 >> 2) + 1;
        uVar11 = 0;
        do {
          uVar43 = *(undefined8 *)puVar12;
          uVar44 = *(undefined8 *)(puVar12 + 8);
          uVar11 = uVar11 + 1;
          puVar12 = puVar12 + 0x10;
          *(undefined8 *)puVar35 = uVar43;
          *(undefined8 *)(puVar35 + 8) = uVar44;
          puVar35 = puVar35 + 0x10;
        } while (uVar11 < uVar26);
        iVar18 = uVar26 * 0x10;
        iVar19 = uVar15 + uVar26 * -4;
        if (((uVar26 * 4 - (local_74 - uVar5) != 0) &&
            (*(undefined4 *)(puVar13 + uVar26 * 0x10) = *(undefined4 *)(puVar34 + uVar26 * 0x10),
            iVar19 != 1)) &&
           (*(undefined4 *)(puVar13 + iVar18 + 4) = *(undefined4 *)(puVar34 + iVar18 + 4),
           iVar19 != 2)) {
          *(undefined4 *)(puVar13 + iVar18 + 8) = *(undefined4 *)(puVar34 + iVar18 + 8);
        }
      }
    }
    else if (uVar14 == '\0') {
      uVar14 = pmVar28->store_access;
      puVar12 = (pmVar27->load_handler).direct_memory + uVar26;
      if (uVar14 == '\x01') goto LAB_0801eae0;
LAB_0801e91c:
      if (uVar14 == '\0') {
        p_Var23 = pmVar28->get_code_bitmap_coarse;
        puVar35 = (pmVar28->store_handler).direct_memory + uVar21;
        goto LAB_0801eb5c;
      }
LAB_0801e920:
      if (uVar14 != '\x02') {
        local_7c = local_7c - local_74;
        puVar7 = (*pmVar28->get_code_bitmap_coarse)(pmVar36,pmVar28,uVar10);
        puVar6 = (*pmVar28->get_code_bitmap_fine)(pmVar36,pmVar28,uVar10);
        puVar35 = pmVar36->null_buffer_store;
        goto LAB_0801e96c;
      }
LAB_0801d440:
      p_Var33 = (pmVar28->store_handler).extended_function.store32;
      local_7c = local_7c - local_74;
      puVar6 = (*pmVar28->get_code_bitmap_coarse)(pmVar36,pmVar28,uVar10);
      puVar7 = (*pmVar28->get_code_bitmap_fine)(pmVar36,pmVar28,uVar10);
      if (uVar14 == '\x03') {
        if (puVar6 != (u32 *)0x0) {
          uVar20 = memory_check_code_region(puVar6,puVar7,uVar10,local_74 << 2);
          local_70 = (u32 *)((uint)local_70 | uVar20);
        }
        uVar5 = local_78;
        uVar15 = local_74;
        do {
          uVar26 = pmVar27->mask & uVar5;
          uVar11 = (uVar10 - local_78) + uVar5;
          uVar5 = uVar5 + 4;
          uVar20 = (*(code *)puVar12)(pmVar36,uVar26);
          (*p_Var33)(pmVar36,pmVar28->mask & uVar11,uVar20);
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
        iVar18 = (local_74 + 0x3fffffff) * 4;
        local_78 = local_78 + 4 + iVar18;
        uVar10 = iVar18 + uVar10 + 4;
      }
      else {
        if (puVar6 != (u32 *)0x0) {
          uVar20 = memory_check_code_region(puVar6,puVar7,uVar10,local_74 * 4);
          local_70 = (u32 *)((uint)local_70 | uVar20);
        }
        local_78 = local_78 + local_74 * 4;
        puVar35 = puVar12;
        uVar5 = local_74;
        do {
          (*p_Var33)(pmVar36,(uint)(puVar35 + (uVar10 - (int)puVar12)) & pmVar28->mask,
                     *(u32 *)puVar35);
          uVar5 = uVar5 - 1;
          puVar35 = puVar35 + 4;
        } while (uVar5 != 0);
        uVar10 = uVar10 + local_74 * 4;
      }
    }
    else {
      if (uVar14 != '\x02') {
        uVar14 = pmVar28->store_access;
        puVar12 = pmVar36->null_buffer_load;
        if (uVar14 != '\x01') goto LAB_0801e91c;
LAB_0801eae0:
        puVar35 = (*(pmVar28->store_handler).get_pointer)(pmVar36,uVar10);
        puVar7 = (*pmVar28->get_code_bitmap_coarse)(pmVar36,pmVar28,uVar10);
        local_7c = local_7c - local_74;
        puVar6 = (*pmVar28->get_code_bitmap_fine)(pmVar36,pmVar28,uVar10);
        goto LAB_0801e96c;
      }
      uVar14 = pmVar28->store_access;
      puVar12 = (u8 *)(pmVar27->load_handler).extended_function.load32;
      if (uVar14 == '\x01') {
        puVar35 = (*(pmVar28->store_handler).get_pointer)(pmVar36,uVar10);
        puVar7 = (*pmVar28->get_code_bitmap_coarse)(pmVar36,pmVar28,uVar10);
        local_7c = local_7c - local_74;
        puVar6 = (*pmVar28->get_code_bitmap_fine)(pmVar36,pmVar28,uVar10);
      }
      else if (uVar14 == '\0') {
        local_7c = local_7c - local_74;
        puVar35 = (pmVar28->store_handler).direct_memory + uVar21;
        puVar7 = (*pmVar28->get_code_bitmap_coarse)(pmVar36,pmVar28,uVar10);
        puVar6 = (*pmVar28->get_code_bitmap_fine)(pmVar36,pmVar28,uVar10);
      }
      else {
        if (uVar14 == '\x02') {
          uVar14 = '\x03';
          goto LAB_0801d440;
        }
        local_7c = local_7c - local_74;
        puVar7 = (*pmVar28->get_code_bitmap_coarse)(pmVar36,pmVar28,uVar10);
        puVar6 = (*pmVar28->get_code_bitmap_fine)(pmVar36,pmVar28,uVar10);
        puVar35 = pmVar36->null_buffer_store;
      }
      if (puVar7 != (u32 *)0x0) {
        uVar20 = memory_check_code_region(puVar7,puVar6,uVar10,local_74 * 4);
        local_70 = (u32 *)((uint)local_70 | uVar20);
      }
      uVar10 = uVar10 + local_74 * 4;
      puVar34 = puVar35;
      uVar5 = local_74;
      do {
        uVar9 = (*(code *)puVar12)(pmVar36,(uint)(puVar34 + (local_78 - (int)puVar35)) &
                                           pmVar27->mask);
        uVar5 = uVar5 - 1;
        *(undefined4 *)puVar34 = uVar9;
        puVar34 = puVar34 + 4;
      } while (uVar5 != 0);
      local_78 = local_78 + local_74 * 4;
    }
    local_74 = uVar10;
  } while (local_7c != 0);
  goto LAB_08019f44;
}


