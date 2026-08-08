/*
 * Ghidra decompilation
 *
 * Function : l_alloc
 * Address  : 00206500
 * Program  : drastic64
 */


void * l_alloc(undefined8 param_1,void *param_2,undefined8 param_3,size_t param_4)

{
  void *pvVar1;
  
  if (param_4 != 0) {
    pvVar1 = realloc(param_2,param_4);
    return pvVar1;
  }
  free(param_2);
  return (void *)0x0;
}


