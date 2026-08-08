/*
 * Ghidra decompilation
 *
 * Function : FUN_0807a0d0
 * Address  : 0807a0d0
 * Program  : drastic16
 */


undefined4 FUN_0807a0d0(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint local_60 [2];
  undefined auStack_58 [8];
  char local_50;
  
  iVar1 = ioctl(param_1,0x40444f35,auStack_58);
  if (iVar1 == 0) {
    if (local_50 != '\0') {
      local_50 = '\0';
      iVar1 = ioctl(param_1,0x40444f34,auStack_58);
      if (iVar1 != 0) {
        perror("IOCTL fbdev disable plane failed");
        return 0xffffffff;
      }
    }
    iVar1 = ioctl(param_1,0x40084f38,local_60);
    if (iVar1 == 0) {
      if ((local_60[0] < param_2) &&
         (local_60[0] = param_2, iVar1 = ioctl(param_1,0x40084f37,local_60), iVar1 != 0)) {
        perror("IOCTL fbdev reserve memory failed");
        return 0xffffffff;
      }
      uVar2 = 0;
    }
    else {
      perror("IOCTL fbdev get memory info failed");
      uVar2 = 0xffffffff;
    }
  }
  else {
    perror("IOCTL fbdev get plane info failed");
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


