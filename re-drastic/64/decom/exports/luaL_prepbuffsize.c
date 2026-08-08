/*
 * Ghidra decompilation
 *
 * Function : luaL_prepbuffsize
 * Address  : 00207720
 * Program  : drastic64
 */


long luaL_prepbuffsize(void **param_1,ulong param_2)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar1 = param_1[2];
  if (param_2 <= (ulong)((long)param_1[1] - (long)pvVar1)) {
    return (long)*param_1 + (long)pvVar1;
  }
  pvVar2 = (void *)((long)param_1[1] * 2);
  pvVar3 = param_1[3];
  if ((ulong)((long)pvVar2 - (long)pvVar1) < param_2) {
    pvVar2 = (void *)((long)pvVar1 + param_2);
    if (!CARRY8((ulong)pvVar1,param_2)) goto LAB_0020777c;
  }
  else if (pvVar1 <= pvVar2) goto LAB_0020777c;
  luaL_error(pvVar3,"buffer too large");
LAB_0020777c:
  pvVar1 = (void *)lua_newuserdata(pvVar3,pvVar2);
  memcpy(pvVar1,*param_1,(size_t)param_1[2]);
  if ((void **)*param_1 != param_1 + 4) {
    lua_rotate(pvVar3,0xfffffffe,0xffffffff);
    lua_settop(pvVar3,0xfffffffe);
  }
  *param_1 = pvVar1;
  param_1[1] = pvVar2;
  return (long)pvVar1 + (long)param_1[2];
}


