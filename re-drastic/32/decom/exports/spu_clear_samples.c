/*
 * Ghidra decompilation
 *
 * Function : spu_clear_samples
 * Address  : 080c6570
 * Program  : drastic
 */


void spu_clear_samples(undefined8 *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  
  do {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1 = param_1 + 4;
    iVar2 = param_2 + -4;
    bVar1 = 3 < param_2;
    param_2 = iVar2;
  } while (iVar2 != 0 && bVar1);
  return;
}


