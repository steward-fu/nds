/*
 * Ghidra decompilation
 *
 * Function : lua_arith
 * Address  : 001f1720
 * Program  : drastic64
 */


void lua_arith(long param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  if (param_2 - 0xcU < 2) {
    puVar3 = puVar2 + 2;
    *puVar2 = puVar2[-2];
    puVar2[1] = puVar2[-1];
    *(undefined8 **)(param_1 + 0x10) = puVar3;
    puVar1 = puVar2;
  }
  else {
    puVar1 = puVar2 + -2;
    puVar3 = puVar2;
  }
  luaO_arith(param_1,param_2,puVar3 + -4,puVar1);
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
  return;
}


