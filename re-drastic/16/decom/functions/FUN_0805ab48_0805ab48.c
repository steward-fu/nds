/*
 * Ghidra decompilation
 *
 * Function : FUN_0805ab48
 * Address  : 0805ab48
 * Program  : drastic16
 */


undefined4 FUN_0805ab48(int param_1,undefined4 param_2)

{
  FILE *pFVar1;
  long lVar2;
  void *__ptr;
  size_t sVar3;
  uint __size;
  char *__s;
  size_t __size_00;
  int iVar4;
  int iVar5;
  char acStack_428 [1028];
  
  iVar5 = *(int *)(param_1 + 0x880);
  iVar4 = iVar5 + 0x82030;
  snprintf(acStack_428,0x400,"%s/slot2/%s.gba",iVar4,param_2);
  pFVar1 = fopen(acStack_428,"rb");
  __s = (char *)(param_1 + 0x458);
  if (*(char *)(param_1 + 0x873) != '\0') {
    free(*(void **)(param_1 + 0x858));
    if (*(void **)(param_1 + 0x85c) != (void *)0x0) {
      free(*(void **)(param_1 + 0x85c));
    }
    *(undefined4 *)(param_1 + 0x858) = 0;
    *(undefined4 *)(param_1 + 0x85c) = 0;
    *(undefined *)(param_1 + 0x873) = 0;
  }
  *(undefined4 *)(param_1 + 0x86c) = 0;
  if (pFVar1 == (FILE *)0x0) {
    return 0xffffffff;
  }
  fseek(pFVar1,0,2);
  lVar2 = ftell(pFVar1);
  *(long *)(param_1 + 0x860) = lVar2;
  fseek(pFVar1,0,0);
  printf("Loading GBA ROM %s in slot 2: %d bytes\n",param_2,*(undefined4 *)(param_1 + 0x860));
  __size_00 = *(uint *)(param_1 + 0x860);
  sVar3 = __size_00;
  if (__size_00 < 0x800000) {
    __size_00 = 0x800000;
    printf(" Padding GBA ROM to %d bytes.\n");
    sVar3 = *(size_t *)(param_1 + 0x860);
  }
  __ptr = malloc(__size_00);
  *(void **)(param_1 + 0x858) = __ptr;
  sVar3 = fread(__ptr,sVar3,1,pFVar1);
  if (sVar3 != 1) {
    puts("ERROR: Failed to load GBA data.");
  }
  fclose(pFVar1);
  sVar3 = *(size_t *)(param_1 + 0x860);
  if (sVar3 != __size_00) {
    memset((void *)(*(int *)(param_1 + 0x858) + sVar3),0xff,__size_00 - sVar3);
  }
  *(size_t *)(param_1 + 0x860) = __size_00;
  FUN_0805a54c(__s);
  snprintf(__s,0x400,"%s/slot2/%s.sav",iVar4,param_2);
  pFVar1 = fopen(__s,"rb");
  if (pFVar1 != (FILE *)0x0) {
    if (*(int *)(param_1 + 0x85c) != 0) {
      fseek(pFVar1,0,2);
      __size = ftell(pFVar1);
      fseek(pFVar1,0,0);
      if (*(uint *)(param_1 + 0x864) < __size) {
        printf(" GBA backup is %d bytes, but file is %d bytes. Partially loading file.\n",
               *(uint *)(param_1 + 0x864),__size);
        __size = *(uint *)(param_1 + 0x864);
      }
      sVar3 = fread(*(void **)(param_1 + 0x85c),__size,1,pFVar1);
      if (sVar3 != 1) {
        puts("ERROR: Failed to load GBA backup data.");
      }
      fclose(pFVar1);
      if (__size < *(uint *)(param_1 + 0x864)) {
        printf(" GBA backup is %d bytes, but file is %d bytes. Padding save with 0xFF.\n",
               *(uint *)(param_1 + 0x864),__size);
        memset((void *)(*(int *)(param_1 + 0x85c) + __size),0xff,*(int *)(param_1 + 0x864) - __size)
        ;
      }
      printf(" Loaded GBA ROM backup %s: %d bytes.\n",__s);
      goto LAB_0805ad40;
    }
    puts(" Can\'t load GBA backup file: cart has no backup.");
    fclose(pFVar1);
  }
  memset(*(void **)(param_1 + 0x85c),0xff,*(size_t *)(param_1 + 0x864));
LAB_0805ad40:
  *(undefined *)(param_1 + 0x873) = 1;
  FUN_08010de4(iVar5 + 0x25ab720,*(undefined4 *)(param_1 + 0x858),*(undefined4 *)(param_1 + 0x860));
  return 0;
}


