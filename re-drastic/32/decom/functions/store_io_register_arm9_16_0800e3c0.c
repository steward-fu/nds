/*
 * Ghidra decompilation
 *
 * Function : store_io_register_arm9_16
 * Address  : 0800e3c0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void store_io_register_arm9_16(memory_struct *memory,u32 address,u16 value)

{
  u8 uVar1;
  ushort uVar2;
  byte value_00;
  int iVar3;
  int iVar4;
  video_2d_struct *video_2d;
  video_2d_struct *video_2d_00;
  video_2d_struct *video_2d_1;
  u32 ie_value;
  u32 prescale_select;
  u32 prescale_select_1;
  u32 prescale_select_2;
  u32 prescale_select_3;
  u32 ie_value_1;
  u32 *puVar5;
  u32 new_ie_value;
  uint uVar6;
  cpu_struct *pcVar7;
  cpu_struct *cpu;
  u32 scanline_number;
  u32 scanline_number_1;
  u32 new_ie_value_1;
  cpu_struct *cpu_5;
  uint uVar8;
  u32 uVar9;
  cpu_struct *cpu_1;
  cpu_struct *cpu_2;
  cpu_struct *cpu_3;
  cpu_struct *cpu_4;
  s32 offset_cycles;
  s32 offset_cycles_1;
  s32 offset_cycles_2;
  s32 offset_cycles_3;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  system_struct *psVar15;
  video_2d_event_struct event;
  
  iVar3 = __stack_chk_guard;
  uVar8 = (uint)value;
  if (address == 0x362) goto LAB_0800eae0;
  value_00 = (byte)value;
  if (address < 0x363) {
    if (address == 0x216) goto LAB_0800e4bc;
    if (address < 0x217) {
      if (address == 0x102) {
        pcVar7 = memory->memory_interface_arm9->cpu;
        if ((value & 3) == 0) {
          iVar4 = 1;
          pcVar7->timers[0].prescale = '\x01';
        }
        else {
          iVar4 = (uVar8 & 3) * 2 + 5;
          pcVar7->timers[0].prescale = (u8)iVar4;
        }
        uVar9 = 0x10000 - (uint)pcVar7->timers[0].reload_value << iVar4;
        pcVar7->timers[0].reload_cycles = uVar9;
        if ((value & 0x80) == 0) {
          if (pcVar7->timers[0].event_pending != '\0') {
            remove_event(&memory->system->event_list,7);
            pcVar7->timers[0].event_pending = value_00 & 0x80;
          }
        }
        else if (((pcVar7->timers[0].control & 0x80) == 0) && ((value & 4) == 0)) {
          psVar15 = memory->system;
          uVar13 = pcVar7->cycles_remaining;
          uVar1 = pcVar7->timers[0].event_pending;
          uVar10 = *(uint *)&psVar15->global_cycles;
          iVar12 = *(int *)((int)&psVar15->global_cycles + 4);
          uVar6 = psVar15->cycles_to_next_event;
          uVar11 = uVar10 + uVar6;
          iVar4 = uVar11 - uVar13;
          iVar14 = *(int *)&psVar15->global_cycles;
          *(int *)&pcVar7->timers[0].reload_timestamp = iVar4;
          *(uint *)((int)&pcVar7->timers[0].reload_timestamp + 4) =
               (iVar12 + (uint)CARRY4(uVar10,uVar6)) -
               (((int)uVar13 >> 0x1f) + (uint)(uVar11 < uVar13));
          offset_cycles_3 = (iVar4 - iVar14) + uVar9;
          if ((uint)offset_cycles_3 < uVar6) {
            offset_cycles_3 = uVar6;
          }
          if (uVar1 != '\0') {
            remove_event(&psVar15->event_list,7);
          }
          schedule_event(&psVar15->event_list,offset_cycles_3,7);
          pcVar7->timers[0].event_pending = '\x01';
        }
        pcVar7->timers[0].control = value;
      }
      else {
        if (address < 0x103) {
          if (address < 0x70) {
            if (0x6b < address) {
LAB_0800ea24:
              uVar2 = memory->system->scanline_number;
              video_2d_00 = memory->video->video_2d_engine;
              goto joined_r0x0800e744;
            }
            if (address < 0x56) {
              if ((7 < address) || (address < 4)) goto LAB_0800ea24;
            }
            else if (address == 0x60) {
              uVar8 = uVar8 & 0xffffcfff;
              memory->geometry->display_3d_control = uVar8;
              goto LAB_0800e6c8;
            }
          }
          else {
            if (address == 0xd2) {
              *(u16 *)(memory->arm9_io_registers + 0xd2) = value;
              uVar9 = CONCAT22(value,*(undefined2 *)(memory->arm9_io_registers + 0xd0));
              if (((short)value < 0) && (-1 < (int)(memory->dma_arm9).channels[2].control)) {
                puVar5 = (memory->dma_arm9).channels[2].io_region;
                uVar8 = (uVar9 << 2) >> 0x1d;
                (memory->dma_arm9).channels[2].start_type = (byte)((uVar9 << 2) >> 0x1d);
                (memory->dma_arm9).channels[2].source_address = *puVar5;
                (memory->dma_arm9).channels[2].dest_address = puVar5[1];
                (memory->dma_arm9).channels[2].control = uVar9;
                if (uVar8 == 7 || uVar8 == 0) {
                  dma_transfer(&memory->dma_arm9,(memory->dma_arm9).channels + 2);
                }
              }
              else {
                (memory->dma_arm9).channels[2].control = uVar9;
              }
              goto LAB_0800e4bc;
            }
            if (address < 0xd3) {
              if (address == 0xba) {
                *(u16 *)(memory->arm9_io_registers + 0xba) = value;
                uVar9 = CONCAT22(value,*(undefined2 *)(memory->arm9_io_registers + 0xb8));
                if (((short)value < 0) && (-1 < (int)(memory->dma_arm9).channels[0].control)) {
                  puVar5 = (memory->dma_arm9).channels[0].io_region;
                  uVar8 = (uVar9 << 2) >> 0x1d;
                  (memory->dma_arm9).channels[0].start_type = (byte)((uVar9 << 2) >> 0x1d);
                  (memory->dma_arm9).channels[0].source_address = *puVar5;
                  (memory->dma_arm9).channels[0].dest_address = puVar5[1];
                  (memory->dma_arm9).channels[0].control = uVar9;
                  if (uVar8 == 7 || uVar8 == 0) {
                    dma_transfer(&memory->dma_arm9,(memory->dma_arm9).channels);
                  }
                }
                else {
                  (memory->dma_arm9).channels[0].control = uVar9;
                }
                goto LAB_0800e4bc;
              }
              if (address == 0xc6) {
                *(u16 *)(memory->arm9_io_registers + 0xc6) = value;
                uVar9 = CONCAT22(value,*(undefined2 *)(memory->arm9_io_registers + 0xc4));
                if (((short)value < 0) && (-1 < (int)(memory->dma_arm9).channels[1].control)) {
                  puVar5 = (memory->dma_arm9).channels[1].io_region;
                  uVar8 = (uVar9 << 2) >> 0x1d;
                  (memory->dma_arm9).channels[1].start_type = (byte)((uVar9 << 2) >> 0x1d);
                  (memory->dma_arm9).channels[1].source_address = *puVar5;
                  (memory->dma_arm9).channels[1].dest_address = puVar5[1];
                  (memory->dma_arm9).channels[1].control = uVar9;
                  if (uVar8 == 7 || uVar8 == 0) {
                    dma_transfer(&memory->dma_arm9,(memory->dma_arm9).channels + 1);
                  }
                }
                else {
                  (memory->dma_arm9).channels[1].control = uVar9;
                }
                goto LAB_0800e4bc;
              }
            }
            else {
              if (address == 0xde) {
                *(u16 *)(memory->arm9_io_registers + 0xde) = value;
                uVar9 = CONCAT22(value,*(undefined2 *)(memory->arm9_io_registers + 0xdc));
                if (((short)value < 0) && (-1 < (int)(memory->dma_arm9).channels[3].control)) {
                  puVar5 = (memory->dma_arm9).channels[3].io_region;
                  uVar8 = (uVar9 << 2) >> 0x1d;
                  (memory->dma_arm9).channels[3].start_type = (byte)((uVar9 << 2) >> 0x1d);
                  (memory->dma_arm9).channels[3].source_address = *puVar5;
                  (memory->dma_arm9).channels[3].dest_address = puVar5[1];
                  (memory->dma_arm9).channels[3].control = uVar9;
                  if (uVar8 == 7 || uVar8 == 0) {
                    dma_transfer(&memory->dma_arm9,(memory->dma_arm9).channels + 3);
                  }
                }
                else {
                  (memory->dma_arm9).channels[3].control = uVar9;
                }
                goto LAB_0800e4bc;
              }
              if (address == 0x100) {
                memory->memory_interface_arm9->cpu->timers[0].reload_value = value;
                goto LAB_0800e6c8;
              }
            }
          }
LAB_0800e7e4:
          store_io_register_arm9_8(memory,address,value_00);
          store_io_register_arm9_8(memory,address + 1,(u8)(value >> 8));
          goto LAB_0800e4bc;
        }
        if (address == 0x10e) {
          pcVar7 = memory->memory_interface_arm9->cpu;
          if ((value & 3) == 0) {
            iVar4 = 1;
            pcVar7->timers[3].prescale = '\x01';
          }
          else {
            iVar4 = (uVar8 & 3) * 2 + 5;
            pcVar7->timers[3].prescale = (u8)iVar4;
          }
          uVar9 = 0x10000 - (uint)pcVar7->timers[3].reload_value << iVar4;
          pcVar7->timers[3].reload_cycles = uVar9;
          if ((value & 0x80) == 0) {
            if (pcVar7->timers[3].event_pending != '\0') {
              remove_event(&memory->system->event_list,10);
              pcVar7->timers[3].event_pending = value_00 & 0x80;
            }
          }
          else if (((pcVar7->timers[3].control & 0x80) == 0) && ((value & 4) == 0)) {
            psVar15 = memory->system;
            uVar13 = pcVar7->cycles_remaining;
            uVar1 = pcVar7->timers[3].event_pending;
            uVar10 = *(uint *)&psVar15->global_cycles;
            iVar12 = *(int *)((int)&psVar15->global_cycles + 4);
            uVar6 = psVar15->cycles_to_next_event;
            uVar11 = uVar10 + uVar6;
            iVar4 = uVar11 - uVar13;
            iVar14 = *(int *)&psVar15->global_cycles;
            *(int *)&pcVar7->timers[3].reload_timestamp = iVar4;
            *(uint *)((int)&pcVar7->timers[3].reload_timestamp + 4) =
                 (iVar12 + (uint)CARRY4(uVar10,uVar6)) -
                 (((int)uVar13 >> 0x1f) + (uint)(uVar11 < uVar13));
            offset_cycles_2 = (iVar4 - iVar14) + uVar9;
            if ((uint)offset_cycles_2 < uVar6) {
              offset_cycles_2 = uVar6;
            }
            if (uVar1 != '\0') {
              remove_event(&psVar15->event_list,10);
            }
            schedule_event(&psVar15->event_list,offset_cycles_2,10);
            pcVar7->timers[3].event_pending = '\x01';
          }
          pcVar7->timers[3].control = value;
        }
        else if (address < 0x10f) {
          if (address == 0x108) {
            memory->memory_interface_arm9->cpu->timers[2].reload_value = value;
          }
          else if (address < 0x109) {
            if (address == 0x104) {
              memory->memory_interface_arm9->cpu->timers[1].reload_value = value;
            }
            else {
              if (address != 0x106) goto LAB_0800e7e4;
              pcVar7 = memory->memory_interface_arm9->cpu;
              if ((value & 3) == 0) {
                iVar4 = 1;
                pcVar7->timers[1].prescale = '\x01';
              }
              else {
                iVar4 = (uVar8 & 3) * 2 + 5;
                pcVar7->timers[1].prescale = (u8)iVar4;
              }
              uVar9 = 0x10000 - (uint)pcVar7->timers[1].reload_value << iVar4;
              pcVar7->timers[1].reload_cycles = uVar9;
              if ((value & 0x80) == 0) {
                if (pcVar7->timers[1].event_pending != '\0') {
                  remove_event(&memory->system->event_list,8);
                  pcVar7->timers[1].event_pending = value_00 & 0x80;
                }
              }
              else if (((pcVar7->timers[1].control & 0x80) == 0) && ((value & 4) == 0)) {
                psVar15 = memory->system;
                uVar13 = pcVar7->cycles_remaining;
                uVar1 = pcVar7->timers[1].event_pending;
                uVar10 = *(uint *)&psVar15->global_cycles;
                iVar12 = *(int *)((int)&psVar15->global_cycles + 4);
                uVar6 = psVar15->cycles_to_next_event;
                uVar11 = uVar10 + uVar6;
                iVar4 = uVar11 - uVar13;
                iVar14 = *(int *)&psVar15->global_cycles;
                *(int *)&pcVar7->timers[1].reload_timestamp = iVar4;
                *(uint *)((int)&pcVar7->timers[1].reload_timestamp + 4) =
                     (iVar12 + (uint)CARRY4(uVar10,uVar6)) -
                     (((int)uVar13 >> 0x1f) + (uint)(uVar11 < uVar13));
                offset_cycles = (iVar4 - iVar14) + uVar9;
                if ((uint)offset_cycles < uVar6) {
                  offset_cycles = uVar6;
                }
                if (uVar1 != '\0') {
                  remove_event(&psVar15->event_list,8);
                }
                schedule_event(&psVar15->event_list,offset_cycles,8);
                pcVar7->timers[1].event_pending = '\x01';
              }
              pcVar7->timers[1].control = value;
            }
          }
          else if (address == 0x10a) {
            pcVar7 = memory->memory_interface_arm9->cpu;
            if ((value & 3) == 0) {
              iVar4 = 1;
              pcVar7->timers[2].prescale = '\x01';
            }
            else {
              iVar4 = (uVar8 & 3) * 2 + 5;
              pcVar7->timers[2].prescale = (u8)iVar4;
            }
            uVar9 = 0x10000 - (uint)pcVar7->timers[2].reload_value << iVar4;
            pcVar7->timers[2].reload_cycles = uVar9;
            if ((value & 0x80) == 0) {
              if (pcVar7->timers[2].event_pending != '\0') {
                remove_event(&memory->system->event_list,9);
                pcVar7->timers[2].event_pending = value_00 & 0x80;
              }
            }
            else if (((pcVar7->timers[2].control & 0x80) == 0) && ((value & 4) == 0)) {
              psVar15 = memory->system;
              uVar13 = pcVar7->cycles_remaining;
              uVar1 = pcVar7->timers[2].event_pending;
              uVar10 = *(uint *)&psVar15->global_cycles;
              iVar12 = *(int *)((int)&psVar15->global_cycles + 4);
              uVar6 = psVar15->cycles_to_next_event;
              uVar11 = uVar10 + uVar6;
              iVar4 = uVar11 - uVar13;
              iVar14 = *(int *)&psVar15->global_cycles;
              *(int *)&pcVar7->timers[2].reload_timestamp = iVar4;
              *(uint *)((int)&pcVar7->timers[2].reload_timestamp + 4) =
                   (iVar12 + (uint)CARRY4(uVar10,uVar6)) -
                   (((int)uVar13 >> 0x1f) + (uint)(uVar11 < uVar13));
              offset_cycles_1 = (iVar4 - iVar14) + uVar9;
              if ((uint)offset_cycles_1 < uVar6) {
                offset_cycles_1 = uVar6;
              }
              if (uVar1 != '\0') {
                remove_event(&psVar15->event_list,9);
              }
              schedule_event(&psVar15->event_list,offset_cycles_1,9);
              pcVar7->timers[2].event_pending = '\x01';
            }
            pcVar7->timers[2].control = value;
          }
          else {
            if (address != 0x10c) goto LAB_0800e7e4;
            memory->memory_interface_arm9->cpu->timers[3].reload_value = value;
          }
        }
        else {
          if (address != 0x208) {
            if (0x208 < address) {
              if (address == 0x212) {
                uVar8 = *(uint *)(memory->arm9_io_registers + 0x210) & 0xffff | uVar8 << 0x10;
                uVar6 = uVar8 & ~*(uint *)(memory->arm9_io_registers + 0x210);
                *(uint *)(memory->arm9_io_registers + 0x210) = uVar8;
              }
              else {
                if (address == 0x214) {
                  *(uint *)(memory->arm9_io_registers + 0x214) =
                       *(uint *)(memory->arm9_io_registers + 0x214) & ~uVar8;
                  pcVar7 = memory->memory_interface_arm9->cpu;
                  pcVar7->active_interrupts = ~uVar8 & pcVar7->active_interrupts;
                  goto LAB_0800e4bc;
                }
                if (address != 0x210) goto LAB_0800e7e4;
                uVar8 = uVar8 | *(uint *)(memory->arm9_io_registers + 0x210) & 0xffff0000;
                uVar6 = uVar8 & ~*(uint *)(memory->arm9_io_registers + 0x210);
                *(uint *)(memory->arm9_io_registers + 0x210) = uVar8;
              }
              if (uVar6 != 0) {
                pcVar7 = memory->memory_interface_arm9->cpu;
                uVar8 = uVar8 & *(uint *)(memory->arm9_io_registers + 0x214) &
                                -*(int *)(memory->arm9_io_registers + 0x208);
                pcVar7->active_interrupts = uVar8;
                if (uVar8 != 0) {
                  pcVar7->alert_flags = pcVar7->alert_flags | 2;
                }
              }
              goto LAB_0800e4bc;
            }
            if (address == 0x188) {
              __printf_chk(1,"ARM9 IPCFIFOSEND write16 %x\n");
              goto LAB_0800e4bc;
            }
            if (address == 0x1a0) {
              *(u16 *)(memory->arm9_io_registers + 0x1a0) = value & 0xff7f;
              goto LAB_0800e4bc;
            }
            goto LAB_0800e7e4;
          }
          uVar8 = uVar8 & 1;
          pcVar7 = memory->memory_interface_arm9->cpu;
          if (((value & 1) == 0) || (*(int *)(memory->arm9_io_registers + 0x208) != 0)) {
            pcVar7->active_interrupts = 0;
          }
          else {
            uVar8 = *(uint *)(memory->arm9_io_registers + 0x214) &
                    *(uint *)(memory->arm9_io_registers + 0x210);
            pcVar7->active_interrupts = uVar8;
            if (uVar8 == 0) {
              uVar8 = 1;
            }
            else {
              uVar8 = 1;
              pcVar7->alert_flags = pcVar7->alert_flags | 2;
            }
          }
        }
      }
    }
    else {
      if (address != 0x330) {
        if (address < 0x331) {
          if (address != 0x298) {
            if (address < 0x299) {
              if (address != 0x292) {
                if (address < 0x293) {
                  if (address == 0x280) {
                    uVar8 = uVar8 & 0x7fff;
                    memory->divide_result_available = '\0';
                    goto LAB_0800e6c8;
                  }
                  if (address == 0x290) goto LAB_0800ed7c;
                }
                else if ((address == 0x294) || (address == 0x296)) goto LAB_0800ed7c;
                goto LAB_0800e7e4;
              }
            }
            else if (address != 0x29e) {
              if (0x29e < address) {
                if ((address == 0x2b8) || (address == 0x2ba)) {
                  memory->sqrt_result_available = '\0';
                }
                else {
                  if (address != 0x2b0) goto LAB_0800e7e4;
                  uVar8 = uVar8 & 0x7fff;
                  memory->sqrt_result_available = '\0';
                }
                goto LAB_0800e6c8;
              }
              if ((address != 0x29a) && (address != 0x29c)) goto LAB_0800e7e4;
            }
          }
LAB_0800ed7c:
          memory->divide_result_available = '\0';
          goto LAB_0800e6c8;
        }
        if (address != 0x33e) {
          if (0x33e < address) {
            if (address == 0x354) {
              memory->geometry->clear_depth = value;
            }
            else if (address < 0x355) {
              if (address == 0x350) {
                *(u16 *)&memory->geometry->clear_color = value;
              }
              else {
                if (address != 0x352) goto LAB_0800e7e4;
                memory->geometry->clear_color =
                     memory->geometry->clear_color & 0xffff | uVar8 << 0x10;
              }
            }
            else if (address == 0x35c) {
              memory->geometry->fog_offset = value;
            }
            else {
              if (address == 0x360) goto LAB_0800eae0;
              if (address != 0x356) goto LAB_0800e7e4;
              memory->geometry->clear_image_offset = value;
            }
            goto LAB_0800e6c8;
          }
          if (address != 0x336) {
            if (address < 0x337) {
              if ((address == 0x332) || (address == 0x334)) goto LAB_0800ebf0;
            }
            else if ((address == 0x33a) || ((address == 0x33c || (address == 0x338))))
            goto LAB_0800ebf0;
            goto LAB_0800e7e4;
          }
        }
      }
LAB_0800ebf0:
      geometry_store_edge_color_entry(memory->geometry,address - 0x330 >> 1,uVar8);
    }
  }
  else {
    if (address == 0x398) goto LAB_0800ec40;
    if (address < 0x399) {
      if (address != 0x37c) {
        if (0x37c < address) {
          if (address != 0x38a) {
            if (address < 0x38b) {
              if (address != 0x382) {
                if (address < 899) {
                  if (address == 0x37e) goto LAB_0800eae0;
                  if (address == 0x380) goto LAB_0800ec40;
                }
                else if (((address == 0x386) || (address == 0x388)) || (address == 900))
                goto LAB_0800ec40;
                goto LAB_0800e7e4;
              }
            }
            else if (address != 0x390) {
              if (address < 0x391) {
                if ((address == 0x38c) || (address == 0x38e)) goto LAB_0800ec40;
              }
              else if ((address == 0x394) || ((address == 0x396 || (address == 0x392))))
              goto LAB_0800ec40;
              goto LAB_0800e7e4;
            }
          }
          goto LAB_0800ec40;
        }
        if (address != 0x36e) {
          if (address < 0x36f) {
            if (address != 0x368) {
              if (address < 0x369) {
                if ((address == 0x364) || (address == 0x366)) goto LAB_0800eae0;
              }
              else if ((address == 0x36a) || (address == 0x36c)) goto LAB_0800eae0;
              goto LAB_0800e7e4;
            }
          }
          else if (address != 0x374) {
            if (address < 0x375) {
              if ((address == 0x370) || (address == 0x372)) goto LAB_0800eae0;
            }
            else if ((address == 0x378) || ((address == 0x37a || (address == 0x376))))
            goto LAB_0800eae0;
            goto LAB_0800e7e4;
          }
        }
      }
LAB_0800eae0:
      geometry_store_fog_table_entry(memory->geometry,address - 0x360,uVar8);
      geometry_store_fog_table_entry(memory->geometry,address - 0x35f,(uint)(value >> 8));
      goto LAB_0800e6c8;
    }
    if (address != 0x3b2) {
      if (0x3b2 < address) {
        if (address == 0x610) {
          memory->geometry->display_dot_depth = value;
          goto LAB_0800e6c8;
        }
        if (address < 0x611) {
          if (address != 0x3b8) {
            if (address < 0x3b9) {
              if ((address == 0x3b4) || (address == 0x3b6)) goto LAB_0800ec40;
            }
            else if ((address == 0x3bc) || ((address == 0x3be || (address == 0x3ba))))
            goto LAB_0800ec40;
            goto LAB_0800e7e4;
          }
          goto LAB_0800ec40;
        }
        if (address < 0x1056) {
          if (address < 0x1008) {
            uVar6 = address - 0x1000;
            goto joined_r0x0800f0ec;
          }
        }
        else {
          uVar6 = address - 0x106c;
joined_r0x0800f0ec:
          if (3 < uVar6) goto LAB_0800e7e4;
        }
        uVar2 = memory->system->scanline_number;
        video_2d_00 = memory->video->video_2d_engine + 1;
joined_r0x0800e744:
        if (uVar2 < 0xc0) {
          video_2d_queue_event(video_2d_00,address,uVar8,2,(uint)uVar2);
        }
        else {
          event.byte_width = '\x02';
          event.address = address;
          event.value = uVar8;
          video_2d_process_event(video_2d_00,&event);
        }
        goto LAB_0800e6c8;
      }
      if (address != 0x3a4) {
        if (address < 0x3a5) {
          if (address != 0x39e) {
            if (address < 0x39f) {
              if ((address == 0x39a) || (address == 0x39c)) goto LAB_0800ec40;
            }
            else if ((address == 0x3a0) || (address == 0x3a2)) goto LAB_0800ec40;
            goto LAB_0800e7e4;
          }
        }
        else if (address != 0x3aa) {
          if (address < 0x3ab) {
            if ((address == 0x3a6) || (address == 0x3a8)) goto LAB_0800ec40;
          }
          else if ((address == 0x3ae) || ((address == 0x3b0 || (address == 0x3ac))))
          goto LAB_0800ec40;
          goto LAB_0800e7e4;
        }
      }
    }
LAB_0800ec40:
    geometry_store_toon_table_entry(memory->geometry,address - 0x380 >> 1,uVar8);
  }
LAB_0800e6c8:
  *(short *)(memory->arm9_io_registers + (address & 0x7fff)) = (short)uVar8;
LAB_0800e4bc:
  if (iVar3 == __stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


