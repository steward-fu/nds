/*
 * Ghidra decompilation
 *
 * Function : FUN_08068d40
 * Address  : 08068d40
 * Program  : drastic16
 */


byte * FUN_08068d40(byte *param_1)

{
  byte bVar1;
  ushort **ppuVar2;
  byte *pbVar3;
  
  ppuVar2 = __ctype_b_loc();
  do {
    pbVar3 = param_1;
    bVar1 = *param_1;
    param_1 = param_1 + 1;
  } while (((*ppuVar2)[bVar1] & 0x2000) != 0);
  return pbVar3;
}


