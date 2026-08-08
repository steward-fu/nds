/*
 * Ghidra decompilation
 *
 * Function : FUN_0806914c
 * Address  : 0806914c
 * Program  : drastic16
 */


undefined4 FUN_0806914c(int param_1,char *param_2,void *param_3,int param_4)

{
  size_t __n;
  void *pvVar1;
  int iVar2;
  int iVar3;
  size_t __size;
  int iVar4;
  int iVar5;
  
  __n = strlen(param_2);
  iVar4 = *(int *)(param_1 + 0x410);
  __size = iVar4 + 1;
  iVar5 = __size * 0x18 - 0x18;
  pvVar1 = realloc(*(void **)(param_1 + 0x408),__size * 0x18);
  *(void **)(param_1 + 0x408) = pvVar1;
  pvVar1 = realloc(*(void **)(param_1 + 0x40c),__size);
  iVar2 = *(int *)(param_1 + 0x408);
  iVar3 = iVar2 + iVar5;
  *(void **)(param_1 + 0x40c) = pvVar1;
  pvVar1 = malloc(__n + 1);
  *(void **)(iVar3 + 4) = pvVar1;
  memcpy(pvVar1,param_2,__n);
  *(undefined *)(*(int *)(iVar3 + 4) + __n) = 0;
  pvVar1 = malloc(param_4 << 2);
  *(void **)(iVar2 + iVar5) = pvVar1;
  memcpy(pvVar1,param_3,param_4 << 2);
  iVar2 = *(int *)(param_1 + 0x40c);
  *(undefined4 *)(iVar3 + 8) = 0;
  *(undefined4 *)(iVar3 + 0x10) = 0xffffffff;
  *(int *)(iVar3 + 0xc) = param_4;
  *(int *)(iVar3 + 0x14) = iVar2 + iVar4;
  *(undefined *)(iVar2 + iVar4) = 0;
  *(size_t *)(param_1 + 0x410) = __size;
  return 0;
}


