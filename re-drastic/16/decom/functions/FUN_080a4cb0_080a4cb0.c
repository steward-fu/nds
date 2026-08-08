/*
 * Ghidra decompilation
 *
 * Function : FUN_080a4cb0
 * Address  : 080a4cb0
 * Program  : drastic16
 */


void FUN_080a4cb0(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  char acStack_814 [2048];
  utimbuf local_14;
  char local_a;
  char local_9;
  
  if ((param_2 == 0) || (iVar1 = FUN_080a510c(param_2), iVar1 == 0)) {
    local_9 = '\0';
  }
  else {
    local_9 = '\x01';
  }
  if ((param_3 == 0) || (iVar1 = FUN_080a510c(param_3), iVar1 == 0)) {
    local_a = '\0';
  }
  else {
    local_a = '\x01';
  }
  if ((local_9 != '\0') || (local_a != '\0')) {
    if (local_9 == '\0') {
      local_14.modtime = FUN_080b530c(param_3);
    }
    else {
      local_14.modtime = FUN_080b530c(param_2);
    }
    if (local_a == '\0') {
      local_14.actime = local_14.modtime;
    }
    else {
      local_14.actime = FUN_080b530c(param_3);
    }
    FUN_080afbc8(param_1,acStack_814,0x800);
    utime(acStack_814,&local_14);
  }
  return;
}


