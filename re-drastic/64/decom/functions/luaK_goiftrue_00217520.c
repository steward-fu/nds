/*
 * Ghidra decompilation
 *
 * Function : luaK_goiftrue
 * Address  : 00217520
 * Program  : drastic64
 */


void luaK_goiftrue(long *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint *puVar5;
  long lVar6;
  
  uVar2 = *param_2;
  if (uVar2 == 10) {
    if ((((uint)(int)*(short *)(param_2 + 1) >> 8 & 1) == 0) &&
       ((int)(uint)*(byte *)((long)param_1 + 0x3a) <= (int)*(short *)(param_2 + 1))) {
      *(char *)((long)param_1 + 0x3c) = *(char *)((long)param_1 + 0x3c) + -1;
    }
    uVar3 = (uint)*(byte *)((long)param_2 + 6);
    uVar2 = 6;
    if ((*(char *)((long)param_2 + 7) == '\b') &&
       (uVar2 = 7, *(byte *)((long)param_1 + 0x3a) <= *(byte *)((long)param_2 + 6))) {
      *(char *)((long)param_1 + 0x3c) = *(char *)((long)param_1 + 0x3c) + -1;
      uVar3 = (uint)*(byte *)((long)param_2 + 6);
    }
    uVar2 = luaK_code(param_1,uVar2 | (int)*(short *)(param_2 + 1) << 0xe | uVar3 << 0x17);
    *param_2 = 0xc;
    param_2[1] = uVar2;
    uVar3 = jumponcond(param_1,param_2,0);
  }
  else {
    if (uVar2 < 0xb) {
      if (uVar2 == 8) {
        *param_2 = 7;
        uVar3 = jumponcond(param_1,param_2,0);
        goto LAB_0021761c;
      }
      if (uVar2 == 9) {
        uVar2 = luaK_code(param_1,param_2[1] << 0x17 | 5);
        *param_2 = 0xc;
        param_2[1] = uVar2;
      }
      else if ((uVar2 < 7) && ((uVar3 = 0xffffffff, 3 < uVar2 || (uVar2 == 2)))) goto LAB_0021761c;
    }
    else if (uVar2 - 0xd < 2) {
      lVar6 = (long)(int)param_2[1];
      lVar4 = *(long *)(*param_1 + 0x38);
      if (uVar2 == 0xd) {
        *param_2 = 7;
        param_2[1] = *(uint *)(lVar4 + lVar6 * 4) >> 6 & 0xff;
      }
      else {
        *(uint *)(lVar4 + lVar6 * 4) = *(uint *)(lVar4 + lVar6 * 4) & 0x7fffff | 0x1000000;
        *param_2 = 0xc;
      }
    }
    else if (uVar2 == 0xb) {
      puVar1 = (uint *)(*(long *)(*param_1 + 0x38) + (long)(int)param_2[1] * 4);
      puVar5 = puVar1;
      if ((0 < (int)param_2[1]) &&
         (puVar5 = puVar1 + -1, -1 < (char)(&luaP_opmodes)[puVar1[-1] & 0x3f])) {
        puVar5 = puVar1;
      }
      uVar2 = *puVar5 & 0xffffc03f;
      uVar3 = uVar2 | 0x40;
      if ((*puVar5 & 0x3fc0) != 0) {
        uVar3 = uVar2;
      }
      *puVar5 = uVar3;
      uVar3 = param_2[1];
      goto LAB_0021761c;
    }
    uVar3 = jumponcond(param_1,param_2,0);
  }
LAB_0021761c:
  luaK_concat(param_1,param_2 + 3,uVar3);
  uVar2 = param_2[2];
  *(undefined4 *)((long)param_1 + 0x24) = *(undefined4 *)(param_1 + 4);
  luaK_concat(param_1,param_1 + 5,uVar2);
  param_2[2] = 0xffffffff;
  return;
}


