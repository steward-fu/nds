/*
 * Ghidra decompilation
 *
 * Function : store_io_register_arm7_8
 * Address  : 08008a28
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void store_io_register_arm7_8(memory_struct *memory,u32 address,u8 value)

{
  ushort uVar1;
  u8 uVar2;
  cpu_struct *cpu_4;
  u32 ie_value;
  u32 ie_value_1;
  u8 *io_region;
  u8 *puVar3;
  u8 *io_region_1;
  u32 ie_value_2;
  u32 ie_value_3;
  u32 uVar4;
  byte bVar5;
  u32 new_ie_value;
  uint uVar6;
  cpu_struct *pcVar7;
  cpu_struct *cpu;
  cpu_struct *cpu_1;
  u32 new_ie_value_1;
  cpu_struct *cpu_2;
  u32 new_ie_value_2;
  u32 new_ie_value_3;
  u32 ipc_control;
  u32 channel;
  uint uVar8;
  spu_struct *spu_00;
  spu_struct *spu;
  cpu_struct *cpu_3;
  u8 *io_region_2;
  
  uVar8 = (uint)value;
  if (address < 0x1c2) {
    if (0x1bf < address) {
      puts("spi control8");
      goto LAB_08008b30;
    }
    if (address == 0x138) {
      value = rtc_write(memory->rtc,uVar8);
      goto LAB_08008b30;
    }
    if (address < 0x139) {
      if (address < 0x132) {
        if (0x12f < address) {
          return;
        }
        if (address == 4) {
          value = value & 0xf8 | memory->arm7_io_registers[4] & 7;
          goto LAB_08008b30;
        }
        if ((3 < address) && (address - 6 < 2)) {
          return;
        }
      }
      else if (0x135 < address) {
        return;
      }
    }
    else {
      if (address == 0x185) {
        bVar5 = memory->arm7_io_registers[0x185];
        if (((value & 4) != 0) && (((memory->ipc_receive_arm7).status & 1) == 0)) {
          puVar3 = memory->memory_interface_arm7->cpu->io_region;
          uVar8 = *(uint *)(puVar3 + 0x214);
          *(uint *)(puVar3 + 0x214) = uVar8 | 0x40000;
          pcVar7 = memory->memory_interface_arm7->cpu;
          if ((pcVar7->state & 6) == 0) {
            uVar4 = (uVar8 | 0x40000) & -*(int *)(puVar3 + 0x208) & *(uint *)(puVar3 + 0x210);
            pcVar7->active_interrupts = uVar4;
          }
          else {
            uVar4 = pcVar7->active_interrupts;
          }
          if (uVar4 != 0) {
            pcVar7->alert_flags = pcVar7->alert_flags | 2;
          }
        }
        if ((value & 0x40) != 0) {
          bVar5 = bVar5 & 0xbf;
        }
        memory->arm7_io_registers[0x185] = value & 0x84 | bVar5 & 0x7b;
        return;
      }
      if (address < 0x186) {
        if (address == 0x181) {
          if (((value & 0x20) != 0) && ((memory->arm9_io_registers[0x181] & 0x40) != 0)) {
            pcVar7 = memory->memory_interface_arm7->cpu;
            if (pcVar7->type == '\x01') {
              pcVar7->alert_flags = pcVar7->alert_flags | 4;
            }
            puVar3 = memory->memory_interface_arm9->cpu->io_region;
            uVar8 = *(uint *)(puVar3 + 0x214);
            *(uint *)(puVar3 + 0x214) = uVar8 | 0x10000;
            pcVar7 = memory->memory_interface_arm9->cpu;
            if ((pcVar7->state & 6) == 0) {
              pcVar7->active_interrupts =
                   (uVar8 | 0x10000) & -*(int *)(puVar3 + 0x208) & *(uint *)(puVar3 + 0x210);
            }
          }
          memory->arm9_io_registers[0x180] = value & 0xf;
          *(ushort *)(memory->arm7_io_registers + 0x181) = value & 0x4f;
          goto LAB_08008b30;
        }
        if (address == 0x184) {
          if (((value & 4) != 0) && (((memory->ipc_receive_arm9).status & 1) != 0)) {
            puVar3 = memory->memory_interface_arm7->cpu->io_region;
            uVar8 = *(uint *)(puVar3 + 0x214);
            *(uint *)(puVar3 + 0x214) = uVar8 | 0x20000;
            pcVar7 = memory->memory_interface_arm7->cpu;
            if ((pcVar7->state & 6) == 0) {
              uVar4 = (uVar8 | 0x20000) & -*(int *)(puVar3 + 0x208) & *(uint *)(puVar3 + 0x210);
              pcVar7->active_interrupts = uVar4;
            }
            else {
              uVar4 = pcVar7->active_interrupts;
            }
            if (uVar4 != 0) {
              pcVar7->alert_flags = pcVar7->alert_flags | 2;
            }
          }
          if ((value & 8) != 0) {
            ipc_fifo_clear(&memory->ipc_receive_arm9);
          }
          memory->arm7_io_registers[0x184] = memory->arm7_io_registers[0x184] & 0xfb | value & 4;
          return;
        }
        if (address == 0x180) goto LAB_08008b30;
      }
      else {
        if (address == 0x1a2) {
          uVar1 = *(ushort *)(memory->arm9_io_registers + 0x1a0);
          uVar2 = backup_transfer(&memory->gamecard->backup,uVar8);
          if ((uVar1 & 0x40) == 0) {
            backup_deselect(&memory->gamecard->backup);
          }
          memory->arm9_io_registers[0x1a2] = uVar2;
          return;
        }
        if (address < 0x1a3) {
          if (address - 0x188 < 4) {
            puts("store io8 ARM9 IPCFIFOSEND");
            return;
          }
        }
        else if (address == 0x1a3) {
          return;
        }
      }
    }
  }
  else {
    if (address == 0x213) {
      uVar8 = *(uint *)(memory->arm7_io_registers + 0x210) & 0xffffff | uVar8 << 0x18;
      uVar6 = uVar8 & ~*(uint *)(memory->arm7_io_registers + 0x210);
      *(uint *)(memory->arm7_io_registers + 0x210) = uVar8;
      goto joined_r0x08008fa8;
    }
    if (address < 0x214) {
      if (address < 0x20c) {
        if (0x208 < address) {
          return;
        }
        if (address == 0x1c3) {
          return;
        }
        if (address < 0x1c3) {
          uVar2 = spi_data_write(memory->spi_peripherals,value);
          memory->arm7_io_registers[0x1c2] = uVar2;
          return;
        }
        if (address == 0x208) {
          bVar5 = value & 1;
          value = value & 1;
          pcVar7 = memory->memory_interface_arm7->cpu;
          if ((bVar5 == 0) || (*(int *)(memory->arm7_io_registers + 0x208) != 0)) {
            pcVar7->active_interrupts = 0;
          }
          else {
            uVar8 = *(uint *)(memory->arm7_io_registers + 0x214) &
                    *(uint *)(memory->arm7_io_registers + 0x210);
            pcVar7->active_interrupts = uVar8;
            if (uVar8 == 0) {
              value = 1;
            }
            else {
              value = 1;
              pcVar7->alert_flags = pcVar7->alert_flags | 2;
            }
          }
          goto LAB_08008b30;
        }
      }
      else {
        if (address == 0x211) {
          uVar8 = *(uint *)(memory->arm7_io_registers + 0x210) & 0xffff00ff | uVar8 << 8;
          uVar6 = uVar8 & ~*(uint *)(memory->arm7_io_registers + 0x210);
          *(uint *)(memory->arm7_io_registers + 0x210) = uVar8;
joined_r0x08008fa8:
          if (uVar6 == 0) {
            return;
          }
          pcVar7 = memory->memory_interface_arm7->cpu;
          uVar8 = uVar8 & *(uint *)(memory->arm7_io_registers + 0x214) &
                          -*(int *)(memory->arm7_io_registers + 0x208);
          pcVar7->active_interrupts = uVar8;
          if (uVar8 == 0) {
            return;
          }
          pcVar7->alert_flags = pcVar7->alert_flags | 2;
          return;
        }
        if (0x211 < address) {
          uVar8 = *(uint *)(memory->arm7_io_registers + 0x210) & 0xff00ffff | uVar8 << 0x10;
          uVar6 = uVar8 & ~*(uint *)(memory->arm7_io_registers + 0x210);
          *(uint *)(memory->arm7_io_registers + 0x210) = uVar8;
          goto joined_r0x08008fa8;
        }
        if (address == 0x210) {
          uVar8 = uVar8 | *(uint *)(memory->arm7_io_registers + 0x210) & 0xffffff00;
          uVar6 = uVar8 & ~*(uint *)(memory->arm7_io_registers + 0x210);
          *(uint *)(memory->arm7_io_registers + 0x210) = uVar8;
          goto joined_r0x08008fa8;
        }
      }
    }
    else {
      if (address == 0x301) {
        uVar8 = (uVar8 << 0x12) >> 0x18;
        if (uVar8 == 2) {
          pcVar7 = memory->memory_interface_arm7->cpu;
          pcVar7->alert_flags = pcVar7->alert_flags | 0x10;
          execute_arm_halt_cpu_arm7(pcVar7);
        }
        else if (uVar8 == 3) {
          pcVar7 = memory->memory_interface_arm7->cpu;
          puts("Entering sleep mode.");
          pcVar7->alert_flags = pcVar7->alert_flags | 0x10;
          execute_arm_halt_cpu_arm7(pcVar7);
          pcVar7->state = '\x02';
          pcVar7->alternate_cpu->state = pcVar7->alternate_cpu->state | 2;
        }
        else if (uVar8 == 1) {
          puts("Enter GBA mode: unsupported.");
        }
        goto LAB_08008b30;
      }
      if (address < 0x302) {
        if (address < 0x218) {
          if (0x214 < address) {
            return;
          }
          *(uint *)(memory->arm7_io_registers + 0x214) =
               *(uint *)(memory->arm7_io_registers + 0x214) & ~uVar8;
          pcVar7 = memory->memory_interface_arm7->cpu;
          pcVar7->active_interrupts = ~uVar8 & pcVar7->active_interrupts;
          return;
        }
        if (address == 0x241) {
          return;
        }
      }
      else if (0x3ff < address) {
        if (address < 0x500) {
          spu_00 = memory->spu;
          uVar8 = (address << 0x18) >> 0x1c;
          memory->arm7_io_registers[address] = value;
          switch(address & 0xfffff00f) {
          case 0:
          case 1:
          case 2:
            spu_00->channels[uVar8].dirty_bits = spu_00->channels[uVar8].dirty_bits | 2;
            memory->arm7_io_registers[address] = value;
            return;
          case 3:
            goto switchD_08008ec8_caseD_3;
          default:
            return;
          case 8:
          case 9:
            spu_00->channels[uVar8].dirty_bits = spu_00->channels[uVar8].dirty_bits | 1;
            memory->arm7_io_registers[address] = value;
            return;
          }
        }
        if (address - 0x508 < 2) {
          spu_capture_control(memory->spu,address - 0x508,uVar8);
          goto LAB_08008b30;
        }
      }
    }
  }
  if (0x7fffff < address) {
    return;
  }
LAB_08008b30:
  memory->arm7_io_registers[address & 0x7fff] = value;
  return;
switchD_08008ec8_caseD_3:
  if ((value & 0x80) == 0) {
    spu_00->channels[uVar8].active = '\0';
  }
  else {
    spu_key_on(spu_00,uVar8);
  }
  spu_00->channels[uVar8].dirty_bits = spu_00->channels[uVar8].dirty_bits | 2;
  return;
}


