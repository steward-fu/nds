/*
 * Ghidra decompilation
 *
 * Function : icon_cache_free
 * Address  : 0809c0f8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void icon_cache_free(icon_cache_struct *icon_cache)

{
  char **ppcVar1;
  uint uVar2;
  
  if (icon_cache->cached != (nds_icon_struct *)0x0) {
    free(icon_cache->cached);
  }
  if (icon_cache->num_cached != 0) {
    uVar2 = 0;
    do {
      ppcVar1 = icon_cache->file_names + uVar2;
      uVar2 = uVar2 + 1;
      free(*ppcVar1);
    } while (uVar2 < icon_cache->num_cached);
  }
  free(icon_cache->file_names);
  return;
}


