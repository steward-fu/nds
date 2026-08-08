/*
 * Ghidra decompilation
 *
 * Function : save_state_thread_function
 * Address  : 001744e0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 save_state_thread_function(long param_1)

{
  int iVar1;
  void *__ptr;
  ulong uVar2;
  void *__ptr_00;
  uint local_c34;
  size_t local_c30;
  char acStack_c28 [1056];
  char acStack_808 [2048];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __ptr_00 = *(void **)(param_1 + 0x830);
  if ((*(uint *)(param_1 + 0x838) & 1) == 0) {
    fwrite(*(void **)(param_1 + 0x820),
           *(long *)(param_1 + 0x828) - (long)*(void **)(param_1 + 0x820),1,
           *(FILE **)(param_1 + 0x808));
  }
  else {
    local_c30 = compressBound(0x680000,&__stack_chk_guard,0);
    uVar2 = (*(long *)(param_1 + 0x828) - *(long *)(param_1 + 0x820)) - 0x40;
    __ptr = malloc(local_c30);
    iVar1 = compress(__ptr,&local_c30,(long)__ptr_00 + 0x40,uVar2);
    if (iVar1 != 0) {
      puts(" ERROR: Couldn\'t compress savestate.");
      free(__ptr);
      fclose(*(FILE **)(param_1 + 0x808));
      free(__ptr_00);
      *(undefined4 *)(param_1 + 0x83c) = 0;
      goto LAB_00174660;
    }
    fwrite(__ptr_00,0x40,1,*(FILE **)(param_1 + 0x808));
    local_c34 = (uint)local_c30;
    fwrite(&local_c34,4,1,*(FILE **)(param_1 + 0x808));
    __printf_chk(1," Compressed savestate from %d to %d bytes.\n",uVar2 & 0xffffffff,local_c34);
    fwrite(__ptr,(ulong)local_c34,1,*(FILE **)(param_1 + 0x808));
    free(__ptr);
  }
  fclose(*(FILE **)(param_1 + 0x808));
  free(__ptr_00);
  __sprintf_chk(acStack_c28,1,0x420,"%s%c%s",param_1,0x2f,"_savestate_temp.dss");
  __sprintf_chk(acStack_808,1,0x800,"%s%c%s",param_1,0x2f,param_1 + 0x400);
  __printf_chk(1,"Renaming savestate file to %s.\n",acStack_808);
  iVar1 = rename(acStack_c28,acStack_808);
  if (iVar1 != 0) {
    remove(acStack_808);
    rename(acStack_c28,acStack_808);
  }
  *(undefined4 *)(param_1 + 0x83c) = 0;
LAB_00174660:
  if (local_8 - ___stack_chk_guard == 0) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


