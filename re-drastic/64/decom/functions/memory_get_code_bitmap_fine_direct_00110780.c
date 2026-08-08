/*
 * Ghidra decompilation
 *
 * Function : memory_get_code_bitmap_fine_direct
 * Address  : 00110780
 * Program  : drastic64
 */


long memory_get_code_bitmap_fine_direct(undefined8 param_1,uint *param_2,uint param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x10) + (ulong)((param_3 & *param_2) >> 6) * 4;
  if (*(long *)(param_2 + 0x10) == 0) {
    lVar1 = 0;
  }
  return lVar1;
}


