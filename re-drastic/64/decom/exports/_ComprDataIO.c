/*
 * Ghidra decompilation
 *
 * Function : ~ComprDataIO
 * Address  : 001bb500
 * Program  : drastic64
 */


/* ComprDataIO::~ComprDataIO() */

void __thiscall ComprDataIO::~ComprDataIO(ComprDataIO *this)

{
  DataHash::~DataHash((DataHash *)(this + 0x3970));
  DataHash::~DataHash((DataHash *)(this + 0x2d20));
  DataHash::~DataHash((DataHash *)(this + 0x20d0));
  CryptData::~CryptData((CryptData *)(this + 0x1080));
  CryptData::~CryptData((CryptData *)(this + 0x78));
  return;
}


