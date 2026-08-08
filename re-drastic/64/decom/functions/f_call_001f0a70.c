/*
 * Ghidra decompilation
 *
 * Function : f_call
 * Address  : 001f0a70
 * Program  : drastic64
 */


void f_call(undefined8 param_1,undefined8 *param_2)

{
  luaD_call(param_1,*param_2,*(undefined4 *)(param_2 + 1),0);
  return;
}


