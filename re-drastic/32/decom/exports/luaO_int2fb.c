/*
 * Ghidra decompilation
 *
 * Function : luaO_int2fb
 * Address  : 08118954
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int luaO_int2fb(uint x)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (7 < x) {
    if (x < 0x10) {
      uVar2 = 8;
    }
    else {
      iVar1 = 0;
      do {
        iVar3 = iVar1;
        x = x + 1 >> 1;
        iVar1 = iVar3 + 1;
      } while (0xf < x);
      uVar2 = (iVar3 + 2) * 8;
    }
    x = x - 8 | uVar2;
  }
  return x;
}


