/*
 * Ghidra decompilation
 *
 * Function : FUN_0807b014
 * Address  : 0807b014
 * Program  : drastic16
 */


void FUN_0807b014(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined auStack_b0 [20];
  undefined4 local_9c;
  
  iVar1 = DAT_081017cc;
  uVar2 = DAT_081017e4;
  if (DAT_081017fc == 0) {
    uVar2 = 0;
  }
  ioctl(DAT_081017cc,0x4600,auStack_b0);
  local_9c = uVar2;
  ioctl(iVar1,0x4606,auStack_b0);
  iVar1 = DAT_081017d0;
  if (DAT_081017d0 != -1) {
    uVar2 = DAT_081017e8;
    if (DAT_081017fc == 0) {
      uVar2 = 0;
    }
    ioctl(DAT_081017d0,0x4600,auStack_b0);
    local_9c = uVar2;
    ioctl(iVar1,0x4606,auStack_b0);
  }
  DAT_081017fc = DAT_081017fc ^ 1;
  if ((DAT_08101850 != 0) && (DAT_08101800 == 0)) {
    FUN_0807a374();
    return;
  }
  return;
}


