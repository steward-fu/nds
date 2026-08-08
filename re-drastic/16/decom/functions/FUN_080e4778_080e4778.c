/*
 * Ghidra decompilation
 *
 * Function : FUN_080e4778
 * Address  : 080e4778
 * Program  : drastic16
 */


void FUN_080e4778(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  char acStack_824 [2048];
  __gid_t local_24;
  undefined4 local_20;
  group *local_1c;
  __uid_t local_18;
  passwd *local_14;
  
  FUN_080afbc8(param_2,acStack_824,0x800);
  if (*(char *)(param_1 + 0x10eac) == '\0') {
    piVar1 = __errno_location();
    *piVar1 = 0;
    local_14 = getpwnam((char *)(param_1 + 0x10b0c));
    if (local_14 == (passwd *)0x0) {
      uVar2 = FUN_080a0974(param_1 + 0x10b0c);
      FUN_080a85d8(param_1 + 0x18,&DAT_080ef218,uVar2);
      FUN_080b7478(&DAT_081cd0a0);
      FUN_080b7220(&DAT_081cd0a0,1);
    }
    else {
      local_18 = local_14->pw_uid;
      piVar1 = __errno_location();
      *piVar1 = 0;
      local_1c = getgrnam((char *)(param_1 + 0x10c0c));
      if (local_1c == (group *)0x0) {
        uVar2 = FUN_080a0974(param_1 + 0x10c0c);
        FUN_080a85d8(param_1 + 0x18,&DAT_080ef218,uVar2);
        FUN_080b7478(&DAT_081cd0a0);
        FUN_080b7220(&DAT_081cd0a0,3);
      }
      else {
        local_20 = FUN_080a59f4(param_2);
        local_24 = local_1c->gr_gid;
        iVar3 = lchown(acStack_824,local_18,local_24);
        if (iVar3 != 0) {
          FUN_080a85d8(param_1 + 0x18,&DAT_080ef218,param_2);
          FUN_080b7220(&DAT_081cd0a0,9);
        }
        FUN_080a5a7c(param_2,local_20);
      }
    }
  }
  else {
    FUN_080a85d8(param_1 + 0x18,&DAT_080ef218,param_2);
    FUN_080b7220(&DAT_081cd0a0,3);
  }
  return;
}


