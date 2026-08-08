/*
 * Ghidra decompilation
 *
 * Function : luaK_jump
 * Address  : 00215420
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void luaK_jump(long *param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar6 = *param_1;
  uVar1 = *(undefined4 *)(param_1 + 5);
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  patchlistaux(param_1,0xffffffff,*(undefined4 *)(param_1 + 4),0xff,*(undefined4 *)(param_1 + 4),
               &__stack_chk_guard,0);
  iVar2 = *(int *)(lVar6 + 0x18);
  iVar4 = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  if (iVar4 < iVar2) {
    lVar3 = *(long *)(lVar6 + 0x38);
  }
  else {
    lVar3 = luaM_growaux_(*(undefined8 *)(param_1[2] + 0x38),*(undefined8 *)(lVar6 + 0x38),
                          lVar6 + 0x18,4,0x7fffffff,"opcodes");
    iVar4 = *(int *)(param_1 + 4);
    *(long *)(lVar6 + 0x38) = lVar3;
  }
  *(undefined4 *)(lVar3 + (long)iVar4 * 4) = 0x7fff801e;
  lVar5 = param_1[2];
  iVar2 = *(int *)(param_1 + 4);
  lVar3 = *(long *)(lVar6 + 0x48);
  if (*(int *)(lVar6 + 0x1c) <= iVar2) {
    lVar3 = luaM_growaux_(*(undefined8 *)(lVar5 + 0x38),lVar3,lVar6 + 0x1c,4,0x7fffffff,"opcodes");
    iVar2 = *(int *)(param_1 + 4);
    lVar5 = param_1[2];
    *(long *)(lVar6 + 0x48) = lVar3;
  }
  *(undefined4 *)(lVar3 + (long)iVar2 * 4) = *(undefined4 *)(lVar5 + 8);
  local_c = *(int *)(param_1 + 4);
  *(int *)(param_1 + 4) = local_c + 1;
  luaK_concat(param_1,&local_c,uVar1);
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_c,local_8 - ___stack_chk_guard,0);
}


