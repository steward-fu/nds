/*
 * Ghidra decompilation
 *
 * Function : luaK_setlist
 * Address  : 08137f98
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaK_setlist(FuncState *fs,int base,int nelems,int tostore)

{
  int iVar1;
  Instruction *pIVar2;
  int iVar3;
  int iVar4;
  int c;
  Proto *f_1;
  Proto *pPVar5;
  Proto *f;
  int *piVar6;
  bool bVar7;
  
  bVar7 = tostore == -1;
  if (bVar7) {
    tostore = 0;
  }
  iVar4 = (nelems + -1) / 0x32 + 1;
  if (!bVar7) {
    tostore = tostore << 0x17;
  }
  if (iVar4 < 0x200) {
    luaK_code(fs,base << 6 | 0x2bU | iVar4 * 0x4000 | tostore);
  }
  else {
    pPVar5 = fs->f;
    patchlistaux(fs,fs->jpc,fs->pc,0xff,fs->pc);
    iVar1 = pPVar5->sizecode;
    iVar3 = fs->pc;
    fs->jpc = -1;
    if (iVar3 < iVar1) {
      pIVar2 = pPVar5->code;
    }
    else {
      pIVar2 = (Instruction *)
               luaM_growaux_(fs->ls->L,pPVar5->code,&pPVar5->sizecode,4,0x7fffffff,"opcodes");
      iVar3 = fs->pc;
      pPVar5->code = pIVar2;
    }
    pIVar2[iVar3] = tostore | base << 6 | 0x2b;
    iVar1 = fs->pc;
    if (iVar1 < pPVar5->sizelineinfo) {
      piVar6 = pPVar5->lineinfo;
    }
    else {
      piVar6 = (int *)luaM_growaux_(fs->ls->L,pPVar5->lineinfo,&pPVar5->sizelineinfo,4,0x7fffffff,
                                    "opcodes");
      iVar1 = fs->pc;
      pPVar5->lineinfo = piVar6;
    }
    pPVar5 = fs->f;
    piVar6[iVar1] = fs->ls->lastline;
    iVar1 = fs->pc + 1;
    fs->pc = iVar1;
    patchlistaux(fs,fs->jpc,iVar1,0xff,iVar1);
    iVar1 = pPVar5->sizecode;
    iVar3 = fs->pc;
    fs->jpc = -1;
    if (iVar3 < iVar1) {
      pIVar2 = pPVar5->code;
    }
    else {
      pIVar2 = (Instruction *)
               luaM_growaux_(fs->ls->L,pPVar5->code,&pPVar5->sizecode,4,0x7fffffff,"opcodes");
      iVar3 = fs->pc;
      pPVar5->code = pIVar2;
    }
    pIVar2[iVar3] = iVar4 * 0x40 | 0x2e;
    iVar4 = fs->pc;
    if (iVar4 < pPVar5->sizelineinfo) {
      piVar6 = pPVar5->lineinfo;
    }
    else {
      piVar6 = (int *)luaM_growaux_(fs->ls->L,pPVar5->lineinfo,&pPVar5->sizelineinfo,4,0x7fffffff,
                                    "opcodes");
      iVar4 = fs->pc;
      pPVar5->lineinfo = piVar6;
    }
    piVar6[iVar4] = fs->ls->lastline;
    fs->pc = fs->pc + 1;
  }
  fs->freereg = (char)base + '\x01';
  return;
}


