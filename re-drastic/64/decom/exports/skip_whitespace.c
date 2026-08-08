/*
 * Ghidra decompilation
 *
 * Function : skip_whitespace
 * Address  : 00187ad0
 * Program  : drastic64
 */


byte * skip_whitespace(byte *param_1)

{
  ushort uVar1;
  ushort **ppuVar2;
  
  ppuVar2 = __ctype_b_loc();
  uVar1 = (*ppuVar2)[*param_1];
  while ((uVar1 >> 0xd & 1) != 0) {
    param_1 = param_1 + 1;
    uVar1 = (*ppuVar2)[*param_1];
  }
  return param_1;
}


