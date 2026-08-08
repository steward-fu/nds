/*
 * Ghidra decompilation
 *
 * Function : FUN_0017688c
 * Address  : 0017688c
 * Program  : drastic64
 */


void FUN_0017688c(long param_1)

{
  uint uVar1;
  void *__s;
  ushort uVar2;
  ulong uVar3;
  ulong uVar4;
  ushort *puVar5;
  
  __s = (void *)(param_1 + 0xd70);
  set_screen_orientation(*(undefined4 *)(param_1 + 0x44c));
  puVar5 = (ushort *)(param_1 + 0xd1e);
  set_screen_swap(*(undefined4 *)(param_1 + 0x454));
  memset(__s,0,0x4000);
  uVar3 = 0;
  do {
    uVar2 = puVar5[-0x29];
    uVar4 = 1L << (uVar3 & 0x3f);
    uVar1 = (int)uVar3 + 1;
    uVar3 = (ulong)uVar1;
    if (uVar2 != 0xffff) {
      *(ulong *)((long)__s + (ulong)uVar2 * 8) = *(ulong *)((long)__s + (ulong)uVar2 * 8) | uVar4;
    }
    uVar2 = *puVar5;
    puVar5 = puVar5 + 1;
    if (uVar2 != 0xffff) {
      *(ulong *)((long)__s + (ulong)uVar2 * 8) = *(ulong *)((long)__s + (ulong)uVar2 * 8) | uVar4;
    }
  } while (uVar1 != 0x29);
  return;
}


