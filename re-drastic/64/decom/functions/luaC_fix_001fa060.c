/*
 * Ghidra decompilation
 *
 * Function : luaC_fix
 * Address  : 001fa060
 * Program  : drastic64
 */


void luaC_fix(long param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(byte *)((long)param_2 + 9) = *(byte *)((long)param_2 + 9) & 0xfc;
  *(undefined8 *)(lVar1 + 0x58) = *param_2;
  *param_2 = *(undefined8 *)(lVar1 + 0xa0);
  *(undefined8 **)(lVar1 + 0xa0) = param_2;
  return;
}


