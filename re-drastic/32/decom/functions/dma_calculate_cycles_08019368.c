/*
 * Ghidra decompilation
 *
 * Function : dma_calculate_cycles
 * Address  : 08019368
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u32 dma_calculate_cycles(u32 source_address,u32 dest_address,u32 control,u32 cpu_type)

{
  int iVar1;
  uint uVar2;
  u32 transfer_32bit;
  int iVar3;
  uint uVar4;
  u32 length;
  uint uVar5;
  
  uVar5 = control & 0x1fffff;
  if (dest_address < 0x10000000) {
    uVar2 = dest_address >> 0x18;
  }
  else {
    uVar2 = 0;
  }
  if (source_address < 0x10000000) {
    uVar4 = source_address >> 0x18;
  }
  else {
    uVar4 = 0;
  }
  if (uVar5 == 0) {
    uVar5 = 0x200000;
  }
  iVar3 = cpu_type * 2 - ((int)(control << 5) >> 0x1f);
  if (uVar4 == uVar2) {
    return *(int *)((int)dma_calculate_cycles::cycles_non_sequential + (uVar4 + iVar3 * 0x10) * 4) *
           uVar5;
  }
  iVar3 = iVar3 * 0x10;
  iVar1 = *(int *)((int)dma_calculate_cycles::cycles_sequential + (iVar3 + uVar2) * 4);
  if (uVar2 != 6) {
    iVar1 = iVar1 + *(int *)((int)dma_calculate_cycles::cycles_sequential + (iVar3 + uVar4) * 4);
  }
  return iVar1 * uVar5;
}


