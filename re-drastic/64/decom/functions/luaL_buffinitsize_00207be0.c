/*
 * Ghidra decompilation
 *
 * Function : luaL_buffinitsize
 * Address  : 00207be0
 * Program  : drastic64
 */


void ** luaL_buffinitsize(void *param_1,void **param_2,void *param_3)

{
  void *__dest;
  void **ppvVar1;
  
  ppvVar1 = param_2 + 4;
  *param_2 = ppvVar1;
  param_2[3] = param_1;
  param_2[2] = (void *)0x0;
  param_2[1] = (void *)0x1000;
  if ((void *)0x1000 < param_3) {
    if (param_3 < (void *)0x2000) {
      param_3 = (void *)0x2000;
    }
    __dest = (void *)lua_newuserdata(param_1,param_3);
    memcpy(__dest,*param_2,(size_t)param_2[2]);
    if (ppvVar1 != (void **)*param_2) {
      lua_rotate(param_1,0xfffffffe,0xffffffff);
      lua_settop(param_1,0xfffffffe);
    }
    *param_2 = __dest;
    param_2[1] = param_3;
    ppvVar1 = (void **)((long)__dest + (long)param_2[2]);
  }
  return ppvVar1;
}


