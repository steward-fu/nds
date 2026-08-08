/*
 * Ghidra decompilation
 *
 * Function : FUN_08079e70
 * Address  : 08079e70
 * Program  : drastic16
 */


void FUN_08079e70(void)

{
  uint uVar1;
  int __fd;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  char acStack_98 [132];
  
  iVar4 = 0;
  iVar5 = 2;
  do {
    sprintf(acStack_98,"/dev/input/event%i",iVar4);
    __fd = open(acStack_98,0);
    if (__fd < 0) break;
    ioctl(__fd,0x80804506,acStack_98);
    iVar2 = strcmp(acStack_98,"gpio-keys");
    if (iVar2 == 0) {
      printf("got gpio-keys at device %s\n",acStack_98);
      uVar1 = fcntl(__fd,3);
      fcntl(__fd,4,uVar1 | 0x800);
      DAT_0aaf9120 = __fd;
LAB_08079eb4:
      iVar5 = iVar5 + -1;
    }
    else {
      iVar2 = strcmp(acStack_98,"keypad");
      if (iVar2 == 0) {
        printf("got keypad at device %s\n",acStack_98);
        uVar1 = fcntl(__fd,3);
        fcntl(__fd,4,uVar1 | 0x800);
        DAT_0aaf9128 = __fd;
        goto LAB_08079eb4;
      }
      close(__fd);
    }
    iVar4 = iVar4 + 1;
  } while (iVar5 != 0);
  pcVar3 = getenv("TSLIB_TSDEVICE");
  if (pcVar3 == (char *)0x0) {
    puts("ERROR: Do not have touchscreen device set ($TSLIB_TSDEVICE).");
    return;
  }
  printf("Using touchscreen at %s.\n",pcVar3);
  DAT_0aaf9124 = ts_open(pcVar3,1);
  if (DAT_0aaf9124 == 0) {
    puts("ERROR: Could not open touchscreen device.");
  }
  else {
    iVar4 = ts_config();
    if (iVar4 != 0) {
      puts("ERROR: ts_config failed.");
      return;
    }
  }
  return;
}


