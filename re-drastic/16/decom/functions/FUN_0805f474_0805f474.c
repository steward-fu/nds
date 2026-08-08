/*
 * Ghidra decompilation
 *
 * Function : FUN_0805f474
 * Address  : 0805f474
 * Program  : drastic16
 */


int FUN_0805f474(int *param_1,uint param_2,char *param_3)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined *local_60 [2];
  undefined auStack_58 [32];
  uint local_38;
  
  local_60[0] = auStack_58;
  local_38 = param_2;
  piVar2 = (int *)bsearch(local_60,(void *)param_1[2],param_1[4],4,(__compar_fn_t)&LAB_0805def0);
  if (piVar2 == (int *)0x0) {
    uVar4 = param_1[4];
  }
  else {
    iVar8 = param_1[2];
    iVar11 = (int)piVar2 - iVar8 >> 2;
    if (-1 < iVar11) {
      iVar10 = *(int *)(iVar8 + iVar11 * 4);
      piVar5 = (int *)(iVar8 + iVar11 * 4);
      uVar4 = *(uint *)(iVar10 + 0x20);
      iVar7 = iVar11;
      if (uVar4 == param_2) {
        do {
          iVar3 = strcmp((char *)(iVar10 + 4),param_3);
          iVar7 = iVar7 + -1;
          if (iVar3 == 0) {
            return iVar10;
          }
          if (iVar7 == -1) break;
          piVar5 = piVar5 + -1;
          iVar10 = *piVar5;
        } while (*(uint *)(iVar10 + 0x20) == uVar4);
      }
    }
    uVar4 = param_1[4];
    uVar9 = iVar11 + 1;
    if (uVar9 < uVar4) {
      iVar11 = *(int *)(iVar8 + uVar9 * 4);
      piVar5 = (int *)(iVar8 + uVar9 * 4);
      uVar6 = *(uint *)(iVar11 + 0x20);
      if (uVar6 == param_2) {
        do {
          iVar8 = strcmp((char *)(iVar11 + 4),param_3);
          uVar9 = uVar9 + 1;
          if (iVar8 == 0) {
            return iVar11;
          }
          if (uVar4 <= uVar9) goto LAB_0805f58c;
          piVar5 = piVar5 + 1;
          iVar11 = *piVar5;
        } while (*(uint *)(iVar11 + 0x20) == uVar6);
      }
      printf(" Couldn\'t find gamecode + ID for %08x:%s, returning first gamecode match.\n",param_2,
             param_3);
      return *piVar2;
    }
  }
LAB_0805f58c:
  if (uVar4 == 0) {
    return 0;
  }
  iVar11 = *param_1;
  if (((param_2 ^ *(uint *)(iVar11 + 0x20)) & 0xffffff) == 0) {
    iVar7 = 0;
  }
  else {
    iVar8 = 0x30 - iVar11;
    uVar9 = 0;
    do {
      uVar9 = uVar9 + 1;
      iVar7 = iVar8 + iVar11;
      if (uVar9 == uVar4) {
        return 0;
      }
      puVar1 = (uint *)(iVar11 + 0x50);
      iVar11 = iVar11 + 0x30;
    } while (((*puVar1 ^ param_2) & 0xffffff) != 0);
  }
  printf(" Couldn\'t find full gamecode (%08x), going with first alt-region match (%08x)\n",param_2)
  ;
  return *param_1 + iVar7;
}


