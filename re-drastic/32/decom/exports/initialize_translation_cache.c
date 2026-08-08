/*
 * Ghidra decompilation
 *
 * Function : initialize_translation_cache
 * Address  : 080b8914
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void initialize_translation_cache(translation_cache_struct *translation_cache)

{
  translation_cache->translation_log_raw = (FILE *)0x0;
  translation_cache->translation_log = (FILE *)0x0;
  return;
}


