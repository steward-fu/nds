/*
 * Ghidra decompilation
 *
 * Function : Swap20
 * Address  : 001c0280
 * Program  : drastic64
 */


/* CryptData::Swap20(unsigned char*, unsigned char*) */

void __thiscall CryptData::Swap20(CryptData *this,uchar *param_1,uchar *param_2)

{
  uchar uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}


