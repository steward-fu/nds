/*
 * Ghidra decompilation
 *
 * Function : FUN_001f263c
 * Address  : 001f263c
 * Program  : drastic64
 */


void FUN_001f263c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
    luaC_step();
  }
  uStack_20 = *param_3;
  uStack_18 = param_3[1];
  uStack_10 = param_3[2];
  uStack_8 = param_3[3];
  luaO_pushvfstring(param_1,param_2,&uStack_20);
  return;
}


