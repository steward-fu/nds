/*
 * Ghidra decompilation
 *
 * Function : luaK_setreturns
 * Address  : 08135110
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaK_setreturns(FuncState *fs,expdesc *e,int nresults)

{
  uint uVar1;
  int newstack;
  Instruction *pIVar2;
  Proto *pPVar3;
  
  if (e->k == VCALL) {
    pIVar2 = fs->f->code;
    pIVar2[(e->u).info] = (nresults + 1) * 0x4000 & 0x7fc000U | pIVar2[(e->u).info] & 0xff803fff;
    return;
  }
  if (e->k != VVARARG) {
    return;
  }
  pPVar3 = fs->f;
  pIVar2 = pPVar3->code;
  pIVar2[(e->u).info] = pIVar2[(e->u).info] & 0x7fffff | (nresults + 1) * 0x800000;
  pIVar2[(e->u).info] = pIVar2[(e->u).info] & 0xffffc03f | (uint)fs->freereg << 6;
  uVar1 = fs->freereg + 1;
  if (pPVar3->maxstacksize < uVar1) {
    if (0xf9 < uVar1) {
                    /* WARNING: Subroutine does not return */
      luaX_syntaxerror(fs->ls,"function or expression too complex");
    }
    pPVar3->maxstacksize = (lu_byte)uVar1;
    uVar1 = fs->freereg + 1;
  }
  fs->freereg = (lu_byte)uVar1;
  return;
}


