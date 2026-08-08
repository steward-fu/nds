/*
 * Ghidra decompilation
 *
 * Function : load_io_register_arm7_32
 * Address  : 0800bc98
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u32 load_io_register_arm7_32(memory_struct *memory,u32 address)

{
  ushort uVar1;
  u32 uVar2;
  u32 rom_control_value;
  uint uVar3;
  u32 timer_number;
  uint uVar4;
  system_struct *psVar5;
  uint uVar6;
  uint uVar7;
  cpu_struct *pcVar8;
  cpu_struct *cpu;
  system_struct *psVar9;
  bool bVar10;
  
  if (address == 0x1a0) {
LAB_0800be14:
    return *(u32 *)(memory->arm9_io_registers + address);
  }
  if (0x1a0 < address) {
    if (address != 0x1a8) {
      if (address < 0x1a9) {
        if (address == 0x1a4) {
          psVar5 = memory->system;
          uVar7 = (psVar5->cpu_arm9).cycles_remaining;
          uVar6 = *(uint *)((int)&memory->gamecard->dma_completion_timestamp + 4);
          uVar3 = *(uint *)&psVar5->global_cycles + psVar5->cycles_to_next_event;
          uVar4 = (*(int *)((int)&psVar5->global_cycles + 4) +
                  (uint)CARRY4(*(uint *)&psVar5->global_cycles,psVar5->cycles_to_next_event)) -
                  (((int)uVar7 >> 0x1f) + (uint)(uVar3 < uVar7));
          bVar10 = uVar6 <= uVar4;
          if (uVar4 == uVar6) {
            bVar10 = *(uint *)&memory->gamecard->dma_completion_timestamp <= uVar3 - uVar7;
          }
          if (bVar10) {
            return *(uint *)(memory->arm9_io_registers + 0x1a4);
          }
          return *(uint *)(memory->arm9_io_registers + 0x1a4) & 0xff7fffff;
        }
      }
      else {
        if (address == 0x204) {
          return *(ushort *)(memory->arm9_io_registers + 0x204) & 0xe880 |
                 *(ushort *)(memory->arm7_io_registers + 0x204) & 0x3f | 0x4000;
        }
        if (address == 0x100000) {
          uVar2 = ipc_receive(&memory->ipc_receive_arm7);
          return uVar2;
        }
      }
      goto LAB_0800bd68;
    }
    goto LAB_0800be14;
  }
  if (address != 0x104) {
    if (address < 0x105) {
      if (address != 0x100) goto LAB_0800bd68;
    }
    else if ((address != 0x108) && (address != 0x10c)) goto LAB_0800bd68;
  }
  psVar5 = memory->system;
  uVar3 = address - 0x100 >> 2;
  uVar1 = (psVar5->cpu_arm7).timers[uVar3].control;
  if ((uVar1 & 4) == 0) {
    if ((uVar1 & 0x80) == 0) {
      uVar3 = (uint)(psVar5->cpu_arm7).timers[uVar3].reload_value;
    }
    else {
      pcVar8 = (psVar5->cpu_arm7).timers[uVar3].cpu;
      psVar9 = pcVar8->system;
      uVar3 = (uint)(psVar5->cpu_arm7).timers[uVar3].reload_value +
              (((*(int *)&psVar9->global_cycles + psVar9->cycles_to_next_event) -
               pcVar8->cycles_remaining) -
               *(int *)&(psVar5->cpu_arm7).timers[uVar3].reload_timestamp >>
              (psVar5->cpu_arm7).timers[uVar3].prescale) & 0xffff;
    }
    return *(ushort *)(memory->arm7_io_registers + address + 2) | uVar3;
  }
LAB_0800bd68:
  return *(u32 *)(memory->arm7_io_registers + (address & 0x7fff));
}


