/*
 * Ghidra decompilation
 *
 * Function : FUN_080d6018
 * Address  : 080d6018
 * Program  : drastic16
 */


void * FUN_080d6018(void *param_1,void *param_2)

{
  FUN_080afb6c((int)param_1 + 0x2020);
  memcpy(param_1,param_2,0x4300);
  FUN_080a6148((int)param_1 + 0x2020);
  FUN_080d6120((int)param_1 + 0x2020,(int)param_2 + 0x2020);
  return param_1;
}


