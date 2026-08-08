/*
 * Ghidra decompilation
 *
 * Function : luaE_setdebt
 * Address  : 001ffcb0
 * Program  : drastic64
 */


void luaE_setdebt(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_1 + 0x18) = param_2;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) - (param_2 - lVar1);
  return;
}


