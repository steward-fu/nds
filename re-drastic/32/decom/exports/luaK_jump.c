/*
 * Ghidra decompilation
 *
 * Function : luaK_jump
 * Address  : 0813436c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int luaK_jump(FuncState *fs)

{
  int j;
  int list;
  Instruction *pIVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int offset;
  int iVar5;
  uint uVar6;
  int offset_1;
  int iVar7;
  Proto *pPVar8;
  Proto *f;
  Instruction *pIVar9;
  Instruction *jmp;
  LexState *ls;
  int iVar10;
  
  iVar7 = fs->jpc;
  pPVar8 = fs->f;
  fs->jpc = -1;
  patchlistaux(fs,-1,fs->pc,0xff,fs->pc);
  iVar4 = pPVar8->sizecode;
  fs->jpc = -1;
  iVar5 = fs->pc;
  if (iVar5 < iVar4) {
    pIVar1 = pPVar8->code;
  }
  else {
    pIVar1 = (Instruction *)
             luaM_growaux_(fs->ls->L,pPVar8->code,&pPVar8->sizecode,4,0x7fffffff,"opcodes");
    iVar5 = fs->pc;
    pPVar8->code = pIVar1;
  }
  pIVar1[iVar5] = 0x7fff801e;
  iVar4 = fs->pc;
  if (iVar4 < pPVar8->sizelineinfo) {
    piVar2 = pPVar8->lineinfo;
  }
  else {
    piVar2 = (int *)luaM_growaux_(fs->ls->L,pPVar8->lineinfo,&pPVar8->sizelineinfo,4,0x7fffffff,
                                  "opcodes");
    iVar4 = fs->pc;
    pPVar8->lineinfo = piVar2;
  }
  ls = fs->ls;
  piVar2[iVar4] = ls->lastline;
  iVar5 = fs->pc;
  fs->pc = iVar5 + 1;
  iVar4 = iVar5;
  if ((iVar7 != -1) && (iVar4 = iVar7, iVar5 != -1)) {
    pIVar1 = fs->f->code;
    iVar4 = iVar5;
    do {
      uVar3 = pIVar1[iVar4];
      pIVar9 = pIVar1 + iVar4;
      iVar10 = iVar4 + 1;
      iVar4 = (uVar3 >> 0xe) - 0x1ffff;
      if (iVar4 == -1) break;
      iVar4 = iVar4 + iVar10;
    } while (iVar4 != -1);
    uVar6 = iVar7 - iVar10;
    if (0x1ffff < (int)((uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f))) {
                    /* WARNING: Subroutine does not return */
      luaX_syntaxerror(ls,"control structure too long");
    }
    *pIVar9 = uVar3 & 0x3fff | (uVar6 + 0x1ffff) * 0x4000;
    iVar4 = iVar5;
  }
  return iVar4;
}


