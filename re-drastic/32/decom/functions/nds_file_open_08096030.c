/*
 * Ghidra decompilation
 *
 * Function : nds_file_open
 * Address  : 08096030
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

nds_file_struct * nds_file_open(char *file_path,char *cache_path,u32 open_trimmed)

{
  int iVar1;
  void *__fd;
  nds_file_struct *nds_file;
  char *__s1;
  char *file_extension;
  int iVar2;
  u32 uVar3;
  u8 *puVar4;
  ssize_t sVar5;
  s32 sVar6;
  FILE *cache_file;
  u32 uVar7;
  size_t file_size;
  FILE *cache_info_file;
  size_t sVar8;
  FILE *pFVar9;
  FILE *cache_info_file_1;
  uint __size;
  uint uVar10;
  char *dest_file_name;
  u32 cached_size;
  u64 file_time;
  stat file_info;
  char cache_file_name_buffer [1024];
  char cache_info_file_name [1024];
  char file_name_padded [1024];
  char cached_file_name_padded [1024];
  
  iVar1 = __stack_chk_guard;
  if ((file_path != (char *)0x0) && (__fd = (void *)open(file_path,0), -1 < (int)__fd)) {
    nds_file = (nds_file_struct *)malloc(0x18);
    if ((nds_file == (nds_file_struct *)0x0) ||
       (__s1 = strrchr(file_path,0x2e), __s1 == (char *)0x0)) {
nds_file_error:
      close((int)__fd);
    }
    else {
      nds_file->data = (u8 *)0x0;
      iVar2 = strcasecmp(__s1,".nds");
      if (iVar2 == 0) {
        nds_file->handle = __fd;
        nds_file->type = NDS_FILE_TYPE_DIRECT;
        uVar3 = lseek((int)__fd,0,2);
        nds_file->size = uVar3;
        nds_file->size_trimmed = uVar3;
        nds_file->mapped_memory = '\x01';
        if (open_trimmed == 0) {
          lseek((int)__fd,0,0);
          puVar4 = (u8 *)mmap((void *)0x0,nds_file->size_trimmed,1,1,(int)__fd,0);
          nds_file->data = puVar4;
          if (puVar4 != (u8 *)0xffffffff) goto LAB_08096208;
          puts("Could not mmap cached ROM.");
          puts("Trying again with trimming enabled.");
        }
        lseek((int)__fd,0x80,0);
        sVar5 = read((int)__fd,&nds_file->size_trimmed,4);
        if (sVar5 < 1) {
          puts("ERROR: could not read trim size from header");
          uVar3 = nds_file->size_trimmed;
        }
        else {
          uVar3 = nds_file->size_trimmed;
          if ((uVar3 == 0) || (nds_file->size < uVar3)) {
            __printf_chk(1,"WARNING: invalid trim size %08x/%08x\n");
            uVar3 = nds_file->size;
            nds_file->size_trimmed = uVar3;
          }
        }
        __printf_chk(1,"Trimmed ROM size to %d bytes.\n",uVar3);
        lseek((int)__fd,0,0);
        puVar4 = (u8 *)mmap((void *)0x0,nds_file->size_trimmed,1,1,(int)__fd,0);
        nds_file->data = puVar4;
        if (puVar4 != (u8 *)0xffffffff) goto LAB_08096208;
        puts("Could not mmap cached ROM.");
        puts("ERROR: Total failure on uncached ROM mmap.");
        goto nds_file_error;
      }
      close((int)__fd);
      if (cache_path == (char *)0x0) {
        dest_file_name = (char *)0x0;
      }
      else {
        memset(file_name_padded,0,0x400);
        memset(cached_file_name_padded,0,0x400);
        __sprintf_chk(cache_file_name_buffer,1,0x400,"%s%cunzipped_rom.nds",cache_path,0x2f);
        __sprintf_chk(cache_info_file_name,1,0x400,"%s%ccache_info",cache_path,0x2f);
        uVar3 = __xstat(3,cache_file_name_buffer,(stat *)&file_info);
        if ((uVar3 == 0) && (pFVar9 = fopen(cache_file_name_buffer,"rb"), pFVar9 != (FILE *)0x0)) {
          fseek(pFVar9,0,2);
          uVar7 = ftell(pFVar9);
          fclose(pFVar9);
          pFVar9 = fopen(cache_info_file_name,"rb");
          if (pFVar9 != (FILE *)0x0) {
            file_time = 0;
            cached_size = uVar3;
            snprintf(file_name_padded,0x3ff,"%s",file_path);
            file_name_padded[1023] = '\0';
            sVar8 = fread(cached_file_name_padded,0x400,1,pFVar9);
            if ((((sVar8 != 0) && (sVar8 = fread(&file_time,8,1,pFVar9), sVar8 != 0)) &&
                (sVar8 = fread(&cached_size,4,1,pFVar9), sVar8 != 0)) && (uVar7 == cached_size)) {
              if ((file_info.st_mtim.tv_sec >> 0x1f == file_time._4_4_ &&
                   file_info.st_mtim.tv_sec == (int)file_time) &&
                 (iVar2 = strcmp(cached_file_name_padded,file_name_padded), iVar2 == 0)) {
                __printf_chk(1,"File %s already cached\n",file_path);
                fclose(pFVar9);
                sVar6 = nds_file_open_cached(nds_file,cache_path,open_trimmed);
                if (sVar6 == 0) goto LAB_08096208;
                puts("ERROR: could not open cached file");
                goto LAB_080962ec;
              }
            }
            fclose(pFVar9);
          }
        }
LAB_080962ec:
        dest_file_name = cache_file_name_buffer;
        __snprintf_chk(dest_file_name,0x400,1,0x400,"%s%cunzipped_rom.nds",cache_path,0x2f);
      }
      iVar2 = strcasecmp(__s1,".zip");
      if (iVar2 == 0) {
        nds_file->type = NDS_FILE_TYPE_ZIP;
        puVar4 = unzip_file(file_path,"nds",&nds_file->size,dest_file_name);
        nds_file->data = puVar4;
LAB_08096384:
        if ((puVar4 != (u8 *)0x0) && (uVar10 = nds_file->size, uVar10 != 0)) {
          nds_file->size_trimmed = uVar10;
          nds_file->mapped_memory = '\0';
          if (cache_path == (char *)0x0) {
            if (open_trimmed != 0) {
              __size = *(uint *)(puVar4 + 0x80);
              nds_file->size_trimmed = __size;
              if (__size == 0 || uVar10 < __size) {
                __printf_chk(1,"WARNING: invalid trim size: %08x\n");
                nds_file->size_trimmed = nds_file->size;
              }
              else {
                puVar4 = (u8 *)realloc(puVar4,__size);
                nds_file->data = puVar4;
                __printf_chk(1,"Trimmed ROM size to %d bytes. (compressed in RAM)\n",
                             nds_file->size_trimmed);
              }
            }
            goto LAB_08096208;
          }
          memset(cached_file_name_padded,0,0x400);
          __sprintf_chk(file_name_padded,1,0x400,"%s%cunzipped_rom.nds",cache_path,0x2f);
          __sprintf_chk(cache_info_file_name,1,0x400,"%s%ccache_info",cache_path,0x2f);
          iVar2 = __xstat(3,file_name_padded,(stat *)&file_info);
          if ((iVar2 == 0) && (pFVar9 = fopen(file_name_padded,"rb"), pFVar9 != (FILE *)0x0)) {
            fseek(pFVar9,0,2);
            cached_size = ftell(pFVar9);
            fclose(pFVar9);
            if (uVar10 != cached_size) {
              puts("ERROR: can\'t write cache info: file size mismatch");
              goto LAB_0809641c;
            }
            pFVar9 = fopen(cache_info_file_name,"wb");
            if (pFVar9 == (FILE *)0x0) goto LAB_0809641c;
            file_time = VectorShiftRight(CONCAT44(file_info.st_mtim.tv_sec,file_info.st_mtim.tv_sec)
                                         ,0x20);
            snprintf(cached_file_name_padded,0x3ff,"%s",file_path);
            cached_file_name_padded[1023] = '\0';
            fwrite(cached_file_name_padded,0x400,1,pFVar9);
            fwrite(&file_time,8,1,pFVar9);
            fwrite(&cached_size,4,1,pFVar9);
            fclose(pFVar9);
            __printf_chk(1,"Wrote %s to cache\n",file_path);
          }
          else {
LAB_0809641c:
            puts("ERROR: could not write cache info");
          }
          sVar6 = nds_file_open_cached(nds_file,cache_path,open_trimmed);
          if (sVar6 == 0) goto LAB_08096208;
        }
      }
      else {
        iVar2 = strcasecmp(__s1,".7z");
        if (iVar2 == 0) {
          nds_file->type = NDS_FILE_TYPE_7Z;
          puVar4 = un7z_file(file_path,"nds",&nds_file->size,dest_file_name);
          nds_file->data = puVar4;
          goto LAB_08096384;
        }
        iVar2 = strcasecmp(__s1,".rar");
        if (iVar2 == 0) {
          nds_file->type = NDS_FILE_TYPE_RAR;
          puVar4 = unrar_file(file_path,"nds",&nds_file->size,dest_file_name);
          nds_file->data = puVar4;
          goto LAB_08096384;
        }
      }
    }
    if (nds_file != (nds_file_struct *)0x0) {
      free(nds_file);
    }
  }
  nds_file = (nds_file_struct *)0x0;
LAB_08096208:
  if (iVar1 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return nds_file;
}


