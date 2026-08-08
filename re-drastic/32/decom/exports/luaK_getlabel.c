/*
 * Ghidra decompilation
 *
 * Function : luaK_getlabel
 * Address  : 08134624
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int luaK_getlabel(FuncState *fs)

{
  fs->lasttarget = fs->pc;
  return fs->pc;
}


