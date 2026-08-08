/*
 * Ghidra decompilation
 *
 * Function : FUN_080bd8f4
 * Address  : 080bd8f4
 * Program  : drastic16
 */


uint FUN_080bd8f4(byte *param_1)

{
  return (uint)*param_1 << 0x18 | (uint)param_1[1] << 0x10 | (uint)param_1[2] << 8 |
         (uint)param_1[3];
}


