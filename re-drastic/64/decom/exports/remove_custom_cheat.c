/*
 * Ghidra decompilation
 *
 * Function : remove_custom_cheat
 * Address  : 00181c20
 * Program  : drastic64
 */


undefined8 remove_custom_cheat(long param_1,uint param_2)

{
  uint uVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  if (param_2 < *(uint *)(param_1 + 0x420)) {
    uVar1 = *(uint *)(param_1 + 0x420) - 1;
    pvVar2 = *(void **)(param_1 + 0x410);
    if (param_2 < uVar1) {
      memmove((void *)((long)pvVar2 + (ulong)param_2 * 0x28),
              (void *)((long)pvVar2 + (ulong)param_2 * 0x28 + 0x28),(ulong)(uVar1 - param_2) * 0x28)
      ;
      memmove((void *)(*(long *)(param_1 + 0x418) + (ulong)param_2),
              (void *)(*(long *)(param_1 + 0x418) + (ulong)param_2 + 1),(ulong)(uVar1 - param_2));
      pvVar2 = *(void **)(param_1 + 0x410);
    }
    pvVar2 = realloc(pvVar2,(ulong)uVar1 * 0x28);
    *(void **)(param_1 + 0x410) = pvVar2;
    pvVar2 = realloc(*(void **)(param_1 + 0x418),(ulong)uVar1);
    uVar3 = 0;
    *(void **)(param_1 + 0x418) = pvVar2;
    *(uint *)(param_1 + 0x420) = uVar1;
  }
  else {
    __printf_chk(1,"Can\'t remove custom cheat: invalid index %d\n",param_2);
    uVar3 = 0xffffffff;
  }
  return uVar3;
}


