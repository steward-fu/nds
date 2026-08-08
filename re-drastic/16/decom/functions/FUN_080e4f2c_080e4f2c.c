/*
 * Ghidra decompilation
 *
 * Function : FUN_080e4f2c
 * Address  : 080e4f2c
 * Program  : drastic16
 */


undefined4 FUN_080e4f2c(char *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  char acStack_808 [2048];
  
  FUN_080a52ac(param_2,1);
  FUN_080a6018(param_2);
  FUN_080afbc8(param_2,acStack_808,0x800);
  iVar1 = symlink(param_1,acStack_808);
  if (iVar1 == -1) {
    piVar2 = __errno_location();
    if (*piVar2 == 0x11) {
      FUN_080a85d8(0,&DAT_080ef218,param_2);
    }
    else {
      FUN_080a85d8(0,&DAT_080ef218,param_2);
      FUN_080b7220(&DAT_081cd0a0,1);
    }
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}


