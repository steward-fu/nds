/*
 * Ghidra decompilation
 *
 * Function : icon_cache_add
 * Address  : 0017b170
 * Program  : drastic64
 */


void * icon_cache_add(void **param_1,FILE *param_2,void *param_3,char *param_4)

{
  uint uVar1;
  uint uVar2;
  size_t sVar3;
  void *pvVar4;
  char *__dest;
  uint __c;
  void *pvVar5;
  
  uVar2 = *(uint *)(param_1 + 3);
  uVar1 = uVar2 + 1;
  sVar3 = strlen(param_4);
  __printf_chk(1,"Adding icon to cache @ %d (%p)\n",uVar2,param_2);
  pvVar4 = realloc(*param_1,(ulong)uVar1 * 800);
  *param_1 = pvVar4;
  pvVar4 = realloc(param_1[1],(ulong)uVar1 << 3);
  param_1[1] = pvVar4;
  pvVar4 = (void *)((long)*param_1 + (ulong)uVar2 * 800);
  memcpy(pvVar4,param_3,800);
  pvVar5 = param_1[1];
  __c = (uint)sVar3;
  __dest = (char *)malloc((ulong)(__c + 1));
  *(char **)((long)pvVar5 + (ulong)uVar2 * 8) = __dest;
  strcpy(__dest,param_4);
  *(uint *)(param_1 + 3) = uVar1;
  if (param_2 != (FILE *)0x0) {
    fwrite(param_3,0x200,1,param_2);
    fwrite((void *)((long)param_3 + 0x200),0x20,1,param_2);
    fputc(__c,param_2);
    fputc(__c >> 8,param_2);
    fwrite(param_4,sVar3 & 0xffffffff,1,param_2);
  }
  return pvVar4;
}


