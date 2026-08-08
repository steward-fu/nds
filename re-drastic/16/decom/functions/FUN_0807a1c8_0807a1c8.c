/*
 * Ghidra decompilation
 *
 * Function : FUN_0807a1c8
 * Address  : 0807a1c8
 * Program  : drastic16
 */


int FUN_0807a1c8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined param_6)

{
  int iVar1;
  undefined4 local_60;
  undefined4 local_5c;
  undefined local_58;
  undefined4 local_54;
  undefined4 local_50;
  
  iVar1 = ioctl(param_1,0x40444f35,&local_60);
  if (iVar1 == 0) {
    local_50 = param_5;
    local_58 = param_6;
    local_60 = param_2;
    local_5c = param_3;
    local_54 = param_4;
    iVar1 = ioctl(param_1,0x40444f34,&local_60);
    if (iVar1 != 0) {
      perror("IOCTL setup plane info failed");
      iVar1 = -1;
    }
  }
  else {
    perror("IOCTL fbdev get plane info failed");
    iVar1 = -1;
  }
  return iVar1;
}


