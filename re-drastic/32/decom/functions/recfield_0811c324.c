/*
 * Ghidra decompilation
 *
 * Function : recfield
 * Address  : 0811c324
 * Program  : drastic
 */


/* DWARF original prototype: void recfield(LexState * ls, ConsControl * cc, ConsControl * cc) */

void recfield(LexState *ls,ConsControl *cc,ConsControl *cc_1)

{
  lu_byte lVar1;
  int iVar2;
  int b;
  int rkkey;
  int c;
  int a;
  FuncState *fs;
  FuncState *fs_00;
  TString *s;
  TString *ts;
  expdesc key;
  expdesc val;
  
  iVar2 = __stack_chk_guard;
  fs_00 = ls->fs;
  lVar1 = fs_00->freereg;
  if ((ls->t).token == 0x124) {
    s = (ls->t).seminfo.ts;
    luaX_next(ls);
    key.u.info = luaK_stringK(ls->fs,s);
    key.k = VK;
    key.t = -1;
    key.f = -1;
  }
  else {
    luaX_next(ls);
    subexpr(ls,&key,0);
    luaK_exp2val(ls->fs,&key);
    if ((ls->t).token != 0x5d) {
                    /* WARNING: Subroutine does not return */
      error_expected(ls,0x5d);
    }
    luaX_next(ls);
  }
  (cc_1->v).k = (cc_1->v).k + VNIL;
  if ((ls->t).token == 0x3d) {
    luaX_next(ls);
    b = luaK_exp2RK(fs_00,&key);
    subexpr(ls,&val,0);
    a = *(int *)((cc->v).k + VK);
    c = luaK_exp2RK(fs_00,&val);
    luaK_codeABC(fs_00,OP_SETTABLE,a,b,c);
    fs_00->freereg = lVar1;
    if (iVar2 == __stack_chk_guard) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  error_expected(ls,0x3d);
}


