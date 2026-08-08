/*
 * Ghidra decompilation
 *
 * Function : FUN_0018934c
 * Address  : 0018934c
 * Program  : drastic64
 */


undefined8 FUN_0018934c(undefined8 param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar2 = luaL_checkinteger(param_1,1);
  uVar6 = (ulong)(uVar2 & 0xfffffffc);
  iVar3 = luaL_checkinteger(param_1,2);
  lVar1 = lua_state;
  uVar5 = *(ulong *)(lua_state + 0x15ca120 + (ulong)(uVar2 >> 0xb) * 8);
  if ((uVar5 >> 0x3e & 1) == 0) {
    *(int *)(uVar6 + uVar5 * 4) = iVar3;
  }
  else {
    if (-1 < (long)uVar5) {
      extended_store32(lua_state + 0x15ca120,uVar6,iVar3);
      return 0;
    }
    if (iVar3 != *(int *)(uVar6 + uVar5 * 4)) {
      *(int *)(uVar6 + uVar5 * 4) = iVar3;
      lVar4 = lVar1 + 0x15c7d50;
      cpu_block_check_allocation32(lVar4,uVar6);
      cpu_block_flush(lVar4,0x2000000);
      if (*(long *)(nds_system + lVar1 + 0x10cdfe8) != 0) {
        cpu_block_load_pc(lVar4);
        lVar4 = cpu_block_lookup_base(lVar4,*(undefined4 *)(nds_system + lVar1 + 0x10ce10c));
        *(long *)(nds_system + lVar1 + 0x10cdfe8) = lVar4 + 8;
      }
    }
  }
  return 0;
}


