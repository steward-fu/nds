/*
 * Ghidra decompilation
 *
 * Function : store_io_register_arm9_8
 * Address  : 0800d6c8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void store_io_register_arm9_8(memory_struct *memory,u32 address,u8 value)

{
  ushort uVar1;
  int iVar2;
  u8 uVar3;
  u32 uVar4;
  u32 edge_value;
  video_2d_struct *video_2d;
  video_2d_struct *video_2d_00;
  video_2d_struct *video_2d_1;
  u32 toon_value;
  u32 ie_value;
  u32 ie_value_1;
  u8 *io_region_1;
  u32 ie_value_2;
  u32 ie_value_3;
  u32 *puVar5;
  u8 *puVar6;
  u8 *io_region_3;
  u8 *io_region;
  byte bVar7;
  u32 new_ie_value;
  cpu_struct *cpu;
  u32 new_ie_value_1;
  u32 ipc_control;
  u32 scanline_number_1;
  cpu_struct *pcVar8;
  cpu_struct *cpu_1;
  u32 scanline_number_2;
  cpu_struct *cpu_2;
  u32 new_ie_value_2;
  u32 new_ie_value_3;
  u32 dma_control;
  u32 dma_control_1;
  u32 dma_control_2;
  u32 dma_control_3;
  u32 dma_control_4;
  u32 dma_control_5;
  u32 dma_control_6;
  u32 dma_control_7;
  uint uVar9;
  uint uVar10;
  u32 scanline_number;
  u32 edge_entry;
  u32 toon_entry;
  video_struct *pvVar11;
  u8 *io_region_2;
  video_2d_event_struct event;
  
  iVar2 = __stack_chk_guard;
  uVar9 = (uint)value;
  if (address == 0x214) {
    *(uint *)(memory->arm9_io_registers + 0x214) =
         *(uint *)(memory->arm9_io_registers + 0x214) & ~uVar9;
    pcVar8 = memory->memory_interface_arm9->cpu;
    pcVar8->active_interrupts = ~uVar9 & pcVar8->active_interrupts;
    goto LAB_0800da38;
  }
  if (address < 0x215) {
    if (address == 0xdf) {
      uVar9 = *(uint *)(memory->arm9_io_registers + 0xdc) & 0xff000000 | uVar9 << 0x18;
      *(uint *)(memory->arm9_io_registers + 0xdc) = uVar9;
      if (((int)uVar9 < 0) && (-1 < (int)(memory->dma_arm9).channels[3].control)) {
        puVar5 = (memory->dma_arm9).channels[3].io_region;
        uVar10 = (uVar9 << 2) >> 0x1d;
        (memory->dma_arm9).channels[3].start_type = (byte)((uVar9 << 2) >> 0x1d);
        (memory->dma_arm9).channels[3].source_address = *puVar5;
        (memory->dma_arm9).channels[3].dest_address = puVar5[1];
        (memory->dma_arm9).channels[3].control = uVar9;
        if (uVar10 == 7 || uVar10 == 0) {
          dma_transfer(&memory->dma_arm9,(memory->dma_arm9).channels + 3);
        }
      }
      else {
        (memory->dma_arm9).channels[3].control = uVar9;
      }
      goto LAB_0800da38;
    }
    if (address < 0xe0) {
      if (address < 0x70) {
        if (address < 0x6c) {
          if (address < 8) {
            if (5 < address) goto LAB_0800da38;
            if (address < 4) goto LAB_0800dc24;
            if (address == 4) {
              uVar9 = memory->arm9_io_registers[4] & 7 | uVar9 & 0xfffffff8;
            }
          }
          else if (address < 0x56) goto LAB_0800dc24;
        }
        else {
LAB_0800dc24:
          uVar4 = (u32)memory->system->scanline_number;
          video_2d_00 = memory->video->video_2d_engine;
          if (0xbf < uVar4) goto LAB_0800de18;
LAB_0800dc40:
          video_2d_queue_event(video_2d_00,address,uVar9,1,uVar4);
        }
      }
      else {
        if (address == 199) {
          uVar9 = *(uint *)(memory->arm9_io_registers + 0xc4) & 0xff000000 | uVar9 << 0x18;
          *(uint *)(memory->arm9_io_registers + 0xc4) = uVar9;
          if (((int)uVar9 < 0) && (-1 < (int)(memory->dma_arm9).channels[1].control)) {
            puVar5 = (memory->dma_arm9).channels[1].io_region;
            uVar10 = (uVar9 << 2) >> 0x1d;
            (memory->dma_arm9).channels[1].start_type = (byte)((uVar9 << 2) >> 0x1d);
            (memory->dma_arm9).channels[1].source_address = *puVar5;
            (memory->dma_arm9).channels[1].dest_address = puVar5[1];
            (memory->dma_arm9).channels[1].control = uVar9;
            if (uVar10 == 7 || uVar10 == 0) {
              dma_transfer(&memory->dma_arm9,(memory->dma_arm9).channels + 1);
            }
          }
          else {
            (memory->dma_arm9).channels[1].control = uVar9;
          }
          goto LAB_0800da38;
        }
        if (address < 200) {
          if (address == 0xbb) {
            uVar9 = *(uint *)(memory->arm9_io_registers + 0xb8) & 0xff000000 | uVar9 << 0x18;
            *(uint *)(memory->arm9_io_registers + 0xb8) = uVar9;
            if (((int)uVar9 < 0) && (-1 < (int)(memory->dma_arm9).channels[0].control)) {
              puVar5 = (memory->dma_arm9).channels[0].io_region;
              uVar10 = (uVar9 << 2) >> 0x1d;
              (memory->dma_arm9).channels[0].start_type = (byte)((uVar9 << 2) >> 0x1d);
              (memory->dma_arm9).channels[0].source_address = *puVar5;
              (memory->dma_arm9).channels[0].dest_address = puVar5[1];
              (memory->dma_arm9).channels[0].control = uVar9;
              if (uVar10 == 7 || uVar10 == 0) {
                dma_transfer(&memory->dma_arm9,(memory->dma_arm9).channels);
              }
            }
            else {
              (memory->dma_arm9).channels[0].control = uVar9;
            }
            goto LAB_0800da38;
          }
          if (address == 0xc6) {
            uVar9 = *(uint *)(memory->arm9_io_registers + 0xc4) & 0xff0000 | uVar9 << 0x10;
            *(uint *)(memory->arm9_io_registers + 0xc4) = uVar9;
            (memory->dma_arm9).channels[1].control = uVar9;
            goto LAB_0800da38;
          }
          if (address == 0xba) {
            uVar9 = *(uint *)(memory->arm9_io_registers + 0xb8) & 0xff0000 | uVar9 << 0x10;
            *(uint *)(memory->arm9_io_registers + 0xb8) = uVar9;
            (memory->dma_arm9).channels[0].control = uVar9;
            goto LAB_0800da38;
          }
        }
        else {
          if (address == 0xd3) {
            uVar9 = *(uint *)(memory->arm9_io_registers + 0xd0) & 0xff000000 | uVar9 << 0x18;
            *(uint *)(memory->arm9_io_registers + 0xd0) = uVar9;
            if (((int)uVar9 < 0) && (-1 < (int)(memory->dma_arm9).channels[2].control)) {
              puVar5 = (memory->dma_arm9).channels[2].io_region;
              uVar10 = (uVar9 << 2) >> 0x1d;
              (memory->dma_arm9).channels[2].start_type = (byte)((uVar9 << 2) >> 0x1d);
              (memory->dma_arm9).channels[2].source_address = *puVar5;
              (memory->dma_arm9).channels[2].dest_address = puVar5[1];
              (memory->dma_arm9).channels[2].control = uVar9;
              if (uVar10 == 7 || uVar10 == 0) {
                dma_transfer(&memory->dma_arm9,(memory->dma_arm9).channels + 2);
              }
            }
            else {
              (memory->dma_arm9).channels[2].control = uVar9;
            }
            goto LAB_0800da38;
          }
          if (address == 0xde) {
            uVar9 = *(uint *)(memory->arm9_io_registers + 0xdc) & 0xff0000 | uVar9 << 0x10;
            *(uint *)(memory->arm9_io_registers + 0xdc) = uVar9;
            (memory->dma_arm9).channels[3].control = uVar9;
            goto LAB_0800da38;
          }
          if (address == 0xd2) {
            uVar9 = *(uint *)(memory->arm9_io_registers + 0xd0) & 0xff0000 | uVar9 << 0x10;
            *(uint *)(memory->arm9_io_registers + 0xd0) = uVar9;
            (memory->dma_arm9).channels[2].control = uVar9;
            goto LAB_0800da38;
          }
        }
      }
    }
    else {
      if (address == 0x1a2) {
        uVar1 = *(ushort *)(memory->arm9_io_registers + 0x1a0);
        uVar3 = backup_transfer(&memory->gamecard->backup,uVar9);
        if ((uVar1 & 0x40) == 0) {
          backup_deselect(&memory->gamecard->backup);
        }
        memory->arm9_io_registers[0x1a2] = uVar3;
        goto LAB_0800da38;
      }
      if (address < 0x1a3) {
        if (address == 0x181) {
          if (((value & 0x20) != 0) && ((memory->arm7_io_registers[0x181] & 0x40) != 0)) {
            pcVar8 = memory->memory_interface_arm9->cpu;
            if (pcVar8->type == '\x01') {
              pcVar8->alert_flags = pcVar8->alert_flags | 4;
            }
            puVar6 = memory->memory_interface_arm7->cpu->io_region;
            uVar10 = *(uint *)(puVar6 + 0x214);
            *(uint *)(puVar6 + 0x214) = uVar10 | 0x10000;
            pcVar8 = memory->memory_interface_arm7->cpu;
            if ((pcVar8->state & 6) == 0) {
              pcVar8->active_interrupts =
                   (uVar10 | 0x10000) & -*(int *)(puVar6 + 0x208) & *(uint *)(puVar6 + 0x210);
            }
          }
          memory->arm7_io_registers[0x180] = value & 0xf;
          *(ushort *)(memory->arm9_io_registers + 0x181) = value & 0x4f;
        }
        else if (address < 0x182) {
          if ((0x12f < address) && ((address < 0x132 || (address == 0x180)))) goto LAB_0800da38;
        }
        else {
          if (address == 0x185) {
            bVar7 = memory->arm9_io_registers[0x185];
            if (((value & 4) != 0) && (((memory->ipc_receive_arm9).status & 1) == 0)) {
              puVar6 = memory->memory_interface_arm9->cpu->io_region;
              uVar9 = *(uint *)(puVar6 + 0x214);
              *(uint *)(puVar6 + 0x214) = uVar9 | 0x40000;
              pcVar8 = memory->memory_interface_arm9->cpu;
              if ((pcVar8->state & 6) == 0) {
                uVar4 = -*(int *)(puVar6 + 0x208) & (uVar9 | 0x40000) & *(uint *)(puVar6 + 0x210);
                pcVar8->active_interrupts = uVar4;
              }
              else {
                uVar4 = pcVar8->active_interrupts;
              }
              if (uVar4 != 0) {
                pcVar8->alert_flags = pcVar8->alert_flags | 2;
              }
            }
            if ((value & 0x40) != 0) {
              bVar7 = bVar7 & 0xbf;
            }
            memory->arm9_io_registers[0x185] = value & 0x84 | bVar7 & 0x7b;
            goto LAB_0800da38;
          }
          if (address < 0x186) {
            if (address == 0x184) {
              if (((value & 4) != 0) && (((memory->ipc_receive_arm7).status & 1) != 0)) {
                puVar6 = memory->memory_interface_arm9->cpu->io_region;
                uVar9 = *(uint *)(puVar6 + 0x214);
                *(uint *)(puVar6 + 0x214) = uVar9 | 0x20000;
                pcVar8 = memory->memory_interface_arm9->cpu;
                if ((pcVar8->state & 6) == 0) {
                  uVar4 = -*(int *)(puVar6 + 0x208) & (uVar9 | 0x20000) & *(uint *)(puVar6 + 0x210);
                  pcVar8->active_interrupts = uVar4;
                }
                else {
                  uVar4 = pcVar8->active_interrupts;
                }
                if (uVar4 != 0) {
                  pcVar8->alert_flags = pcVar8->alert_flags | 2;
                }
              }
              if ((value & 8) != 0) {
                ipc_fifo_clear(&memory->ipc_receive_arm7);
              }
              memory->arm9_io_registers[0x184] = memory->arm9_io_registers[0x184] & 0xfb | value & 4
              ;
              goto LAB_0800da38;
            }
          }
          else if (address - 0x188 < 4) {
            puts("store io8 ARM9 IPCFIFOSEND");
          }
        }
      }
      else {
        if (0x20b < address) {
          if (address == 0x211) {
            uVar9 = *(uint *)(memory->arm9_io_registers + 0x210) & 0xffff00ff | uVar9 << 8;
            uVar10 = uVar9 & ~*(uint *)(memory->arm9_io_registers + 0x210);
            *(uint *)(memory->arm9_io_registers + 0x210) = uVar9;
          }
          else if (address < 0x212) {
            if (address != 0x210) goto LAB_0800da28;
            uVar9 = uVar9 | *(uint *)(memory->arm9_io_registers + 0x210) & 0xffffff00;
            uVar10 = uVar9 & ~*(uint *)(memory->arm9_io_registers + 0x210);
            *(uint *)(memory->arm9_io_registers + 0x210) = uVar9;
          }
          else if (address == 0x212) {
            uVar9 = *(uint *)(memory->arm9_io_registers + 0x210) & 0xff00ffff | uVar9 << 0x10;
            uVar10 = uVar9 & ~*(uint *)(memory->arm9_io_registers + 0x210);
            *(uint *)(memory->arm9_io_registers + 0x210) = uVar9;
          }
          else {
            if (address != 0x213) goto LAB_0800da28;
            uVar9 = *(uint *)(memory->arm9_io_registers + 0x210) & 0xffffff | uVar9 << 0x18;
            uVar10 = uVar9 & ~*(uint *)(memory->arm9_io_registers + 0x210);
            *(uint *)(memory->arm9_io_registers + 0x210) = uVar9;
          }
          if (uVar10 != 0) {
            pcVar8 = memory->memory_interface_arm9->cpu;
            uVar9 = uVar9 & *(uint *)(memory->arm9_io_registers + 0x214) &
                            -*(int *)(memory->arm9_io_registers + 0x208);
            pcVar8->active_interrupts = uVar9;
            if (uVar9 != 0) {
              pcVar8->alert_flags = pcVar8->alert_flags | 2;
            }
          }
          goto LAB_0800da38;
        }
        if ((0x208 < address) || (address == 0x1a3)) goto LAB_0800da38;
        if (address == 0x208) {
          uVar9 = uVar9 & 1;
          pcVar8 = memory->memory_interface_arm9->cpu;
          if (((value & 1) == 0) || (*(int *)(memory->arm9_io_registers + 0x208) != 0)) {
            pcVar8->active_interrupts = 0;
          }
          else {
            uVar9 = *(uint *)(memory->arm9_io_registers + 0x214) &
                    *(uint *)(memory->arm9_io_registers + 0x210);
            pcVar8->active_interrupts = uVar9;
            if (uVar9 == 0) {
              uVar9 = 1;
            }
            else {
              uVar9 = 1;
              pcVar8->alert_flags = pcVar8->alert_flags | 2;
            }
          }
        }
      }
    }
  }
  else if (address == 0x2b1) {
    uVar9 = uVar9 & 0x7f;
    memory->sqrt_result_available = '\0';
  }
  else if (address < 0x2b2) {
    if (address == 0x246) {
      remap_vram(memory->video,memory->vram_g,6,uVar9);
    }
    else if (address < 0x247) {
      if (address == 0x241) {
        remap_vram(memory->video,memory->vram_b,1,uVar9);
      }
      else if (address < 0x242) {
        if (address < 0x218) goto LAB_0800da38;
        if (address == 0x240) {
          remap_vram(memory->video,memory->vram_a,0,uVar9);
        }
      }
      else if (address == 0x243) {
        remap_vram(memory->video,memory->vram_d,3,uVar9);
      }
      else if (address < 0x243) {
        remap_vram(memory->video,memory->vram_c,2,uVar9);
      }
      else if (address == 0x244) {
        remap_vram(memory->video,memory->vram_e,4,uVar9);
      }
      else if (address == 0x245) {
        remap_vram(memory->video,memory->vram_f,5,uVar9);
      }
    }
    else if (address == 0x280) {
LAB_0800de4c:
      memory->divide_result_available = '\0';
    }
    else if (address < 0x281) {
      if (address == 0x248) {
        remap_vram(memory->video,memory->vram_h,7,uVar9);
      }
      else if (address < 0x248) {
        uVar9 = uVar9 & 3;
        if (memory->arm9_io_registers[0x247] != uVar9) {
          remap_wram(memory);
          memory->arm7_io_registers[0x241] = (u8)uVar9;
        }
      }
      else if (address == 0x249) {
        remap_vram(memory->video,memory->vram_i,8,uVar9);
      }
    }
    else if (address < 0x2a0) {
      if (0x28f < address) goto LAB_0800de4c;
      if (address == 0x281) {
        uVar9 = uVar9 & 0x7f;
        memory->divide_result_available = '\0';
      }
    }
    else if (address == 0x2b0) {
LAB_0800de3c:
      memory->sqrt_result_available = '\0';
    }
  }
  else if (address < 0x3c0) {
    if (address < 0x380) {
      if (address < 0x340) {
        if (address < 0x330) {
          if (0x2b7 < address) {
            if (address < 700) goto LAB_0800de3c;
            if ((address == 0x305) &&
               (uVar10 = (uint)memory->system->scanline_number,
               (uVar10 < 0xc0 & (memory->arm9_io_registers[0x305] ^ value) >> 7) != 0)) {
              pvVar11 = memory->video;
              video_2d_queue_event(pvVar11->video_2d_engine,0x305,uVar9,1,uVar10);
              video_2d_queue_event(pvVar11->video_2d_engine + 1,0x305,uVar9,1,uVar10);
            }
          }
        }
        else {
          uVar10 = address - 0x330 >> 1;
          uVar4 = geometry_load_edge_color_entry(memory->geometry,uVar10);
          if ((address & 1) != 0) {
            uVar9 = uVar4 & 0xff;
          }
          geometry_store_edge_color_entry(memory->geometry,uVar10,uVar9);
        }
      }
      else if (address == 0x340) {
        memory->geometry->alpha_test_reference = value;
      }
      else if (0x35f < address) {
        geometry_store_fog_table_entry(memory->geometry,address - 0x360,uVar9);
      }
    }
    else {
      uVar10 = address - 0x380 >> 1;
      uVar4 = geometry_load_toon_table_entry(memory->geometry,uVar10);
      if ((address & 1) != 0) {
        uVar9 = uVar4 & 0xff;
      }
      geometry_store_toon_table_entry(memory->geometry,uVar10,uVar9);
    }
  }
  else if (address < 0x1056) {
    if (0x1007 < address) goto LAB_0800ddf8;
    if (address == 0x603) {
      uVar9 = (uint)(value >> 6);
      if ((uVar9 - 1 & 0xff) < 2) {
        puVar6 = memory->memory_interface_arm9->cpu->io_region;
        uVar10 = *(uint *)(puVar6 + 0x214);
        *(uint *)(puVar6 + 0x214) = uVar10 | 0x200000;
        pcVar8 = memory->memory_interface_arm9->cpu;
        if ((pcVar8->state & 6) == 0) {
          uVar4 = (uVar10 | 0x200000) & -*(int *)(puVar6 + 0x208) & *(uint *)(puVar6 + 0x210);
          pcVar8->active_interrupts = uVar4;
        }
        else {
          uVar4 = pcVar8->active_interrupts;
        }
        if (uVar4 != 0) {
          pcVar8->alert_flags = pcVar8->alert_flags | 2;
        }
      }
      else {
        *(uint *)(memory->arm9_io_registers + 0x214) =
             *(uint *)(memory->arm9_io_registers + 0x214) & 0xffdfffff;
        pcVar8 = memory->memory_interface_arm9->cpu;
        pcVar8->active_interrupts = pcVar8->active_interrupts & 0xffdfffff;
      }
    }
    else if (0x602 < address) {
      uVar10 = address - 0x1000;
      goto joined_r0x0800e158;
    }
  }
  else {
    uVar10 = address - 0x106c;
joined_r0x0800e158:
    if (uVar10 < 4) {
LAB_0800ddf8:
      uVar4 = (u32)memory->system->scanline_number;
      video_2d_00 = memory->video->video_2d_engine + 1;
      if (uVar4 < 0xc0) goto LAB_0800dc40;
LAB_0800de18:
      event.byte_width = '\x01';
      event.address = address;
      event.value = uVar9;
      video_2d_process_event(video_2d_00,&event);
    }
  }
LAB_0800da28:
  memory->arm9_io_registers[address & 0x7fff] = (u8)uVar9;
LAB_0800da38:
  if (iVar2 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


