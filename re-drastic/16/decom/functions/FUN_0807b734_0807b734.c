/*
 * Ghidra decompilation
 *
 * Function : FUN_0807b734
 * Address  : 0807b734
 * Program  : drastic16
 */


void FUN_0807b734(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int __fd;
  int iVar1;
  
  __fd = open("/dev/fb0",2,param_3,param_4,param_4);
  iVar1 = ioctl(__fd,0x40444f35,&DAT_081016e0);
  if (iVar1 != 0) {
    perror("IOCTL fbdev get plane info failed");
  }
  iVar1 = ioctl(__fd,0x40084f38,&DAT_08101724);
  if (iVar1 != 0) {
    perror("IOCTL fbdev get mem info failed");
  }
  iVar1 = ioctl(__fd,0x4600,&DAT_0810172c);
  if (iVar1 != 0) {
    perror("IOCTL fbdev get overlay info failed");
  }
  close(__fd);
  DAT_08101804 = param_1;
  return;
}


