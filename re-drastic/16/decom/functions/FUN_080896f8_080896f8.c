/*
 * Ghidra decompilation
 *
 * Function : FUN_080896f8
 * Address  : 080896f8
 * Program  : drastic16
 */


void FUN_080896f8(void *param_1)

{
  *(undefined4 *)((int)param_1 + 0x14da0e8) = 0;
  *(undefined4 *)((int)param_1 + 0x14da0ec) = 0;
  mprotect(param_1,0x1000000,7);
  mprotect((void *)((int)param_1 + 0x1000000),0x100000,7);
  return;
}


