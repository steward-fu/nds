/*
 * Ghidra decompilation
 *
 * Function : PreprocessSwitch
 * Address  : 001e94f0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CommandData::PreprocessSwitch(wchar_t const*) [clone .part.0] */

void __thiscall CommandData::PreprocessSwitch(CommandData *this,wchar_t *param_1)

{
  wchar_t *pwVar1;
  int iVar2;
  undefined8 uVar3;
  char acStack_408 [1024];
  long local_8;
  
  pwVar1 = param_1 + 1;
  local_8 = ___stack_chk_guard;
  WideToChar(pwVar1,acStack_408,0x400);
  uVar3 = wcsicomp(pwVar1,L"-");
  if ((int)uVar3 != 0) {
    iVar2 = wcsicomp(pwVar1,L"cfg-");
    if (iVar2 == 0) {
      this[0x401c] = (CommandData)0x1;
    }
    iVar2 = wcsnicomp(pwVar1,L"ilog",4);
    if (iVar2 == 0) {
      ProcessSwitch(this,pwVar1);
      InitLogOptions((wchar_t *)(this + 0xa234),*(RAR_CHARSET *)(this + 0x8028));
    }
    iVar2 = wcsnicomp(pwVar1,L"sc",2);
    if ((iVar2 == 0) && (ProcessSwitch(this,pwVar1), *(int *)(this + 0xa234) != 0)) {
      InitLogOptions((wchar_t *)(this + 0xa234),*(RAR_CHARSET *)(this + 0x8028));
      uVar3 = 1;
    }
    else {
      uVar3 = 1;
    }
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3,local_8 - ___stack_chk_guard,0);
}


