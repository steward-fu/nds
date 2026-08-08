/*
 * Ghidra decompilation
 *
 * Function : FUN_080e4398
 * Address  : 080e4398
 * Program  : drastic16
 */


int FUN_080e4398(byte *param_1)

{
  return (uint)*param_1 + (uint)param_1[1] * 0x100 + (uint)param_1[2] * 0x10000 +
         (uint)param_1[3] * 0x1000000;
}


