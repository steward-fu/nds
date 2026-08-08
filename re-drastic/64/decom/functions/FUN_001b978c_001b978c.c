/*
 * Ghidra decompilation
 *
 * Function : FUN_001b978c
 * Address  : 001b978c
 * Program  : drastic64
 */


void FUN_001b978c(undefined8 *param_1)

{
  RAROptions *this;
  
  *param_1 = &PTR__Archive_0025e490;
  if ((*(char *)(param_1 + 0xebf) != '\0') &&
     (this = (RAROptions *)param_1[0xec0], this != (RAROptions *)0x0)) {
    RAROptions::~RAROptions(this);
    operator_delete(this,0x125e8);
  }
  if ((void *)param_1[0x1d5d] != (void *)0x0) {
    free((void *)param_1[0x1d5d]);
  }
  if ((void *)param_1[0x14f2] != (void *)0x0) {
    free((void *)param_1[0x14f2]);
  }
  QuickOpen::~QuickOpen((QuickOpen *)(param_1 + 0xec6));
  DataHash::~DataHash((DataHash *)(param_1 + 0xd34));
  DataHash::~DataHash((DataHash *)(param_1 + 0xbaa));
  DataHash::~DataHash((DataHash *)(param_1 + 0xa20));
  CryptData::~CryptData((CryptData *)(param_1 + 0x816));
  CryptData::~CryptData((CryptData *)(param_1 + 0x615));
  CryptData::~CryptData((CryptData *)((long)param_1 + 0x2024));
  File::~File((File *)param_1);
  return;
}


