/*
 * Ghidra decompilation
 *
 * Function : luaS_new
 * Address  : 002003b0
 * Program  : drastic64
 */


void luaS_new(undefined8 param_1,char *param_2)

{
  size_t sVar1;
  
  sVar1 = strlen(param_2);
  luaS_newlstr(param_1,param_2,sVar1);
  return;
}


