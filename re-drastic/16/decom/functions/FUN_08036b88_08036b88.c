/*
 * Ghidra decompilation
 *
 * Function : FUN_08036b88
 * Address  : 08036b88
 * Program  : drastic16
 */


void FUN_08036b88(int param_1,int param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined *puVar8;
  int iVar9;
  ushort *puVar10;
  
  puVar10 = (ushort *)(param_1 + 0x3f0);
  uVar6 = (uint)*(ushort *)(param_1 + 0x460);
  param_1 = param_1 + 0x460;
  puVar8 = (undefined *)(param_2 + 3);
  if (uVar6 != 0) {
    param_2 = param_2 + 7;
    uVar3 = 0;
    do {
      uVar3 = uVar3 + 1;
      *(undefined *)(param_2 + -4) = 0x40;
      param_2 = param_2 + 4;
    } while (uVar3 < uVar6);
    puVar8 = puVar8 + uVar6 * 4;
  }
  if (param_3 != 1) {
    iVar9 = 0;
    iVar7 = param_1;
    do {
      iVar4 = ((uint)*(ushort *)(iVar7 + -0x70) - (uint)*(ushort *)(iVar7 + 2)) - uVar6;
      uVar6 = (uint)*(ushort *)(iVar7 + 4);
      iVar2 = uVar6 + *(ushort *)(iVar7 + 2);
      puVar8 = puVar8 + iVar4 * 4;
      if (iVar2 != 0) {
        iVar4 = 0;
        puVar1 = puVar8;
        do {
          iVar4 = iVar4 + 1;
          *puVar1 = 0x40;
          puVar1 = puVar1 + 4;
        } while (iVar4 != iVar2);
        puVar8 = puVar8 + iVar4 * 4;
      }
      iVar9 = iVar9 + 1;
      iVar7 = iVar7 + 4;
    } while (iVar9 != param_3 + -1);
    param_1 = param_1 + (param_3 + 0x3fffffff) * 4;
    puVar10 = puVar10 + (param_3 + 0x3fffffff) * 2;
  }
  uVar3 = (uint)*(ushort *)(param_1 + 2);
  if (uVar3 != 0) {
    uVar5 = 0;
    puVar8 = puVar8 + ((*puVar10 - uVar3) - uVar6) * 4;
    do {
      uVar5 = uVar5 + 1;
      *puVar8 = 0x40;
      puVar8 = puVar8 + 4;
    } while (uVar5 < uVar3);
  }
  return;
}


