/*
 * Ghidra decompilation
 *
 * Function : FUN_08015824
 * Address  : 08015824
 * Program  : drastic16
 */


void FUN_08015824(int param_1,undefined4 param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(param_1 + 0x198);
  printf("scheduler state (%llx cycles in):\n",param_2,*(undefined4 *)(param_1 + 8),
         *(undefined4 *)(param_1 + 0xc));
  do {
    if (iVar1 == 0) {
      return;
    }
    printf("  event %s in %d cycles");
    printf("  (%llx)\n");
    bVar2 = *(int *)(iVar1 + 0xc) != iVar1;
    iVar1 = *(int *)(iVar1 + 0xc);
  } while (bVar2);
  puts("Found loop, terminating.");
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


