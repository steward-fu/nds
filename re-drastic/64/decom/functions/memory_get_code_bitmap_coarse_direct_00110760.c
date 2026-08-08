/*
 * Ghidra decompilation
 *
 * Function : memory_get_code_bitmap_coarse_direct
 * Address  : 00110760
 * Program  : drastic64
 */


long memory_get_code_bitmap_coarse_direct(undefined8 param_1,uint *param_2,uint param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0xe) + (ulong)((param_3 & *param_2) >> 0x10) * 4;
  if (*(long *)(param_2 + 0xe) == 0) {
    lVar1 = 0;
  }
  return lVar1;
}


