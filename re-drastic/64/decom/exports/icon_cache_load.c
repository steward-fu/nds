/*
 * Ghidra decompilation
 *
 * Function : icon_cache_load
 * Address  : 0017af30
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 icon_cache_load(void **param_1)

{
  uint uVar1;
  FILE *__stream;
  void *pvVar2;
  size_t sVar3;
  void *__ptr;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined auStack_230 [512];
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ushort local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __stream = fopen(".drastic_icon_cache.bin","rb");
  pvVar2 = malloc(0x6400);
  *param_1 = pvVar2;
  pvVar2 = malloc(0x100);
  param_1[1] = pvVar2;
  if (__stream == (FILE *)0x0) {
    *param_1 = (void *)0x0;
    puts("No icon cache in directory.");
    uVar5 = 0;
    fflush(_stdout);
  }
  else {
    uVar6 = 0x20;
    uVar5 = 0;
    while( true ) {
      sVar3 = fread(auStack_230,0x222,1,__stream);
      if (sVar3 != 1) break;
      uVar4 = (uint)local_10;
      pvVar2 = (void *)((long)*param_1 + uVar5 * 800);
      __ptr = malloc((ulong)(uVar4 + 1));
      memcpy(pvVar2,auStack_230,0x200);
      *(undefined8 *)((long)pvVar2 + 0x200) = local_30;
      *(undefined8 *)((long)pvVar2 + 0x208) = uStack_28;
      *(undefined8 *)((long)pvVar2 + 0x210) = local_20;
      *(undefined8 *)((long)pvVar2 + 0x218) = uStack_18;
      sVar3 = fread(__ptr,(ulong)uVar4,1,__stream);
      if (sVar3 != 1) {
        free(__ptr);
        break;
      }
      uVar1 = (int)uVar5 + 1;
      pvVar2 = param_1[1];
      *(undefined *)((long)__ptr + (ulong)uVar4) = 0;
      *(void **)((long)pvVar2 + uVar5 * 8) = __ptr;
      uVar5 = (ulong)uVar1;
      if ((uint)uVar6 == uVar1) {
        uVar6 = (ulong)((uint)uVar6 * 2);
        pvVar2 = realloc(*param_1,uVar6 * 800);
        *param_1 = pvVar2;
        pvVar2 = realloc(param_1[1],uVar6 << 3);
        param_1[1] = pvVar2;
      }
    }
    pvVar2 = realloc(*param_1,uVar5 * 800);
    *param_1 = pvVar2;
    pvVar2 = realloc(param_1[1],uVar5 << 3);
    param_1[1] = pvVar2;
    __printf_chk(1,"Loaded %d files in icon cache.\n",uVar5);
    fflush(_stdout);
    fclose(__stream);
  }
  *(int *)(param_1 + 3) = (int)uVar5;
  if (local_8 - ___stack_chk_guard == 0) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


