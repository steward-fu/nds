/*
 * Ghidra decompilation
 *
 * Function : FUN_0807b4cc
 * Address  : 0807b4cc
 * Program  : drastic16
 */


void FUN_0807b4cc(void)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int local_b0;
  int local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  int local_a0;
  int local_9c;
  undefined4 local_98;
  
  DAT_081017e4 = 0x1e0;
  if (DAT_081017d4 != (void *)0x0) {
    memset(DAT_081017d4,0,DAT_081017dc);
    munmap(DAT_081017d4,DAT_081017dc);
  }
  if (DAT_081017d8 != (void *)0x0) {
    memset(DAT_081017d8,0,DAT_081017e0);
    munmap(DAT_081017d8,DAT_081017e0);
    DAT_081017d8 = (void *)0x0;
  }
  if (DAT_081017cc != -1) {
    close(DAT_081017cc);
  }
  if (DAT_081017d0 != -1) {
    close(DAT_081017d0);
    DAT_081017d0 = -1;
  }
  DAT_081017cc = open("/dev/fb1",2);
  FUN_0807a0d0(DAT_081017cc,0x177000);
  iVar2 = DAT_081017cc;
  iVar1 = ioctl(DAT_081017cc,0x4600,&local_b0);
  if (iVar1 == 0) {
    local_b0 = 800;
    local_a8 = 800;
    local_ac = 0x1e0;
    local_a4 = 0x3c0;
    local_98 = 0x10;
    local_a0 = iVar1;
    local_9c = iVar1;
    iVar2 = ioctl(iVar2,0x4601,&local_b0);
    if (iVar2 != 0) {
      perror("IOCTL fbdev set overlay info failed");
    }
  }
  else {
    perror("IOCTL fbdev get overlay info failed");
  }
  iVar2 = DAT_081017cc;
  iVar1 = ioctl(DAT_081017cc,0x40444f35,&local_b0);
  if (iVar1 == 0) {
    local_a4 = 800;
    local_a0 = 0x1e0;
    local_a8 = CONCAT31(local_a8._1_3_,1);
    local_b0 = iVar1;
    local_ac = iVar1;
    iVar2 = ioctl(iVar2,0x40444f34,&local_b0);
    if (iVar2 != 0) {
      perror("IOCTL setup plane info failed");
    }
  }
  else {
    perror("IOCTL fbdev get plane info failed");
  }
  pvVar3 = mmap((void *)0x0,0x177000,2,1,DAT_081017cc,0);
  DAT_081017dc = 0x177000;
  if (pvVar3 == (void *)0xffffffff) {
    perror("fb_pixels_overlay mmap failed");
  }
  iVar2 = DAT_081017cc;
  DAT_081017f4 = (int)pvVar3 + 0xbb800;
  DAT_08101848 = 0x640;
  DAT_081017d4 = pvVar3;
  DAT_081017ec = pvVar3;
  ioctl(DAT_081017cc,0x4600,&local_b0);
  local_9c = 0;
  ioctl(iVar2,0x4606,&local_b0);
  DAT_08101808 = 0x10;
  DAT_08101800 = 1;
  return;
}


