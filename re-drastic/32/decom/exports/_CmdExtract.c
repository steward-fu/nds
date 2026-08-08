/*
 * Ghidra decompilation
 *
 * Function : ~CmdExtract
 * Address  : 080e9a84
 * Program  : drastic
 */


/* DWARF original prototype: void * ~CmdExtract(CmdExtract * this, int __in_chrg) */

void * __thiscall CmdExtract::~CmdExtract(CmdExtract *this,int __in_chrg)

{
  int extraout_r1;
  int __in_chrg_00;
  int __in_chrg_01;
  int __in_chrg_02;
  int __in_chrg_03;
  int __in_chrg_04;
  Unpack *this_00;
  
  this_00 = this->Unp;
  if (this_00 != (Unpack *)0x0) {
    Unpack::~Unpack(this_00,__in_chrg);
    operator_delete(this_00);
    __in_chrg = extraout_r1;
  }
  SecPassword::~SecPassword(&this->Password,__in_chrg);
  DataHash::~DataHash(&(this->DataIO).UnpHash,__in_chrg_00);
  DataHash::~DataHash(&(this->DataIO).PackHash,__in_chrg_01);
  DataHash::~DataHash(&(this->DataIO).PackedDataHash,__in_chrg_02);
  CryptData::~CryptData(&(this->DataIO).Decrypt,__in_chrg_03);
  CryptData::~CryptData(&(this->DataIO).Crypt,__in_chrg_04);
  return this;
}


