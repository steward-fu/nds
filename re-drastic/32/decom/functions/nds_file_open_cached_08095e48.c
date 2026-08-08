/*
 * Ghidra decompilation
 *
 * Function : nds_file_open_cached
 * Address  : 08095e48
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

s32 nds_file_open_cached(nds_file_struct *nds_file,char *cache_path,u32 open_trimmed)

{
  int iVar1;
  void *__fd;
  s32 sVar2;
  u32 uVar3;
  u8 *puVar4;
  ssize_t sVar5;
  char cache_file_name [1024];
  
  iVar1 = __stack_chk_guard;
  __sprintf_chk(cache_file_name,1,0x400,"%s%cunzipped_rom.nds",cache_path,0x2f);
  __fd = (void *)open(cache_file_name,0);
  if ((int)__fd < 0) {
    sVar2 = 1;
    goto LAB_08095fd4;
  }
  nds_file->handle = __fd;
  uVar3 = lseek((int)__fd,0,2);
  nds_file->size = uVar3;
  nds_file->size_trimmed = uVar3;
  nds_file->type = NDS_FILE_TYPE_DIRECT;
  nds_file->mapped_memory = '\x01';
  if (open_trimmed == 0) {
    lseek((int)__fd,0,0);
    puVar4 = (u8 *)mmap((void *)0x0,nds_file->size_trimmed,1,1,(int)__fd,0);
    nds_file->data = puVar4;
    if (puVar4 == (u8 *)0xffffffff) {
      puts("Could not mmap cached ROM.");
      puts("Trying again with trimming enabled.");
      goto LAB_08095f2c;
    }
  }
  else {
LAB_08095f2c:
    lseek((int)__fd,0x80,0);
    sVar5 = read((int)__fd,&nds_file->size_trimmed,4);
    if (sVar5 < 1) {
      puts("ERROR: could not read trim size from header");
    }
    else if ((nds_file->size_trimmed == 0) || (nds_file->size < nds_file->size_trimmed)) {
      __printf_chk(1,"WARNING: invalid trim size %08x/%08x\n");
      nds_file->size_trimmed = nds_file->size;
    }
    lseek((int)__fd,0,0);
    puVar4 = (u8 *)mmap((void *)0x0,nds_file->size_trimmed,1,1,(int)__fd,0);
    nds_file->data = puVar4;
    if (puVar4 == (u8 *)0xffffffff) {
      puts("Could not mmap cached ROM.");
      puts("ERROR: Total failure on cached ROM mmap.");
      sVar2 = 1;
      goto LAB_08095fd4;
    }
  }
  __printf_chk(1,"Opened cached ROM %s\n",cache_file_name);
  sVar2 = 0;
LAB_08095fd4:
  if (iVar1 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return sVar2;
}


