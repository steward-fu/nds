/*
 * Ghidra decompilation
 *
 * Function : SzAlloc
 * Address  : 080c98d4
 * Program  : drastic
 */


void SzAlloc(undefined4 param_1,size_t param_2)

{
  if (param_2 != 0) {
    malloc(param_2);
    return;
  }
  return;
}


