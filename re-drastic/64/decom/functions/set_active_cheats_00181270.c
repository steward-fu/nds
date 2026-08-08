/*
 * Ghidra decompilation
 *
 * Function : set_active_cheats
 * Address  : 00181270
 * Program  : drastic64
 */


void set_active_cheats(long param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  void *pvVar5;
  size_t __size;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  
  pvVar5 = malloc(0x100);
  if (*(void **)(param_1 + 0x428) != (void *)0x0) {
    free(*(void **)(param_1 + 0x428));
  }
  uVar2 = *(uint *)(param_1 + 0x438);
  if ((uVar2 == 0) || (uVar2 = *(uint *)(param_1 + 0x46c), uVar2 == 0)) {
    uVar6 = (ulong)uVar2;
    __size = 0;
    uVar9 = 0x20;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x458) + 0x28;
    uVar9 = 0x20;
    uVar6 = 0;
    lVar4 = lVar1;
    lVar8 = *(long *)(param_1 + 0x458);
    while( true ) {
      lVar7 = lVar4;
      if (**(char **)(lVar8 + 0x20) != '\0') {
        if ((uint)uVar9 <= (uint)uVar6) {
          uVar9 = (ulong)((uint)uVar9 * 2);
          pvVar5 = realloc(pvVar5,uVar9 << 3);
        }
        *(long *)((long)pvVar5 + uVar6 * 8) = lVar8;
        uVar6 = (ulong)((uint)uVar6 + 1);
      }
      if (lVar1 + (ulong)(uVar2 - 1) * 0x28 == lVar7) break;
      lVar4 = lVar7 + 0x28;
      lVar8 = lVar7;
    }
    __size = uVar6 << 3;
  }
  iVar3 = *(int *)(param_1 + 0x420);
  if (iVar3 != 0) {
    lVar1 = *(long *)(param_1 + 0x410) + 0x28;
    lVar4 = lVar1;
    lVar8 = *(long *)(param_1 + 0x410);
    while( true ) {
      lVar7 = lVar4;
      if (**(char **)(lVar8 + 0x20) != '\0') {
        if ((uint)uVar9 <= (uint)uVar6) {
          uVar9 = (ulong)((uint)uVar9 * 2);
          pvVar5 = realloc(pvVar5,uVar9 << 3);
        }
        *(long *)((long)pvVar5 + uVar6 * 8) = lVar8;
        uVar6 = (ulong)((uint)uVar6 + 1);
      }
      if (lVar1 + (ulong)(iVar3 - 1) * 0x28 == lVar7) break;
      lVar4 = lVar7 + 0x28;
      lVar8 = lVar7;
    }
    __size = uVar6 << 3;
  }
  pvVar5 = realloc(pvVar5,__size);
  *(void **)(param_1 + 0x428) = pvVar5;
  *(int *)(param_1 + 0x430) = (int)uVar6;
  return;
}


