/*
 * Ghidra decompilation
 *
 * Function : f_gc
 * Address  : 0812975c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int f_gc(lua_State *L)

{
  int *piVar1;
  LStream *p;
  void *pvVar2;
  LStream *p_1;
  code *pcVar3;
  lua_CFunction cf;
  
  piVar1 = (int *)luaL_checkudata(L,1,"FILE*");
  if ((piVar1[1] != 0) && (*piVar1 != 0)) {
    pvVar2 = luaL_checkudata(L,1,"FILE*");
    pcVar3 = *(code **)((int)pvVar2 + 4);
    *(undefined4 *)((int)pvVar2 + 4) = 0;
    (*pcVar3)(L);
  }
  return 0;
}


