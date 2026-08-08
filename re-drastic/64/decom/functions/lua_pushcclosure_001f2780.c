/*
 * Ghidra decompilation
 *
 * Function : lua_pushcclosure
 * Address  : 001f2780
 * Program  : drastic64
 */


void lua_pushcclosure(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  if (param_3 == 0) {
    puVar3 = *(undefined8 **)(param_1 + 0x10);
    *puVar3 = param_2;
    *(undefined4 *)(puVar3 + 1) = 0x16;
    *(undefined8 **)(param_1 + 0x10) = puVar3 + 2;
    return;
  }
  if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
    luaC_step();
  }
  lVar1 = luaF_newCclosure(param_1,(ulong)param_3);
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  uVar4 = -(ulong)(param_3 >> 0x1f) & 0xfffffff000000000 | (ulong)param_3 << 4;
  plVar5 = (long *)((long)puVar6 - uVar4);
  *(undefined8 *)(lVar1 + 0x18) = param_2;
  puVar3 = (undefined8 *)(lVar1 + uVar4 + 0x10);
  do {
    uVar7 = puVar6[-1];
    puVar2 = puVar3 + -2;
    *puVar3 = puVar6[-2];
    puVar3[1] = uVar7;
    puVar3 = puVar2;
    puVar6 = puVar6 + -2;
  } while (puVar2 != (undefined8 *)(lVar1 + uVar4 + (ulong)(param_3 - 1) * -0x10));
  *plVar5 = lVar1;
  *(undefined4 *)(plVar5 + 1) = 0x66;
  *(long **)(param_1 + 0x10) = plVar5 + 2;
  return;
}


