/*
 * Ghidra decompilation
 *
 * Function : FUN_080d0d08
 * Address  : 080d0d08
 * Program  : drastic16
 */


void * FUN_080d0d08(void *param_1)

{
  memset(param_1,0,0x80);
  memset((void *)((int)param_1 + 0x80),0,0x80);
  return param_1;
}


