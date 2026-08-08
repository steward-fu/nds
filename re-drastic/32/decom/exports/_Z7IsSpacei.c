/*
 * Ghidra decompilation
 *
 * Function : _Z7IsSpacei
 * Address  : 080d236c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

bool IsSpace(int ch)

{
  bool bVar1;
  undefined uVar2;
  bool bVar3;
  
  bVar3 = ch != 9;
  bVar1 = ch != 0x20;
  if (!bVar3 || !bVar1) {
    ch = 1;
  }
  uVar2 = (undefined)ch;
  if (bVar3 && bVar1) {
    uVar2 = 0;
  }
  return (bool)uVar2;
}


