/*
 * Ghidra decompilation
 *
 * Function : SzAlloc
 * Address  : 001a7f60
 * Program  : drastic64
 */


void * SzAlloc(undefined8 param_1,size_t param_2)

{
  void *pvVar1;
  
  if (param_2 != 0) {
    pvVar1 = malloc(param_2);
    return pvVar1;
  }
  return (void *)0x0;
}


