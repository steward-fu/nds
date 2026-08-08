/*
 * Ghidra decompilation
 *
 * Function : icon_cache_lookup
 * Address  : 0809c15c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

nds_icon_struct * icon_cache_lookup(icon_cache_struct *icon_cache,char *file_name,u32 index_hint)

{
  int iVar1;
  nds_icon_struct *pnVar2;
  char **ppcVar3;
  uint uVar4;
  
  uVar4 = icon_cache->num_cached;
  if ((index_hint < uVar4) &&
     (iVar1 = strcmp(file_name,icon_cache->file_names[index_hint]), iVar1 == 0)) {
LAB_0809c1d8:
    pnVar2 = icon_cache->cached + index_hint;
  }
  else if (uVar4 == 0) {
    pnVar2 = (nds_icon_struct *)0x0;
  }
  else {
    index_hint = 0;
    ppcVar3 = icon_cache->file_names + -1;
    do {
      ppcVar3 = ppcVar3 + 1;
      iVar1 = strcmp(file_name,*ppcVar3);
      if (iVar1 == 0) goto LAB_0809c1d8;
      index_hint = index_hint + 1;
    } while (uVar4 != index_hint);
    pnVar2 = (nds_icon_struct *)0x0;
  }
  return pnVar2;
}


