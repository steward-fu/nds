/*
 * Ghidra decompilation
 *
 * Function : initialize_translation_cache
 * Address  : 00196900
 * Program  : drastic64
 */


int initialize_translation_cache(void *param_1)

{
  int iVar1;
  
  *(undefined8 *)((long)param_1 + 0x14fa148) = 0;
  *(undefined8 *)((long)param_1 + 0x14fa150) = 0;
  mprotect(param_1,0x1000000,7);
  iVar1 = mprotect((void *)((long)param_1 + 0x1000000),0x100000,7);
  return iVar1;
}


