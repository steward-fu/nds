/*
 * Ghidra decompilation
 *
 * Function : luaK_checkstack
 * Address  : 00215e30
 * Program  : drastic64
 */


void luaK_checkstack(long *param_1,int param_2)

{
  param_2 = (uint)*(byte *)((long)param_1 + 0x3c) + param_2;
  if ((int)(uint)*(byte *)(*param_1 + 0xc) < param_2) {
    if (0xf9 < param_2) {
                    /* WARNING: Subroutine does not return */
      luaX_syntaxerror(param_1[2],"function or expression too complex");
    }
    *(char *)(*param_1 + 0xc) = (char)param_2;
  }
  return;
}


