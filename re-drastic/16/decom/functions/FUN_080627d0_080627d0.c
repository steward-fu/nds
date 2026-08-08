/*
 * Ghidra decompilation
 *
 * Function : FUN_080627d0
 * Address  : 080627d0
 * Program  : drastic16
 */


undefined4 FUN_080627d0(void **param_1)

{
  FILE *__stream;
  void *pvVar1;
  size_t sVar2;
  void *pvVar3;
  void *pvVar4;
  uint __size;
  size_t __size_00;
  size_t local_258;
  void *local_254;
  undefined auStack_250 [512];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ushort local_30;
  
  __stream = fopen(".drastic_icon_cache.bin","rb");
  pvVar1 = malloc(0x6400);
  *param_1 = pvVar1;
  pvVar1 = malloc(0x80);
  param_1[1] = pvVar1;
  if (__stream == (FILE *)0x0) {
    *param_1 = (void *)0x0;
    puts("No icon cache in directory.");
    fflush(stdout);
    pvVar1 = (void *)0x0;
  }
  else {
    __size_00 = 0;
    local_258 = 0x640;
    pvVar1 = (void *)0x0;
    local_254 = (void *)0x20;
    while (sVar2 = fread(auStack_250,0x222,1,__stream), sVar2 == 1) {
      __size = (uint)local_30;
      pvVar4 = (void *)((int)*param_1 + __size_00);
      pvVar3 = malloc(__size + 1);
      memcpy(pvVar4,auStack_250,0x200);
      *(undefined4 *)((int)pvVar4 + 0x200) = local_50;
      *(undefined4 *)((int)pvVar4 + 0x204) = uStack_4c;
      *(undefined4 *)((int)pvVar4 + 0x208) = uStack_48;
      *(undefined4 *)((int)pvVar4 + 0x20c) = uStack_44;
      *(undefined4 *)((int)pvVar4 + 0x210) = local_40;
      *(undefined4 *)((int)pvVar4 + 0x214) = uStack_3c;
      *(undefined4 *)((int)pvVar4 + 0x218) = uStack_38;
      *(undefined4 *)((int)pvVar4 + 0x21c) = uStack_34;
      sVar2 = fread(pvVar3,__size,1,__stream);
      if (sVar2 != 1) {
        free(pvVar3);
        goto LAB_0806292c;
      }
      pvVar4 = param_1[1];
      *(undefined *)((int)pvVar3 + __size) = 0;
      *(void **)((int)pvVar4 + (int)pvVar1 * 4) = pvVar3;
      pvVar1 = (void *)((int)pvVar1 + 1);
      if (pvVar1 == local_254) {
        local_254 = (void *)((int)pvVar1 * 2);
        pvVar3 = realloc(*param_1,local_258);
        *param_1 = pvVar3;
        pvVar3 = realloc(param_1[1],(int)pvVar1 * 8);
        param_1[1] = pvVar3;
      }
      __size_00 = __size_00 + 800;
      local_258 = local_258 + 0x640;
    }
    __size_00 = (int)pvVar1 * 800;
LAB_0806292c:
    pvVar3 = realloc(*param_1,__size_00);
    *param_1 = pvVar3;
    pvVar3 = realloc(param_1[1],(int)pvVar1 << 2);
    param_1[1] = pvVar3;
    printf("Loaded %d files in icon cache.\n",pvVar1);
    fflush(stdout);
    fclose(__stream);
  }
  param_1[3] = pvVar1;
  return 0;
}


