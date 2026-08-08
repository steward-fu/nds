/*
 * Ghidra decompilation
 *
 * Function : lua_pushthread
 * Address  : 001f28a0
 * Program  : drastic64
 */


bool lua_pushthread(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(param_1 + 0x10);
  lVar2 = *(long *)(*(long *)(param_1 + 0x18) + 0xe0);
  *plVar1 = param_1;
  *(undefined4 *)(plVar1 + 1) = 0x48;
  *(long **)(param_1 + 0x10) = plVar1 + 2;
  return lVar2 == param_1;
}


