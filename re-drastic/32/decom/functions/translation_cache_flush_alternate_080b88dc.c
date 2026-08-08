/*
 * Ghidra decompilation
 *
 * Function : translation_cache_flush_alternate
 * Address  : 080b88dc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void translation_cache_flush_alternate(translation_cache_struct *translation_cache)

{
  translation_cache->translation_ptr_alternate = translation_cache->translation_buffer_alternate;
  translation_cache->translation_ptr_alternate_b = (u8 *)translation_cache->block_lookup_hash_main;
  return;
}


