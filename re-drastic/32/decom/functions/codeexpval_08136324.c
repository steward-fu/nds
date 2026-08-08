/*
 * Ghidra decompilation
 *
 * Function : codeexpval
 * Address  : 08136324
 * Program  : drastic
 */


/* WARNING: Removing unreachable block (ram,0x0813662c) */
/* WARNING: Unknown calling convention */

void codeexpval(FuncState *fs,OpCode op,expdesc *e1,expdesc *e2,int line)

{
  int iVar1;
  int iVar2;
  int o2;
  int iVar3;
  int o1;
  uint uVar4;
  Instruction *pIVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  Proto *pPVar9;
  Proto *f;
  bool bVar10;
  lua_Number n;
  Value VVar11;
  TValue v1;
  TValue v2;
  TValue res;
  
  iVar1 = __stack_chk_guard;
  if (((op < OP_NOT) && (e1->t == -1)) && (e1->f == -1)) {
    if (e1->k == VKFLT) {
      v1.value_ = *(Value *)&e1->u;
      v1.tt_ = 3;
    }
    else {
      if (e1->k != VKINT) goto LAB_08136364;
      v1.value_ = *(Value *)&e1->u;
      v1.tt_ = 0x13;
    }
    if ((e2->t == -1) && (e2->f == -1)) {
      if (e2->k == VKFLT) {
        v2.value_ = *(Value *)&e2->u;
        iVar3 = 3;
        v2.tt_ = 3;
      }
      else {
        if (e2->k != VKINT) goto LAB_08136364;
        v2.value_ = *(Value *)&e2->u;
        iVar3 = 0x13;
        v2.tt_ = 0x13;
      }
      uVar4 = op + ~OP_SELF;
      if (uVar4 < 0xe) {
        uVar8 = 1 << (uVar4 & 0xff);
        if ((uVar8 & 0x68) == 0) {
          if ((uVar8 & 0x2f80) != 0) {
            if (v1.tt_ == 0x13) {
              res.value_ = v1.value_;
            }
            else {
              iVar2 = luaV_tointeger_(&v1,(lua_Integer *)&res);
              iVar3 = v2.tt_;
              if (iVar2 == 0) goto LAB_08136364;
            }
            if (iVar3 != 0x13) {
              uVar8 = luaV_tointeger_(&v2,(lua_Integer *)&res);
              if (uVar8 != 0) {
                uVar8 = 1;
              }
              goto LAB_081365e8;
            }
          }
        }
        else {
          VVar11 = v2.value_;
          if (iVar3 == 0x13) {
            VVar11.n = (float)(longlong)v2.value_.b;
          }
          uVar8 = (uint)(VVar11.n != 0.0);
LAB_081365e8:
          if (uVar8 == 0) goto LAB_08136364;
        }
      }
      luaO_arith(fs->ls->L,uVar4,&v1,&v2,&res);
      if (res.tt_ == 0x13) {
        e1->k = VKINT;
        e1->u = (anon_union_4_4_e6d17769_for_u)res.value_;
        goto LAB_0813644c;
      }
      if (res.value_.n != 0.0) {
        e1->k = VKFLT;
        e1->u = (anon_union_4_4_e6d17769_for_u)res.value_;
        goto LAB_0813644c;
      }
    }
  }
LAB_08136364:
  bVar10 = OP_NOT < op;
  if (op != OP_LEN) {
    bVar10 = op != OP_UNM;
  }
  if (!bVar10 || (op == OP_LEN || op == OP_BNOT)) {
    iVar3 = luaK_exp2anyreg(fs,e1);
    uVar4 = 0;
    if (iVar3 < 1) goto LAB_08136498;
LAB_081363a0:
    if (((e1->k == VNONRELOC) && (((e1->u).info & 0x100U) == 0)) &&
       ((int)(uint)fs->nactvar <= (e1->u).info)) {
      fs->freereg = fs->freereg + 0xff;
    }
    if (e2->k == VNONRELOC) {
      uVar8 = (e2->u).info;
joined_r0x081366c0:
      if (((uVar8 & 0x100) == 0) && ((int)(uint)fs->nactvar <= (int)uVar8)) {
        fs->freereg = fs->freereg + 0xff;
      }
    }
  }
  else {
    iVar2 = luaK_exp2RK(fs,e2);
    iVar3 = luaK_exp2RK(fs,e1);
    uVar4 = iVar2 << 0xe;
    if (iVar2 < iVar3) goto LAB_081363a0;
LAB_08136498:
    if (((e2->k == VNONRELOC) && (((e2->u).info & 0x100U) == 0)) &&
       ((int)(uint)fs->nactvar <= (e2->u).info)) {
      fs->freereg = fs->freereg + 0xff;
    }
    if (e1->k == VNONRELOC) {
      uVar8 = (e1->u).info;
      goto joined_r0x081366c0;
    }
  }
  pPVar9 = fs->f;
  patchlistaux(fs,fs->jpc,fs->pc,0xff,fs->pc);
  iVar2 = pPVar9->sizecode;
  iVar7 = fs->pc;
  fs->jpc = -1;
  if (iVar7 < iVar2) {
    pIVar5 = pPVar9->code;
  }
  else {
    pIVar5 = (Instruction *)
             luaM_growaux_(fs->ls->L,pPVar9->code,&pPVar9->sizecode,4,0x7fffffff,"opcodes");
    iVar7 = fs->pc;
    pPVar9->code = pIVar5;
  }
  pIVar5[iVar7] = op | uVar4 | iVar3 << 0x17;
  iVar3 = fs->pc;
  if (iVar3 < pPVar9->sizelineinfo) {
    piVar6 = pPVar9->lineinfo;
  }
  else {
    piVar6 = (int *)luaM_growaux_(fs->ls->L,pPVar9->lineinfo,&pPVar9->sizelineinfo,4,0x7fffffff,
                                  "opcodes");
    iVar3 = fs->pc;
    pPVar9->lineinfo = piVar6;
  }
  piVar6[iVar3] = fs->ls->lastline;
  iVar3 = fs->pc;
  fs->pc = iVar3 + 1;
  (e1->u).info = iVar3;
  iVar3 = fs->pc;
  piVar6 = fs->f->lineinfo;
  e1->k = VRELOCABLE;
  piVar6[iVar3 + 0x3fffffff] = line;
LAB_0813644c:
  if (iVar1 == __stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


