/*
 * Ghidra decompilation
 *
 * Function : FUN_08061fb8
 * Address  : 08061fb8
 * Program  : drastic16
 */


void FUN_08061fb8(undefined4 param_1,undefined4 *param_2)

{
  char acStack_110 [256];
  
  sprintf(acStack_110,"%s%s",*param_2,*(undefined4 *)(param_2[9] + *(int *)param_2[6] * 4));
  FUN_08076bb8(acStack_110,0xffff);
  return;
}


