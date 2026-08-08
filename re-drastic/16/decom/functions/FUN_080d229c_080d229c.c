/*
 * Ghidra decompilation
 *
 * Function : FUN_080d229c
 * Address  : 080d229c
 * Program  : drastic16
 */


uint FUN_080d229c(int *param_1)

{
  return ((uint)*(byte *)(param_1[3] + *param_1) << 0x10 |
          (uint)*(byte *)(param_1[3] + *param_1 + 1) << 8 |
         (uint)*(byte *)(param_1[3] + *param_1 + 2)) >> (8U - param_1[1] & 0xff) & 0xffff;
}


