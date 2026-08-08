/*
 * Ghidra decompilation
 *
 * Function : FUN_001fa4cc
 * Address  : 001fa4cc
 * Program  : drastic64
 */


void FUN_001fa4cc(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_1 + 0x18);
  lVar5 = (long)*(int *)(lVar7 + 0xd0);
  lVar3 = 0;
  if (lVar5 != 0) {
    lVar3 = 0x7fffffffffffffff / lVar5;
  }
  lVar2 = *(long *)(lVar7 + 0x18) / 200;
  lVar5 = lVar5 + lVar2 * lVar5;
  if (lVar3 <= lVar2 + 1) {
    lVar5 = 0x7fffffffffffffff;
  }
  if (*(char *)(lVar7 + 0x57) == '\0') {
    luaE_setdebt(lVar7,0xffffffffffff8300);
    return;
  }
  do {
    lVar3 = singlestep(param_1);
    lVar5 = lVar5 - lVar3;
    if (lVar5 + 0xc7f < 0 != SCARRY8(lVar5,0xc7f)) {
      if (*(char *)(lVar7 + 0x55) != '\a') {
        uVar6 = 0;
        lVar3 = 0;
        if ((long)*(int *)(lVar7 + 0xd0) != 0) {
          lVar3 = lVar5 / (long)*(int *)(lVar7 + 0xd0);
        }
        luaE_setdebt(lVar7,lVar3 * 200);
        lVar3 = *(long *)(param_1 + 0x18);
        lVar5 = *(long *)(lVar3 + 0x98);
        while( true ) {
          if (lVar5 == 0) {
            *(undefined4 *)(lVar3 + 200) = 0;
            return;
          }
          if (*(uint *)(lVar3 + 200) <= uVar6) break;
          GCTM(param_1,1);
          lVar5 = *(long *)(lVar3 + 0x98);
          uVar6 = uVar6 + 1;
        }
        *(uint *)(lVar3 + 200) = *(uint *)(lVar3 + 200) * 2;
        return;
      }
      break;
    }
  } while (*(char *)(lVar7 + 0x55) != '\a');
  uVar4 = *(ulong *)(lVar7 + 0x28) / 100;
  uVar1 = 0;
  if (uVar4 != 0) {
    uVar1 = 0x7fffffffffffffff / uVar4;
  }
  lVar5 = uVar4 * (long)*(int *)(lVar7 + 0xcc);
  if ((long)uVar1 <= (long)*(int *)(lVar7 + 0xcc)) {
    lVar5 = 0x7fffffffffffffff;
  }
  luaE_setdebt(lVar7,(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 0x18)) - lVar5);
  return;
}


