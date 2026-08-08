/*
 * Ghidra decompilation
 *
 * Function : _ZN10CmdExtractD2Ev
 * Address  : 001c92c0
 * Program  : drastic64
 */


/* CmdExtract::~CmdExtract() */

void __thiscall CmdExtract::~CmdExtract(CmdExtract *this)

{
  Unpack *this_00;
  
  this_00 = *(Unpack **)(this + 0x45d0);
  if (this_00 != (Unpack *)0x0) {
    Unpack::~Unpack(this_00);
    operator_delete(this_00,0xe988);
  }
  SecPassword::~SecPassword((SecPassword *)(this + 0x65f4));
  DataHash::~DataHash((DataHash *)(this + 0x3978));
  DataHash::~DataHash((DataHash *)(this + 0x2d28));
  DataHash::~DataHash((DataHash *)(this + 0x20d8));
  CryptData::~CryptData((CryptData *)(this + 0x1088));
  CryptData::~CryptData((CryptData *)(this + 0x80));
  return;
}


