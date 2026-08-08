/*
 * Ghidra decompilation
 *
 * Function : FUN_080a1620
 * Address  : 080a1620
 * Program  : drastic16
 */


undefined4 FUN_080a1620(int param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    pcVar1 = getenv("HOME");
    if (pcVar1 == (char *)0x0) {
      FUN_080a0620(param_2,DAT_08101c50,param_3);
    }
    else {
      FUN_080a3a8c(pcVar1,0,param_2,param_3);
    }
    uVar2 = 1;
  }
  else if (param_1 - 1U < 5) {
    FUN_080a0620(param_2,(&DAT_08101c50)[param_1 - 1U],param_3);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


