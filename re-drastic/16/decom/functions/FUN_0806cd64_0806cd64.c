/*
 * Ghidra decompilation
 *
 * Function : FUN_0806cd64
 * Address  : 0806cd64
 * Program  : drastic16
 */


uint FUN_0806cd64(int param_1,uint param_2)

{
  int **ppiVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int **ppiVar5;
  int iVar6;
  uint *puVar7;
  bool bVar8;
  
  if ((param_2 < 0x2000000) && (*(char *)(param_1 + 0x2104) == '\x01')) {
    uVar3 = param_2 & 1;
    if (uVar3 == 0) {
      uVar2 = (param_2 << 0x11) >> 0x13;
      iVar6 = 0x2314;
    }
    else {
      uVar2 = (param_2 << 0x11) >> 0x12;
      iVar6 = 0x2318;
    }
    uVar2 = *(uint *)(*(int *)(param_1 + iVar6) + uVar2 * 4);
    if (uVar2 != 0) {
      return uVar2;
    }
    uVar2 = FUN_0806d16c(param_1,param_2 & 0xfffffffe,uVar3);
    if (uVar2 != 0) {
      if (uVar3 != 0) {
        *(uint *)(*(int *)(param_1 + 0x2318) + ((param_2 << 0x11) >> 0x12) * 4) = uVar2;
        return uVar2;
      }
      uVar3 = (param_2 << 0x11) >> 0x13;
      *(uint *)(*(int *)(param_1 + 0x2314) + uVar3 * 4) = uVar2;
      iVar6 = *(int *)(param_1 + 0x2084) + uVar3;
      uVar3 = (uint)*(byte *)(iVar6 + 0x14b8020);
      if (uVar3 < 9) {
        return uVar2;
      }
      *(byte *)(iVar6 + 0x14b8020) = ~((byte)~(byte)((uVar3 << 0x19) >> 0x18) >> 1);
      return uVar2;
    }
  }
  else {
    bVar8 = param_2 >> 0x18 == 2;
    if (bVar8) {
      uVar3 = 0x7fff;
      iVar6 = *(int *)(param_1 + 0x2084) + 0x1300000;
    }
    else {
      iVar6 = *(int *)(param_1 + 0x2084);
      uVar3 = 0x1fff;
    }
    uVar3 = uVar3 & param_2 >> 2;
    if (!bVar8) {
      iVar6 = iVar6 + 0x1380000;
    }
    puVar7 = (uint *)(iVar6 + uVar3 * 0x10);
    if (*(uint *)(iVar6 + uVar3 * 0x10) == param_2) {
      return puVar7[1];
    }
    if (puVar7[2] == param_2) {
      return puVar7[3];
    }
    if (puVar7[3] != 0) {
      piVar4 = *(int **)(puVar7[3] - 4);
      while (piVar4 = (int *)*piVar4, piVar4 != (int *)0x0) {
        if (piVar4[1] == param_2) {
          return piVar4[2];
        }
      }
    }
    uVar3 = FUN_0806d16c(param_1,param_2 & 0xfffffffe,param_2 & 1);
    if (uVar3 != 0) {
      if (puVar7[1] == 0) {
        *puVar7 = param_2;
        puVar7[1] = uVar3;
        return uVar3;
      }
      if (puVar7[3] != 0) {
        ppiVar5 = *(int ***)(puVar7[3] - 4);
        for (ppiVar1 = (int **)*ppiVar5; ppiVar1 != (int **)0x0; ppiVar1 = (int **)*ppiVar1) {
          ppiVar5 = ppiVar1;
        }
        *ppiVar5 = (int *)*(int *)(uVar3 - 4);
        return uVar3;
      }
      puVar7[2] = param_2;
      puVar7[3] = uVar3;
      return uVar3;
    }
  }
  return 0;
}


