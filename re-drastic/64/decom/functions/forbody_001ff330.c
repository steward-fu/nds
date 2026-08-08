/*
 * Ghidra decompilation
 *
 * Function : forbody
 * Address  : 001ff330
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void forbody(long param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  uint uVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  undefined4 uVar7;
  long *plVar8;
  short *psVar9;
  long lVar11;
  long lVar12;
  long *plVar13;
  long local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined local_28;
  undefined2 local_27;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined local_10;
  undefined2 local_f;
  long local_8;
  short *psVar10;
  
  plVar13 = *(long **)(param_1 + 0x30);
  bVar5 = *(char *)((long)plVar13 + 0x3a) + 3;
  uVar1 = (uint)bVar5;
  *(byte *)((long)plVar13 + 0x3a) = bVar5;
  iVar6 = *(int *)((long)plVar13 + 0x34);
  lVar12 = **(long **)(plVar13[2] + 0x58);
  lVar11 = *(long *)(*plVar13 + 0x50);
  sVar2 = *(short *)(lVar12 + (long)(int)((uVar1 - 2) + iVar6) * 2);
  sVar3 = *(short *)(lVar12 + (long)(int)((uVar1 - 1) + iVar6) * 2);
  uVar7 = *(undefined4 *)(plVar13 + 4);
  *(undefined4 *)
   (lVar11 + (long)*(short *)(lVar12 + (long)(int)((uVar1 - 3) + iVar6) * 2) * 0x10 + 8) = uVar7;
  *(undefined4 *)(lVar11 + (long)sVar2 * 0x10 + 8) = uVar7;
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(lVar11 + (long)sVar3 * 0x10 + 8) = uVar7;
  if (*(int *)(param_1 + 0x10) != 0x103) {
                    /* WARNING: Subroutine does not return */
    error_expected(param_1,0x103);
  }
  luaX_next();
  if (param_5 == 0) {
    iVar6 = luaK_jump(plVar13);
  }
  else {
    iVar6 = luaK_codeABx(plVar13,0x28,param_2,0x1fffe);
  }
  local_28 = *(undefined *)((long)plVar13 + 0x3a);
  plVar8 = *(long **)(param_1 + 0x30);
  local_38 = plVar13[3];
  local_27 = 0;
  lVar12 = *plVar8;
  lVar11 = plVar8[2];
  iVar4 = *(int *)((long)plVar8 + 0x34);
  uStack_2c = *(undefined4 *)(*(long *)(plVar13[2] + 0x58) + 0x18);
  local_30 = *(undefined4 *)(*(long *)(plVar13[2] + 0x58) + 0x28);
  plVar13[3] = (long)&local_38;
  bVar5 = (char)param_4 + *(char *)((long)plVar8 + 0x3a);
  *(byte *)((long)plVar8 + 0x3a) = bVar5;
  lVar11 = **(long **)(lVar11 + 0x58);
  uVar7 = *(undefined4 *)(plVar8 + 4);
  lVar12 = *(long *)(lVar12 + 0x50);
  psVar9 = (short *)(lVar11 + (((long)iVar4 - (long)param_4) + (ulong)bVar5) * 2);
  do {
    psVar10 = psVar9 + 1;
    *(undefined4 *)(lVar12 + (long)*psVar9 * 0x10 + 8) = uVar7;
    psVar9 = psVar10;
  } while (psVar10 !=
           (short *)(lVar11 + 2 +
                    (((ulong)(param_4 - 1) - (long)param_4) + (long)iVar4 + (ulong)bVar5) * 2));
  luaK_reserveregs(plVar13,param_4);
  lVar12 = *(long *)(param_1 + 0x30);
  local_10 = *(undefined *)(lVar12 + 0x3a);
  local_20 = *(undefined8 *)(lVar12 + 0x18);
  local_f = 0;
  lVar11 = *(long *)(*(long *)(lVar12 + 0x10) + 0x58);
  uStack_14 = *(undefined4 *)(lVar11 + 0x18);
  local_18 = *(undefined4 *)(lVar11 + 0x28);
  iVar4 = *(int *)(param_1 + 0x10);
  *(undefined8 **)(lVar12 + 0x18) = &local_20;
  while( true ) {
    if ((iVar4 - 0x104U < 0x1e) && ((1L << ((ulong)(iVar4 - 0x104U) & 0x3f) & 0x20020007U) != 0))
    goto LAB_001ff550;
    if (iVar4 == 0x112) break;
    statement(param_1);
    iVar4 = *(int *)(param_1 + 0x10);
  }
  statement(param_1);
LAB_001ff550:
  leaveblock(lVar12);
  leaveblock(plVar13);
  luaK_patchtohere(plVar13,iVar6);
  if (param_5 == 0) {
    luaK_codeABC(plVar13,0x29,param_2,0,param_4);
    luaK_fixline(plVar13,param_3);
    uVar7 = luaK_codeABx(plVar13,0x2a,param_2 + 2,0x1fffe);
  }
  else {
    uVar7 = luaK_codeABx(plVar13,0x27,param_2,0x1fffe);
  }
  luaK_patchlist(plVar13,uVar7,iVar6 + 1);
  luaK_fixline(plVar13,param_3);
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


