/*
 * Ghidra decompilation
 *
 * Function : luaK_dischargevars
 * Address  : 002160c0
 * Program  : drastic64
 */


void luaK_dischargevars(long *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
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
    uVar1 = luaK_code(param_1,uVar1 | (int)*(short *)(param_2 + 1) << 0xe | uVar4 << 0x17);
    *param_2 = 0xc;
    param_2[1] = uVar1;
    return;
  }
  if (uVar1 < 0xb) {
    if (uVar1 == 8) {
      *param_2 = 7;
      return;
    }
    if (uVar1 == 9) {
      uVar1 = luaK_code(param_1,param_2[1] << 0x17 | 5);
      *param_2 = 0xc;
      param_2[1] = uVar1;
    }
  }
  else if (uVar1 - 0xd < 2) {
    lVar3 = (long)(int)param_2[1];
    lVar2 = *(long *)(*param_1 + 0x38);
    if (uVar1 == 0xd) {
      *param_2 = 7;
      param_2[1] = *(uint *)(lVar2 + lVar3 * 4) >> 6 & 0xff;
    }
    else {
      *(uint *)(lVar2 + lVar3 * 4) = *(uint *)(lVar2 + lVar3 * 4) & 0x7fffff | 0x1000000;
      *param_2 = 0xc;
    }
  }
  return;
}


