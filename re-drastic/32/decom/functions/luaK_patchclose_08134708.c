/*
 * Ghidra decompilation
 *
 * Function : luaK_patchclose
 * Address  : 08134708
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaK_patchclose(FuncState *fs,int list,int level)

{
  int iVar1;
  int offset;
  int iVar2;
  uint uVar3;
  uint uVar4;
  Instruction *pIVar5;
  
  if (list == -1) {
    return;
  }
  uVar4 = (level + 1) * 0x40 & 0x3fc0;
  pIVar5 = fs->f->code;
  do {
    uVar3 = pIVar5[list];
    iVar1 = (uVar3 >> 0xe) - 0x1ffff;
    iVar2 = iVar1 + list + 1;
    if (iVar1 == -1) {
      pIVar5[list] = uVar3 & 0xffffc03f | uVar4;
      return;
    }
    pIVar5[list] = uVar3 & 0xffffc03f | uVar4;
    list = iVar2;
  } while (iVar2 != -1);
  return;
}


