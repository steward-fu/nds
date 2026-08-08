/*
 * Ghidra decompilation
 *
 * Function : SetCmt13Encryption
 * Address  : 080dd960
 * Program  : drastic
 */


/* DWARF original prototype: void SetCmt13Encryption(CryptData * this) */

void __thiscall CryptData::SetCmt13Encryption(CryptData *this)

{
  this->Method = CRYPT_RAR13;
  this->Key13[0] = '\0';
  this->Key13[1] = '\a';
  this->Key13[2] = 'M';
  return;
}


