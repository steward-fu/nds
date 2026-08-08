/*
 * Ghidra decompilation
 *
 * Function : file_info_cache_free
 * Address  : 0809bc5c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void file_info_cache_free(file_info_cache_struct *file_info_cache)

{
  int iVar1;
  file_info_struct *__ptr;
  int iVar2;
  uint uVar3;
  
  __ptr = file_info_cache->cached;
  if (__ptr == (file_info_struct *)0x0) {
    return;
  }
  if (file_info_cache->num_cached != 0) {
    iVar2 = 0;
    uVar3 = 0;
    do {
      uVar3 = uVar3 + 1;
      iVar1 = iVar2 + 0x10;
      iVar2 = iVar2 + 0x18;
      free(*(void **)(__ptr->header_title + iVar1));
      __ptr = file_info_cache->cached;
    } while (uVar3 < file_info_cache->num_cached);
  }
  free(__ptr);
  free(file_info_cache->sorted);
  file_info_cache->cached = (file_info_struct *)0x0;
  file_info_cache->sorted = (file_info_struct **)0x0;
  file_info_cache->num_cached = 0;
  return;
}


