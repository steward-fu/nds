/*
 * Ghidra decompilation
 *
 * Function : luaK_reserveregs
 * Address  : 08134d64
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaK_reserveregs(FuncState *fs,int n)

{
  int iVar1;
  int newstack;
  
  iVar1 = (uint)fs->freereg + n;
  if ((int)(uint)fs->f->maxstacksize < iVar1) {
    if (0xf9 < iVar1) {
                    /* WARNING: Subroutine does not return */
      luaX_syntaxerror(fs->ls,"function or expression too complex");
    }
    fs->f->maxstacksize = (lu_byte)iVar1;
    iVar1 = (uint)fs->freereg + n;
  }
  fs->freereg = (lu_byte)iVar1;
  return;
}


