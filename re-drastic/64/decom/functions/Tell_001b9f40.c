/*
 * Ghidra decompilation
 *
 * Function : Tell
 * Address  : 001b9f40
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Archive::Tell() */

void Archive::Tell(void)

{
  char cVar1;
  long in_x0;
  longlong local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = QuickOpen::Tell((QuickOpen *)(in_x0 + 0x7630),&local_10);
  if (cVar1 == '\0') {
    local_10 = File::Tell();
  }
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_10,local_8 - ___stack_chk_guard,0);
  }
  return;
}


