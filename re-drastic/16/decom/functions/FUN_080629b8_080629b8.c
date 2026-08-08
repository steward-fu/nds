/*
 * Ghidra decompilation
 *
 * Function : FUN_080629b8
 * Address  : 080629b8
 * Program  : drastic16
 */


void * FUN_080629b8(void **param_1,FILE *param_2,void *param_3,char *param_4)

{
  size_t __size;
  void *pvVar1;
  void *pvVar2;
  void *__dest;
  void *pvVar3;
  int iVar4;
  
  pvVar3 = param_1[3];
  __size = strlen(param_4);
  pvVar1 = (void *)((int)pvVar3 + 1);
  printf("Adding icon to cache @ %d (%p)\n",pvVar3,param_2);
  iVar4 = (int)pvVar1 * 4 - 4;
  pvVar3 = realloc(*param_1,(int)pvVar1 * 800);
  *param_1 = pvVar3;
  pvVar3 = realloc(param_1[1],(int)pvVar1 * 4);
  __dest = (void *)((int)*param_1 + ((int)pvVar1 * 800 - 800U));
  param_1[1] = pvVar3;
  memcpy(__dest,param_3,800);
  pvVar2 = param_1[1];
  pvVar3 = malloc(__size + 1);
  *(void **)((int)pvVar2 + iVar4) = pvVar3;
  strcpy(*(char **)((int)param_1[1] + iVar4),param_4);
  param_1[3] = pvVar1;
  if (param_2 != (FILE *)0x0) {
    fwrite(param_3,0x200,1,param_2);
    fwrite((void *)((int)param_3 + 0x200),0x20,1,param_2);
    fputc(__size,param_2);
    fputc(__size >> 8,param_2);
    fwrite(param_4,__size,1,param_2);
  }
  return __dest;
}


