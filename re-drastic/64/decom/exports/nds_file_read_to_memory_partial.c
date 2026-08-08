/*
 * Ghidra decompilation
 *
 * Function : nds_file_read_to_memory_partial
 * Address  : 00175d60
 * Program  : drastic64
 */


ulong nds_file_read_to_memory_partial
                (char *param_1,uint *param_2,void *param_3,uint param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  char *__s1;
  FILE *__stream;
  long lVar3;
  size_t sVar4;
  ulong uVar5;
  
  uVar5 = (ulong)param_4;
  __s1 = strrchr(param_1,0x2e);
  if (__s1 != (char *)0x0) {
    uVar1 = strcasecmp(__s1,".nds");
    if (uVar1 == 0) {
      if (param_3 == (void *)0x0 || param_4 == 0) {
        return (ulong)uVar1;
      }
      __stream = fopen(param_1,"rb");
      if (__stream != (FILE *)0x0) {
        fseek(__stream,0,2);
        lVar3 = ftell(__stream);
        *param_2 = (uint)lVar3;
        fseek(__stream,(ulong)param_5,0);
        if (*param_2 < param_4 + param_5) {
          fclose(__stream);
          return 0xffffffff;
        }
        sVar4 = fread(param_3,1,uVar5,__stream);
        if (uVar5 == sVar4) {
          fclose(__stream);
          return (ulong)uVar1;
        }
        fclose(__stream);
        return 0xffffffff;
      }
    }
    else {
      iVar2 = strcasecmp(__s1,".zip");
      if (iVar2 == 0) {
        uVar5 = unzip_file_to_memory_partial(param_1,&DAT_00220328,param_2,param_3,uVar5,param_5);
        return uVar5;
      }
      iVar2 = strcasecmp(__s1,".7z");
      if (iVar2 == 0) {
        uVar5 = un7z_file_to_memory_partial(param_1,&DAT_00220328,param_2,param_3,uVar5,param_5);
        return uVar5;
      }
      iVar2 = strcasecmp(__s1,".rar");
      if (iVar2 == 0) {
        uVar5 = unrar_file_to_memory_partial(param_1,&DAT_00220328,param_2,param_3,uVar5,param_5);
        return uVar5;
      }
    }
  }
  return 0xffffffff;
}


