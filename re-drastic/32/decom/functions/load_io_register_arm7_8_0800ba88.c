/*
 * Ghidra decompilation
 *
 * Function : load_io_register_arm7_8
 * Address  : 0800ba88
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u8 load_io_register_arm7_8(memory_struct *memory,u32 address)

{
  ushort uVar1;
  u32 uVar2;
  u32 rom_control_value;
  uint uVar3;
  u32 timer_number;
  uint uVar4;
  uint uVar5;
  system_struct *psVar6;
  uint uVar7;
  cpu_struct *pcVar8;
  cpu_struct *cpu;
  system_struct *psVar9;
  uint uVar10;
  bool bVar11;
  
  uVar4 = address & 0xfffffffe;
  if (uVar4 != 0x1a2) {
    if (uVar4 < 0x1a3) {
      if (uVar4 == 0x108) {
LAB_0800bbb4:
        uVar4 = uVar4 - 0x100 >> 2;
        psVar6 = memory->system;
        uVar1 = (psVar6->cpu_arm7).timers[uVar4].control;
        if ((uVar1 & 4) == 0) {
          if ((uVar1 & 0x80) == 0) {
            uVar4 = (uint)(psVar6->cpu_arm7).timers[uVar4].reload_value;
          }
          else {
            pcVar8 = (psVar6->cpu_arm7).timers[uVar4].cpu;
            psVar9 = pcVar8->system;
            uVar4 = (uint)(psVar6->cpu_arm7).timers[uVar4].reload_value +
                    (((*(int *)&psVar9->global_cycles + psVar9->cycles_to_next_event) -
                     pcVar8->cycles_remaining) -
                     *(int *)&(psVar6->cpu_arm7).timers[uVar4].reload_timestamp >>
                    (psVar6->cpu_arm7).timers[uVar4].prescale) & 0xffff;
          }
          goto LAB_0800bb84;
        }
      }
      else if (uVar4 < 0x109) {
        if ((uVar4 == 0x100) || (uVar4 == 0x104)) goto LAB_0800bbb4;
      }
      else {
        if (uVar4 == 0x10c) goto LAB_0800bbb4;
        if (uVar4 == 0x1a0) goto LAB_0800bc04;
      }
LAB_0800bb70:
      uVar4 = (uint)*(ushort *)(memory->arm7_io_registers + (address & 0x7ffe));
      goto LAB_0800bb84;
    }
    if (uVar4 != 0x1aa) {
      if (uVar4 < 0x1ab) {
        if (uVar4 == 0x1a6) {
          psVar6 = memory->system;
          uVar4 = *(uint *)(memory->arm9_io_registers + 0x1a4);
          uVar10 = (psVar6->cpu_arm9).cycles_remaining;
          uVar7 = *(uint *)((int)&memory->gamecard->dma_completion_timestamp + 4);
          uVar3 = *(uint *)&psVar6->global_cycles + psVar6->cycles_to_next_event;
          uVar5 = (*(int *)((int)&psVar6->global_cycles + 4) +
                  (uint)CARRY4(*(uint *)&psVar6->global_cycles,psVar6->cycles_to_next_event)) -
                  (((int)uVar10 >> 0x1f) + (uint)(uVar3 < uVar10));
          bVar11 = uVar7 <= uVar5;
          if (uVar5 == uVar7) {
            bVar11 = *(uint *)&memory->gamecard->dma_completion_timestamp <= uVar3 - uVar10;
          }
          if (!bVar11) {
            uVar4 = uVar4 & 0xff7fffff;
          }
          uVar4 = uVar4 >> 0x10;
          goto LAB_0800bb84;
        }
        if (uVar4 == 0x1a8) goto LAB_0800bc04;
      }
      else {
        if (uVar4 == 0x204) {
          uVar4 = *(ushort *)(memory->arm9_io_registers + 0x204) & 0xe880 |
                  *(ushort *)(memory->arm7_io_registers + 0x204) & 0x3f | 0x4000;
          goto LAB_0800bb84;
        }
        if (uVar4 == 0x100000) {
          uVar2 = ipc_receive(&memory->ipc_receive_arm7);
          uVar4 = uVar2 & 0xffff;
          goto LAB_0800bb84;
        }
      }
      goto LAB_0800bb70;
    }
  }
LAB_0800bc04:
  uVar4 = (uint)*(ushort *)(memory->arm9_io_registers + uVar4);
LAB_0800bb84:
  if ((address & 1) != 0) {
    uVar4 = uVar4 >> 8;
  }
  return (u8)uVar4;
}


