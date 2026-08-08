/*
 * Ghidra decompilation
 *
 * Function : FUN_0807a018
 * Address  : 0807a018
 * Program  : drastic16
 */


void FUN_0807a018(int param_1,int param_2,undefined4 param_3)

{
  undefined auStack_b0 [20];
  undefined4 local_9c;
  
  if (param_2 == 0) {
    param_3 = 0;
  }
  ioctl(param_1,0x4600,auStack_b0);
  local_9c = param_3;
  ioctl(param_1,0x4606,auStack_b0);
  return;
}


