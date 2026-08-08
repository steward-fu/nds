/*
 * Ghidra decompilation
 *
 * Function : translation_cache_flush_main
 * Address  : 001968a0
 * Program  : drastic64
 */


void translation_cache_flush_main(long param_1)

{
  *(long *)(nds_system + param_1 + 0xf24000) = param_1;
  *(long *)(nds_system + param_1 + 0xf24008) = param_1 + 0x1000000;
  return;
}


