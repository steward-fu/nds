/*
 * Ghidra decompilation
 *
 * Function : initialize_texture_cache
 * Address  : 0016ba80
 * Program  : drastic64
 */


void initialize_texture_cache(undefined8 *param_1,undefined8 param_2)

{
  memset(param_1 + 1,0,0x8000);
  *param_1 = param_2;
  param_1[0x1001] = 0;
  param_1[0x1002] = 0;
  return;
}


