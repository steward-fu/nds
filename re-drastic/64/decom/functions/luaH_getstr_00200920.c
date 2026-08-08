/*
 * Ghidra decompilation
 *
 * Function : luaH_getstr
 * Address  : 00200920
 * Program  : drastic64
 */


undefined8 * luaH_getstr(long param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  
  uVar1 = (1 << (ulong)(*(byte *)(param_1 + 0xb) & 0x1f)) - 1U & *(uint *)(param_2 + 0xc);
  for (puVar2 = (undefined8 *)
                (*(long *)(param_1 + 0x18) +
                (-(ulong)(uVar1 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar1 << 5));
      (*(int *)(puVar2 + 3) != 0x44 || (puVar2[2] != param_2));
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


