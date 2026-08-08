/*
 * Ghidra decompilation
 *
 * Function : spu_clear_samples
 * Address  : 0016c5d0
 * Program  : drastic64
 */


void spu_clear_samples(long param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  if ((param_2 & 0x7fffffff) != 0) {
    uVar3 = 0;
    do {
      lVar2 = uVar3 * 4;
      uVar1 = (int)uVar3 + 2;
      uVar3 = (ulong)uVar1;
      *(undefined8 *)(param_1 + lVar2) = 0;
    } while (uVar1 < param_2 << 1);
  }
  return;
}


