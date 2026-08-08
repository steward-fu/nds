/*
 * Ghidra decompilation
 *
 * Function : luaH_getint
 * Address  : 002008a0
 * Program  : drastic64
 */


undefined8 * luaH_getint(long param_1,uint param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  
  if (param_2 - 1 < *(uint *)(param_1 + 0xc)) {
    return (undefined8 *)(*(long *)(param_1 + 0x10) + (long)(int)param_2 * 0x10 + -0x10);
  }
  uVar1 = (1 << (ulong)(*(byte *)(param_1 + 0xb) & 0x1f)) - 1U & param_2;
  for (puVar2 = (undefined8 *)
                (*(long *)(param_1 + 0x18) +
                (-(ulong)(uVar1 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar1 << 5));
      (*(int *)(puVar2 + 3) != 0x13 || (param_2 != *(uint *)(puVar2 + 2)));
      puVar2 = (undefined8 *)
               ((long)puVar2 + (-(ulong)(uVar1 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar1 << 5)))
  {
    uVar1 = *(uint *)((long)puVar2 + 0x1c);
    if (uVar1 == 0) {
      return &luaO_nilobject_;
    }
  }
  return puVar2;
}


