/*
 * Ghidra decompilation
 *
 * Function : nds_file_read_to_memory_partial
 * Address  : 080967e8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

s32 nds_file_read_to_memory_partial
              (char *file_path,u32 *file_size,u8 *dest,u32 read_size,u32 read_offset)

{
  char *__s1;
  char *file_extension;
  int iVar1;
  s32 sVar2;
  FILE *__stream;
  FILE *nds_file;
  u32 uVar3;
  size_t sVar4;
  
  __s1 = strrchr(file_path,0x2e);
  if (__s1 != (char *)0x0) {
    iVar1 = strcasecmp(__s1,".nds");
    if (iVar1 == 0) {
      sVar2 = 0;
      if (read_size == 0 || dest == (u8 *)0x0) {
        return 0;
      }
      __stream = fopen(file_path,"rb");
      if (__stream != (FILE *)0x0) {
        fseek(__stream,0,2);
        uVar3 = ftell(__stream);
        *file_size = uVar3;
        fseek(__stream,read_offset,0);
        if (read_size + read_offset <= *file_size) {
          sVar4 = fread(dest,1,read_size,__stream);
          if (read_size != sVar4) {
            sVar2 = -1;
          }
          fclose(__stream);
          return sVar2;
        }
        fclose(__stream);
        return -1;
      }
    }
    else {
      iVar1 = strcasecmp(__s1,".zip");
      if (iVar1 == 0) {
        sVar2 = unzip_file_to_memory_partial(file_path,"nds",file_size,dest,read_size,read_offset);
        return sVar2;
      }
      iVar1 = strcasecmp(__s1,".7z");
      if (iVar1 == 0) {
        sVar2 = un7z_file_to_memory_partial(file_path,"nds",file_size,dest,read_size,read_offset);
        return sVar2;
      }
      iVar1 = strcasecmp(__s1,".rar");
      if (iVar1 == 0) {
        sVar2 = unrar_file_to_memory_partial(file_path,"nds",file_size,dest,read_size,read_offset);
        return sVar2;
      }
    }
  }
  return -1;
}


