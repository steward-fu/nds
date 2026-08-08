/*
 * Ghidra decompilation
 *
 * Function : FUN_0807a2e4
 * Address  : 0807a2e4
 * Program  : drastic16
 */


int FUN_0807a2e4(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_b8;
  int iStack_b4;
  undefined4 local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  undefined4 local_a0;
  
  local_a8 = ioctl(param_1,0x4600,&local_b8);
  if (local_a8 == 0) {
    local_ac = param_3 << 1;
    local_b8 = param_2;
    iStack_b4 = param_3;
    local_b0 = param_2;
    local_a4 = local_a8;
    local_a0 = param_4;
    iVar1 = ioctl(param_1,0x4601,&local_b8);
    if (iVar1 != 0) {
      perror("IOCTL fbdev set overlay info failed");
      iVar1 = -1;
    }
  }
  else {
    perror("IOCTL fbdev get overlay info failed");
    iVar1 = -1;
  }
  return iVar1;
}


