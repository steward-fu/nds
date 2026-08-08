/*
 * Ghidra decompilation
 *
 * Function : FUN_08042a80
 * Address  : 08042a80
 * Program  : drastic16
 */


void FUN_08042a80(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 int param_6,undefined4 param_7,int param_8)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  ushort *puVar5;
  ushort *puVar6;
  ushort *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  puVar5 = (ushort *)(param_2 + 0x3f0);
  uVar2 = *(ushort *)(param_2 + 0x3f0);
  do {
    iVar12 = 0;
    uVar8 = (uint)uVar2;
    puVar6 = puVar5;
    iVar9 = param_2;
    iVar10 = param_5;
    if (uVar8 != 0) goto LAB_08042ae8;
    do {
      do {
        param_6 = param_6 + -1;
        iVar9 = iVar9 + 4;
        iVar10 = iVar10 + 1;
        puVar6 = puVar5 + 2;
        if (param_6 == 0) {
          return;
        }
        uVar8 = (uint)puVar5[2];
        puVar5 = puVar6;
      } while (uVar8 == 0);
LAB_08042ae8:
      uVar4 = 0;
      do {
        puVar7 = puVar6;
        uVar3 = uVar4 + uVar8;
        if (uVar3 < 0x101) {
          iVar12 = iVar12 + 1;
        }
        else {
          iVar1 = iVar12 * 4;
          iVar11 = iVar10 + iVar12;
          FUN_08036e48(param_1,iVar9,param_3,iVar10,iVar12,param_4,uVar4,param_7,param_8,param_8 + 8
                      );
          iVar12 = 1;
          uVar3 = uVar8;
          iVar9 = iVar9 + iVar1;
          iVar10 = iVar11;
        }
        param_6 = param_6 + -1;
        puVar5 = puVar7 + 2;
        if ((param_6 == 0) && (uVar3 != 0)) {
          FUN_08036e48(param_1,iVar9,param_3,iVar10,iVar12,param_4,uVar3,param_7,param_8,param_8 + 8
                      );
          return;
        }
        uVar8 = (uint)*puVar5;
        uVar4 = uVar3;
        puVar6 = puVar5;
      } while (uVar8 != 0);
    } while (uVar3 == 0);
    param_2 = iVar9 + iVar12 * 4;
    param_5 = iVar12 + iVar10;
    FUN_08036e48(param_1,iVar9,param_3,iVar10,iVar12,param_4,uVar3,param_7,param_8,param_8 + 8);
    uVar2 = puVar7[2];
  } while( true );
}


