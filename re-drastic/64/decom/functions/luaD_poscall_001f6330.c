/*
 * Ghidra decompilation
 *
 * Function : luaD_poscall
 * Address  : 001f6330
 * Program  : drastic64
 */


int luaD_poscall(long param_1,undefined8 *param_2)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  
  plVar12 = *(long **)(param_1 + 0x20);
  if ((*(byte *)(param_1 + 200) & 6) == 0) {
    lVar5 = plVar12[2];
  }
  else if ((*(byte *)(param_1 + 200) >> 1 & 1) == 0) {
    lVar5 = plVar12[2];
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(lVar5 + 0x28);
  }
  else {
    lVar11 = *(long *)(param_1 + 0x38);
    luaD_hook(param_1,1,0xffffffff);
    lVar5 = plVar12[2];
    param_2 = (undefined8 *)((long)param_2 + (*(long *)(param_1 + 0x38) - lVar11));
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(lVar5 + 0x28);
  }
  sVar2 = *(short *)(plVar12 + 8);
  puVar8 = (undefined8 *)*plVar12;
  *(long *)(param_1 + 0x20) = lVar5;
  if (sVar2 != 0) {
    puVar6 = *(undefined8 **)(param_1 + 0x10);
    puVar9 = puVar8;
    iVar7 = (int)sVar2;
    do {
      iVar3 = iVar7 + -1;
      if (puVar6 <= param_2) {
        puVar8 = puVar9;
        iVar4 = iVar3;
        if (0 < iVar7) {
          do {
            *(undefined4 *)(puVar8 + 1) = 0;
            bVar1 = 0 < iVar4;
            puVar8 = puVar8 + 2;
            iVar4 = iVar4 + -1;
          } while (bVar1);
          if (iVar3 < 0) {
            iVar3 = 0;
          }
          puVar8 = puVar9 + (long)iVar3 * 2 + 2;
        }
        break;
      }
      uVar10 = param_2[1];
      puVar8 = puVar9 + 2;
      *puVar9 = *param_2;
      puVar9[1] = uVar10;
      param_2 = param_2 + 2;
      puVar9 = puVar8;
      iVar7 = iVar3;
    } while (iVar3 != 0);
  }
  *(undefined8 **)(param_1 + 0x10) = puVar8;
  return sVar2 + 1;
}


