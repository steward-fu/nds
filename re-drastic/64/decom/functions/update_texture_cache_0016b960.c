/*
 * Ghidra decompilation
 *
 * Function : update_texture_cache
 * Address  : 0016b960
 * Program  : drastic64
 */


uint update_texture_cache(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  void *pvVar6;
  void *__ptr;
  uint uVar7;
  
  uVar7 = *(uint *)(param_1 + 0x801c);
  uVar1 = *(uint *)(param_1 + 0x8024);
  *(uint *)(param_1 + 0x801c) = *(uint *)(param_1 + 0x8018);
  *(uint *)(param_1 + 0x8024) = *(uint *)(param_1 + 0x8020);
  uVar2 = *(uint *)(param_1 + 0x8018) ^ uVar7 | *(uint *)(param_1 + 0x8010);
  uVar1 = *(uint *)(param_1 + 0x8020) ^ uVar1 | *(uint *)(param_1 + 0x8014);
  uVar7 = uVar2 | uVar1;
  if (uVar7 != 0) {
    uVar7 = 0;
    pvVar6 = *(void **)(param_1 + 0x8008);
joined_r0x0016b9b4:
    __ptr = pvVar6;
    if (pvVar6 != (void *)0x0) {
      while( true ) {
        pvVar6 = *(void **)((long)__ptr + 0x30);
        if (((uVar2 & *(uint *)((long)__ptr + 4)) == 0) &&
           ((uVar1 & *(uint *)((long)__ptr + 8)) == 0)) goto joined_r0x0016b9b4;
        if (*(char *)((long)__ptr + 0x48) != '\0') break;
        *(undefined *)((long)__ptr + 0x48) = 1;
        __ptr = pvVar6;
        if (pvVar6 == (void *)0x0) goto LAB_0016ba34;
      }
      lVar3 = *(long *)((long)__ptr + 0x20);
      lVar5 = *(long *)((long)__ptr + 0x28);
      lVar4 = *(long *)((long)__ptr + 0x38);
      if (lVar5 == 0) {
        *(long *)(param_1 + (ulong)*(ushort *)((long)__ptr + 0x44) * 8 + 8) = lVar3;
      }
      else {
        *(long *)(lVar5 + 0x20) = lVar3;
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x28) = lVar5;
      }
      if (lVar4 == 0) {
        *(void **)(param_1 + 0x8008) = pvVar6;
      }
      else {
        *(void **)(lVar4 + 0x30) = pvVar6;
      }
      if (pvVar6 != (void *)0x0) {
        *(long *)((long)pvVar6 + 0x38) = lVar4;
      }
      free(*(void **)((long)__ptr + 0x10));
      if (*(void **)((long)__ptr + 0x18) != (void *)0x0) {
        free(*(void **)((long)__ptr + 0x18));
      }
      uVar7 = uVar7 + 1;
      free(__ptr);
      goto joined_r0x0016b9b4;
    }
LAB_0016ba34:
    *(undefined8 *)(param_1 + 0x8010) = 0;
  }
  return uVar7;
}


