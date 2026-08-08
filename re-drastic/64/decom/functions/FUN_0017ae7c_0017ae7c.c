/*
 * Ghidra decompilation
 *
 * Function : FUN_0017ae7c
 * Address  : 0017ae7c
 * Program  : drastic64
 */


long FUN_0017ae7c(long *param_1,char *param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *param_1;
  if (lVar5 != 0) {
    lVar5 = param_1[1];
    uVar3 = 0;
    uVar2 = (ulong)*(uint *)(param_1 + 2);
    while (uVar4 = uVar2, uVar3 < uVar4) {
      while( true ) {
        uVar2 = uVar4 + uVar3 >> 1;
        lVar6 = *(long *)(lVar5 + uVar2 * 8);
        iVar1 = strcmp(param_2,*(char **)(lVar6 + 0x18));
        if (iVar1 < 0) break;
        if (iVar1 == 0) {
          return lVar6;
        }
        uVar3 = uVar2 + 1;
        if (uVar4 <= uVar3) goto LAB_0017aef4;
      }
    }
LAB_0017aef4:
    lVar5 = 0;
  }
  return lVar5;
}


