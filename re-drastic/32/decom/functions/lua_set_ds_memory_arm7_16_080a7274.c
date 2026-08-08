/*
 * Ghidra decompilation
 *
 * Function : lua_set_ds_memory_arm7_16
 * Address  : 080a7274
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int lua_set_ds_memory_arm7_16(lua_State *L)

{
  int iVar1;
  u16 value_00;
  system_struct *psVar2;
  uint uVar3;
  uint uVar4;
  u32 value;
  void *pvVar5;
  u8 *block_resume_ptr;
  u32 buffer_offset;
  u32 page_table_entry;
  u32 address;
  uint address_00;
  cpu_struct *cpu;
  
  uVar3 = luaL_checkinteger(L,1);
  address_00 = uVar3 & 0xfffffffe;
  uVar4 = luaL_checkinteger(L,2);
  psVar2 = lua_state.system;
  uVar3 = ((lua_state.system)->cpu_arm7).reg[(uVar3 >> 0xb) + 0x15];
  iVar1 = uVar3 * 4;
  value_00 = (u16)uVar4;
  if ((uVar3 & 0x40000000) == 0) {
    *(u16 *)(address_00 + iVar1) = value_00;
  }
  else if ((int)uVar3 < 0) {
    if (uVar4 != *(ushort *)(address_00 + iVar1)) {
      *(u16 *)(address_00 + iVar1) = value_00;
      cpu = &psVar2->cpu_arm7;
      cpu_block_check_allocation16(cpu,address_00);
      cpu_block_flush(cpu,0x2000000);
      if ((psVar2->cpu_arm7).block_resume_ptr != (void *)0x0) {
        cpu_block_load_pc(cpu);
        pvVar5 = cpu_block_lookup_base(cpu,(psVar2->cpu_arm7).pc);
        block_resume_ptr = (u8 *)((int)pvVar5 + 8);
        (psVar2->cpu_arm7).block_resume_ptr = block_resume_ptr;
      }
    }
  }
  else {
    extended_store16(&((lua_state.system)->cpu_arm7).memory_interface,address_00,value_00);
  }
  return 0;
}


