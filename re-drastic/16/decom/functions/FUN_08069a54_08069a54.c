/*
 * Ghidra decompilation
 *
 * Function : FUN_08069a54
 * Address  : 08069a54
 * Program  : drastic16
 */


void FUN_08069a54(int param_1,uint param_2,int param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint *unaff_r4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  
  uVar3 = param_2 >> 0xb;
  uVar4 = (param_2 + param_3) - 1 >> 0xb;
  if (uVar3 <= uVar4) {
    unaff_r4 = (uint *)(param_1 + 0x2380 + uVar3 * 4);
  }
  iVar11 = *(int *)(param_1 + 0x802384);
  while (puVar1 = unaff_r4, uVar3 <= uVar4) {
    uVar3 = uVar3 + 1;
    unaff_r4 = puVar1 + 1;
    if ((*puVar1 & 0x40000000) == 0) {
      *puVar1 = *puVar1 | 0xc0000000;
    }
  }
  if (param_2 < 0x10000000) {
    iVar12 = *(int *)(param_1 + 0x802380);
    iVar8 = (param_2 >> 0x17) * 0x30;
    iVar5 = iVar12 + iVar8;
    puVar1 = (uint *)(**(code **)(iVar5 + 0x24))(iVar11,iVar5,param_2);
    puVar2 = (uint *)(**(code **)(iVar5 + 0x28))(iVar11,iVar5,param_2);
    uVar3 = *(uint *)(iVar12 + iVar8);
    if ((*(char *)(param_1 + 0x2104) == '\x01') && (param_2 < *(uint *)(iVar11 + 0xfc7fc))) {
      uVar6 = param_2 & 0x7fff;
      puVar1 = (uint *)(iVar11 + 0xaf144);
      uVar4 = 0x8000;
      uVar3 = 0x7fff;
      puVar2 = (uint *)(iVar11 + (((param_2 << 0x11) >> 0x17) + 0x3bc60) * 4);
    }
    else {
      uVar6 = param_2 & uVar3;
      uVar4 = uVar3 + 1;
    }
    if (uVar4 < uVar6 + param_3) {
      FUN_08069a54(param_1,param_2 + param_3 & ~uVar3,((uVar6 + param_3) - uVar3) + -1);
      param_3 = uVar4 - uVar6;
    }
    if (puVar1 != (uint *)0x0) {
      uVar3 = (uVar6 - 1) + param_3;
      uVar10 = uVar3 * 0x10000 >> 0x1b;
      uVar9 = uVar3 * 0x4000000 >> 0x1b;
      iVar11 = (uVar3 >> 0x10) - (uVar6 >> 0x10);
      uVar4 = (param_2 << 0x1a) >> 0x1b;
      iVar8 = (uVar3 >> 6) - (uVar6 >> 6);
      uVar3 = (uVar6 << 0x10) >> 0x1b;
      if (iVar11 == 0) {
        *puVar1 = *puVar1 | ~(-2 << uVar10) & -1 << uVar3;
      }
      else {
        puVar7 = puVar1 + 1;
        *puVar1 = *puVar1 | -1 << uVar3;
        puVar1 = puVar7;
        if (iVar11 != 1) {
          puVar1 = puVar7 + iVar11 + 0x3fffffff;
          memset(puVar7,-1,(iVar11 + 0x3fffffff) * 4);
        }
        *puVar1 = *puVar1 | ~(-2 << uVar10);
      }
      if (iVar8 != 0) {
        puVar7 = puVar2 + 1;
        *puVar2 = *puVar2 | -1 << uVar4;
        puVar1 = puVar7;
        if (iVar8 != 1) {
          puVar1 = puVar7 + iVar8 + 0x3fffffff;
          memset(puVar7,-1,(iVar8 + 0x3fffffff) * 4);
        }
        *puVar1 = *puVar1 | ~(-2 << uVar9);
        return;
      }
      *puVar2 = *puVar2 | ~(-2 << uVar9) & -1 << uVar4;
    }
  }
  return;
}


