/*
 * Ghidra decompilation
 *
 * Function : icon_cache_add
 * Address  : 0809bfb0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

nds_icon_struct *
icon_cache_add(icon_cache_struct *icon_cache,FILE *icon_cache_file,nds_icon_struct *nds_icon,
              char *file_name)

{
  size_t __size;
  u32 file_name_length;
  nds_icon_struct *pnVar1;
  char **ppcVar2;
  char *pcVar3;
  u32 uVar4;
  u32 num_cached;
  u32 uVar5;
  nds_icon_struct *new_icon;
  
  uVar4 = icon_cache->num_cached;
  __size = strlen(file_name);
  uVar5 = uVar4 + 1;
  __printf_chk(1,"Adding icon to cache @ %d (%p)\n",uVar4,icon_cache_file);
  pnVar1 = (nds_icon_struct *)realloc(icon_cache->cached,uVar5 * 800);
  icon_cache->cached = pnVar1;
  ppcVar2 = (char **)realloc(icon_cache->file_names,uVar5 * 4);
  pnVar1 = icon_cache->cached;
  icon_cache->file_names = ppcVar2;
  memcpy(pnVar1 + uVar4,nds_icon,800);
  ppcVar2 = icon_cache->file_names;
  pcVar3 = (char *)malloc(__size + 1);
  ppcVar2[uVar4] = pcVar3;
  strcpy(icon_cache->file_names[uVar4],file_name);
  icon_cache->num_cached = uVar5;
  if (icon_cache_file != (FILE *)0x0) {
    fwrite(nds_icon,0x200,1,(FILE *)icon_cache_file);
    fwrite(nds_icon->palette,0x20,1,(FILE *)icon_cache_file);
    fputc(__size,(FILE *)icon_cache_file);
    fputc(__size >> 8,(FILE *)icon_cache_file);
    fwrite(file_name,__size,1,(FILE *)icon_cache_file);
  }
  return pnVar1 + uVar4;
}


