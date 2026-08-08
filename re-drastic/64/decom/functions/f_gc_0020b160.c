/*
 * Ghidra decompilation
 *
 * Function : f_gc
 * Address  : 0020b160
 * Program  : drastic64
 */


undefined8 f_gc(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  
  plVar1 = (long *)luaL_checkudata(param_1,1,"FILE*");
  if ((plVar1[1] != 0) && (*plVar1 != 0)) {
    lVar2 = luaL_checkudata(param_1,1,"FILE*");
    pcVar3 = *(code **)(lVar2 + 8);
    *(undefined8 *)(lVar2 + 8) = 0;
    (*pcVar3)(param_1);
  }
  return 0;
}


