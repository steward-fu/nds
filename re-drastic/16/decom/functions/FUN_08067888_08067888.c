/*
 * Ghidra decompilation
 *
 * Function : FUN_08067888
 * Address  : 08067888
 * Program  : drastic16
 */


undefined4 FUN_08067888(uint *param_1,uint *param_2)

{
  if (*param_1 == *param_2) {
    return 0;
  }
  if (*param_2 < *param_1) {
    return 1;
  }
  return 0xffffffff;
}


