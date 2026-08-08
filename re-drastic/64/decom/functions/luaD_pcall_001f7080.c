/*
 * Ghidra decompilation
 *
 * Function : luaD_pcall
 * Address  : 001f7080
 * Program  : drastic64
 */


int luaD_pcall(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  ulong *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined uVar4;
  undefined2 uVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  
  uVar5 = *(undefined2 *)(param_1 + 0xc4);
  uVar11 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = param_5;
  uVar4 = *(undefined *)(param_1 + 0xc9);
  lVar10 = *(long *)(param_1 + 0x20);
  iVar6 = luaD_rawrunprotected();
  if (iVar6 == 0) {
LAB_001f70c0:
    *(undefined8 *)(param_1 + 0xb0) = uVar11;
    return iVar6;
  }
  lVar12 = *(long *)(param_1 + 0x38);
  puVar3 = (undefined8 *)(lVar12 + param_4);
  luaF_close(param_1,puVar3);
  if (iVar6 == 4) {
    lVar7 = *(long *)(*(long *)(param_1 + 0x18) + 0xf0);
    *(long *)(lVar12 + param_4) = lVar7;
    *(uint *)(puVar3 + 1) = *(byte *)(lVar7 + 8) | 0x40;
  }
  else if (iVar6 == 6) {
    lVar7 = luaS_newlstr(param_1,"error in error handling",0x17);
    *(long *)(lVar12 + param_4) = lVar7;
    *(uint *)(puVar3 + 1) = *(byte *)(lVar7 + 8) | 0x40;
  }
  else {
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x10) + -8);
    *puVar3 = *(undefined8 *)(*(long *)(param_1 + 0x10) + -0x10);
    puVar3[1] = uVar8;
  }
  *(undefined8 **)(param_1 + 0x10) = puVar3 + 2;
  *(long *)(param_1 + 0x20) = lVar10;
  *(undefined2 *)(param_1 + 0xc4) = uVar5;
  *(undefined *)(param_1 + 0xc9) = uVar4;
  puVar3 = puVar3 + 2;
  while (lVar10 != 0) {
    puVar1 = (ulong *)(lVar10 + 8);
    lVar10 = *(long *)(lVar10 + 0x10);
    if (puVar3 < (undefined8 *)*puVar1) {
      puVar3 = (undefined8 *)*puVar1;
    }
  }
  iVar9 = (int)((long)puVar3 - *(long *)(param_1 + 0x38) >> 4);
  iVar2 = iVar9 + 1;
  if (*(int *)(param_1 + 0xb8) < 0xf4241) {
    luaE_shrinkCI(param_1);
  }
  else {
    luaE_freeCI();
  }
  if (iVar2 < 0xf4241) {
    iVar9 = iVar9 + 8;
    if (-1 < iVar2) {
      iVar9 = iVar2;
    }
    iVar2 = iVar2 + (iVar9 >> 3) + 10;
    if (1000000 < iVar2) {
      iVar2 = 1000000;
    }
    if (iVar2 < *(int *)(param_1 + 0xb8)) {
      luaD_reallocstack(param_1);
      goto LAB_001f70c0;
    }
  }
  *(undefined8 *)(param_1 + 0xb0) = uVar11;
  return iVar6;
}


