/*
 * Ghidra decompilation
 *
 * Function : luaO_int2fb
 * Address  : 001faba0
 * Program  : drastic64
 */


ulong luaO_int2fb(ulong param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (7 < (uint)param_1) {
    uVar3 = 8;
    iVar1 = 0;
    if (0xf < (uint)param_1) {
      do {
        iVar2 = iVar1;
        uVar3 = (int)param_1 + 1;
        param_1 = (ulong)(uVar3 >> 1);
        iVar1 = iVar2 + 1;
      } while (0x1f < uVar3);
      uVar3 = (iVar2 + 2) * 8;
    }
    param_1 = (ulong)((int)param_1 - 8U | uVar3);
  }
  return param_1;
}


