/*
 * Ghidra decompilation
 *
 * Function : _GLOBAL__sub_I__ZN9CryptData8SetKey13EPKc
 * Address  : 080e047c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void _GLOBAL__sub_I__ZN9CryptData8SetKey13EPKc(void)

{
  SecPassword *this;
  int iVar1;
  
  this = &Cache[0].Password;
  iVar1 = 3;
  do {
    SecPassword::SecPassword(this);
    SecPassword::Set(this,(wchar *)L"");
    iVar1 = iVar1 + -1;
    this = (SecPassword *)(this[1].Password + 0xb);
  } while (iVar1 != -1);
  __aeabi_atexit(0,__tcf_0,&__dso_handle);
  return;
}


