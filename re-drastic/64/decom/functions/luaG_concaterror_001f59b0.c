/*
 * Ghidra decompilation
 *
 * Function : luaG_concaterror
 * Address  : 001f59b0
 * Program  : drastic64
 */


void luaG_concaterror(undefined8 param_1,long param_2,long param_3)

{
  if (1 < (*(uint *)(param_2 + 8) & 0xf) - 3) {
    param_3 = param_2;
  }
                    /* WARNING: Subroutine does not return */
  luaG_typeerror(param_1,param_3,"concatenate");
}


