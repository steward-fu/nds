/*
 * Ghidra decompilation
 *
 * Function : translation_cache_flush_main
 * Address  : 080b88c8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void translation_cache_flush_main(translation_cache_struct *translation_cache)

{
  translation_cache->translation_ptr_main = translation_cache->translation_buffer_main;
  translation_cache->translation_ptr_main_b = translation_cache->translation_buffer_itcm;
  return;
}


