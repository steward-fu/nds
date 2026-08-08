/*
 * Ghidra decompilation
 *
 * Function : lua_settop
 * Address  : 001f0c40
 * Program  : drastic64
 */


void lua_settop(long param_1,int param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar3 = ((long)param_2 + 1) * 0x10;
  if (param_2 < 0) {
    *(ulong *)(param_1 + 0x10) = uVar2 + lVar3;
    return;
  }
  uVar1 = **(long **)(param_1 + 0x20) + lVar3;
  for (; uVar2 < uVar1; uVar2 = uVar2 + 0x10) {
    *(undefined4 *)(uVar2 + 8) = 0;
  }
  *(ulong *)(param_1 + 0x10) = uVar1;
  return;
}


