/*
 * Ghidra decompilation
 *
 * Function : luaX_newstring
 * Address  : 0021a5f0
 * Program  : drastic64
 */


long luaX_newstring(long param_1)

{
  long lVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x38);
  lVar1 = luaS_newlstr(lVar6);
  plVar4 = *(long **)(lVar6 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  *(long **)(lVar6 + 0x10) = plVar4 + 2;
  *plVar4 = lVar1;
  *(uint *)(plVar4 + 1) = *(byte *)(lVar1 + 8) | 0x40;
  puVar2 = (undefined4 *)luaH_set(lVar6,uVar3);
  if (puVar2[2] != 0) {
    lVar1 = *(long *)(puVar2 + 4);
    *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + -0x10;
    return lVar1;
  }
  lVar5 = *(long *)(lVar6 + 0x18);
  *puVar2 = 1;
  puVar2[2] = 1;
  if (*(long *)(lVar5 + 0x18) < 1) {
    *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + -0x10;
    return lVar1;
  }
  luaC_step(lVar6);
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + -0x10;
  return lVar1;
}


