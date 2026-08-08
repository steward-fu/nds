/*
 * Ghidra decompilation
 *
 * Function : backup_nand_read
 * Address  : 00172450
 * Program  : drastic64
 */


undefined4 backup_nand_read(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x2410) + (ulong)*(uint *)(param_1 + 0x2404));
  *(uint *)(param_1 + 0x2404) = *(uint *)(param_1 + 0x2404) + 4 & *(uint *)(param_1 + 0x2408);
  return uVar1;
}


