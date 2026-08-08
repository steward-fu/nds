/*
 * Ghidra decompilation
 *
 * Function : FUN_080e49d4
 * Address  : 080e49d4
 * Program  : drastic16
 */


void FUN_080e49d4(int param_1,undefined4 param_2)

{
  size_t sVar1;
  int iVar2;
  char *__src;
  undefined4 uVar3;
  char acStack_1030 [2048];
  char acStack_830 [2048];
  __gid_t local_30;
  undefined4 local_2c;
  group *local_28;
  __uid_t local_24;
  passwd *local_20;
  size_t local_1c;
  int local_18;
  char *local_14;
  
  FUN_080afbc8(param_2,acStack_1030,0x800);
  local_14 = (char *)FUN_080a609c(param_1 + 0xe790,0);
  sVar1 = strlen(local_14);
  local_18 = sVar1 + 1;
  iVar2 = FUN_080a8838(param_1 + 0xe790);
  local_1c = iVar2 - local_18;
  __src = (char *)FUN_080a609c(param_1 + 0xe790,local_18);
  strncpy(acStack_830,__src,local_1c);
  acStack_830[local_1c] = '\0';
  local_20 = getpwnam(local_14);
  if (local_20 == (passwd *)0x0) {
    uVar3 = FUN_080a0974(local_14);
    FUN_080a85d8(param_1 + 0x18,&DAT_080ef218,uVar3);
    FUN_080b7220(&DAT_081cd0a0,1);
  }
  else {
    local_24 = local_20->pw_uid;
    local_28 = getgrnam(acStack_830);
    if (local_28 == (group *)0x0) {
      uVar3 = FUN_080a0974(acStack_830);
      FUN_080a85d8(param_1 + 0x18,&DAT_080ef218,uVar3);
      FUN_080b7220(&DAT_081cd0a0,1);
    }
    else {
      local_2c = FUN_080a59f4(param_2);
      local_30 = local_28->gr_gid;
      iVar2 = lchown(acStack_1030,local_24,local_30);
      if (iVar2 != 0) {
        FUN_080a85d8(param_1 + 0x18,&DAT_080ef218,param_2);
        FUN_080b7220(&DAT_081cd0a0,9);
      }
      FUN_080a5a7c(param_2,local_2c);
    }
  }
  return;
}


