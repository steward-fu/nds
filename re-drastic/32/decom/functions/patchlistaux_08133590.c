/*
 * Ghidra decompilation
 *
 * Function : patchlistaux
 * Address  : 08133590
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void patchlistaux(FuncState *fs,int list,int vtarget,int reg,int dtarget)

{
  Instruction *pIVar1;
  uint uVar2;
  int offset_2;
  uint uVar3;
  Instruction IVar4;
  int offset_1;
  int iVar5;
  Instruction *pIVar6;
  uint uVar7;
  int iVar8;
  int offset;
  Instruction *pi;
  Instruction *pIVar9;
  
  if (list != -1) {
    pIVar6 = fs->f->code;
    do {
      uVar2 = pIVar6[list];
      iVar5 = list + 1;
      pIVar9 = pIVar6 + list;
      iVar8 = (uVar2 >> 0xe) - 0x1ffff;
      if (iVar8 != -1) {
        iVar8 = iVar8 + iVar5;
      }
      if (list < 1) {
LAB_08133664:
        uVar7 = uVar2 & 0x3f;
        uVar3 = uVar2;
      }
      else {
        pIVar1 = pIVar9 + -1;
        uVar7 = *pIVar1 & 0x3f;
        if (-1 < (char)luaP_opmodes[uVar7]) goto LAB_08133664;
        pIVar9 = pIVar9 + -1;
        uVar3 = *pIVar1;
      }
      if (uVar7 == 0x23) {
        if ((reg == 0xff) || (reg == uVar3 >> 0x17)) {
          IVar4 = uVar3 & 0x7fc000 | 0x22 | (uVar3 >> 0x17) << 6;
        }
        else {
          IVar4 = uVar3 & 0xffffc03f | (reg & 0xffU) << 6;
        }
        *pIVar9 = IVar4;
        uVar2 = vtarget - iVar5;
        if (0x1ffff < (int)((uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f))) {
LAB_081336fc:
                    /* WARNING: Subroutine does not return */
          luaX_syntaxerror(fs->ls,"control structure too long");
        }
        pIVar6[list] = pIVar6[list] & 0x3fff | (uVar2 + 0x1ffff) * 0x4000;
      }
      else {
        uVar7 = dtarget - iVar5;
        if (0x1ffff < (int)((uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f))) goto LAB_081336fc;
        pIVar6[list] = uVar2 & 0x3fff | (uVar7 + 0x1ffff) * 0x4000;
      }
      list = iVar8;
    } while (iVar8 != -1);
  }
  return;
}


