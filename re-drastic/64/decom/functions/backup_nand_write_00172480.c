/*
 * Ghidra decompilation
 *
 * Function : backup_nand_write
 * Address  : 00172480
 * Program  : drastic64
 */


void backup_nand_write(long param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x2404);
  *(uint *)(param_1 + (ulong)(uVar1 >> 0xe) * 4) =
       *(uint *)(param_1 + (ulong)(uVar1 >> 0xe) * 4) | 1 << ((ulong)(uVar1 >> 9) & 0x1f);
  *(undefined4 *)(*(long *)(param_1 + 0x2410) + (ulong)uVar1) = param_2;
  *(undefined4 *)(param_1 + 0x241c) = 0x3c;
  *(uint *)(param_1 + 0x2404) = *(int *)(param_1 + 0x2404) + 4U & *(uint *)(param_1 + 0x2408);
  return;
}


