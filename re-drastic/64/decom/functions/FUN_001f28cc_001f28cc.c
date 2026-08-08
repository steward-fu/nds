/*
 * Ghidra decompilation
 *
 * Function : FUN_001f28cc
 * Address  : 001f28cc
 * Program  : drastic64
 */


uint FUN_001f28cc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  uVar1 = luaH_getint(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x40),2);
  plVar4 = *(long **)(param_1 + 0x10);
  *(long **)(param_1 + 0x10) = plVar4 + 2;
  lVar2 = luaS_new(param_1,param_2);
  lVar3 = *(long *)(param_1 + 0x10);
  *plVar4 = lVar2;
  *(uint *)(plVar4 + 1) = *(byte *)(lVar2 + 8) | 0x40;
  luaV_gettable(param_1,uVar1,lVar3 + -0x10);
  return *(uint *)(*(long *)(param_1 + 0x10) + -8) & 0xf;
}


