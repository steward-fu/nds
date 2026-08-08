/*
 * Ghidra decompilation
 *
 * Function : event_timer_overflow_function
 * Address  : 080178a4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable timer:timer_struct *[r1:4] conflicts with parameter, skipped. */

void event_timer_overflow_function(system_struct *system,void *data)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  u8 *io_region;
  event_struct *peVar4;
  event_struct *current_event;
  event_struct *peVar5;
  uint uVar6;
  uint uVar7;
  cpu_struct *cpu;
  int iVar8;
  uint uVar9;
  u32 timer_number;
  event_struct *peVar10;
  event_struct *new_event;
  uint uVar11;
  undefined4 uVar12;
  
                    /* WARNING: Load size is inaccurate */
  uVar1 = *(ushort *)((int)data + 0x1a);
  uVar9 = (uint)*(byte *)((int)data + 0x1d);
  uVar11 = (uint)*(byte *)(*data + 0x2104);
  if (uVar11 == 0 && uVar9 == 1) {
    if (((system->config).enable_sound != 0) && (((system->benchmark).disable & 0x40) == 0)) {
      update_spu(system);
    }
    uVar2 = *(ushort *)((int)data + 0x3a);
  }
  else {
    if (uVar9 == 3) goto LAB_08017904;
    uVar2 = *(ushort *)((int)data + 0x3a);
  }
  if ((uVar2 & 4) != 0) {
                    /* WARNING: Load size is inaccurate */
    iVar8 = *(int *)(*data + 0x230c);
    iVar3 = (uVar9 + 0x41) * 4;
    if (*(char *)(*data + 0x2104) == '\x01') {
      iVar8 = iVar8 + 0x1b000;
    }
    else {
      iVar8 = iVar8 + 0x23000;
    }
    *(short *)(iVar8 + 0x40 + iVar3) = *(short *)(iVar8 + 0x40 + iVar3) + 1;
  }
LAB_08017904:
  if ((uVar1 & 0x40) != 0) {
                    /* WARNING: Load size is inaccurate */
    iVar3 = *(int *)(*data + 0x2080);
    uVar7 = *(uint *)(iVar3 + 0x214) | *(uint *)((int)data + 0x10);
    *(uint *)(iVar3 + 0x214) = uVar7;
                    /* WARNING: Load size is inaccurate */
    if ((*(byte *)(*data + 0x2105) & 6) == 0) {
      *(uint *)(*data + 0x2100) = uVar7 & -*(int *)(iVar3 + 0x208) & *(uint *)(iVar3 + 0x210);
    }
  }
  peVar4 = (system->event_list).base;
  uVar12 = *(undefined4 *)((int)&system->global_cycles + 4);
  uVar7 = *(uint *)((int)data + 0x14);
  *(undefined4 *)((int)data + 8) = *(undefined4 *)&system->global_cycles;
  *(undefined4 *)((int)data + 0xc) = uVar12;
  peVar10 = (system->event_list).event_storage + uVar11 * 4 + uVar9 + 3;
  if ((peVar4 == (event_struct *)0x0) || (uVar6 = peVar4->cycles_forward, uVar7 <= uVar6)) {
    (system->event_list).event_storage[uVar11 * 4 + uVar9 + 3].cycles_forward = uVar7;
    (system->event_list).event_storage[uVar11 * 4 + uVar9 + 3].next = peVar4;
    (system->event_list).event_storage[uVar11 * 4 + uVar9 + 3].previous = (event_struct *)0x0;
    (system->event_list).base = peVar10;
  }
  else {
    do {
      peVar5 = peVar4;
      peVar4 = peVar5->next;
      uVar7 = uVar7 - uVar6;
      if (peVar4 == (event_struct *)0x0) break;
      uVar6 = peVar4->cycles_forward;
    } while (uVar6 < uVar7);
    (system->event_list).event_storage[uVar11 * 4 + uVar9 + 3].cycles_forward = uVar7;
    (system->event_list).event_storage[uVar11 * 4 + uVar9 + 3].next = peVar4;
    (system->event_list).event_storage[uVar11 * 4 + uVar9 + 3].previous = peVar5;
    peVar5->next = peVar10;
  }
  if (peVar4 != (event_struct *)0x0) {
    peVar4->previous = peVar10;
    peVar4->cycles_forward = peVar4->cycles_forward - uVar7;
  }
  return;
}


