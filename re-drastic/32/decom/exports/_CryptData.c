/*
 * Ghidra decompilation
 *
 * Function : ~CryptData
 * Address  : 080dfa88
 * Program  : drastic
 */


/* DWARF original prototype: void * ~CryptData(CryptData * this, int __in_chrg) */

void * __thiscall CryptData::~CryptData(CryptData *this,int __in_chrg)

{
  int extraout_r1;
  int __in_chrg_00;
  int extraout_r1_00;
  CryptData *this_00;
  
  cleandata(this,0x9e0);
  if (this != (CryptData *)0x0) {
    this_00 = (CryptData *)&this->KDFCachePos;
    __in_chrg_00 = extraout_r1;
    do {
      this_00 = (CryptData *)(this_00[-1].CRCTab + 0xa9);
      SecPassword::~SecPassword((SecPassword *)this_00,__in_chrg_00);
      __in_chrg_00 = extraout_r1_00;
    } while (this != this_00);
  }
  return this;
}


