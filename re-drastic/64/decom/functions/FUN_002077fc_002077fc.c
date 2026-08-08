/*
 * Ghidra decompilation
 *
 * Function : FUN_002077fc
 * Address  : 002077fc
 * Program  : drastic64
 */


void FUN_002077fc(void **param_1,void *param_2,ulong param_3)

{
  void *pvVar1;
  void *pvVar2;
  void *__dest;
  void *pvVar3;
  
  pvVar1 = param_1[2];
  if (param_3 <= (ulong)((long)param_1[1] - (long)pvVar1)) {
    __dest = *param_1;
    goto LAB_00207834;
  }
  pvVar2 = (void *)((long)param_1[1] * 2);
  pvVar3 = param_1[3];
  if ((ulong)((long)pvVar2 - (long)pvVar1) < param_3) {
    pvVar2 = (void *)(param_3 + (long)pvVar1);
    if (CARRY8(param_3,(ulong)pvVar1)) {
LAB_002078e0:
      luaL_error(pvVar3,"buffer too large");
    }
  }
  else if (pvVar2 < pvVar1) goto LAB_002078e0;
  __dest = (void *)lua_newuserdata(pvVar3,pvVar2);
  memcpy(__dest,*param_1,(size_t)param_1[2]);
  if ((void **)*param_1 != param_1 + 4) {
    lua_rotate(pvVar3,0xfffffffe,0xffffffff);
    lua_settop(pvVar3,0xfffffffe);
  }
  *param_1 = __dest;
  param_1[1] = pvVar2;
  pvVar1 = param_1[2];
LAB_00207834:
  memcpy((void *)((long)__dest + (long)pvVar1),param_2,param_3);
  param_1[2] = (void *)((long)param_1[2] + param_3);
  return;
}


