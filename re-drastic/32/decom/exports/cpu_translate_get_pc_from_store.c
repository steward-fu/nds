/*
 * Ghidra decompilation
 *
 * Function : cpu_translate_get_pc_from_store
 * Address  : 080b8860
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable block_ptr_key:u32 *[r0:4] conflicts with parameter, skipped. */

u32 cpu_translate_get_pc_from_store(u32 *block_ptr)

{
  uint uVar1;
  uint *puVar2;
  u32 *pc_metadata_ptr;
  u32 *puVar3;
  uint uVar4;
  u32 tag_pair;
  u32 *block_metadata_ptr;
  
  puVar3 = block_ptr;
  if (*block_ptr == 0xe11a000a) {
    uVar1 = 0;
  }
  else {
    do {
      puVar3 = puVar3 + -1;
    } while (*puVar3 != 0xe11a000a);
    uVar1 = (int)block_ptr - (int)puVar3 >> 2;
    block_ptr = puVar3;
  }
  puVar2 = *(uint **)(block_ptr[-1] + 0x14);
  uVar4 = *puVar2;
  while (uVar1 != uVar4 >> 0x10) {
    puVar2 = puVar2 + 1;
    uVar4 = *puVar2;
  }
  return (uVar4 & 0xffff) + *(int *)(block_ptr[-1] + 4);
}


