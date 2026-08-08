/*
 * Ghidra decompilation
 *
 * Function : luaH_set
 * Address  : 00201380
 * Program  : drastic64
 */


void luaH_set(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)luaH_get(param_2,param_3);
  if (puVar1 != &luaO_nilobject_) {
    return;
  }
  luaH_newkey(param_1,param_2,param_3);
  return;
}


