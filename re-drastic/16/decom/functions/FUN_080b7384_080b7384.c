/*
 * Ghidra decompilation
 *
 * Function : FUN_080b7384
 * Address  : 080b7384
 * Program  : drastic16
 */


void FUN_080b7384(int param_1,char param_2)

{
  code *pcVar1;
  
  *(char *)(param_1 + 8) = param_2;
  if (param_2 == '\0') {
    pcVar1 = (__sighandler_t)0x1;
  }
  else {
    pcVar1 = FUN_080b7308;
  }
  signal(2,pcVar1);
  if (param_2 == '\0') {
    pcVar1 = (__sighandler_t)0x1;
  }
  else {
    pcVar1 = FUN_080b7308;
  }
  signal(0xf,pcVar1);
  return;
}


