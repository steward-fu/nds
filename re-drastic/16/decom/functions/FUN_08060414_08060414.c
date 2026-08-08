/*
 * Ghidra decompilation
 *
 * Function : FUN_08060414
 * Address  : 08060414
 * Program  : drastic16
 */


void FUN_08060414(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  char acStack_498 [1156];
  
  sprintf(acStack_498,"%s%csavestates%c%s_%d.dss",param_1 + 0x82030,0x2f,0x2f,param_1 + 0x82830,
          param_2);
  FUN_0805f9fc(param_1,acStack_498,param_3,param_4,param_5);
  return;
}


