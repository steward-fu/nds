/*
 * Ghidra decompilation
 *
 * Function : process_cheat
 * Address  : 080a1210
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable code_a:u32[r2:4] conflicts with parameter, skipped. */

void process_cheat(system_struct *system,cheat_struct *cheat,u32 frame_count)

{
  bool bVar1;
  int iVar2;
  u8 uVar3;
  byte bVar4;
  u16 uVar5;
  u32 value;
  u32 value_1;
  u32 value_2;
  u32 value_3;
  u32 value_4;
  u32 value_5;
  u32 value_6;
  u32 value_7;
  void *pvVar6;
  u8 *block_resume_ptr;
  u32 **cheat_data;
  cpu_struct *cpu_00;
  cpu_struct *cpu;
  u32 op_a;
  uint uVar7;
  u32 dest;
  u32 address_1;
  u32 address_2;
  u32 address_3;
  u32 address_4;
  u32 address_5;
  u32 address_6;
  u32 address_7;
  u32 address_8;
  u32 dest_1;
  u32 address_12;
  uint uVar8;
  u32 *puVar9;
  u32 *cheat_data_end;
  u32 opcode;
  uint uVar10;
  u32 page_table_entry_2;
  u32 page_table_entry_7;
  u8 *puVar11;
  u32 page_table_entry_1;
  u32 buffer_offset;
  uint uVar12;
  u32 page_table_entry_3;
  u32 uVar13;
  u32 page_table_entry_5;
  u32 address_14;
  u32 address_15;
  u32 page_table_entry_8;
  u32 *puVar14;
  u32 page_table_entry;
  u32 *puVar15;
  u32 page_table_entry_6;
  u32 buffer_offset_1;
  u32 address_9;
  u32 address_10;
  u32 address_11;
  int iVar16;
  u32 code_b;
  uint uVar17;
  u32 uVar18;
  u32 address_13;
  u32 address_16;
  memory_interface_struct *memory_interface;
  u8 *parameter_bytes;
  u32 page_table_entry_4;
  bool bVar19;
  u32 local_48;
  int local_44;
  u32 *local_40;
  uint local_3c;
  
  local_40 = cheat->data;
  cpu_00 = &system->cpu_arm7;
  puVar9 = local_40 + cheat->data_length;
  if (puVar9 <= local_40) {
    return;
  }
  memory_interface = &(system->cpu_arm7).memory_interface;
  bVar1 = false;
  local_48 = 0;
  local_44 = 0;
  local_3c = 0xffffffff;
  puVar15 = local_40;
  uVar12 = 0xffffffff;
  uVar13 = 0;
LAB_080a12bc:
  do {
    uVar8 = *puVar15;
    uVar17 = puVar15[1];
    puVar14 = puVar15 + 2;
    uVar7 = uVar8 & 0xfffffff;
    uVar10 = uVar12;
    uVar18 = uVar13;
    iVar2 = local_44;
    if ((((uVar12 & 1) == 0) && ((uVar8 & 0xfeffffff) != 0xd0000000)) &&
       (uVar8 != 0xd2000000 && uVar8 >> 0x1c != 0xe)) goto LAB_080a12b0;
    switch(uVar8 >> 0x1c) {
    case 1:
      uVar8 = uVar7 + uVar13 & 0xfffffffe;
      uVar12 = (system->cpu_arm7).reg[(uVar7 + uVar13 >> 0xb) + 0x15];
      iVar16 = uVar12 * 4;
      bVar19 = (uVar12 & 0x40000000) == 0;
      if (bVar19) {
        puVar15 = puVar14;
      }
      uVar5 = (u16)uVar17;
      if (bVar19) {
        *(u16 *)(uVar8 + iVar16) = uVar5;
        puVar14 = puVar15;
      }
      else if ((int)uVar12 < 0) {
        if (uVar17 != *(ushort *)(uVar8 + iVar16)) {
          cpu_block_check_allocation16(cpu_00,uVar8);
          bVar1 = true;
          *(u16 *)(uVar8 + iVar16) = uVar5;
        }
      }
      else {
        extended_store16(memory_interface,uVar8,uVar5);
      }
      break;
    case 2:
      uVar7 = uVar7 + uVar13;
      uVar12 = (system->cpu_arm7).reg[(uVar7 >> 0xb) + 0x15];
      bVar19 = (uVar12 & 0x40000000) == 0;
      if (bVar19) {
        puVar15 = puVar14;
      }
      uVar3 = (u8)uVar17;
      if (bVar19) {
        *(u8 *)(uVar7 + uVar12 * 4) = uVar3;
        puVar14 = puVar15;
      }
      else if ((int)uVar12 < 0) {
        if (uVar17 != *(byte *)(uVar7 + uVar12 * 4)) {
          cpu_block_check_allocation8(cpu_00,uVar7);
          bVar1 = true;
          *(u8 *)(uVar7 + uVar12 * 4) = uVar3;
        }
      }
      else {
        extended_store8(memory_interface,uVar7,uVar3);
      }
      break;
    case 3:
      if (uVar7 == 0) {
        uVar7 = uVar13;
      }
      uVar13 = load_memory32(memory_interface,uVar7);
      uVar10 = uVar12 << 1;
      if (uVar13 < uVar17) {
        uVar10 = uVar12 << 1 | 1;
      }
      break;
    case 4:
      if (uVar7 == 0) {
        uVar7 = uVar13;
      }
      uVar13 = load_memory32(memory_interface,uVar7);
      uVar10 = uVar12 << 1;
      if (uVar17 < uVar13) {
        uVar10 = uVar12 << 1 | 1;
      }
      break;
    case 5:
      if (uVar7 == 0) {
        uVar7 = uVar13;
      }
      uVar13 = load_memory32(memory_interface,uVar7);
      uVar10 = uVar12 << 1;
      if (uVar17 == uVar13) {
        uVar10 = uVar12 << 1 | 1;
      }
      break;
    case 6:
      if (uVar7 == 0) {
        uVar7 = uVar13;
      }
      uVar13 = load_memory32(memory_interface,uVar7);
      uVar10 = uVar12 << 1;
      if (uVar17 != uVar13) {
        uVar10 = uVar12 << 1 | 1;
      }
      break;
    case 7:
      if (uVar7 == 0) {
        uVar7 = uVar13;
      }
      uVar5 = load_memory16(memory_interface,uVar7);
      value_3 = (uint)uVar5 & ~(uVar17 >> 0x10);
      uVar10 = uVar12 << 1;
      if (value_3 < (uVar17 & 0xffff)) {
        uVar10 = uVar12 << 1 | 1;
      }
      break;
    case 8:
      if (uVar7 == 0) {
        uVar7 = uVar13;
      }
      uVar5 = load_memory16(memory_interface,uVar7);
      value_2 = (uint)uVar5 & ~(uVar17 >> 0x10);
      uVar10 = uVar12 << 1;
      if ((uVar17 & 0xffff) < value_2) {
        uVar10 = uVar12 << 1 | 1;
      }
      break;
    case 9:
      if (uVar7 == 0) {
        uVar7 = uVar13;
      }
      uVar5 = load_memory16(memory_interface,uVar7);
      value_1 = (uint)uVar5 & ~(uVar17 >> 0x10);
      uVar10 = uVar12 << 1;
      if (value_1 == (uVar17 & 0xffff)) {
        uVar10 = uVar12 << 1 | 1;
      }
      break;
    case 10:
      if (uVar7 == 0) {
        uVar7 = uVar13;
      }
      uVar5 = load_memory16(memory_interface,uVar7);
      value = (uint)uVar5 & ~(uVar17 >> 0x10);
      uVar10 = uVar12 << 1;
      if (value != (uVar17 & 0xffff)) {
LAB_080a14d8:
        uVar10 = uVar12 << 1 | 1;
      }
      break;
    case 0xb:
      uVar18 = load_memory32(memory_interface,uVar7 + uVar13);
      break;
    case 0xc:
      if ((uVar8 & 0xffffff) == 0) {
        uVar7 = (uVar8 << 4) >> 0x1c;
        if (uVar7 == 5) {
          uVar10 = uVar12 << 1;
          if ((frame_count & 0xffff & uVar17) == uVar17 >> 0x10) goto LAB_080a14d8;
        }
        else if (uVar7 == 6) {
          uVar7 = uVar17 & 0xfffffffc;
          uVar12 = (system->cpu_arm7).reg[(uVar17 >> 0xb) + 0x15];
          if ((uVar12 & 0x40000000) == 0) {
            *(u32 *)(uVar7 + uVar12 * 4) = uVar13;
          }
          else if ((int)uVar12 < 0) {
            if (*(u32 *)(uVar7 + uVar12 * 4) != uVar13) {
              cpu_block_check_allocation32(cpu_00,uVar7);
              bVar1 = true;
              *(u32 *)(uVar7 + uVar12 * 4) = uVar13;
            }
          }
          else {
            extended_store32(memory_interface,uVar7,uVar13);
          }
        }
        else if (uVar7 == 0) {
          iVar2 = uVar17 + 1;
          local_40 = puVar14;
          local_3c = uVar12;
        }
      }
      break;
    case 0xd:
      if ((uVar8 & 0xffffff) == 0) {
        uVar18 = uVar17;
        switch((uVar8 << 4) >> 0x1c) {
        case 0:
          uVar18 = uVar13;
          if (uVar17 == 0) {
            uVar10 = uVar12 >> 1;
          }
          break;
        case 1:
          uVar18 = uVar13;
          if ((uVar17 == 0) && (uVar10 = local_3c, iVar2 = local_44 + -1, 0 < local_44 + -1)) {
LAB_080a192c:
            local_44 = local_44 + -1;
            puVar14 = local_40;
            uVar10 = uVar12;
            uVar18 = uVar13;
            iVar2 = local_44;
          }
          break;
        case 2:
          uVar18 = uVar13;
          if (uVar17 == 0) {
            if (0 < local_44 + -1) goto LAB_080a192c;
            uVar10 = 0xffffffff;
            uVar18 = uVar17;
            local_48 = uVar17;
            iVar2 = local_44 + -1;
          }
          break;
        case 4:
          uVar18 = uVar13;
          local_48 = local_48 + uVar17;
          break;
        case 5:
          uVar18 = uVar13;
          local_48 = uVar17;
          break;
        case 6:
          uVar12 = uVar17 + uVar13 & 0xfffffffc;
          uVar7 = (system->cpu_arm7).reg[(uVar17 + uVar13 >> 0xb) + 0x15];
          if ((uVar7 & 0x40000000) == 0) {
            *(u32 *)(uVar12 + uVar7 * 4) = local_48;
          }
          else if ((int)uVar7 < 0) {
            if (*(u32 *)(uVar12 + uVar7 * 4) != local_48) {
              cpu_block_check_allocation32(cpu_00,uVar12);
              *(u32 *)(uVar12 + uVar7 * 4) = local_48;
              bVar1 = true;
            }
          }
          else {
            extended_store32(memory_interface,uVar12,local_48);
          }
          uVar18 = uVar13 + 4;
          break;
        case 7:
          uVar7 = uVar17 + uVar13 & 0xfffffffe;
          uVar12 = (system->cpu_arm7).reg[(uVar17 + uVar13 >> 0xb) + 0x15];
          iVar16 = uVar12 * 4;
          if ((uVar12 & 0x40000000) == 0) {
            *(u16 *)(uVar7 + iVar16) = (u16)local_48;
          }
          else if ((int)uVar12 < 0) {
            if (*(ushort *)(uVar7 + iVar16) != local_48) {
              cpu_block_check_allocation16(cpu_00,uVar7);
              bVar1 = true;
              *(u16 *)(uVar7 + iVar16) = (u16)local_48;
            }
          }
          else {
            extended_store16(memory_interface,uVar7,(u16)local_48);
          }
          uVar18 = uVar13 + 2;
          break;
        case 8:
          uVar17 = uVar17 + uVar13;
          uVar12 = (system->cpu_arm7).reg[(uVar17 >> 0xb) + 0x15];
          if ((uVar12 & 0x40000000) == 0) {
            *(u8 *)(uVar17 + uVar12 * 4) = (u8)local_48;
          }
          else if ((int)uVar12 < 0) {
            if (*(byte *)(uVar17 + uVar12 * 4) != local_48) {
              cpu_block_check_allocation8(cpu_00,uVar17);
              bVar1 = true;
              *(u8 *)(uVar17 + uVar12 * 4) = (u8)local_48;
            }
          }
          else {
            extended_store8(memory_interface,uVar17,(u8)local_48);
          }
          uVar18 = uVar13 + 1;
          break;
        case 9:
          local_48 = load_memory32(memory_interface,uVar17 + uVar13);
          uVar18 = uVar13;
          break;
        case 10:
          uVar5 = load_memory16(memory_interface,uVar17 + uVar13);
          uVar18 = uVar13;
          local_48 = (uint)uVar5;
          break;
        case 0xb:
          bVar4 = load_memory8(memory_interface,uVar17 + uVar13);
          uVar18 = uVar13;
          local_48 = (uint)bVar4;
          break;
        case 0xc:
          uVar18 = uVar13 + uVar17;
        }
      }
      break;
    case 0xe:
      goto switchD_080a12dc_caseD_e;
    case 0xf:
      if (uVar17 != 0) {
        uVar18 = uVar17 + uVar13;
        iVar16 = uVar7 - uVar13;
        do {
          while( true ) {
            uVar12 = iVar16 + uVar13;
            uVar3 = load_memory8(memory_interface,uVar13);
            uVar7 = (system->cpu_arm7).reg[(uVar12 >> 0xb) + 0x15];
            if ((uVar7 & 0x40000000) != 0) break;
            *(u8 *)(uVar12 + uVar7 * 4) = uVar3;
LAB_080a1728:
            uVar13 = uVar13 + 1;
            if (uVar18 == uVar13) goto LAB_080a12b0;
          }
          if (-1 < (int)uVar7) {
            extended_store8(memory_interface,uVar12,uVar3);
            goto LAB_080a1728;
          }
          if (uVar3 == *(u8 *)(uVar12 + uVar7 * 4)) goto LAB_080a1728;
          uVar13 = uVar13 + 1;
          cpu_block_check_allocation8(cpu_00,uVar12);
          bVar1 = true;
          *(u8 *)(uVar12 + uVar7 * 4) = uVar3;
        } while (uVar18 != uVar13);
      }
      break;
    default:
      uVar8 = uVar7 + uVar13 & 0xfffffffc;
      uVar12 = (system->cpu_arm7).reg[(uVar7 + uVar13 >> 0xb) + 0x15];
      if ((uVar12 & 0x40000000) == 0) {
        *(uint *)(uVar8 + uVar12 * 4) = uVar17;
      }
      else if ((int)uVar12 < 0) {
        if (uVar17 != *(uint *)(uVar8 + uVar12 * 4)) {
          cpu_block_check_allocation32(cpu_00,uVar8);
          bVar1 = true;
          *(uint *)(uVar8 + uVar12 * 4) = uVar17;
        }
      }
      else {
        extended_store32(memory_interface,uVar8,uVar17);
      }
    }
LAB_080a12b0:
    local_44 = iVar2;
    puVar15 = puVar14;
    uVar12 = uVar10;
    uVar13 = uVar18;
  } while (puVar14 < puVar9);
  goto LAB_080a13e4;
switchD_080a12dc_caseD_e:
  if (((uVar12 & 1) != 0) && (uVar17 != 0)) {
    uVar7 = uVar7 + uVar13;
    puVar11 = (u8 *)((int)puVar15 + 7);
    uVar10 = uVar17 + uVar7;
    do {
      while( true ) {
        puVar11 = puVar11 + 1;
        uVar3 = *puVar11;
        uVar8 = (system->cpu_arm7).reg[(uVar7 >> 0xb) + 0x15];
        if ((uVar8 & 0x40000000) != 0) break;
        *(u8 *)(uVar7 + uVar8 * 4) = uVar3;
LAB_080a1358:
        uVar7 = uVar7 + 1;
        if (uVar10 == uVar7) goto LAB_080a13cc;
      }
      if (-1 < (int)uVar8) {
        extended_store8(memory_interface,uVar7,uVar3);
        goto LAB_080a1358;
      }
      if (uVar3 == *(u8 *)(uVar7 + uVar8 * 4)) goto LAB_080a1358;
      cpu_block_check_allocation8(cpu_00,uVar7);
      bVar1 = true;
      *(u8 *)(uVar7 + uVar8 * 4) = uVar3;
      uVar7 = uVar7 + 1;
    } while (uVar10 != uVar7);
  }
LAB_080a13cc:
  puVar15 = (u32 *)((int)puVar14 + (uVar17 + 7 & 0xfffffff8));
  if (puVar9 <= puVar15) {
LAB_080a13e4:
    if (!bVar1) {
      return;
    }
    puts("Cheat modified code.");
    fflush(stdout);
    cpu_block_flush(cpu_00,0x2000000);
    if ((system->cpu_arm7).block_resume_ptr == (void *)0x0) {
      return;
    }
    cpu_block_load_pc(cpu_00);
    pvVar6 = cpu_block_lookup_base(cpu_00,(system->cpu_arm7).pc);
    block_resume_ptr = (u8 *)((int)pvVar6 + 8);
    (system->cpu_arm7).block_resume_ptr = block_resume_ptr;
    return;
  }
  goto LAB_080a12bc;
}


