/*
 * Ghidra decompilation
 *
 * Function : _ZN9CryptDataC2Ev
 * Address  : 080df9a8
 * Program  : drastic
 */


/* DWARF original prototype: CryptData * CryptData(CryptData * this) */

CryptData * __thiscall CryptData::CryptData(CryptData *this)

{
  int iVar1;
  CryptData *this_00;
  bool bVar2;
  
  SecPassword::SecPassword((SecPassword *)this);
  iVar1 = 2;
  this_00 = this;
  do {
    this_00 = (CryptData *)(this_00->KDFCache + 1);
    SecPassword::SecPassword((SecPassword *)this_00);
    bVar2 = iVar1 != 0;
    iVar1 = iVar1 + -1;
  } while (bVar2);
  Rijndael::Rijndael(&this->rin);
  this->Method = CRYPT_NONE;
  memset(this,0,0x9e0);
  this->KDFCachePos = 0;
  memset(this->CRCTab,0,0x400);
  return this;
}


