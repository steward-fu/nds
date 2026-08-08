/*
 * Ghidra decompilation
 *
 * Function : luaG_ordererror
 * Address  : 001f5ad0
 * Program  : drastic64
 */


void luaG_ordererror(undefined8 param_1,long param_2,long param_3)

{
  if (*(long *)(luaT_typenames_ + (((ulong)*(uint *)(param_2 + 8) & 0xf) + 1) * 8) !=
      *(long *)(luaT_typenames_ + (((ulong)*(uint *)(param_3 + 8) & 0xf) + 1) * 8)) {
                    /* WARNING: Subroutine does not return */
    luaG_runerror(param_1,"attempt to compare %s with %s");
  }
                    /* WARNING: Subroutine does not return */
  luaG_runerror(param_1,"attempt to compare two %s values");
}


