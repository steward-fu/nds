/*
 * Ghidra decompilation
 *
 * Function : luaF_initupvals
 * Address  : 001f7e90
 * Program  : drastic64
 */


void luaF_initupvals(undefined8 param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  if (*(char *)(param_2 + 10) != '\0') {
    lVar2 = 0;
    do {
      plVar1 = (long *)luaM_realloc_(param_1,0,0,0x20);
      *plVar1 = (long)(plVar1 + 2);
      plVar1[1] = 1;
      *(undefined4 *)(plVar1 + 3) = 0;
      *(long **)(param_2 + 0x20 + lVar2 * 8) = plVar1;
      lVar2 = lVar2 + 1;
    } while ((int)lVar2 < (int)(uint)*(byte *)(param_2 + 10));
  }
  return;
}


