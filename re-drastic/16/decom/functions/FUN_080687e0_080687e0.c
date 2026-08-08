/*
 * Ghidra decompilation
 *
 * Function : FUN_080687e0
 * Address  : 080687e0
 * Program  : drastic16
 */


void FUN_080687e0(int param_1)

{
  void *pvVar1;
  uint uVar2;
  size_t __size;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  pvVar1 = malloc(0x80);
  if (*(void **)(param_1 + 0x414) != (void *)0x0) {
    free(*(void **)(param_1 + 0x414));
  }
  uVar2 = *(uint *)(param_1 + 0x43c);
  if (uVar2 == 0) {
    uVar8 = 0x20;
    __size = 0;
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    uVar4 = 0;
    uVar7 = 0x20;
    do {
      uVar3 = uVar4 + 1;
      iVar6 = *(int *)(param_1 + 0x430) + uVar4 * 0x18;
      uVar8 = uVar7;
      if (**(char **)(iVar6 + 0x14) != '\0') {
        if (uVar7 <= uVar5) {
          uVar8 = uVar7 << 1;
          pvVar1 = realloc(pvVar1,uVar7 << 3);
          uVar2 = *(uint *)(param_1 + 0x43c);
        }
        *(int *)((int)pvVar1 + uVar5 * 4) = iVar6;
        uVar5 = uVar5 + 1;
      }
      uVar4 = uVar3;
      uVar7 = uVar8;
    } while (uVar3 < uVar2);
    __size = uVar5 << 2;
  }
  uVar2 = *(uint *)(param_1 + 0x410);
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      uVar3 = uVar4 + 1;
      iVar6 = *(int *)(param_1 + 0x408) + uVar4 * 0x18;
      uVar7 = uVar8;
      if (**(char **)(iVar6 + 0x14) != '\0') {
        if (uVar8 <= uVar5) {
          uVar7 = uVar8 << 1;
          pvVar1 = realloc(pvVar1,uVar8 << 3);
          uVar2 = *(uint *)(param_1 + 0x410);
        }
        *(int *)((int)pvVar1 + uVar5 * 4) = iVar6;
        uVar5 = uVar5 + 1;
      }
      uVar4 = uVar3;
      uVar8 = uVar7;
    } while (uVar3 < uVar2);
    __size = uVar5 << 2;
  }
  pvVar1 = realloc(pvVar1,__size);
  *(uint *)(param_1 + 0x418) = uVar5;
  *(void **)(param_1 + 0x414) = pvVar1;
  return;
}


