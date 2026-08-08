/*
 * Ghidra decompilation
 *
 * Function : __tcf_0
 * Address  : 080dd770
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void __tcf_0(void *param_1)

{
  int __in_chrg;
  CryptKeyCacheItem *pCVar1;
  CryptKeyCacheItem *data;
  
  pCVar1 = (CryptKeyCacheItem *)&CachePos;
  do {
    data = pCVar1 + -1;
    cleandata(data,0x10);
    cleandata(pCVar1[-1].AESInit,0x10);
    cleandata(&pCVar1[-1].Password,0x204);
    SecPassword::~SecPassword(&pCVar1[-1].Password,__in_chrg);
    pCVar1 = data;
  } while (data != Cache);
  return;
}


