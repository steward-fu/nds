/*
 * Ghidra decompilation
 *
 * Function : FilterItanium_SetBits
 * Address  : 001dbbf0
 * Program  : drastic64
 */


/* Unpack::FilterItanium_SetBits(unsigned char*, unsigned int, int, int) */

void __thiscall
Unpack::FilterItanium_SetBits(Unpack *this,uchar *param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = param_3 + 7;
  if (-1 < param_3) {
    iVar3 = param_3;
  }
  uVar1 = iVar3 >> 3;
  uVar2 = (0xffffffffU >> (ulong)(-param_4 & 0x1f)) << (ulong)(param_3 & 7U);
  iVar3 = param_2 << (ulong)(param_3 & 7U);
  uVar4 = ~uVar2;
  param_1[uVar1] = param_1[uVar1] & ((byte)uVar2 ^ 0xff) | (byte)iVar3;
  param_1[uVar1 + 1] = (byte)(uVar4 >> 8) & param_1[uVar1 + 1] | (byte)((uint)iVar3 >> 8);
  param_1[uVar1 + 2] = (byte)(uVar4 >> 0x10) & param_1[uVar1 + 2] | (byte)((uint)iVar3 >> 0x10);
  param_1[uVar1 + 3] = (byte)(uVar4 >> 0x18) & param_1[uVar1 + 3] | (byte)((uint)iVar3 >> 0x18);
  return;
}


