/*
 * Ghidra decompilation
 *
 * Function : _ZN11CommandData16PreprocessSwitchEPKw.part.7
 * Address  : 0810521c
 * Program  : drastic
 */


/* DWARF original prototype: bool PreprocessSwitch(CommandData * this, wchar * Switch) */

bool __thiscall CommandData::PreprocessSwitch(CommandData *this,wchar *Switch)

{
  int iVar1;
  int iVar2;
  wchar *Src;
  char SwitchA [1024];
  
  iVar1 = __stack_chk_guard;
  Src = Switch + 1;
  WideToChar(Src,SwitchA,0x400);
  iVar2 = wcsicomp(Src,(wchar *)&DAT_08145678);
  if (iVar2 != 0) {
    iVar2 = wcsicomp(Src,(wchar *)&DAT_0814566c);
    if (iVar2 == 0) {
      (this->super_RAROptions).ConfigDisabled = true;
    }
    iVar2 = wcsnicomp(Src,(wchar *)&DAT_08145680,4);
    if (iVar2 == 0) {
      ProcessSwitch(this,Src);
      InitLogOptions((this->super_RAROptions).LogName,(this->super_RAROptions).ErrlogCharset);
    }
    iVar2 = wcsnicomp(Src,(wchar *)&DAT_08145694,2);
    if ((iVar2 == 0) && (ProcessSwitch(this,Src), (this->super_RAROptions).LogName[0] != 0)) {
      InitLogOptions((this->super_RAROptions).LogName,(this->super_RAROptions).ErrlogCharset);
    }
    iVar2 = 1;
  }
  if (iVar1 == __stack_chk_guard) {
    return SUB41(iVar2,0);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


