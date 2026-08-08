/*
 * Ghidra decompilation
 *
 * Function : atoilw
 * Address  : 080dd6e4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

uint64 atoilw(wchar *s)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  wchar wVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  
  uVar6 = 0;
  iVar7 = 0;
  wVar5 = *s;
  while (uVar4 = wVar5 - 0x30, uVar4 < 10) {
    s = s + 1;
    uVar1 = uVar6 >> 0x1e;
    bVar8 = CARRY4(uVar6 * 4,uVar6);
    uVar3 = uVar6 * 5;
    uVar2 = uVar6 * 10;
    uVar6 = uVar2 + uVar4;
    iVar7 = ((iVar7 << 2 | uVar1) + iVar7 + (uint)bVar8) * 2 + (uint)CARRY4(uVar3,uVar3) +
            (uint)CARRY4(uVar2,uVar4);
    wVar5 = *s;
  }
  return CONCAT44(iVar7,uVar6);
}


