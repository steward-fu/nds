/*
 * Ghidra decompilation
 *
 * Function : FUN_080b530c
 * Address  : 080b530c
 * Program  : drastic16
 */


undefined4 FUN_080b530c(uint *param_1)

{
  undefined4 uVar1;
  
  uVar1 = __aeabi_uldivmod(*param_1 + 0x2ac18000,param_1[1] - ((*param_1 < 0xd53e8000) + 0x19db1de),
                           10000000,0);
  return uVar1;
}


