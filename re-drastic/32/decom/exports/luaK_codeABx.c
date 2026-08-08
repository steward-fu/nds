/*
 * Ghidra decompilation
 *
 * Function : luaK_codeABx
 * Address  : 08134a00
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int luaK_codeABx(FuncState *fs,OpCode o,int a,uint bc)

{
  int *piVar1;
  int iVar2;
  Instruction *pIVar3;
  int iVar4;
  Proto *pPVar5;
  Proto *f;
  
  pPVar5 = fs->f;
  patchlistaux(fs,fs->jpc,fs->pc,0xff,fs->pc);
  iVar2 = pPVar5->sizecode;
  iVar4 = fs->pc;
  fs->jpc = -1;
  if (iVar4 < iVar2) {
    pIVar3 = pPVar5->code;
  }
  else {
    pIVar3 = (Instruction *)
             luaM_growaux_(fs->ls->L,pPVar5->code,&pPVar5->sizecode,4,0x7fffffff,"opcodes");
    iVar4 = fs->pc;
    pPVar5->code = pIVar3;
  }
  pIVar3[iVar4] = o | bc << 0xe | a << 6;
  iVar2 = fs->pc;
  if (iVar2 < pPVar5->sizelineinfo) {
    piVar1 = pPVar5->lineinfo;
  }
  else {
    piVar1 = (int *)luaM_growaux_(fs->ls->L,pPVar5->lineinfo,&pPVar5->sizelineinfo,4,0x7fffffff,
                                  "opcodes");
    iVar2 = fs->pc;
    pPVar5->lineinfo = piVar1;
  }
  piVar1[iVar2] = fs->ls->lastline;
  iVar2 = fs->pc;
  fs->pc = iVar2 + 1;
  return iVar2;
}


