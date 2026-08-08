/*
 * Ghidra decompilation
 *
 * Function : funcargs
 * Address  : 0811c7a0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void funcargs(LexState *ls,expdesc *f,int line)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int base;
  lua_State *L;
  FuncState *fs;
  FuncState *fs_00;
  expdesc args;
  
  iVar1 = __stack_chk_guard;
  iVar4 = (ls->t).token;
  fs_00 = ls->fs;
  if (iVar4 == 0x7b) {
    constructor(ls,&args);
  }
  else if (iVar4 == 0x125) {
    args.u.info = luaK_stringK(fs_00,(ls->t).seminfo.ts);
    args.k = VK;
    args.t = -1;
    args.f = -1;
    luaX_next(ls);
  }
  else {
    if (iVar4 != 0x28) {
                    /* WARNING: Subroutine does not return */
      luaX_syntaxerror(ls,"function arguments expected");
    }
    luaX_next(ls);
    if ((ls->t).token == 0x29) {
      args.k = VVOID;
    }
    else {
      while (subexpr(ls,&args,0), (ls->t).token == 0x2c) {
        luaX_next(ls);
        luaK_exp2nextreg(ls->fs,&args);
      }
      luaK_setreturns(fs_00,&args,-1);
      if ((ls->t).token != 0x29) {
        if (line == ls->linenumber) {
                    /* WARNING: Subroutine does not return */
          error_expected(ls,0x29);
        }
        L = ls->L;
        pcVar2 = luaX_token2str(ls,0x29);
        pcVar3 = luaX_token2str(ls,0x28);
        pcVar2 = luaO_pushfstring(L,"%s expected (to close %s at line %d)",pcVar2,pcVar3,line);
                    /* WARNING: Subroutine does not return */
        luaX_syntaxerror(ls,pcVar2);
      }
    }
    luaX_next(ls);
  }
  iVar4 = (f->u).info;
  if (args.k + ~VRELOCABLE < 2) {
    iVar5 = 0;
  }
  else {
    if (args.k != VVOID) {
      luaK_exp2nextreg(fs_00,&args);
    }
    iVar5 = (uint)fs_00->freereg - iVar4;
  }
  iVar5 = luaK_codeABC(fs_00,OP_CALL,iVar4,iVar5,2);
  f->k = VCALL;
  (f->u).info = iVar5;
  f->t = -1;
  f->f = -1;
  luaK_fixline(fs_00,line);
  fs_00->freereg = (char)iVar4 + '\x01';
  if (iVar1 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


