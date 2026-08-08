/*
 * Ghidra decompilation
 *
 * Function : file_info_cache_load
 * Address  : 0809b9bc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

s32 file_info_cache_load(file_info_cache_struct *file_info_cache)

{
  int iVar1;
  int iVar2;
  FILE *__stream;
  FILE *cache_file;
  file_info_struct *pfVar3;
  char *pcVar4;
  char *title_base_ptr;
  char *pcVar5;
  char *title_end_ptr;
  size_t sVar6;
  u32 file_name_length;
  ulong uVar7;
  file_info_struct **__base;
  int iVar8;
  u32 __nmemb;
  size_t sVar9;
  size_t local_43c;
  char line_buffer [1024];
  
  iVar2 = __stack_chk_guard;
  __stream = fopen(".drastic_file_info.txt","rb");
  pfVar3 = (file_info_struct *)malloc(0x300);
  file_info_cache->cached = pfVar3;
  if (__stream == (FILE *)0x0) {
    file_info_cache->cached = (file_info_struct *)0x0;
    file_info_cache->sorted = (file_info_struct **)0x0;
    puts("No cache file in directory.");
    fflush(stdout);
    __nmemb = 0;
  }
  else {
    local_43c = 0x20;
    __nmemb = 0;
    while (pcVar4 = fgets(line_buffer,0x400,__stream), pcVar4 != (char *)0x0) {
      pcVar4 = strchr(line_buffer,0x27);
      if (pcVar4 != (char *)0x0) {
        pcVar4 = pcVar4 + 1;
        pcVar5 = strchr(pcVar4,0x27);
        if (((pcVar5 != (char *)0x0) && (pcVar5[1] == ' ')) && (pcVar5[2] != '\n')) {
          pfVar3 = file_info_cache->cached;
          sVar9 = __nmemb + 1;
          *pcVar5 = '\0';
          sVar6 = strlen(pcVar5 + 2);
          uVar7 = strtoul(line_buffer,(char **)0x0,0x10);
          pfVar3[__nmemb].game_code = uVar7;
          unescape_str(pfVar3[__nmemb].header_title,pcVar4,(u32)(pcVar5 + (1 - (int)pcVar4)),0xc);
          pfVar3[__nmemb].header_title[0xc] = '\0';
          pcVar4 = (char *)malloc(sVar6);
          pfVar3[__nmemb].file_name = pcVar4;
          memcpy(pcVar4,pcVar5 + 2,sVar6 - 1);
          pfVar3[__nmemb].file_name[sVar6 - 1] = '\0';
          __nmemb = sVar9;
          if (local_43c == sVar9) {
            pfVar3 = (file_info_struct *)realloc(file_info_cache->cached,local_43c * 0x30);
            file_info_cache->cached = pfVar3;
            local_43c = local_43c * 2;
          }
        }
      }
    }
    pfVar3 = (file_info_struct *)realloc(file_info_cache->cached,__nmemb * 0x18);
    file_info_cache->cached = pfVar3;
    __base = (file_info_struct **)malloc(__nmemb << 2);
    file_info_cache->sorted = __base;
    if (__nmemb != 0) {
      sVar6 = 0;
      iVar8 = 0;
      while( true ) {
        iVar1 = iVar8 + -4;
        iVar8 = iVar8 + 0x18;
        __base[sVar6] = (file_info_struct *)(pfVar3->header_title + iVar1);
        sVar6 = sVar6 + 1;
        if (__nmemb == sVar6) break;
        pfVar3 = file_info_cache->cached;
        __base = file_info_cache->sorted;
      }
      __base = file_info_cache->sorted;
    }
    qsort(__base,__nmemb,4,compare_file_info);
    __printf_chk(1,"Loaded %d files in file info cache.\n",__nmemb);
    fflush(stdout);
    fclose(__stream);
  }
  file_info_cache->num_cached = __nmemb;
  if (iVar2 == __stack_chk_guard) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


