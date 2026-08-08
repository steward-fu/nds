/*
 * Ghidra decompilation
 *
 * Function : discharge2reg
 * Address  : 00214e70
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void discharge2reg(long *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long local_28;
  undefined4 local_20;
  uint local_18 [2];
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = *param_2;
  if (uVar1 == 10) {
    if ((((uint)(int)*(short *)(param_2 + 1) >> 8 & 1) == 0) &&
       ((int)(uint)*(byte *)((long)param_1 + 0x3a) <= (int)*(short *)(param_2 + 1))) {
      *(char *)((long)param_1 + 0x3c) = *(char *)((long)param_1 + 0x3c) + -1;
    }
    uVar4 = (uint)*(byte *)((long)param_2 + 6);
    uVar1 = 6;
    if ((*(char *)((long)param_2 + 7) == '\b') &&
       (uVar1 = 7, *(byte *)((long)param_1 + 0x3a) <= *(byte *)((long)param_2 + 6))) {
      *(char *)((long)param_1 + 0x3c) = *(char *)((long)param_1 + 0x3c) + -1;
      uVar4 = (uint)*(byte *)((long)param_2 + 6);
    }
    uVar1 = uVar1 | (int)*(short *)(param_2 + 1) << 0xe | uVar4 << 0x17;
LAB_00214ecc:
    uVar1 = luaK_code(param_1,uVar1);
    lVar2 = *(long *)(*param_1 + 0x38);
    *param_2 = 0xc;
    param_2[1] = uVar1;
LAB_00214ee0:
    uVar4 = *(uint *)(lVar2 + (long)(int)uVar1 * 4);
    *(uint *)(lVar2 + (long)(int)uVar1 * 4) =
         uVar4 & 0xffffc000 | uVar4 & 0x3f | (param_3 & 0xff) << 6;
  }
  else {
    if (10 < uVar1) {
      if (uVar1 - 0xd < 2) {
        lVar3 = (long)(int)param_2[1];
        lVar2 = *(long *)(*param_1 + 0x38);
        if (uVar1 == 0xd) {
          *param_2 = 7;
          uVar1 = *(uint *)(lVar2 + lVar3 * 4) >> 6 & 0xff;
          param_2[1] = uVar1;
          goto LAB_00214f84;
        }
        *(uint *)(lVar2 + lVar3 * 4) = *(uint *)(lVar2 + lVar3 * 4) & 0x7fffff | 0x1000000;
        *param_2 = 0xc;
        uVar1 = param_2[1];
      }
      else {
LAB_00214f48:
        if (uVar1 != 0xc) goto LAB_00214f50;
        uVar1 = param_2[1];
        lVar2 = *(long *)(*param_1 + 0x38);
      }
      goto LAB_00214ee0;
    }
    if (uVar1 == 8) {
      uVar1 = param_2[1];
      *param_2 = 7;
LAB_00214f84:
      if (param_3 != uVar1) {
        luaK_code(param_1,uVar1 << 0x17 | param_3 << 6);
      }
      goto LAB_00214ef0;
    }
    if (uVar1 == 9) {
      uVar1 = param_2[1] << 0x17 | 5;
      goto LAB_00214ecc;
    }
    if (uVar1 == 4) {
      uVar1 = param_2[1];
      if (0x3ffff < (int)uVar1) goto LAB_0021512c;
      luaK_code(param_1,param_3 << 6 | uVar1 << 0xe | 1);
    }
    else if (uVar1 < 5) {
      if (uVar1 != 1) {
        if (uVar1 - 2 < 2) {
          luaK_code(param_1,param_3 << 6 | (uint)(uVar1 == 2) << 0x17 | 3);
          *param_2 = 7;
          param_2[1] = param_3;
        }
        goto LAB_00214f50;
      }
      luaK_nil(param_1,param_3,1);
    }
    else {
      if (uVar1 == 6) {
        local_18[0] = param_2[1];
        local_28 = (long)(int)local_18[0];
        local_20 = 2;
        local_10 = 0x13;
        uVar1 = addk(param_1,&local_28,local_18);
      }
      else {
        if (6 < uVar1) {
          if (uVar1 != 7) goto LAB_00214f48;
          uVar1 = param_2[1];
          goto LAB_00214f84;
        }
        if (uVar1 != 5) goto LAB_00214f50;
        local_18[0] = param_2[1];
        local_10 = 3;
        uVar1 = addk(param_1,local_18);
      }
      if ((int)uVar1 < 0x40000) {
        luaK_code(param_1,param_3 << 6 | uVar1 << 0xe | 1);
        *param_2 = 7;
        param_2[1] = param_3;
        goto LAB_00214f50;
      }
LAB_0021512c:
      luaK_code(param_1,param_3 << 6 | 2);
      luaK_code(param_1,uVar1 << 6 | 0x2e);
    }
  }
LAB_00214ef0:
  *param_2 = 7;
  param_2[1] = param_3;
LAB_00214f50:
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


