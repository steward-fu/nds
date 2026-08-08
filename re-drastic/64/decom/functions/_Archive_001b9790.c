/*
 * Ghidra decompilation
 *
 * Function : ~Archive
 * Address  : 001b9790
 * Program  : drastic64
 */


/* Archive::~Archive() */

void __thiscall Archive::~Archive(Archive *this)

{
  RAROptions *this_00;
  
  *(undefined ***)this = &PTR__Archive_0025e490;
  if ((this[0x75f8] != (Archive)0x0) &&
     (this_00 = *(RAROptions **)(this + 0x7600), this_00 != (RAROptions *)0x0)) {
    RAROptions::~RAROptions(this_00);
    operator_delete(this_00,0x125e8);
  }
  if (*(void **)(this + 0xeae8) != (void *)0x0) {
    free(*(void **)(this + 0xeae8));
  }
  if (*(void **)(this + 0xa790) != (void *)0x0) {
    free(*(void **)(this + 0xa790));
  }
  QuickOpen::~QuickOpen((QuickOpen *)(this + 0x7630));
  DataHash::~DataHash((DataHash *)(this + 0x69a0));
  DataHash::~DataHash((DataHash *)(this + 0x5d50));
  DataHash::~DataHash((DataHash *)(this + 0x5100));
  CryptData::~CryptData((CryptData *)(this + 0x40b0));
  CryptData::~CryptData((CryptData *)(this + 0x30a8));
  CryptData::~CryptData((CryptData *)(this + 0x2024));
  File::~File((File *)this);
  return;
}


