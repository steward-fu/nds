/*
 * Ghidra decompilation
 *
 * Function : ~CryptData
 * Address  : 001c14f0
 * Program  : drastic64
 */


/* CryptData::~CryptData() */

void __thiscall CryptData::~CryptData(CryptData *this)

{
  bool bVar1;
  CryptData *this_00;
  
  this_00 = this + 0x768;
  cleandata(this,0x9e0);
  do {
    SecPassword::~SecPassword((SecPassword *)this_00);
    bVar1 = this_00 != this;
    this_00 = (CryptData *)((SecPassword *)this_00 + -0x278);
  } while (bVar1);
  return;
}


