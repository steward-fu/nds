/*
 * Ghidra decompilation
 *
 * Function : exp2reg
 * Address  : 00215570
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void exp2reg(long *param_1,int *param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  discharge2reg();
  if (*param_2 == 0xb) {
    luaK_concat(param_1,param_2 + 2,param_2[1]);
  }
  iVar3 = param_2[2];
  iVar7 = param_2[3];
  if (iVar3 == iVar7) goto LAB_002155c0;
  if (iVar3 != -1) {
    do {
      puVar1 = (uint *)(*(long *)(*param_1 + 0x38) + (long)iVar3 * 4);
      puVar6 = puVar1;
      if ((0 < iVar3) && (puVar6 = puVar1 + -1, -1 < (char)(&luaP_opmodes)[puVar1[-1] & 0x3f])) {
        puVar6 = puVar1;
      }
      if ((*puVar6 & 0x3f) != 0x23) goto LAB_00215678;
      iVar2 = (*(uint *)(*(long *)(*param_1 + 0x38) + (long)iVar3 * 4) >> 0xe) - 0x1ffff;
    } while ((iVar2 != -1) && (iVar3 = iVar3 + 1 + iVar2, iVar3 != -1));
  }
  if (iVar7 == -1) {
    uVar4 = 0xffffffff;
    uVar5 = 0xffffffff;
  }
  else {
    iVar3 = iVar7;
    do {
      puVar1 = (uint *)(*(long *)(*param_1 + 0x38) + (long)iVar3 * 4);
      puVar6 = puVar1;
      if ((0 < iVar3) && (puVar6 = puVar1 + -1, -1 < (char)(&luaP_opmodes)[puVar1[-1] & 0x3f])) {
        puVar6 = puVar1;
      }
      if ((*puVar6 & 0x3f) != 0x23) goto LAB_00215678;
      iVar2 = (*(uint *)(*(long *)(*param_1 + 0x38) + (long)iVar3 * 4) >> 0xe) - 0x1ffff;
      if (iVar2 == -1) {
        uVar4 = 0xffffffff;
        uVar5 = 0xffffffff;
        goto LAB_00215718;
      }
      iVar3 = iVar3 + 1 + iVar2;
    } while (iVar3 != -1);
    uVar5 = 0xffffffff;
    uVar4 = 0xffffffff;
  }
  goto LAB_00215718;
LAB_00215678:
  uVar8 = 0xffffffff;
  if (*param_2 != 0xb) {
    uVar5 = *(undefined4 *)(param_1 + 5);
    *(undefined4 *)(param_1 + 5) = 0xffffffff;
    local_c = luaK_code(param_1,0x7fff801e);
    luaK_concat(param_1,&local_c,uVar5);
    uVar8 = local_c;
  }
  *(undefined4 *)((long)param_1 + 0x24) = *(undefined4 *)(param_1 + 4);
  uVar4 = luaK_code(param_1,param_3 << 6 | 0x4003);
  *(undefined4 *)((long)param_1 + 0x24) = *(undefined4 *)(param_1 + 4);
  uVar5 = luaK_code(param_1,param_3 << 6 | 0x800003);
  *(undefined4 *)((long)param_1 + 0x24) = *(undefined4 *)(param_1 + 4);
  luaK_concat(param_1,param_1 + 5,uVar8);
  iVar7 = param_2[3];
LAB_00215718:
  uVar8 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((long)param_1 + 0x24) = uVar8;
  patchlistaux(param_1,iVar7,uVar8,param_3,uVar4);
  patchlistaux(param_1,param_2[2],uVar8,param_3,uVar5);
LAB_002155c0:
  *param_2 = 7;
  param_2[1] = param_3;
  *(undefined8 *)(param_2 + 2) = 0xffffffffffffffff;
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_8 - ___stack_chk_guard,0);
  }
  return;
}


