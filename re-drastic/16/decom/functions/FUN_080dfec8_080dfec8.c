/*
 * Ghidra decompilation
 *
 * Function : FUN_080dfec8
 * Address  : 080dfec8
 * Program  : drastic16
 */


undefined4 FUN_080dfec8(uint param_1,int param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  
  if ((param_3 | param_4) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = __aeabi_ldivmod((int)((ulonglong)param_1 * 100),
                            param_2 * 100 + (int)((ulonglong)param_1 * 100 >> 0x20),param_3,param_4)
    ;
  }
  return uVar1;
}


