/*
 * Ghidra decompilation
 *
 * Function : luaL_addstring
 * Address  : 00207900
 * Program  : drastic64
 */


void luaL_addstring(void **param_1,char *param_2)

{
  size_t __n;
  void *pvVar1;
  void *pvVar2;
  void *__dest;
  void *pvVar3;
  
  __n = strlen(param_2);
  pvVar1 = param_1[2];
  if (__n <= (ulong)((long)param_1[1] - (long)pvVar1)) {
    __dest = *param_1;
    goto LAB_0020793c;
  }
  pvVar2 = (void *)((long)param_1[1] * 2);
  pvVar3 = param_1[3];
  if ((ulong)((long)pvVar2 - (long)pvVar1) < __n) {
    pvVar2 = (void *)(__n + (long)pvVar1);
    if (CARRY8(__n,(ulong)pvVar1)) {
LAB_002079e8:
      luaL_error(pvVar3,"buffer too large");
    }
  }
  else if (pvVar2 < pvVar1) goto LAB_002079e8;
  __dest = (void *)lua_newuserdata(pvVar3,pvVar2);
  memcpy(__dest,*param_1,(size_t)param_1[2]);
  if ((void **)*param_1 != param_1 + 4) {
    lua_rotate(pvVar3,0xfffffffe,0xffffffff);
    lua_settop(pvVar3,0xfffffffe);
  }
  *param_1 = __dest;
  param_1[1] = pvVar2;
  pvVar1 = param_1[2];
LAB_0020793c:
  memcpy((void *)((long)__dest + (long)pvVar1),param_2,__n);
  param_1[2] = (void *)((long)param_1[2] + __n);
  return;
}


