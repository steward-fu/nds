/*
 * Ghidra decompilation
 *
 * Function : gamecard_initialize_homebrew
 * Address  : 0016e480
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gamecard_initialize_homebrew(long param_1)

{
  char *__s;
  int iVar1;
  size_t sVar2;
  long lVar3;
  long lVar4;
  char acStack_428 [1056];
  long local_8;
  
  lVar4 = *(long *)(param_1 + 0x918);
  lVar3 = *(long *)(nds_system + lVar4 + 0x30d8930);
  local_8 = ___stack_chk_guard;
  puts("Homebrew recognized. Setting up R4 flashcart emulation.");
  __s = (char *)(lVar3 + 0x3e0000);
  if (-1 < *(int *)(param_1 + 0x93c)) {
    close(*(int *)(param_1 + 0x93c));
  }
  __sprintf_chk(acStack_428,1,0x420,"%s%cdrastic_dldi.img",lVar4 + 0x8ab80,0x2f);
  iVar1 = open(acStack_428,2);
  *(int *)(param_1 + 0x93c) = iVar1;
  if (iVar1 < 0) {
    perror("Couldn\'t load drastic_dldi.img: ");
  }
  __sprintf_chk(__s,1,0xffffffffffffffff,"fat:/%s",lVar4 + 0x8af80);
  __printf_chk(1,"Using NitroFS path \'%s\'.\n",__s);
  *(undefined8 *)(polygon_sort_list_13776 + lVar3 + 0x15830) = 0x27e00005f617267;
  sVar2 = strlen(__s);
  *(int *)(polygon_sort_list_13776 + lVar3 + 0x15838) = (int)sVar2 + 1;
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


