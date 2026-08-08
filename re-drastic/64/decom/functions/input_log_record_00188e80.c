/*
 * Ghidra decompilation
 *
 * Function : input_log_record
 * Address  : 00188e80
 * Program  : drastic64
 */


void input_log_record(long param_1,char *param_2)

{
  FILE *pFVar1;
  
  pFVar1 = fopen(param_2,"wb");
  *(FILE **)(param_1 + 0x80048) = pFVar1;
  if (pFVar1 != (FILE *)0x0) {
    __printf_chk(1,"Recording input to %s.\n",param_2);
    *(undefined *)(param_1 + 0x80050) = 1;
    return;
  }
  __printf_chk(1,"Couldn\'t open %s for input recording.\n",param_2);
  return;
}


