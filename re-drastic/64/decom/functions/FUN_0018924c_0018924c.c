/*
 * Ghidra decompilation
 *
 * Function : FUN_0018924c
 * Address  : 0018924c
 * Program  : drastic64
 */


undefined8 FUN_0018924c(undefined8 param_1)

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
  uVar5 = *(ulong *)(lua_state + 0x25d0710 + (ulong)(uVar2 >> 0xb) * 8);
  if ((uVar5 >> 0x3e & 1) == 0) {
    *(int *)(uVar6 + uVar5 * 4) = iVar3;
  }
  else {
    if (-1 < (long)uVar5) {
      extended_store32(lua_state + 0x25d0710,uVar6,iVar3);
      return 0;
    }
    if (iVar3 != *(int *)(uVar6 + uVar5 * 4)) {
      *(int *)(uVar6 + uVar5 * 4) = iVar3;
      lVar4 = lVar1 + 0x25ce340;
      cpu_block_check_allocation32(lVar4,uVar6);
      cpu_block_flush(lVar4,0x2000000);
      if (*(long *)(nds_system + lVar1 + 0x20d45d8) != 0) {
        cpu_block_load_pc(lVar4);
        lVar4 = cpu_block_lookup_base(lVar4,*(undefined4 *)(nds_system + lVar1 + 0x20d46fc));
        *(long *)(nds_system + lVar1 + 0x20d45d8) = lVar4 + 8;
      }
    }
  }
  return 0;
}


