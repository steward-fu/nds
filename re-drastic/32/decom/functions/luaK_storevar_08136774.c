/*
 * Ghidra decompilation
 *
 * Function : luaK_storevar
 * Address  : 08136774
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaK_storevar(FuncState *fs,expdesc *var,expdesc *ex)

{
  int iVar1;
  int e;
  int e_1;
  int *piVar2;
  int iVar3;
  Instruction *pIVar4;
  expkind eVar5;
  int iVar6;
  int iVar7;
  OpCode op;
  Proto *pPVar8;
  Proto *f;
  
  eVar5 = var->k;
  if (eVar5 == VUPVAL) {
    iVar1 = luaK_exp2anyreg(fs,ex);
    iVar7 = (var->u).info;
    pPVar8 = fs->f;
    patchlistaux(fs,fs->jpc,fs->pc,0xff,fs->pc);
    iVar3 = pPVar8->sizecode;
    iVar6 = fs->pc;
    fs->jpc = -1;
    if (iVar6 < iVar3) {
      pIVar4 = pPVar8->code;
    }
    else {
      pIVar4 = (Instruction *)
               luaM_growaux_(fs->ls->L,pPVar8->code,&pPVar8->sizecode,4,0x7fffffff,"opcodes");
      iVar6 = fs->pc;
      pPVar8->code = pIVar4;
    }
    pIVar4[iVar6] = iVar7 << 0x17 | 9U | iVar1 << 6;
    iVar1 = fs->pc;
    if (iVar1 < pPVar8->sizelineinfo) {
      piVar2 = pPVar8->lineinfo;
    }
    else {
      piVar2 = (int *)luaM_growaux_(fs->ls->L,pPVar8->lineinfo,&pPVar8->sizelineinfo,4,0x7fffffff,
                                    "opcodes");
      iVar1 = fs->pc;
      pPVar8->lineinfo = piVar2;
    }
    piVar2[iVar1] = fs->ls->lastline;
    fs->pc = fs->pc + 1;
  }
  else {
    if (eVar5 == VINDEXED) {
      if ((var->u).ind.vt == '\b') {
        op = OP_SETTABLE;
      }
      else {
        op = OP_SETTABUP;
      }
      iVar1 = luaK_exp2RK(fs,ex);
      luaK_code(fs,(int)(var->u).ind.idx << 0x17 | (uint)(var->u).ind.t << 6 | op | iVar1 << 0xe);
      eVar5 = ex->k;
      goto joined_r0x081367b4;
    }
    if (eVar5 == VLOCAL) {
      if (((ex->k == VNONRELOC) && (((ex->u).info & 0x100U) == 0)) &&
         ((int)(uint)fs->nactvar <= (ex->u).info)) {
        fs->freereg = fs->freereg + 0xff;
      }
      exp2reg(fs,ex,(var->u).info);
      return;
    }
  }
  eVar5 = ex->k;
joined_r0x081367b4:
  if (((eVar5 == VNONRELOC) && (((ex->u).info & 0x100U) == 0)) &&
     ((int)(uint)fs->nactvar <= (ex->u).info)) {
    fs->freereg = fs->freereg + 0xff;
  }
  return;
}


