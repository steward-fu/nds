/*
 * Ghidra decompilation
 *
 * Function : _ZN7Archive11ViewCommentEv
 * Address  : 001baa60
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Archive::ViewComment() */

void Archive::ViewComment(void)

{
  ulong uVar1;
  wchar_t *pwVar2;
  char cVar3;
  Archive *in_x0;
  wchar_t *pwVar4;
  wchar_t *local_30;
  ulong local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(char *)(*(long *)(in_x0 + 0x7600) + 0xc25e) == '\0') {
    local_30 = (wchar_t *)0x0;
    local_28 = 0;
    uStack_20 = 0;
    local_18 = 0;
                    /* try { // try from 001baac4 to 001baafb has its CatchHandler @ 001bab14 */
    cVar3 = GetComment(in_x0,(Array *)&local_30);
    pwVar2 = local_30;
    if (cVar3 != '\0') {
      pwVar4 = wcschr(local_30,L'\x1a');
      uVar1 = (long)pwVar4 - (long)pwVar2 >> 2;
      if (pwVar4 == (wchar_t *)0x0) {
        uVar1 = local_28;
      }
      OutComment(pwVar2,uVar1);
    }
    if (local_30 != (wchar_t *)0x0) {
      free(local_30);
    }
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


