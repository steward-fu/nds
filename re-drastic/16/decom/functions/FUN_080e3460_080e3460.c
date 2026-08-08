/*
 * Ghidra decompilation
 *
 * Function : FUN_080e3460
 * Address  : 080e3460
 * Program  : drastic16
 */


uint FUN_080e3460(uint param_1,uint param_2)

{
  return param_1 >> (param_2 & 0x1f) | param_1 << 0x20 - (param_2 & 0x1f);
}


