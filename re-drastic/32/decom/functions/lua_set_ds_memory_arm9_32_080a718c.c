/*
 * Ghidra decompilation
 *
 * Function : lua_set_ds_memory_arm9_32
 * Address  : 080a718c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int lua_set_ds_memory_arm9_32(lua_State *L)

{
  system_struct *psVar1;
  uint uVar2;
  u32 value_00;
  u32 value;
  void *pvVar3;
  u8 *block_resume_ptr;
  u32 page_table_entry;
  u32 address;
  uint address_00;
  cpu_struct *cpu;
  
  uVar2 = luaL_checkinteger(L,1);
  address_00 = uVar2 & 0xfffffffc;
  value_00 = luaL_checkinteger(L,2);
  psVar1 = lua_state.system;
  uVar2 = ((lua_state.system)->cpu_arm9).reg[(uVar2 >> 0xb) + 0x15];
  if ((uVar2 & 0x40000000) == 0) {
    *(u32 *)(address_00 + uVar2 * 4) = value_00;
  }
  else if ((int)uVar2 < 0) {
    if (value_00 != *(u32 *)(address_00 + uVar2 * 4)) {
      *(u32 *)(address_00 + uVar2 * 4) = value_00;
      cpu = &psVar1->cpu_arm9;
      cpu_block_check_allocation32(cpu,address_00);
      cpu_block_flush(cpu,0x2000000);
      if ((psVar1->cpu_arm9).block_resume_ptr != (void *)0x0) {
        cpu_block_load_pc(cpu);
        pvVar3 = cpu_block_lookup_base(cpu,(psVar1->cpu_arm9).pc);
        block_resume_ptr = (u8 *)((int)pvVar3 + 8);
        (psVar1->cpu_arm9).block_resume_ptr = block_resume_ptr;
      }
    }
  }
  else {
    extended_store32(&((lua_state.system)->cpu_arm9).memory_interface,address_00,value_00);
  }
  return 0;
}


