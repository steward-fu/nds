/*
 * Ghidra decompilation
 *
 * Function : luaC_fullgc
 * Address  : 001fa650
 * Program  : drastic64
 */


void luaC_fullgc(long param_1,int param_2)

{
  byte bVar1;
  ulong uVar2;
  long **pplVar3;
  long **pplVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long **pplVar8;
  
  lVar7 = *(long *)(param_1 + 0x18);
  if (param_2 != 0) {
    *(undefined *)(lVar7 + 0x56) = 1;
  }
  bVar1 = *(byte *)(lVar7 + 0x55);
  lVar6 = lVar7;
  if (bVar1 < 2) {
    pplVar3 = *(long ***)(lVar7 + 0x58);
    *(undefined *)(lVar7 + 0x55) = 2;
    pplVar8 = (long **)(lVar7 + 0x58);
    while( true ) {
      pplVar4 = pplVar3;
      if (pplVar3 == (long **)0x0) break;
      if ((byte)((*(byte *)(lVar6 + 0x54) ^ 3) & (*(byte *)((long)pplVar3 + 9) ^ 3)) == 0) {
        *pplVar8 = *pplVar3;
        freeobj(param_1);
        lVar6 = *(long *)(param_1 + 0x18);
        pplVar4 = (long **)*pplVar8;
      }
      else {
        *(byte *)((long)pplVar3 + 9) =
             *(byte *)((long)pplVar3 + 9) & 0xf8 | *(byte *)(lVar6 + 0x54) & 3;
        pplVar4 = (long **)*pplVar3;
        pplVar8 = pplVar3;
      }
      pplVar3 = pplVar4;
      pplVar4 = pplVar3;
      if ((pplVar3 == (long **)0x0) || (pplVar4 = pplVar8, (long **)(lVar7 + 0x58) != pplVar8))
      break;
    }
    *(long ***)(lVar7 + 0x60) = pplVar4;
    bVar1 = *(byte *)(lVar6 + 0x55);
  }
  if ((0x80 >> (bVar1 & 0x1f) & 1U) == 0) {
    do {
      singlestep(param_1);
    } while ((0x80 >> (*(byte *)(lVar6 + 0x55) & 0x1f) & 1U) == 0);
    lVar6 = *(long *)(param_1 + 0x18);
    bVar1 = *(byte *)(lVar6 + 0x55);
  }
  if ((-0x81 >> (bVar1 & 0x1f) & 1U) == 0) {
    do {
      singlestep(param_1);
    } while ((-0x81 >> (*(byte *)(lVar6 + 0x55) & 0x1f) & 1U) == 0);
    lVar6 = *(long *)(param_1 + 0x18);
    bVar1 = *(byte *)(lVar6 + 0x55);
  }
  if ((0x40 >> (bVar1 & 0x1f) & 1U) == 0) {
    do {
      singlestep(param_1);
    } while ((0x40 >> (*(byte *)(lVar6 + 0x55) & 0x1f) & 1U) == 0);
    lVar6 = *(long *)(param_1 + 0x18);
    bVar1 = *(byte *)(lVar6 + 0x55);
  }
  while ((0x80 >> (bVar1 & 0x1f) & 1U) == 0) {
    singlestep(param_1);
    bVar1 = *(byte *)(lVar6 + 0x55);
  }
  *(undefined *)(lVar7 + 0x56) = 0;
  uVar5 = *(ulong *)(lVar7 + 0x28) / 100;
  uVar2 = 0;
  if (uVar5 != 0) {
    uVar2 = 0x7fffffffffffffff / uVar5;
  }
  lVar6 = uVar5 * (long)*(int *)(lVar7 + 0xcc);
  if ((long)uVar2 <= (long)*(int *)(lVar7 + 0xcc)) {
    lVar6 = 0x7fffffffffffffff;
  }
  luaE_setdebt(lVar7,(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 0x18)) - lVar6);
  return;
}


