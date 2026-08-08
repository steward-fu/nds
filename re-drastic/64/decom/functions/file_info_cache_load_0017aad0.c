/*
 * Ghidra decompilation
 *
 * Function : file_info_cache_load
 * Address  : 0017aad0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 file_info_cache_load(void **param_1)

{
  uint uVar1;
  FILE *__stream;
  void *pvVar2;
  char *pcVar3;
  char *pcVar4;
  size_t sVar5;
  ulong uVar6;
  void **__base;
  uint uVar7;
  void **ppvVar8;
  void *pvVar9;
  uint uVar10;
  ulong uVar11;
  size_t __size;
  ulong uVar12;
  ulong uVar13;
  char acStack_408 [1024];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __stream = fopen(".drastic_file_info.txt","rb");
  pvVar2 = malloc(0x400);
  *param_1 = pvVar2;
  if (__stream == (FILE *)0x0) {
    *param_1 = (void *)0x0;
    param_1[1] = (void *)0x0;
    puts("No cache file in directory.");
    uVar10 = 0;
    fflush(_stdout);
    goto LAB_0017ad94;
  }
  uVar11 = 0;
  uVar12 = 0x20;
  uVar6 = 0;
LAB_0017ab40:
  __size = uVar6 << 5;
  pcVar3 = fgets(acStack_408,0x400,__stream);
  if (pcVar3 != (char *)0x0) {
    while (pcVar3 = strchr(acStack_408,0x27), pcVar3 != (char *)0x0) {
      pcVar3 = pcVar3 + 1;
      pcVar4 = strchr(pcVar3,0x27);
      if (((pcVar4 == (char *)0x0) || (pcVar4[1] != ' ')) || (pcVar4[2] == '\n')) break;
      pvVar9 = *param_1;
      uVar10 = (int)uVar11 + 1;
      uVar11 = (ulong)uVar10;
      *pcVar4 = '\0';
      sVar5 = strlen(pcVar4 + 2);
      uVar6 = strtoul(acStack_408,(char **)0x0,0x10);
      *(int *)((long)pvVar9 + __size) = (int)uVar6;
      unescape_str((long)pvVar9 + __size + 4,pcVar3,((int)pcVar4 - (int)pcVar3) + 1,0xc);
      *(undefined *)((long)pvVar9 + __size + 0x10) = 0;
      pvVar2 = malloc(sVar5 & 0xffffffff);
      *(void **)((long)pvVar9 + __size + 0x18) = pvVar2;
      uVar6 = (ulong)((int)sVar5 - 1);
      memcpy(pvVar2,pcVar4 + 2,uVar6);
      *(undefined *)(*(long *)((long)pvVar9 + __size + 0x18) + uVar6) = 0;
      uVar6 = uVar11;
      if ((uint)uVar12 != uVar10) break;
      uVar12 = (ulong)((uint)uVar12 * 2);
      __size = uVar11 << 5;
      pvVar2 = realloc(*param_1,uVar12 << 5);
      *param_1 = pvVar2;
      pcVar3 = fgets(acStack_408,0x400,__stream);
      if (pcVar3 == (char *)0x0) goto LAB_0017ac50;
    }
    goto LAB_0017ab40;
  }
LAB_0017ac50:
  pvVar2 = realloc(*param_1,__size);
  *param_1 = pvVar2;
  __base = (void **)malloc(uVar6 << 3);
  param_1[1] = __base;
  uVar10 = (uint)uVar11;
  if (uVar10 != 0) {
    if (uVar10 - 1 < 5) {
      uVar7 = 0;
    }
    else {
      ppvVar8 = __base;
      uVar12 = 0x100000000;
      uVar13 = 0x300000002;
      do {
        ppvVar8[1] = (void *)((long)pvVar2 + (uVar12 >> 0x20) * 0x20);
        *ppvVar8 = (void *)((long)pvVar2 + (uVar12 & 0xffffffff) * 0x20);
        ppvVar8[3] = (void *)((long)pvVar2 + (uVar13 >> 0x20) * 0x20);
        ppvVar8[2] = (void *)((long)pvVar2 + (uVar13 & 0xffffffff) * 0x20);
        ppvVar8 = ppvVar8 + 4;
        uVar12 = CONCAT44((int)(uVar12 >> 0x20) + 4,(int)uVar12 + 4);
        uVar13 = CONCAT44((int)(uVar13 >> 0x20) + 4,(int)uVar13 + 4);
      } while (ppvVar8 != __base + (ulong)((uVar10 >> 2) - 1) * 4 + 4);
      uVar7 = uVar10 & 0xfffffffc;
      if ((uVar11 & 3) == 0) goto LAB_0017ad48;
    }
    uVar1 = uVar7 + 1;
    __base[uVar7] = (void *)((long)pvVar2 + (ulong)uVar7 * 0x20);
    if (uVar1 < uVar10) {
      __base[uVar1] = (void *)((long)pvVar2 + (ulong)uVar1 * 0x20);
      uVar1 = uVar7 + 2;
      if (uVar1 < uVar10) {
        __base[uVar1] = (void *)((long)pvVar2 + (ulong)uVar1 * 0x20);
        uVar1 = uVar7 + 3;
        if (uVar1 < uVar10) {
          __base[uVar1] = (void *)((long)pvVar2 + (ulong)uVar1 * 0x20);
          uVar7 = uVar7 + 4;
          if (uVar7 < uVar10) {
            __base[uVar7] = (void *)((long)pvVar2 + (ulong)uVar7 * 0x20);
          }
        }
      }
    }
  }
LAB_0017ad48:
  qsort(__base,uVar6,8,compare_file_info);
  __printf_chk(1,"Loaded %d files in file info cache.\n",uVar11);
  fflush(_stdout);
  fclose(__stream);
LAB_0017ad94:
  *(uint *)(param_1 + 2) = uVar10;
  if (local_8 - ___stack_chk_guard == 0) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


