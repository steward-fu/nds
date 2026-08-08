/*
 * Ghidra decompilation
 *
 * Function : FUN_0021580c
 * Address  : 0021580c
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0021580c(long *param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  int iStack_c;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  if (*param_2 == 0xc) {
    lVar7 = *param_1;
    uVar4 = *(uint *)(*(long *)(lVar7 + 0x38) + (long)param_2[1] * 4);
    if ((uVar4 & 0x3f) == 0x1b) {
      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
      luaK_code(param_1,param_3 << 0xe ^ 0x4000U | (uVar4 >> 0x17) << 6 | 0x22);
      uVar1 = *(undefined4 *)(param_1 + 5);
      *(undefined4 *)(param_1 + 5) = 0xffffffff;
      iStack_c = luaK_code(param_1,0x7fff801e);
      luaK_concat(param_1,&iStack_c,uVar1);
      goto LAB_0021590c;
    }
LAB_00215954:
    uVar4 = *(byte *)((long)param_1 + 0x3c) + 1;
    if (*(byte *)(lVar7 + 0xc) < uVar4) {
      if (0xf9 < uVar4) {
                    /* WARNING: Subroutine does not return */
        luaX_syntaxerror(param_1[2],"function or expression too complex");
      }
      *(char *)(lVar7 + 0xc) = (char)uVar4;
    }
    *(char *)((long)param_1 + 0x3c) = (char)uVar4;
    discharge2reg(param_1,param_2,(uVar4 & 0xff) - 1);
    uVar4 = param_2[1];
    if (*param_2 == 7) goto LAB_0021585c;
  }
  else {
    if (*param_2 != 7) {
      lVar7 = *param_1;
      goto LAB_00215954;
    }
    uVar4 = param_2[1];
LAB_0021585c:
    if (((uVar4 >> 8 & 1) == 0) && ((int)(uint)*(byte *)((long)param_1 + 0x3a) <= (int)uVar4)) {
      *(char *)((long)param_1 + 0x3c) = *(char *)((long)param_1 + 0x3c) + -1;
      uVar4 = param_2[1];
    }
  }
  luaK_code(param_1,param_3 << 0xe | uVar4 << 0x17 | 0x3fe3);
  lVar7 = *param_1;
  uVar1 = *(undefined4 *)(param_1 + 5);
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  patchlistaux(param_1,0xffffffff,*(undefined4 *)(param_1 + 4),0xff);
  iVar2 = *(int *)(lVar7 + 0x18);
  iVar5 = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  if (iVar5 < iVar2) {
    lVar3 = *(long *)(lVar7 + 0x38);
  }
  else {
    lVar3 = luaM_growaux_(*(undefined8 *)(param_1[2] + 0x38),*(undefined8 *)(lVar7 + 0x38),
                          lVar7 + 0x18,4,0x7fffffff,"opcodes");
    iVar5 = *(int *)(param_1 + 4);
    *(long *)(lVar7 + 0x38) = lVar3;
  }
  *(undefined4 *)(lVar3 + (long)iVar5 * 4) = 0x7fff801e;
  lVar6 = param_1[2];
  iVar2 = *(int *)(param_1 + 4);
  lVar3 = *(long *)(lVar7 + 0x48);
  if (*(int *)(lVar7 + 0x1c) <= iVar2) {
    lVar3 = luaM_growaux_(*(undefined8 *)(lVar6 + 0x38),lVar3,lVar7 + 0x1c,4,0x7fffffff,"opcodes");
    iVar2 = *(int *)(param_1 + 4);
    lVar6 = param_1[2];
    *(long *)(lVar7 + 0x48) = lVar3;
  }
  *(undefined4 *)(lVar3 + (long)iVar2 * 4) = *(undefined4 *)(lVar6 + 8);
  iStack_c = *(int *)(param_1 + 4);
  *(int *)(param_1 + 4) = iStack_c + 1;
  luaK_concat(param_1,&iStack_c,uVar1);
LAB_0021590c:
  if (lStack_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iStack_c,lStack_8 - ___stack_chk_guard,0);
  }
  return;
}


