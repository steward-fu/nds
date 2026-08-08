/*
 * Ghidra decompilation
 *
 * Function : backup_nand_set_position
 * Address  : 00172440
 * Program  : drastic64
 */


void backup_nand_set_position(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x2404) = *(uint *)(param_1 + 0x2408) & param_2;
  return;
}


