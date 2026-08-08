/*
 * Ghidra decompilation
 *
 * Function : ipc_receive
 * Address  : 080228c8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u32 ipc_receive(ipc_struct *ipc)

{
  byte bVar1;
  u8 *puVar2;
  u8 *io_region;
  cpu_struct *pcVar3;
  cpu_struct *cpu;
  u32 uVar4;
  ipc_struct *piVar5;
  uint uVar6;
  u8 *io_region_1;
  u8 *puVar7;
  
  puVar2 = ipc->io_region;
  if ((puVar2[0x185] & 0x80) == 0) {
    return 0;
  }
  if ((ipc->status & 1) == 0) {
    piVar5 = ipc->alternate_ipc;
    bVar1 = ipc->status & 0xfd;
    uVar6 = ipc->fifo_read_position + 1 & 0xf;
    puVar7 = piVar5->io_region;
    uVar4 = ipc->fifo_data[ipc->fifo_read_position];
    ipc->fifo_read_position = (u8)uVar6;
    ipc->status = bVar1;
    if (ipc->fifo_write_position == uVar6) {
      ipc->status = bVar1 | 1;
    }
    puVar7[0x184] = puVar7[0x184] & 0xfd;
    if ((ipc->status & 1) != 0) {
      puVar2[0x185] = puVar2[0x185] | 1;
      bVar1 = puVar7[0x184];
      puVar7[0x184] = bVar1 | 1;
      if ((bVar1 & 2) != 0) {
        pcVar3 = ipc->cpu;
        if (pcVar3->type == '\x01') {
          pcVar3->alert_flags = pcVar3->alert_flags | 4;
        }
        puVar2 = piVar5->cpu->io_region;
        uVar6 = *(uint *)(puVar2 + 0x214);
        *(uint *)(puVar2 + 0x214) = uVar6 | 0x20000;
        if ((piVar5->cpu->state & 6) == 0) {
          piVar5->cpu->active_interrupts =
               (uVar6 | 0x20000) & -*(int *)(puVar2 + 0x208) & *(uint *)(puVar2 + 0x210);
        }
      }
    }
    return uVar4;
  }
  puVar2[0x185] = puVar2[0x185] | 0x40;
  return 0;
}


