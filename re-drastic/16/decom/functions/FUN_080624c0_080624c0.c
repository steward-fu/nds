/*
 * Ghidra decompilation
 *
 * Function : FUN_080624c0
 * Address  : 080624c0
 * Program  : drastic16
 */


undefined4 FUN_080624c0(void **param_1)

{
  size_t __size;
  FILE *__stream;
  void *pvVar1;
  char *pcVar2;
  size_t __size_00;
  ulong uVar3;
  void *pvVar4;
  void *pvVar5;
  int iVar6;
  char *__s;
  void *pvVar7;
  void *local_42c;
  char acStack_428 [1028];
  
  __stream = fopen(".drastic_file_info.txt","rb");
  pvVar1 = malloc(0x300);
  *param_1 = pvVar1;
  if (__stream == (FILE *)0x0) {
    *param_1 = (void *)0x0;
    param_1[1] = (void *)0x0;
    puts("No cache file in directory.");
    fflush(stdout);
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = (void *)0x0;
    pvVar7 = (void *)0x0;
    local_42c = (void *)0x20;
    while( true ) {
      iVar6 = (int)pvVar7 + (int)pvVar1;
      pcVar2 = fgets(acStack_428,0x400,__stream);
      __size = iVar6 * 8;
      if (pcVar2 == (char *)0x0) break;
      pcVar2 = strchr(acStack_428,0x27);
      pvVar5 = *param_1;
      __s = pcVar2 + 1;
      if ((((pcVar2 != (char *)0x0) && (pcVar2 = strchr(__s,0x27), pcVar2 != (char *)0x0)) &&
          (pcVar2[1] == ' ')) && (pcVar2[2] != '\n')) {
        *pcVar2 = '\0';
        __size_00 = strlen(pcVar2 + 2);
        pvVar1 = (void *)((int)pvVar1 + 1);
        pvVar7 = (void *)((int)pvVar1 * 2);
        uVar3 = strtoul(acStack_428,(char **)0x0,0x10);
        *(ulong *)((int)pvVar5 + iVar6 * 8) = uVar3;
        FUN_0805e080((int)pvVar5 + __size + 4,__s,pcVar2 + (1 - (int)__s),0xc);
        *(undefined *)((int)pvVar5 + __size + 0x10) = 0;
        pvVar4 = malloc(__size_00);
        *(void **)((int)pvVar5 + __size + 0x14) = pvVar4;
        memcpy(pvVar4,pcVar2 + 2,__size_00 - 1);
        *(undefined *)(*(int *)((int)pvVar5 + __size + 0x14) + (__size_00 - 1)) = 0;
        if (pvVar1 == local_42c) {
          pvVar5 = realloc(*param_1,(int)pvVar1 * 0x30);
          *param_1 = pvVar5;
          local_42c = pvVar7;
        }
      }
    }
    pvVar7 = realloc(*param_1,__size);
    *param_1 = pvVar7;
    pvVar5 = malloc((int)pvVar1 << 2);
    param_1[1] = pvVar5;
    if (pvVar1 != (void *)0x0) {
      iVar6 = 0;
      pvVar4 = (void *)0x0;
      while( true ) {
        *(int *)((int)pvVar5 + (int)pvVar4 * 4) = (int)pvVar7 + iVar6;
        pvVar4 = (void *)((int)pvVar4 + 1);
        iVar6 = iVar6 + 0x18;
        pvVar5 = param_1[1];
        if (pvVar4 == pvVar1) break;
        pvVar7 = *param_1;
      }
    }
    qsort(pvVar5,(size_t)pvVar1,4,FUN_08061814);
    printf("Loaded %d files in file info cache.\n",pvVar1);
    fflush(stdout);
    fclose(__stream);
  }
  param_1[2] = pvVar1;
  return 0;
}


