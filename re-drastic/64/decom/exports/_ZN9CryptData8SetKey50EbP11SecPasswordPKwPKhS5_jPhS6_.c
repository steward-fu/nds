/*
 * Ghidra decompilation
 *
 * Function : _ZN9CryptData8SetKey50EbP11SecPasswordPKwPKhS5_jPhS6_
 * Address  : 001c12b0
 * Program  : drastic64
 */


/* CryptData::SetKey50(bool, SecPassword*, wchar_t const*, unsigned char const*, unsigned char
   const*, unsigned int, unsigned char*, unsigned char*) */

void __thiscall
CryptData::SetKey50(CryptData *this,bool param_1,SecPassword *param_2,wchar_t *param_3,
                   uchar *param_4,uchar *param_5,uint param_6,uchar *param_7,uchar *param_8)

{
  if (param_6 < 0x19) {
    SetKey50(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return;
  }
  return;
}


