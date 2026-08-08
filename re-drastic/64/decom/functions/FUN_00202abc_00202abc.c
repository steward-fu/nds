/*
 * Ghidra decompilation
 *
 * Function : FUN_00202abc
 * Address  : 00202abc
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00202abc(long *param_1,int *param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  float fVar5;
  long alStack_18 [2];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  while (uVar1 = *(uint *)(param_1 + 1), uVar1 != 3) {
    if (uVar1 == 0x13) {
      uVar3 = 1;
      *param_2 = *(int *)param_1;
      goto LAB_00202b50;
    }
    if (((uVar1 & 0xf) != 4) ||
       (lVar2 = luaO_str2num(*param_1 + 0x20,alStack_18), lVar4 = *param_1, param_1 = alStack_18,
       lVar2 != *(long *)(lVar4 + 0x10) + 1)) goto LAB_00202b4c;
  }
  fVar5 = (float)(int)*(float *)param_1;
  if ((*(float *)param_1 == fVar5) && ((-2.147484e+09 <= fVar5 && (fVar5 < 2.147484e+09)))) {
    uVar3 = 1;
    *param_2 = (int)fVar5;
    goto LAB_00202b50;
  }
LAB_00202b4c:
  uVar3 = 0;
LAB_00202b50:
  if (lStack_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3,lStack_8 - ___stack_chk_guard,0);
}


