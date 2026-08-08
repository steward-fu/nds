/*
 * Ghidra decompilation
 *
 * Function : luaS_resize
 * Address  : 00200050
 * Program  : drastic64
 */


void luaS_resize(long param_1,ulong param_2)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  
  lVar10 = *(long *)(param_1 + 0x18);
  uVar1 = *(uint *)(lVar10 + 0x3c);
  uVar9 = (ulong)uVar1;
  iVar3 = (int)param_2;
  if ((int)uVar1 < iVar3) {
    lVar8 = luaM_realloc_(param_1,*(undefined8 *)(lVar10 + 0x30),
                          -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | uVar9 << 3,
                          -(param_2 >> 0x1f & 1) & 0xfffffff800000000 | (param_2 & 0xffffffff) << 3)
    ;
    uVar1 = *(uint *)(lVar10 + 0x3c);
    uVar9 = (ulong)uVar1;
    *(long *)(lVar10 + 0x30) = lVar8;
    if (iVar3 <= (int)uVar1) goto LAB_0020007c;
    memset((void *)(lVar8 + (long)(int)uVar1 * 8),0,((ulong)((iVar3 + -1) - uVar1) + 1) * 8);
    if ((int)uVar1 < 1) goto LAB_002000ec;
LAB_00200088:
    lVar7 = 0;
    do {
      lVar5 = *(long *)(lVar8 + lVar7 * 8);
      *(undefined8 *)(lVar8 + lVar7 * 8) = 0;
      while (lVar5 != 0) {
        uVar4 = (ulong)(iVar3 - 1U & *(uint *)(lVar5 + 0xc));
        lVar6 = *(long *)(lVar5 + 0x18);
        *(undefined8 *)(lVar5 + 0x18) = *(undefined8 *)(lVar8 + uVar4 * 8);
        *(long *)(lVar8 + uVar4 * 8) = lVar5;
        lVar5 = lVar6;
      }
      lVar7 = lVar7 + 1;
    } while ((int)lVar7 < (int)uVar9);
  }
  else {
LAB_0020007c:
    if (0 < (int)uVar9) {
      lVar8 = *(long *)(lVar10 + 0x30);
      goto LAB_00200088;
    }
  }
  if (iVar3 < (int)uVar9) {
    uVar2 = luaM_realloc_(param_1,*(undefined8 *)(lVar10 + 0x30),
                          -(uVar9 >> 0x1f) & 0xfffffff800000000 | uVar9 << 3,
                          -((param_2 & 0xffffffff) >> 0x1f) & 0xfffffff800000000 |
                          (param_2 & 0xffffffff) << 3);
    *(undefined8 *)(lVar10 + 0x30) = uVar2;
  }
LAB_002000ec:
  *(int *)(lVar10 + 0x3c) = iVar3;
  return;
}


