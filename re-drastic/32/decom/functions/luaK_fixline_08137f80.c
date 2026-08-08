/*
 * Ghidra decompilation
 *
 * Function : luaK_fixline
 * Address  : 08137f80
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaK_fixline(FuncState *fs,int line)

{
  fs->f->lineinfo[fs->pc + 0x3fffffff] = line;
  return;
}


