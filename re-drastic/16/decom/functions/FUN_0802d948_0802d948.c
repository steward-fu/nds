/*
 * Ghidra decompilation
 *
 * Function : FUN_0802d948
 * Address  : 0802d948
 * Program  : drastic16
 */


void FUN_0802d948(void *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = param_2 & 0xff;
  uVar4 = param_2 >> 8;
  if (uVar3 == 0) {
    uVar3 = 0x100;
  }
  if ((uVar4 == uVar3) || (uVar3 == 0x100 && uVar4 == 0)) {
    memset(param_1,0,0x20);
    return;
  }
  if (uVar4 <= uVar3) {
    param_2 = param_2 >> 0xd;
    uVar1 = uVar3 - 1 >> 5;
    uVar3 = ~(-2 << (uVar3 - 1 & 0x1f));
    memset(param_1,0,0x20);
    uVar4 = -1 << (uVar4 & 0x1f);
    if (param_2 == uVar1) {
      *(uint *)((int)param_1 + param_2 * 4) = *(uint *)((int)param_1 + param_2 * 4) | uVar3 & uVar4;
      return;
    }
    *(uint *)((int)param_1 + param_2 * 4) = *(uint *)((int)param_1 + param_2 * 4) | uVar4;
    uVar4 = param_2 + 1;
    if (param_2 + 1 < uVar1) {
      memset((void *)((int)param_1 + param_2 * 4 + 4),-1,((0x3fffffff - param_2) + uVar1) * 4);
      uVar4 = uVar1;
    }
    *(uint *)((int)param_1 + uVar4 * 4) = *(uint *)((int)param_1 + uVar4 * 4) | uVar3;
    return;
  }
  uVar1 = uVar3 >> 5;
  uVar2 = uVar4 - 1 >> 5;
  uVar4 = -2 << (uVar4 - 1 & 0x1f);
  uVar3 = -1 << (uVar3 & 0x1f);
  memset(param_1,0xff,0x20);
  if (uVar1 == uVar2) {
    *(uint *)((int)param_1 + uVar1 * 4) = *(uint *)((int)param_1 + uVar1 * 4) & ~(uVar3 & ~uVar4);
    return;
  }
  uVar5 = uVar1 + 1;
  *(uint *)((int)param_1 + uVar1 * 4) = *(uint *)((int)param_1 + uVar1 * 4) & ~uVar3;
  if (uVar5 < uVar2) {
    memset((void *)((int)param_1 + uVar1 * 4 + 4),0,((uVar2 + 0x3fffffff) - uVar1) * 4);
    uVar5 = ((uVar2 - 1) + uVar5) - uVar1;
  }
  *(uint *)((int)param_1 + uVar5 * 4) = *(uint *)((int)param_1 + uVar5 * 4) & uVar4;
  return;
}


