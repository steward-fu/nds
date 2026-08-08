/*
 * Ghidra decompilation
 *
 * Function : event_gamecard_irq_function
 * Address  : 080177bc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable gamecard:gamecard_struct *[r1:4] conflicts with parameter, skipped. */

void event_gamecard_irq_function(system_struct *system,void *data)

{
  int iVar1;
  u8 *io_region;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)data + 0x880);
  *(undefined *)((int)data + 0x2ce9) = 0;
  iVar1 = *(int *)(iVar3 + 0x15a8c78);
  uVar2 = *(uint *)(iVar1 + 0x214) | 0x80000;
  *(uint *)(iVar1 + 0x214) = uVar2;
  if ((*(byte *)(iVar3 + 0x15a8cfd) & 6) == 0) {
    *(uint *)(iVar3 + 0x15a8cf8) = uVar2 & -*(int *)(iVar1 + 0x208) & *(uint *)(iVar1 + 0x210);
  }
  return;
}


