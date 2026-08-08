/*
 * Ghidra decompilation
 *
 * Function : lookup_cheat_entry
 * Address  : 001810b0
 * Program  : drastic64
 */


uint * lookup_cheat_entry(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint *puVar5;
  uint *puVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  
  uVar2 = *(uint *)(param_1 + 0x408);
  lVar10 = *(long *)(param_1 + 0x400);
  uVar7 = (ulong)uVar2;
  uVar9 = 0;
  do {
    if (uVar7 <= uVar9) {
      return (uint *)0x0;
    }
    while( true ) {
      uVar4 = uVar7 + uVar9 >> 1;
      uVar3 = *(uint *)(lVar10 + uVar4 * 0x10);
      if (param_2 == uVar3) {
        uVar9 = (long)(uVar4 * 0x10) >> 4;
        iVar8 = (int)uVar9;
        if (iVar8 < 0) goto LAB_00181150;
        uVar9 = -(uVar9 >> 0x1f & 1) & 0xfffffff000000000 | (uVar9 & 0xffffffff) << 4;
        puVar6 = (uint *)(lVar10 + uVar9);
        goto LAB_00181140;
      }
      if (uVar3 <= param_2 && param_2 != uVar3) break;
      uVar7 = uVar4;
      if (uVar4 <= uVar9) {
        return (uint *)0x0;
      }
    }
    uVar9 = uVar4 + 1;
  } while( true );
  while( true ) {
    puVar5 = puVar6 + -4;
    if (puVar6[1] == param_3) {
      return puVar6;
    }
    puVar6 = puVar5;
    if (puVar5 == (uint *)(lVar10 + -0x10 + uVar9 + uVar4 * -0x10)) break;
LAB_00181140:
    if (*puVar6 != uVar3) break;
  }
LAB_00181150:
  uVar1 = iVar8 + 1;
  if (uVar1 < uVar2) {
    puVar6 = (uint *)(lVar10 + (long)(int)uVar1 * 0x10);
    do {
      if (*puVar6 != uVar3) {
        return (uint *)0x0;
      }
      puVar5 = puVar6 + 4;
      if (puVar6[1] == param_3) {
        return puVar6;
      }
      puVar6 = puVar5;
    } while (puVar5 != (uint *)(lVar10 + 0x10 +
                               ((ulong)((uVar2 - 2) - iVar8) + (long)(int)uVar1) * 0x10));
  }
  return (uint *)0x0;
}


