/*
 * Ghidra decompilation
 *
 * Function : FilterItanium_GetBits
 * Address  : 001dbb90
 * Program  : drastic64
 */


/* Unpack::FilterItanium_GetBits(unsigned char*, int, int) */

uint __thiscall Unpack::FilterItanium_GetBits(Unpack *this,uchar *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 + 7;
  if (-1 < param_2) {
    iVar1 = param_2;
  }
  iVar1 = iVar1 >> 3;
  return 0xffffffffU >> (ulong)(-param_3 & 0x1f) &
         ((uint)param_1[iVar1 + 2] << 0x10 | (uint)param_1[iVar1 + 1] << 8 |
         (uint)param_1[iVar1] | (uint)param_1[iVar1 + 3] << 0x18) >> (ulong)(param_2 & 7);
}


