/*
 * Ghidra decompilation
 *
 * Function : luaF_getlocalname
 * Address  : 001f8160
 * Program  : drastic64
 */


long luaF_getlocalname(long param_1,int param_2,int param_3)

{
  long *plVar1;
  long *plVar2;
  
  if (0 < *(int *)(param_1 + 0x24)) {
    plVar2 = *(long **)(param_1 + 0x50);
    plVar1 = plVar2 + (ulong)(*(int *)(param_1 + 0x24) - 1) * 2 + 2;
    do {
      if (param_3 < *(int *)(plVar2 + 1)) {
        return 0;
      }
      if ((param_3 < *(int *)((long)plVar2 + 0xc)) && (param_2 = param_2 + -1, param_2 == 0)) {
        return *plVar2 + 0x20;
      }
      plVar2 = plVar2 + 2;
    } while (plVar2 != plVar1);
  }
  return 0;
}


