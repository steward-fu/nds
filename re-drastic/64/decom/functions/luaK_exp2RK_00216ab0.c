/*
 * Ghidra decompilation
 *
 * Function : luaK_exp2RK
 * Address  : 00216ab0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void luaK_exp2RK(long param_1,uint *param_2)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  long local_28;
  undefined4 local_20;
  uint local_18 [2];
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2[2] == param_2[3]) {
    luaK_dischargevars();
    uVar2 = *param_2;
    bVar1 = uVar2 == 5;
    if (bVar1) goto LAB_00216bf4;
LAB_00216af8:
    if (uVar2 < 5 || bVar1) {
      if (uVar2 == 4) {
        uVar2 = param_2[1];
        goto joined_r0x00216bd8;
      }
      if ((uVar2 != 0) && (*(int *)(param_1 + 0x2c) < 0x100)) {
        if (uVar2 == 1) {
          local_28 = *(long *)(*(long *)(param_1 + 0x10) + 0x50);
          local_20 = 0x45;
          local_10 = 0;
          uVar2 = addk(param_1,&local_28,local_18);
        }
        else {
          local_18[0] = (uint)(uVar2 == 2);
          local_10 = 1;
          uVar2 = addk(param_1,local_18);
        }
        uVar3 = (ulong)(uVar2 | 0x100);
        *param_2 = 4;
        param_2[1] = uVar2;
        goto LAB_00216b1c;
      }
    }
    else if (uVar2 == 6) {
      local_18[0] = param_2[1];
      local_28 = (long)(int)local_18[0];
      local_20 = 2;
      local_10 = 0x13;
      uVar2 = addk(param_1,&local_28,local_18);
      *param_2 = 4;
      param_2[1] = uVar2;
joined_r0x00216bd8:
      if ((int)uVar2 < 0x100) goto LAB_00216bdc;
    }
LAB_00216b10:
    uVar3 = luaK_exp2anyreg(param_1,param_2);
  }
  else {
    luaK_exp2anyreg();
    uVar2 = *param_2;
    bVar1 = uVar2 == 5;
    if (!bVar1) goto LAB_00216af8;
LAB_00216bf4:
    local_18[0] = param_2[1];
    local_10 = 3;
    uVar2 = addk(param_1,local_18);
    *param_2 = 4;
    param_2[1] = uVar2;
    if (0xff < (int)uVar2) goto LAB_00216b10;
LAB_00216bdc:
    uVar3 = (ulong)(uVar2 | 0x100);
  }
LAB_00216b1c:
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3,local_8 - ___stack_chk_guard,0);
}


