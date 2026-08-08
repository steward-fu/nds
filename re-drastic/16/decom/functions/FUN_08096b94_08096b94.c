/*
 * Ghidra decompilation
 *
 * Function : FUN_08096b94
 * Address  : 08096b94
 * Program  : drastic16
 */


void * FUN_08096b94(undefined4 param_1,char *param_2,size_t *param_3,char *param_4)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  FILE *__stream;
  void *__ptr;
  void *apvStack_3908 [2];
  undefined4 auStack_3900 [2];
  undefined4 local_38f8;
  int local_38f4;
  uint local_38e0;
  undefined auStack_3860 [5120];
  char acStack_2460 [5132];
  size_t sStack_1054;
  undefined4 uStack_1034;
  
  *param_3 = 0;
  memset(auStack_3900,0,0x9c);
  local_38f8 = 1;
  auStack_3900[0] = param_1;
  uVar1 = FUN_0809cec4(auStack_3900);
  if (local_38f4 == 0) {
    if ((local_38e0 & 0x1c5) == 0) {
      uStack_1034 = 0;
      while( true ) {
        iVar2 = FUN_0809dd8c(uVar1,auStack_3860);
        if (iVar2 != 0) break;
        pcVar3 = strrchr(acStack_2460,0x2e);
        if ((pcVar3 != (char *)0x0) && (iVar2 = strcasecmp(pcVar3 + 1,param_2), iVar2 == 0)) {
          DAT_081c5090 = sStack_1054;
          DAT_081c5088 = 0;
          DAT_081c5094 = iVar2;
          *param_3 = sStack_1054;
          if (param_4 == (char *)0x0) {
            __ptr = malloc(sStack_1054);
            apvStack_3908[0] = __ptr;
            if (__ptr == (void *)0x0) {
              puts("ERROR: could not allocate memory for RAR extraction");
              goto LAB_08096cf0;
            }
            FUN_0809ec24(uVar1,&UINT_08094570,apvStack_3908);
            iVar2 = FUN_0809eb48(uVar1,1,0,0);
            if (iVar2 != 0) {
              free(__ptr);
              __ptr = (void *)0x0;
              goto LAB_08096cf0;
            }
          }
          else {
            __stream = fopen64(param_4,"wb");
            FUN_0809ec24(uVar1,&LAB_080945dc,__stream);
            iVar2 = FUN_0809eb48(uVar1,1,0,0);
            if (iVar2 != 0) {
              puts("ERROR: could not extract RAR file");
            }
            __ptr = (void *)(uint)(iVar2 == 0);
            fclose(__stream);
          }
          if (__ptr != (void *)0x0) {
            printf("%s unrar\'ed\n",param_1);
          }
          goto LAB_08096cf0;
        }
        FUN_0809eb48(uVar1,0,0,0);
      }
      __ptr = (void *)0x0;
LAB_08096cf0:
      FUN_0809da0c(uVar1);
    }
    else {
      FUN_0809da0c();
      puts("ERROR: RAR file not supported");
      __ptr = (void *)0x0;
    }
  }
  else {
    FUN_0809da0c();
    puts("ERROR: could not open RAR");
    __ptr = (void *)0x0;
  }
  return __ptr;
}


