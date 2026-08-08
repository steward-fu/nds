/*
 * Ghidra decompilation
 *
 * Function : close_func.isra.0
 * Address  : 001fc370
 * Program  : drastic64
 */


void close_func_isra_0(long **param_1,long param_2)

{
  uint uVar1;
  short sVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  
  plVar8 = *param_1;
  lVar7 = *plVar8;
  luaK_ret(plVar8,0,0);
  leaveblock(plVar8);
  uVar4 = luaM_realloc_(param_2,*(undefined8 *)(lVar7 + 0x38),(long)*(int *)(lVar7 + 0x18) << 2,
                        (long)*(int *)(plVar8 + 4) << 2);
  uVar1 = *(uint *)(plVar8 + 4);
  *(uint *)(lVar7 + 0x18) = uVar1;
  *(undefined8 *)(lVar7 + 0x38) = uVar4;
  uVar4 = luaM_realloc_(param_2,*(undefined8 *)(lVar7 + 0x48),(long)*(int *)(lVar7 + 0x1c) << 2,
                        -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2);
  iVar3 = *(int *)((long)plVar8 + 0x2c);
  *(undefined8 *)(lVar7 + 0x48) = uVar4;
  *(undefined4 *)(lVar7 + 0x1c) = *(undefined4 *)(plVar8 + 4);
  uVar4 = luaM_realloc_(param_2,*(undefined8 *)(lVar7 + 0x30),(long)*(int *)(lVar7 + 0x14) << 4,
                        (long)iVar3 << 4);
  iVar3 = *(int *)(plVar8 + 6);
  *(undefined8 *)(lVar7 + 0x30) = uVar4;
  *(undefined4 *)(lVar7 + 0x14) = *(undefined4 *)((long)plVar8 + 0x2c);
  uVar4 = luaM_realloc_(param_2,*(undefined8 *)(lVar7 + 0x40),(long)*(int *)(lVar7 + 0x20) << 3,
                        (long)iVar3 << 3);
  sVar2 = *(short *)(plVar8 + 7);
  *(undefined8 *)(lVar7 + 0x40) = uVar4;
  *(undefined4 *)(lVar7 + 0x20) = *(undefined4 *)(plVar8 + 6);
  uVar4 = luaM_realloc_(param_2,*(undefined8 *)(lVar7 + 0x50),(long)*(int *)(lVar7 + 0x24) << 4,
                        (long)sVar2 << 4);
  *(int *)(lVar7 + 0x24) = (int)*(short *)(plVar8 + 7);
  *(undefined8 *)(lVar7 + 0x50) = uVar4;
  uVar4 = luaM_realloc_(param_2,*(undefined8 *)(lVar7 + 0x58),(long)*(int *)(lVar7 + 0x10) << 4,
                        (ulong)*(byte *)((long)plVar8 + 0x3b) << 4);
  lVar6 = *(long *)(param_2 + 0x18);
  plVar5 = (long *)plVar8[1];
  *(undefined8 *)(lVar7 + 0x58) = uVar4;
  *(uint *)(lVar7 + 0x10) = (uint)*(byte *)((long)plVar8 + 0x3b);
  lVar6 = *(long *)(lVar6 + 0x18);
  *param_1 = plVar5;
  if (lVar6 < 1) {
    return;
  }
  luaC_step(param_2);
  return;
}


