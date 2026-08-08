/*
 * Ghidra decompilation
 *
 * Function : lua_set_ds_memory_arm7_8
 * Address  : 080a7454
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int lua_set_ds_memory_arm7_8(lua_State *L)

{
  u8 value_00;
  system_struct *psVar1;
  uint address_00;
  u32 address;
  uint uVar2;
  u32 value;
  void *pvVar3;
  u8 *block_resume_ptr;
  uint uVar4;
  u32 page_table_entry;
  cpu_struct *cpu;
  
  address_00 = luaL_checkinteger(L,1);
  uVar2 = luaL_checkinteger(L,2);
  psVar1 = lua_state.system;
  uVar4 = ((lua_state.system)->cpu_arm7).reg[(address_00 >> 0xb) + 0x15];
  value_00 = (u8)uVar2;
  if ((uVar4 & 0x40000000) == 0) {
    *(u8 *)(address_00 + uVar4 * 4) = value_00;
  }
  else if ((int)uVar4 < 0) {
    if (uVar2 != *(byte *)(address_00 + uVar4 * 4)) {
      *(u8 *)(address_00 + uVar4 * 4) = value_00;
      cpu = &psVar1->cpu_arm7;
      cpu_block_check_allocation8(cpu,address_00);
      cpu_block_flush(cpu,0x2000000);
      if ((psVar1->cpu_arm7).block_resume_ptr != (void *)0x0) {
        cpu_block_load_pc(cpu);
        pvVar3 = cpu_block_lookup_base(cpu,(psVar1->cpu_arm7).pc);
        block_resume_ptr = (u8 *)((int)pvVar3 + 8);
        (psVar1->cpu_arm7).block_resume_ptr = block_resume_ptr;
      }
    }
  }
  else {
    extended_store8(&((lua_state.system)->cpu_arm7).memory_interface,address_00,value_00);
  }
  return 0;
}


