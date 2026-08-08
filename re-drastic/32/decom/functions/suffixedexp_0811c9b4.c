/*
 * Ghidra decompilation
 *
 * Function : suffixedexp
 * Address  : 0811c9b4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void suffixedexp(LexState *ls,expdesc *v)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  TString *ts_2;
  lua_State *L;
  FuncState *fs;
  FuncState *fs_00;
  int iVar4;
  FuncState *pFVar5;
  FuncState *fs_1;
  int line;
  int line_00;
  int line_1;
  TString *varname;
  TString *pTVar6;
  TString *ts;
  TString *ts_1;
  FuncState *fs_2;
  expdesc key;
  
  iVar1 = __stack_chk_guard;
  fs_00 = ls->fs;
  line_00 = ls->linenumber;
  iVar4 = (ls->t).token;
  if (iVar4 == 0x28) {
    luaX_next(ls);
    subexpr(ls,v,0);
    if ((ls->t).token != 0x29) {
      if (line_00 != ls->linenumber) {
        L = ls->L;
        pcVar2 = luaX_token2str(ls,0x29);
        pcVar3 = luaX_token2str(ls,0x28);
        pcVar2 = luaO_pushfstring(L,"%s expected (to close %s at line %d)",pcVar2,pcVar3,line_00);
                    /* WARNING: Subroutine does not return */
        luaX_syntaxerror(ls,pcVar2);
      }
                    /* WARNING: Subroutine does not return */
      error_expected(ls,0x29);
    }
    luaX_next(ls);
    luaK_dischargevars(ls->fs,v);
  }
  else {
    if (iVar4 != 0x124) {
                    /* WARNING: Subroutine does not return */
      luaX_syntaxerror(ls,"unexpected symbol");
    }
    pTVar6 = (ls->t).seminfo.ts;
    luaX_next(ls);
    pFVar5 = ls->fs;
    iVar4 = singlevaraux(pFVar5,pTVar6,v,1);
    if (iVar4 == 0) {
      singlevaraux(pFVar5,ls->envn,v,1);
      key.u.info = luaK_stringK(ls->fs,pTVar6);
      key.k = VK;
      key.t = -1;
      key.f = -1;
      luaK_indexed(pFVar5,v,&key);
    }
  }
LAB_0811ca78:
  do {
    iVar4 = (ls->t).token;
    while (iVar4 != 0x3a) {
      if (iVar4 < 0x3b) {
        if (iVar4 == 0x28) {
LAB_0811cc10:
          luaK_exp2nextreg(fs_00,v);
          funcargs(ls,v,line_00);
          goto LAB_0811ca78;
        }
        if (iVar4 != 0x2e) {
LAB_0811cb70:
          if (iVar1 == __stack_chk_guard) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        pFVar5 = ls->fs;
        luaK_exp2anyregup(pFVar5,v);
        luaX_next(ls);
        if ((ls->t).token != 0x124) goto LAB_0811cccc;
        pTVar6 = (ls->t).seminfo.ts;
        luaX_next(ls);
        key.u.info = luaK_stringK(ls->fs,pTVar6);
        key.k = VK;
        key.t = -1;
        key.f = -1;
        luaK_indexed(pFVar5,v,&key);
        goto LAB_0811ca78;
      }
      if ((iVar4 == 0x7b) || (iVar4 == 0x125)) goto LAB_0811cc10;
      if (iVar4 != 0x5b) goto LAB_0811cb70;
      luaK_exp2anyregup(fs_00,v);
      luaX_next(ls);
      subexpr(ls,&key,0);
      luaK_exp2val(ls->fs,&key);
      if ((ls->t).token != 0x5d) {
                    /* WARNING: Subroutine does not return */
        error_expected(ls,0x5d);
      }
      luaX_next(ls);
      luaK_indexed(fs_00,v,&key);
      iVar4 = (ls->t).token;
    }
    luaX_next(ls);
    if ((ls->t).token != 0x124) {
LAB_0811cccc:
                    /* WARNING: Subroutine does not return */
      error_expected(ls,0x124);
    }
    pTVar6 = (ls->t).seminfo.ts;
    luaX_next(ls);
    key.u.info = luaK_stringK(ls->fs,pTVar6);
    key.k = VK;
    key.t = -1;
    key.f = -1;
    luaK_self(fs_00,v,&key);
    funcargs(ls,v,line_00);
  } while( true );
}


