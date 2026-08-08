/*
 * Ghidra decompilation
 *
 * Function : luaF_findupval
 * Address  : 001f7f10
 * Program  : drastic64
 */


void luaF_findupval(long param_1,ulong param_2)

{
  ulong **ppuVar1;
  ulong *puVar2;
  long lVar3;
  ulong *puVar4;
  
  ppuVar1 = (ulong **)(param_1 + 0x40);
  for (puVar2 = *(ulong **)(param_1 + 0x40); (puVar2 != (ulong *)0x0 && (param_2 <= *puVar2));
      puVar2 = (ulong *)puVar2[2]) {
    ppuVar1 = (ulong **)(puVar2 + 2);
    if (*puVar2 == param_2) {
      return;
    }
  }
  puVar2 = (ulong *)luaM_realloc_(param_1,0,0,0x20);
  puVar4 = *ppuVar1;
  puVar2[1] = 0;
  puVar2[2] = (ulong)puVar4;
  *(undefined4 *)(puVar2 + 3) = 1;
  lVar3 = *(long *)(param_1 + 0x50);
  *ppuVar1 = puVar2;
  *puVar2 = param_2;
  if (lVar3 != param_1) {
    return;
  }
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0xa8);
  *(long *)(*(long *)(param_1 + 0x18) + 0xa8) = param_1;
  return;
}


