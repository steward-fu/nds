/*
 * Ghidra decompilation
 *
 * Function : _ZN11ComprDataIO18SetCmt13EncryptionEv
 * Address  : 080e26fc
 * Program  : drastic
 */


/* DWARF original prototype: void SetCmt13Encryption(ComprDataIO * this) */

void __thiscall ComprDataIO::SetCmt13Encryption(ComprDataIO *this)

{
  this->Decryption = true;
  CryptData::SetCmt13Encryption(&this->Decrypt);
  return;
}


