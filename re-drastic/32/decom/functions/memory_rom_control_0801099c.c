/*
 * Ghidra decompilation
 *
 * Function : memory_rom_control
 * Address  : 0801099c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable rom_control_value:u32[r0:4] conflicts with parameter, skipped. */

u32 memory_rom_control(memory_struct *memory)

{
  u32 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  system_struct *psVar6;
  bool bVar7;
  
  uVar4 = *(uint *)((int)&memory->gamecard->dma_completion_timestamp + 4);
  psVar6 = memory->system;
  uVar1 = *(u32 *)(memory->arm9_io_registers + 0x1a4);
  uVar5 = (psVar6->cpu_arm9).cycles_remaining;
  uVar2 = *(uint *)&psVar6->global_cycles + psVar6->cycles_to_next_event;
  uVar3 = (*(int *)((int)&psVar6->global_cycles + 4) +
          (uint)CARRY4(*(uint *)&psVar6->global_cycles,psVar6->cycles_to_next_event)) -
          (((int)uVar5 >> 0x1f) + (uint)(uVar2 < uVar5));
  bVar7 = uVar4 <= uVar3;
  if (uVar3 == uVar4) {
    bVar7 = *(uint *)&memory->gamecard->dma_completion_timestamp <= uVar2 - uVar5;
  }
  if (!bVar7) {
    uVar1 = uVar1 & 0xff7fffff;
  }
  return uVar1;
}


