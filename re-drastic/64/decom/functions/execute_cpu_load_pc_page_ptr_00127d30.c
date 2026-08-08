/*
 * Ghidra decompilation
 *
 * Function : execute_cpu_load_pc_page_ptr
 * Address  : 00127d30
 * Program  : drastic64
 */


long execute_cpu_load_pc_page_ptr(long param_1,uint param_2)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + ((ulong)(param_2 >> 0xb) + 0x47a) * 8);
  if ((uVar2 & 0x3fffffffffffffff) != 0) {
    return uVar2 << 2;
  }
  lVar1 = extended_memory_get_page_ptr(param_1 + 0x23d0);
  return lVar1 - (ulong)param_2;
}


