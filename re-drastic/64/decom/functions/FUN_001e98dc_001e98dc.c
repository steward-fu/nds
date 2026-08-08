/*
 * Ghidra decompilation
 *
 * Function : FUN_001e98dc
 * Address  : 001e98dc
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001e98dc(CommandData *param_1)

{
  char cVar1;
  int iVar2;
  wchar_t *pwVar3;
  void *apvStack_c0 [23];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  StringList::StringList((StringList *)apvStack_c0);
  cVar1 = ReadTextFile(L".rarrc",(StringList *)apvStack_c0,true,false,0,false,false,false);
  if (cVar1 != '\0') {
    while (pwVar3 = (wchar_t *)StringList::GetString(), pwVar3 != (wchar_t *)0x0) {
      while (cVar1 = IsSpace(*pwVar3), cVar1 != '\0') {
        pwVar3 = pwVar3 + 1;
      }
      iVar2 = wcsnicomp(pwVar3,L"switches=",9);
      if (iVar2 == 0) {
        CommandData::ProcessSwitchesString(param_1,pwVar3 + 9);
      }
    }
  }
  if (apvStack_c0[0] != (void *)0x0) {
    free(apvStack_c0[0]);
  }
  if (lStack_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lStack_8 - ___stack_chk_guard,0);
  }
  return;
}


