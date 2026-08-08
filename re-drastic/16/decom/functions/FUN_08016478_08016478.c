/*
 * Ghidra decompilation
 *
 * Function : FUN_08016478
 * Address  : 08016478
 * Program  : drastic16
 */


void FUN_08016478(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  
  iVar5 = *param_1;
  uVar12 = param_2[6];
  iVar8 = *(int *)(iVar5 + 0xfba24);
  uVar3 = uVar12 & 0x1fffff;
  uVar9 = param_2[4];
  iVar1 = *(int *)(*(int *)(iVar8 + 0x9a18) + 0x291645c);
  if (uVar3 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = uVar3;
    if (iVar1 == 0) {
      do {
        while( true ) {
          iVar13 = param_1[1] + (uVar9 >> 0x17) * 0x30;
          uVar2 = *(uint *)(param_1[1] + (uVar9 >> 0x17) * 0x30);
          uVar11 = uVar2 + 1;
          if (*(char *)(iVar13 + 0x2c) != '\0') break;
          iVar13 = *(int *)(iVar13 + 4) + (uVar9 & uVar2);
LAB_080164f4:
          uVar2 = uVar10;
          if (uVar11 <= uVar10) {
            uVar2 = uVar11;
          }
          uVar9 = uVar9 + uVar2;
          uVar10 = uVar10 - uVar2;
          if (iVar13 != 0) {
            FUN_08050ea4(iVar8,iVar13,uVar2);
          }
          if (uVar10 == 0) goto LAB_08016610;
        }
        if (*(char *)(iVar13 + 0x2c) == '\x01') {
          iVar13 = (**(code **)(iVar13 + 4))(iVar5,uVar9);
          goto LAB_080164f4;
        }
        if (uVar10 < uVar11) {
          uVar11 = uVar10;
        }
        uVar10 = uVar10 - uVar11;
        uVar9 = uVar9 + uVar11;
      } while (uVar10 != 0);
    }
    else {
      uVar10 = 0;
      uVar11 = uVar3;
      do {
        while( true ) {
          iVar13 = param_1[1] + (uVar9 >> 0x17) * 0x30;
          uVar2 = *(uint *)(param_1[1] + (uVar9 >> 0x17) * 0x30);
          uVar4 = uVar2 + 1;
          if (*(char *)(iVar13 + 0x2c) != '\0') break;
          iVar13 = *(int *)(iVar13 + 4) + (uVar9 & uVar2);
LAB_08016590:
          uVar2 = uVar11;
          if (uVar4 <= uVar11) {
            uVar2 = uVar4;
          }
          uVar9 = uVar9 + uVar2;
          uVar11 = uVar11 - uVar2;
          if (iVar13 != 0) {
            iVar13 = FUN_080513c8(iVar8,iVar13,uVar2);
            uVar10 = iVar1 * iVar13 + uVar10;
          }
          if (uVar11 == 0) goto LAB_08016610;
        }
        if (*(char *)(iVar13 + 0x2c) == '\x01') {
          iVar13 = (**(code **)(iVar13 + 4))(iVar5,uVar9);
          goto LAB_08016590;
        }
        uVar2 = uVar11;
        if (uVar4 <= uVar11) {
          uVar2 = uVar4;
        }
        uVar11 = uVar11 - uVar2;
        uVar9 = uVar9 + uVar2;
      } while (uVar11 != 0);
    }
  }
LAB_08016610:
  iVar13 = param_2[2];
  iVar8 = *(int *)(iVar5 + 0xfba1c);
  uVar11 = *(uint *)(iVar13 + 0x236c);
  uVar14 = *(uint *)(iVar8 + 0x10);
  uVar2 = *(uint *)(iVar8 + 8);
  iVar5 = *(int *)(iVar8 + 0xc);
  uVar6 = uVar2 + uVar14;
  uVar7 = uVar6 - uVar11;
  uVar4 = (uVar7 - uVar2) + uVar10;
  if ((uVar12 << 9) >> 0x1e != 3) {
    param_2[5] = uVar9 + uVar3;
  }
  if (iVar1 == 0) {
    if ((uVar12 & 0x2000000) == 0) {
      uVar12 = uVar12 & 0x7fffffff;
      param_2[6] = uVar12;
      *(uint *)(param_2[3] + 8) = uVar12;
    }
    if ((uVar12 & 0x40000000) == 0) {
      uVar12 = *(uint *)(iVar8 + 0x10);
    }
    else {
      iVar1 = *(int *)(iVar13 + 0x2080);
      uVar3 = *(uint *)(iVar1 + 0x214) | 0x100 << *(sbyte *)((int)param_2 + 0x1d);
      *(uint *)(iVar1 + 0x214) = uVar3;
      iVar5 = param_2[2];
      if ((*(byte *)(iVar5 + 0x2105) & 6) == 0) {
        uVar3 = -*(int *)(iVar1 + 0x208) & *(uint *)(iVar1 + 0x210) & uVar3;
        *(uint *)(iVar5 + 0x2100) = uVar3;
      }
      else {
        uVar3 = *(uint *)(iVar5 + 0x2100);
      }
      uVar12 = *(uint *)(iVar8 + 0x10);
      if (uVar3 != 0) {
        *(uint *)(iVar5 + 0x237c) = *(uint *)(iVar5 + 0x237c) | 2;
      }
    }
  }
  else {
    if ((uVar3 < 0x104) && ((uVar12 & 0x2000000) == 0)) {
      param_2[6] = uVar12 & 0x7fffffff;
      *(uint *)(param_2[3] + 8) = uVar12 & 0x7fffffff;
    }
    if (*(char *)((int)param_2 + 0x1e) != '\0') {
      FUN_080153f4(iVar8 + 0x18,*(byte *)((int)param_2 + 0x1d) + 0xc);
    }
    *param_2 = uVar7 + uVar10;
    param_2[1] = ((iVar5 + (uint)CARRY4(uVar2,uVar14)) -
                 (((int)uVar11 >> 0x1f) + (uint)(uVar6 < uVar11))) + (uint)CARRY4(uVar7,uVar10);
    *(undefined *)((int)param_2 + 0x1e) = 1;
    FUN_08015360(iVar8 + 0x18,uVar4,*(byte *)((int)param_2 + 0x1d) + 0xc);
    uVar12 = *(uint *)(iVar8 + 0x10);
    if (uVar12 <= uVar4) {
      return;
    }
    *(uint *)(iVar13 + 0x237c) = *(uint *)(iVar13 + 0x237c) | 4;
  }
  if (uVar4 < uVar12) {
    *(uint *)(iVar13 + 0x237c) = *(uint *)(iVar13 + 0x237c) | 4;
  }
  return;
}


