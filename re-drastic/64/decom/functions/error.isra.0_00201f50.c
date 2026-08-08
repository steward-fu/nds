/*
 * Ghidra decompilation
 *
 * Function : error.isra.0
 * Address  : 00201f50
 * Program  : drastic64
 */


void error_isra_0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  luaO_pushfstring(*param_1,"%s: %s precompiled chunk",param_2,param_3);
                    /* WARNING: Subroutine does not return */
  luaD_throw(*param_1,3);
}


