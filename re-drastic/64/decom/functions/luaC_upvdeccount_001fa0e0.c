/*
 * Ghidra decompilation
 *
 * Function : luaC_upvdeccount
 * Address  : 001fa0e0
 * Program  : drastic64
 */


void luaC_upvdeccount(undefined8 param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1];
  param_2[1] = lVar1 + -1;
  if ((lVar1 + -1 == 0) && ((long *)*param_2 == param_2 + 2)) {
    luaM_realloc_(param_1,param_2,0x20,0);
    return;
  }
  return;
}


