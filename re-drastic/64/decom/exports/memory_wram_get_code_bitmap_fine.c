/*
 * Ghidra decompilation
 *
 * Function : memory_wram_get_code_bitmap_fine
 * Address  : 001108f0
 * Program  : drastic64
 */


long memory_wram_get_code_bitmap_fine(long param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = (**(code **)(param_2 + 8))(param_1,param_3 & 0xffffffff);
  if (lVar3 - (param_3 & 0x3fff) == param_1 + 0x6b070) {
    lVar3 = 0;
  }
  else {
    uVar2 = lVar3 - *(long *)(param_1 + 0x10);
    uVar1 = uVar2 + 0x3f;
    if (-1 < (long)uVar2) {
      uVar1 = uVar2;
    }
    lVar3 = *(long *)(param_2 + 0x40) + (uVar1 >> 6 & 0xffffffff) * 4;
  }
  return lVar3;
}


