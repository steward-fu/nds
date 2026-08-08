/*
 * Ghidra decompilation
 *
 * Function : ReadConfig
 * Address  : 001e98e0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CommandData::ReadConfig() */

void CommandData::ReadConfig(void)

{
  char cVar1;
  int iVar2;
  CommandData *in_x0;
  wchar_t *pwVar3;
  void *local_c0 [23];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  StringList::StringList((StringList *)local_c0);
                    /* try { // try from 001e993c to 001e9997 has its CatchHandler @ 001e99d8 */
  cVar1 = ReadTextFile(L".rarrc",(StringList *)local_c0,true,false,0,false,false,false);
  if (cVar1 != '\0') {
    while (pwVar3 = (wchar_t *)StringList::GetString(), pwVar3 != (wchar_t *)0x0) {
      while (cVar1 = IsSpace(*pwVar3), cVar1 != '\0') {
        pwVar3 = pwVar3 + 1;
      }
      iVar2 = wcsnicomp(pwVar3,L"switches=",9);
      if (iVar2 == 0) {
        ProcessSwitchesString(in_x0,pwVar3 + 9);
      }
    }
  }
  if (local_c0[0] != (void *)0x0) {
    free(local_c0[0]);
  }
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_8 - ___stack_chk_guard,0);
  }
  return;
}


