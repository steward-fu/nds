/*
 * Ghidra decompilation
 *
 * Function : _ZN11ComprDataIOD2Ev
 * Address  : 080d9218
 * Program  : drastic
 */


/* DWARF original prototype: void * ~ComprDataIO(ComprDataIO * this, int __in_chrg) */

void * __thiscall ComprDataIO::~ComprDataIO(ComprDataIO *this,int __in_chrg)

{
  int __in_chrg_00;
  int __in_chrg_01;
  int __in_chrg_02;
  int __in_chrg_03;
  
  DataHash::~DataHash(&this->UnpHash,__in_chrg);
  DataHash::~DataHash(&this->PackHash,__in_chrg_00);
  DataHash::~DataHash(&this->PackedDataHash,__in_chrg_01);
  CryptData::~CryptData(&this->Decrypt,__in_chrg_02);
  CryptData::~CryptData(&this->Crypt,__in_chrg_03);
  return this;
}


