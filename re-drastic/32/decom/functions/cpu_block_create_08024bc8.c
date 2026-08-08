/*
 * Ghidra decompilation
 *
 * Function : cpu_block_create
 * Address  : 08024bc8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void * cpu_block_create(cpu_struct *cpu,u32 pc,u32 thumb_mode)

{
  u16 *puVar1;
  cpu_branch_target_struct *pcVar2;
  u16 uVar3;
  u32 thumb_opcode;
  uint uVar4;
  cpu_branch_target_struct *current_branch_target_1;
  cpu_branch_target_struct *pcVar5;
  cpu_branch_target_struct *pcVar6;
  void *pvVar7;
  u8 *translation_ptr;
  cpu_instruction_struct *current_instruction_3;
  cpu_instruction_struct *pcVar8;
  uint uVar9;
  u8 *puVar10;
  s32 branch_offset_from_block_base;
  u32 new_live_flags;
  u32 registers_modified_by_block;
  uint uVar11;
  uint uVar12;
  u32 rd;
  u32 shift_value;
  int iVar13;
  cpu_instruction_struct *target_instruction;
  u32 internal_link_offset;
  cpu_instruction_struct *internal_link_instruction;
  u32 delayed_targets_position_1;
  cpu_instruction_struct *current_instruction_2;
  byte bVar14;
  translation_cache_struct *ptVar15;
  memory_region_struct *pmVar16;
  memory_region_struct *memory_region;
  uint uVar17;
  u32 op;
  cpu_branch_target_struct *current_branch_target;
  uint uVar19;
  int iVar20;
  cpu_instruction_struct *current_instruction_1;
  translation_cache_struct *ptVar21;
  u32 target_pc;
  u32 uVar22;
  int iVar23;
  u8 *block_metadata_ptr;
  u32 delayed_targets_position;
  uint *puVar24;
  cpu_instruction_struct *current_instruction_4;
  u32 i;
  ushort uVar25;
  uint uVar26;
  uint uVar27;
  u32 reg_list;
  u32 op_1;
  u32 shift_type;
  u32 load_store;
  cpu_instruction_struct *branch_instruction;
  u32 new_live_registers;
  u8 *new_block_ptr;
  u8 uVar28;
  u32 *puVar29;
  cpu_instruction_struct *current_instruction;
  u32 *opcode;
  u32 *_translation_ptr_1;
  u32 *_translation_ptr;
  cpu_branch_target_struct *current_branch_target_2;
  u32 uVar30;
  byte bVar31;
  uint uVar32;
  u32 branch_target_pc;
  uint uVar33;
  u32 offset;
  u32 block_length;
  cpu_block_delayed_targets_struct *delayed_targets;
  uint uVar34;
  uint uVar35;
  u32 live_flags;
  u32 instructions_to_idle_loop;
  uint uVar36;
  u32 rd_1;
  u32 live_registers;
  bool bVar37;
  bool bVar38;
  int local_a4;
  u32 local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  int local_7c;
  uint local_60;
  uint local_5c;
  uint local_58;
  u32 align_pc;
  cpu_block_delayed_targets_struct *local_4c;
  u32 pc_1;
  cpu_branch_target_struct *local_44;
  u32 local_40;
  ushort local_38;
  ushort local_36;
  ushort local_34;
  ushort local_32;
  byte local_30;
  byte local_2f;
  byte local_2e;
  int local_2c;
  uint uVar18;
  
  uVar28 = cpu->type;
  ptVar15 = cpu->translation_cache;
  local_2f = 0;
  local_4c = &ptVar15->delayed_targets;
  local_2c = __stack_chk_guard;
  local_a0 = thumb_mode;
  local_40 = pc;
  if (uVar28 == '\x01') {
    local_2f = 8;
    if (pc < 0xffff0000) {
      pmVar16 = (cpu->memory_interface).memory_regions + (pc >> 0x17);
      goto joined_r0x08025f54;
    }
    if (thumb_mode != 0) {
      local_a0 = 1;
    }
    pc_1 = (u32)malloc(0x1c0);
    local_7c = 2;
    uVar17 = local_a0 | 2;
    local_44 = (cpu_branch_target_struct *)ptVar15->translation_stack_pointer;
    uVar9 = pc;
  }
  else {
    pmVar16 = (cpu->memory_interface).memory_regions + (pc >> 0x17);
joined_r0x08025f54:
    ptVar21 = ptVar15;
    if (0x1ffffff < pc) {
      puVar29 = (*pmVar16->get_code_bitmap_coarse)((cpu->memory_interface).memory,pmVar16,pc);
      if (puVar29 == (u32 *)0x0) {
        new_block_ptr = (u8 *)0x0;
        goto cpu_block_create_done;
      }
      uVar28 = cpu->type;
      ptVar21 = cpu->translation_cache;
    }
    uVar9 = local_40;
    if (thumb_mode != 0) {
      local_a0 = 1;
    }
    pc_1 = (u32)malloc(0x1c0);
    local_7c = 0;
    local_44 = (cpu_branch_target_struct *)ptVar21->translation_stack_pointer;
    if (uVar28 == '\x01') {
      if (0x1ffffff < uVar9) {
        local_7c = 2;
      }
      uVar17 = local_a0 | 2;
    }
    else {
      local_7c = 2;
      uVar17 = local_a0;
    }
  }
  local_2e = 0;
  local_34 = 0;
  local_a4 = 0;
  local_98 = 0;
  bVar37 = false;
  if (uVar9 >> 0x18 == 2) {
    local_7c = 1;
  }
  local_5c = 0xe1a00000;
  uVar11 = uVar17 & 2;
  uVar17 = uVar17 & 1;
  uVar32 = 0xf;
  local_94 = 0x10;
  uVar35 = 0;
  do {
    uVar30 = pc_1;
    puVar29 = (u32 *)(pc_1 + uVar35 * 0x1c);
    uVar18 = uVar11;
    if (local_a0 == 0) {
      uVar4 = load_memory32(&cpu->memory_interface,uVar9);
      *(uint *)(uVar30 + uVar35 * 0x1c) = uVar4;
      if (uVar4 == 0) {
        local_a4 = local_a4 + 1;
      }
      else {
        local_a4 = 0;
      }
      uVar26 = uVar9 + 4;
      puVar29[1] = uVar9 + 8;
      if (uVar32 != 0xf) goto LAB_08024da4;
LAB_080251f0:
      uVar9 = uVar4 >> 0x1d;
LAB_08024dc0:
      bVar31 = (byte)(cpu_block_decode_instruction::condition_source_flags[uVar9] >> 0x18);
      if ((uVar4 & 0xe000010) == 0x6000010) {
        local_9c = local_a0 & 1;
      }
      else {
        local_9c = 0;
      }
      uVar9 = uVar4 >> 0x1c;
LAB_08024dec:
      *(undefined2 *)((int)puVar29 + 0x12) = 0;
      *(undefined *)((int)puVar29 + 0x15) = 0;
      *(undefined *)((int)puVar29 + 0x16) = 0;
      *(undefined *)((int)puVar29 + 0x17) = 1;
      *(undefined *)(puVar29 + 6) = 0;
      switch((uVar4 << 4) >> 0x1d) {
      case 1:
        if ((uVar4 << 7) >> 0x1e == 2) {
          if ((uVar4 & 0x100000) != 0) {
            if ((uVar4 & 0xf00) != 0) goto LAB_080256f8;
            goto LAB_08025594;
          }
          uVar12 = 0;
          if ((uVar4 << 0x10) >> 0x1c == 0xf) {
            uVar9 = 1 << (uVar4 & 0xf);
            if ((uVar4 & 0x400000) == 0) {
              if ((uVar4 & 0x80000) == 0) {
                uVar19 = 0;
              }
              else {
                uVar19 = 0xf0;
              }
              uVar12 = uVar4 & 0x10000;
              if (uVar12 != 0) goto LAB_080263c0;
LAB_0802673c:
              uVar18 = uVar9 & 0xffff;
              uVar34 = local_98 & uVar9;
              uVar33 = uVar12;
              uVar9 = uVar12;
              uVar36 = uVar12;
            }
            else {
              uVar18 = uVar9 & 0xffff;
              uVar19 = uVar12;
              uVar34 = local_98 & uVar9;
              uVar33 = uVar12;
              uVar9 = uVar12;
              uVar36 = uVar12;
            }
          }
          else {
LAB_08025430:
            *(undefined *)(puVar29 + 6) = 1;
            uVar18 = uVar12;
            uVar19 = uVar12;
            uVar34 = uVar12;
            uVar33 = uVar12;
            uVar9 = uVar12;
            uVar36 = uVar12;
          }
          break;
        }
        if ((uVar4 & 0xf00) == 0) {
LAB_08025594:
          local_58 = (uVar4 << 7) >> 0x1c;
          switch(local_58) {
          case 2:
          case 3:
          case 4:
switchD_08025100_caseD_2:
            uVar19 = 0;
            goto LAB_0802616c;
          case 5:
          case 6:
          case 7:
switchD_08025100_caseD_5:
            uVar19 = 0;
LAB_080261c8:
            uVar18 = 1 << ((uVar4 << 0xc) >> 0x1c);
            uVar9 = (uVar4 << 0x10) >> 0x1c;
            bVar31 = bVar31 | 0x20;
            uVar12 = 1 << uVar9;
            uVar34 = local_98 & uVar18;
            uVar18 = uVar18 & 0xffff;
            if ((uVar4 & 0x100000) == 0) goto LAB_080261f4;
            goto LAB_08026194;
          case 8:
          case 9:
switchD_08025100_caseD_8:
            local_60 = 0xc0000000;
            break;
          case 10:
          case 0xb:
switchD_08025100_caseD_a:
            local_60 = 0xf0000000;
            break;
          default:
switchD_08025100_caseD_c:
            uVar19 = 0;
            uVar18 = 0xc0;
            uVar9 = 0xc0000000;
            local_60 = 0;
LAB_0802621c:
            uVar33 = (uVar4 << 0x10) >> 0x1c;
            if ((uVar4 & 0x100000) != 0) {
              local_60 = uVar9;
              uVar19 = uVar18;
            }
            uVar12 = 1 << uVar33;
            uVar34 = 1 << ((uVar4 << 0xc) >> 0x1c);
            if (uVar33 != 0xf) {
              uVar18 = uVar34 & 0xffff;
              uVar34 = local_98 & uVar34;
              uVar33 = 0;
              uVar9 = uVar12 & 0xffff;
              uVar36 = 0;
              goto LAB_08024e54;
            }
            uVar9 = uVar12 & 0xffff;
            *(undefined *)(puVar29 + 6) = 1;
            goto LAB_080258d8;
          case 0xd:
          case 0xf:
            uVar9 = (uVar4 << 0x10) >> 0x1c;
            uVar12 = 1 << uVar9;
            if ((uVar4 & 0x100000) == 0) {
              uVar18 = 0;
              uVar19 = 0;
              uVar34 = 0;
              goto LAB_080261f4;
            }
            local_60 = 0xc0000000;
LAB_08026464:
            uVar18 = 0;
            uVar34 = uVar18;
            goto joined_r0x08026470;
          }
joined_r0x0802587c:
          uVar34 = 1 << ((uVar4 << 0xc) >> 0x1c);
          if ((uVar4 << 0x10) >> 0x1c == 0xf) {
            uVar9 = 0;
            uVar12 = 0;
LAB_080258d8:
            if ((uVar4 & 0x100000) != 0) {
              uVar18 = uVar34 & 0xffff;
              uVar34 = local_98 & uVar34;
              goto LAB_080258ec;
            }
            uVar18 = uVar34 & 0xffff;
            uVar19 = (local_60 >> 0x1c) << 4;
            uVar34 = local_98 & uVar34;
            uVar33 = 0;
            uVar36 = 0;
          }
          else {
            uVar18 = uVar34 & 0xffff;
            uVar12 = 0;
            uVar19 = (local_60 >> 0x1c) << 4;
            uVar34 = local_98 & uVar34;
            uVar33 = 0;
            uVar9 = 0;
            uVar36 = 0;
          }
        }
        else {
          if ((uVar4 & 0x100000) == 0) {
            local_58 = (uVar4 << 7) >> 0x1c;
            switch(local_58) {
            case 2:
            case 3:
            case 4:
              goto switchD_08025100_caseD_2;
            case 5:
            case 6:
            case 7:
              goto switchD_08025100_caseD_5;
            case 8:
            case 9:
              goto switchD_08025100_caseD_8;
            case 10:
            case 0xb:
              goto switchD_08025100_caseD_a;
            default:
              goto switchD_08025100_caseD_c;
            case 0xd:
            case 0xf:
              uVar18 = 0;
              uVar12 = 1 << ((uVar4 << 0x10) >> 0x1c);
              uVar34 = 0;
              uVar19 = uVar18;
              goto LAB_080261f4;
            }
          }
LAB_080256f8:
          local_58 = (uVar4 << 7) >> 0x1c;
          switch(local_58) {
          case 2:
          case 3:
          case 4:
            uVar19 = 0x20;
            break;
          case 5:
          case 6:
          case 7:
            uVar19 = 0x20;
            goto LAB_080261c8;
          case 8:
          case 9:
            local_60 = 0xe0000000;
            goto joined_r0x0802587c;
          case 10:
          case 0xb:
            goto switchD_08025100_caseD_a;
          default:
            uVar19 = 0x20;
            uVar18 = 0xe0;
            uVar9 = 0xe0000000;
            local_60 = 0x20000000;
            goto LAB_0802621c;
          case 0xd:
          case 0xf:
            uVar9 = (uVar4 << 0x10) >> 0x1c;
            uVar12 = 1 << uVar9;
            local_60 = 0xe0000000;
            goto LAB_08026464;
          }
LAB_0802616c:
          uVar9 = (uVar4 << 0x10) >> 0x1c;
          uVar34 = 1 << ((uVar4 << 0xc) >> 0x1c);
          uVar12 = 1 << uVar9;
          if ((uVar4 & 0x100000) == 0) {
            uVar18 = uVar34 & 0xffff;
            uVar34 = local_98 & uVar34;
LAB_080261f4:
            uVar33 = 0;
            uVar9 = uVar12 & 0xffff;
            uVar36 = 0;
            break;
          }
          uVar18 = uVar34 & 0xffff;
          uVar34 = local_98 & uVar34;
LAB_08026194:
          local_60 = 0xf0000000;
joined_r0x08026470:
          if (uVar9 != 0xf) {
            uVar19 = (local_60 >> 0x1c) << 4;
            uVar33 = 0;
            uVar9 = uVar12 & 0xffff;
            uVar36 = 0;
            break;
          }
          uVar9 = uVar12 & 0xffff;
LAB_080258ec:
          if (local_58 - 8 < 4) {
            uVar19 = (local_60 >> 0x1c) << 4;
            uVar33 = 0;
            uVar36 = 0;
          }
          else {
            uVar19 = 0xf0;
            uVar33 = 0;
            uVar36 = 0;
          }
        }
        break;
      case 2:
      case 3:
        if (uVar9 == 0xf) {
          uVar18 = 0;
          uVar12 = 0;
          uVar19 = 0;
          uVar34 = 0;
          uVar33 = 0;
          uVar9 = 0;
          uVar36 = 0;
        }
        else {
          uVar9 = uVar4 & 0x2000000;
          if (uVar9 != 0) {
            if ((uVar4 & 0x10) != 0) {
              uVar18 = uVar17;
              if (uVar17 == 0) goto LAB_080255e4;
              if ((uVar4 & 0x10000) != 0) goto LAB_080250a8;
              uVar12 = 0x4000;
              goto LAB_080250b0;
            }
            uVar9 = 1 << (uVar4 & 0xf);
          }
          uVar12 = 1 << ((uVar4 << 0xc) >> 0x1c);
          uVar18 = (uVar4 << 0x10) >> 0x1c;
          uVar9 = uVar12 | uVar9;
          if ((uVar4 & 0x1200000) != 0x1200000) {
            uVar12 = 0;
          }
          if ((uVar4 & 0x100000) == 0) {
            uVar9 = uVar9 | 1 << uVar18;
            *(undefined *)((int)puVar29 + 0x16) = 4;
            uVar18 = uVar9 & 0xffff;
            uVar19 = 0;
            uVar34 = local_98 & uVar9;
            uVar33 = 0;
            uVar9 = uVar12 & 0xffff;
            uVar36 = 0;
          }
          else {
            uVar12 = uVar12 | 1 << uVar18;
            *(undefined *)((int)puVar29 + 0x16) = 8;
            uVar18 = uVar9 & 0xffff;
            uVar19 = 0;
            uVar34 = local_98 & uVar9;
            uVar33 = 0;
            uVar9 = uVar12 & 0xffff;
            uVar36 = 8;
          }
        }
        break;
      case 4:
        uVar27 = uVar4 & 0xffff;
        uVar34 = 1 << ((uVar4 << 0xc) >> 0x1c);
        uVar12 = uVar34;
        if ((uVar4 & 0x200000) == 0) {
          uVar12 = 0;
        }
        iVar20 = (uint)bit_count[uVar4 & 0xff] + (uint)bit_count[uVar27 >> 8];
        if (uVar9 == 0xe && iVar20 != 0) {
          if (iVar20 == 1) {
            iVar20 = 2;
          }
          if ((uVar4 & 0x108000) != 0x108000) {
            *(char *)((int)puVar29 + 0x17) = (char)iVar20;
            goto LAB_08025044;
          }
          *(char *)((int)puVar29 + 0x17) = (char)iVar20 + '\x01';
        }
        else {
LAB_08025044:
          if ((uVar4 & 0x100000) == 0) {
            *(undefined *)((int)puVar29 + 0x16) = 4;
            uVar18 = uVar27 | uVar34 & 0xffff;
            uVar19 = 0;
            uVar34 = local_98 & (uVar27 | uVar34);
            uVar33 = 0;
            uVar9 = uVar12 & 0xffff;
            uVar36 = 0;
            break;
          }
        }
        *(undefined *)((int)puVar29 + 0x16) = 8;
        uVar36 = 8;
        if ((uVar4 & 0x400000) == 0) {
          uVar18 = uVar34 & 0xffff;
          uVar12 = uVar12 | uVar27;
          uVar19 = 0;
          uVar34 = local_98 & uVar34;
          uVar33 = 0;
          uVar9 = uVar12 & 0xffff | uVar27;
        }
        else {
          uVar18 = uVar34 & 0xffff;
          uVar19 = 0;
          uVar34 = local_98 & uVar34;
          uVar33 = 0;
          uVar9 = uVar12 & 0xffff;
        }
        break;
      case 5:
        iVar20 = (int)(uVar4 << 8) >> 8;
        if (uVar9 == 0xf) {
          uVar12 = 0xc000;
          uVar9 = ((iVar20 + 1) * 2 - ((int)(uVar4 << 7) >> 0x1f)) * 2;
          if (uVar17 == 0) {
            uVar9 = uVar9 | 1;
          }
        }
        else if (uVar17 == 0) {
          uVar9 = (iVar20 + 1) * 4;
          if ((uVar4 & 0x1000000) == 0) {
            uVar12 = 0x8000;
          }
          else {
            uVar12 = 0xc000;
          }
        }
        else {
          if ((uVar4 & 0x1000000) == 0) {
            uVar12 = 0x8000;
          }
          else {
            uVar12 = 0xc000;
          }
          uVar9 = (iVar20 + 1) * 2 | 1;
        }
        uVar18 = 0;
        uVar19 = 0;
        uVar34 = 0;
        uVar33 = uVar26 + uVar9;
        uVar9 = uVar12;
        uVar36 = 0;
        break;
      case 6:
        *(undefined *)(puVar29 + 6) = 1;
        uVar18 = 0;
        uVar12 = 0;
        uVar19 = 0;
        uVar34 = 0;
        uVar33 = 0;
        uVar9 = 0;
        uVar36 = 0;
        break;
      case 7:
        if ((uVar4 & 0x1000000) == 0) {
          if (uVar11 == 0) {
LAB_080255e4:
            *(undefined *)(puVar29 + 6) = 1;
            uVar12 = uVar18;
            uVar19 = uVar18;
            uVar34 = uVar18;
            uVar33 = uVar18;
            uVar9 = uVar18;
            uVar36 = uVar18;
          }
          else {
            uVar12 = uVar4 & 0x10;
            if (uVar12 == 0) goto LAB_08025430;
            uVar9 = (uVar4 << 0x10) >> 0x1c;
            if ((uVar4 & 0x100000) != 0) {
              uVar12 = 1 << uVar9;
              uVar18 = 0;
              uVar19 = 0;
              uVar34 = 0;
              uVar33 = 0;
              uVar9 = uVar12 & 0xffff;
              uVar36 = 0;
              break;
            }
            uVar9 = 1 << uVar9;
            if (((uVar4 << 0x14) >> 0x1c != 0xf) || ((uVar4 << 8) >> 0x1d != 0)) {
LAB_080253f4:
              uVar12 = 0;
              uVar18 = uVar9 & 0xffff;
              uVar19 = uVar12;
              uVar34 = local_98 & uVar9;
              uVar33 = uVar12;
              uVar9 = uVar12;
              uVar36 = uVar12;
              break;
            }
            uVar18 = (uVar4 << 0xc) >> 0x1c;
            uVar19 = uVar4 & 0xef;
            if (uVar18 != 7) {
              uVar12 = (uint)(uVar18 == 9 && uVar19 == 1);
              if (uVar18 == 9 && uVar19 == 1) {
                uVar12 = 0;
              }
              else if (uVar18 != 1 || uVar19 != 0) goto LAB_080253f4;
              *(undefined *)((int)puVar29 + 0x16) = 4;
              uVar18 = uVar9 & 0xffff;
              uVar19 = uVar12;
              uVar34 = local_98 & uVar9;
              uVar33 = uVar12;
              uVar9 = uVar12;
              uVar36 = uVar12;
              break;
            }
            if (uVar19 != 0x48 && uVar19 != 0x80) goto LAB_080253f4;
            uVar9 = uVar9 | 0x8000;
            *(undefined *)((int)puVar29 + 0x16) = 1;
LAB_080267c8:
            uVar19 = 0;
            uVar18 = uVar9 & 0xffff;
            uVar12 = 0x8000;
            uVar34 = local_98 & uVar9;
            uVar33 = uVar19;
            uVar9 = 0x8000;
            uVar36 = uVar19;
          }
        }
        else {
LAB_080250a8:
          uVar12 = 0xc000;
LAB_080250b0:
          uVar19 = 0;
          uVar18 = 0x8000;
          uVar34 = local_98 & 0x8000;
          uVar33 = uVar19;
          uVar9 = uVar12;
          uVar36 = uVar19;
        }
        break;
      default:
        if ((uVar4 & 0x90) != 0x90) goto LAB_08025488;
        if ((uVar4 >> 5 & 3) == 0) {
          uVar18 = (uVar4 << 7) >> 0x1c;
          bVar14 = (byte)((uVar4 << 7) >> 0x1c);
          if (uVar18 < 8) {
            if ((uVar4 & 0x800000) == 0) {
              uVar18 = (uVar4 << 0x14) >> 0x1c;
              bVar38 = (uVar4 & 0x200000) != 0;
              uVar9 = 1 << (uVar4 & 0xf) | 1 << uVar18;
              if (bVar38) {
                uVar18 = (uVar4 << 0x10) >> 0x1c;
              }
              uVar12 = 1 << ((uVar4 << 0xc) >> 0x1c);
              if (bVar38) {
                uVar9 = uVar9 | 1 << uVar18;
              }
            }
            else {
              uVar9 = 1 << (uVar4 & 0xf) | 1 << ((uVar4 << 0x14) >> 0x1c);
              uVar12 = 1 << ((uVar4 << 0xc) >> 0x1c) | 1 << ((uVar4 << 0x10) >> 0x1c);
              if ((uVar4 & 0x200000) != 0) {
                uVar9 = uVar9 | uVar12;
              }
            }
            if ((uVar4 & 0x100000) == 0) {
              uVar18 = uVar9 & 0xffff;
              uVar19 = 0;
              uVar34 = local_98 & uVar9;
              uVar33 = 0;
              uVar9 = uVar12 & 0xffff;
              uVar36 = 0;
            }
            else {
              uVar18 = uVar9 & 0xffff;
              uVar19 = 0xc0;
              uVar34 = local_98 & uVar9;
              uVar33 = 0;
              uVar9 = uVar12 & 0xffff;
              uVar36 = 0;
            }
          }
          else {
            if ((uVar18 != 8) && (uVar12 = 0, uVar18 != 10)) goto LAB_08025430;
            if (uVar9 == 0xe) {
              bVar14 = 2;
            }
            if (uVar9 == 0xe) {
              *(byte *)((int)puVar29 + 0x17) = bVar14;
            }
            uVar9 = 1 << (uVar4 & 0xf) | 1 << ((uVar4 << 0xc) >> 0x1c);
            uVar12 = 1 << ((uVar4 << 0x10) >> 0x1c);
            *(undefined *)((int)puVar29 + 0x16) = 4;
            uVar18 = uVar9 & 0xffff;
            uVar19 = 0;
            uVar34 = local_98 & uVar9;
            uVar33 = 0;
            uVar9 = uVar12 & 0xffff;
            uVar36 = 0;
          }
        }
        else {
          uVar18 = -((int)(uVar4 << 0xb) >> 0x1f);
          uVar19 = (uVar4 << 0x10) >> 0x1c;
          if ((uVar4 & 0x40) == 0) {
            bVar38 = false;
          }
          else if (uVar18 == 0) {
            uVar18 = (uVar4 >> 5 ^ 1) & 1;
            if (uVar9 == 0xe) {
              bVar38 = true;
              *(undefined *)((int)puVar29 + 0x17) = 2;
            }
            else {
              bVar38 = true;
            }
          }
          else {
            bVar38 = false;
            uVar18 = 1;
          }
          uVar12 = 1 << ((uVar4 << 0xc) >> 0x1c);
          uVar34 = uVar12;
          if ((uVar4 & 0x400000) == 0) {
            uVar34 = uVar12 | 1 << (uVar4 & 0xf);
          }
          if ((uVar4 & 0x1200000) != 0x1200000) {
            uVar12 = 0;
          }
          if (uVar18 == 0) {
            *(undefined *)((int)puVar29 + 0x16) = 4;
            uVar34 = uVar34 | 1 << uVar19;
            if (bVar38) {
              uVar34 = uVar34 | 1 << uVar19 + 1;
              goto LAB_08025800;
            }
LAB_08026614:
            uVar19 = 0;
            uVar18 = uVar34 & 0xffff;
            uVar34 = local_98 & uVar34;
            uVar33 = uVar19;
            uVar9 = uVar12 & 0xffff;
            uVar36 = uVar19;
          }
          else {
            uVar12 = uVar12 | 1 << uVar19;
            *(undefined *)((int)puVar29 + 0x16) = 8;
            if (bVar38) {
              uVar12 = uVar12 | 1 << uVar19 + 1;
            }
            bVar38 = uVar9 == 0xe && uVar19 == 0xf;
            uVar19 = (uint)bVar38;
            if (bVar38) {
              *(undefined *)((int)puVar29 + 0x17) = 3;
              uVar18 = uVar34 & 0xffff;
              uVar19 = 0;
              uVar34 = local_98 & uVar34;
              uVar33 = 0;
              uVar9 = uVar12 & 0xffff;
              uVar36 = 8;
            }
            else {
              uVar18 = uVar34 & 0xffff;
              uVar34 = local_98 & uVar34;
              uVar33 = uVar19;
              uVar9 = uVar12 & 0xffff;
              uVar36 = 8;
            }
          }
        }
      }
      goto LAB_08024e54;
    }
    uVar3 = load_memory16(&cpu->memory_interface,uVar9);
    uVar4 = (uint)uVar3;
    if (uVar4 != 0) {
      local_a4 = 0;
    }
    uVar26 = uVar9 + 2;
    uVar30 = uVar9 + 4;
    if (uVar4 == 0) {
      local_a4 = local_a4 + 1;
    }
    uVar4 = convert_thumb_instruction_to_arm(uVar4,&align_pc);
    *puVar29 = uVar4;
    if (align_pc != 0) {
      uVar30 = uVar30 & 0xfffffffd;
    }
    puVar29[1] = uVar30;
    if (uVar32 == 0xf) goto LAB_080251f0;
LAB_08024da4:
    uVar9 = uVar4 >> 0x1d;
    if (uVar9 != uVar32 >> 1) goto LAB_08024dc0;
    if (uVar32 != uVar4 >> 0x1c) {
      uVar9 = uVar4 & 0xe000010;
      uVar4 = uVar4 & 0xfffffff | 0xe0000000;
      bVar31 = 0;
      if (uVar9 == 0x6000010) {
        local_9c = local_a0 & 1;
      }
      else {
        local_9c = 0;
      }
      *puVar29 = uVar4;
      uVar9 = 0xe;
      goto LAB_08024dec;
    }
    bVar31 = 0;
    uVar9 = 0xe;
    local_9c = 0;
    *puVar29 = 0xe1a00000;
    *(undefined2 *)((int)puVar29 + 0x12) = 0;
    *(undefined *)((int)puVar29 + 0x15) = 0;
    *(undefined *)((int)puVar29 + 0x16) = 0;
    *(undefined *)((int)puVar29 + 0x17) = 1;
    *(undefined *)(puVar29 + 6) = 0;
    uVar4 = local_5c;
LAB_08025488:
    if ((uVar4 << 7) >> 0x1e == 2) {
      if ((uVar4 & 0x100000) == 0) {
        uVar27 = 0;
        uVar19 = uVar27;
        uVar33 = uVar27;
        uVar36 = uVar27;
        if ((uVar4 & 0x80) == 0) {
          if ((uVar4 & 0x10) == 0) {
            if ((uVar4 & 0x200000) == 0) {
              uVar12 = 1 << ((uVar4 << 0x10) >> 0x1c);
              if ((uVar4 & 0x400000) == 0) {
                bVar31 = bVar31 | 0xf0;
              }
              uVar18 = 0;
              uVar19 = 0;
              uVar34 = 0;
              uVar33 = 0;
              uVar9 = uVar12 & 0xffff;
              uVar36 = 0;
            }
            else {
              uVar9 = 1 << (uVar4 & 0xf);
              if ((uVar4 & 0x400000) == 0) {
                if ((uVar4 & 0x80000) == 0) {
                  uVar19 = 0;
                }
                else {
                  uVar19 = 0xf0;
                }
                uVar12 = uVar4 & 0x10000;
                if (uVar12 == 0) goto LAB_0802673c;
LAB_080263c0:
                uVar12 = 0;
                *(undefined *)((int)puVar29 + 0x16) = 4;
                uVar18 = uVar9 & 0xffff | 0x7f00;
                uVar34 = local_98 & (uVar9 | 0x7f00);
                uVar33 = uVar12;
                uVar9 = uVar12;
                uVar36 = uVar12;
              }
              else {
                uVar18 = uVar9 & 0xffff;
                uVar12 = 0;
                uVar19 = 0;
                uVar34 = local_98 & uVar9;
                uVar33 = 0;
                uVar9 = 0;
                uVar36 = 0;
              }
            }
          }
          else {
            uVar12 = (uVar4 << 0x19) >> 0x1e;
            uVar34 = 0;
            if (uVar12 == 2) {
              if (uVar11 == 0) {
LAB_08026820:
                *(undefined *)(puVar29 + 6) = 1;
                uVar18 = 0;
                uVar12 = 0;
                uVar19 = 0;
                uVar33 = 0;
                uVar9 = 0;
                uVar36 = 0;
              }
              else {
                uVar9 = 1 << (uVar4 & 0xf) | 1 << ((uVar4 << 0xc) >> 0x1c);
LAB_0802642c:
                uVar12 = 1 << ((uVar4 << 0x10) >> 0x1c);
                uVar18 = uVar9 & 0xffff;
                uVar19 = uVar27;
                uVar34 = local_98 & uVar9;
                uVar33 = uVar27;
                uVar9 = uVar12 & 0xffff;
                uVar36 = uVar27;
              }
            }
            else if (uVar12 == 3) {
              if (uVar11 != 0) {
                uVar18 = 1;
              }
              if (uVar9 != 0xe) {
                uVar18 = 0;
              }
              if (uVar18 == 0) goto LAB_08026820;
              uVar18 = 0;
              uVar12 = 0;
              uVar19 = 0;
              uVar33 = 0;
              uVar9 = 0;
              uVar36 = 0;
            }
            else if (uVar12 == 1) {
              if (uVar11 == 0) goto LAB_08026820;
              uVar9 = 1 << (uVar4 & 0xf);
              uVar18 = uVar9 & 0xffff | 0x8000;
              uVar12 = 0xc000;
              uVar34 = local_98 & (uVar9 | 0x8000);
              uVar9 = 0xc000;
            }
            else {
              if ((uVar4 & 0x400000) == 0) {
                uVar9 = 1 << (uVar4 & 0xf);
                goto LAB_080267c8;
              }
              uVar12 = uVar11;
              uVar19 = uVar11;
              uVar34 = uVar11;
              uVar33 = uVar11;
              uVar9 = uVar11;
              uVar36 = uVar11;
              if (uVar11 != 0) {
                uVar9 = 1 << (uVar4 & 0xf);
                goto LAB_0802642c;
              }
            }
          }
          goto LAB_08024e54;
        }
        if (uVar11 == 0) goto LAB_080255e4;
        uVar9 = (uVar4 << 9) >> 0x1e;
        uVar34 = 1 << (uVar4 & 0xf) | 1 << ((uVar4 << 0x14) >> 0x1c);
        uVar12 = 1 << ((uVar4 << 0xc) >> 0x1c);
        if (uVar9 == 1) {
          if ((uVar4 & 0x20) != 0) goto LAB_08026614;
          uVar34 = uVar34 | 1 << ((uVar4 << 0x10) >> 0x1c);
LAB_08025800:
          uVar19 = 0;
          uVar18 = uVar34 & 0xffff;
          uVar34 = local_98 & uVar34;
          uVar33 = uVar19;
          uVar9 = uVar12 & 0xffff;
          uVar36 = uVar19;
        }
        else if (uVar9 == 2) {
          uVar12 = uVar12 | 1 << ((uVar4 << 0x10) >> 0x1c);
          uVar18 = uVar34 & 0xffff;
          uVar34 = local_98 & uVar34;
          uVar9 = uVar12 & 0xffff;
        }
        else {
          if ((uVar4 & 0x400000) == 0) {
            uVar34 = uVar34 | 1 << ((uVar4 << 0x10) >> 0x1c);
            goto LAB_08025800;
          }
          uVar18 = uVar34 & 0xffff;
          uVar34 = local_98 & uVar34;
          uVar9 = uVar12 & 0xffff;
        }
        goto LAB_08024e54;
      }
      uVar34 = 1 << (uVar4 & 0xf);
      if ((uVar4 & 0x10) != 0) goto LAB_08025850;
      uVar18 = (uVar4 << 0x19) >> 0x1e;
      uVar9 = (uVar4 << 0x14) >> 0x1b;
LAB_08025838:
      if ((uVar9 | uVar18) != 0) {
        uVar33 = 0xe0;
        uVar19 = 0x20;
        goto LAB_080256e8;
      }
      uVar33 = 0xc0;
      uVar19 = 0;
    }
    else {
      uVar34 = 1 << (uVar4 & 0xf);
      if ((uVar4 & 0x10) == 0) {
        uVar18 = (uVar4 << 0x19) >> 0x1e;
        uVar9 = (uVar4 << 0x14) >> 0x1b;
        if ((uVar4 & 0x100000) != 0) goto LAB_08025838;
        uVar33 = 0xc0;
        uVar19 = 0;
LAB_080256e8:
        if (uVar18 == 3 && uVar9 == 0) {
          bVar31 = bVar31 | 0x20;
        }
      }
      else {
        if ((uVar4 & 0x100000) != 0) {
LAB_08025850:
          bVar31 = bVar31 | 0x20;
          *(undefined *)((int)puVar29 + 0x17) = 2;
        }
        uVar33 = 0xc0;
        uVar34 = uVar34 | 1 << ((uVar4 << 0x14) >> 0x1c);
        uVar19 = 0;
      }
    }
    uVar36 = uVar4 & 0x100000;
    uVar18 = (uVar4 << 7) >> 0x1c;
    switch(uVar18) {
    case 2:
    case 3:
    case 4:
      break;
    case 5:
    case 6:
    case 7:
      bVar31 = bVar31 | 0x20;
      break;
    case 8:
    case 9:
      uVar19 = uVar33;
      goto joined_r0x08026040;
    case 10:
    case 0xb:
      uVar19 = 0xf0;
joined_r0x08026040:
      uVar34 = uVar34 | 1 << ((uVar4 << 0xc) >> 0x1c);
      if ((uVar4 << 0x10) >> 0x1c == 0xf) {
        uVar9 = 0;
        uVar12 = 0;
LAB_08026138:
        if (uVar36 == 0) {
          uVar18 = uVar34 & 0xffff;
          uVar34 = local_98 & uVar34;
          uVar33 = 0;
          uVar36 = 0;
          goto LAB_08024e54;
        }
        goto LAB_08026140;
      }
      uVar18 = uVar34 & 0xffff;
      uVar12 = 0;
      uVar34 = local_98 & uVar34;
      uVar33 = 0;
      uVar9 = 0;
      uVar36 = 0;
      goto LAB_08024e54;
    default:
      uVar9 = (uVar4 << 0x10) >> 0x1c;
      if (uVar36 != 0) {
        uVar19 = uVar33;
      }
      uVar12 = 1 << uVar9;
      uVar34 = uVar34 | 1 << ((uVar4 << 0xc) >> 0x1c);
      if (uVar9 == 0xf) {
        *(undefined *)(puVar29 + 6) = 1;
        uVar9 = uVar12 & 0xffff;
        goto LAB_08026138;
      }
      goto LAB_0802608c;
    case 0xd:
    case 0xf:
      uVar9 = (uVar4 << 0x10) >> 0x1c;
      uVar12 = 1 << uVar9;
      if (uVar36 == 0) goto LAB_0802608c;
      goto joined_r0x0802637c;
    }
    uVar9 = (uVar4 << 0x10) >> 0x1c;
    uVar12 = 1 << uVar9;
    uVar34 = uVar34 | 1 << ((uVar4 << 0xc) >> 0x1c);
    if (uVar36 == 0) {
LAB_0802608c:
      uVar18 = uVar34 & 0xffff;
      uVar34 = local_98 & uVar34;
      uVar33 = 0;
      uVar9 = uVar12 & 0xffff;
      uVar36 = 0;
    }
    else {
      uVar33 = 0xf0;
joined_r0x0802637c:
      uVar19 = uVar33;
      if (uVar9 == 0xf) {
        uVar9 = uVar12 & 0xffff;
LAB_08026140:
        if (3 < uVar18 - 8) {
          uVar19 = 0xf0;
        }
        uVar18 = uVar34 & 0xffff;
        uVar34 = local_98 & uVar34;
        uVar33 = 0;
        uVar36 = 0;
      }
      else {
        uVar18 = uVar34 & 0xffff;
        uVar34 = local_98 & uVar34;
        uVar33 = 0;
        uVar9 = uVar12 & 0xffff;
        uVar36 = 0;
      }
    }
LAB_08024e54:
    *(undefined2 *)(puVar29 + 3) = 0;
    local_98 = uVar36;
    if (uVar36 != 0) {
      local_98 = uVar9;
    }
    *(short *)((int)puVar29 + 0xe) = (short)uVar18;
    if (uVar36 == 0) {
      local_98 = 0;
    }
    *(short *)(puVar29 + 4) = (short)uVar9;
    *(byte *)(puVar29 + 5) = (byte)uVar19 | bVar31 >> 4;
    if (uVar34 != 0) {
      *(char *)((int)puVar29 + 0x17) = *(char *)((int)puVar29 + 0x17) + '\x01';
    }
    if (local_9c == 0) {
      bVar37 = false;
    }
    else if ((uVar4 & 0x10000) == 0) {
      bVar37 = true;
    }
    else if (bVar37) {
      uVar30 = (uVar4 << 0x10) >> 0x15;
      bVar37 = (uVar4 & 0x20000) == 0;
      uVar9 = uVar30 | ((puVar29[-7] << 0x10) >> 0x15) << 0xb;
      if (bVar37) {
        uVar30 = 0xfa000000;
      }
      uVar33 = uVar26 + ((int)(uVar9 << 10) >> 10) * 2;
      if (bVar37) {
        uVar33 = uVar33 & 0xfffffffc;
      }
      else {
        uVar33 = uVar33 | 1;
        uVar30 = 0xfffffffeU - ((int)puVar29 >> 2) & 0xffffff | 0xeb000000;
      }
      puVar29[-7] = 0xe1a00000;
      bVar37 = false;
      *puVar29 = uVar30;
    }
    uVar18 = uVar35 + 1;
    if (local_a4 == 4) {
      uVar18 = uVar35 - 2;
      uVar9 = uVar18 & 0xffff;
      local_2e = 2;
      if (uVar18 == 0) goto LAB_080259c8;
LAB_08025ed0:
      iVar20 = uVar18 * 0x1c + -0x1c;
      goto LAB_08025384;
    }
    if (((uVar26 < 0x2000000) && (cpu->type == '\x01' && thumb_mode == 0)) &&
       (8 < cpu->translation_cache->itcm_hot_modifications[(uVar26 << 0x11) >> 0x13])) {
      local_2e = 4;
LAB_080265e8:
      if (uVar18 != 0x800) {
        uVar17 = (uint)local_2e;
        uVar9 = uVar18 & 0xffff;
        if (uVar17 != 0) {
          uVar17 = 1;
        }
LAB_080259c0:
        if (uVar17 != 0) goto LAB_08025ed0;
        goto LAB_080259c8;
      }
      break;
    }
    if (*(char *)(puVar29 + 6) != '\0') {
LAB_080259a4:
      if (uVar18 == 1) {
        uVar9 = 1;
        uVar35 = uVar18;
      }
      else {
        uVar9 = uVar35 & 0xffff;
        uVar18 = uVar35;
        if (uVar35 != 0) {
          uVar18 = 1;
        }
      }
      local_2e = 2;
      uVar17 = uVar18;
      uVar18 = uVar35;
      goto LAB_080259c0;
    }
    if ((short)(ushort)uVar12 < 0) {
      if (uVar33 == 0) {
        uVar9 = *puVar29;
        *(ushort *)((int)puVar29 + 0x12) = ~(ushort)uVar12;
        *(byte *)((int)puVar29 + 0x15) = ~(byte)(uVar19 >> 4) & 0xf;
        uVar25 = local_34;
      }
      else {
        if (cpu->type == '\0') {
          if (uVar33 - 0x800000 < 0x1800000) goto LAB_080259a4;
          iVar20 = 2;
        }
        else if (uVar33 < 0x2000000 && cpu->type == '\x01') {
          iVar20 = 0;
        }
        else {
          iVar20 = 2;
        }
        uVar9 = *puVar29;
        if (uVar33 >> 0x18 == 2) {
          iVar20 = 1;
        }
        uVar25 = local_34 + 1;
        local_44[local_34].target_pc = uVar33;
        local_44[local_34].source_pc = uVar26;
        local_44[local_34].flags = 0;
        if (uVar9 >> 0x1c < 0xe && uVar33 < uVar26) {
          uVar32 = uVar9 >> 0x1c;
        }
        local_44[local_34].block_internal_offset = (short)uVar18 - 1;
        local_44[local_34].internal_link_offset = 0;
        if ((iVar20 != local_7c) && (iVar20 == 2 || local_7c == 2)) {
          local_44[local_34].flags = 4;
        }
        if ((iVar20 == 0) &&
           ((local_7c != 0 ||
            ((8 < cpu->translation_cache->itcm_hot_modifications[(uVar33 << 0x11) >> 0x13] &&
             ((uVar33 & 1) == 0)))))) {
          local_44[local_34].flags = 2;
        }
      }
      local_34 = uVar25;
      if (0xdfffffff < uVar9) goto LAB_080265e8;
      uVar19 = (uint)*(byte *)(puVar29 + 5);
    }
    if ((uVar19 & 0xf0) != 0) {
      uVar32 = 0xf;
    }
    if (uVar18 == local_94) {
      local_94 = uVar18 * 2;
      pc_1 = (u32)realloc((void *)pc_1,uVar18 * 0x38);
    }
    uVar9 = uVar26;
    uVar35 = uVar18;
  } while (uVar18 != 0x800);
  uVar9 = 0x800;
  iVar20 = 0xdfe4;
  local_2e = 1;
LAB_08025384:
  *(undefined2 *)(pc_1 + iVar20 + 0x12) = 0x7fff;
  *(undefined *)(pc_1 + iVar20 + 0x15) = 0xf;
LAB_080259c8:
  local_38 = (ushort)uVar9;
  uVar17 = (uint)local_34;
  local_36 = local_38;
  if (local_a0 == 0) {
    local_36 = (ushort)(uVar9 << 1);
  }
  ptVar21 = cpu->translation_cache;
  puVar10 = ptVar21->translation_stack_pointer;
  ptVar21->translation_stack_pointer = puVar10 + uVar17 * 0x1c;
  if (&ptVar21->translation_ptr_main <= puVar10 + uVar17 * 0x1c) {
    puts("Translation stack overflow!");
    fflush(stdout);
    uVar17 = (uint)local_34;
  }
  if (uVar17 == 0) {
LAB_0802601c:
    uVar9 = (uint)local_38;
  }
  else {
    pcVar6 = local_44;
    uVar9 = 0xffffffff;
    uVar32 = 0;
    do {
      uVar4 = pcVar6->target_pc & 0xfffffffe;
      uVar18 = uVar4 - local_40;
      uVar35 = uVar9;
      uVar11 = uVar32;
      if ((0 < (int)uVar18) &&
         (uVar35 = uVar18, uVar11 = uVar4, pcVar6->source_pc <= uVar4 || uVar9 <= uVar18)) {
        uVar35 = uVar9;
        uVar11 = uVar32;
      }
      pcVar6 = pcVar6 + 1;
      uVar9 = uVar35;
      uVar32 = uVar11;
    } while (local_44 + uVar17 != pcVar6);
    if (uVar35 == 0xffffffff) goto LAB_0802601c;
    uVar32 = uVar35 << 0xf;
    local_36 = (ushort)(uVar32 >> 0x10);
    if (local_a0 == 0) {
      uVar32 = uVar35 << 0xe;
    }
    uVar9 = uVar32 >> 0x10;
    local_2e = 3;
    local_38 = (ushort)(uVar32 >> 0x10);
    if (uVar11 < local_44->source_pc) {
      local_34 = 1;
      uVar32 = 0;
      pcVar6 = local_44;
    }
    else {
      pcVar5 = local_44;
      uVar32 = 0;
      do {
        uVar35 = uVar32;
        uVar32 = uVar35 + 1;
        pcVar6 = pcVar5 + 1;
        if (uVar32 == uVar17) break;
        pcVar2 = pcVar5 + 1;
        pcVar5 = pcVar6;
      } while (pcVar2->source_pc <= uVar11);
      local_34 = (short)uVar35 + 2;
    }
    uVar35 = pcVar6->flags;
    cpu->translation_cache->translation_stack_pointer =
         cpu->translation_cache->translation_stack_pointer + ((1 - uVar17) + uVar32) * 0x1c;
    pcVar6->target_pc = thumb_mode | uVar11;
    pcVar6->source_pc = uVar11;
    pcVar6->flags = uVar35 | 1;
    pcVar6->block_internal_offset = local_38 - 1;
  }
  pc_1 = (u32)realloc((void *)pc_1,uVar9 * 0x1c);
  if ((local_34 != 0) && ((local_44->target_pc & 0xfffffffe) == local_40)) {
    registers_modified_by_block = 0;
    i = 0;
    uVar9 = local_44->block_internal_offset + 1;
    current_instruction_2 = (cpu_instruction_struct *)pc_1;
    do {
      puVar1 = &current_instruction_2->dest_registers;
      i = i + 1;
      current_instruction_2 = current_instruction_2 + 1;
      registers_modified_by_block = registers_modified_by_block | *puVar1;
    } while (i < uVar9);
    uVar17 = 0;
    uVar32 = ~registers_modified_by_block & 0x7fff;
    pcVar8 = (cpu_instruction_struct *)pc_1;
    do {
      if ((pcVar8->flags & 4) != 0) goto LAB_08025b80;
      if (((uint)pcVar8->source_registers & ~uVar32) == 0) {
        if (0xdfffffff < pcVar8->opcode) {
          uVar32 = uVar32 | pcVar8->dest_registers;
        }
      }
      else if ((registers_modified_by_block & pcVar8->source_registers) != 0) goto LAB_08025b80;
      uVar17 = uVar17 + 1;
      pcVar8 = pcVar8 + 1;
    } while (uVar17 < uVar9);
    local_2f = local_2f | 4;
  }
LAB_08025b80:
  cpu_block_fill_allocation(cpu,pc,(uint)local_36 << 1);
  uVar30 = (ptVar15->delayed_targets).delayed_block_position;
  uVar9 = (uint)local_36;
  uVar22 = uVar30 + 1;
  (ptVar15->delayed_targets).delayed_block_pc[uVar30] = pc | thumb_mode;
  (ptVar15->delayed_targets).delayed_block_position = uVar22;
  uVar30 = pc_1;
  if (local_34 != 0) {
    uVar17 = 0;
    pcVar6 = local_44;
    do {
      iVar20 = uVar30 + (uint)pcVar6->block_internal_offset * 0x1c;
      if ((pcVar6->flags & 6) == 0) {
        uVar32 = pcVar6->target_pc;
        uVar35 = uVar32 - local_40;
        if ((uVar35 < uVar9 * 2 && 0 < (int)uVar35) && (pcVar6->source_pc <= uVar32)) {
          if (thumb_mode == 0) {
            iVar23 = (int)uVar35 >> 2;
          }
          else {
            iVar23 = (int)uVar35 >> 1;
          }
          iVar13 = uVar30 + iVar23 * 0x1c;
          pcVar6->internal_link_offset = (u16)iVar23;
          uVar25 = *(ushort *)(iVar13 + 0x12);
          *(u16 *)(iVar20 + 0xc) = (u16)iVar23;
          *(ushort *)(iVar20 + 0x12) =
               *(ushort *)(iVar20 + 0x12) | uVar25 | *(ushort *)(iVar13 + 0xe);
          *(byte *)(iVar13 + 0x16) = *(byte *)(iVar13 + 0x16) | 2;
        }
        else if (local_4c->delayed_block_position == 0) {
LAB_08025cf0:
          pvVar7 = cpu_block_lookup_recursive(cpu,uVar32);
          uVar30 = pc_1;
          if (pvVar7 == (void *)0x0) {
            uVar22 = local_4c->position;
            local_4c->data[uVar22].pc = pcVar6->target_pc;
            local_4c->position = uVar22 + 1;
            pcVar6->translated_block = (void *)0x0;
            pcVar6->delayed_target = local_4c->data + uVar22;
            *(undefined2 *)(iVar20 + 0x12) = 0x7fff;
            *(undefined *)(iVar20 + 0x15) = 0xf;
          }
          else {
            iVar23 = *(int *)((int)pvVar7 + -4);
            pcVar6->delayed_target = (cpu_branch_delayed_target_struct *)0x0;
            *(ushort *)(iVar20 + 0x12) =
                 *(ushort *)(iVar23 + 0xc) & 0x7fff | *(ushort *)(iVar20 + 0x12);
            *(byte *)(iVar20 + 0x15) =
                 *(byte *)(iVar20 + 0x15) | (byte)*(undefined2 *)(iVar23 + 0xe);
            pcVar6->translated_block = pvVar7;
          }
        }
        else {
          if (local_4c->delayed_block_pc[0] != uVar32) {
            puVar29 = local_4c->delayed_block_pc;
            uVar30 = 0;
            do {
              uVar30 = uVar30 + 1;
              if (local_4c->delayed_block_position == uVar30) goto LAB_08025cf0;
              puVar29 = puVar29 + 1;
            } while (uVar32 != *puVar29);
          }
          uVar30 = local_4c->position;
          local_4c->data[uVar30].pc = uVar32;
          local_4c->position = uVar30 + 1;
          pcVar6->translated_block = (void *)0x0;
          pcVar6->delayed_target = local_4c->data + uVar30;
          *(undefined2 *)(iVar20 + 0x12) = 0x7fff;
          *(undefined *)(iVar20 + 0x15) = 0xf;
          uVar30 = pc_1;
        }
      }
      else {
        *(undefined2 *)(iVar20 + 0x12) = 0x7fff;
        *(undefined *)(iVar20 + 0x15) = 0xf;
      }
      uVar17 = uVar17 + 1;
      pcVar6 = pcVar6 + 1;
    } while (uVar17 < local_34);
    uVar22 = (ptVar15->delayed_targets).delayed_block_position;
  }
  uVar9 = (uint)local_38;
  (ptVar15->delayed_targets).delayed_block_position = uVar22 - 1;
  puVar24 = (uint *)(uVar30 + uVar9 * 0x1c + -0x1c);
  local_32 = *(ushort *)((int)puVar24 + 0xe);
  local_30 = *(byte *)(puVar24 + 5) & 0xf;
  if (uVar9 != 0) {
    uVar17 = 0;
    do {
      uVar25 = *(ushort *)((int)puVar24 + 0x12);
      bVar31 = *(byte *)((int)puVar24 + 0x15);
      if (*(ushort *)(puVar24 + 3) != 0) {
        iVar20 = uVar30 + (uint)*(ushort *)(puVar24 + 3) * 0x1c;
        bVar31 = bVar31 | *(byte *)(iVar20 + 0x14) & 0xf & ~(*(byte *)(iVar20 + 0x14) >> 4) |
                          *(byte *)(iVar20 + 0x15);
        uVar25 = uVar25 | *(ushort *)(iVar20 + 0xe) & ~*(ushort *)(iVar20 + 0x10) |
                          *(ushort *)(iVar20 + 0x12);
      }
      local_30 = local_30 | bVar31;
      local_32 = local_32 | uVar25;
      *(ushort *)((int)puVar24 + 0x12) = local_32;
      *(byte *)((int)puVar24 + 0x15) = local_30;
      if (0xdfffffff < *puVar24) {
        local_30 = local_30 & ~(*(byte *)(puVar24 + 5) >> 4);
        local_32 = local_32 & ~*(ushort *)(puVar24 + 4);
      }
      uVar17 = uVar17 + 1;
      local_30 = *(byte *)(puVar24 + 5) & 0xf | local_30;
      local_32 = *(ushort *)((int)puVar24 + 0xe) | local_32;
      puVar24 = puVar24 + -7;
    } while (uVar9 != uVar17);
  }
  new_block_ptr = cpu_translate_block((cpu_block_struct *)&stack0xffffffb4,cpu,pc,thumb_mode);
cpu_block_create_done:
  free((void *)pc_1);
  if (local_2c != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return new_block_ptr;
}


