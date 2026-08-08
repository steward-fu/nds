/*
 * Ghidra decompilation
 *
 * Function : _ZN5RarVM21FilterItanium_GetBitsEPhii
 * Address  : 001ef200
 * Program  : drastic64
 */


/* RarVM::FilterItanium_GetBits(unsigned char*, int, int) */

uint __thiscall RarVM::FilterItanium_GetBits(RarVM *this,uchar *param_1,int param_2,int param_3)

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


