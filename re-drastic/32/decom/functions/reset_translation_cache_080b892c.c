/*
 * Ghidra decompilation
 *
 * Function : reset_translation_cache
 * Address  : 080b892c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void reset_translation_cache(translation_cache_struct *translation_cache)

{
  translation_cache->translation_ptr_main = translation_cache->translation_buffer_main;
  translation_cache->translation_ptr_main_b = translation_cache->translation_buffer_itcm;
  translation_cache->translation_ptr_itcm = translation_cache->translation_buffer_itcm;
  translation_cache->translation_ptr_itcm_b = translation_cache->translation_buffer_alternate;
  translation_cache->translation_ptr_alternate = translation_cache->translation_buffer_alternate;
  translation_cache->translation_ptr_alternate_b = (u8 *)translation_cache->block_lookup_hash_main;
  return;
}


