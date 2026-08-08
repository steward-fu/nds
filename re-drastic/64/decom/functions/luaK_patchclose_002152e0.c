/*
 * Ghidra decompilation
 *
 * Function : luaK_patchclose
 * Address  : 002152e0
 * Program  : drastic64
 */


void luaK_patchclose(long *param_1,int param_2,int param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  if (param_2 != -1) {
    lVar4 = *(long *)(*param_1 + 0x38);
    do {
      lVar5 = (long)param_2;
      lVar1 = (long)param_2;
      uVar3 = *(uint *)(lVar4 + lVar5 * 4);
      iVar2 = (uVar3 >> 0xe) - 0x1ffff;
      param_2 = param_2 + 1 + iVar2;
      uVar3 = uVar3 & 0xffffc03f | (param_3 + 1U & 0xff) << 6;
      if (iVar2 == -1) {
        *(uint *)(lVar4 + lVar1 * 4) = uVar3;
        return;
      }
      *(uint *)(lVar4 + lVar5 * 4) = uVar3;
    } while (param_2 != -1);
  }
  return;
}


