/*
 * Ghidra decompilation
 *
 * Function : luaC_newobj
 * Address  : 001fa090
 * Program  : drastic64
 */


void luaC_newobj(long param_1,byte param_2,undefined8 param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x18);
  puVar2 = (undefined8 *)luaM_realloc_(param_1,0,param_2 & 0xf,param_3);
  bVar1 = *(byte *)(lVar3 + 0x54);
  *(byte *)(puVar2 + 1) = param_2;
  *(byte *)((long)puVar2 + 9) = bVar1 & 3;
  *puVar2 = *(undefined8 *)(lVar3 + 0x58);
  *(undefined8 **)(lVar3 + 0x58) = puVar2;
  return;
}


