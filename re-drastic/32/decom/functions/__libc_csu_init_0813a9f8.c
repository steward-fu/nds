/*
 * Ghidra decompilation
 *
 * Function : __libc_csu_init
 * Address  : 0813a9f8
 * Program  : drastic
 */


void __libc_csu_init(EVP_PKEY_CTX *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  code **ppcVar2;
  
  _init(param_1);
  iVar1 = 0;
  ppcVar2 = (code **)&__frame_dummy_init_array_entry;
  do {
    iVar1 = iVar1 + 1;
    (**ppcVar2)(param_1,param_2,param_3,*ppcVar2,param_4);
    ppcVar2 = ppcVar2 + 1;
  } while (iVar1 != 4);
  return;
}


