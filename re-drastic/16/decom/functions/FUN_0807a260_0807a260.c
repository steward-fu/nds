/*
 * Ghidra decompilation
 *
 * Function : FUN_0807a260
 * Address  : 0807a260
 * Program  : drastic16
 */


undefined4 FUN_0807a260(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined auStack_50 [8];
  char local_48;
  
  iVar1 = ioctl(param_1,0x40444f35,auStack_50);
  if (iVar1 == 0) {
    if (local_48 != '\0') {
      local_48 = 0;
      iVar1 = ioctl(param_1,0x40444f34,auStack_50);
      if (iVar1 != 0) {
        perror("IOCTL fbdev disable plane failed");
        return 0xffffffff;
      }
    }
    uVar2 = 0;
  }
  else {
    perror("IOCTL fbdev get plane info failed");
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


