/*
 * Ghidra decompilation
 *
 * Function : FUN_080c2be8
 * Address  : 080c2be8
 * Program  : drastic16
 */


void FUN_080c2be8(int param_1,uint param_2)

{
  if (7 < param_2) {
    param_2 = 8;
  }
  *(uint *)(param_1 + 0x1c) = param_2;
  return;
}


