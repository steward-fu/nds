/*
 * Ghidra decompilation
 *
 * Function : luaK_nil
 * Address  : 08133818
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaK_nil(FuncState *fs,int from,int n)

{
  int *piVar1;
  uint uVar2;
  Instruction *pIVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int pfrom;
  int iVar7;
  Proto *pPVar8;
  int pl;
  int iVar9;
  
  iVar9 = fs->pc;
  pPVar8 = fs->f;
  if (fs->lasttarget < iVar9) {
    uVar4 = pPVar8->code[iVar9 + 0x3fffffff];
    if ((uVar4 & 0x3f) == 4) {
      uVar6 = (uVar4 << 0x12) >> 0x18;
      iVar5 = uVar6 + (uVar4 >> 0x17);
      if ((((int)uVar6 <= from) && (from <= iVar5 + 1)) ||
         (from <= (int)uVar6 && (int)uVar6 <= from + n)) {
        uVar2 = from;
        if ((int)uVar6 <= from) {
          uVar2 = uVar6;
        }
        iVar7 = from + n + -1;
        if (iVar7 < iVar5) {
          iVar7 = iVar5 - uVar2;
        }
        else {
          iVar7 = iVar7 - uVar2;
        }
        pPVar8->code[iVar9 + 0x3fffffff] = (uVar2 & 0xff) << 6 | uVar4 & 0x7fc03f | iVar7 << 0x17;
        return;
      }
    }
  }
  patchlistaux(fs,fs->jpc,iVar9,0xff,iVar9);
  iVar9 = pPVar8->sizecode;
  iVar5 = fs->pc;
  fs->jpc = -1;
  if (iVar5 < iVar9) {
    pIVar3 = pPVar8->code;
  }
  else {
    pIVar3 = (Instruction *)
             luaM_growaux_(fs->ls->L,pPVar8->code,&pPVar8->sizecode,4,0x7fffffff,"opcodes");
    iVar5 = fs->pc;
    pPVar8->code = pIVar3;
  }
  pIVar3[iVar5] = from << 6 | (n + -1) * 0x800000 | 4;
  iVar9 = fs->pc;
  if (iVar9 < pPVar8->sizelineinfo) {
    piVar1 = pPVar8->lineinfo;
  }
  else {
    piVar1 = (int *)luaM_growaux_(fs->ls->L,pPVar8->lineinfo,&pPVar8->sizelineinfo,4,0x7fffffff,
                                  "opcodes");
    iVar9 = fs->pc;
    pPVar8->lineinfo = piVar1;
  }
  piVar1[iVar9] = fs->ls->lastline;
  fs->pc = fs->pc + 1;
  return;
}


