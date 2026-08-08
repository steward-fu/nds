/*
 * Ghidra decompilation
 *
 * Function : event_dma_complete_function
 * Address  : 08017730
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable dma_channel:dma_channel_struct *[r1:4] conflicts with parameter, skipped. */

void event_dma_complete_function(system_struct *system,void *data)

{
  int iVar1;
  u8 *io_region;
  uint uVar2;
  u32 control;
  
  uVar2 = *(uint *)((int)data + 0x18);
  if ((uVar2 & 0x2000000) == 0) {
    uVar2 = uVar2 & 0x7fffffff;
    *(uint *)((int)data + 0x18) = uVar2;
    *(uint *)(*(int *)((int)data + 0xc) + 8) = uVar2;
  }
  if ((uVar2 & 0x40000000) != 0) {
    iVar1 = *(int *)(*(int *)((int)data + 8) + 0x2080);
    uVar2 = *(uint *)(iVar1 + 0x214) | 0x100 << *(sbyte *)((int)data + 0x1d);
    *(uint *)(iVar1 + 0x214) = uVar2;
    if ((*(byte *)(*(int *)((int)data + 8) + 0x2105) & 6) == 0) {
      *(uint *)(*(int *)((int)data + 8) + 0x2100) =
           uVar2 & *(uint *)(iVar1 + 0x210) & -*(int *)(iVar1 + 0x208);
    }
    *(undefined *)((int)data + 0x1e) = 0;
    return;
  }
  *(undefined *)((int)data + 0x1e) = 0;
  return;
}


