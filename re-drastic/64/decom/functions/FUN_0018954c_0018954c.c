/*
 * Ghidra decompilation
 *
 * Function : FUN_0018954c
 * Address  : 0018954c
 * Program  : drastic64
 */


undefined8 FUN_0018954c(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  
  uVar3 = luaL_checkinteger(param_1,1);
  uVar1 = uVar3 & 0xfffffffe;
  uVar4 = luaL_checkinteger(param_1,2);
  lVar2 = lua_state;
  uVar5 = *(ulong *)(lua_state + 0x15ca120 + (ulong)(uVar3 >> 0xb) * 8);
  lVar6 = uVar5 * 4;
  if ((uVar5 >> 0x3e & 1) == 0) {
    *(short *)(lVar6 + (ulong)uVar1) = (short)uVar4;
  }
  else {
    if (-1 < (long)uVar5) {
      extended_store16(lua_state + 0x15ca120,uVar1,uVar4);
      return 0;
    }
    if (uVar4 != *(ushort *)(lVar6 + (ulong)uVar1)) {
      *(short *)(lVar6 + (ulong)uVar1) = (short)uVar4;
      lVar6 = lVar2 + 0x15c7d50;
      cpu_block_check_allocation16(lVar6,uVar1);
      cpu_block_flush(lVar6,0x2000000);
      if (*(long *)(nds_system + lVar2 + 0x10cdfe8) != 0) {
        cpu_block_load_pc(lVar6);
        lVar6 = cpu_block_lookup_base(lVar6,*(undefined4 *)(nds_system + lVar2 + 0x10ce10c));
        *(long *)(nds_system + lVar2 + 0x10cdfe8) = lVar6 + 8;
      }
    }
  }
  return 0;
}


