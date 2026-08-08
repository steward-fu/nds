/*
 * Ghidra decompilation
 *
 * Function : FUN_08060d5c
 * Address  : 08060d5c
 * Program  : drastic16
 */


undefined4 FUN_08060d5c(char *param_1,uint *param_2,void *param_3,size_t param_4,long param_5)

{
  char *__s1;
  int iVar1;
  undefined4 uVar2;
  FILE *__stream;
  uint uVar3;
  size_t sVar4;
  
  __s1 = strrchr(param_1,0x2e);
  if (__s1 != (char *)0x0) {
    iVar1 = strcasecmp(__s1,".nds");
    if (iVar1 == 0) {
      if (param_4 == 0 || param_3 == (void *)0x0) {
        return 0;
      }
      __stream = fopen(param_1,"rb");
      if (__stream != (FILE *)0x0) {
        fseek(__stream,0,2);
        uVar3 = ftell(__stream);
        *param_2 = uVar3;
        fseek(__stream,param_5,0);
        if ((param_4 + param_5 <= *param_2) &&
           (sVar4 = fread(param_3,1,param_4,__stream), sVar4 == param_4)) {
          fclose(__stream);
          return 0;
        }
        fclose(__stream);
      }
    }
    else {
      iVar1 = strcasecmp(__s1,".zip");
      if (iVar1 == 0) {
        uVar2 = FUN_08095e94(param_1,&DAT_080e8920,param_2,param_3,param_4,param_5);
        return uVar2;
      }
      iVar1 = strcasecmp(__s1,".7z");
      if (iVar1 == 0) {
        uVar2 = FUN_08095488(param_1,&DAT_080e8920,param_2,param_3,param_4,param_5);
        return uVar2;
      }
      iVar1 = strcasecmp(__s1,".rar");
      if (iVar1 == 0) {
        uVar2 = FUN_08096ddc(param_1,&DAT_080e8920,param_2,param_3,param_4,param_5);
        return uVar2;
      }
    }
  }
  return 0xffffffff;
}


