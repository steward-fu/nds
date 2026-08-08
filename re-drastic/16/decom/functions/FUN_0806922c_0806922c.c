/*
 * Ghidra decompilation
 *
 * Function : FUN_0806922c
 * Address  : 0806922c
 * Program  : drastic16
 */


undefined4 FUN_0806922c(int param_1,uint param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  uint __size;
  
  if (param_2 < *(uint *)(param_1 + 0x410)) {
    __size = *(uint *)(param_1 + 0x410) - 1;
    if (param_2 < __size) {
      memmove((void *)(*(int *)(param_1 + 0x408) + param_2 * 0x18),
              (void *)(*(int *)(param_1 + 0x408) + param_2 * 0x18 + 0x18),(__size - param_2) * 0x18)
      ;
      memmove((void *)(*(int *)(param_1 + 0x40c) + param_2),
              (void *)(*(int *)(param_1 + 0x40c) + param_2 + 1),__size - param_2);
    }
    pvVar1 = realloc(*(void **)(param_1 + 0x408),__size * 0x18);
    *(void **)(param_1 + 0x408) = pvVar1;
    pvVar1 = realloc(*(void **)(param_1 + 0x40c),__size);
    uVar2 = 0;
    *(uint *)(param_1 + 0x410) = __size;
    *(void **)(param_1 + 0x40c) = pvVar1;
  }
  else {
    printf("Can\'t remove custom cheat: invalid index %d\n");
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


