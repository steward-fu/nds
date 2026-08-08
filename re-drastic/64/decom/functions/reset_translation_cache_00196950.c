/*
 * Ghidra decompilation
 *
 * Function : reset_translation_cache
 * Address  : 00196950
 * Program  : drastic64
 */


void reset_translation_cache(long param_1)

{
  *(long *)(nds_system + param_1 + 0xf24000) = param_1;
  *(long *)(nds_system + param_1 + 0xf24008) = param_1 + 0x1000000;
  *(long *)(nds_system + param_1 + 0xf24010) = param_1 + 0x1000000;
  *(long *)(nds_system + param_1 + 0xf24018) = param_1 + 0x1100000;
  *(long *)(nds_system + param_1 + 0xf24020) = param_1 + 0x1100000;
  *(long *)(nds_system + param_1 + 0xf24028) = param_1 + 0x1300000;
  return;
}


