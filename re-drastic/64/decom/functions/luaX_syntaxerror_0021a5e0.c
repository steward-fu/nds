/*
 * Ghidra decompilation
 *
 * Function : luaX_syntaxerror
 * Address  : 0021a5e0
 * Program  : drastic64
 */


void luaX_syntaxerror(long param_1,undefined8 param_2)

{
                    /* WARNING: Subroutine does not return */
  lexerror(param_1,param_2,*(undefined4 *)(param_1 + 0x10));
}


