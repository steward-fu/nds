/*
 * Ghidra decompilation
 *
 * Function : FUN_080e5474
 * Address  : 080e5474
 * Program  : drastic16
 */


void FUN_080e5474(EVP_PKEY_CTX *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  _init(param_1);
  uVar1 = 0;
  do {
    (*(code *)(&__DT_INIT_ARRAY)[uVar1])(param_1,param_2,param_3);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 4);
  return;
}


