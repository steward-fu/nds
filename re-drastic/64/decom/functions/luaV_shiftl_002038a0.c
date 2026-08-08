/*
 * Ghidra decompilation
 *
 * Function : luaV_shiftl
 * Address  : 002038a0
 * Program  : drastic64
 */


uint luaV_shiftl(uint param_1,uint param_2)

{
  if (-1 < (int)param_2) {
    param_1 = param_1 << (ulong)(param_2 & 0x1f);
    if (0x1f < (int)param_2) {
      param_1 = 0;
    }
    return param_1;
  }
  param_1 = param_1 >> (ulong)(-param_2 & 0x1f);
  if (param_2 == 0xffffffe0 || (int)(param_2 + 0x20) < 0 != SCARRY4(param_2,0x20)) {
    param_1 = 0;
  }
  return param_1;
}


