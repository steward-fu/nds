/*
 * Ghidra decompilation
 *
 * Function : luaK_codek
 * Address  : 08134b10
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int luaK_codek(FuncState *fs,int reg,int k)

{
  int iVar1;
  Instruction *pIVar2;
  int iVar3;
  Proto *pPVar4;
  Proto *f;
  Proto *f_1;
  int iVar5;
  int *piVar6;
  
  if (0x3ffff < k) {
    pPVar4 = fs->f;
    patchlistaux(fs,fs->jpc,fs->pc,0xff,fs->pc);
    iVar1 = pPVar4->sizecode;
    iVar3 = fs->pc;
    fs->jpc = -1;
    if (iVar3 < iVar1) {
      pIVar2 = pPVar4->code;
    }
    else {
      pIVar2 = (Instruction *)
               luaM_growaux_(fs->ls->L,pPVar4->code,&pPVar4->sizecode,4,0x7fffffff,"opcodes");
      iVar3 = fs->pc;
      pPVar4->code = pIVar2;
    }
    pIVar2[iVar3] = reg << 6 | 2;
    iVar1 = fs->pc;
    if (iVar1 < pPVar4->sizelineinfo) {
      piVar6 = pPVar4->lineinfo;
    }
    else {
      piVar6 = (int *)luaM_growaux_(fs->ls->L,pPVar4->lineinfo,&pPVar4->sizelineinfo,4,0x7fffffff,
                                    "opcodes");
      iVar1 = fs->pc;
      pPVar4->lineinfo = piVar6;
    }
    pPVar4 = fs->f;
    piVar6[iVar1] = fs->ls->lastline;
    iVar5 = fs->pc;
    iVar1 = iVar5 + 1;
    fs->pc = iVar1;
    patchlistaux(fs,fs->jpc,iVar1,0xff,iVar1);
    iVar1 = pPVar4->sizecode;
    iVar3 = fs->pc;
    fs->jpc = -1;
    if (iVar3 < iVar1) {
      pIVar2 = pPVar4->code;
    }
    else {
      pIVar2 = (Instruction *)
               luaM_growaux_(fs->ls->L,pPVar4->code,&pPVar4->sizecode,4,0x7fffffff,"opcodes");
      iVar3 = fs->pc;
      pPVar4->code = pIVar2;
    }
    pIVar2[iVar3] = k << 6 | 0x2e;
    iVar1 = fs->pc;
    if (iVar1 < pPVar4->sizelineinfo) {
      piVar6 = pPVar4->lineinfo;
    }
    else {
      piVar6 = (int *)luaM_growaux_(fs->ls->L,pPVar4->lineinfo,&pPVar4->sizelineinfo,4,0x7fffffff,
                                    "opcodes");
      iVar1 = fs->pc;
      pPVar4->lineinfo = piVar6;
    }
    piVar6[iVar1] = fs->ls->lastline;
    fs->pc = fs->pc + 1;
    return iVar5;
  }
  iVar1 = luaK_code(fs,reg << 6 | 1U | k << 0xe);
  return iVar1;
}


