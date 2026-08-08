/*
 * Ghidra decompilation
 *
 * Function : FUN_080a51f0
 * Address  : 080a51f0
 * Program  : drastic16
 */


undefined4 FUN_080a51f0(undefined4 param_1,char param_2,__mode_t param_3)

{
  int *piVar1;
  undefined4 uVar2;
  char acStack_810 [2048];
  int local_10;
  __mode_t local_c;
  
  FUN_080afbc8(param_1,acStack_810,0x800);
  if (param_2 == '\0') {
    param_3 = 0x1ff;
  }
  local_c = param_3;
  local_10 = mkdir(acStack_810,param_3);
  if (local_10 == -1) {
    piVar1 = __errno_location();
    if (*piVar1 == 2) {
      uVar2 = 2;
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


