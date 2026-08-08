/*
 * Ghidra decompilation
 *
 * Function : FUN_080d6120
 * Address  : 080d6120
 * Program  : drastic16
 */


void FUN_080d6120(void **param_1,void **param_2)

{
  FUN_080afb6c(param_1);
  FUN_080afadc(param_1,param_2[1]);
  if (param_2[1] != (void *)0x0) {
    memcpy(*param_1,*param_2,(size_t)param_2[1]);
  }
  return;
}


