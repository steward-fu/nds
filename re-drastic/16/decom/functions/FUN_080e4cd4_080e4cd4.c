/*
 * Ghidra decompilation
 *
 * Function : FUN_080e4cd4
 * Address  : 080e4cd4
 * Program  : drastic16
 */


void FUN_080e4cd4(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  char acStack_81c [2048];
  group *local_1c;
  passwd *local_18;
  int local_14;
  
  FUN_080afbc8(param_2,acStack_81c,0x800);
  local_14 = param_1 + 0x8430;
  if (*(char *)(param_1 + 0xc528) != '\0') {
    local_18 = getpwnam((char *)(param_1 + 0xc528));
    if (local_18 == (passwd *)0x0) {
      if (*(char *)(local_14 + 0x40f6) != '\x01') {
        uVar1 = FUN_080a0974(local_14 + 0x40f8);
        FUN_080a85d8(param_1 + 0x18,&DAT_080ef218,uVar1);
        FUN_080b7220(&DAT_081cd0a0,1);
        return;
      }
    }
    else {
      *(__uid_t *)(local_14 + 0x42f8) = local_18->pw_uid;
    }
  }
  if (*(char *)(local_14 + 0x41f8) != '\0') {
    local_1c = getgrnam((char *)(local_14 + 0x41f8));
    if (local_1c == (group *)0x0) {
      if (*(char *)(local_14 + 0x40f7) != '\x01') {
        uVar1 = FUN_080a0974(local_14 + 0x41f8);
        FUN_080a85d8(param_1 + 0x18,&DAT_080ef218,uVar1);
        FUN_080b7220(&DAT_081cd0a0,1);
        return;
      }
    }
    else {
      *(__gid_t *)(local_14 + 0x42fc) = local_1c->gr_gid;
    }
  }
  iVar2 = lchown(acStack_81c,*(__uid_t *)(local_14 + 0x42f8),*(__gid_t *)(local_14 + 0x42fc));
  if (iVar2 != 0) {
    FUN_080a85d8(param_1 + 0x18,&DAT_080ef218,param_2);
    FUN_080b7220(&DAT_081cd0a0,9);
  }
  return;
}


