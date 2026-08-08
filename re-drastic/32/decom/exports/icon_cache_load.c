/*
 * Ghidra decompilation
 *
 * Function : icon_cache_load
 * Address  : 0809bd6c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

s32 icon_cache_load(icon_cache_struct *icon_cache)

{
  int iVar1;
  FILE *__stream;
  FILE *cache_file;
  nds_icon_struct *pnVar2;
  char **ppcVar3;
  size_t sVar4;
  char *__ptr;
  char *file_name;
  u32 uVar5;
  u32 file_name_length;
  uint __size;
  size_t __size_00;
  u8 *__dest;
  nds_icon_struct *nds_icon;
  u32 local_258;
  u8 data_buffer [546];
  
  iVar1 = __stack_chk_guard;
  __stream = fopen(".drastic_icon_cache.bin","rb");
  pnVar2 = (nds_icon_struct *)malloc(0x6400);
  icon_cache->cached = pnVar2;
  ppcVar3 = (char **)malloc(0x80);
  icon_cache->file_names = ppcVar3;
  if (__stream == (FILE *)0x0) {
    icon_cache->cached = (nds_icon_struct *)0x0;
    puts("No icon cache in directory.");
    fflush(stdout);
    uVar5 = 0;
  }
  else {
    __size_00 = 0;
    uVar5 = 0;
    local_258 = 0x20;
    while (sVar4 = fread(data_buffer,0x222,1,__stream), sVar4 == 1) {
      __size = (uint)(ushort)data_buffer._544_2_;
      __dest = icon_cache->cached->pixels + __size_00;
      __ptr = (char *)malloc(__size + 1);
      memcpy(__dest,data_buffer,0x200);
      *(undefined4 *)(__dest + 0x200) = data_buffer._512_4_;
      *(undefined4 *)(__dest + 0x204) = data_buffer._516_4_;
      *(undefined4 *)(__dest + 0x208) = data_buffer._520_4_;
      *(undefined4 *)(__dest + 0x20c) = data_buffer._524_4_;
      *(undefined4 *)(__dest + 0x210) = data_buffer._528_4_;
      *(undefined4 *)(__dest + 0x214) = data_buffer._532_4_;
      *(undefined4 *)(__dest + 0x218) = data_buffer._536_4_;
      *(undefined4 *)(__dest + 0x21c) = data_buffer._540_4_;
      sVar4 = fread(__ptr,__size,1,__stream);
      if (sVar4 != 1) {
        free(__ptr);
        goto LAB_0809bef4;
      }
      ppcVar3 = icon_cache->file_names;
      __ptr[__size] = '\0';
      ppcVar3[uVar5] = __ptr;
      uVar5 = uVar5 + 1;
      if (local_258 == uVar5) {
        pnVar2 = (nds_icon_struct *)realloc(icon_cache->cached,local_258 * 0x640);
        icon_cache->cached = pnVar2;
        ppcVar3 = (char **)realloc(icon_cache->file_names,local_258 << 3);
        icon_cache->file_names = ppcVar3;
        local_258 = local_258 * 2;
      }
      __size_00 = __size_00 + 800;
    }
    __size_00 = uVar5 * 800;
LAB_0809bef4:
    pnVar2 = (nds_icon_struct *)realloc(icon_cache->cached,__size_00);
    icon_cache->cached = pnVar2;
    ppcVar3 = (char **)realloc(icon_cache->file_names,uVar5 << 2);
    icon_cache->file_names = ppcVar3;
    __printf_chk(1,"Loaded %d files in icon cache.\n",uVar5);
    fflush(stdout);
    fclose(__stream);
  }
  icon_cache->num_cached = uVar5;
  if (iVar1 == __stack_chk_guard) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


