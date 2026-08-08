/*
 * Ghidra decompilation
 *
 * Function : FUN_0800586c
 * Address  : 0800586c
 * Program  : drastic16
 */


void FUN_0800586c(int param_1,undefined4 param_2)

{
  int iVar1;
  stat sStack_460;
  char acStack_408 [1032];
  
  snprintf(acStack_408,0x400,"%s%c%s",param_1 + 0x81c30,0x2f,param_2);
  printf("Checking directory %s: ",acStack_408);
  iVar1 = __xstat(3,acStack_408,&sStack_460);
  if (iVar1 == 0) {
    puts("It\'s there.");
    return;
  }
  puts("Doesn\'t exist, creating.");
  mkdir(acStack_408,0x1ed);
  return;
}


