/*
 * Ghidra decompilation
 *
 * Function : _ZN11ComprDataIO17SetAV15EncryptionEv
 * Address  : 080e26e4
 * Program  : drastic
 */


/* DWARF original prototype: void SetAV15Encryption(ComprDataIO * this) */

void __thiscall ComprDataIO::SetAV15Encryption(ComprDataIO *this)

{
  this->Decryption = true;
  CryptData::SetAV15Encryption(&this->Decrypt);
  return;
}


