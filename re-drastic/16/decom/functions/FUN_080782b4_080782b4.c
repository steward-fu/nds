/*
 * Ghidra decompilation
 *
 * Function : FUN_080782b4
 * Address  : 080782b4
 * Program  : drastic16
 */


void FUN_080782b4(int param_1,char *param_2)

{
  FILE *pFVar1;
  
  pFVar1 = fopen(param_2,"wb");
  *(FILE **)(param_1 + 0x80028) = pFVar1;
  if (pFVar1 != (FILE *)0x0) {
    printf("Recording input to %s.\n",param_2);
    *(undefined *)(param_1 + 0x8002c) = 1;
    return;
  }
  printf("Couldn\'t open %s for input recording.\n",param_2);
  return;
}


