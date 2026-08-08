/*
 * Ghidra decompilation
 *
 * Function : load_io_register_arm7_16
 * Address  : 0800be74
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u16 load_io_register_arm7_16(memory_struct *memory,u32 address)

{
  u32 uVar1;
  ushort uVar2;
  u32 rom_control_value;
  cpu_struct *pcVar3;
  cpu_struct *cpu;
  system_struct *psVar4;
  uint uVar5;
  uint uVar6;
  u32 timer_number;
  uint uVar7;
  uint uVar8;
  system_struct *psVar9;
  bool bVar10;
  
  if (address == 0x1a2) {
LAB_0800c008:
    return *(u16 *)(memory->arm9_io_registers + address);
  }
  if (address < 0x1a3) {
    if (address != 0x108) {
      if (address < 0x109) {
        if ((address != 0x100) && (address != 0x104)) goto LAB_0800bf4c;
      }
      else if (address != 0x10c) {
        if (address == 0x1a0) goto LAB_0800c008;
        goto LAB_0800bf4c;
      }
    }
    psVar9 = memory->system;
    uVar5 = address - 0x100 >> 2;
    uVar2 = (psVar9->cpu_arm7).timers[uVar5].control;
    if ((uVar2 & 4) == 0) {
      if ((uVar2 & 0x80) != 0) {
        pcVar3 = (psVar9->cpu_arm7).timers[uVar5].cpu;
        psVar4 = pcVar3->system;
        return (psVar9->cpu_arm7).timers[uVar5].reload_value +
               (short)(((*(int *)&psVar4->global_cycles + psVar4->cycles_to_next_event) -
                       pcVar3->cycles_remaining) -
                       *(int *)&(psVar9->cpu_arm7).timers[uVar5].reload_timestamp >>
                      (psVar9->cpu_arm7).timers[uVar5].prescale);
      }
      return (psVar9->cpu_arm7).timers[uVar5].reload_value;
    }
  }
  else {
    if (address == 0x1aa) goto LAB_0800c008;
    if (address < 0x1ab) {
      if (address == 0x1a6) {
        psVar9 = memory->system;
        uVar2 = (ushort)((uint)*(undefined4 *)(memory->arm9_io_registers + 0x1a4) >> 0x10);
        uVar8 = (psVar9->cpu_arm9).cycles_remaining;
        uVar7 = *(uint *)((int)&memory->gamecard->dma_completion_timestamp + 4);
        uVar5 = *(uint *)&psVar9->global_cycles + psVar9->cycles_to_next_event;
        uVar6 = (*(int *)((int)&psVar9->global_cycles + 4) +
                (uint)CARRY4(*(uint *)&psVar9->global_cycles,psVar9->cycles_to_next_event)) -
                (((int)uVar8 >> 0x1f) + (uint)(uVar5 < uVar8));
        bVar10 = uVar7 <= uVar6;
        if (uVar6 == uVar7) {
          bVar10 = *(uint *)&memory->gamecard->dma_completion_timestamp <= uVar5 - uVar8;
        }
        if (bVar10) {
          return uVar2;
        }
        return uVar2 & 0xff7f;
      }
      if (address == 0x1a8) goto LAB_0800c008;
    }
    else {
      if (address == 0x204) {
        return *(ushort *)(memory->arm9_io_registers + 0x204) & 0xe880 |
               *(ushort *)(memory->arm7_io_registers + 0x204) & 0x3f | 0x4000;
      }
      if (address == 0x100000) {
        uVar1 = ipc_receive(&memory->ipc_receive_arm7);
        return (u16)uVar1;
      }
    }
  }
LAB_0800bf4c:
  return *(u16 *)(memory->arm7_io_registers + (address & 0x7fff));
}


