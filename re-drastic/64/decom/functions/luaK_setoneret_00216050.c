/*
 * Ghidra decompilation
 *
 * Function : luaK_setoneret
 * Address  : 00216050
 * Program  : drastic64
 */


void luaK_setoneret(long *param_1,int *param_2)

{
  long lVar1;
  
  if (*param_2 == 0xd) {
    lVar1 = *(long *)(*param_1 + 0x38);
    *param_2 = 7;
    param_2[1] = *(uint *)(lVar1 + (long)param_2[1] * 4) >> 6 & 0xff;
    return;
  }
  if (*param_2 != 0xe) {
    return;
  }
  *(uint *)(*(long *)(*param_1 + 0x38) + (long)param_2[1] * 4) =
       *(uint *)(*(long *)(*param_1 + 0x38) + (long)param_2[1] * 4) & 0x7fffff | 0x1000000;
  *param_2 = 0xc;
  return;
}


