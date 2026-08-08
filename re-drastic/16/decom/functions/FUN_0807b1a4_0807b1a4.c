/*
 * Ghidra decompilation
 *
 * Function : FUN_0807b1a4
 * Address  : 0807b1a4
 * Program  : drastic16
 */


void FUN_0807b1a4(void)

{
  int iVar1;
  int iVar2;
  undefined auStack_b0 [8];
  char local_a8;
  undefined4 local_9c;
  
  if (DAT_081017d4 != (void *)0x0) {
    memset(DAT_081017d4,0,DAT_081017dc);
    munmap(DAT_081017d4,DAT_081017dc);
  }
  if (DAT_081017d8 != (void *)0x0) {
    memset(DAT_081017d8,0,DAT_081017e0);
    munmap(DAT_081017d8,DAT_081017e0);
    DAT_081017d8 = (void *)0x0;
  }
  iVar2 = DAT_081017cc;
  if (DAT_081017cc != -1) {
    iVar1 = ioctl(DAT_081017cc,0x40444f35,auStack_b0);
    if (iVar1 == 0) {
      if (local_a8 != '\0') {
        local_a8 = '\0';
        iVar2 = ioctl(iVar2,0x40444f34,auStack_b0);
        if (iVar2 != 0) {
          perror("IOCTL fbdev disable plane failed");
        }
      }
    }
    else {
      perror("IOCTL fbdev get plane info failed");
    }
    close(DAT_081017cc);
    DAT_081017cc = -1;
  }
  iVar2 = DAT_081017d0;
  if (DAT_081017d0 != -1) {
    ioctl(DAT_081017d0,0x4600,auStack_b0);
    local_9c = 0;
    ioctl(iVar2,0x4606,auStack_b0);
    close(DAT_081017d0);
    DAT_081017d0 = -1;
  }
  iVar2 = open("/dev/fb0",2);
  iVar1 = ioctl(iVar2,0x40444f34,&DAT_081016e0);
  if (iVar1 != 0) {
    perror("IOCTL fbdev set plane info failed");
  }
  iVar1 = ioctl(iVar2,0x40084f37,&DAT_08101724);
  if (iVar1 != 0) {
    perror("IOCTL fbdev set mem info failed");
  }
  iVar1 = ioctl(iVar2,0x4601,&DAT_0810172c);
  if (iVar1 != 0) {
    perror("IOCTL fbdev set overlay info failed");
  }
  close(iVar2);
  return;
}


