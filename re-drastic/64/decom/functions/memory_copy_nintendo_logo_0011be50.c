/*
 * Ghidra decompilation
 *
 * Function : memory_copy_nintendo_logo
 * Address  : 0011be50
 * Program  : drastic64
 */


void memory_copy_nintendo_logo(long param_1,long param_2)

{
  if ((*(byte *)(param_1 + 0xfd512) >> 1 & 1) == 0) {
    return;
  }
  memcpy((void *)(param_1 + 0x10040),(void *)(param_2 + 0xc0),0x9e);
  return;
}


