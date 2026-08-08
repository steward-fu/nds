/*
 * Ghidra decompilation
 *
 * Function : FUN_00216c5c
 * Address  : 00216c5c
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00216c5c(long param_1,uint param_2,uint param_3,int *param_4,int *param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iStack_c;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  iVar2 = luaK_exp2RK(param_1,param_4,0);
  iVar3 = luaK_exp2RK(param_1,param_5);
  if (((*param_5 == 7) && (((uint)param_5[1] >> 8 & 1) == 0)) &&
     ((int)(uint)*(byte *)(param_1 + 0x3a) <= param_5[1])) {
    *(char *)(param_1 + 0x3c) = *(char *)(param_1 + 0x3c) + -1;
  }
  if (((*param_4 == 7) && (((uint)param_4[1] >> 8 & 1) == 0)) &&
     ((int)(uint)*(byte *)(param_1 + 0x3a) <= param_4[1])) {
    *(char *)(param_1 + 0x3c) = *(char *)(param_1 + 0x3c) + -1;
  }
  uVar4 = 0x40;
  iVar5 = iVar2;
  if (((param_3 ^ 1) & (uint)(param_2 != 0x1f)) == 0) {
    uVar4 = param_3 << 6;
    iVar5 = iVar3;
    iVar3 = iVar2;
  }
  luaK_code(param_1,iVar5 << 0xe | iVar3 << 0x17 | param_2 | uVar4);
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  iStack_c = luaK_code(param_1,0x7fff801e);
  luaK_concat(param_1,&iStack_c,uVar1);
  *param_4 = 0xb;
  param_4[1] = iStack_c;
  if (lStack_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lStack_8 - ___stack_chk_guard,0);
}


