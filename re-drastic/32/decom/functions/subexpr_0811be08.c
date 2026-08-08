/*
 * Ghidra decompilation
 *
 * Function : subexpr
 * Address  : 0811be08
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

BinOpr subexpr(LexState *ls,expdesc *v,int limit)

{
  int iVar1;
  FuncState *fs_00;
  BinOpr BVar2;
  FuncState *fs;
  expkind eVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  int line;
  BinOpr op_00;
  BinOpr op;
  UnOpr op_01;
  BinOpr nextop;
  int line_1;
  lua_State *L;
  bool bVar7;
  expdesc v2;
  
  iVar1 = __stack_chk_guard;
  fs_00 = ls->fs;
  uVar4 = ls->L->nCcalls + 1;
  ls->L->nCcalls = uVar4;
  if ((char *)0xc8 < (char *)(uint)uVar4) {
                    /* WARNING: Subroutine does not return */
    checklimit(fs_00,200,0x8146118,(char *)(uint)uVar4);
  }
  iVar5 = (ls->t).token;
  if (iVar5 == 0x2d) {
    op_01 = OPR_MINUS;
LAB_0811be84:
    iVar5 = ls->linenumber;
    luaX_next(ls);
    subexpr(ls,v,0xc);
    luaK_prefix(ls->fs,op_01,v,iVar5);
  }
  else {
    if (0x2d < iVar5) {
      if (iVar5 == 0x7e) {
        op_01 = OPR_BNOT;
      }
      else {
        if (iVar5 != 0x10f) goto LAB_0811bf8c;
        op_01 = OPR_NOT;
      }
      goto LAB_0811be84;
    }
    if (iVar5 == 0x23) {
      op_01 = OPR_LEN;
      goto LAB_0811be84;
    }
LAB_0811bf8c:
    if (iVar5 == 0x114) {
      eVar3 = VTRUE;
LAB_0811c0f4:
      v->k = eVar3;
      (v->u).info = 0;
      v->t = -1;
      v->f = -1;
LAB_0811bfdc:
      luaX_next(ls);
    }
    else {
      if (0x114 < iVar5) {
        if (iVar5 == 0x122) {
          v->k = VKFLT;
          (v->u).info = 0;
          v->t = -1;
          v->f = -1;
          v->u = *(anon_union_4_4_e6d17769_for_u *)&(ls->t).seminfo;
        }
        else if (iVar5 < 0x123) {
          if (iVar5 != 0x119) goto LAB_0811c2e4;
          if (fs_00->f->is_vararg == '\0') {
                    /* WARNING: Subroutine does not return */
            luaX_syntaxerror(ls,"cannot use \'...\' outside a vararg function");
          }
          iVar5 = luaK_codeABC(fs_00,OP_VARARG,0,1,0);
          v->k = VVARARG;
          (v->u).info = iVar5;
          v->t = -1;
          v->f = -1;
        }
        else if (iVar5 == 0x123) {
          v->k = VKINT;
          (v->u).info = 0;
          v->t = -1;
          v->f = -1;
          v->u = *(anon_union_4_4_e6d17769_for_u *)&(ls->t).seminfo;
        }
        else {
          if (iVar5 != 0x125) goto LAB_0811c2e4;
          iVar5 = luaK_stringK(fs_00,(ls->t).seminfo.ts);
          v->k = VK;
          (v->u).info = iVar5;
          v->t = -1;
          v->f = -1;
        }
        goto LAB_0811bfdc;
      }
      if (iVar5 == 0x107) {
        eVar3 = VFALSE;
        goto LAB_0811c0f4;
      }
      if (iVar5 < 0x108) {
        if (iVar5 != 0x7b) goto LAB_0811c2e4;
        constructor(ls,v);
      }
      else if (iVar5 == 0x109) {
        luaX_next(ls);
        body(ls,v,0,ls->linenumber);
      }
      else {
        if (iVar5 == 0x10e) {
          eVar3 = VNIL;
          goto LAB_0811c0f4;
        }
LAB_0811c2e4:
        suffixedexp(ls,v);
      }
    }
  }
  iVar5 = (ls->t).token;
  if (iVar5 == 0x7e) {
    uVar6 = 5;
    op_00 = OPR_BXOR;
  }
  else if (iVar5 < 0x7f) {
    if (iVar5 == 0x2d) {
      uVar6 = 10;
      op_00 = OPR_SUB;
    }
    else if (iVar5 < 0x2e) {
      if (iVar5 == 0x26) {
        uVar6 = 6;
        op_00 = OPR_BAND;
      }
      else if (iVar5 < 0x27) {
        if (iVar5 != 0x25) {
LAB_0811bef4:
          BVar2 = OPR_NOBINOPR;
          goto LAB_0811bef8;
        }
        uVar6 = 0xb;
        op_00 = OPR_MOD;
      }
      else if (iVar5 == 0x2a) {
        uVar6 = 0xb;
        op_00 = OPR_MUL;
      }
      else {
        if (iVar5 != 0x2b) goto LAB_0811bef4;
        uVar6 = 10;
        op_00 = OPR_ADD;
      }
    }
    else if (iVar5 == 0x3e) {
      uVar6 = 3;
      op_00 = OPR_GT;
    }
    else if (iVar5 < 0x3f) {
      if (iVar5 == 0x2f) {
        uVar6 = 0xb;
        op_00 = OPR_DIV;
      }
      else {
        if (iVar5 != 0x3c) goto LAB_0811bef4;
        uVar6 = 3;
        op_00 = OPR_LT;
      }
    }
    else if (iVar5 == 0x5e) {
      uVar6 = 0xe;
      op_00 = OPR_POW;
    }
    else {
      if (iVar5 != 0x7c) goto LAB_0811bef4;
      uVar6 = 4;
      op_00 = OPR_BOR;
    }
  }
  else if (iVar5 == 0x11a) {
    uVar6 = 3;
    op_00 = OPR_EQ;
  }
  else if (iVar5 < 0x11b) {
    if (iVar5 == 0x110) {
      uVar6 = 1;
      op_00 = OPR_OR;
    }
    else if (iVar5 < 0x111) {
      if (iVar5 != 0x101) goto LAB_0811bef4;
      uVar6 = 2;
      op_00 = OPR_AND;
    }
    else if (iVar5 == 0x117) {
      uVar6 = 0xb;
      op_00 = OPR_IDIV;
    }
    else {
      if (iVar5 != 0x118) goto LAB_0811bef4;
      uVar6 = 9;
      op_00 = OPR_CONCAT;
    }
  }
  else if (iVar5 == 0x11d) {
    uVar6 = 3;
    op_00 = OPR_NE;
  }
  else if (iVar5 < 0x11e) {
    if (iVar5 == 0x11b) {
      uVar6 = 3;
      op_00 = OPR_GE;
    }
    else {
      if (iVar5 != 0x11c) goto LAB_0811bef4;
      uVar6 = 3;
      op_00 = OPR_LE;
    }
  }
  else if (iVar5 == 0x11e) {
    uVar6 = 7;
    op_00 = OPR_SHL;
  }
  else {
    if (iVar5 != 0x11f) goto LAB_0811bef4;
    uVar6 = 7;
    op_00 = OPR_SHR;
  }
  while (BVar2 = op_00, limit < (int)uVar6) {
    iVar5 = ls->linenumber;
    luaX_next(ls);
    luaK_infix(ls->fs,op_00,v);
    BVar2 = subexpr(ls,&v2,(uint)priority[op_00].right);
    luaK_posfix(ls->fs,op_00,v,&v2,iVar5);
    if (BVar2 == OPR_NOBINOPR) break;
    op_00 = BVar2;
    uVar6 = (uint)priority[BVar2].left;
  }
LAB_0811bef8:
  bVar7 = iVar1 == __stack_chk_guard;
  ls->L->nCcalls = ls->L->nCcalls - 1;
  if (bVar7) {
    return BVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


