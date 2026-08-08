/*
 * Ghidra decompilation
 *
 * Function : luaG_traceexec
 * Address  : 001f5b20
 * Program  : drastic64
 */


void luaG_traceexec(long param_1)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long **pplVar9;
  
  bVar1 = *(byte *)(param_1 + 200);
  pplVar9 = *(long ***)(param_1 + 0x20);
  if (((bVar1 >> 3 & 1) == 0) || (*(int *)(param_1 + 0xc0) != 0)) {
    bVar2 = *(byte *)((long)pplVar9 + 0x42);
    bVar3 = false;
    if ((bVar2 >> 6 & 1) != 0) goto LAB_001f5c08;
  }
  else {
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0xbc);
    bVar2 = *(byte *)((long)pplVar9 + 0x42);
    if ((bVar2 >> 6 & 1) != 0) {
LAB_001f5c08:
      *(byte *)((long)pplVar9 + 0x42) = bVar2 & 0xbf;
      return;
    }
    bVar3 = true;
    luaD_hook(param_1,3,0xffffffff);
  }
  plVar4 = pplVar9[5];
  if ((bVar1 >> 2 & 1) != 0) {
    iVar5 = -1;
    lVar7 = *(long *)(*(long *)(**pplVar9 + 0x18) + 0x38);
    lVar6 = *(long *)(*(long *)(**pplVar9 + 0x18) + 0x48);
    iVar8 = (int)((long)plVar4 - lVar7 >> 2) + -1;
    if (lVar6 != 0) {
      iVar5 = *(int *)(lVar6 + (long)iVar8 * 4);
    }
    if ((iVar8 != 0) && (*(long **)(param_1 + 0x28) < plVar4)) {
      iVar8 = -1;
      if (lVar6 != 0) {
        iVar8 = *(int *)(lVar6 + (long)(int)((long)*(long **)(param_1 + 0x28) - lVar7 >> 2) * 4 + -4
                        );
      }
      if (iVar5 == iVar8) goto LAB_001f5bdc;
    }
    luaD_hook(param_1,2);
    plVar4 = pplVar9[5];
  }
LAB_001f5bdc:
  *(long **)(param_1 + 0x28) = plVar4;
  if (*(char *)(param_1 + 10) != '\x01') {
    return;
  }
  if (bVar3) {
    *(undefined4 *)(param_1 + 0xc0) = 1;
  }
  *(byte *)((long)pplVar9 + 0x42) = *(byte *)((long)pplVar9 + 0x42) | 0x40;
  lVar6 = *(long *)(param_1 + 0x10);
  pplVar9[5] = (long *)((long)plVar4 + -4);
  *pplVar9 = (long *)(lVar6 + -0x10);
                    /* WARNING: Subroutine does not return */
  luaD_throw(param_1,1);
}


