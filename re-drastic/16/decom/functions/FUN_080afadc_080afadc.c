/*
 * Ghidra decompilation
 *
 * Function : FUN_080afadc
 * Address  : 080afadc
 * Program  : drastic16
 */


void FUN_080afadc(int param_1,uint param_2)

{
  if (*(uint *)(param_1 + 8) < param_2) {
    FUN_080a6194(param_1,param_2 - *(int *)(param_1 + 4));
  }
  else {
    *(uint *)(param_1 + 4) = param_2;
  }
  return;
}


