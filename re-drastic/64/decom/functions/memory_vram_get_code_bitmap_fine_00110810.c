/*
 * Ghidra decompilation
 *
 * Function : memory_vram_get_code_bitmap_fine
 * Address  : 00110810
 * Program  : drastic64
 */


long memory_vram_get_code_bitmap_fine(long param_1,long param_2,undefined4 param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = (**(code **)(param_2 + 8))(param_1,param_3);
  if (*(long *)(param_1 + 0x15068) == lVar3) {
    lVar3 = 0;
  }
  else {
    uVar2 = lVar3 - *(long *)(param_1 + 0x15020);
    uVar1 = uVar2 + 0x3f;
    if (-1 < (long)uVar2) {
      uVar1 = uVar2;
    }
    lVar3 = *(long *)(param_2 + 0x40) + (uVar1 >> 6 & 0xffffffff) * 4;
  }
  return lVar3;
}


