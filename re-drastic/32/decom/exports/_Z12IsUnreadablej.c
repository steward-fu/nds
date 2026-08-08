/*
 * Ghidra decompilation
 *
 * Function : _Z12IsUnreadablej
 * Address  : 080d6ab8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

bool IsUnreadable(uint Attr)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  bool bVar4;
  
  uVar3 = Attr & 0xf000;
  bVar4 = uVar3 != 0xc000;
  bVar1 = (uVar3 - 0x1000 & 0xffffefff) != 0;
  if (!bVar4 || !bVar1) {
    uVar3 = 1;
  }
  bVar2 = SUB41(uVar3,0);
  if (bVar4 && bVar1) {
    bVar2 = false;
  }
  return bVar2;
}


