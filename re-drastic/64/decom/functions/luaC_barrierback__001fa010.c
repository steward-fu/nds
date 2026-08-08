/*
 * Ghidra decompilation
 *
 * Function : luaC_barrierback_
 * Address  : 001fa010
 * Program  : drastic64
 */


void luaC_barrierback_(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(byte *)(param_2 + 9) = *(byte *)(param_2 + 9) & 0xfb;
  *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(lVar1 + 0x78);
  *(long *)(lVar1 + 0x78) = param_2;
  return;
}


