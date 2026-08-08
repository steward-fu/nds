/*
 * Ghidra decompilation
 *
 * Function : luaD_hook
 * Address  : 001f61d0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void luaD_hook(long param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined4 local_88 [10];
  undefined4 local_60;
  long local_10;
  long local_8;
  
  pcVar6 = *(code **)(param_1 + 0xa8);
  local_8 = ___stack_chk_guard;
  if ((pcVar6 != (code *)0x0) && (*(char *)(param_1 + 0xc9) != '\0')) {
    lVar5 = *(long *)(param_1 + 0x20);
    lVar8 = *(long *)(param_1 + 0x38);
    lVar3 = *(long *)(param_1 + 0x10);
    lVar7 = *(long *)(lVar5 + 8);
    lVar4 = *(long *)(param_1 + 0x30) - lVar3;
    lVar9 = lVar3 - lVar8;
    local_88[0] = param_2;
    local_60 = param_3;
    local_10 = lVar5;
    if (lVar4 < 0x141) {
      if (1000000 < *(int *)(param_1 + 0xb8)) {
                    /* WARNING: Subroutine does not return */
        luaD_throw(param_1,6,lVar4,1000000,0);
      }
      iVar2 = *(int *)(param_1 + 0xb8) * 2;
      if (1000000 < iVar2) {
        iVar2 = 1000000;
      }
      iVar1 = (int)(lVar9 >> 4) + 0x19;
      if (iVar1 < iVar2) {
        iVar1 = iVar2;
      }
      if (1000000 < iVar1) {
        luaD_reallocstack(param_1,0xf4308);
                    /* WARNING: Subroutine does not return */
        luaG_runerror(param_1,"stack overflow");
      }
      luaD_reallocstack();
      lVar3 = *(long *)(param_1 + 0x10);
    }
    *(long *)(lVar5 + 8) = lVar3 + 0x140;
    *(undefined *)(param_1 + 0xc9) = 0;
    *(byte *)(lVar5 + 0x42) = *(byte *)(lVar5 + 0x42) | 4;
    (*pcVar6)(param_1,local_88);
    lVar3 = *(long *)(param_1 + 0x38);
    *(undefined *)(param_1 + 0xc9) = 1;
    *(long *)(lVar5 + 8) = lVar3 + (lVar7 - lVar8);
    *(long *)(param_1 + 0x10) = lVar3 + lVar9;
    *(byte *)(lVar5 + 0x42) = *(byte *)(lVar5 + 0x42) & 0xfb;
  }
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(&__stack_chk_guard,local_8 - ___stack_chk_guard,0);
  }
  return;
}


