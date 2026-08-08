/*
 * Ghidra decompilation
 *
 * Function : luaK_goiffalse
 * Address  : 00217740
 * Program  : drastic64
 */


void luaK_goiffalse(long *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = *param_2;
  if (uVar1 == 10) {
    if ((((uint)(int)*(short *)(param_2 + 1) >> 8 & 1) == 0) &&
       ((int)(uint)*(byte *)((long)param_1 + 0x3a) <= (int)*(short *)(param_2 + 1))) {
      *(char *)((long)param_1 + 0x3c) = *(char *)((long)param_1 + 0x3c) + -1;
    }
    uVar2 = (uint)*(byte *)((long)param_2 + 6);
    uVar1 = 6;
    if ((*(char *)((long)param_2 + 7) == '\b') &&
       (uVar1 = 7, *(byte *)((long)param_1 + 0x3a) <= *(byte *)((long)param_2 + 6))) {
      *(char *)((long)param_1 + 0x3c) = *(char *)((long)param_1 + 0x3c) + -1;
      uVar2 = (uint)*(byte *)((long)param_2 + 6);
    }
    uVar1 = luaK_code(param_1,uVar1 | (int)*(short *)(param_2 + 1) << 0xe | uVar2 << 0x17);
    *param_2 = 0xc;
    param_2[1] = uVar1;
  }
  else if (uVar1 < 0xb) {
    if (uVar1 == 8) {
      *param_2 = 7;
    }
    else {
      if (uVar1 != 9) {
        if (uVar1 == 3) {
          uVar2 = 0xffffffff;
          goto LAB_002177a0;
        }
        goto LAB_00217824;
      }
      uVar1 = luaK_code(param_1,param_2[1] << 0x17 | 5);
      *param_2 = 0xc;
      param_2[1] = uVar1;
    }
  }
  else {
    if (1 < uVar1 - 0xd) {
      if (uVar1 == 0xb) {
        uVar2 = param_2[1];
        goto LAB_002177a0;
      }
LAB_00217824:
      uVar2 = 0xffffffff;
      if (uVar1 != 1) {
        uVar2 = jumponcond(param_1,param_2,1);
      }
      goto LAB_002177a0;
    }
    lVar4 = (long)(int)param_2[1];
    lVar3 = *(long *)(*param_1 + 0x38);
    if (uVar1 == 0xd) {
      *param_2 = 7;
      param_2[1] = *(uint *)(lVar3 + lVar4 * 4) >> 6 & 0xff;
    }
    else {
      *(uint *)(lVar3 + lVar4 * 4) = *(uint *)(lVar3 + lVar4 * 4) & 0x7fffff | 0x1000000;
      *param_2 = 0xc;
    }
  }
  uVar2 = jumponcond(param_1,param_2,1);
LAB_002177a0:
  luaK_concat(param_1,param_2 + 2,uVar2);
  uVar1 = param_2[3];
  *(undefined4 *)((long)param_1 + 0x24) = *(undefined4 *)(param_1 + 4);
  luaK_concat(param_1,param_1 + 5,uVar1);
  param_2[3] = 0xffffffff;
  return;
}


