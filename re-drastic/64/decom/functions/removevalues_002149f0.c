/*
 * Ghidra decompilation
 *
 * Function : removevalues
 * Address  : 002149f0
 * Program  : drastic64
 */


void removevalues(long *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  long lVar5;
  
  if (param_2 != -1) {
    lVar5 = *(long *)(*param_1 + 0x38);
    do {
      puVar1 = (uint *)(lVar5 + (long)param_2 * 4);
      puVar4 = puVar1;
      if ((0 < param_2) && (puVar4 = puVar1 + -1, -1 < (char)(&luaP_opmodes)[puVar1[-1] & 0x3f])) {
        puVar4 = puVar1;
      }
      uVar3 = *puVar4;
      if ((uVar3 & 0x3f) == 0x23) {
        *puVar4 = uVar3 & 0x7fc000 | (uVar3 >> 0x17) << 6 | 0x22;
      }
      iVar2 = (*(uint *)(lVar5 + (long)param_2 * 4) >> 0xe) - 0x1ffff;
      param_2 = param_2 + 1 + iVar2;
    } while ((iVar2 != -1) && (param_2 != -1));
  }
  return;
}


