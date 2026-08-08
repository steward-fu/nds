/*
 * Ghidra decompilation
 *
 * Function : store_io_register_arm7_32
 * Address  : 0800ac58
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void store_io_register_arm7_32(memory_struct *memory,u32 address,u32 value)

{
  byte bVar1;
  memory_struct *pmVar2;
  u8 *puVar3;
  u8 *io_region;
  u32 dma_control;
  u32 dma_control_1;
  cpu_struct *cpu;
  u32 dma_control_2;
  u32 dma_control_3;
  byte bVar4;
  cpu_struct *pcVar5;
  uint uVar6;
  u32 ie_value;
  cpu_struct *cpu_1;
  cpu_struct *cpu_2;
  u32 *puVar7;
  u32 new_ie_value;
  bool bVar8;
  
  if (address == 0x188) {
    if ((memory->arm7_io_registers[0x185] & 0x80) == 0) {
      return;
    }
    if (((memory->ipc_receive_arm9).status & 2) != 0) {
      memory->arm7_io_registers[0x185] = memory->arm7_io_registers[0x185] | 0x40;
      return;
    }
    ipc_fifo_queue(&memory->ipc_receive_arm9,value);
    bVar4 = memory->arm9_io_registers[0x185] & 0xfe;
    memory->arm9_io_registers[0x185] = bVar4;
    memory->arm7_io_registers[0x184] = memory->arm7_io_registers[0x184] & 0xfe;
    bVar1 = (memory->ipc_receive_arm9).status;
    if ((bVar1 & 2) != 0) {
      __printf_chk(1,"CPU %s made its send FIFO full.\n",&DAT_0813abd0);
      memory->arm7_io_registers[0x184] = memory->arm7_io_registers[0x184] | 2;
      bVar4 = memory->arm9_io_registers[0x185] | 2;
      memory->arm9_io_registers[0x185] = bVar4;
      bVar1 = (memory->ipc_receive_arm9).status;
    }
    if ((bVar1 & 1) != 0) {
      return;
    }
    if ((bVar4 & 4) == 0) {
      return;
    }
    pcVar5 = memory->memory_interface_arm7->cpu;
    if (pcVar5->type == '\x01') {
      pcVar5->alert_flags = pcVar5->alert_flags | 4;
    }
    puVar3 = memory->memory_interface_arm9->cpu->io_region;
    uVar6 = *(uint *)(puVar3 + 0x214);
    *(uint *)(puVar3 + 0x214) = uVar6 | 0x40000;
    pcVar5 = memory->memory_interface_arm9->cpu;
    if ((pcVar5->state & 6) != 0) {
      return;
    }
    pcVar5->active_interrupts =
         (uVar6 | 0x40000) & -*(int *)(puVar3 + 0x208) & *(uint *)(puVar3 + 0x210);
    return;
  }
  if (0x188 < address) {
    if (address == 0x208) {
      value = value & 1;
      pcVar5 = memory->memory_interface_arm7->cpu;
      if ((value == 0) || (*(int *)(memory->arm7_io_registers + 0x208) != 0)) {
        pcVar5->active_interrupts = 0;
      }
      else {
        uVar6 = *(uint *)(memory->arm7_io_registers + 0x214) &
                *(uint *)(memory->arm7_io_registers + 0x210);
        pcVar5->active_interrupts = uVar6;
        if (uVar6 == 0) {
          value = 1;
        }
        else {
          value = 1;
          pcVar5->alert_flags = pcVar5->alert_flags | 2;
        }
      }
LAB_0800adc8:
      *(u32 *)(memory->arm7_io_registers + (address & 0x7fff)) = value;
      return;
    }
    if (address < 0x209) {
      if (address == 0x1a4) {
        if ((int)value < 0) {
          gamecard_command(memory->gamecard,value);
          return;
        }
        goto LAB_0800adc8;
      }
    }
    else {
      if (address == 0x210) {
        uVar6 = *(uint *)(memory->arm7_io_registers + 0x210);
        *(u32 *)(memory->arm7_io_registers + 0x210) = value;
        if ((value & ~uVar6) == 0) {
          return;
        }
        pcVar5 = memory->memory_interface_arm7->cpu;
        uVar6 = value & *(uint *)(memory->arm7_io_registers + 0x214) &
                -*(int *)(memory->arm7_io_registers + 0x208);
        pcVar5->active_interrupts = uVar6;
        if (uVar6 == 0) {
          return;
        }
        pcVar5->alert_flags = pcVar5->alert_flags | 2;
        return;
      }
      if (address == 0x214) {
        *(uint *)(memory->arm7_io_registers + 0x214) =
             *(uint *)(memory->arm7_io_registers + 0x214) & ~(value & 0xffdfffff);
        pcVar5 = memory->memory_interface_arm7->cpu;
        pcVar5->active_interrupts = ~(value & 0xffdfffff) & pcVar5->active_interrupts;
        return;
      }
    }
    goto LAB_0800af50;
  }
  if (address == 0xc4) {
    *(u32 *)(memory->arm7_io_registers + 0xc4) = value;
    if ((-1 < (int)value) || ((int)(memory->dma_arm7).channels[1].control < 0)) {
      (memory->dma_arm7).channels[1].control = value;
      return;
    }
    puVar7 = (memory->dma_arm7).channels[1].io_region;
    (memory->dma_arm7).channels[1].start_type = (byte)((value << 2) >> 0x1e);
    (memory->dma_arm7).channels[1].source_address = *puVar7;
    (memory->dma_arm7).channels[1].dest_address = puVar7[1];
    (memory->dma_arm7).channels[1].control = value;
    if ((value << 2) >> 0x1e != 0) {
      return;
    }
    pmVar2 = (memory_struct *)&memory->dma_arm7;
    address = (u32)((memory->dma_arm7).channels + 1);
  }
  else {
    pmVar2 = memory;
    if (address < 0xc5) {
      if (address != 0xb8) goto LAB_0800af50;
      *(u32 *)(memory->arm7_io_registers + 0xb8) = value;
      if ((-1 < (int)value) || ((int)(memory->dma_arm7).channels[0].control < 0)) {
        (memory->dma_arm7).channels[0].control = value;
        return;
      }
      puVar7 = (memory->dma_arm7).channels[0].io_region;
      bVar8 = (value << 2) >> 0x1e == 0;
      (memory->dma_arm7).channels[0].start_type = (byte)((value << 2) >> 0x1e);
      if (bVar8) {
        pmVar2 = (memory_struct *)&memory->dma_arm7;
        address = (u32)(memory->dma_arm7).channels;
      }
      (memory->dma_arm7).channels[0].source_address = *puVar7;
      (memory->dma_arm7).channels[0].dest_address = puVar7[1];
      (memory->dma_arm7).channels[0].control = value;
    }
    else {
      if (address != 0xd0) {
        if (address == 0xdc) {
          *(u32 *)(memory->arm7_io_registers + 0xdc) = value;
          if ((-1 < (int)value) || ((int)(memory->dma_arm7).channels[3].control < 0)) {
            (memory->dma_arm7).channels[3].control = value;
            return;
          }
          puVar7 = (memory->dma_arm7).channels[3].io_region;
          bVar8 = (value << 2) >> 0x1e == 0;
          (memory->dma_arm7).channels[3].start_type = (byte)((value << 2) >> 0x1e);
          if (bVar8) {
            pmVar2 = (memory_struct *)&memory->dma_arm7;
            address = (u32)((memory->dma_arm7).channels + 3);
          }
          (memory->dma_arm7).channels[3].source_address = *puVar7;
          (memory->dma_arm7).channels[3].dest_address = puVar7[1];
          (memory->dma_arm7).channels[3].control = value;
          if (!bVar8) {
            return;
          }
          goto LAB_0800afc8;
        }
LAB_0800af50:
        if (0x7fffff < address) {
          return;
        }
        store_io_register_arm7_16(memory,address,(u16)value);
        store_io_register_arm7_16(memory,address + 2,(u16)(value >> 0x10));
        return;
      }
      *(u32 *)(memory->arm7_io_registers + 0xd0) = value;
      if ((-1 < (int)value) || ((int)(memory->dma_arm7).channels[2].control < 0)) {
        (memory->dma_arm7).channels[2].control = value;
        return;
      }
      puVar7 = (memory->dma_arm7).channels[2].io_region;
      bVar8 = (value << 2) >> 0x1e == 0;
      (memory->dma_arm7).channels[2].start_type = (byte)((value << 2) >> 0x1e);
      if (bVar8) {
        pmVar2 = (memory_struct *)&memory->dma_arm7;
        address = (u32)((memory->dma_arm7).channels + 2);
      }
      (memory->dma_arm7).channels[2].source_address = *puVar7;
      (memory->dma_arm7).channels[2].dest_address = puVar7[1];
      (memory->dma_arm7).channels[2].control = value;
    }
    if (!bVar8) {
      return;
    }
  }
LAB_0800afc8:
  dma_transfer((dma_struct *)pmVar2,(dma_channel_struct *)address);
  return;
}


