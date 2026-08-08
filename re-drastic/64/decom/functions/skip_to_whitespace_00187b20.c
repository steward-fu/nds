/*
 * Ghidra decompilation
 *
 * Function : skip_to_whitespace
 * Address  : 00187b20
 * Program  : drastic64
 */


byte * skip_to_whitespace(byte *param_1)

{
  byte *pbVar1;
  ushort uVar2;
  ushort **ppuVar3;
  ulong uVar4;
  
  ppuVar3 = __ctype_b_loc();
  uVar4 = (ulong)*param_1;
  uVar2 = (*ppuVar3)[uVar4];
  if (0x3e < *param_1) goto LAB_00187b8c;
  do {
    if (((uint)((uVar2 & 0x2000) == 0) & ((uint)(0x4000800000000001 >> (uVar4 & 0x3f)) ^ 0xffffffff)
        ) == 0) {
      return param_1;
    }
    while( true ) {
      pbVar1 = param_1 + 1;
      uVar4 = (ulong)*pbVar1;
      param_1 = param_1 + 1;
      uVar2 = (*ppuVar3)[uVar4];
      if (*pbVar1 < 0x3f) break;
LAB_00187b8c:
      if ((uVar2 & 0x2000) != 0) {
        return param_1;
      }
    }
  } while( true );
}


