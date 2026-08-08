/*
 * Ghidra decompilation
 *
 * Function : SetAV15Encryption
 * Address  : 080dd90c
 * Program  : drastic
 */


/* DWARF original prototype: void SetAV15Encryption(CryptData * this) */

void __thiscall CryptData::SetAV15Encryption(CryptData *this)

{
  InitCRC32(this->CRCTab);
  this->Method = CRYPT_RAR15;
  this->Key15[0] = 0x4765;
  this->Key15[1] = 0x9021;
  this->Key15[2] = 0x7382;
  this->Key15[3] = 0x5215;
  return;
}


