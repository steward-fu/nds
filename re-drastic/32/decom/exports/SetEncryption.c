/*
 * Ghidra decompilation
 *
 * Function : SetEncryption
 * Address  : 080e2650
 * Program  : drastic
 */


/* DWARF original prototype: void SetEncryption(ComprDataIO * this, bool Encrypt, CRYPT_METHOD
   Method, SecPassword * Password, byte * Salt, byte * InitV, uint Lg2Cnt, byte * PswCheck, byte *
   HashKey) */

void __thiscall
ComprDataIO::SetEncryption
          (ComprDataIO *this,bool Encrypt,CRYPT_METHOD Method,SecPassword *Password,byte *Salt,
          byte *InitV,uint Lg2Cnt,byte *PswCheck,byte *HashKey)

{
  bool bVar1;
  
  if (Encrypt) {
    bVar1 = CryptData::SetCryptKeys
                      (&this->Crypt,true,Method,Password,Salt,InitV,Lg2Cnt,HashKey,PswCheck);
    this->Encryption = bVar1;
  }
  else {
    bVar1 = CryptData::SetCryptKeys
                      (&this->Decrypt,Encrypt,Method,Password,Salt,InitV,Lg2Cnt,HashKey,PswCheck);
    this->Decryption = bVar1;
  }
  return;
}


