/*
 * Ghidra decompilation
 *
 * Function : luaF_newCclosure
 * Address  : 001f7dd0
 * Program  : drastic64
 */


void luaF_newCclosure(undefined8 param_1,int param_2)

{
  long lVar1;
  
  lVar1 = luaC_newobj(param_1,0x26,(long)(param_2 * 0x10 + 0x20));
  *(char *)(lVar1 + 10) = (char)param_2;
  return;
}


