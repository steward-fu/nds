/*
 * Ghidra decompilation
 *
 * Function : SetEncryption
 * Address  : 001c3580
 * Program  : drastic64
 */


/* ComprDataIO::SetEncryption(bool, CRYPT_METHOD, SecPassword*, unsigned char const*, unsigned char
   const*, unsigned int, unsigned char*, unsigned char*) */

void __thiscall
ComprDataIO::SetEncryption
          (ComprDataIO *this,bool param_1,CRYPT_METHOD param_2,SecPassword *param_3,uchar *param_4,
          uchar *param_5,uint param_6,uchar *param_7,uchar *param_8)

{
  ComprDataIO CVar1;
  
  if (param_1) {
    CVar1 = (ComprDataIO)
            CryptData::SetCryptKeys
                      ((CryptData *)(this + 0x78),true,param_2,param_3,param_4,param_5,param_6,
                       param_8,param_7);
    this[0x45c0] = CVar1;
    return;
  }
  CVar1 = (ComprDataIO)
          CryptData::SetCryptKeys
                    ((CryptData *)(this + 0x1080),false,param_2,param_3,param_4,param_5,param_6,
                     param_8,param_7);
  this[0x45c1] = CVar1;
  return;
}


