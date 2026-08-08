/*
 * Ghidra decompilation
 *
 * Function : lua_newthread
 * Address  : 001ffdc0
 * Program  : drastic64
 */


undefined8 * lua_newthread(long param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined4 *puVar6;
  long lVar8;
  undefined4 *puVar7;
  
  lVar8 = *(long *)(param_1 + 0x18);
  if (0 < *(long *)(lVar8 + 0x18)) {
    luaC_step();
  }
  puVar4 = (undefined8 *)luaM_realloc_(param_1,0,8,0xd8);
  puVar1 = puVar4 + 1;
  bVar3 = *(byte *)(lVar8 + 0x54);
  *(undefined *)(puVar4 + 2) = 8;
  *(byte *)((long)puVar4 + 0x11) = bVar3 & 3;
  plVar5 = *(long **)(param_1 + 0x10);
  puVar4[1] = *(undefined8 *)(lVar8 + 0x58);
  *(undefined8 **)(lVar8 + 0x58) = puVar1;
  *plVar5 = (long)puVar1;
  *(undefined4 *)(plVar5 + 1) = 0x48;
  *(long **)(param_1 + 0x10) = plVar5 + 2;
  puVar4[4] = lVar8;
  puVar4[5] = 0;
  puVar4[0xb] = puVar1;
  puVar4[0xc] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  *(undefined4 *)((long)puVar4 + 0xcc) = 1;
  *(undefined2 *)(puVar4 + 0x1a) = 0x100;
  *(undefined *)((long)puVar4 + 0x12) = 0;
  puVar4[0x16] = 0;
  puVar4[0x17] = 0;
  puVar4[0x18] = 0;
  *(undefined *)(puVar4 + 0x1a) = *(undefined *)(param_1 + 200);
  lVar8 = *(long *)(lVar8 + 0xe0);
  uVar2 = *(undefined4 *)(param_1 + 0xbc);
  puVar4[0x16] = *(undefined8 *)(param_1 + 0xa8);
  *(undefined4 *)((long)puVar4 + 0xc4) = uVar2;
  *(undefined4 *)(puVar4 + 0x19) = uVar2;
  *puVar4 = *(undefined8 *)(lVar8 + -8);
  lVar8 = luaM_realloc_(param_1,0,0,0x280);
  puVar4[8] = lVar8;
  *(undefined4 *)(puVar4 + 0x18) = 0x28;
  puVar6 = (undefined4 *)(lVar8 + 8);
  do {
    puVar7 = puVar6 + 4;
    *puVar6 = 0;
    puVar6 = puVar7;
  } while (puVar7 != (undefined4 *)(lVar8 + 0x288));
  puVar4[7] = lVar8 + 0x230;
  *(undefined *)((long)puVar4 + 0xaa) = 0;
  puVar4[0xf] = 0;
  puVar4[0x10] = 0;
  puVar4[0xd] = lVar8;
  puVar4[3] = lVar8 + 0x10;
  *(undefined4 *)(lVar8 + 8) = 0;
  puVar4[0xe] = lVar8 + 0x150;
  puVar4[5] = puVar4 + 0xd;
  return puVar1;
}


