/*
 * Ghidra decompilation
 *
 * Function : FUN_080d2350
 * Address  : 080d2350
 * Program  : drastic16
 */


uint FUN_080d2350(int *param_1)

{
  return ((uint)*(byte *)(param_1[3] + *param_1) << 0x18 |
          (uint)*(byte *)(param_1[3] + *param_1 + 1) << 0x10 |
          (uint)*(byte *)(param_1[3] + *param_1 + 2) << 8 |
         (uint)*(byte *)(param_1[3] + *param_1 + 3)) << (param_1[1] & 0xffU) |
         (uint)(*(byte *)(param_1[3] + *param_1 + 4) >> (8U - param_1[1] & 0xff));
}


