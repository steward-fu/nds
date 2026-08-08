/*
 * Ghidra decompilation
 *
 * Function : lua_concat
 * Address  : 001f4270
 * Program  : drastic64
 */


void lua_concat(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  if (param_2 < 2) {
    if (param_2 != 0) {
      return;
    }
    plVar3 = *(long **)(param_1 + 0x10);
    lVar1 = luaS_newlstr(param_1,"",0);
    lVar2 = *(long *)(param_1 + 0x10);
    *plVar3 = lVar1;
    *(uint *)(plVar3 + 1) = *(byte *)(lVar1 + 8) | 0x40;
    *(long *)(param_1 + 0x10) = lVar2 + 0x10;
    return;
  }
  if (*(long *)(*(long *)(param_1 + 0x18) + 0x18) < 1) {
    luaV_concat(param_1,param_2);
    return;
  }
  luaC_step();
  luaV_concat(param_1,param_2);
  return;
}


