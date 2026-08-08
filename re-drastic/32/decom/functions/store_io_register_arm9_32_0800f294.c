/*
 * Ghidra decompilation
 *
 * Function : store_io_register_arm9_32
 * Address  : 0800f294
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void store_io_register_arm9_32(memory_struct *memory,u32 address,u32 value)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  video_2d_struct *video_2d;
  u32 uVar4;
  video_2d_struct *video_2d_00;
  video_2d_struct *video_2d_1;
  u8 *puVar5;
  u8 *io_region;
  u32 *puVar6;
  cpu_struct *pcVar7;
  cpu_struct *cpu;
  u32 dma_control;
  u32 dma_control_1;
  u32 dma_control_2;
  u32 dma_control_3;
  byte bVar8;
  uint uVar9;
  u32 ie_value;
  cpu_struct *cpu_1;
  u32 scanline_number;
  cpu_struct *cpu_2;
  u32 scanline_number_1;
  u32 new_ie_value;
  u32 toon_entry;
  u32 edge_entry;
  geometry_struct *pgVar10;
  video_2d_event_struct event;
  
  iVar3 = __stack_chk_guard;
  if (address != 0x484) {
    if (address < 0x485) {
      if (address == 0x394) goto LAB_0800f644;
      if (address < 0x395) {
        if (address == 0x2b0) {
          value = value & 0xffff7fff;
          memory->sqrt_result_available = '\0';
          goto LAB_0800f3e4;
        }
        if (0x2b0 < address) {
          if (address != 0x368) {
            if (address < 0x369) {
              if (address != 0x33c) {
                if (0x33c < address) {
                  if (address == 0x358) {
                    pgVar10 = memory->geometry;
                    uVar4 = texture_cache_build_pixel_custom_alpha(value,(value << 0xb) >> 0x1b);
                    pgVar10->fog_color = uVar4;
                  }
                  else {
                    if (0x358 < address) {
                      if ((address == 0x360) || (address == 0x364)) goto LAB_0800f844;
                      goto LAB_0800f550;
                    }
                    if (address == 0x350) {
                      memory->geometry->clear_color = value;
                    }
                    else {
                      if (address != 0x354) goto LAB_0800f550;
                      memory->geometry->clear_depth = (u16)value;
                    }
                  }
                  goto LAB_0800f3e4;
                }
                if (address != 0x330) {
                  if (address < 0x331) {
                    if (address == 0x2b8) {
                      memory->sqrt_result_available = '\0';
                      goto LAB_0800f3e4;
                    }
                  }
                  else if ((address == 0x334) || (address == 0x338)) goto LAB_0800f6d8;
                  goto LAB_0800f550;
                }
              }
LAB_0800f6d8:
              uVar9 = address - 0x330 >> 1;
              geometry_store_edge_color_entry(memory->geometry,uVar9,value);
              geometry_store_edge_color_entry(memory->geometry,uVar9 + 1,value >> 0x10);
              goto LAB_0800f3e4;
            }
            if (address != 0x37c) {
              if (0x37c < address) {
                if (address == 0x388) {
LAB_0800f644:
                  uVar9 = address - 0x380 >> 1;
                  geometry_store_toon_table_entry(memory->geometry,uVar9,value);
                  geometry_store_toon_table_entry(memory->geometry,uVar9 + 1,value >> 0x10);
                  goto LAB_0800f3e4;
                }
                if (address < 0x389) {
                  if ((address == 0x380) || (address == 900)) goto LAB_0800f644;
                }
                else if ((address == 0x38c) || (address == 0x390)) goto LAB_0800f644;
                goto LAB_0800f550;
              }
              if (address != 0x370) {
                if (address < 0x371) {
                  if (address == 0x36c) goto LAB_0800f844;
                }
                else if ((address == 0x374) || (address == 0x378)) goto LAB_0800f844;
                goto LAB_0800f550;
              }
            }
          }
LAB_0800f844:
          geometry_store_fog_table_entry(memory->geometry,address - 0x360,value);
          geometry_store_fog_table_entry(memory->geometry,address - 0x35f,value >> 8);
          geometry_store_fog_table_entry(memory->geometry,address - 0x35e,value >> 0x10);
          geometry_store_fog_table_entry(memory->geometry,address - 0x35d,value >> 0x18);
          goto LAB_0800f3e4;
        }
        if (address == 0xdc) {
          *(u32 *)(memory->arm9_io_registers + 0xdc) = value;
          if (((int)value < 0) && (-1 < (int)(memory->dma_arm9).channels[3].control)) {
            puVar6 = (memory->dma_arm9).channels[3].io_region;
            uVar9 = (value << 2) >> 0x1d;
            (memory->dma_arm9).channels[3].start_type = (byte)((value << 2) >> 0x1d);
            (memory->dma_arm9).channels[3].source_address = *puVar6;
            (memory->dma_arm9).channels[3].dest_address = puVar6[1];
            (memory->dma_arm9).channels[3].control = value;
            if (uVar9 == 7 || uVar9 == 0) {
              dma_transfer(&memory->dma_arm9,(memory->dma_arm9).channels + 3);
            }
          }
          else {
            (memory->dma_arm9).channels[3].control = value;
          }
          goto LAB_0800f3f4;
        }
        if (address < 0xdd) {
          if (address == 0x60) {
            value = value & 0xffffcfff;
            memory->geometry->display_3d_control = value;
            goto LAB_0800f3e4;
          }
          if (address < 0x61) {
            if ((address < 4) || (address - 8 < 0x4e)) {
LAB_0800f9d4:
              uVar2 = memory->system->scanline_number;
              video_2d_00 = memory->video->video_2d_engine;
              goto joined_r0x0800f9ec;
            }
          }
          else {
            if (address == 0xb8) {
              *(u32 *)(memory->arm9_io_registers + 0xb8) = value;
              if (((int)value < 0) && (-1 < (int)(memory->dma_arm9).channels[0].control)) {
                puVar6 = (memory->dma_arm9).channels[0].io_region;
                uVar9 = (value << 2) >> 0x1d;
                (memory->dma_arm9).channels[0].start_type = (byte)((value << 2) >> 0x1d);
                (memory->dma_arm9).channels[0].source_address = *puVar6;
                (memory->dma_arm9).channels[0].dest_address = puVar6[1];
                (memory->dma_arm9).channels[0].control = value;
                if (uVar9 == 7 || uVar9 == 0) {
                  dma_transfer(&memory->dma_arm9,(memory->dma_arm9).channels);
                }
              }
              else {
                (memory->dma_arm9).channels[0].control = value;
              }
              goto LAB_0800f3f4;
            }
            if (address < 0xb9) {
              if (address - 0x6c < 4) goto LAB_0800f9d4;
            }
            else {
              if (address == 0xc4) {
                *(u32 *)(memory->arm9_io_registers + 0xc4) = value;
                if (((int)value < 0) && (-1 < (int)(memory->dma_arm9).channels[1].control)) {
                  puVar6 = (memory->dma_arm9).channels[1].io_region;
                  uVar9 = (value << 2) >> 0x1d;
                  (memory->dma_arm9).channels[1].start_type = (byte)((value << 2) >> 0x1d);
                  (memory->dma_arm9).channels[1].source_address = *puVar6;
                  (memory->dma_arm9).channels[1].dest_address = puVar6[1];
                  (memory->dma_arm9).channels[1].control = value;
                  if (uVar9 == 7 || uVar9 == 0) {
                    dma_transfer(&memory->dma_arm9,(memory->dma_arm9).channels + 1);
                  }
                }
                else {
                  (memory->dma_arm9).channels[1].control = value;
                }
                goto LAB_0800f3f4;
              }
              if (address == 0xd0) {
                *(u32 *)(memory->arm9_io_registers + 0xd0) = value;
                if (((int)value < 0) && (-1 < (int)(memory->dma_arm9).channels[2].control)) {
                  puVar6 = (memory->dma_arm9).channels[2].io_region;
                  uVar9 = (value << 2) >> 0x1d;
                  (memory->dma_arm9).channels[2].start_type = (byte)((value << 2) >> 0x1d);
                  (memory->dma_arm9).channels[2].source_address = *puVar6;
                  (memory->dma_arm9).channels[2].dest_address = puVar6[1];
                  (memory->dma_arm9).channels[2].control = value;
                  if (uVar9 == 7 || uVar9 == 0) {
                    dma_transfer(&memory->dma_arm9,(memory->dma_arm9).channels + 2);
                  }
                }
                else {
                  (memory->dma_arm9).channels[2].control = value;
                }
                goto LAB_0800f3f4;
              }
            }
          }
          goto LAB_0800f550;
        }
        if (address == 0x214) {
          *(uint *)(memory->arm9_io_registers + 0x214) =
               *(uint *)(memory->arm9_io_registers + 0x214) & ~(value & 0xffdfffff);
          pcVar7 = memory->memory_interface_arm9->cpu;
          pcVar7->active_interrupts = ~(value & 0xffdfffff) & pcVar7->active_interrupts;
          goto LAB_0800f3f4;
        }
        if (address < 0x215) {
          if (address != 0x1a4) {
            if (address < 0x1a5) {
              if (address == 0x188) {
                if ((memory->arm9_io_registers[0x185] & 0x80) != 0) {
                  if (((memory->ipc_receive_arm7).status & 2) == 0) {
                    ipc_fifo_queue(&memory->ipc_receive_arm7,value);
                    bVar8 = memory->arm7_io_registers[0x185] & 0xfe;
                    memory->arm7_io_registers[0x185] = bVar8;
                    memory->arm9_io_registers[0x184] = memory->arm9_io_registers[0x184] & 0xfe;
                    bVar1 = (memory->ipc_receive_arm7).status;
                    if ((bVar1 & 2) != 0) {
                      __printf_chk(1,"CPU %s made its send FIFO full.\n",&DAT_0813ac04);
                      memory->arm9_io_registers[0x184] = memory->arm9_io_registers[0x184] | 2;
                      bVar8 = memory->arm7_io_registers[0x185] | 2;
                      memory->arm7_io_registers[0x185] = bVar8;
                      bVar1 = (memory->ipc_receive_arm7).status;
                    }
                    if (((bVar1 & 1) == 0) && ((bVar8 & 4) != 0)) {
                      pcVar7 = memory->memory_interface_arm9->cpu;
                      if (pcVar7->type == '\x01') {
                        pcVar7->alert_flags = pcVar7->alert_flags | 4;
                      }
                      puVar5 = memory->memory_interface_arm7->cpu->io_region;
                      uVar9 = *(uint *)(puVar5 + 0x214);
                      *(uint *)(puVar5 + 0x214) = uVar9 | 0x40000;
                      pcVar7 = memory->memory_interface_arm7->cpu;
                      if ((pcVar7->state & 6) == 0) {
                        pcVar7->active_interrupts =
                             (uVar9 | 0x40000) & -*(int *)(puVar5 + 0x208) &
                             *(uint *)(puVar5 + 0x210);
                      }
                    }
                  }
                  else {
                    memory->arm9_io_registers[0x185] = memory->arm9_io_registers[0x185] | 0x40;
                  }
                }
                goto LAB_0800f3f4;
              }
            }
            else {
              if (address == 0x208) {
                value = value & 1;
                pcVar7 = memory->memory_interface_arm9->cpu;
                if ((value == 0) || (*(int *)(memory->arm9_io_registers + 0x208) != 0)) {
                  pcVar7->active_interrupts = 0;
                }
                else {
                  uVar9 = *(uint *)(memory->arm9_io_registers + 0x214) &
                          *(uint *)(memory->arm9_io_registers + 0x210);
                  pcVar7->active_interrupts = uVar9;
                  if (uVar9 == 0) {
                    value = 1;
                  }
                  else {
                    value = 1;
                    pcVar7->alert_flags = pcVar7->alert_flags | 2;
                  }
                }
                goto LAB_0800f3e4;
              }
              if (address == 0x210) {
                uVar9 = *(uint *)(memory->arm9_io_registers + 0x210);
                *(u32 *)(memory->arm9_io_registers + 0x210) = value;
                if ((value & ~uVar9) != 0) {
                  pcVar7 = memory->memory_interface_arm9->cpu;
                  uVar9 = value & *(uint *)(memory->arm9_io_registers + 0x214) &
                          -*(int *)(memory->arm9_io_registers + 0x208);
                  pcVar7->active_interrupts = uVar9;
                  if (uVar9 != 0) {
                    pcVar7->alert_flags = pcVar7->alert_flags | 2;
                  }
                }
                goto LAB_0800f3f4;
              }
            }
            goto LAB_0800f550;
          }
          if ((int)value < 0) {
            gamecard_command(memory->gamecard,value);
            goto LAB_0800f3f4;
          }
        }
        else {
          if (address != 0x294) {
            if (address < 0x295) {
              if (address == 0x280) {
                value = value & 0xffff7fff;
                memory->divide_result_available = '\0';
                goto LAB_0800f3e4;
              }
              if (address == 0x290) goto LAB_0800f718;
            }
            else if ((address == 0x298) || (address == 0x29c)) goto LAB_0800f718;
            goto LAB_0800f550;
          }
LAB_0800f718:
          memory->divide_result_available = '\0';
        }
      }
      else {
        if (address != 0x42c) {
          if (0x42c < address) {
            if (address != 0x458) {
              if (address < 0x459) {
                if (address != 0x440) {
                  if (address < 0x441) {
                    if (address == 0x434) goto LAB_0800f51c;
                    if (address < 0x435) {
                      if (address == 0x430) goto LAB_0800f51c;
                    }
                    else if ((address == 0x438) || (address == 0x43c)) goto LAB_0800f51c;
                    goto LAB_0800f550;
                  }
                  if (address != 0x44c) {
                    if (address < 0x44d) {
                      if ((address != 0x444) && (address != 0x448)) goto LAB_0800f550;
                    }
                    else if ((address != 0x450) && (address != 0x454)) goto LAB_0800f550;
                  }
                }
              }
              else if (address != 0x46c) {
                if (address < 0x46d) {
                  if (address != 0x460) {
                    if (address < 0x461) {
                      if (address != 0x45c) goto LAB_0800f550;
                    }
                    else if ((address != 0x464) && (address != 0x468)) goto LAB_0800f550;
                  }
                }
                else if (address != 0x478) {
                  if (address < 0x479) {
                    if ((address != 0x470) && (address != 0x474)) goto LAB_0800f550;
                  }
                  else if ((address != 0x47c) && (address != 0x480)) goto LAB_0800f550;
                }
              }
            }
            goto LAB_0800f958;
          }
          if (address != 0x400) {
            if (address < 0x401) {
              if (address != 0x3a8) {
                if (address < 0x3a9) {
                  if (address != 0x39c) {
                    if (address < 0x39d) {
                      if (address == 0x398) goto LAB_0800f644;
                    }
                    else if ((address == 0x3a0) || (address == 0x3a4)) goto LAB_0800f644;
                    goto LAB_0800f550;
                  }
                }
                else if (address != 0x3b4) {
                  if (address < 0x3b5) {
                    if ((address == 0x3ac) || (address == 0x3b0)) goto LAB_0800f644;
                  }
                  else if ((address == 0x3b8) || (address == 0x3bc)) goto LAB_0800f644;
                  goto LAB_0800f550;
                }
              }
              goto LAB_0800f644;
            }
            if (address != 0x414) {
              if (address < 0x415) {
                if (address != 0x408) {
                  if (address < 0x409) {
                    if (address == 0x404) goto LAB_0800f51c;
                  }
                  else if ((address == 0x40c) || (address == 0x410)) goto LAB_0800f51c;
                  goto LAB_0800f550;
                }
              }
              else if (address != 0x420) {
                if (address < 0x421) {
                  if ((address == 0x418) || (address == 0x41c)) goto LAB_0800f51c;
                }
                else if ((address == 0x424) || (address == 0x428)) goto LAB_0800f51c;
                goto LAB_0800f550;
              }
            }
          }
        }
LAB_0800f51c:
        queue_geometry_command_packed(memory->geometry,value);
      }
LAB_0800f3e4:
      *(u32 *)(memory->arm9_io_registers + (address & 0x7fff)) = value;
      goto LAB_0800f3f4;
    }
    if (address != 0x534) {
      if (address < 0x535) {
        if (address != 0x4dc) {
          if (address < 0x4dd) {
            if (address != 0x4b0) {
              if (address < 0x4b1) {
                if (address != 0x498) {
                  if (address < 0x499) {
                    if (address != 0x48c) {
                      if (address < 0x48d) {
                        if (address != 0x488) goto LAB_0800f550;
                      }
                      else if ((address != 0x490) && (address != 0x494)) goto LAB_0800f550;
                    }
                  }
                  else if (address != 0x4a4) {
                    if (address < 0x4a5) {
                      if ((address != 0x49c) && (address != 0x4a0)) goto LAB_0800f550;
                    }
                    else if ((address != 0x4a8) && (address != 0x4ac)) goto LAB_0800f550;
                  }
                }
              }
              else if (address != 0x4c4) {
                if (address < 0x4c5) {
                  if (address != 0x4b8) {
                    if (address < 0x4b9) {
                      if (address != 0x4b4) goto LAB_0800f550;
                    }
                    else if ((address != 0x4bc) && (address != 0x4c0)) goto LAB_0800f550;
                  }
                }
                else if (address != 0x4d0) {
                  if (address < 0x4d1) {
                    if ((address != 0x4c8) && (address != 0x4cc)) goto LAB_0800f550;
                  }
                  else if ((address != 0x4d4) && (address != 0x4d8)) goto LAB_0800f550;
                }
              }
            }
          }
          else if (address != 0x508) {
            if (address < 0x509) {
              if (address != 0x4f0) {
                if (address < 0x4f1) {
                  if (address != 0x4e4) {
                    if (address < 0x4e5) {
                      if (address != 0x4e0) goto LAB_0800f550;
                    }
                    else if ((address != 0x4e8) && (address != 0x4ec)) goto LAB_0800f550;
                  }
                }
                else if (address != 0x4fc) {
                  if (address < 0x4fd) {
                    if ((address != 0x4f4) && (address != 0x4f8)) goto LAB_0800f550;
                  }
                  else if ((address != 0x500) && (address != 0x504)) goto LAB_0800f550;
                }
              }
            }
            else if (address != 0x51c) {
              if (address < 0x51d) {
                if (address != 0x510) {
                  if (address < 0x511) {
                    if (address != 0x50c) goto LAB_0800f550;
                  }
                  else if ((address != 0x514) && (address != 0x518)) goto LAB_0800f550;
                }
              }
              else if (address != 0x528) {
                if (address < 0x529) {
                  if ((address != 0x520) && (address != 0x524)) goto LAB_0800f550;
                }
                else if ((address != 0x52c) && (address != 0x530)) goto LAB_0800f550;
              }
            }
          }
        }
      }
      else if (address != 0x58c) {
        if (address < 0x58d) {
          if (address != 0x560) {
            if (address < 0x561) {
              if (address != 0x548) {
                if (address < 0x549) {
                  if (address != 0x53c) {
                    if (address < 0x53d) {
                      if (address != 0x538) goto LAB_0800f550;
                    }
                    else if ((address != 0x540) && (address != 0x544)) goto LAB_0800f550;
                  }
                }
                else if (address != 0x554) {
                  if (address < 0x555) {
                    if ((address != 0x54c) && (address != 0x550)) goto LAB_0800f550;
                  }
                  else if ((address != 0x558) && (address != 0x55c)) goto LAB_0800f550;
                }
              }
            }
            else if (address != 0x574) {
              if (address < 0x575) {
                if (address != 0x568) {
                  if (address < 0x569) {
                    if (address != 0x564) goto LAB_0800f550;
                  }
                  else if ((address != 0x56c) && (address != 0x570)) goto LAB_0800f550;
                }
              }
              else if (address != 0x580) {
                if (address < 0x581) {
                  if ((address != 0x578) && (address != 0x57c)) goto LAB_0800f550;
                }
                else if ((address != 0x584) && (address != 0x588)) goto LAB_0800f550;
              }
            }
          }
        }
        else if (address != 0x5b8) {
          if (0x5b8 < address) {
            if (address < 0x1004) {
              if (0xfff < address) {
LAB_0800f690:
                uVar2 = memory->system->scanline_number;
                video_2d_00 = memory->video->video_2d_engine + 1;
joined_r0x0800f9ec:
                if (uVar2 < 0xc0) {
                  video_2d_queue_event(video_2d_00,address,value,4,(uint)uVar2);
                }
                else {
                  event.byte_width = '\x04';
                  event.address = address;
                  event.value = value;
                  video_2d_process_event(video_2d_00,&event);
                }
                goto LAB_0800f3e4;
              }
              if (((address == 0x5c0) || (address == 0x5c4)) || (address == 0x5bc))
              goto LAB_0800f958;
            }
            else if (address < 0x1070) {
              if ((0x106b < address) || (address - 0x1008 < 0x4e)) goto LAB_0800f690;
            }
            else if (address == 0x100010) {
              gamecard_write(memory->gamecard,value);
              goto LAB_0800f3f4;
            }
            goto LAB_0800f550;
          }
          if (address != 0x5a0) {
            if (address < 0x5a1) {
              if (address != 0x594) {
                if (address < 0x595) {
                  if (address != 0x590) goto LAB_0800f550;
                }
                else if ((address != 0x598) && (address != 0x59c)) goto LAB_0800f550;
              }
            }
            else if (address != 0x5ac) {
              if (address < 0x5ad) {
                if ((address != 0x5a4) && (address != 0x5a8)) {
LAB_0800f550:
                  store_io_register_arm9_16(memory,address,(u16)value);
                  store_io_register_arm9_16(memory,address + 2,(u16)(value >> 0x10));
                  goto LAB_0800f3f4;
                }
              }
              else if ((address != 0x5b0) && (address != 0x5b4)) goto LAB_0800f550;
            }
          }
        }
      }
    }
  }
LAB_0800f958:
  queue_geometry_command(memory->geometry,(address - 0x440 >> 2) + 0x10,value);
LAB_0800f3f4:
  if (iVar3 == __stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


