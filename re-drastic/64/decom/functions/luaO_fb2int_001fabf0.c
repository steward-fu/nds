/*
 * Ghidra decompilation
 *
 * Function : luaO_fb2int
 * Address  : 001fabf0
 * Program  : drastic64
 */


uint luaO_fb2int(ulong param_1)

{
  uint uVar1;
  
  uVar1 = ((uint)param_1 & 7) + 8 << (ulong)(((uint)(param_1 >> 3) & 0x1f) - 1 & 0x1f);
  if ((param_1 >> 3 & 0x1f) == 0) {
    uVar1 = (uint)param_1;
  }
  return uVar1;
}


