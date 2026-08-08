/*
 * Ghidra decompilation
 *
 * Function : FUN_08060398
 * Address  : 08060398
 * Program  : drastic16
 */


void FUN_08060398(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char acStack_818 [1024];
  char acStack_418 [1024];
  
  sprintf(acStack_818,"%s%csavestates",param_1 + 0x82030,0x2f);
  sprintf(acStack_418,"%s_%d.dss",param_1 + 0x82830,param_2);
  FUN_0806001c(param_1,acStack_818,acStack_418,param_3,param_4);
  return;
}


