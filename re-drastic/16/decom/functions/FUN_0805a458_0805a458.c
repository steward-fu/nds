/*
 * Ghidra decompilation
 *
 * Function : FUN_0805a458
 * Address  : 0805a458
 * Program  : drastic16
 */


void FUN_0805a458(int param_1)

{
  int iVar1;
  size_t sVar2;
  int iVar3;
  char *__s;
  int iVar4;
  char acStack_418 [1028];
  
  iVar4 = *(int *)(param_1 + 0x880);
  iVar3 = *(int *)(iVar4 + 0x25ab720);
  puts("Homebrew recognized. Setting up R4 flashcart emulation.");
  __s = (char *)(iVar3 + 0x3e0000);
  if (-1 < *(int *)(param_1 + 0x898)) {
    close(*(int *)(param_1 + 0x898));
  }
  sprintf(acStack_418,"%s%cdrastic_dldi.img",iVar4 + 0x82030,0x2f);
  iVar1 = open(acStack_418,2);
  *(int *)(param_1 + 0x898) = iVar1;
  if (iVar1 < 0) {
    perror("Couldn\'t load drastic_dldi.img: ");
  }
  sprintf(__s,"fat:/%s",iVar4 + 0x82430);
  printf("Using NitroFS path \'%s\'.\n",__s);
  *(undefined4 *)(iVar3 + 0x3ffe70) = 0x5f617267;
  *(undefined4 *)(iVar3 + 0x3ffe74) = 0x27e0000;
  sVar2 = strlen(__s);
  *(size_t *)(iVar3 + 0x3ffe78) = sVar2 + 1;
  return;
}


