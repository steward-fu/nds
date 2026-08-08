/*
 * Ghidra decompilation
 *
 * Function : free_custom_cheats
 * Address  : 001811e0
 * Program  : drastic64
 */


void free_custom_cheats(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  if (*(int *)(param_1 + 0x420) != 0) {
    uVar2 = 0;
    do {
      lVar4 = *(long *)(param_1 + 0x410);
      lVar3 = uVar2 * 0x28;
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulong)uVar1;
      free(*(void **)(lVar4 + lVar3 + 8));
      free(*(void **)(lVar4 + lVar3));
    } while (uVar1 < *(uint *)(param_1 + 0x420));
  }
  free(*(void **)(param_1 + 0x410));
  free(*(void **)(param_1 + 0x418));
  *(undefined8 *)(param_1 + 0x410) = 0;
  *(undefined8 *)(param_1 + 0x418) = 0;
  *(undefined4 *)(param_1 + 0x420) = 0;
  return;
}


