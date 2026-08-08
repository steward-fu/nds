/*
 * Ghidra decompilation
 *
 * Function : _Z5atoiwPKw
 * Address  : 080dd67c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

uint atoiw(wchar *s)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *s - 0x30;
  if (uVar1 < 10) {
    uVar2 = 0;
    do {
      s = s + 1;
      uVar2 = uVar2 * 10 + uVar1;
      uVar1 = *s - 0x30;
    } while (uVar1 < 10);
    return uVar2;
  }
  return 0;
}


