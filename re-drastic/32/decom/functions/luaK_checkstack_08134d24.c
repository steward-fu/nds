/*
 * Ghidra decompilation
 *
 * Function : luaK_checkstack
 * Address  : 08134d24
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaK_checkstack(FuncState *fs,int n)

{
  int iVar1;
  int newstack;
  
  iVar1 = (uint)fs->freereg + n;
  if (iVar1 <= (int)(uint)fs->f->maxstacksize) {
    return;
  }
  if (iVar1 < 0xfa) {
    fs->f->maxstacksize = (lu_byte)iVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  luaX_syntaxerror(fs->ls,"function or expression too complex");
}


