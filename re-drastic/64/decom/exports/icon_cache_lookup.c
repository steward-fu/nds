/*
 * Ghidra decompilation
 *
 * Function : icon_cache_lookup
 * Address  : 0017b300
 * Program  : drastic64
 */


long icon_cache_lookup(long *param_1,char *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = *(uint *)(param_1 + 3);
  if ((param_3 < uVar1) &&
     (iVar2 = strcmp(param_2,*(char **)(param_1[1] + (ulong)param_3 * 8)), iVar2 == 0)) {
    return *param_1 + (ulong)param_3 * 800;
  }
  if (uVar1 != 0) {
    lVar3 = 0;
    lVar4 = param_1[1];
    do {
      iVar2 = strcmp(param_2,*(char **)(lVar4 + lVar3 * 8));
      if (iVar2 == 0) {
        return *param_1 + lVar3 * 800;
      }
      lVar3 = lVar3 + 1;
    } while ((uint)lVar3 < uVar1);
  }
  return 0;
}


