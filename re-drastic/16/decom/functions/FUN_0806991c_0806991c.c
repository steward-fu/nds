/*
 * Ghidra decompilation
 *
 * Function : FUN_0806991c
 * Address  : 0806991c
 * Program  : drastic16
 */


void FUN_0806991c(int *param_1,int param_2,uint param_3)

{
  uint *puVar1;
  void *pvVar2;
  int iVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  short sVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  
  uVar7 = (uint)*(ushort *)(param_2 + 0x18);
  iVar12 = *(int *)(param_2 + 8);
  if (uVar7 != 0) {
    uVar8 = 0;
    uVar11 = 0;
    uVar10 = 0xffffffff;
    iVar3 = iVar12;
    do {
      uVar11 = uVar11 + 1;
      uVar5 = *(uint *)(iVar3 + 0xc) & 0xfffffffe;
      uVar6 = uVar5 - *(int *)(param_2 + 0xc);
      if (((0 < (int)uVar6) && (uVar5 < *(uint *)(iVar3 + 0x10))) && (uVar6 < uVar10)) {
        uVar8 = uVar5;
        uVar10 = uVar6;
      }
      iVar3 = iVar3 + 0x1c;
    } while (uVar11 < uVar7);
    if (uVar10 != 0xffffffff) {
      sVar4 = (short)((uVar10 << 0xf) >> 0x10);
      *(short *)(param_2 + 0x16) = sVar4;
      if (param_3 == 0) {
        uVar10 = (uVar10 << 0xe) >> 0x10;
      }
      sVar9 = (short)uVar10;
      if (param_3 != 0) {
        sVar9 = sVar4;
      }
      *(undefined *)(param_2 + 0x1e) = 3;
      uVar10 = *(uint *)(iVar12 + 0x10);
      *(short *)(param_2 + 0x14) = sVar9;
      if (uVar8 < uVar10) {
        sVar4 = 1;
        uVar10 = 0;
      }
      else {
        uVar10 = 0;
        iVar3 = iVar12;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
          iVar12 = iVar3 + 0x1c;
          if (uVar7 <= uVar10) break;
          puVar1 = (uint *)(iVar3 + 0x2c);
          iVar3 = iVar12;
        } while (*puVar1 <= uVar8);
        sVar4 = (short)uVar11 + 2;
      }
      uVar11 = *(uint *)(iVar12 + 0x14);
      *(uint *)(*param_1 + 0x14da0e4) =
           *(int *)(*param_1 + 0x14da0e4) + ((1 - uVar7) + uVar10) * 0x1c;
      *(short *)(param_2 + 0x18) = sVar4;
      *(short *)(iVar12 + 0x18) = sVar9 + -1;
      *(uint *)(iVar12 + 0xc) = uVar8 | param_3;
      *(uint *)(iVar12 + 0x10) = uVar8;
      *(uint *)(iVar12 + 0x14) = uVar11 | 1;
    }
  }
  pvVar2 = realloc(*(void **)(param_2 + 4),(uint)*(ushort *)(param_2 + 0x14) * 0x1c);
  *(void **)(param_2 + 4) = pvVar2;
  return;
}


