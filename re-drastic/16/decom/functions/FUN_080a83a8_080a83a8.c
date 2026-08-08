/*
 * Ghidra decompilation
 *
 * Function : FUN_080a83a8
 * Address  : 080a83a8
 * Program  : drastic16
 */


undefined4 FUN_080a83a8(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_c;
  
  iVar1 = FUN_080df2c0(param_1 + 0x7320,param_2,param_3,&local_c);
  if (iVar1 == 0) {
    local_c = FUN_080a46cc(param_1,param_2,param_3);
  }
  return local_c;
}


