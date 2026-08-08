/*
 * Ghidra decompilation
 *
 * Function : translation_cache_flush_itcm
 * Address  : 001968e0
 * Program  : drastic64
 */


void translation_cache_flush_itcm(long param_1)

{
  *(long *)(nds_system + param_1 + 0xf24010) = param_1 + 0x1000000;
  *(long *)(nds_system + param_1 + 0xf24018) = param_1 + 0x1100000;
  return;
}


