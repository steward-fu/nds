/*
 * Ghidra decompilation
 *
 * Function : translation_cache_flush_itcm
 * Address  : 080b88f8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void translation_cache_flush_itcm(translation_cache_struct *translation_cache)

{
  translation_cache->translation_ptr_itcm = translation_cache->translation_buffer_itcm;
  translation_cache->translation_ptr_itcm_b = translation_cache->translation_buffer_alternate;
  return;
}


