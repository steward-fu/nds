/*
 * Ghidra decompilation
 *
 * Function : FUN_08068620
 * Address  : 08068620
 * Program  : drastic16
 */


int FUN_08068620(int param_1,int param_2,int param_3)

{
  int *piVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_30 [5];
  
  local_30[0] = param_2;
  pvVar2 = bsearch(local_30,*(void **)(param_1 + 0x400),*(size_t *)(param_1 + 0x404),0x10,
                   FUN_08067888);
  if (pvVar2 != (void *)0x0) {
    iVar8 = *(int *)(param_1 + 0x400);
    iVar6 = (int)pvVar2 - iVar8 >> 4;
    if (-1 < iVar6) {
      iVar4 = *(int *)(iVar8 + iVar6 * 0x10);
      iVar7 = iVar8 + iVar6 * 0x10;
      if (iVar4 == param_2) {
        iVar5 = *(int *)(iVar7 + 4);
        iVar9 = iVar6;
        while( true ) {
          if (iVar5 == param_3) {
            return iVar7;
          }
          iVar9 = iVar9 + -1;
          if ((iVar9 == -1) || (*(int *)(iVar7 + -0x10) != iVar4)) break;
          iVar5 = *(int *)(iVar7 + -0xc);
          iVar7 = iVar7 + -0x10;
        }
      }
    }
    uVar3 = iVar6 + 1;
    if (uVar3 < *(uint *)(param_1 + 0x404)) {
      iVar7 = *(int *)(iVar8 + uVar3 * 0x10);
      iVar6 = iVar8 + uVar3 * 0x10;
      if (iVar7 == param_2) {
        if (*(int *)(iVar6 + 4) == param_3) {
          return iVar6;
        }
        iVar6 = iVar8 + uVar3 * 0x10 + -0x10;
        while( true ) {
          uVar3 = uVar3 + 1;
          iVar8 = iVar6 + 0x20;
          if ((*(uint *)(param_1 + 0x404) <= uVar3) || (*(int *)(iVar6 + 0x20) != iVar7)) break;
          piVar1 = (int *)(iVar6 + 0x24);
          iVar6 = iVar6 + 0x10;
          if (*piVar1 == param_3) {
            return iVar8;
          }
        }
      }
    }
  }
  return 0;
}


