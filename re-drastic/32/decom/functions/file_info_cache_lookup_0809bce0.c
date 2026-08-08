/*
 * Ghidra decompilation
 *
 * Function : file_info_cache_lookup
 * Address  : 0809bce0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

file_info_struct * file_info_cache_lookup(file_info_cache_struct *file_info_cache,char *file_name)

{
  uint uVar1;
  int iVar2;
  size_t __idx;
  size_t __u;
  uint uVar3;
  file_info_struct *pfVar4;
  file_info_struct *b;
  uint uVar5;
  file_info_struct **ppfVar6;
  
  pfVar4 = file_info_cache->cached;
  if (pfVar4 != (file_info_struct *)0x0) {
    uVar5 = 0;
    ppfVar6 = file_info_cache->sorted;
    uVar1 = file_info_cache->num_cached;
    while (uVar3 = uVar1, uVar5 < uVar3) {
      uVar1 = uVar5 + uVar3 >> 1;
      pfVar4 = ppfVar6[uVar1];
      iVar2 = strcmp(file_name,pfVar4->file_name);
      if (-1 < iVar2) {
        if (iVar2 == 0) {
          return pfVar4;
        }
        uVar5 = uVar1 + 1;
        uVar1 = uVar3;
      }
    }
    pfVar4 = (file_info_struct *)0x0;
  }
  return pfVar4;
}


