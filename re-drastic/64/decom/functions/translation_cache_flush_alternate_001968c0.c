/*
 * Ghidra decompilation
 *
 * Function : translation_cache_flush_alternate
 * Address  : 001968c0
 * Program  : drastic64
 */


void translation_cache_flush_alternate(long param_1)

{
  *(long *)(nds_system + param_1 + 0xf24020) = param_1 + 0x1100000;
  *(long *)(nds_system + param_1 + 0xf24028) = param_1 + 0x1300000;
  return;
}


