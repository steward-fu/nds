/*
 * Ghidra decompilation
 *
 * Function : FUN_0805e1d8
 * Address  : 0805e1d8
 * Program  : drastic16
 */


byte * FUN_0805e1d8(byte *param_1)

{
  ushort **ppuVar1;
  byte *pbVar2;
  uint uVar3;
  
  ppuVar1 = __ctype_b_loc();
  do {
    pbVar2 = param_1;
    uVar3 = (uint)*param_1;
    if (((*ppuVar1)[uVar3] & 0x2000) != 0) {
      return pbVar2;
    }
    if (uVar3 == 0x3e) {
      return pbVar2;
    }
    if (uVar3 == 0x2f) {
      return pbVar2;
    }
    param_1 = param_1 + 1;
  } while (uVar3 != 0);
  return pbVar2;
}


