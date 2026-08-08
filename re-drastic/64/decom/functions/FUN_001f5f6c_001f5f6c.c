/*
 * Ghidra decompilation
 *
 * Function : FUN_001f5f6c
 * Address  : 001f5f6c
 * Program  : drastic64
 */


void FUN_001f5f6c(long param_1,ulong param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined4 *puVar5;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined4 *puVar6;
  
  uVar2 = *(uint *)(param_1 + 0xb8);
  iVar3 = (int)param_2;
  lVar9 = *(long *)(param_1 + 0x38);
  uVar10 = -(param_2 >> 0x1f & 1) & 0xfffffff000000000 | (param_2 & 0xffffffff) << 4;
  uVar8 = -(ulong)(uVar2 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar2 << 4;
  lVar4 = luaM_realloc_(param_1,lVar9,uVar8,uVar10);
  *(long *)(param_1 + 0x38) = lVar4;
  if ((int)uVar2 < iVar3) {
    puVar5 = (undefined4 *)(lVar4 + uVar8 + 8);
    do {
      puVar6 = puVar5 + 4;
      *puVar5 = 0;
      puVar5 = puVar6;
    } while (puVar6 != (undefined4 *)
                       (lVar4 + ((ulong)((iVar3 + -1) - uVar2) + (long)(int)uVar2) * 0x10 + 0x18));
  }
  plVar7 = *(long **)(param_1 + 0x40);
  *(long *)(param_1 + 0x10) = lVar4 + (*(long *)(param_1 + 0x10) - lVar9);
  *(ulong *)(param_1 + 0x30) = lVar4 + (uVar10 - 0x50);
  *(int *)(param_1 + 0xb8) = iVar3;
  for (; plVar7 != (long *)0x0; plVar7 = (long *)plVar7[2]) {
    *plVar7 = lVar4 + (*plVar7 - lVar9);
  }
  for (plVar7 = *(long **)(param_1 + 0x20); plVar7 != (long *)0x0; plVar7 = (long *)plVar7[2]) {
    lVar1 = plVar7[4];
    if ((*(byte *)((long)plVar7 + 0x42) & 2) != 0) {
      lVar1 = lVar4 + (plVar7[4] - lVar9);
    }
    plVar7[4] = lVar1;
    plVar7[1] = (plVar7[1] - lVar9) + lVar4;
    *plVar7 = (*plVar7 - lVar9) + lVar4;
  }
  return;
}


