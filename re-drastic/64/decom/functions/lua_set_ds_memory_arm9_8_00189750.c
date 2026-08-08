/*
 * Ghidra decompilation
 *
 * Function : lua_set_ds_memory_arm9_8
 * Address  : 00189750
 * Program  : drastic64
 */


undefined8 lua_set_ds_memory_arm9_8(undefined8 param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar3 = luaL_checkinteger(param_1,1);
  uVar3 = uVar3 & 0xffffffff;
  uVar2 = luaL_checkinteger(param_1,2);
  lVar1 = lua_state;
  uVar4 = *(ulong *)(lua_state + 0x15ca120 + (uVar3 >> 0xb) * 8);
  lVar5 = uVar4 * 4;
  if ((uVar4 >> 0x3e & 1) == 0) {
    *(char *)(lVar5 + uVar3) = (char)uVar2;
  }
  else {
    if (-1 < (long)uVar4) {
      extended_store8(lua_state + 0x15ca120,uVar3,uVar2);
      return 0;
    }
    if (uVar2 != *(byte *)(lVar5 + uVar3)) {
      *(char *)(lVar5 + uVar3) = (char)uVar2;
      lVar5 = lVar1 + 0x15c7d50;
      cpu_block_check_allocation8(lVar5,uVar3);
      cpu_block_flush(lVar5,0x2000000);
      if (*(long *)(nds_system + lVar1 + 0x10cdfe8) != 0) {
        cpu_block_load_pc(lVar5);
        lVar5 = cpu_block_lookup_base(lVar5,*(undefined4 *)(nds_system + lVar1 + 0x10ce10c));
        *(long *)(nds_system + lVar1 + 0x10cdfe8) = lVar5 + 8;
      }
    }
  }
  return 0;
}


