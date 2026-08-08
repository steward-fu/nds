/*
 * Ghidra decompilation
 *
 * Function : FUN_08091e8c
 * Address  : 08091e8c
 * Program  : drastic16
 */


void FUN_08091e8c(undefined4 *param_1,int *param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  int *piVar17;
  
  do {
    iVar3 = *param_2;
    piVar11 = param_2 + 1;
    piVar12 = param_2 + 2;
    piVar13 = param_2 + 3;
    piVar14 = param_2 + 4;
    piVar15 = param_2 + 5;
    piVar16 = param_2 + 6;
    piVar17 = param_2 + 7;
    param_2 = param_2 + 8;
    iVar2 = param_4 + -8;
    uVar4 = *(undefined4 *)(param_3 + *piVar11 * 4);
    uVar5 = *(undefined4 *)(param_3 + *piVar12 * 4);
    uVar6 = *(undefined4 *)(param_3 + *piVar13 * 4);
    uVar7 = *(undefined4 *)(param_3 + *piVar14 * 4);
    uVar8 = *(undefined4 *)(param_3 + *piVar15 * 4);
    uVar9 = *(undefined4 *)(param_3 + *piVar16 * 4);
    uVar10 = *(undefined4 *)(param_3 + *piVar17 * 4);
    *param_1 = *(undefined4 *)(param_3 + iVar3 * 4);
    param_1[1] = uVar4;
    param_1[2] = uVar5;
    param_1[3] = uVar6;
    param_1[4] = uVar7;
    param_1[5] = uVar8;
    param_1[6] = uVar9;
    param_1[7] = uVar10;
    param_1 = param_1 + 8;
    bVar1 = 7 < param_4;
    param_4 = iVar2;
  } while (iVar2 != 0 && bVar1);
  return;
}


