/*
 * Ghidra decompilation
 *
 * Function : Decrypt13
 * Address  : 001bf9c0
 * Program  : drastic64
 */


/* CryptData::Decrypt13(unsigned char*, unsigned long) */

void __thiscall CryptData::Decrypt13(CryptData *this,uchar *param_1,ulong param_2)

{
  CryptData CVar1;
  uchar *puVar2;
  uchar *puVar3;
  
  if (param_2 != 0) {
    puVar2 = param_1;
    do {
      CVar1 = (CryptData)((char)this[0xffd] + (char)this[0xffe] + (char)this[0xffc]);
      this[0xffc] = CVar1;
      this[0xffd] = (CryptData)((char)this[0xffd] + (char)this[0xffe]);
      puVar3 = puVar2 + 1;
      *puVar2 = *puVar2 - (char)CVar1;
      puVar2 = puVar3;
    } while (puVar3 != param_1 + param_2);
  }
  return;
}


