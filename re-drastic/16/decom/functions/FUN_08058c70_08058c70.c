/*
 * Ghidra decompilation
 *
 * Function : FUN_08058c70
 * Address  : 08058c70
 * Program  : drastic16
 */


void FUN_08058c70(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  undefined *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  bool bVar14;
  
  iVar5 = param_1 + param_4 * 0x20;
  puVar8 = (uint *)(iVar5 + 0x40b98);
  bVar2 = *(byte *)(iVar5 + 0x40bb0);
  uVar10 = (uint)bVar2;
  if ((bVar2 & 0x80) == 0) {
    return;
  }
  switch(uVar10 & 0xb) {
  case 0:
    uVar3 = *(uint *)(iVar5 + 0x40ba0);
    iVar7 = *(int *)(iVar5 + 0x40ba4);
    iVar13 = *(int *)(iVar5 + 0x40ba8);
    uVar12 = *(uint *)(iVar5 + 0x40bac);
    uVar4 = *puVar8;
    uVar6 = *(uint *)(iVar5 + 0x40b9c);
    if (param_3 != 0) {
      uVar11 = uVar10 & 4;
      if ((bVar2 & 4) == 0) {
        do {
          uVar11 = uVar11 + 1;
          bVar14 = CARRY4(uVar3,uVar4);
          uVar4 = uVar3 + uVar4;
          *(short *)(iVar13 + uVar6 * 2) = (short)(uVar10 & 4);
          uVar6 = iVar7 + uVar6 + (uint)bVar14;
          if (uVar12 <= uVar6) {
            uVar6 = uVar6 - uVar12;
          }
        } while (uVar11 != param_3);
      }
      else {
        uVar10 = 0;
        do {
          bVar14 = CARRY4(uVar4,uVar3);
          uVar4 = uVar4 + uVar3;
          iVar1 = uVar6 * 2;
          uVar6 = uVar6 + iVar7 + (uint)bVar14;
          uVar10 = uVar10 + 1;
          *(undefined2 *)(iVar13 + iVar1) = 0;
          if (uVar12 <= uVar6) goto LAB_08058f60;
        } while (uVar10 != param_3);
      }
    }
    break;
  case 1:
    uVar3 = *(uint *)(iVar5 + 0x40ba0);
    uVar12 = *(uint *)(iVar5 + 0x40bac);
    uVar4 = *puVar8;
    uVar6 = *(uint *)(iVar5 + 0x40b9c);
    if (param_3 != 0) {
      uVar10 = uVar10 & 4;
      if ((bVar2 & 4) == 0) {
        do {
          bVar14 = CARRY4(uVar4,uVar3);
          uVar4 = uVar4 + uVar3;
          uVar6 = uVar6 + *(int *)(iVar5 + 0x40ba4) + (uint)bVar14;
          uVar10 = uVar10 + 1;
          if (uVar12 <= uVar6) {
            uVar6 = uVar6 - uVar12;
          }
        } while (uVar10 != param_3);
      }
      else {
        uVar10 = 0;
        do {
          bVar14 = CARRY4(uVar4,uVar3);
          uVar4 = uVar4 + uVar3;
          uVar6 = uVar6 + *(int *)(iVar5 + 0x40ba4) + (uint)bVar14;
          uVar10 = uVar10 + 1;
          if (uVar12 <= uVar6) goto LAB_08058f60;
        } while (uVar10 != param_3);
      }
    }
    break;
  default:
    goto switchD_08058ca4_caseD_2;
  case 8:
    uVar3 = *(uint *)(iVar5 + 0x40ba0);
    iVar7 = *(int *)(iVar5 + 0x40ba4);
    iVar13 = *(int *)(iVar5 + 0x40ba8);
    uVar12 = *(uint *)(iVar5 + 0x40bac);
    uVar4 = *puVar8;
    uVar6 = *(uint *)(iVar5 + 0x40b9c);
    if (param_3 != 0) {
      uVar11 = uVar10 & 4;
      if ((bVar2 & 4) == 0) {
        do {
          uVar11 = uVar11 + 1;
          bVar14 = CARRY4(uVar3,uVar4);
          uVar4 = uVar3 + uVar4;
          *(char *)(iVar13 + uVar6) = (char)(uVar10 & 4);
          uVar6 = iVar7 + uVar6 + (uint)bVar14;
          if (uVar12 <= uVar6) {
            uVar6 = uVar6 - uVar12;
          }
        } while (uVar11 != param_3);
      }
      else {
        uVar10 = 0;
        do {
          bVar14 = CARRY4(uVar4,uVar3);
          uVar4 = uVar4 + uVar3;
          puVar9 = (undefined *)(iVar13 + uVar6);
          uVar6 = uVar6 + iVar7 + (uint)bVar14;
          uVar10 = uVar10 + 1;
          *puVar9 = 0;
          if (uVar12 <= uVar6) goto LAB_08058f60;
        } while (uVar10 != param_3);
      }
    }
    break;
  case 9:
    uVar3 = *(uint *)(iVar5 + 0x40ba0);
    uVar12 = *(uint *)(iVar5 + 0x40bac);
    uVar4 = *puVar8;
    uVar6 = *(uint *)(iVar5 + 0x40b9c);
    if (param_3 != 0) {
      uVar10 = uVar10 & 4;
      if ((bVar2 & 4) == 0) {
        do {
          bVar14 = CARRY4(uVar4,uVar3);
          uVar4 = uVar4 + uVar3;
          uVar6 = uVar6 + *(int *)(iVar5 + 0x40ba4) + (uint)bVar14;
          uVar10 = uVar10 + 1;
          if (uVar12 <= uVar6) {
            uVar6 = uVar6 - uVar12;
          }
        } while (uVar10 != param_3);
      }
      else {
        uVar10 = 0;
        do {
          bVar14 = CARRY4(uVar4,uVar3);
          uVar4 = uVar4 + uVar3;
          uVar6 = uVar6 + *(int *)(iVar5 + 0x40ba4) + (uint)bVar14;
          uVar10 = uVar10 + 1;
          if (uVar12 <= uVar6) goto LAB_08058f60;
        } while (uVar10 != param_3);
      }
    }
  }
LAB_08058d5c:
  *puVar8 = uVar4;
  *(uint *)(iVar5 + 0x40b9c) = uVar6;
switchD_08058ca4_caseD_2:
  return;
LAB_08058f60:
  *(byte *)(iVar5 + 0x40bb0) = bVar2 & 0x7f;
  *(byte *)(*(int *)(param_1 + 0x40bd8) + param_4 + 0x108) = bVar2 & 0x7f;
  goto LAB_08058d5c;
}


