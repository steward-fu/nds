/*
 * Ghidra decompilation
 *
 * Function : _ZN12ErrorHandler13GeneralErrMsgEPKwz
 * Address  : 080e2b20
 * Program  : drastic
 */


/* WARNING: Variable defined which should be unmapped: arglist */
/* DWARF original prototype: void GeneralErrMsg(ErrorHandler * this, wchar * fmt, ...) */

void __thiscall ErrorHandler::GeneralErrMsg(ErrorHandler *this,wchar *fmt,...)

{
  int iVar1;
  undefined4 in_r2;
  undefined4 in_r3;
  va_list arglist;
  wchar Msg [1024];
  wchar *fmt_local;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar1 = __stack_chk_guard;
  uStack_8 = in_r2;
  uStack_4 = in_r3;
  __vswprintf_chk(Msg,0x400,1,0x400,fmt,&uStack_8,&uStack_8);
  if (iVar1 == __stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


